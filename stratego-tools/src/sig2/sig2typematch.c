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
Symbol sym_Module_0;
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
  sym_Module_0 = ATmakeSymbol("Module", 0, ATfalse);
  ATprotectSymbol(sym_Module_0);
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
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_e_33;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_f_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_h_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_s_26;
ATerm term_j_26;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_y_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_n_20;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
void init_constant_terms (void)
{
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_q_9, term_k_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_s_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_z_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_o_11, term_p_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_q_13, term_r_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_e_14, term_h_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_p_14, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_v_14, term_z_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_p_15, term_q_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_e_16, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_u_17, term_w_17);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_h_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_q_21);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_h_23);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_l_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_v_23);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_v_24);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_q_28);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_v_23);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_v_23);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_v_23);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_v_23);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2typematch", 0, ATtrue));
}
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm pp_astratego_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm j_6 (ATerm v_27, ATerm w_27, ATerm);
ATerm k_6 (ATerm i_72 (ATerm), ATerm u_187, ATerm d_28, ATerm);
ATerm c_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm l_6 (ATerm r_24, ATerm s_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm x_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm o_6 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm y_34, ATerm x_34, ATerm);
ATerm p_6 (ATerm f_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm n_1 (ATerm);
ATerm q_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm);
ATerm r_6 (ATerm f_88 (ATerm), ATerm s_46, ATerm r_46, ATerm);
ATerm o_10 (ATerm h_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_6 (ATerm b_28, ATerm);
ATerm t_6 (ATerm x_48, ATerm y_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_13 (ATerm i_11, ATerm);
ATerm p_13 (ATerm r_11, ATerm s_11, ATerm t_11, ATerm);
ATerm s_13 (ATerm s_12, ATerm t_12, ATerm u_12, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm d_19 (ATerm h_18, ATerm);
ATerm a_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm u_6 (ATerm u_86 (ATerm), ATerm u_44, ATerm s_44, ATerm);
ATerm s_20 (ATerm w_19, ATerm);
ATerm t_20 (ATerm a_20, ATerm g_20, ATerm h_20, ATerm);
ATerm m_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm v_6 (ATerm p_48, ATerm q_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm pass_includes_0_0 (ATerm);
ATerm w_6 (ATerm m_43, ATerm n_43, ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm str2astratego_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm pre_process_input_0_0 (ATerm);
ATerm y_6 (ATerm x_24, ATerm y_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm z_6 (ATerm q_45, ATerm r_45, ATerm);
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_7 (ATerm l_47, ATerm m_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm g_31 (ATerm q_30, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_6 (ATerm r_47, ATerm q_47, ATerm);
ATerm f_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm include_option_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm input_type_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm g_43, ATerm h_43, ATerm);
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm need_help_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_7 (ATerm c_42, ATerm d_42, ATerm);
ATerm debug_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_7 (ATerm c_47, ATerm d_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_93 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm parse_options_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm o_1 = NULL;
  t = term_z_8;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_1), term_a_9);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm p_1 = NULL;
  t = term_z_8;
  t = xtc_find_0_0(t);
  p_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_1), term_a_9);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm pp_astratego_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL,a_1 = NULL;
      a_1 = t;
      if(match_cons(t, sym_FILE_1))
        {
          y_0 = ATgetArgument(t, 0);
          {
            ATerm o_0 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(a_1);
            o_0 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
            n_0 = t;
            t = SSLsetAnnotations(n_0, o_0);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_1;
        }
      LocalPopChoice(e_9);
      t = xtc_transform_file_2_0(b_0, pass_verbose_0_0, t);
    }
  else
    {
      t = d_9;
      t = xtc_transform_term_2_0(f_0, pass_verbose_0_0, t);
    }
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,m_1 = NULL;
        m_1 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_1 = ATgetArgument(t, 0);
            {
              ATerm d_1 = NULL,t_0 = NULL;
              t = SSLgetAnnotations(m_1);
              d_1 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              t_0 = t;
              t = SSLsetAnnotations(t_0, d_1);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_1;
          }
        LocalPopChoice(g_9);
        t = xtc_transform_file_2_0(p_0, q_0, t);
      }
    else
      {
        t = f_9;
        t = xtc_transform_term_2_0(r_0, s_0, t);
      }
    {
      ATerm i_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_2 = NULL,i_2 = NULL;
          i_2 = t;
          if(match_cons(t, sym_FILE_1))
            {
              c_2 = ATgetArgument(t, 0);
              {
                ATerm w_1 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(i_2);
                w_1 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_2);
                u_0 = t;
                t = SSLsetAnnotations(u_0, w_1);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = i_2;
            }
          LocalPopChoice(k_9);
          t = xtc_transform_file_2_0(v_0, w_0, t);
        }
      else
        {
          t = i_9;
          t = xtc_transform_term_2_0(x_0, z_0, t);
        }
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  t = term_m_9;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = term_q_9;
      }
    p_2 = t;
    t = term_q_9;
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_2, term_q_9);
    t = w_6(p_2, r_2, t);
    q_2 = t;
    t = SSL_int_to_string(q_2);
    o_2 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, o_2), term_m_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_9);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATempty, term_s_9));
      t = v_6(u_2, y_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm j_6 (ATerm v_27, ATerm w_27, ATerm t)
{
  ATerm z_2 = NULL;
  t = SSL_write_term_to_stream_baf(v_27, w_27);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_2);
  return(t);
}
ATerm k_6 (ATerm i_72 (ATerm), ATerm u_187, ATerm d_28, ATerm t)
{
  ATerm b_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_187, term_w_9);
  t = open_stream_0_0(t);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, d_28);
  t = i_72(t);
  t = fclose_0_0(t);
  t = d_28;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          e_3 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(e_3, f_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL;
  c_3 = t;
  t = xtc_new_file_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_3, c_3);
  t = k_6(c_1, d_3, c_3, t);
  t = SSL_close_file(d_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_90, t_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm l_6 (ATerm r_24, ATerm s_24, ATerm t)
{
  t = SSL_execvp(r_24, s_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_4 = ATgetArgument(t, 0);
      {
        ATerm g_2 = NULL,h_2 = NULL;
        t = SSL_int_to_string(i_4);
        g_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_10), g_2), term_y_9);
        h_2 = t;
        t = SSL_concat_strings(h_2);
      }
    }
  else
    {
      ATerm j_3 = NULL,k_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_4 = ATgetArgument(t, 0);
          j_4 = ATgetArgument(t, 1);
          k_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_4);
      j_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_4), term_d_10), j_3), term_c_10), i_4);
      k_3 = t;
      t = SSL_concat_strings(k_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm p_4 = NULL;
  ATerm e_1 (ATerm t)
  {
    t = n_76(t);
    if(((p_4 != NULL) && (p_4 != t)))
      _fail(t);
    else
      p_4 = t;
    return(t);
  }
  t = fetch_1_0(e_1, t);
  t = not_null(p_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_4 = NULL;
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_10 = ATgetArgument(t, 0);
              if(((q_4 != NULL) && (q_4 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_4 = ATgetArgument(t, 1);
              {
                ATerm i_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_17), term_r_17), term_l_17), term_g_17), term_c_17), term_u_16), term_q_16), term_l_16), term_h_16), term_a_16), term_u_15), term_i_15), term_b_15), term_r_14), term_k_14), term_x_13), term_j_13), term_d_13), term_v_12), term_o_12), term_j_12), term_e_12), term_x_11), term_q_11), term_j_11), term_c_11), term_w_10), term_n_10);
        t = fetch_elem_1_0(f_1, t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(q_4));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_4 = NULL,d_5 = NULL;
  u_4 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            d_5 = ATgetArgument(t, 1);
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        {
          ATerm g_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL,f_4 = NULL,l_4 = NULL;
              t = d_5;
              {
                ATerm p_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_18;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                y_3 = t;
                t = term_q_18;
                f_4 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, y_3), term_s_18);
                l_4 = t;
                t = SSL_printnl(f_4, l_4);
                t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, y_3), term_s_18));
              }
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = g_18;
              t = u_4;
            }
        }
      }
    else
      {
        t = c_18;
        t = u_4;
      }
    t = u_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  q_5 = t;
  t = fork_0_0(t);
  p_5 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_5;
        t = x_70(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = SSL_waitpid(p_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            if(((ATgetType(x_18) != AT_INT) || (ATgetInt((ATermInt) x_18) != 0)))
              _fail(t);
            {
              ATerm y_18 = ATgetArgument(t, 1);
            }
            {
              ATerm z_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm u_5 = NULL,v_5 = NULL;
    u_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_5), u_5);
    t = e_7(not_null(s_5), u_5, t);
    v_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
    return(t);
  }
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  t = SSL_table_keys(not_null(s_5));
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_6, term_e_17);
        t = geq_0_0(t);
        t = z_5;
        t = c_88(t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = z_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  {
    ATerm e_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        l_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_g_13);
        t = geq_0_0(t);
        t = n_6;
        t = b_88(t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = e_19;
        t = n_6;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm p_7 = NULL;
  p_7 = t;
  {
    ATerm k_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_e_11);
        t = geq_0_0(t);
        t = p_7;
        t = d_88(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = k_19;
        t = p_7;
      }
  }
  return(t);
}
ATerm o_6 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm y_34, ATerm x_34, ATerm t)
{
  t = j_80(t);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm z_7 = NULL;
      z_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), z_7);
      t = i_80(t);
      return(t);
    }
    t = fetch_1_0(k_1, t);
    t = not_null(x_34);
  }
  return(t);
}
ATerm p_6 (ATerm f_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm p_8 = NULL,s_8 = NULL,t_8 = NULL;
    p_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(t_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_8 = ATgetFirst((ATermList) t);
            t_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_8;
              {
                ATerm l_1 (ATerm t)
                {
                  t = not_null(t_34);
                  return(t);
                }
                t = o_6(f_80, l_1, not_null(s_8), not_null(t_8), t);
                t = b_9(t);
              }
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = o_19;
              {
                ATerm x_4 = NULL,g_5 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(p_8);
                x_4 = t;
                t = t_8;
                t = b_9(t);
                g_5 = t;
                t = (ATerm) ATinsert(CheckATermList(g_5), s_8);
                b_1 = t;
                t = SSLsetAnnotations(b_1, x_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(u_34);
  t = b_9(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      if((t_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL,l_9 = NULL;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            ATerm y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = e_7(i_46, j_46, t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = (ATerm) ATempty;
      }
    l_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_9, k_46);
    t = p_6(n_1, l_9, k_46, t);
    j_9 = t;
    t = SSL_table_put(i_46, j_46, j_9);
    t = h_9;
  }
  return(t);
}
ATerm r_6 (ATerm f_88 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm u_9 = NULL,v_9 = NULL;
    if(match_cons(t, sym__2))
      {
        u_9 = ATgetArgument(t, 0);
        v_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(s_46), u_9, v_9);
    t = f_88(t);
    return(t);
  }
  t = not_null(r_46);
  t = map_1_0(q_1, t);
  return(t);
}
ATerm o_10 (ATerm h_10, ATerm t)
{
  t = SSL_fclose(h_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_10 = ATgetArgument(t, 0);
      {
        ATerm z_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_10);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = z_19;
            t = o_10(m_10, t);
          }
      }
    }
  else
    {
      t = o_10(m_10, t);
    }
  return(t);
}
ATerm s_6 (ATerm b_28, ATerm t)
{
  t = SSL_read_term_from_stream(b_28);
  return(t);
}
ATerm t_6 (ATerm x_48, ATerm y_48, ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_fopen(x_48, y_48);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = SSL_stdin_stream();
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  t = SSL_stdout_stream();
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  t = SSL_stderr_stream();
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_10);
  return(t);
}
ATerm o_13 (ATerm i_11, ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_explode_term(i_11);
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            m_11 = ATgetFirst((ATermList) d_20);
            {
              ATerm e_20 = (ATerm) ATgetNext((ATermList) d_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_13 (ATerm r_11, ATerm s_11, ATerm t_11, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,l_12 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(t_11);
  c_12 = t;
  t = r_11;
  if(match_cons(t, sym_Path_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, s_11);
  g_1 = t;
  t = SSLsetAnnotations(g_1, c_12);
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_12, b_12, t);
  return(t);
}
ATerm s_13 (ATerm s_12, ATerm t_12, ATerm u_12, ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,b_13 = NULL,i_13 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(u_12);
  b_13 = t;
  t = SSL_is_string(s_12);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, t_12);
  h_1 = t;
  t = SSLsetAnnotations(h_1, b_13);
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(x_12, y_12, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      ATerm i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_13 = t;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_13(l_13, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_13(m_13, n_13, l_13, t);
                  ;
                  LocalPopChoice(m_20);
                }
              else
                {
                  t = l_20;
                  t = s_13(m_13, n_13, l_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_13(l_13, t);
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  ATerm o_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL;
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_13, term_y_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = o_20;
      t = debug_1_0(s_1, t);
      _fail(t);
    }
  u_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(v_13, t);
  t_13 = t;
  t = u_13;
  t = fclose_0_0(t);
  t = t_13;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_13 = NULL,a_14 = NULL;
      z_13 = t;
      t = (ATerm) ATinsert(ATempty, term_e_21);
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_13, (ATerm) ATinsert(ATempty, term_e_21));
      t = v_6(z_13, a_14, t);
      LocalPopChoice(d_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_21;
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_21 = t;
            if((PushChoice() == 0))
              {
                ATerm b_14 = NULL,c_14 = NULL;
                b_14 = t;
                t = (ATerm) ATinsert(ATempty, term_s_9);
                c_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATinsert(ATempty, term_s_9));
                t = v_6(b_14, c_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_21;
              }
            t = debug_1_0(u_1, t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = debug_1_0(v_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = term_q_18;
  l_15 = t;
  t = (ATerm) ATinsert(ATempty, term_m_21);
  m_15 = t;
  t = SSL_printnl(l_15, m_15);
  t = k_15;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__3))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      r_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(n_15, o_15, r_15, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,v_15 = NULL;
  s_15 = t;
  t = term_q_18;
  t_15 = t;
  t = (ATerm) ATinsert(ATempty, term_n_21);
  v_15 = t;
  t = SSL_printnl(t_15, v_15);
  t = s_15;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm w_15 = NULL,c_16 = NULL,d_16 = NULL;
  w_15 = t;
  t = term_q_18;
  c_16 = t;
  t = (ATerm) ATinsert(ATempty, term_m_21);
  d_16 = t;
  t = SSL_printnl(c_16, d_16);
  t = w_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,s_14 = NULL,u_14 = NULL,w_14 = NULL,y_14 = NULL;
  f_14 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL,h_15 = NULL;
        t = term_p_21;
        a_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_14);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATmakeAppl(sym_Imported_1, f_14));
        t = e_7(a_15, h_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
    i_14 = t;
    t = term_p_21;
    u_14 = t;
    t = term_q_21;
    w_14 = t;
    t = (ATerm) ATinsert(ATempty, f_14);
    y_14 = t;
    t = SSL_table_put(u_14, w_14, y_14);
    t = i_14;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_2, t);
    g_14 = t;
    t = term_p_21;
    s_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_21, g_14);
    t = r_6(d_2, s_14, g_14, t);
    t = if_verbose6_1_0(e_2, t);
    t = term_p_21;
    m_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, f_14);
    n_14 = t;
    t = (ATerm) ATempty;
    o_14 = t;
    t = SSL_table_put(m_14, n_14, o_14);
    t = (ATerm) ATmakeAppl(sym__3, term_p_21, (ATerm)ATmakeAppl(sym_Imported_1, f_14), (ATerm) ATempty);
    t = if_verbose4_1_0(f_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,z_16 = NULL;
  v_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_16 = ATgetFirst((ATermList) t);
          z_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,g_7 = NULL,i_7 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(v_16);
            i_6 = t;
            t = w_16;
            t = w_83(t);
            g_7 = t;
            t = z_16;
            t = filter_1_0(w_83, t);
            i_7 = t;
            t = (ATerm) ATinsert(CheckATermList(i_7), g_7);
            r_1 = t;
            t = SSLsetAnnotations(r_1, i_6);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = z_16;
            t = filter_1_0(w_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm o_17 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_85(t);
        t = o_17(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_17 = NULL;
            t = term_e_22;
            p_17 = t;
            t = SSL_getenv(p_17);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  t = term_p_21;
  a_18 = t;
  t = term_h_22;
  b_18 = t;
  t = term_j_22;
  t = e_7(a_18, b_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = if_verbose5_1_0(k_2, t);
  t_17 = t;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_17 = NULL,y_17 = NULL;
        t = term_p_21;
        v_17 = t;
        t = term_q_21;
        y_17 = t;
        t = term_o_22;
        t = e_7(v_17, y_17, t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm z_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_17 = t;
          t = repeat_1_0(m_2, t);
          t = z_17;
        }
      }
    t = t_17;
    t = if_verbose5_1_0(s_2, t);
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm d_19 (ATerm h_18, ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  t = term_p_21;
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_18);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATmakeAppl(sym_Tool_1, h_18));
  t = e_7(k_18, l_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_22 = ATgetFirst((ATermList) t);
      if(match_cons(q_22, sym__2))
        {
          ATerm s_22 = ATgetArgument(q_22, 0);
          j_18 = ATgetArgument(q_22, 1);
        }
      else
        _fail(t);
      {
        ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_18;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_p_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
      t = if_verbose5_1_0(v_2, t);
      t = xtc_load_0_0(t);
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      if(match_cons(t, sym__2))
        {
          m_18 = ATgetArgument(t, 0);
          n_18 = ATgetArgument(t, 1);
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_18 = NULL,t_18 = NULL,u_18 = NULL;
                t = term_p_21;
                if(((t_18 != NULL) && (t_18 != t)))
                  _fail(t);
                else
                  t_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_18));
                if(((u_18 != NULL) && (u_18 != t)))
                  _fail(t);
                else
                  u_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_18)));
                t = e_7(not_null(t_18), not_null(u_18), t);
                {
                  ATerm x_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((n_18 != NULL) && (n_18 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          n_18 = ATgetArgument(t, 0);
                        if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(x_2, t);
                  t = not_null(r_18);
                }
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = d_19(not_null(o_18), t);
              }
          }
        }
      else
        {
          t = d_19(not_null(o_18), t);
        }
      t = if_verbose5_1_0(a_3, t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm c_19 = NULL,u_7 = NULL,v_7 = NULL;
        c_19 = t;
        t = term_q_18;
        u_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), c_19), term_y_22);
        v_7 = t;
        t = SSL_printnl(u_7, v_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), c_19), term_y_22);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  t = j_90(t);
  t = xtc_find_0_0(t);
  if(((f_19 != NULL) && (f_19 != t)))
    _fail(t);
  else
    f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(g_19));
  {
    ATerm l_3 (ATerm t)
    {
      ATerm i_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(g_19));
      t = l_6(not_null(f_19), not_null(g_19), t);
      t = term_b_23;
      i_19 = t;
      t = SSL_exit(i_19);
      return(t);
    }
    t = fork_and_wait_1_0(l_3, t);
    t = not_null(g_19);
  }
  return(t);
}
ATerm u_6 (ATerm u_86 (ATerm), ATerm u_44, ATerm s_44, ATerm t)
{
  ATerm j_19 = NULL,l_19 = NULL,n_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  t = u_86(t);
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_19, u_44, s_44);
  t = f_7(j_19, u_44, s_44, t);
  {
    ATerm e_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL;
        t = term_h_23;
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, term_h_23);
        t = e_7(j_19, s_19, t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_19 = ATgetFirst((ATermList) t);
        n_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_23;
    q_19 = t;
    t = (ATerm) ATinsert(CheckATermList(n_19), (ATerm) ATinsert(CheckATermList(l_19), u_44));
    r_19 = t;
    t = SSL_table_put(j_19, q_19, r_19);
    t = p_19;
  }
  return(t);
}
ATerm s_20 (ATerm w_19, ATerm t)
{
  t = w_19;
  {
    ATerm i_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_23;
      }
    t = term_r_23;
    t = debug_1_0(m_3, t);
    t = (ATerm) ATmakeAppl(sym__2, w_19, term_w_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm t_20 (ATerm a_20, ATerm g_20, ATerm h_20, ATerm t)
{
  t = SSL_open_file(a_20, g_20);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_20(p_20, t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = t_20(q_20, r_20, p_20, t);
          }
      }
    }
  else
    {
      t = s_20(p_20, t);
    }
  return(t);
}
ATerm v_6 (ATerm p_48, ATerm q_48, ATerm t)
{
  t = SSL_access(p_48, q_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  t = term_v_23;
  t = new_0_0(t);
  v_20 = t;
  t = term_w_23;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, term_w_23);
  t = d_7(v_20, w_20, t);
  x_20 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        t = (ATerm) ATinsert(ATempty, term_s_9);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_20, (ATerm) ATinsert(ATempty, term_s_9));
        t = v_6(x_20, a_21, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = x_20;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  t = new_file_0_0(t);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_21, term_w_9);
  t = open_file_0_0(t);
  t = term_v_23;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_21, term_v_23);
  t = u_6(o_3, j_21, k_21, t);
  t = j_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_8 = NULL,b_8 = NULL;
      t = x_21;
      t = xtc_new_file_0_0(t);
      a_8 = t;
      t = m_0(t);
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, (ATerm) ATinsert(ATinsert(ATempty, a_8), term_c_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(a_8);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_8);
    }
  else
    {
      ATerm l_8 = NULL,q_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_21;
      t = xtc_new_file_0_0(t);
      l_8 = t;
      t = m_0(t);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_8), term_c_24), z_21), term_d_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(l_8);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_8);
    }
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm w_6 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_43, n_43);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = SSL_subtr(m_43, n_43);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,f_22 = NULL,i_22 = NULL;
  t = term_j_24;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = term_q_9;
      }
    d_22 = t;
    t = term_q_9;
    i_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_22, term_q_9);
    t = w_6(d_22, i_22, t);
    f_22 = t;
    t = SSL_int_to_string(f_22);
    c_22 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, c_22), term_j_24);
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm d_23 = NULL,f_23 = NULL,j_23 = NULL,l_23 = NULL;
  t = term_v_23;
  t = pass_keep_0_0(t);
  f_23 = t;
  t = term_v_23;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = term_v_23;
  t = pass_includes_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_23), j_23), f_23);
  t = concat_0_0(t);
  d_23 = t;
  t = (ATerm) ATinsert(CheckATermList(d_23), term_n_24);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = term_v_23;
  t = pass_keep_0_0(t);
  o_23 = t;
  t = term_v_23;
  t = pass_verbose_0_0(t);
  p_23 = t;
  t = term_v_23;
  t = pass_includes_0_0(t);
  q_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_23), p_23), o_23);
  t = concat_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_n_24);
  return(t);
}
ATerm str2astratego_0_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_23 = NULL,c_23 = NULL;
      c_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          a_23 = ATgetArgument(t, 0);
          {
            ATerm y_8 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(c_23);
            y_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, a_23);
            t_1 = t;
            t = SSLsetAnnotations(t_1, y_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_23;
        }
      LocalPopChoice(p_24);
      t = xtc_transform_file_2_0(q_3, s_3, t);
    }
  else
    {
      t = o_24;
      t = xtc_transform_term_2_0(t_3, u_3, t);
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = q_24;
      t = term_v_24;
    }
  return(t);
}
ATerm pre_process_input_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  y_23 = t;
  t = term_v_23;
  t = get_input_type_0_0(t);
  x_23 = t;
  if(match_cons(t, sym_AST_0))
    {
      t = y_23;
    }
  else
    {
      if(!(match_cons(t, sym_Module_0)))
        _fail(t);
      t = y_23;
      t = str2astratego_0_0(t);
    }
  return(t);
}
ATerm y_6 (ATerm x_24, ATerm y_24, ATerm t)
{
  t = SSL_copy(x_24, y_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL;
        t = d_25;
        t = k_0(t);
        n_9 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_9;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_9;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_25, n_9);
        t = y_6(e_25, n_9, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = w_24;
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_9 = NULL;
              t = d_25;
              t = k_0(t);
              z_9 = t;
              {
                ATerm c_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_10 = NULL;
                    a_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_10;
                          }
                        else
                          {
                            t = a_10;
                            if((e_25 != t))
                              {
                                _fail(t);
                              }
                            t = a_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_25, z_9);
                t = y_6(e_25, z_9, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
              }
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              t = d_25;
              t = k_0(t);
              if((e_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
            }
        }
      }
  }
  return(t);
}
ATerm z_6 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  l_25 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = e_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_25 = ATgetFirst((ATermList) t);
            k_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_25);
        t = SSL_table_put(q_45, r_45, k_25);
        t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, k_25);
      }
    else
      {
        t = f_25;
        t = SSL_table_remove(q_45, r_45);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
      }
    t = l_25;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,t_25 = NULL;
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = r_86(t);
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL;
        t = term_h_23;
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), term_h_23);
        t = e_7(not_null(q_25), u_25, t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_25 != NULL) && (p_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_25 = ATgetFirst((ATermList) t);
        if(((m_25 != NULL) && (m_25 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_23;
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = SSL_table_put(not_null(q_25), not_null(t_25), not_null(m_25));
    t = not_null(p_25);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm v_25 = NULL;
        v_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), v_25);
        t = z_6(not_null(q_25), v_25, t);
        return(t);
      }
      t = map_1_0(v_3, t);
      t = not_null(r_25);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_87(t);
      t = n_87(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      t = n_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  t = q_86(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, term_h_23);
  {
    ATerm s_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_26 = ATgetArgument(t, 0);
            ATerm d_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_23;
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, term_h_23);
        t = e_7(x_25, h_26, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
    z_25 = t;
    t = term_h_23;
    a_26 = t;
    t = (ATerm) ATinsert(CheckATermList(z_25), (ATerm) ATempty);
    b_26 = t;
    t = SSL_table_put(x_25, a_26, b_26);
    t = y_25;
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_26);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = q_26;
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm k_26 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm l_26 = NULL;
    l_26 = t;
    {
      ATerm g_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_26 = NULL,n_26 = NULL;
          t = term_b_24;
          m_26 = t;
          t = term_h_23;
          n_26 = t;
          t = term_j_26;
          t = e_7(m_26, n_26, t);
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = g_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_26 != NULL) && (k_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_26 = ATgetFirst((ATermList) t);
          {
            ATerm o_26 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(k_26);
      t = map_1_0(b_4, t);
      t = l_26;
      t = end_scope_1_0(c_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  t = restore_always_2_0(v_89, z_3, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm p_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = p_26;
      t = term_s_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm v_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        t = term_d_24;
        t = get_config_0_0(t);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_26);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = v_26;
        t = term_r_9;
      }
    t = w_89(t);
    t = copy_to_1_0(m_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  u_26 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  w_26 = t;
  t = term_q_18;
  y_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_27), w_26), term_e_27);
  z_26 = t;
  t = SSL_printnl(y_26, z_26);
  t = term_q_9;
  x_26 = t;
  t = SSL_exit(x_26);
  t = u_26;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  if(match_string(t, "-k"))
    {
      t = b_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_27;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,g_27 = NULL;
  c_27 = t;
  t = SSL_string_to_int(c_27);
  d_27 = t;
  t = term_j_24;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, d_27);
  t = h_7(g_27, d_27, t);
  t = c_27;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, r_4, s_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "-S"))
    {
      t = i_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_27;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_m_9;
  j_27 = t;
  t = term_l_27;
  k_27 = t;
  t = term_p_27;
  t = h_7(j_27, k_27, t);
  t = term_s_27;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  t = SSL_string_to_int(m_27);
  n_27 = t;
  t = term_m_9;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, n_27);
  t = h_7(o_27, n_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_27);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = term_z_27;
  q_27 = t;
  t = term_v_23;
  r_27 = t;
  t = term_c_28;
  t = h_7(q_27, r_27, t);
  t = term_g_28;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, w_4, y_4, t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, b_5, t);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            t = Option_3_0(c_5, e_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm h_7 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm t_27 = NULL;
  t = term_n_28;
  t_27 = t;
  t = SSL_table_put(t_27, l_47, m_47);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, l_47, m_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,a_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_28 = NULL,f_28 = NULL,m_28 = NULL;
      t = term_v_23;
      t = d_0(t);
      e_28 = t;
      t = term_o_28;
      f_28 = t;
      t = term_q_28;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_28, term_q_28, e_28);
      t = f_7(f_28, m_28, e_28, t);
      _fail(t);
    }
  else
    {
      ATerm p_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_27 = ATgetFirst((ATermList) t);
          a_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_27;
      t = a_0(t);
      t = term_v_23;
      t = c_0(t);
      p_28 = t;
      t = (ATerm) ATinsert(CheckATermList(a_28), p_28);
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  if(match_string(t, "-o"))
    {
      t = s_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_28;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  t_28 = t;
  t = term_c_24;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, t_28);
  t = h_7(u_28, t_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_28);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  if(match_string(t, "-i"))
    {
      t = w_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_28;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  t = term_d_24;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, y_28);
  t = h_7(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_28);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, m_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm j_30 (ATerm t)
  {
    ATerm a_30 = NULL,d_30 = NULL,i_30 = NULL;
    i_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_30 = ATgetFirst((ATermList) t);
        d_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_10 = NULL,b_11 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(i_30);
          y_10 = t;
          t = d_30;
          t = j_30(t);
          b_11 = t;
          t = (ATerm) ATinsert(CheckATermList(b_11), a_30);
          j_2 = t;
          t = SSLsetAnnotations(j_2, y_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_30;
        t = r_76(t);
      }
    return(t);
  }
  t = j_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_29;
    }
  else
    {
      ATerm n_5 (ATerm t)
      {
        t = not_null(f_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_29 != NULL) && (e_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_29 = ATgetFirst((ATermList) t);
          if(((f_29 != NULL) && (f_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_29);
      t = at_end_1_0(n_5, t);
    }
  return(t);
}
ATerm g_31 (ATerm q_30, ATerm t)
{
  ATerm t_30 = NULL;
  t = SSL_explode_term(q_30);
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_30;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(((b_31 != NULL) && (b_31 != t)))
    _fail(t);
  else
    b_31 = t;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(a_31);
              return(t);
            }
            t = not_null(z_30);
            t = at_end_1_0(o_5, t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = g_31(not_null(b_31), t);
          }
      }
    }
  else
    {
      t = g_31(not_null(b_31), t);
    }
  return(t);
}
ATerm x_6 (ATerm r_47, ATerm q_47, ATerm t)
{
  ATerm h_31 = NULL,l_31 = NULL,p_31 = NULL;
  t = r_47;
  {
    ATerm c_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
    l_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_47, l_31);
    t = conc_0_0(t);
    h_31 = t;
    t = term_n_28;
    p_31 = t;
    t = SSL_table_put(p_31, r_47, h_31);
    t = (ATerm) ATmakeAppl(sym__3, term_n_28, r_47, h_31);
  }
  return(t);
}
ATerm f_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_29 = ATgetArgument(t, 0);
            ATerm k_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = e_7(l_45, m_45, t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATempty;
      }
    s_31 = t;
    t = (ATerm) ATinsert(CheckATermList(s_31), k_45);
    t_31 = t;
    t = SSL_table_put(l_45, m_45, t_31);
    t = r_31;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
      t = term_v_23;
      t = j_0(t);
      e_32 = t;
      t = term_o_28;
      f_32 = t;
      t = term_q_28;
      g_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_28, term_q_28, e_32);
      t = f_7(f_32, g_32, e_32, t);
      _fail(t);
    }
  else
    {
      ATerm k_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      t = h_0(t);
      t = c_32;
      t = i_0(t);
      k_32 = t;
      t = (ATerm) ATinsert(CheckATermList(d_32), k_32);
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  if(match_string(t, "-I"))
    {
      t = m_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = m_32;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  t = term_g_24;
  o_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_32), term_g_24);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, n_32), term_g_24));
  t = x_6(o_32, p_32, t);
  t = term_v_23;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm include_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, t_5, w_5, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  t = term_u_24;
  r_32 = t;
  t = term_m_29;
  s_32 = t;
  t = term_n_29;
  t = h_7(r_32, s_32, t);
  t = q_32;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--mod", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  t = term_p_29;
  u_32 = t;
  t = term_v_24;
  v_32 = t;
  t = term_q_29;
  t = h_7(u_32, v_32, t);
  t = t_32;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm input_type_option_0_0 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, y_5, a_6, t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = Option_3_0(b_6, d_6, e_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_23;
  t = whoami_0_0(t);
  w_32 = t;
  t = term_q_18;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_29), w_32);
  z_32 = t;
  t = SSL_printnl(y_32, z_32);
  t = term_q_9;
  x_32 = t;
  t = SSL_exit(x_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_43, h_43);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = SSL_addr(g_43, h_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,f_33 = NULL;
  b_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_33;
      t = t_82(t);
    }
  else
    {
      ATerm i_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          f_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_33;
      t = foldr_2_0(t_82, u_82, t);
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_33, i_33);
      t = u_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(l_11, n_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_33 = NULL,g_11 = NULL,h_11 = NULL;
  t = times_0_0(t);
  h_11 = t;
  t = SSL_explode_term(h_11);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11;
  t = foldr_2_0(f_6, g_6, t);
  l_33 = t;
  t = SSL_TicksToSeconds(l_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  if(match_cons(t, sym__2))
    {
      x_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_33;
        if((x_33 != t))
          {
            _fail(t);
          }
        t = w_33;
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
        {
          ATerm c_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_33, y_33);
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = c_30;
              t = SSL_gtr(x_33, y_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_34 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        e_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_34, term_q_9);
        t = geq_0_0(t);
        t = c_34;
        t = y_87(t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = c_34;
      }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = run_time_0_0(t);
  g_34 = t;
  t = term_v_23;
  t = whoami_0_0(t);
  h_34 = t;
  t = term_q_18;
  j_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), g_34), term_c_10), h_34);
  k_34 = t;
  t = SSL_printnl(j_34, k_34);
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), g_34), term_c_10), h_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_27;
  l_34 = t;
  t = SSL_exit(l_34);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  w_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_34 = ATgetArgument(t, 0);
          {
            ATerm h_12 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(w_34);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_34);
            n_2 = t;
            t = SSLsetAnnotations(n_2, h_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      t = fetch_1_0(m_6, t);
    }
  t = x_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_35 = NULL,j_35 = NULL;
        ATerm b_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), not_null(j_35));
          return(t);
        }
        t = not_null(e_35);
        t = g_0(t);
        if(((i_35 != NULL) && (i_35 != t)))
          _fail(t);
        else
          i_35 = t;
        t = not_null(d_35);
        t = e_0(t);
        if(((j_35 != NULL) && (j_35 != t)))
          _fail(t);
        else
          j_35 = t;
        t = not_null(e_35);
        t = reverse_acc_2_0(e_0, b_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_23;
      t = g_0(t);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,n_3 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_35);
  n_3 = t;
  t = SSLsetAnnotations(n_3, n_35);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_35), term_n_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = fetch_1_0(c_7, t);
    }
  t = term_r_30;
  t = echo_0_0(t);
  t = term_o_28;
  l_35 = t;
  t = term_q_28;
  m_35 = t;
  t = term_s_30;
  t = e_7(l_35, m_35, t);
  t = reverse_acc_2_0(_id, j_7, t);
  t = map_1_0(k_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm q_36 (ATerm t)
  {
    ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
    n_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_36 = ATgetFirst((ATermList) t);
        p_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = NULL,e_13 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(n_36);
          w_12 = t;
          t = o_36;
          t = l_76(t);
          e_13 = t;
          t = (ATerm) ATinsert(CheckATermList(p_36), e_13);
          p_3 = t;
          t = SSLsetAnnotations(p_3, w_12);
          ;
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          {
            ATerm d_14 = NULL,j_14 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(n_36);
            d_14 = t;
            t = p_36;
            t = q_36(t);
            j_14 = t;
            t = (ATerm) ATinsert(CheckATermList(j_14), o_36);
            r_3 = t;
            t = SSLsetAnnotations(r_3, d_14);
          }
        }
    }
    return(t);
  }
  t = q_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_30 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_36;
          }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, u_36);
      }
    v_36 = t;
    t = term_s_26;
    w_36 = t;
    t = SSL_printnl(w_36, v_36);
    t = u_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_7 (ATerm c_42, ATerm d_42, ATerm t)
{
  t = SSL_strcat(c_42, d_42);
  return(t);
}
ATerm debug_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  a_37 = t;
  t = g_72(t);
  b_37 = t;
  t = term_q_18;
  c_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_37), b_37);
  d_37 = t;
  t = SSL_printnl(c_37, d_37);
  t = a_37;
  return(t);
}
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm s_37 (ATerm t)
  {
    ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
    p_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_37;
      }
    else
      {
        ATerm x_14 = NULL,c_15 = NULL,d_15 = NULL,x_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_37 = ATgetFirst((ATermList) t);
            r_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_37);
        x_14 = t;
        t = q_37;
        t = b_76(t);
        c_15 = t;
        t = r_37;
        t = s_37(t);
        d_15 = t;
        t = (ATerm) ATinsert(CheckATermList(d_15), c_15);
        x_3 = t;
        t = SSLsetAnnotations(x_3, x_14);
      }
    return(t);
  }
  t = s_37(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = NULL;
      a_38 = t;
      t = SSL_is_string(a_38);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm k_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_7, t);
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = k_31;
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
              g_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_38 = ATgetArgument(t, 0);
                  t = h_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_38 = ATgetArgument(t, 0);
                      t = h_38;
                      {
                        ATerm n_31 = t;
                        int o_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_31);
                          }
                        else
                          {
                            t = n_31;
                            t = debug_1_0(n_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_38 = NULL,n_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_38 = ATgetArgument(t, 0);
                          i_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_38;
                      t = eval_config_0_0(t);
                      m_38 = t;
                      t = i_38;
                      t = eval_config_0_0(t);
                      n_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
                      t = d_7(m_38, n_38, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm c_47, ATerm d_47, ATerm t)
{
  t = SSL_table_get(c_47, d_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  r_38 = t;
  t = term_n_28;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, r_38);
  t = e_7(s_38, r_38, t);
  {
    ATerm q_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_38 = NULL,u_38 = NULL;
        t = eval_config_0_0(t);
        t_38 = t;
        t = term_n_28;
        u_38 = t;
        t = SSL_table_put(u_38, r_38, t_38);
        t = t_38;
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = q_31;
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  t = term_v_31;
  x_38 = t;
  t = term_v_23;
  y_38 = t;
  t = term_w_31;
  t = h_7(x_38, y_38, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  t = term_v_31;
  b_39 = t;
  t = term_v_23;
  c_39 = t;
  t = term_w_31;
  t = h_7(b_39, c_39, t);
  t = term_y_31;
  z_38 = t;
  t = term_v_23;
  a_39 = t;
  t = term_z_31;
  t = h_7(z_38, a_39, t);
  t = term_h_32;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_7, q_7, s_7, t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = j_32;
      t = Option_3_0(t_7, w_7, x_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,a_4 = NULL;
  i_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      f_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_39);
  d_39 = t;
  t = e_39;
  t = s_63(t);
  g_39 = t;
  t = f_39;
  t = t_63(t);
  h_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), g_39);
  a_4 = t;
  t = SSLsetAnnotations(a_4, d_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,s_39 = NULL,t_39 = NULL,d_4 = NULL;
  if(((n_39 != NULL) && (n_39 != t)))
    _fail(t);
  else
    n_39 = t;
  {
    ATerm a_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = v_93(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = a_33;
      }
    t = not_null(n_39);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_39 != NULL) && (p_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_39 = ATgetFirst((ATermList) t);
        if(((q_39 != NULL) && (q_39 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          q_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(n_39));
    if(((o_39 != NULL) && (o_39 != t)))
      _fail(t);
    else
      o_39 = t;
    t = term_v_29;
    if(((t_39 != NULL) && (t_39 != t)))
      _fail(t);
    else
      t_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_29, not_null(p_39));
    t = h_7(not_null(t_39), not_null(p_39), t);
    t = not_null(q_39);
    {
      ATerm d_40 (ATerm t)
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_33 = t;
            int k_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_39 = NULL;
                w_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_39;
                ;
                LocalPopChoice(k_33);
              }
            else
              {
                t = j_33;
                t = v_93(t);
                t = Cons_2_0(_id, d_40, t);
              }
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm z_39 = NULL,a_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_39 = ATgetFirst((ATermList) t);
                  a_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_40), (ATerm) ATmakeAppl(sym_Undefined_1, z_39));
            }
          }
        return(t);
      }
      t = d_40(t);
      if(((s_39 != NULL) && (s_39 != t)))
        _fail(t);
      else
        s_39 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(s_39)), (ATerm) ATmakeAppl(sym_Program_1, not_null(p_39)));
      if(((d_4 != NULL) && (d_4 != t)))
        _fail(t);
      else
        d_4 = t;
      t = SSLsetAnnotations(not_null(d_4), not_null(o_39));
    }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  if(match_string(t, "--help"))
    {
      t = p_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_40;
        }
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  t = term_m_30;
  q_40 = t;
  t = term_v_23;
  r_40 = t;
  t = term_m_33;
  t = h_7(q_40, r_40, t);
  t = term_n_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  if(((k_40 != NULL) && (k_40 != t)))
    _fail(t);
  else
    k_40 = t;
  t = term_o_28;
  if(((m_40 != NULL) && (m_40 != t)))
    _fail(t);
  else
    m_40 = t;
  t = term_q_28;
  if(((n_40 != NULL) && (n_40 != t)))
    _fail(t);
  else
    n_40 = t;
  t = (ATerm) ATempty;
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = SSL_table_put(not_null(m_40), not_null(n_40), not_null(o_40));
  t = not_null(k_40);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_93(t);
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_8, d_8, e_8, t);
                ;
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_7, t);
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_40 = NULL;
          y_40 = t;
          {
            ATerm v_33 = t;
            int z_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_16 = NULL;
                t = y_40;
                {
                  ATerm a_34 = t;
                  int b_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_34);
                    }
                  else
                    {
                      t = a_34;
                      t = fetch_1_0(f_8, t);
                    }
                  t = y_40;
                  t = default_system_usage_0_0(t);
                  t = term_l_27;
                  f_16 = t;
                  t = SSL_exit(f_16);
                }
                ;
                LocalPopChoice(z_33);
              }
            else
              {
                t = v_33;
                {
                  ATerm n_16 = NULL;
                  t = term_v_31;
                  t = get_config_0_0(t);
                  t = y_40;
                  t = default_system_about_0_0(t);
                  t = term_l_27;
                  n_16 = t;
                  t = SSL_exit(n_16);
                }
              }
          }
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm d_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
                ATerm g_8 (ATerm t)
                {
                  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,g_4 = NULL;
                  e_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_41);
                  c_41 = t;
                  t = d_41;
                  if(((i_40 != NULL) && (i_40 != t)))
                    _fail(t);
                  else
                    i_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_41);
                  g_4 = t;
                  t = SSLsetAnnotations(g_4, c_41);
                  return(t);
                }
                t = fetch_1_0(g_8, t);
                t = term_q_18;
                if(((a_41 != NULL) && (a_41 != t)))
                  _fail(t);
                else
                  a_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_40)), term_i_34);
                if(((b_41 != NULL) && (b_41 != t)))
                  _fail(t);
                else
                  b_41 = t;
                t = SSL_printnl(not_null(a_41), not_null(b_41));
                t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_40)), term_i_34));
                t = default_system_usage_0_0(t);
                t = term_q_9;
                if(((z_40 != NULL) && (z_40 != t)))
                  _fail(t);
                else
                  z_40 = t;
                t = SSL_exit(not_null(z_40));
                ;
                LocalPopChoice(f_34);
              }
            else
              {
                t = d_34;
              }
          }
        }
      if(((j_40 != NULL) && (j_40 != t)))
        _fail(t);
      else
        j_40 = t;
      t = term_o_28;
      if(((l_40 != NULL) && (l_40 != t)))
        _fail(t);
      else
        l_40 = t;
      t = SSL_table_destroy(not_null(l_40));
      t = not_null(j_40);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  t = parse_options_1_0(z_91, t);
  j_41 = t;
  t = term_m_34;
  m_41 = t;
  t = SSL_table_create(m_41);
  t = term_m_34;
  k_41 = t;
  t = term_n_34;
  l_41 = t;
  t = SSL_table_put(k_41, l_41, j_41);
  t = j_41;
  t = b_92(t);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_92, t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm s_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0_0(t);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = s_34;
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = include_option_0_0(t);
            ;
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm c_35 = t;
              int f_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_option_0_0(t);
                  ;
                  LocalPopChoice(f_35);
                }
              else
                {
                  t = c_35;
                  {
                    ATerm g_35 = t;
                    int h_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = output_option_0_0(t);
                        ;
                        LocalPopChoice(h_35);
                      }
                    else
                      {
                        t = g_35;
                        {
                          ATerm k_35 = t;
                          int q_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(j_8, k_8, m_8, t);
                              ;
                              LocalPopChoice(q_35);
                            }
                          else
                            {
                              t = k_35;
                              {
                                ATerm s_35 = t;
                                int t_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = verbose_option_0_0(t);
                                    ;
                                    LocalPopChoice(t_35);
                                  }
                                else
                                  {
                                    t = s_35;
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
ATerm i_8 (ATerm t)
{
  t = xtc_io_1_0(n_8, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_u_35;
  s_41 = t;
  t = term_v_23;
  t_41 = t;
  t = term_v_35;
  t = h_7(s_41, t_41, t);
  t = term_w_35;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = pre_process_input_0_0(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_42 = NULL,b_42 = NULL;
        b_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_42 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,n_4 = NULL;
              t = SSLgetAnnotations(b_42);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_42);
              n_4 = t;
              t = SSLsetAnnotations(n_4, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_42;
          }
        LocalPopChoice(z_35);
        t = xtc_transform_file_2_0(o_8, pass_verbose_0_0, t);
      }
    else
      {
        t = y_35;
        t = xtc_transform_term_2_0(r_8, pass_verbose_0_0, t);
      }
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_42 = NULL,k_42 = NULL;
          k_42 = t;
          if(match_cons(t, sym_FILE_1))
            {
              j_42 = ATgetArgument(t, 0);
              {
                ATerm i_17 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(k_42);
                i_17 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_42);
                v_4 = t;
                t = SSLsetAnnotations(v_4, i_17);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = k_42;
            }
          LocalPopChoice(b_36);
          t = xtc_transform_file_2_0(u_8, pass_verbose_0_0, t);
        }
      else
        {
          t = a_36;
          t = xtc_transform_term_2_0(v_8, pass_verbose_0_0, t);
        }
      t = pp_astratego_0_0(t);
    }
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_8, default_usage_0_0, _id, i_8, t);
  return(t);
}
