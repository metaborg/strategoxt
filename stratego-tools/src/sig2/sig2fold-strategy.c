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
ATerm term_a_38;
ATerm term_z_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_a_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_g_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_f_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_d_30;
ATerm term_z_29;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_y_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_i_25;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
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
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
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
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
void init_constant_terms (void)
{
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_w_12, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_n_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_u_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_d_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_c_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_a_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_n_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_t_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_p_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_s_23);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_g_26);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_k_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_t_26);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_k_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_p_28);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_z_31);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_t_26);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_s_35, term_t_26);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_t_26);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_t_26);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fold-strategy", 0, ATtrue));
}
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm pp_astratego_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm j_6 (ATerm v_27, ATerm w_27, ATerm);
ATerm k_6 (ATerm i_72 (ATerm), ATerm u_187, ATerm d_28, ATerm);
ATerm a_2 (ATerm);
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
ATerm g_2 (ATerm);
ATerm q_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm);
ATerm r_6 (ATerm f_88 (ATerm), ATerm s_46, ATerm r_46, ATerm);
ATerm x_7 (ATerm r_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_6 (ATerm b_28, ATerm);
ATerm t_6 (ATerm x_48, ATerm y_48, ATerm);
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm e_12 (ATerm m_11, ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm u_6 (ATerm u_86 (ATerm), ATerm u_44, ATerm s_44, ATerm);
ATerm j_13 (ATerm z_12, ATerm);
ATerm k_13 (ATerm b_13, ATerm c_13, ATerm d_13, ATerm);
ATerm w_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm v_6 (ATerm p_48, ATerm q_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm pass_includes_0_0 (ATerm);
ATerm w_6 (ATerm m_43, ATerm n_43, ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm str2astratego_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm pre_process_input_0_0 (ATerm);
ATerm y_6 (ATerm x_24, ATerm y_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm z_6 (ATerm q_45, ATerm r_45, ATerm);
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_7 (ATerm l_47, ATerm m_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_23 (ATerm s_22, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_6 (ATerm r_47, ATerm q_47, ATerm);
ATerm f_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm include_option_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm n_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm k_7 (ATerm);
ATerm input_type_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_7 (ATerm g_43, ATerm h_43, ATerm);
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm need_help_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_7 (ATerm c_42, ATerm d_42, ATerm);
ATerm debug_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm c_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_7 (ATerm c_47, ATerm d_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm o_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_93 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm parse_options_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm f_0 = NULL;
  t = term_a_11;
  t = xtc_find_0_0(t);
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_j_11);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm n_0 = NULL;
  t = term_a_11;
  t = xtc_find_0_0(t);
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_j_11);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm pp_astratego_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_11);
      t = xtc_transform_file_2_0(f_1, pass_verbose_0_0, t);
    }
  else
    {
      t = l_11;
      t = xtc_transform_term_2_0(g_1, pass_verbose_0_0, t);
    }
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(a_12);
        t = xtc_transform_file_2_0(i_1, j_1, t);
      }
    else
      {
        t = z_11;
        t = xtc_transform_term_2_0(m_1, n_1, t);
      }
    {
      ATerm f_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = o_12;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(m_12);
          t = xtc_transform_file_2_0(s_1, u_1, t);
        }
      else
        {
          t = f_12;
          t = xtc_transform_term_2_0(v_1, w_1, t);
        }
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL;
  t = term_s_12;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = term_w_12;
      }
    o_0 = t;
    t = term_w_12;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_0, term_w_12);
    t = w_6(o_0, r_0, t);
    t_0 = t;
    t = SSL_int_to_string(t_0);
    p_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_0), term_s_12);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm a_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_12);
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_y_12));
      t = v_6(w_0, a_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm j_6 (ATerm v_27, ATerm w_27, ATerm t)
{
  ATerm h_1 = NULL;
  t = SSL_write_term_to_stream_baf(v_27, w_27);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_1);
  return(t);
}
ATerm k_6 (ATerm i_72 (ATerm), ATerm u_187, ATerm d_28, ATerm t)
{
  ATerm o_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_187, term_a_13);
  t = open_stream_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, d_28);
  t = i_72(t);
  t = fclose_0_0(t);
  t = d_28;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym_Stream_1))
        {
          r_1 = ATgetArgument(e_13, 0);
        }
      else
        _fail(t);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(r_1, t_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  p_1 = t;
  t = xtc_new_file_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
  t = k_6(a_2, q_1, p_1, t);
  t = SSL_close_file(q_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
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
  ATerm g_3 = NULL,h_3 = NULL,j_3 = NULL,m_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm u_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(h_3);
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), u_0), term_f_13);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
          m_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_3);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_3), term_r_13), k_1), term_p_13), h_3);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm s_3 = NULL;
  ATerm b_2 (ATerm t)
  {
    t = n_76(t);
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    return(t);
  }
  t = fetch_1_0(b_2, t);
  t = not_null(s_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  {
    ATerm s_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_19), term_p_19), term_j_19), term_f_19), term_w_18), term_r_18), term_h_18), term_w_17), term_q_17), term_m_17), term_i_17), term_e_17), term_a_17), term_w_16), term_q_16), term_m_16), term_h_16), term_y_15), term_r_15), term_j_15), term_c_15), term_w_14), term_s_14), term_o_14), term_k_14), term_g_14), term_c_14), term_y_13);
        {
          ATerm c_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm x_19 = ATgetArgument(t, 0);
                if((u_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm y_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(c_2, t);
        }
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = s_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_3 = NULL;
  z_3 = t;
  {
    ATerm b_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            l_4 = ATgetArgument(t, 1);
            {
              ATerm i_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_4;
        {
          ATerm j_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_20;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          x_1 = t;
          t = term_k_20;
          y_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_l_20);
          z_1 = t;
          t = SSL_printnl(y_1, z_1);
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_l_20));
        }
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = b_20;
      }
    t = z_3;
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
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  t = fork_0_0(t);
  r_4 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_4;
        t = x_70(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = SSL_waitpid(r_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            if(((ATgetType(x_20) != AT_INT) || (ATgetInt((ATermInt) x_20) != 0)))
              _fail(t);
            {
              ATerm y_20 = ATgetArgument(t, 1);
            }
            {
              ATerm b_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_table_keys(t_4);
  {
    ATerm d_2 (ATerm t)
    {
      ATerm w_4 = NULL,y_4 = NULL;
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_4, w_4);
      t = e_7(t_4, w_4, t);
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, y_4);
      return(t);
    }
    t = map_1_0(d_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 = NULL,c_5 = NULL;
      a_5 = t;
      t = term_s_12;
      t = get_config_0_0(t);
      c_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_5, term_y_18);
      t = geq_0_0(t);
      t = a_5;
      t = c_88(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = e_21;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = NULL,j_5 = NULL;
      d_5 = t;
      t = term_s_12;
      t = get_config_0_0(t);
      j_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_5, term_a_16);
      t = geq_0_0(t);
      t = d_5;
      t = b_88(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm k_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL,n_5 = NULL;
      k_5 = t;
      t = term_s_12;
      t = get_config_0_0(t);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_5, term_i_14);
      t = geq_0_0(t);
      t = k_5;
      t = d_88(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = k_21;
    }
  return(t);
}
ATerm o_6 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm y_34, ATerm x_34, ATerm t)
{
  t = j_80(t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm o_5 = NULL;
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_34, o_5);
      t = i_80(t);
      return(t);
    }
    t = fetch_1_0(e_2, t);
    t = x_34;
  }
  return(t);
}
ATerm p_6 (ATerm f_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = u_34;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_34;
          ;
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          {
            ATerm p_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 = NULL,r_5 = NULL,u_5 = NULL;
                q_5 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_5 = ATgetFirst((ATermList) t);
                    u_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_5;
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = t_34;
                    return(t);
                  }
                  t = o_6(f_80, f_2, r_5, u_5, t);
                  t = z_5(t);
                }
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = p_21;
                t = Cons_2_0(_id, z_5, t);
              }
          }
        }
      return(t);
    }
    t = z_5(t);
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      if((g_7 != ATgetArgument(t, 1)))
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
  ATerm d_6 = NULL,h_6 = NULL,m_6 = NULL;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_21 = ATgetArgument(t, 0);
            ATerm w_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = e_7(i_46, j_46, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATempty;
      }
    h_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_6, k_46);
    t = p_6(g_2, h_6, k_46, t);
    m_6 = t;
    t = SSL_table_put(i_46, j_46, m_6);
    t = d_6;
  }
  return(t);
}
ATerm r_6 (ATerm f_88 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  t = r_46;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_7 = NULL,j_7 = NULL;
      if(match_cons(t, sym__2))
        {
          i_7 = ATgetArgument(t, 0);
          j_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, s_46, i_7, j_7);
      t = f_88(t);
      return(t);
    }
    t = map_1_0(h_2, t);
  }
  return(t);
}
ATerm x_7 (ATerm r_7, ATerm t)
{
  t = SSL_fclose(r_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_7 = ATgetArgument(t, 0);
      {
        ATerm y_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_7);
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = y_21;
            t = x_7(v_7, t);
          }
      }
    }
  else
    {
      t = x_7(v_7, t);
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
  ATerm y_7 = NULL;
  t = SSL_fopen(x_48, y_48);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,d_8 = NULL,f_8 = NULL,g_8 = NULL,b_0 = NULL,q_0 = NULL;
  g_8 = t;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  z_7 = t;
  t = a_8;
  t = d_59(t);
  d_8 = t;
  t = b_8;
  t = e_59(t);
  f_8 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_8, f_8);
  b_0 = t;
  t = SSLsetAnnotations(b_0, z_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdin_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdout_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stderr_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      a_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_is_string(h_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      ATerm c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,j_2 = NULL;
        v_8 = t;
        t = SSL_explode_term(v_8);
        if(match_cons(t, sym__2))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_22 = ATgetArgument(t, 1);
              if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
                {
                  j_2 = ATgetFirst((ATermList) j_22);
                  {
                    ATerm k_22 = (ATerm) ATgetNext((ATermList) j_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL,z_8 = NULL;
              t = _2_0(i_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_8 = ATgetArgument(t, 0);
                  z_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_6(w_8, z_8, t);
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              {
                ATerm c_9 = NULL,e_9 = NULL;
                t = _2_0(k_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_9 = ATgetArgument(t, 0);
                    e_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_6(c_9, e_9, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL;
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, term_r_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      t = debug_1_0(l_2, t);
      _fail(t);
    }
  j_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(n_9, t);
  m_9 = t;
  t = j_9;
  t = fclose_0_0(t);
  t = m_9;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9 = NULL,t_9 = NULL;
      s_9 = t;
      t = (ATerm) ATinsert(ATempty, term_b_23);
      t_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, (ATerm) ATinsert(ATempty, term_b_23));
      t = v_6(s_9, t_9, t);
      LocalPopChoice(y_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_22;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23 = t;
            if((PushChoice() == 0))
              {
                ATerm u_9 = NULL,v_9 = NULL;
                u_9 = t;
                t = (ATerm) ATinsert(ATempty, term_y_12);
                v_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_9, (ATerm) ATinsert(ATempty, term_y_12));
                t = v_6(u_9, v_9, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_23;
              }
            t = debug_1_0(m_2, t);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = debug_1_0(n_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  t = term_k_20;
  j_10 = t;
  t = (ATerm) ATinsert(ATempty, term_k_23);
  k_10 = t;
  t = SSL_printnl(j_10, k_10);
  t = i_10;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__3))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      n_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(l_10, m_10, n_10, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = term_k_20;
  p_10 = t;
  t = (ATerm) ATinsert(ATempty, term_l_23);
  q_10 = t;
  t = SSL_printnl(p_10, q_10);
  t = o_10;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  t = term_k_20;
  s_10 = t;
  t = (ATerm) ATinsert(ATempty, term_k_23);
  t_10 = t;
  t = SSL_printnl(s_10, t_10);
  t = r_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  w_9 = t;
  t = if_verbose5_1_0(o_2, t);
  {
    ATerm m_23 = t;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL,h_10 = NULL;
        t = term_o_23;
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_9);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Imported_1, w_9));
        t = e_7(g_10, h_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_23;
      }
    x_9 = t;
    t = term_o_23;
    z_9 = t;
    t = term_s_23;
    a_10 = t;
    t = (ATerm) ATinsert(ATempty, w_9);
    b_10 = t;
    t = SSL_table_put(z_9, a_10, b_10);
    t = x_9;
    t = if_verbose4_1_0(q_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_2, t);
    y_9 = t;
    t = term_o_23;
    c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_23, y_9);
    t = r_6(t_2, c_10, y_9, t);
    t = if_verbose6_1_0(u_2, t);
    t = term_o_23;
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, w_9);
    e_10 = t;
    t = (ATerm) ATempty;
    f_10 = t;
    t = SSL_table_put(d_10, e_10, f_10);
    t = (ATerm) ATmakeAppl(sym__3, term_o_23, (ATerm)ATmakeAppl(sym_Imported_1, w_9), (ATerm) ATempty);
    t = if_verbose4_1_0(v_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = filter_1_0(w_83, t);
              return(t);
            }
            t = Cons_2_0(w_83, x_2, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm z_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_23 = ATgetFirst((ATermList) t);
                  z_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_10;
              t = filter_1_0(w_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_85(t);
        t = b_11(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      {
        ATerm i_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL;
            t = term_m_24;
            c_11 = t;
            t = SSL_getenv(c_11);
            ;
            LocalPopChoice(l_24);
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
ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  t = term_o_23;
  h_11 = t;
  t = term_p_24;
  i_11 = t;
  t = term_t_24;
  t = e_7(h_11, i_11, t);
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
ATerm c_3 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  t = if_verbose5_1_0(z_2, t);
  d_11 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL,f_11 = NULL;
        t = term_o_23;
        e_11 = t;
        t = term_s_23;
        f_11 = t;
        t = term_p_25;
        t = e_7(e_11, f_11, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm g_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_11 = t;
          t = repeat_1_0(b_3, t);
          t = g_11;
        }
      }
    t = d_11;
    t = if_verbose5_1_0(c_3, t);
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm e_12 (ATerm m_11, ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  t = term_o_23;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_11);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Tool_1, m_11));
  t = e_7(p_11, q_11, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_25 = ATgetFirst((ATermList) t);
      if(match_cons(s_25, sym__2))
        {
          ATerm u_25 = ATgetArgument(s_25, 0);
          o_11 = ATgetArgument(s_25, 1);
        }
      else
        _fail(t);
      {
        ATerm t_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_11;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_o_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(e_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        t_11 = t;
        if(match_cons(t, sym__2))
          {
            r_11 = ATgetArgument(t, 0);
            s_11 = ATgetArgument(t, 1);
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
                  t = term_o_23;
                  x_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, r_11);
                  y_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Tool_1, r_11));
                  t = e_7(x_11, y_11, t);
                  {
                    ATerm l_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((s_11 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((w_11 != NULL) && (w_11 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            w_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(l_3, t);
                    t = not_null(w_11);
                  }
                  ;
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  t = e_12(t_11, t);
                }
            }
          }
        else
          {
            t = e_12(t_11, t);
          }
        t = if_verbose5_1_0(n_3, t);
      }
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm d_12 = NULL,w_2 = NULL,y_2 = NULL;
        d_12 = t;
        t = term_k_20;
        w_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_26), d_12), term_b_26);
        y_2 = t;
        t = SSL_printnl(w_2, y_2);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_26), d_12), term_b_26);
        t = if_verbose5_1_0(p_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  t = j_90(t);
  t = xtc_find_0_0(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_12, g_12);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm i_12 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_12, g_12);
      t = l_6(h_12, g_12, t);
      t = term_d_26;
      i_12 = t;
      t = SSL_exit(i_12);
      return(t);
    }
    t = fork_and_wait_1_0(r_3, t);
    t = g_12;
  }
  return(t);
}
ATerm u_6 (ATerm u_86 (ATerm), ATerm u_44, ATerm s_44, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,n_12 = NULL,p_12 = NULL,r_12 = NULL;
  j_12 = t;
  t = u_86(t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_12, u_44, s_44);
  t = f_7(k_12, u_44, s_44, t);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_12 = NULL;
        t = term_g_26;
        t_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, term_g_26);
        t = e_7(k_12, t_12, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_12 = ATgetFirst((ATermList) t);
        n_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_26;
    p_12 = t;
    t = (ATerm) ATinsert(CheckATermList(n_12), (ATerm) ATinsert(CheckATermList(l_12), u_44));
    r_12 = t;
    t = SSL_table_put(k_12, p_12, r_12);
    t = j_12;
  }
  return(t);
}
ATerm j_13 (ATerm z_12, ATerm t)
{
  t = z_12;
  {
    ATerm h_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_26;
      }
    t = term_n_26;
    t = debug_1_0(w_3, t);
    t = (ATerm) ATmakeAppl(sym__2, z_12, term_a_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_13 (ATerm b_13, ATerm c_13, ATerm d_13, ATerm t)
{
  t = SSL_open_file(b_13, c_13);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
      {
        ATerm p_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_13(g_13, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = p_26;
            t = k_13(h_13, i_13, g_13, t);
          }
      }
    }
  else
    {
      t = j_13(g_13, t);
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
  ATerm l_13 = NULL,n_13 = NULL;
  t = term_t_26;
  t = new_0_0(t);
  l_13 = t;
  t = term_u_26;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_u_26);
  t = d_7(l_13, n_13, t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,q_13 = NULL;
        o_13 = t;
        t = (ATerm) ATinsert(ATempty, term_y_12);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, (ATerm) ATinsert(ATempty, term_y_12));
        t = v_6(o_13, q_13, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  t = new_file_0_0(t);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, term_a_13);
  t = open_file_0_0(t);
  t = term_t_26;
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, term_t_26);
  t = u_6(x_3, t_13, u_13, t);
  t = t_13;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_3 = NULL,k_3 = NULL;
      t = x_14;
      t = xtc_new_file_0_0(t);
      i_3 = t;
      t = m_0(t);
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_z_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(i_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
    }
  else
    {
      ATerm t_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_14;
      t = xtc_new_file_0_0(t);
      t_3 = t;
      t = m_0(t);
      v_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_3), term_z_26), y_14), term_a_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(t_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,f_15 = NULL,g_15 = NULL,l_15 = NULL,s_0 = NULL,v_0 = NULL;
  l_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  d_15 = t;
  t = f_15;
  t = r_68(t);
  g_15 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_15);
  s_0 = t;
  t = SSLsetAnnotations(s_0, d_15);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = b_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm w_6 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_43, n_43);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = SSL_subtr(m_43, n_43);
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,t_15 = NULL;
  t = term_m_27;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = term_w_12;
      }
    o_15 = t;
    t = term_w_12;
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_15, term_w_12);
    t = w_6(o_15, q_15, t);
    t_15 = t;
    t = SSL_int_to_string(t_15);
    p_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_15), term_m_27);
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,b_16 = NULL,c_16 = NULL;
  t = term_t_26;
  t = pass_keep_0_0(t);
  v_15 = t;
  t = term_t_26;
  t = pass_verbose_0_0(t);
  w_15 = t;
  t = term_t_26;
  t = pass_includes_0_0(t);
  b_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_16), w_15), v_15);
  t = concat_0_0(t);
  c_16 = t;
  t = (ATerm) ATinsert(CheckATermList(c_16), term_y_27);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,j_16 = NULL;
  t = term_t_26;
  t = pass_keep_0_0(t);
  e_16 = t;
  t = term_t_26;
  t = pass_verbose_0_0(t);
  f_16 = t;
  t = term_t_26;
  t = pass_includes_0_0(t);
  g_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_16), f_16), e_16);
  t = concat_0_0(t);
  j_16 = t;
  t = (ATerm) ATinsert(CheckATermList(j_16), term_y_27);
  return(t);
}
ATerm str2astratego_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_28);
        }
      else
        {
          t = f_28;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(c_28);
      t = xtc_transform_file_2_0(y_3, a_4, t);
    }
  else
    {
      t = z_27;
      t = xtc_transform_term_2_0(b_4, c_4, t);
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = term_p_28;
    }
  return(t);
}
ATerm pre_process_input_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  u_16 = t;
  t = term_t_26;
  t = get_input_type_0_0(t);
  v_16 = t;
  if(match_cons(t, sym_AST_0))
    {
      t = u_16;
    }
  else
    {
      if(!(match_cons(t, sym_Module_0)))
        _fail(t);
      t = u_16;
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
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = u_17;
        t = k_0(t);
        h_4 = t;
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_17, h_4);
          t = y_6(v_17, h_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
        }
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = r_28;
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL;
              t = u_17;
              t = k_0(t);
              x_4 = t;
              {
                ATerm a_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_29 = t;
                    int c_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_29);
                      }
                    else
                      {
                        t = b_29;
                        {
                          ATerm d_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_29);
                            }
                          else
                            {
                              t = d_29;
                              {
                                ATerm z_4 = NULL;
                                z_4 = t;
                                if((v_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = z_4;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_17, x_4);
                t = y_6(v_17, x_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
              }
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              t = u_17;
              t = k_0(t);
              if((v_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
            }
        }
      }
  }
  return(t);
}
ATerm z_6 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = e_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_29 = ATgetFirst((ATermList) t);
            a_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_29);
        t = SSL_table_put(q_45, r_45, a_18);
        t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, a_18);
      }
    else
      {
        t = f_29;
        t = SSL_table_remove(q_45, r_45);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
      }
    t = z_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  b_18 = t;
  t = r_86(t);
  d_18 = t;
  {
    ATerm j_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL;
        t = term_g_26;
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_18, term_g_26);
        t = e_7(d_18, i_18, t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = j_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_18 = ATgetFirst((ATermList) t);
        e_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_26;
    g_18 = t;
    t = SSL_table_put(d_18, g_18, e_18);
    t = f_18;
    {
      ATerm d_4 (ATerm t)
      {
        ATerm j_18 = NULL;
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_18, j_18);
        t = z_6(d_18, j_18, t);
        return(t);
      }
      t = map_1_0(d_4, t);
      t = b_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_87(t);
      t = n_87(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      t = n_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,s_18 = NULL;
  n_18 = t;
  t = q_86(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, term_g_26);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_29 = ATgetArgument(t, 0);
            ATerm t_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_26;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_18, term_g_26);
        t = e_7(o_18, z_18, t);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATempty;
      }
    p_18 = t;
    t = term_g_26;
    q_18 = t;
    t = (ATerm) ATinsert(CheckATermList(p_18), (ATerm) ATempty);
    s_18 = t;
    t = SSL_table_put(o_18, q_18, s_18);
    t = n_18;
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL;
      k_19 = t;
      t = SSL_remove(k_19);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = u_29;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  t = begin_scope_1_0(e_4, t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm c_19 = NULL;
      c_19 = t;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_19 = NULL,e_19 = NULL;
            t = term_y_26;
            d_19 = t;
            t = term_g_26;
            e_19 = t;
            t = term_z_29;
            t = e_7(d_19, e_19, t);
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_19 != NULL) && (b_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_19 = ATgetFirst((ATermList) t);
            {
              ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(b_19);
        t = map_1_0(g_4, t);
        t = c_19;
        t = end_scope_1_0(i_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(v_89, f_4, t);
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = term_d_30;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm e_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        t = term_a_27;
        t = get_config_0_0(t);
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_19);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = e_30;
        t = term_x_12;
      }
    t = w_89(t);
    t = copy_to_1_0(k_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_19 = NULL,u_19 = NULL,w_19 = NULL,z_19 = NULL,a_20 = NULL;
  s_19 = t;
  t = term_t_26;
  t = whoami_0_0(t);
  u_19 = t;
  t = term_k_20;
  w_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_30), u_19), term_h_30);
  z_19 = t;
  t = SSL_printnl(w_19, z_19);
  t = term_w_12;
  a_20 = t;
  t = SSL_exit(a_20);
  t = s_19;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  if(match_string(t, "-k"))
    {
      t = c_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_20;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm d_20 = NULL,f_20 = NULL,g_20 = NULL;
  d_20 = t;
  t = SSL_string_to_int(d_20);
  f_20 = t;
  t = term_m_27;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_27, f_20);
  t = h_7(g_20, f_20, t);
  t = d_20;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, o_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  if(match_string(t, "-S"))
    {
      t = o_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_20;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  t = term_s_12;
  p_20 = t;
  t = term_k_30;
  q_20 = t;
  t = term_o_30;
  t = h_7(p_20, q_20, t);
  t = term_p_30;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  t = SSL_string_to_int(r_20);
  s_20 = t;
  t = term_s_12;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, s_20);
  t = h_7(t_20, s_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_20);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_u_30;
  u_20 = t;
  t = term_t_26;
  v_20 = t;
  t = term_l_31;
  t = h_7(u_20, v_20, t);
  t = term_m_31;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, s_4, u_4, t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm t_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_4, b_5, e_5, t);
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = t_31;
            t = Option_3_0(f_5, g_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm h_7 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm w_20 = NULL;
  t = term_x_31;
  w_20 = t;
  t = SSL_table_put(w_20, l_47, m_47);
  t = (ATerm) ATmakeAppl(sym__3, term_x_31, l_47, m_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_21 = NULL,d_21 = NULL,f_21 = NULL;
      t = term_t_26;
      t = d_0(t);
      c_21 = t;
      t = term_y_31;
      d_21 = t;
      t = term_z_31;
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, c_21);
      t = f_7(d_21, f_21, c_21, t);
      _fail(t);
    }
  else
    {
      ATerm i_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = a_0(t);
      t = term_t_26;
      t = c_0(t);
      i_21 = t;
      t = (ATerm) ATinsert(CheckATermList(a_21), i_21);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-o"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm q_21 = NULL,s_21 = NULL;
  q_21 = t;
  t = term_z_26;
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_26, q_21);
  t = h_7(s_21, q_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_21);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, l_5, m_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  if(match_string(t, "-i"))
    {
      t = x_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_21;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm z_21 = NULL,d_22 = NULL;
  z_21 = t;
  t = term_a_27;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, z_21);
  t = h_7(d_22, z_21, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_21);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, v_5, w_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm p_22 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_22, t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_76(t);
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm g_22 = NULL,i_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_22 = ATgetFirst((ATermList) t);
            i_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_22;
        {
          ATerm y_5 (ATerm t)
          {
            t = i_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_5, t);
        }
      }
    }
  return(t);
}
ATerm f_23 (ATerm s_22, ATerm t)
{
  ATerm w_22 = NULL;
  t = SSL_explode_term(s_22);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
      {
        ATerm r_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              t = z_22;
              return(t);
            }
            t = x_22;
            t = at_end_1_0(b_6, t);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = r_32;
            t = f_23(a_23, t);
          }
      }
    }
  else
    {
      t = f_23(a_23, t);
    }
  return(t);
}
ATerm x_6 (ATerm r_47, ATerm q_47, ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,n_23 = NULL;
  t = r_47;
  {
    ATerm x_32 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
    h_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_47, h_23);
    t = conc_0_0(t);
    i_23 = t;
    t = term_x_31;
    n_23 = t;
    t = SSL_table_put(n_23, r_47, i_23);
    t = (ATerm) ATmakeAppl(sym__3, term_x_31, r_47, i_23);
  }
  return(t);
}
ATerm f_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_33 = ATgetArgument(t, 0);
            ATerm i_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = e_7(l_45, m_45, t);
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATempty;
      }
    q_23 = t;
    t = (ATerm) ATinsert(CheckATermList(q_23), k_45);
    r_23 = t;
    t = SSL_table_put(l_45, m_45, r_23);
    t = p_23;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_24 = NULL,j_24 = NULL,k_24 = NULL;
      t = term_t_26;
      t = j_0(t);
      h_24 = t;
      t = term_y_31;
      j_24 = t;
      t = term_z_31;
      k_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, h_24);
      t = f_7(j_24, k_24, h_24, t);
      _fail(t);
    }
  else
    {
      ATerm o_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_24 = ATgetFirst((ATermList) t);
          g_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      t = h_0(t);
      t = e_24;
      t = i_0(t);
      o_24 = t;
      t = (ATerm) ATinsert(CheckATermList(g_24), o_24);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  if(match_string(t, "-I"))
    {
      t = q_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = q_24;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t = term_h_27;
  v_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_24), term_h_27);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, (ATerm) ATinsert(ATinsert(ATempty, u_24), term_h_27));
  t = x_6(v_24, w_24, t);
  t = term_t_26;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm include_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, e_6, f_6, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  t = term_o_28;
  a_25 = t;
  t = term_k_33;
  b_25 = t;
  t = term_l_33;
  t = h_7(a_25, b_25, t);
  t = z_24;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--mod", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  t = term_n_33;
  d_25 = t;
  t = term_p_28;
  e_25 = t;
  t = term_o_33;
  t = h_7(d_25, e_25, t);
  t = c_25;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm input_type_option_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_6, i_6, n_6, t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = Option_3_0(b_7, c_7, k_7, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_26;
  t = whoami_0_0(t);
  f_25 = t;
  t = term_k_20;
  g_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_33), f_25);
  j_25 = t;
  t = SSL_printnl(g_25, j_25);
  t = term_w_12;
  k_25 = t;
  t = SSL_exit(k_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_7 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_43, h_43);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = SSL_addr(g_43, h_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_82(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm n_25 = NULL,o_25 = NULL,r_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_25 = ATgetFirst((ATermList) t);
            o_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_25;
        t = foldr_2_0(t_82, u_82, t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_25, r_25);
        t = u_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm x_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(x_5, a_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_25 = NULL,p_5 = NULL,s_5 = NULL;
  t = times_0_0(t);
  p_5 = t;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5;
  t = foldr_2_0(l_7, m_7, t);
  v_25 = t;
  t = SSL_TicksToSeconds(v_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_26;
        if((k_26 != t))
          {
            _fail(t);
          }
        t = j_26;
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
        {
          ATerm b_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_26, l_26);
              ;
              LocalPopChoice(c_34);
            }
          else
            {
              t = b_34;
              t = SSL_gtr(k_26, l_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_26 = NULL,s_26 = NULL;
      q_26 = t;
      t = term_s_12;
      t = get_config_0_0(t);
      s_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_26, term_w_12);
      t = geq_0_0(t);
      t = q_26;
      t = y_87(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm v_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  t = run_time_0_0(t);
  v_26 = t;
  t = term_t_26;
  t = whoami_0_0(t);
  c_27 = t;
  t = term_k_20;
  d_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), v_26), term_p_13), c_27);
  e_27 = t;
  t = SSL_printnl(d_27, e_27);
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), v_26), term_p_13), c_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_30;
  f_27 = t;
  t = SSL_exit(f_27);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      t = fetch_1_0(o_7, t);
    }
  t = x_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_27 = ATgetFirst((ATermList) t);
      j_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_27 = NULL,r_27 = NULL;
        t = j_27;
        t = g_0(t);
        q_27 = t;
        t = i_27;
        t = e_0(t);
        r_27 = t;
        t = j_27;
        {
          ATerm p_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_27), r_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, p_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_26;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL,x_0 = NULL,z_0 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  s_27 = t;
  t = t_27;
  t = y_68(t);
  u_27 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_27);
  x_0 = t;
  t = SSLsetAnnotations(x_0, s_27);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_28), term_n_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_28 = NULL,e_28 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = fetch_1_0(q_7, t);
    }
  t = term_q_34;
  t = echo_0_0(t);
  t = term_y_31;
  a_28 = t;
  t = term_z_31;
  e_28 = t;
  t = term_r_34;
  t = e_7(a_28, e_28, t);
  t = reverse_acc_2_0(_id, s_7, t);
  t = map_1_0(t_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,k_28 = NULL,n_28 = NULL,b_1 = NULL,c_1 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  h_28 = t;
  t = i_28;
  t = z_68(t);
  k_28 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_28);
  b_1 = t;
  t = SSLsetAnnotations(b_1, h_28);
  return(t);
}
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm q_28 (ATerm t)
  {
    ATerm s_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_76, _id, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = s_34;
        t = Cons_2_0(_id, q_28, t);
      }
    return(t);
  }
  t = q_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,z_28 = NULL;
  s_28 = t;
  {
    ATerm w_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_35 = ATgetFirst((ATermList) t);
                ATerm b_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_28;
          }
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATinsert(ATempty, s_28);
      }
    t_28 = t;
    t = term_d_30;
    z_28 = t;
    t = SSL_printnl(z_28, t_28);
    t = s_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_33;
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
  ATerm h_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  h_29 = t;
  t = g_72(t);
  k_29 = t;
  t = term_k_20;
  l_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_29), k_29);
  m_29 = t;
  t = SSL_printnl(l_29, m_29);
  t = h_29;
  return(t);
}
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm v_29 (ATerm t)
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = Cons_2_0(b_76, v_29, t);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL;
      f_30 = t;
      t = SSL_is_string(f_30);
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
            t = map_1_0(w_7, t);
            ;
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            {
              ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
              l_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_30 = ATgetArgument(t, 0);
                  t = m_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_30 = ATgetArgument(t, 0);
                      t = m_30;
                      {
                        ATerm l_35 = t;
                        int m_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_35);
                          }
                        else
                          {
                            t = l_35;
                            t = debug_1_0(c_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_30 = NULL,s_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_30 = ATgetArgument(t, 0);
                          n_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_30;
                      t = eval_config_0_0(t);
                      r_30 = t;
                      t = n_30;
                      t = eval_config_0_0(t);
                      s_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
                      t = d_7(r_30, s_30, t);
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
  ATerm v_30 = NULL,w_30 = NULL;
  v_30 = t;
  t = term_x_31;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_31, v_30);
  t = e_7(w_30, v_30, t);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL,y_30 = NULL;
        t = eval_config_0_0(t);
        x_30 = t;
        t = term_x_31;
        y_30 = t;
        t = SSL_table_put(y_30, v_30, x_30);
        t = x_30;
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
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
ATerm h_8 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  t = term_p_35;
  z_30 = t;
  t = term_t_26;
  a_31 = t;
  t = term_q_35;
  t = h_7(z_30, a_31, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  t = term_p_35;
  b_31 = t;
  t = term_t_26;
  c_31 = t;
  t = term_q_35;
  t = h_7(b_31, c_31, t);
  t = term_s_35;
  d_31 = t;
  t = term_t_26;
  e_31 = t;
  t = term_t_35;
  t = h_7(d_31, e_31, t);
  t = term_u_35;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, h_8, i_8, t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = Option_3_0(j_8, k_8, o_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,d_1 = NULL,e_1 = NULL;
  k_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_31 = ATgetFirst((ATermList) t);
      h_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_31);
  f_31 = t;
  t = g_31;
  t = s_63(t);
  i_31 = t;
  t = h_31;
  t = t_63(t);
  j_31 = t;
  e_1 = t;
  t = (ATerm) ATinsert(CheckATermList(j_31), i_31);
  d_1 = t;
  t = SSLsetAnnotations(d_1, f_31);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  t = term_t_33;
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, r_31);
  t = h_7(s_31, r_31, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_36;
        t = v_93(t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
      }
    t = q_31;
    {
      ATerm q_8 (ATerm t)
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_36 = t;
            int e_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_36);
              }
            else
              {
                t = d_36;
                t = v_93(t);
                t = Cons_2_0(_id, q_8, t);
              }
            ;
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm u_31 = NULL,v_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_31 = ATgetFirst((ATermList) t);
                  v_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_31), (ATerm) ATmakeAppl(sym_Undefined_1, u_31));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_8, q_8, t);
    }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm j_32 = NULL;
  j_32 = t;
  if(match_string(t, "--help"))
    {
      t = j_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_32;
        }
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  t = term_m_34;
  k_32 = t;
  t = term_t_26;
  l_32 = t;
  t = term_f_36;
  t = h_7(k_32, l_32, t);
  t = term_g_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  c_32 = t;
  t = term_y_31;
  f_32 = t;
  t = term_z_31;
  g_32 = t;
  t = (ATerm) ATempty;
  h_32 = t;
  t = SSL_table_put(f_32, g_32, h_32);
  t = c_32;
  {
    ATerm r_8 (ATerm t)
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_93(t);
          ;
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          {
            ATerm k_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, t_8, u_8, t);
                ;
                LocalPopChoice(l_36);
              }
            else
              {
                t = k_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_8, t);
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = NULL;
          s_32 = t;
          {
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_9 = NULL;
                t = s_32;
                {
                  ATerm q_36 = t;
                  int r_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_36);
                    }
                  else
                    {
                      t = q_36;
                      t = fetch_1_0(x_8, t);
                    }
                  t = s_32;
                  t = default_system_usage_0_0(t);
                  t = term_k_30;
                  d_9 = t;
                  t = SSL_exit(d_9);
                }
                ;
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                {
                  ATerm l_9 = NULL;
                  t = term_p_35;
                  t = get_config_0_0(t);
                  t = s_32;
                  t = default_system_about_0_0(t);
                  t = term_k_30;
                  l_9 = t;
                  t = SSL_exit(l_9);
                }
              }
          }
          ;
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm s_36 = t;
            int t_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
                ATerm y_8 (ATerm t)
                {
                  ATerm b_9 (ATerm t)
                  {
                    if(((d_32 != NULL) && (d_32 != t)))
                      _fail(t);
                    else
                      d_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_9, t);
                  return(t);
                }
                t = fetch_1_0(y_8, t);
                t = term_k_20;
                t_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_u_36);
                u_32 = t;
                t = SSL_printnl(t_32, u_32);
                t = (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_u_36));
                t = default_system_usage_0_0(t);
                t = term_w_12;
                v_32 = t;
                t = SSL_exit(v_32);
                ;
                LocalPopChoice(t_36);
              }
            else
              {
                t = s_36;
              }
          }
        }
      e_32 = t;
      t = term_y_31;
      i_32 = t;
      t = SSL_table_destroy(i_32);
      t = e_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  t = parse_options_1_0(z_91, t);
  y_32 = t;
  t = term_v_36;
  z_32 = t;
  t = SSL_table_create(z_32);
  t = term_v_36;
  a_33 = t;
  t = term_w_36;
  b_33 = t;
  t = SSL_table_put(a_33, b_33, y_32);
  t = y_32;
  t = b_92(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_92, t);
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
              t = c_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0_0(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = include_option_0_0(t);
            ;
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            {
              ATerm f_37 = t;
              int g_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_option_0_0(t);
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
                        t = output_option_0_0(t);
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
                              t = Option_3_0(i_9, k_9, p_9, t);
                              ;
                              LocalPopChoice(k_37);
                            }
                          else
                            {
                              t = j_37;
                              {
                                ATerm l_37 = t;
                                int m_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = verbose_option_0_0(t);
                                    ;
                                    LocalPopChoice(m_37);
                                  }
                                else
                                  {
                                    t = l_37;
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
ATerm g_9 (ATerm t)
{
  t = xtc_io_1_0(q_9, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = term_n_37;
  c_33 = t;
  t = term_t_26;
  d_33 = t;
  t = term_o_37;
  t = h_7(c_33, d_33, t);
  t = term_p_37;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = pre_process_input_0_0(t);
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(s_37);
        t = xtc_transform_file_2_0(r_9, pass_verbose_0_0, t);
      }
    else
      {
        t = r_37;
        t = xtc_transform_term_2_0(u_10, pass_verbose_0_0, t);
      }
    {
      ATerm v_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(y_37);
            }
          else
            {
              t = x_37;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(w_37);
          t = xtc_transform_file_2_0(v_10, pass_verbose_0_0, t);
        }
      else
        {
          t = v_37;
          t = xtc_transform_term_2_0(w_10, pass_verbose_0_0, t);
        }
      t = pp_astratego_0_0(t);
    }
  }
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_9, default_usage_0_0, _id, g_9, t);
  return(t);
}
