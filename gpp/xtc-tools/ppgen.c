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
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_o_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_r_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_u_29;
ATerm term_j_29;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_u_21;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
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
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_e_9, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_v_10, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_a_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_m_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_z_11, term_a_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_x_12, term_a_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_r_13, term_y_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_l_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_j_16, term_k_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_p_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_h_23);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_c_19);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_t_19);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_a_32);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_d_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_t_19);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_o_31);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_t_19);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_t_19);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_t_19);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm d_6 (ATerm q_43, ATerm r_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm z_27, ATerm a_28, ATerm);
ATerm f_6 (ATerm n_72 (ATerm), ATerm e_184, ATerm h_28, ATerm);
ATerm j_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm);
ATerm g_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_6 (ATerm l_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_6 (ATerm z_86 (ATerm), ATerm y_44, ATerm w_44, ATerm);
ATerm c_8 (ATerm m_7, ATerm);
ATerm f_8 (ATerm o_7, ATerm p_7, ATerm s_7, ATerm);
ATerm p_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm k_6 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm c_35, ATerm b_35, ATerm);
ATerm l_6 (ATerm k_80 (ATerm), ATerm y_34, ATerm x_34, ATerm);
ATerm x_1 (ATerm);
ATerm m_6 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm);
ATerm n_6 (ATerm k_88 (ATerm), ATerm w_46, ATerm v_46, ATerm);
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm r_11 (ATerm l_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm f_28, ATerm);
ATerm p_6 (ATerm b_49, ATerm c_49, ATerm);
ATerm _2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_17 (ATerm v_15, ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm r_6 (ATerm b_25, ATerm c_25, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm s_6 (ATerm u_45, ATerm v_45, ATerm);
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm k_43, ATerm l_43, ATerm);
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_69 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm g_42, ATerm h_42, ATerm);
ATerm debug_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm i_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm p_47, ATerm q_47, ATerm);
ATerm x_6 (ATerm g_47, ATerm h_47, ATerm);
ATerm y_6 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm d_6 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm h_5 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_43, r_43);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = h_5;
      t = SSL_subtr(q_43, r_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  t = term_z_8;
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        t = term_e_9;
      }
    b_0 = t;
    t = term_e_9;
    n_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_e_9);
    t = d_6(b_0, n_0, t);
    o_0 = t;
    t = SSL_int_to_string(o_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_z_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_9;
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
      t = (ATerm) ATinsert(ATempty, term_k_9);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_k_9));
      t = q_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(z_27, a_28);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm f_6 (ATerm n_72 (ATerm), ATerm e_184, ATerm h_28, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_184, term_m_9);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, h_28);
  t = n_72(t);
  t = fclose_0_0(t);
  t = h_28;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if(match_cons(s_9, sym_Stream_1))
        {
          d_1 = ATgetArgument(s_9, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = f_6(j_1, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_90, y_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm g_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_execvp(v_24, w_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  d_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(e_3);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), x_0), term_u_9);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm r_1 = NULL,s_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_3 = ATgetArgument(t, 0);
          f_3 = ATgetArgument(t, 1);
          g_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_3);
      r_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_3), term_a_10), r_1), term_z_9), e_3);
      s_1 = t;
      t = SSL_concat_strings(s_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm o_3 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = s_76(t);
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(o_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm d_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_17), term_s_17), term_m_17), term_g_17), term_a_17), term_w_16), term_s_16), term_o_16), term_g_16), term_y_15), term_s_15), term_o_15), term_c_15), term_x_14), term_t_14), term_o_14), term_g_14), term_c_14), term_c_13), term_t_12), term_i_12), term_e_12), term_n_11), term_i_11), term_e_11), term_x_10), term_q_10), term_l_10);
        {
          ATerm l_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm x_17 = ATgetArgument(t, 0);
                if((q_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm y_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(l_1, t);
        }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, q_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  {
    ATerm z_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            i_4 = ATgetArgument(t, 1);
            {
              ATerm e_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
        {
          ATerm f_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_2 = t;
          t = term_g_18;
          b_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_i_18);
          d_2 = t;
          t = SSL_printnl(b_2, d_2);
          t = (ATerm) ATmakeAppl(sym__2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_i_18));
        }
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = z_17;
      }
    t = u_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  m_4 = t;
  t = fork_0_0(t);
  n_4 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_4;
        t = c_71(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = SSL_waitpid(n_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            if(((ATgetType(l_18) != AT_INT) || (ATgetInt((ATermInt) l_18) != 0)))
              _fail(t);
            {
              ATerm o_18 = ATgetArgument(t, 1);
            }
            {
              ATerm p_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  u_4 = t;
  t = o_90(t);
  t = xtc_find_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, u_4);
  {
    ATerm m_1 (ATerm t)
    {
      ATerm w_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_4, u_4);
      t = g_6(v_4, u_4, t);
      t = term_q_18;
      w_4 = t;
      t = SSL_exit(w_4);
      return(t);
    }
    t = fork_and_wait_1_0(m_1, t);
    t = u_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_5, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_76(t);
      }
    return(t);
  }
  t = i_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm a_5 = NULL,d_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_5 = ATgetFirst((ATermList) t);
            d_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_5;
        {
          ATerm n_1 (ATerm t)
          {
            t = d_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_1, t);
        }
      }
    }
  return(t);
}
ATerm u_6 (ATerm l_5, ATerm t)
{
  ATerm q_5 = NULL;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = t_5;
              return(t);
            }
            t = s_5;
            t = at_end_1_0(o_1, t);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = u_6(w_5, t);
          }
      }
    }
  else
    {
      t = u_6(w_5, t);
    }
  return(t);
}
ATerm i_6 (ATerm z_86 (ATerm), ATerm y_44, ATerm w_44, ATerm t)
{
  ATerm v_6 = NULL,z_6 = NULL,b_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  v_6 = t;
  t = z_86(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_6, y_44, w_44);
  t = y_6(z_6, y_44, w_44, t);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = term_c_19;
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_6, term_c_19);
        t = x_6(z_6, i_7, t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_7 = ATgetFirst((ATermList) t);
        e_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_19;
    f_7 = t;
    t = (ATerm) ATinsert(CheckATermList(e_7), (ATerm) ATinsert(CheckATermList(b_7), y_44));
    g_7 = t;
    t = SSL_table_put(z_6, f_7, g_7);
    t = v_6;
  }
  return(t);
}
ATerm c_8 (ATerm m_7, ATerm t)
{
  t = m_7;
  {
    ATerm d_19 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_19;
      }
    t = term_k_19;
    t = debug_1_0(p_1, t);
    t = (ATerm) ATmakeAppl(sym__2, m_7, term_m_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm f_8 (ATerm o_7, ATerm p_7, ATerm s_7, ATerm t)
{
  t = SSL_open_file(o_7, p_7);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_7 = NULL,a_8 = NULL,b_8 = NULL;
  x_7 = t;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_8(x_7, t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = f_8(a_8, b_8, x_7, t);
          }
      }
    }
  else
    {
      t = c_8(x_7, t);
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
  ATerm g_8 = NULL,h_8 = NULL;
  t = term_t_19;
  t = new_0_0(t);
  g_8 = t;
  t = term_u_19;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_8, term_u_19);
  t = w_6(g_8, h_8, t);
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL,m_8 = NULL;
        k_8 = t;
        t = (ATerm) ATinsert(ATempty, term_k_9);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, (ATerm) ATinsert(ATempty, term_k_9));
        t = q_6(k_8, m_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  t = new_file_0_0(t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_m_9);
  t = open_file_0_0(t);
  t = term_t_19;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_t_19);
  t = i_6(q_1, o_8, p_8, t);
  t = o_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_2 = NULL,m_2 = NULL;
      t = b_9;
      t = xtc_new_file_0_0(t);
      l_2 = t;
      t = m_0(t);
      m_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_b_20));
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
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_9;
      t = xtc_new_file_0_0(t);
      r_2 = t;
      t = m_0(t);
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_b_20), c_9), term_c_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(r_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,p_0 = NULL,q_0 = NULL;
  i_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_9);
  f_9 = t;
  t = g_9;
  t = x_68(t);
  h_9 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_9);
  p_0 = t;
  t = SSLsetAnnotations(p_0, f_9);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm e_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL,n_9 = NULL;
      l_9 = t;
      t = term_z_8;
      t = get_config_0_0(t);
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_9, term_v_10);
      t = geq_0_0(t);
      t = l_9;
      t = f_88(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = e_20;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(t_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  t = SSL_table_keys(o_9);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm p_9 = NULL,q_9 = NULL;
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
      t = x_6(o_9, p_9, t);
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, q_9);
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_9 = NULL,t_9 = NULL;
      r_9 = t;
      t = term_z_8;
      t = get_config_0_0(t);
      t_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_9, term_e_17);
      t = geq_0_0(t);
      t = r_9;
      t = h_88(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL,x_9 = NULL;
      v_9 = t;
      t = term_z_8;
      t = get_config_0_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, term_e_14);
      t = geq_0_0(t);
      t = v_9;
      t = g_88(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_9 = NULL,b_10 = NULL;
      y_9 = t;
      t = term_z_8;
      t = get_config_0_0(t);
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_10, term_a_11);
      t = geq_0_0(t);
      t = y_9;
      t = i_88(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
    }
  return(t);
}
ATerm k_6 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm c_35, ATerm b_35, ATerm t)
{
  t = o_80(t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm e_10 = NULL;
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_35, e_10);
      t = n_80(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = b_35;
  }
  return(t);
}
ATerm l_6 (ATerm k_80 (ATerm), ATerm y_34, ATerm x_34, ATerm t)
{
  t = y_34;
  {
    ATerm p_10 (ATerm t)
    {
      ATerm p_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_34;
          ;
          LocalPopChoice(q_20);
        }
      else
        {
          t = p_20;
          {
            ATerm s_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_10 = NULL,i_10 = NULL,k_10 = NULL;
                g_10 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_10 = ATgetFirst((ATermList) t);
                    k_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_10;
                {
                  ATerm w_1 (ATerm t)
                  {
                    t = x_34;
                    return(t);
                  }
                  t = k_6(k_80, w_1, i_10, k_10, t);
                  t = p_10(t);
                }
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = s_20;
                t = Cons_2_0(_id, p_10, t);
              }
          }
        }
      return(t);
    }
    t = p_10(t);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      if((z_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,u_10 = NULL;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            ATerm a_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
        t = x_6(m_46, n_46, t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = (ATerm) ATempty;
      }
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_10, o_46);
    t = l_6(x_1, s_10, o_46, t);
    u_10 = t;
    t = SSL_table_put(m_46, n_46, u_10);
    t = r_10;
  }
  return(t);
}
ATerm n_6 (ATerm k_88 (ATerm), ATerm w_46, ATerm v_46, ATerm t)
{
  t = v_46;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm b_11 = NULL,d_11 = NULL;
      if(match_cons(t, sym__2))
        {
          b_11 = ATgetArgument(t, 0);
          d_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, w_46, b_11, d_11);
      t = k_88(t);
      return(t);
    }
    t = map_1_0(y_1, t);
  }
  return(t);
}
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  t = SSL_access(t_48, u_48);
  return(t);
}
ATerm r_11 (ATerm l_11, ATerm t)
{
  t = SSL_fclose(l_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_11 = ATgetArgument(t, 0);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_11);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = r_11(p_11, t);
          }
      }
    }
  else
    {
      t = r_11(p_11, t);
    }
  return(t);
}
ATerm o_6 (ATerm f_28, ATerm t)
{
  t = SSL_read_term_from_stream(f_28);
  return(t);
}
ATerm p_6 (ATerm b_49, ATerm c_49, ATerm t)
{
  ATerm s_11 = NULL;
  t = SSL_fopen(b_49, c_49);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_11);
  return(t);
}
ATerm _2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,r_0 = NULL,s_0 = NULL;
  y_11 = t;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  t_11 = t;
  t = u_11;
  t = j_59(t);
  w_11 = t;
  t = v_11;
  t = k_59(t);
  x_11 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
  r_0 = t;
  t = SSLsetAnnotations(r_0, t_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_stdin_stream();
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_12 = NULL;
  t = SSL_stdout_stream();
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  t = SSL_stderr_stream();
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_12);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  t = SSL_is_string(q_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      ATerm f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_3 = NULL;
        k_12 = t;
        t = SSL_explode_term(k_12);
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_21 = ATgetArgument(t, 1);
              if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
                {
                  l_3 = ATgetFirst((ATermList) o_21);
                  {
                    ATerm p_21 = (ATerm) ATgetNext((ATermList) o_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm r_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_12 = NULL,m_12 = NULL;
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_12 = ATgetArgument(t, 0);
                  m_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_6(l_12, m_12, t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = r_21;
              {
                ATerm o_12 = NULL,p_12 = NULL;
                t = _2_0(c_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_12 = ATgetArgument(t, 0);
                    p_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_6(o_12, p_12, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_12 = NULL,w_12 = NULL,y_12 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12 = NULL;
      z_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_12, term_a_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = debug_1_0(e_2, t);
      _fail(t);
    }
  u_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(y_12, t);
  w_12 = t;
  t = u_12;
  t = fclose_0_0(t);
  t = w_12;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL,e_13 = NULL;
      b_13 = t;
      t = (ATerm) ATinsert(ATempty, term_n_22);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_13, (ATerm) ATinsert(ATempty, term_n_22));
      t = q_6(b_13, e_13, t);
      LocalPopChoice(m_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = t;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,g_13 = NULL;
                f_13 = t;
                t = (ATerm) ATinsert(ATempty, term_k_9);
                g_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_13, (ATerm) ATinsert(ATempty, term_k_9));
                t = q_6(f_13, g_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_22;
              }
            t = debug_1_0(f_2, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = debug_1_0(g_2, t);
          }
        t = (ATerm) ATempty;
      }
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
  t = term_u_22;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t = term_g_18;
  v_13 = t;
  t = (ATerm) ATinsert(ATempty, term_w_22);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = u_13;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm x_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__3))
    {
      x_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(x_13, z_13, a_14, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm b_14 = NULL,j_14 = NULL,k_14 = NULL;
  b_14 = t;
  t = term_g_18;
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, term_e_23);
  k_14 = t;
  t = SSL_printnl(j_14, k_14);
  t = b_14;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,q_14 = NULL;
  m_14 = t;
  t = term_g_18;
  n_14 = t;
  t = (ATerm) ATinsert(ATempty, term_w_22);
  q_14 = t;
  t = SSL_printnl(n_14, q_14);
  t = m_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  h_13 = t;
  t = if_verbose5_1_0(h_2, t);
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,t_13 = NULL;
        t = term_g_23;
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_13);
        t_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Imported_1, h_13));
        t = x_6(s_13, t_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
    i_13 = t;
    t = term_g_23;
    k_13 = t;
    t = term_h_23;
    l_13 = t;
    t = (ATerm) ATinsert(ATempty, h_13);
    m_13 = t;
    t = SSL_table_put(k_13, l_13, m_13);
    t = i_13;
    t = if_verbose4_1_0(j_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(n_2, t);
    j_13 = t;
    t = term_g_23;
    n_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_23, j_13);
    t = n_6(o_2, n_13, j_13, t);
    t = if_verbose6_1_0(p_2, t);
    t = term_g_23;
    o_13 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, h_13);
    p_13 = t;
    t = (ATerm) ATempty;
    q_13 = t;
    t = SSL_table_put(o_13, p_13, q_13);
    t = (ATerm) ATmakeAppl(sym__3, term_g_23, (ATerm)ATmakeAppl(sym_Imported_1, h_13), (ATerm) ATempty);
    t = if_verbose4_1_0(q_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              t = filter_1_0(b_84, t);
              return(t);
            }
            t = Cons_2_0(b_84, t_2, t);
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            {
              ATerm b_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_23 = ATgetFirst((ATermList) t);
                  b_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_15;
              t = filter_1_0(b_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm d_15 (ATerm t)
  {
    ATerm o_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85(t);
        t = d_15(t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = o_23;
      }
    return(t);
  }
  t = d_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_15 = NULL;
            t = term_m_24;
            e_15 = t;
            t = SSL_getenv(e_15);
            ;
            LocalPopChoice(j_24);
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
ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  t = term_g_23;
  m_15 = t;
  t = term_p_24;
  n_15 = t;
  t = term_q_24;
  t = x_6(m_15, n_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_24;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  t = if_verbose5_1_0(u_2, t);
  f_15 = t;
  {
    ATerm u_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = term_g_23;
        i_15 = t;
        t = term_h_23;
        j_15 = t;
        t = term_y_24;
        t = x_6(i_15, j_15, t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = u_24;
        {
          ATerm k_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_15 = t;
          t = repeat_1_0(w_2, t);
          t = k_15;
        }
      }
    t = f_15;
    t = if_verbose5_1_0(x_2, t);
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm d_17 (ATerm v_15, ATerm t)
{
  ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL;
  t = term_g_23;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_15);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Tool_1, v_15));
  t = x_6(a_16, b_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_25 = ATgetFirst((ATermList) t);
      if(match_cons(a_25, sym__2))
        {
          ATerm e_25 = ATgetArgument(a_25, 0);
          x_15 = ATgetArgument(a_25, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_15;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_g_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm c_16 = NULL,d_16 = NULL,i_16 = NULL;
        i_16 = t;
        if(match_cons(t, sym__2))
          {
            c_16 = ATgetArgument(t, 0);
            d_16 = ATgetArgument(t, 1);
            {
              ATerm i_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
                  t = term_g_23;
                  m_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, c_16);
                  n_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Tool_1, c_16));
                  t = x_6(m_16, n_16, t);
                  {
                    ATerm b_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((d_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            l_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(b_3, t);
                    t = not_null(l_16);
                  }
                  ;
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = i_25;
                  t = d_17(i_16, t);
                }
            }
          }
        else
          {
            t = d_17(i_16, t);
          }
        t = if_verbose5_1_0(c_3, t);
      }
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm c_17 = NULL,t_3 = NULL,w_3 = NULL;
        c_17 = t;
        t = term_g_18;
        t_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_25), c_17), term_l_25);
        w_3 = t;
        t = SSL_printnl(t_3, w_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_25), c_17), term_l_25);
        t = if_verbose5_1_0(i_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_25);
      {
        ATerm m_3 (ATerm t)
        {
          ATerm k_17 = NULL,l_17 = NULL;
          t = term_t_19;
          t = h_91(t);
          t = xtc_find_0_0(t);
          k_17 = t;
          t = term_t_19;
          t = pass_v_verbose_0_0(t);
          l_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(l_17), k_17), term_w_25), term_v_25);
          return(t);
        }
        t = xtc_transform_file_2_0(k_3, m_3, t);
      }
    }
  else
    {
      t = o_25;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_17 = NULL,r_17 = NULL;
          t = term_t_19;
          t = h_91(t);
          t = xtc_find_0_0(t);
          q_17 = t;
          t = term_t_19;
          t = pass_v_verbose_0_0(t);
          r_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_17), q_17), term_w_25), term_v_25);
          return(t);
        }
        t = xtc_transform_term_2_0(n_3, p_3, t);
      }
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(r_3, t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = h_26;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(d_26);
        t = xtc_transform_file_2_0(s_3, pass_verbose_0_0, t);
      }
    else
      {
        t = c_26;
        t = xtc_transform_term_2_0(v_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm a_18 = NULL,d_18 = NULL,h_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_18;
  if(match_cons(t, sym_AST_0))
    {
      t = h_18;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = h_18;
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_26 = t;
                int q_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(q_26);
                  }
                else
                  {
                    t = n_26;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(m_26);
                t = xtc_transform_file_2_0(x_3, pass_verbose_0_0, t);
              }
            else
              {
                t = l_26;
                t = xtc_transform_term_2_0(y_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = h_18;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = term_y_26;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  t = get_input_type_0_0(t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_18, m_18);
  t = pre_process_sdf_0_0(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(f_27);
          }
        else
          {
            t = d_27;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(c_27);
        t = xtc_transform_file_2_0(z_3, pass_verbose_0_0, t);
      }
    else
      {
        t = b_27;
        t = xtc_transform_term_2_0(a_4, pass_verbose_0_0, t);
      }
    {
      ATerm g_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = j_27;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(i_27);
          t = xtc_transform_file_2_0(b_4, pass_verbose_0_0, t);
        }
      else
        {
          t = g_27;
          t = xtc_transform_term_2_0(c_4, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm r_6 (ATerm b_25, ATerm c_25, ATerm t)
{
  t = SSL_copy(b_25, c_25);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL;
        t = a_19;
        t = k_0(t);
        r_4 = t;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_19, r_4);
          t = r_6(b_19, r_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_19);
        }
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = o_27;
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_5 = NULL;
              t = a_19;
              t = k_0(t);
              f_5 = t;
              {
                ATerm w_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_27 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = y_27;
                        {
                          ATerm d_28 = t;
                          int g_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(g_28);
                            }
                          else
                            {
                              t = d_28;
                              {
                                ATerm j_5 = NULL;
                                j_5 = t;
                                if((b_19 != t))
                                  {
                                    _fail(t);
                                  }
                                t = j_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, b_19, f_5);
                t = r_6(b_19, f_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_19);
              }
              ;
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              t = a_19;
              t = k_0(t);
              if((b_19 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_19);
            }
        }
      }
  }
  return(t);
}
ATerm s_6 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
        t = x_6(u_45, v_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_28 = ATgetFirst((ATermList) t);
            g_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_28);
        t = SSL_table_put(u_45, v_45, g_19);
        t = (ATerm) ATmakeAppl(sym__3, u_45, v_45, g_19);
      }
    else
      {
        t = j_28;
        t = SSL_table_remove(u_45, v_45);
        t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
      }
    t = f_19;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  i_19 = t;
  t = w_86(t);
  j_19 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        t = term_c_19;
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, term_c_19);
        t = x_6(j_19, o_19, t);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_19 = ATgetFirst((ATermList) t);
        l_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_19;
    n_19 = t;
    t = SSL_table_put(j_19, n_19, l_19);
    t = m_19;
    {
      ATerm d_4 (ATerm t)
      {
        ATerm q_19 = NULL;
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, q_19);
        t = s_6(j_19, q_19, t);
        return(t);
      }
      t = map_1_0(d_4, t);
      t = i_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_87(t);
      t = s_87(t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = s_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL,d_20 = NULL,f_20 = NULL;
  w_19 = t;
  t = v_86(t);
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, term_c_19);
  {
    ATerm v_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_28 = ATgetArgument(t, 0);
            ATerm z_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_19;
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_19, term_c_19);
        t = x_6(y_19, m_20, t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = v_28;
        t = (ATerm) ATempty;
      }
    a_20 = t;
    t = term_c_19;
    d_20 = t;
    t = (ATerm) ATinsert(CheckATermList(a_20), (ATerm) ATempty);
    f_20 = t;
    t = SSL_table_put(y_19, d_20, f_20);
    t = w_19;
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 = NULL;
      e_21 = t;
      t = SSL_remove(e_21);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm r_20 = NULL;
  t = begin_scope_1_0(e_4, t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm t_20 = NULL;
      t_20 = t;
      {
        ATerm f_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = NULL,v_20 = NULL;
            t = term_z_19;
            u_20 = t;
            t = term_c_19;
            v_20 = t;
            t = term_j_29;
            t = x_6(u_20, v_20, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = f_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_20 != NULL) && (r_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_20 = ATgetFirst((ATermList) t);
            {
              ATerm r_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(r_20);
        t = map_1_0(g_4, t);
        t = t_20;
        t = end_scope_1_0(h_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(a_90, f_4, t);
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = term_u_29;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm v_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL;
        t = term_c_20;
        t = get_config_0_0(t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_21);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = v_29;
        t = term_j_9;
      }
    t = b_90(t);
    t = copy_to_1_0(k_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,m_21 = NULL,n_21 = NULL,q_21 = NULL;
  j_21 = t;
  t = term_t_19;
  t = whoami_0_0(t);
  k_21 = t;
  t = term_g_18;
  m_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_30), k_21), term_c_30);
  n_21 = t;
  t = SSL_printnl(m_21, n_21);
  t = term_e_9;
  q_21 = t;
  t = SSL_exit(q_21);
  t = j_21;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_string(t, "-k"))
    {
      t = s_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_21;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = SSL_string_to_int(x_21);
  y_21 = t;
  t = term_g_30;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, y_21);
  t = a_7(z_21, y_21, t);
  t = x_21;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, o_4, p_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  if(match_string(t, "-S"))
    {
      t = b_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  t = term_z_8;
  e_22 = t;
  t = term_i_30;
  f_22 = t;
  t = term_j_30;
  t = a_7(e_22, f_22, t);
  t = term_k_30;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  t = SSL_string_to_int(g_22);
  h_22 = t;
  t = term_z_8;
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, h_22);
  t = a_7(i_22, h_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_22);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL;
  t = term_s_30;
  j_22 = t;
  t = term_t_19;
  l_22 = t;
  t = term_a_31;
  t = a_7(j_22, l_22, t);
  t = term_b_31;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, s_4, t_4, t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = g_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            t = Option_3_0(b_5, c_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  if(match_string(t, "-o"))
    {
      t = o_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_22;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  t = term_b_20;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, r_22);
  t = a_7(s_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_22);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, k_5, m_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
      t = term_t_19;
      t = j_0(t);
      b_23 = t;
      t = term_n_31;
      c_23 = t;
      t = term_o_31;
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_31, term_o_31, b_23);
      t = y_6(c_23, d_23, b_23, t);
      _fail(t);
    }
  else
    {
      ATerm n_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_22 = ATgetFirst((ATermList) t);
          a_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_22;
      t = h_0(t);
      t = z_22;
      t = i_0(t);
      n_23 = t;
      t = (ATerm) ATinsert(CheckATermList(a_23), n_23);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  if(match_string(t, "-i"))
    {
      t = p_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_23;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  t = term_c_20;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, q_23);
  t = a_7(r_23, q_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_23);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  t = term_x_26;
  t_23 = t;
  t = term_a_32;
  u_23 = t;
  t = term_b_32;
  t = a_7(t_23, u_23, t);
  t = s_23;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  t = term_x_26;
  x_23 = t;
  t = term_d_32;
  y_23 = t;
  t = term_e_32;
  t = a_7(x_23, y_23, t);
  t = w_23;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  t = term_k_32;
  z_23 = t;
  t = term_t_19;
  a_24 = t;
  t = term_p_32;
  t = a_7(z_23, a_24, t);
  t = term_q_32;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, x_5, y_5, t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_5, c_6, h_6, t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm w_32 = t;
              int x_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_option_0_0(t);
                  ;
                  LocalPopChoice(x_32);
                }
              else
                {
                  t = w_32;
                  {
                    ATerm y_32 = t;
                    int z_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = output_option_0_0(t);
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
                              t = Option_3_0(j_6, c_7, d_7, t);
                              ;
                              LocalPopChoice(b_33);
                            }
                          else
                            {
                              t = a_33;
                              {
                                ATerm c_33 = t;
                                int d_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = verbose_option_0_0(t);
                                    ;
                                    LocalPopChoice(d_33);
                                  }
                                else
                                  {
                                    t = c_33;
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
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_19;
  t = whoami_0_0(t);
  b_24 = t;
  t = term_g_18;
  c_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), b_24);
  d_24 = t;
  t = SSL_printnl(c_24, d_24);
  t = term_e_9;
  g_24 = t;
  t = SSL_exit(g_24);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_43, l_43);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = SSL_addr(k_43, l_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_82(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm k_24 = NULL,l_24 = NULL,o_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_24 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_24;
        t = foldr_2_0(y_82, z_82, t);
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_24, o_24);
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
ATerm h_7 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_6, b_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_24 = NULL,u_5 = NULL,v_5 = NULL;
  t = times_0_0(t);
  u_5 = t;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5;
  t = foldr_2_0(h_7, j_7, t);
  r_24 = t;
  t = SSL_TicksToSeconds(r_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_25 = NULL,q_25 = NULL,r_25 = NULL;
  j_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_25;
        if((q_25 != t))
          {
            _fail(t);
          }
        t = j_25;
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_25, r_25);
              ;
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = SSL_gtr(q_25, r_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL,x_25 = NULL;
      u_25 = t;
      t = term_z_8;
      t = get_config_0_0(t);
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, term_e_9);
      t = geq_0_0(t);
      t = u_25;
      t = d_88(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,e_26 = NULL,f_26 = NULL;
  t = run_time_0_0(t);
  z_25 = t;
  t = term_t_19;
  t = whoami_0_0(t);
  b_26 = t;
  t = term_g_18;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), z_25), term_z_9), b_26);
  f_26 = t;
  t = SSL_printnl(e_26, f_26);
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), z_25), term_z_9), b_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_30;
  g_26 = t;
  t = SSL_exit(g_26);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      t = fetch_1_0(l_7, t);
    }
  t = i_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_26 = ATgetFirst((ATermList) t);
      j_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_26 = NULL,p_26 = NULL;
        t = j_26;
        t = g_0(t);
        o_26 = t;
        t = i_26;
        t = e_0(t);
        p_26 = t;
        t = j_26;
        {
          ATerm n_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_26), p_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, n_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm e_69 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,u_0 = NULL,z_0 = NULL;
  w_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  r_26 = t;
  t = u_26;
  t = e_69(t);
  v_26 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_26);
  u_0 = t;
  t = SSLsetAnnotations(u_0, r_26);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_27), term_z_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_27 = NULL,h_27 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = fetch_1_0(q_7, t);
    }
  t = term_c_34;
  t = echo_0_0(t);
  t = term_n_31;
  e_27 = t;
  t = term_o_31;
  h_27 = t;
  t = term_d_34;
  t = x_6(e_27, h_27, t);
  t = reverse_acc_2_0(_id, r_7, t);
  t = map_1_0(t_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,p_27 = NULL,q_27 = NULL,f_1 = NULL,g_1 = NULL;
  q_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  l_27 = t;
  t = m_27;
  t = f_69(t);
  p_27 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_27);
  f_1 = t;
  t = SSLsetAnnotations(f_1, l_27);
  return(t);
}
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm x_27 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_76, _id, t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = Cons_2_0(_id, x_27, t);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL,i_28 = NULL;
  b_28 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_34 = ATgetFirst((ATermList) t);
                ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_28;
          }
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = (ATerm) ATinsert(ATempty, b_28);
      }
    e_28 = t;
    t = term_u_29;
    i_28 = t;
    t = SSL_printnl(i_28, e_28);
    t = b_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_strcat(g_42, h_42);
  return(t);
}
ATerm debug_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  m_28 = t;
  t = l_72(t);
  n_28 = t;
  t = term_g_18;
  o_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_28), n_28);
  p_28 = t;
  t = SSL_printnl(o_28, p_28);
  t = m_28;
  return(t);
}
ATerm map_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm q_28 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = Cons_2_0(g_76, q_28, t);
      }
    return(t);
  }
  t = q_28(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_28 = NULL;
      w_28 = t;
      t = SSL_is_string(w_28);
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_7, t);
            ;
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            {
              ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
              a_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_29 = ATgetArgument(t, 0);
                  t = b_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_29 = ATgetArgument(t, 0);
                      t = b_29;
                      {
                        ATerm t_34 = t;
                        int u_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_34);
                          }
                        else
                          {
                            t = t_34;
                            t = debug_1_0(v_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_29 = NULL,h_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_29 = ATgetArgument(t, 0);
                          c_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_29;
                      t = eval_config_0_0(t);
                      g_29 = t;
                      t = c_29;
                      t = eval_config_0_0(t);
                      h_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
                      t = w_6(g_29, h_29, t);
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
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  t = term_v_34;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_34, k_29);
  t = x_6(l_29, k_29, t);
  {
    ATerm w_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,n_29 = NULL;
        t = eval_config_0_0(t);
        m_29 = t;
        t = term_v_34;
        n_29 = t;
        t = SSL_table_put(n_29, k_29, m_29);
        t = m_29;
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = w_34;
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  t = term_a_35;
  o_29 = t;
  t = term_t_19;
  p_29 = t;
  t = term_d_35;
  t = a_7(o_29, p_29, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm q_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  t = term_a_35;
  q_29 = t;
  t = term_t_19;
  w_29 = t;
  t = term_d_35;
  t = a_7(q_29, w_29, t);
  t = term_h_20;
  x_29 = t;
  t = term_t_19;
  y_29 = t;
  t = term_f_35;
  t = a_7(x_29, y_29, t);
  t = term_g_35;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_7, y_7, z_7, t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = Option_3_0(d_8, e_8, i_8, t);
    }
  return(t);
}
ATerm a_7 (ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm z_29 = NULL;
  t = term_v_34;
  z_29 = t;
  t = SSL_table_put(z_29, p_47, q_47);
  t = (ATerm) ATmakeAppl(sym__3, term_v_34, p_47, q_47);
  return(t);
}
ATerm x_6 (ATerm g_47, ATerm h_47, ATerm t)
{
  t = SSL_table_get(g_47, h_47);
  return(t);
}
ATerm y_6 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm b_30 = NULL,d_30 = NULL,e_30 = NULL;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_35 = ATgetArgument(t, 0);
            ATerm n_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = x_6(p_45, q_45, t);
        ;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATempty;
      }
    d_30 = t;
    t = (ATerm) ATinsert(CheckATermList(d_30), o_45);
    e_30 = t;
    t = SSL_table_put(p_45, q_45, e_30);
    t = b_30;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
      t = term_t_19;
      t = d_0(t);
      o_30 = t;
      t = term_n_31;
      p_30 = t;
      t = term_o_31;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_31, term_o_31, o_30);
      t = y_6(p_30, q_30, o_30, t);
      _fail(t);
    }
  else
    {
      ATerm t_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = a_0(t);
      t = term_t_19;
      t = c_0(t);
      t_30 = t;
      t = (ATerm) ATinsert(CheckATermList(n_30), t_30);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,h_1 = NULL,i_1 = NULL;
  z_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  u_30 = t;
  t = v_30;
  t = y_63(t);
  x_30 = t;
  t = w_30;
  t = z_63(t);
  y_30 = t;
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(y_30), x_30);
  h_1 = t;
  t = SSLsetAnnotations(h_1, u_30);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  t = term_f_33;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, e_31);
  t = a_7(f_31, e_31, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_35;
        t = g_94(t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
      }
    t = d_31;
    {
      ATerm l_8 (ATerm t)
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_35 = t;
            int u_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_35);
              }
            else
              {
                t = t_35;
                t = g_94(t);
                t = Cons_2_0(_id, l_8, t);
              }
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm h_31 = NULL,i_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_31 = ATgetFirst((ATermList) t);
                  i_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_Undefined_1, h_31));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_8, l_8, t);
    }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  if(match_string(t, "--help"))
    {
      t = w_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_31;
        }
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_y_33;
  x_31 = t;
  t = term_t_19;
  y_31 = t;
  t = term_v_35;
  t = a_7(x_31, y_31, t);
  t = term_w_35;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  p_31 = t;
  t = term_n_31;
  s_31 = t;
  t = term_o_31;
  t_31 = t;
  t = (ATerm) ATempty;
  u_31 = t;
  t = SSL_table_put(s_31, t_31, u_31);
  t = p_31;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_94(t);
          ;
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, t_8, u_8, t);
                ;
                LocalPopChoice(b_36);
              }
            else
              {
                t = a_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_8, t);
    {
      ATerm c_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_32 = NULL;
          f_32 = t;
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_8 = NULL;
                t = f_32;
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = fetch_1_0(v_8, t);
                    }
                  t = f_32;
                  t = default_system_usage_0_0(t);
                  t = term_i_30;
                  r_8 = t;
                  t = SSL_exit(r_8);
                }
                ;
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                {
                  ATerm c_10 = NULL;
                  t = term_a_35;
                  t = get_config_0_0(t);
                  t = f_32;
                  t = default_system_about_0_0(t);
                  t = term_i_30;
                  c_10 = t;
                  t = SSL_exit(c_10);
                }
              }
          }
          ;
          LocalPopChoice(d_36);
        }
      else
        {
          t = c_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
                ATerm w_8 (ATerm t)
                {
                  ATerm x_8 (ATerm t)
                  {
                    if(((q_31 != NULL) && (q_31 != t)))
                      _fail(t);
                    else
                      q_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_8, t);
                  return(t);
                }
                t = fetch_1_0(w_8, t);
                t = term_g_18;
                g_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_31)), term_k_36);
                h_32 = t;
                t = SSL_printnl(g_32, h_32);
                t = (ATerm) ATmakeAppl(sym__2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_31)), term_k_36));
                t = default_system_usage_0_0(t);
                t = term_e_9;
                i_32 = t;
                t = SSL_exit(i_32);
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
              }
          }
        }
      r_31 = t;
      t = term_n_31;
      v_31 = t;
      t = SSL_table_destroy(v_31);
      t = r_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  t = parse_options_1_0(k_92, t);
  l_32 = t;
  t = term_l_36;
  m_32 = t;
  t = SSL_table_create(m_32);
  t = term_l_36;
  n_32 = t;
  t = term_m_36;
  o_32 = t;
  t = SSL_table_put(n_32, o_32, l_32);
  t = l_32;
  t = m_92(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_92, t);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, y_8, t);
  return(t);
}
