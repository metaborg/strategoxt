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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Bagof_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
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
ATerm term_y_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_n_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_p_24;
ATerm term_y_23;
ATerm term_l_20;
ATerm term_z_19;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
void init_constant_terms (void)
{
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_c_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_e_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_l_13);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_x_30);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_m_32, term_l_13);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_l_13);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_l_13);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_w_34, term_l_13);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm a_6 (ATerm k_74 (ATerm), ATerm v_18, ATerm w_18, ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm e_6 (ATerm g_93 (ATerm), ATerm n_38, ATerm l_38, ATerm);
ATerm w_1 (ATerm);
ATerm b_6 (ATerm l_74 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm d_8 (ATerm x_4, ATerm z_4, ATerm a_5, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm c_11 (ATerm h_9, ATerm i_9, ATerm n_9, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm c_6 (ATerm r_50, ATerm q_50, ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm j_5 (ATerm);
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm d_6 (ATerm j_74 (ATerm), ATerm q_18, ATerm);
ATerm o_6 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm f_6 (ATerm j_19, ATerm k_19, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm);
ATerm p_6 (ATerm s_104 (ATerm), ATerm d_55, ATerm e_55, ATerm g_55, ATerm f_55, ATerm);
ATerm at_end_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_25 (ATerm i_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm j_6 (ATerm x_598, ATerm c_599, ATerm f_56, ATerm);
ATerm while_not_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm n_37 (ATerm z_31, ATerm e_32, ATerm f_32, ATerm);
ATerm o_37 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm);
ATerm p_37 (ATerm t_33, ATerm v_33, ATerm w_33, ATerm);
ATerm q_37 (ATerm n_34, ATerm r_34, ATerm s_34, ATerm);
ATerm r_37 (ATerm d_35, ATerm e_35, ATerm f_35, ATerm);
ATerm v_7 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm s_6 (ATerm z_49, ATerm a_50, ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm t_6 (ATerm t_49, ATerm u_49, ATerm);
ATerm end_scope_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_60 (ATerm), ATerm x_60 (ATerm), ATerm);
ATerm w_6 (ATerm z_39, ATerm a_40, ATerm);
ATerm x_6 (ATerm n_43, ATerm o_43, ATerm);
ATerm z_6 (ATerm z_94 (ATerm), ATerm n_424, ATerm r_43, ATerm);
ATerm y_6 (ATerm j_43, ATerm k_43, ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_98 (ATerm), ATerm);
ATerm l_48 (ATerm f_48, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_7 (ATerm p_43, ATerm);
ATerm b_7 (ATerm b_40, ATerm c_40, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_50 (ATerm v_48, ATerm);
ATerm l_50 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm);
ATerm m_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm v_6 (ATerm p_34, ATerm q_34, ATerm);
ATerm debug_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_7 (ATerm q_44, ATerm r_44, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_7 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_7 (ATerm z_36, ATerm a_37, ATerm);
ATerm foldr_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm i_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm need_help_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_7 (ATerm f_51, ATerm g_51, ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_101 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm l_11 (ATerm);
ATerm y_11 (ATerm);
ATerm parse_options_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm h_12 (ATerm);
ATerm j_12 (ATerm);
ATerm n_12 (ATerm);
ATerm u_12 (ATerm);
ATerm iowrap_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm);
ATerm x_12 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,f_1 = NULL;
  y_0 = t;
  t = term_l_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_m_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_13), z_0), term_p_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_y_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_1 = ATgetArgument(t, 0);
      {
        ATerm b_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_1);
  u_1 = t;
  t = term_c_14;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_1), term_c_14);
  t = e_6(p_0, u_1, v_1, t);
  t = t_1;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm a_6 (ATerm k_74 (ATerm), ATerm v_18, ATerm w_18, ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm g_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = w_18;
    t = map_1_0(o_0, t);
    t = g_1;
    if(match_cons(t, sym_SDefT_4))
      {
        k_1 = ATgetArgument(t, 0);
        l_1 = ATgetArgument(t, 1);
        m_1 = ATgetArgument(t, 2);
        n_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_1);
    j_1 = t;
    t = (ATerm) ATempty;
    q_1 = t;
    t = term_c_14;
    r_1 = t;
    t = term_e_14;
    t = e_6(q_0, q_1, r_1, t);
    t = n_1;
    t = k_74(t);
    o_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_1, l_1, m_1, o_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, j_1);
    return(t);
  }
  t = scope_2_0(a_0, b_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  z_1 = t;
  t = (ATerm) ATempty;
  e_2 = t;
  t = term_c_14;
  f_2 = t;
  t = term_e_14;
  t = e_6(v_0, e_2, f_2, t);
  t = z_1;
  t = save_Binding_0_0(t);
  x_1 = t;
  t = z_1;
  t = b_74(t);
  y_1 = t;
  t = (ATerm) ATempty;
  c_2 = t;
  t = term_c_14;
  d_2 = t;
  t = term_e_14;
  t = e_6(w_0, c_2, d_2, t);
  t = term_z_13;
  b_2 = t;
  t = SSL_table_destroy(b_2);
  t = term_z_13;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, x_1);
  t = c_6(a_2, x_1, t);
  t = y_1;
  return(t);
}
ATerm e_6 (ATerm g_93 (ATerm), ATerm n_38, ATerm l_38, ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL;
  j_2 = t;
  t = g_93(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_2, n_38, l_38);
  t = f_7(g_2, n_38, l_38, t);
  {
    ATerm f_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = term_j_14;
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_2, term_j_14);
        t = e_7(g_2, r_2, t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = f_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_2 = ATgetFirst((ATermList) t);
        i_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_14;
    n_2 = t;
    t = (ATerm) ATinsert(CheckATermList(i_2), (ATerm) ATinsert(CheckATermList(h_2), n_38));
    p_2 = t;
    t = SSL_table_put(g_2, n_2, p_2);
    t = j_2;
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm b_6 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,g_3 = NULL,l_3 = NULL,m_3 = NULL,s_3 = NULL,y_3 = NULL,d_5 = NULL;
  w_2 = t;
  t = save_Binding_0_0(t);
  v_2 = t;
  t = save_CurrentTerm_0_0(t);
  u_2 = t;
  t = w_2;
  if(match_cons(t, sym_Let_2))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_2);
  x_2 = t;
  t = a_3;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
      a_4 = t;
      t = (ATerm) ATempty;
      e_4 = t;
      t = term_c_14;
      f_4 = t;
      t = term_e_14;
      t = e_6(w_1, e_4, f_4, t);
      t = term_z_13;
      d_4 = t;
      t = SSL_table_destroy(d_4);
      t = term_z_13;
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_13, v_2);
      t = c_6(b_4, v_2, t);
      t = a_4;
      t = l_74(t);
      return(t);
    }
    t = map_1_0(x_0, t);
    if(((e_3 != NULL) && (e_3 != t)))
      _fail(t);
    else
      e_3 = t;
    t = term_d_14;
    if(((y_3 != NULL) && (y_3 != t)))
      _fail(t);
    else
      y_3 = t;
    t = SSL_table_destroy(y_3);
    t = term_d_14;
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_14, u_2);
    t = c_6(s_3, u_2, t);
    t = term_z_13;
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    t = SSL_table_destroy(m_3);
    t = term_z_13;
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_13, v_2);
    t = c_6(l_3, v_2, t);
    t = b_3;
    t = l_74(t);
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, e_3, g_3);
    if(((d_5 != NULL) && (d_5 != t)))
      _fail(t);
    else
      d_5 = t;
    t = SSLsetAnnotations(d_5, x_2);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm k_5 = NULL,n_5 = NULL,o_5 = NULL,t_5 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      t = n_5;
      {
        ATerm q_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_5 = ATgetFirst((ATermList) t);
                {
                  ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_14);
            t = o_5;
            {
              ATerm v_14 = t;
              int w_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm x_14 = ATgetArgument(t, 0);
                      t_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_14);
                  t = k_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_6;
                    }
                  else
                    {
                      ATerm z_14 = t;
                      int a_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_8(k_5, t_5, i_6, t);
                          ;
                          LocalPopChoice(a_15);
                        }
                      else
                        {
                          t = z_14;
                          t = i_6;
                        }
                    }
                }
              else
                {
                  t = v_14;
                  t = k_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_6;
                    }
                  else
                    {
                      t = i_6;
                    }
                }
            }
          }
        else
          {
            t = q_14;
            t = k_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = i_6;
              }
            else
              {
                t = i_6;
              }
          }
      }
    }
  else
    {
      t = i_6;
    }
  return(t);
}
ATerm d_8 (ATerm x_4, ATerm z_4, ATerm a_5, ATerm t)
{
  t = a_5;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 = NULL;
        t = term_d_14;
        f_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_14, x_4);
        t = e_7(f_0, x_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_15 = ATgetFirst((ATermList) t);
            if(match_cons(d_15, sym_Defined_2))
              {
                ATerm c_16 = ATgetArgument(d_15, 0);
                if((z_4 != ATgetArgument(d_15, 1)))
                  {
                    _fail(ATgetArgument(d_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm e_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_5;
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATempty, term_c_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL;
  t = map_1_0(k_2, t);
  s_4 = t;
  t = term_d_14;
  v_4 = t;
  t = SSL_table_destroy(v_4);
  t = term_d_14;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, s_4);
  t = c_6(t_4, s_4, t);
  t = s_4;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_10 = NULL,f_10 = NULL,j_10 = NULL,m_10 = NULL,s_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      t = f_10;
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_10 = ATgetFirst((ATermList) t);
                {
                  ATerm i_16 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_16);
            t = j_10;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_16 = ATgetArgument(t, 0);
                      m_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_16);
                  t = c_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_10;
                    }
                  else
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_11(c_10, m_10, s_10, t);
                          ;
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          t = s_10;
                        }
                    }
                }
              else
                {
                  t = j_16;
                  t = c_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_10;
                    }
                  else
                    {
                      t = s_10;
                    }
                }
            }
          }
        else
          {
            t = g_16;
            t = c_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = s_10;
              }
            else
              {
                t = s_10;
              }
          }
      }
    }
  else
    {
      t = s_10;
    }
  return(t);
}
ATerm c_11 (ATerm h_9, ATerm i_9, ATerm n_9, ATerm t)
{
  t = n_9;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_z_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, h_9);
        t = e_7(u_0, h_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_16 = ATgetFirst((ATermList) t);
            if(match_cons(r_16, sym_Defined_2))
              {
                ATerm t_16 = ATgetArgument(r_16, 0);
                if((i_9 != ATgetArgument(r_16, 1)))
                  {
                    _fail(ATgetArgument(r_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_9;
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATempty, term_c_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm x_8 = NULL,c_9 = NULL,e_9 = NULL;
  t = map_1_0(l_2, t);
  x_8 = t;
  t = term_z_13;
  e_9 = t;
  t = SSL_table_destroy(e_9);
  t = term_z_13;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, x_8);
  t = c_6(c_9, x_8, t);
  t = x_8;
  return(t);
}
ATerm c_6 (ATerm r_50, ATerm q_50, ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm h_11 = NULL,i_11 = NULL;
    if(match_cons(t, sym__2))
      {
        h_11 = ATgetArgument(t, 0);
        i_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(r_50, h_11, i_11);
    t = (ATerm) ATmakeAppl(sym__3, r_50, h_11, i_11);
    return(t);
  }
  t = q_50;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_d_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm n_11 = NULL,o_11 = NULL;
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), n_11);
    t = e_7(not_null(m_11), n_11, t);
    o_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_11, o_11);
    return(t);
  }
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  t = SSL_table_keys(m_11);
  t = map_1_0(j_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_z_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,a_12 = NULL,b_12 = NULL;
  v_11 = t;
  t = save_Binding_0_0(t);
  p_11 = t;
  t = save_CurrentTerm_0_0(t);
  q_11 = t;
  t = v_11;
  t = p_74(t);
  u_11 = t;
  t = save_Binding_0_0(t);
  r_11 = t;
  t = term_z_13;
  b_12 = t;
  t = SSL_table_destroy(b_12);
  t = term_z_13;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, p_11);
  t = c_6(a_12, p_11, t);
  t = p_11;
  t = save_CurrentTerm_0_0(t);
  s_11 = t;
  t = term_d_14;
  x_11 = t;
  t = SSL_table_destroy(x_11);
  t = term_d_14;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, q_11);
  t = c_6(w_11, q_11, t);
  t = u_11;
  t = q_74(t);
  t_11 = t;
  t = r_11;
  t = isect_Binding_0_0(t);
  t = s_11;
  t = isect_CurrentTerm_0_0(t);
  t = t_11;
  return(t);
}
ATerm prop_choice_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm y_16 = ATgetArgument(t, 0);
            ATerm a_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_16);
        {
          ATerm k_3 (ATerm t)
          {
            ATerm o_12 = NULL,p_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL,g_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                p_12 = ATgetArgument(t, 0);
                w_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            o_12 = t;
            t = p_12;
            t = o_74(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, w_12);
            g_5 = t;
            t = SSLsetAnnotations(g_5, o_12);
            return(t);
          }
          ATerm c_4 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,f_13 = NULL,g_13 = NULL,h_5 = NULL;
            g_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                b_13 = ATgetArgument(t, 0);
                c_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_13);
            a_13 = t;
            t = c_13;
            t = o_74(t);
            f_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, f_13);
            h_5 = t;
            t = SSLsetAnnotations(h_5, a_13);
            return(t);
          }
          t = f_12;
          t = prop_abstract_choice_2_0(k_3, c_4, t);
        }
      }
    else
      {
        t = v_16;
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm e_17 = ATgetArgument(t, 0);
                  ATerm f_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(c_17);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm n_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,l_5 = NULL;
                  u_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      r_13 = ATgetArgument(t, 0);
                      s_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_13);
                  n_13 = t;
                  t = r_13;
                  t = o_74(t);
                  t_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, t_13, s_13);
                  l_5 = t;
                  t = SSLsetAnnotations(l_5, n_13);
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  ATerm v_13 = NULL,x_13 = NULL,a_14 = NULL,h_14 = NULL,k_14 = NULL,r_5 = NULL;
                  k_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      x_13 = ATgetArgument(t, 0);
                      a_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_14);
                  v_13 = t;
                  t = a_14;
                  t = o_74(t);
                  h_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, x_13, h_14);
                  r_5 = t;
                  t = SSLsetAnnotations(r_5, v_13);
                  return(t);
                }
                t = f_12;
                t = prop_abstract_choice_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = b_17;
              {
                ATerm g_17 = t;
                int h_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm i_17 = ATgetArgument(t, 0);
                        ATerm k_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_17);
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,r_14 = NULL,v_5 = NULL;
                        r_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            n_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_14);
                        l_14 = t;
                        t = m_14;
                        t = o_74(t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, o_14, n_14);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, l_14);
                        return(t);
                      }
                      ATerm k_4 (ATerm t)
                      {
                        ATerm t_14 = NULL,y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,w_5 = NULL;
                        h_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            y_14 = ATgetArgument(t, 0);
                            f_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_15);
                        t_14 = t;
                        t = f_15;
                        t = o_74(t);
                        g_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, y_14, g_15);
                        w_5 = t;
                        t = SSLsetAnnotations(w_5, t_14);
                        return(t);
                      }
                      t = f_12;
                      t = prop_abstract_choice_2_0(i_4, k_4, t);
                    }
                  }
                else
                  {
                    t = g_17;
                    {
                      ATerm l_4 (ATerm t)
                      {
                        ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,y_5 = NULL,x_5 = NULL;
                        v_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            q_15 = ATgetArgument(t, 0);
                            r_15 = ATgetArgument(t, 1);
                            s_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_15);
                        p_15 = t;
                        t = q_15;
                        t = o_74(t);
                        t_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_15, r_15, s_15);
                        x_5 = t;
                        t = SSLsetAnnotations(x_5, p_15);
                        u_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            j_15 = ATgetArgument(t, 0);
                            k_15 = ATgetArgument(t, 1);
                            l_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_15);
                        i_15 = t;
                        t = k_15;
                        t = o_74(t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_15, m_15, l_15);
                        y_5 = t;
                        t = SSLsetAnnotations(y_5, i_15);
                        return(t);
                      }
                      ATerm n_4 (ATerm t)
                      {
                        ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,z_5 = NULL;
                        d_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_15 = ATgetArgument(t, 0);
                            y_15 = ATgetArgument(t, 1);
                            z_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_16);
                        w_15 = t;
                        t = z_15;
                        t = o_74(t);
                        a_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_15, y_15, a_16);
                        z_5 = t;
                        t = SSLsetAnnotations(z_5, w_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm o_17 = ATgetArgument(t, 0);
                          ATerm p_17 = ATgetArgument(t, 1);
                          ATerm r_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = f_12;
                      t = prop_abstract_choice_2_0(l_4, n_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,i_1 = NULL,p_1 = NULL,g_8 = NULL;
      d_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm z_17 = ATgetArgument(t, 0);
          ATerm f_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_c_14;
      b_1 = t;
      t = term_e_14;
      t = e_6(o_4, a_1, b_1, t);
      t = d_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          i_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_17);
      e_1 = t;
      t = i_1;
      {
        ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
        if(((p_1 != NULL) && (p_1 != t)))
          _fail(t);
        else
          p_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, p_1);
        if(((g_8 != NULL) && (g_8 != t)))
          _fail(t);
        else
          g_8 = t;
        t = SSLsetAnnotations(g_8, e_1);
      }
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = s_17;
      {
        ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm i_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm y_17 = NULL;
              y_17 = t;
              {
                ATerm j_18 = t;
                int k_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm l_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_18);
                    t = y_17;
                  }
                else
                  {
                    t = j_18;
                    {
                      ATerm m_18 = t;
                      int o_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm t_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_18);
                          t = y_17;
                        }
                      else
                        {
                          t = m_18;
                          {
                            ATerm u_18 = t;
                            int x_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm z_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(x_18);
                                t = y_17;
                              }
                            else
                              {
                                t = u_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm b_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        if(((l_17 != NULL) && (l_17 != t)))
          _fail(t);
        else
          l_17 = t;
        t = (ATerm) ATempty;
        if(((m_17 != NULL) && (m_17 != t)))
          _fail(t);
        else
          m_17 = t;
        t = term_c_14;
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        t = term_e_14;
        t = e_6(q_4, m_17, n_17, t);
        t = l_17;
        t = SRTS_one(r_4, t);
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm d_3 = NULL,f_3 = NULL,h_3 = NULL,x_9 = NULL;
  t = Binding_0_0(t);
  h_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
  x_9 = t;
  t = SSLsetAnnotations(x_9, d_3);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,z_3 = NULL,g_11 = NULL;
  t = Binding_0_0(t);
  z_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_3);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_3);
  g_11 = t;
  t = SSLsetAnnotations(g_11, w_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
            ATerm o_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(h_19);
        {
          ATerm m_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,t_2 = NULL,y_2 = NULL,z_2 = NULL,c_3 = NULL,a_10 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_c_14;
          o_2 = t;
          t = term_e_14;
          t = e_6(w_4, m_2, o_2, t);
          t = s_20;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              t_2 = ATgetArgument(t, 1);
              y_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_20);
          q_2 = t;
          t = t_2;
          {
            ATerm y_4 (ATerm t)
            {
              t = exec_maybe_1_0(s_0, t);
              return(t);
            }
            t = map_1_0(y_4, t);
            if(((z_2 != NULL) && (z_2 != t)))
              _fail(t);
            else
              z_2 = t;
            t = y_2;
            t = alltd_1_0(b_5, t);
            if(((c_3 != NULL) && (c_3 != t)))
              _fail(t);
            else
              c_3 = t;
            t = (ATerm) ATmakeAppl(sym_PrimT_3, s_2, z_2, c_3);
            if(((a_10 != NULL) && (a_10 != t)))
              _fail(t);
            else
              a_10 = t;
            t = SSLsetAnnotations(a_10, q_2);
          }
        }
      }
    else
      {
        t = g_19;
        {
          ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,b_16 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm p_19 = ATgetArgument(t, 0);
              ATerm s_19 = ATgetArgument(t, 1);
              ATerm t_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          n_3 = t;
          t = term_c_14;
          o_3 = t;
          t = term_e_14;
          t = e_6(c_5, n_3, o_3, t);
          t = s_20;
          if(match_cons(t, sym_CallT_3))
            {
              q_3 = ATgetArgument(t, 0);
              r_3 = ATgetArgument(t, 1);
              t_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_20);
          p_3 = t;
          t = r_3;
          {
            ATerm e_5 (ATerm t)
            {
              t = exec_maybe_1_0(s_0, t);
              return(t);
            }
            t = map_1_0(e_5, t);
            if(((u_3 != NULL) && (u_3 != t)))
              _fail(t);
            else
              u_3 = t;
            t = t_3;
            t = alltd_1_0(j_5, t);
            if(((v_3 != NULL) && (v_3 != t)))
              _fail(t);
            else
              v_3 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, q_3, u_3, v_3);
            if(((b_16 != NULL) && (b_16 != t)))
              _fail(t);
            else
              b_16 = t;
            t = SSLsetAnnotations(b_16, p_3);
          }
        }
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
  h_22 = t;
  t = term_c_14;
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_22), term_c_14);
  t = e_6(k_6, h_22, i_22, t);
  t = g_22;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm d_6 (ATerm j_74 (ATerm), ATerm q_18, ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm g_21 = NULL,h_21 = NULL,n_21 = NULL,z_21 = NULL,e_22 = NULL,f_22 = NULL,o_16 = NULL;
    g_21 = t;
    t = q_18;
    t = map_1_0(h_6, t);
    t = g_21;
    if(match_cons(t, sym_Scope_2))
      {
        n_21 = ATgetArgument(t, 0);
        z_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_21);
    h_21 = t;
    t = z_21;
    t = j_74(t);
    e_22 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, n_21, e_22);
    o_16 = t;
    t = SSLsetAnnotations(o_16, h_21);
    f_22 = t;
    {
      ATerm v_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_22 = NULL,m_22 = NULL,n_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            ATerm l_6 (ATerm t)
            {
              ATerm o_22 = NULL;
              ATerm m_6 (ATerm t)
              {
                if(((o_22 != NULL) && (o_22 != t)))
                  _fail(t);
                else
                  o_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((o_22 != NULL) && (o_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_18;
              t = fetch_1_0(m_6, t);
              return(t);
            }
            t = oncetd_1_0(l_6, t);
            if(((j_22 != NULL) && (j_22 != t)))
              _fail(t);
            else
              j_22 = t;
            t = (ATerm) ATempty;
            if(((m_22 != NULL) && (m_22 != t)))
              _fail(t);
            else
              m_22 = t;
            t = term_c_14;
            if(((n_22 != NULL) && (n_22 != t)))
              _fail(t);
            else
              n_22 = t;
            t = term_e_14;
            t = e_6(n_6, m_22, n_22, t);
            t = j_22;
          }
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = v_19;
        }
      t = f_22;
    }
    return(t);
  }
  t = scope_2_0(q_5, g_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,d_23 = NULL,e_23 = NULL,u_16 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  x_22 = t;
  t = y_22;
  t = alltd_1_0(Binding_0_0, t);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
  u_16 = t;
  t = SSLsetAnnotations(u_16, x_22);
  d_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, u_22);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, u_22));
  t = e_6(o_6, v_22, w_22, t);
  t = d_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm f_23 (ATerm t)
  {
    ATerm b_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_77(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = b_20;
        t = SRTS_one(f_23, t);
      }
    return(t);
  }
  t = f_23(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = l_23;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm i_20 = ATgetArgument(t, 0);
          ATerm j_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm f_6 (ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm h_23 = NULL,j_23 = NULL,k_23 = NULL;
  h_23 = t;
  t = k_19;
  {
    ATerm k_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(q_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_20;
      }
    t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
    j_23 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, k_19);
    k_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_19), (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, k_19));
    t = e_6(r_6, j_23, k_23, t);
    t = h_23;
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_26 = ATgetFirst((ATermList) t);
      v_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_26;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_26;
            if((s_26 != t))
              {
                _fail(t);
              }
            t = q_26;
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            t = (ATerm) ATmakeAppl(sym__2, s_26, v_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, s_26, v_26);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(((ATgetType(o_20) != AT_LIST) || !(ATisEmpty(o_20))))
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
        {
          u_29 = ATgetFirst((ATermList) q_20);
          v_29 = (ATerm) ATgetNext((ATermList) q_20);
        }
      else
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
          {
            w_29 = ATgetFirst((ATermList) r_20);
            x_29 = (ATerm) ATgetNext((ATermList) r_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_29, w_29), (ATerm) ATmakeAppl(sym__2, v_29, x_29));
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_30), a_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL;
  t_28 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_20 = ATgetArgument(t, 0);
            ATerm w_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_20);
        t = t_28;
      }
    else
      {
        t = t_20;
        {
          ATerm r_29 = NULL;
          if(match_cons(t, sym__3))
            {
              u_28 = ATgetArgument(t, 0);
              v_28 = ATgetArgument(t, 1);
              y_28 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
          t = genzip_4_0(u_6, g_7, i_7, _id, t);
          r_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_29, y_28);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,h_30 = NULL;
  ATerm k_7 (ATerm t)
  {
    ATerm u_4 = NULL;
    t = g_101(t);
    u_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_4, not_null(h_30));
    t = lookup_0_0(t);
    t = h_101(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_30 != NULL) && (h_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_30 = ATgetArgument(t, 0);
      if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_30;
  t = alltd_1_0(k_7, t);
  return(t);
}
ATerm p_6 (ATerm s_104 (ATerm), ATerm d_55, ATerm e_55, ATerm g_55, ATerm f_55, ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t = d_55;
  t = s_104(t);
  t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,w_30 = NULL;
        if(match_cons(t, sym__2))
          {
            u_30 = ATgetArgument(t, 0);
            w_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_30;
        {
          ATerm l_7 (ATerm t)
          {
            if((u_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(l_7, t);
          t = (ATerm) ATmakeAppl(sym__2, u_30, w_30);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_55, e_55)), (ATerm) ATmakeAppl(sym__2, f_55, g_55));
    t = substitute_2_0(s_104, _id, t);
    if(match_cons(t, sym__2))
      {
        if(((s_30 != NULL) && (s_30 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_30 = ATgetArgument(t, 0);
        if(((t_30 != NULL) && (t_30 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_30, (ATerm) ATinsert(CheckATermList(s_30), (ATerm) ATmakeAppl(sym__2, d_55, e_55)));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm z_24 (ATerm t)
  {
    ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
    y_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_24 = ATgetFirst((ATermList) t);
        x_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_4 = NULL,m_4 = NULL,x_16 = NULL;
          t = SSLgetAnnotations(y_24);
          j_4 = t;
          t = x_24;
          t = z_24(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), w_24);
          x_16 = t;
          t = SSLsetAnnotations(x_16, j_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_24;
        t = s_82(t);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_23;
    }
  else
    {
      ATerm m_7 (ATerm t)
      {
        t = not_null(x_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_23 != NULL) && (w_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_23 = ATgetFirst((ATermList) t);
          if(((x_23 != NULL) && (x_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      t = at_end_1_0(m_7, t);
    }
  return(t);
}
ATerm q_25 (ATerm i_25, ATerm t)
{
  ATerm j_25 = NULL;
  t = SSL_explode_term(i_25);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 (ATerm t)
            {
              t = m_25;
              return(t);
            }
            t = l_25;
            t = at_end_1_0(n_7, t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = q_25(n_25, t);
          }
      }
    }
  else
    {
      t = q_25(n_25, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm q_28 (ATerm t)
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        {
          ATerm f_28 = NULL,i_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,t_17 = NULL;
          t = g_84(t);
          p_28 = t;
          if(match_cons(t, sym__2))
            {
              i_28 = ATgetArgument(t, 0);
              m_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_28);
          f_28 = t;
          t = i_28;
          t = i_84(t);
          n_28 = t;
          t = m_28;
          t = q_28(t);
          o_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
          t_17 = t;
          t = SSLsetAnnotations(t_17, f_28);
          t = h_84(t);
        }
      }
    return(t);
  }
  t = q_28(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) != AT_LIST) || !(ATisEmpty(d_21))))
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
        {
          z_25 = ATgetFirst((ATermList) f_21);
          b_26 = (ATerm) ATgetNext((ATermList) f_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            e_26 = ATgetFirst((ATermList) i_21);
            f_26 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_25, e_26), (ATerm) ATmakeAppl(sym__2, b_26, f_26));
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_26), g_26);
  return(t);
}
ATerm j_6 (ATerm x_598, ATerm c_599, ATerm f_56, ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t = SSL_explode_term(c_599);
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_598);
  if(match_cons(t, sym__2))
    {
      if((t_25 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_25, w_25);
  t = genzip_4_0(o_7, p_7, q_7, _id, t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, f_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_76(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = d_76(t);
        t = b_31(t);
      }
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm for_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  t = f_76(t);
  t = while_not_2_0(g_76, h_76, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_31, (ATerm) ATempty);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(((ATgetType(l_21) != AT_LIST) || !(ATisEmpty(l_21))))
        _fail(t);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_31;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,h_36 = NULL,k_36 = NULL,s_36 = NULL,t_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_36 = ATgetFirst((ATermList) t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
      t = b_36;
      if(match_cons(t, sym__2))
        {
          c_36 = ATgetArgument(t, 0);
          d_36 = ATgetArgument(t, 1);
          {
            ATerm m_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_37(s_36, t_36, k_36, t);
                ;
                LocalPopChoice(o_21);
              }
            else
              {
                t = m_21;
                {
                  ATerm p_21 = t;
                  int q_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_36;
                      t = p_6(v_7, c_36, d_36, h_36, t_36, t);
                      ;
                      LocalPopChoice(q_21);
                    }
                  else
                    {
                      t = p_21;
                      {
                        ATerm r_21 = t;
                        int s_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_37(s_36, t_36, k_36, t);
                            ;
                            LocalPopChoice(s_21);
                          }
                        else
                          {
                            t = r_21;
                            {
                              ATerm t_21 = t;
                              int u_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_37(s_36, t_36, k_36, t);
                                  ;
                                  LocalPopChoice(u_21);
                                }
                              else
                                {
                                  t = t_21;
                                  {
                                    ATerm v_21 = t;
                                    int w_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_37(s_36, t_36, k_36, t);
                                        ;
                                        LocalPopChoice(w_21);
                                      }
                                    else
                                      {
                                        t = v_21;
                                        t = r_37(s_36, t_36, k_36, t);
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
      else
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_37(s_36, t_36, k_36, t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              {
                ATerm a_22 = t;
                int b_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = o_37(s_36, t_36, k_36, t);
                    ;
                    LocalPopChoice(b_22);
                  }
                else
                  {
                    t = a_22;
                    {
                      ATerm c_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_37(s_36, t_36, k_36, t);
                          ;
                          LocalPopChoice(d_22);
                        }
                      else
                        {
                          t = c_22;
                          {
                            ATerm k_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_37(s_36, t_36, k_36, t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = k_22;
                                t = r_37(s_36, t_36, k_36, t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
    }
  else
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_37(s_36, t_36, k_36, t);
          ;
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = o_37(s_36, t_36, k_36, t);
                ;
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                {
                  ATerm t_22 = t;
                  int a_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_37(s_36, t_36, k_36, t);
                      ;
                      LocalPopChoice(a_23);
                    }
                  else
                    {
                      t = t_22;
                      {
                        ATerm b_23 = t;
                        int c_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = q_37(s_36, t_36, k_36, t);
                            ;
                            LocalPopChoice(c_23);
                          }
                        else
                          {
                            t = b_23;
                            t = r_37(s_36, t_36, k_36, t);
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
ATerm n_37 (ATerm z_31, ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm l_32 = NULL,o_32 = NULL,p_32 = NULL,v_17 = NULL;
  t = SSLgetAnnotations(f_32);
  l_32 = t;
  t = z_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_23 = ATgetFirst((ATermList) t);
      if(match_cons(g_23, sym__2))
        {
          o_32 = ATgetArgument(g_23, 0);
          if((o_32 != ATgetArgument(g_23, 1)))
            {
              _fail(ATgetArgument(g_23, 1));
            }
        }
      else
        _fail(t);
      p_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_32, e_32);
  v_17 = t;
  t = SSLsetAnnotations(v_17, l_32);
  return(t);
}
ATerm o_37 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm y_32 = NULL,d_33 = NULL,k_33 = NULL,l_33 = NULL,q_33 = NULL,w_17 = NULL;
  t = SSLgetAnnotations(v_32);
  y_32 = t;
  t = t_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_23 = ATgetFirst((ATermList) t);
      if(match_cons(i_23, sym__2))
        {
          k_33 = ATgetArgument(i_23, 0);
          l_33 = ATgetArgument(i_23, 1);
        }
      else
        _fail(t);
      q_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_6(k_33, l_33, q_33, t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_33, u_32);
  w_17 = t;
  t = SSLsetAnnotations(w_17, y_32);
  return(t);
}
ATerm p_37 (ATerm t_33, ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm x_33 = NULL,c_34 = NULL,d_34 = NULL,k_34 = NULL,l_34 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(w_33);
  x_33 = t;
  t = t_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          ATerm n_23 = ATgetArgument(m_23, 0);
          if(match_cons(n_23, sym_As_2))
            {
              c_34 = ATgetArgument(n_23, 0);
              d_34 = ATgetArgument(n_23, 1);
            }
          else
            _fail(t);
          k_34 = ATgetArgument(m_23, 1);
        }
      else
        _fail(t);
      l_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(l_34), (ATerm) ATmakeAppl(sym__2, d_34, k_34)), (ATerm) ATmakeAppl(sym__2, c_34, k_34)), v_33);
  x_17 = t;
  t = SSLsetAnnotations(x_17, x_33);
  return(t);
}
ATerm q_37 (ATerm n_34, ATerm r_34, ATerm s_34, ATerm t)
{
  ATerm t_34 = NULL,z_34 = NULL,a_18 = NULL;
  t = SSLgetAnnotations(s_34);
  t_34 = t;
  t = n_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_23 = ATgetFirst((ATermList) t);
      if(match_cons(o_23, sym__2))
        {
          ATerm p_23 = ATgetArgument(o_23, 0);
          if(!(match_cons(p_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm q_23 = ATgetArgument(o_23, 1);
          }
        }
      else
        _fail(t);
      z_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_34, r_34);
  a_18 = t;
  t = SSLsetAnnotations(a_18, t_34);
  return(t);
}
ATerm r_37 (ATerm d_35, ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm k_35 = NULL,n_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,d_18 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(f_35);
  k_35 = t;
  t = d_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_23 = ATgetFirst((ATermList) t);
      if(match_cons(r_23, sym__2))
        {
          n_35 = ATgetArgument(r_23, 0);
          o_35 = ATgetArgument(r_23, 1);
        }
      else
        _fail(t);
      q_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_35;
  {
    ATerm s_23 = t;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL,x_35 = NULL,a_36 = NULL,b_18 = NULL;
        a_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_36);
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_35);
        b_18 = t;
        t = SSLsetAnnotations(b_18, u_35);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_23;
      }
    t = o_35;
    if(match_cons(t, sym_Var_1))
      {
        s_35 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_35);
    r_35 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, s_35);
    c_18 = t;
    t = SSLsetAnnotations(c_18, r_35);
    t = (ATerm) ATmakeAppl(sym__2, q_35, e_35);
    d_18 = t;
    t = SSLsetAnnotations(d_18, k_35);
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,e_18 = NULL;
  l_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_37);
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_37);
  e_18 = t;
  t = SSLsetAnnotations(e_18, j_37);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(r_7, t_7, u_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_37 = NULL,f_5 = NULL,i_5 = NULL;
      t = (ATerm) ATempty;
      f_5 = t;
      t = term_d_14;
      i_5 = t;
      t = term_y_23;
      t = s_6(i_5, f_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm z_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          w_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_37;
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_37 = NULL,m_5 = NULL,p_5 = NULL;
            t = (ATerm) ATempty;
            m_5 = t;
            t = term_d_14;
            p_5 = t;
            t = term_y_23;
            t = s_6(p_5, m_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm c_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                y_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_37;
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm s_5 = NULL,u_5 = NULL;
              t = (ATerm) ATempty;
              s_5 = t;
              t = term_d_14;
              u_5 = t;
              t = term_y_23;
              t = s_6(u_5, s_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm c_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_49, a_50);
  t = e_7(z_49, a_50, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_38 = ATgetFirst((ATermList) t);
      {
        ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_38;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,j_7 = NULL;
        t = term_z_13;
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, n_39);
        t = s_6(j_7, n_39, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_7;
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL;
              t = term_z_13;
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_13, n_39);
              t = s_6(s_7, n_39, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              {
                ATerm a_8 = NULL;
                t = term_z_13;
                a_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_13, n_39);
                t = s_6(a_8, n_39, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm u_39 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_78(t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = SRTS_all(u_39, t);
      }
    return(t);
  }
  t = u_39(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,i_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm o_24 = ATgetArgument(t, 0);
          if(match_cons(o_24, sym_Var_1))
            {
              h_8 = ATgetArgument(o_24, 0);
            }
          else
            _fail(t);
          i_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_6(h_8, i_8, t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = x_40;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm q_24 = ATgetArgument(t, 0);
          ATerm r_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_40;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm y_39 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,k_40 = NULL,m_40 = NULL,n_40 = NULL,n_18 = NULL;
  n_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_40);
  g_40 = t;
  t = h_40;
  t = alltd_1_0(Binding_0_0, t);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, k_40);
  n_18 = t;
  t = SSLsetAnnotations(n_18, g_40);
  m_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        y_39 = t;
        t = m_40;
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_40, y_39));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(w_7, t);
              t = m_40;
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              t = (ATerm) ATmakeAppl(sym__4, term_a_25, m_40, term_b_25, y_39);
              t = debug_1_0(x_7, t);
              t = term_c_25;
            }
        }
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_40 = NULL,w_40 = NULL;
              t = f_40;
              {
                ATerm f_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(y_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_25;
                  }
                t = (ATerm) ATempty;
                v_40 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_25, f_40);
                w_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_25, f_40));
                t = e_6(z_7, v_40, w_40, t);
                t = m_40;
              }
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = h_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_41 = NULL,o_41 = NULL;
                  n_41 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      o_41 = ATgetArgument(t, 0);
                      {
                        ATerm u_25 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = n_41;
                  t = d_6(cp_0_0, o_41, t);
                  ;
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = r_25;
                  {
                    ATerm y_25 = t;
                    int a_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(a_26);
                      }
                    else
                      {
                        t = y_25;
                        {
                          ATerm c_26 = t;
                          int d_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(d_26);
                            }
                          else
                            {
                              t = c_26;
                              {
                                ATerm i_26 = t;
                                int j_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,p_18 = NULL;
                                    r_42 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        s_42 = ATgetArgument(t, 0);
                                        t_42 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_42);
                                    m_8 = t;
                                    t = s_42;
                                    t = cp_0_0(t);
                                    p_8 = t;
                                    t = t_42;
                                    t = cp_0_0(t);
                                    q_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, q_8);
                                    p_18 = t;
                                    t = SSLsetAnnotations(p_18, m_8);
                                    ;
                                    LocalPopChoice(j_26);
                                  }
                                else
                                  {
                                    t = i_26;
                                    {
                                      ATerm k_26 = t;
                                      int l_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(l_26);
                                        }
                                      else
                                        {
                                          t = k_26;
                                          {
                                            ATerm m_26 = t;
                                            int n_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm h_43 = NULL,i_43 = NULL,m_43 = NULL;
                                                h_43 = t;
                                                {
                                                  ATerm o_26 = t;
                                                  int w_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm x_26 = ATgetArgument(t, 0);
                                                          ATerm y_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(w_26);
                                                      t = h_43;
                                                      t = b_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = o_26;
                                                      {
                                                        ATerm z_26 = t;
                                                        int a_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm b_27 = ATgetArgument(t, 0);
                                                                ATerm c_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(a_27);
                                                            {
                                                              ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,r_18 = NULL;
                                                              t = h_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  y_8 = ATgetArgument(t, 0);
                                                                  z_8 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(h_43);
                                                              w_8 = t;
                                                              t = z_8;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              a_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, y_8, a_9);
                                                              r_18 = t;
                                                              t = SSLsetAnnotations(r_18, w_8);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_26;
                                                            {
                                                              ATerm d_27 = t;
                                                              int e_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm f_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(e_27);
                                                                  {
                                                                    ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL,s_18 = NULL;
                                                                    t = (ATerm) ATempty;
                                                                    j_9 = t;
                                                                    t = term_c_14;
                                                                    k_9 = t;
                                                                    t = term_e_14;
                                                                    t = e_6(b_8, j_9, k_9, t);
                                                                    t = h_43;
                                                                    if(match_cons(t, sym_Not_1))
                                                                      {
                                                                        m_9 = ATgetArgument(t, 0);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    t = SSLgetAnnotations(h_43);
                                                                    l_9 = t;
                                                                    t = m_9;
                                                                    t = exec_maybe_1_0(cp_0_0, t);
                                                                    o_9 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Not_1, o_9);
                                                                    s_18 = t;
                                                                    t = SSLsetAnnotations(s_18, l_9);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = d_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      i_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm g_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      m_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm h_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = h_43;
                                                                  t = a_6(cp_0_0, i_43, m_43, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                ;
                                                LocalPopChoice(n_26);
                                              }
                                            else
                                              {
                                                t = m_26;
                                                t = SRTS_all(cp_0_0, t);
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
ATerm t_6 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  z_43 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
        t = e_7(t_49, u_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_27 = ATgetFirst((ATermList) t);
            y_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_27);
        t = SSL_table_put(t_49, u_49, y_43);
        t = (ATerm) ATmakeAppl(sym__3, t_49, u_49, y_43);
      }
    else
      {
        t = i_27;
        t = SSL_table_remove(t_49, u_49);
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
      }
    t = z_43;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  d_44 = t;
  t = d_93(t);
  c_44 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL;
        t = term_j_14;
        f_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_44, term_j_14);
        t = e_7(c_44, f_44, t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_44 = ATgetFirst((ATermList) t);
        a_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_14;
    e_44 = t;
    t = SSL_table_put(c_44, e_44, a_44);
    t = b_44;
    {
      ATerm c_8 (ATerm t)
      {
        ATerm g_44 = NULL;
        g_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_44, g_44);
        t = t_6(c_44, g_44, t);
        return(t);
      }
      t = map_1_0(c_8, t);
      t = d_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_75(t);
      t = h_75(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      t = h_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  j_44 = t;
  t = c_93(t);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, term_j_14);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_27 = ATgetArgument(t, 0);
            ATerm s_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_14;
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_j_14);
        t = e_7(i_44, s_44, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATempty;
      }
    k_44 = t;
    t = term_j_14;
    l_44 = t;
    t = (ATerm) ATinsert(CheckATermList(k_44), (ATerm) ATempty);
    m_44 = t;
    t = SSL_table_put(i_44, l_44, m_44);
    t = j_44;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    t = end_scope_1_0(e_93, t);
    return(t);
  }
  t = begin_scope_1_0(e_93, t);
  t = restore_always_2_0(f_93, e_8, t);
  return(t);
}
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm m_45 (ATerm t)
  {
    ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
    j_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_45;
      }
    else
      {
        ATerm v_9 = NULL,d_10 = NULL,e_10 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_45 = ATgetFirst((ATermList) t);
            l_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_45);
        v_9 = t;
        t = k_45;
        t = c_82(t);
        d_10 = t;
        t = l_45;
        t = m_45(t);
        e_10 = t;
        t = (ATerm) ATinsert(CheckATermList(e_10), d_10);
        y_18 = t;
        t = SSLsetAnnotations(y_18, v_9);
      }
    return(t);
  }
  t = m_45(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_60 (ATerm), ATerm x_60 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,a_19 = NULL;
  t_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_45 = ATgetFirst((ATermList) t);
      q_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  o_45 = t;
  t = p_45;
  t = w_60(t);
  r_45 = t;
  t = q_45;
  t = x_60(t);
  s_45 = t;
  t = (ATerm) ATinsert(CheckATermList(s_45), r_45);
  a_19 = t;
  t = SSLsetAnnotations(a_19, o_45);
  return(t);
}
ATerm w_6 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm u_45 = NULL;
  t = SSL_fputc(z_39, a_40);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_45);
  return(t);
}
ATerm x_6 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm v_45 = NULL;
  t = SSL_write_term_to_stream_text(n_43, o_43);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_45);
  return(t);
}
ATerm z_6 (ATerm z_94 (ATerm), ATerm n_424, ATerm r_43, ATerm t)
{
  ATerm w_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_424, term_t_27);
  t = open_stream_0_0(t);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_45, r_43);
  t = z_94(t);
  t = fclose_0_0(t);
  t = r_43;
  return(t);
}
ATerm y_6 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_write_term_to_stream_baf(j_43, k_43);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_45);
  return(t);
}
ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym_Stream_1))
        {
          j_11 = ATgetArgument(u_27, 0);
        }
      else
        _fail(t);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(j_11, k_11, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm m_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(match_cons(v_27, sym_Stream_1))
        {
          s_12 = ATgetArgument(v_27, 0);
        }
      else
        _fail(t);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(s_12, t_12, t);
  m_12 = t;
  t = term_w_27;
  q_12 = t;
  t = m_12;
  if(match_cons(t, sym_Stream_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, m_12);
  t = w_6(q_12, r_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,p_47 = NULL,q_47 = NULL,d_19 = NULL,c_19 = NULL;
  c_46 = t;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  m_46 = t;
  t = n_46;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_46 != NULL) && (b_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_8, t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = term_z_27;
        b_46 = t;
      }
    if(((p_46 != NULL) && (p_46 != t)))
      _fail(t);
    else
      p_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_46, o_46);
    if(((c_19 != NULL) && (c_19 != t)))
      _fail(t);
    else
      c_19 = t;
    t = SSLsetAnnotations(c_19, m_46);
    t = c_46;
    if(match_cons(t, sym__2))
      {
        if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_46 = ATgetArgument(t, 0);
        if(((f_46 != NULL) && (f_46 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          f_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_46);
    if(((d_46 != NULL) && (d_46 != t)))
      _fail(t);
    else
      d_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_46, (ATerm) ATmakeAppl(sym__2, not_null(b_46), f_46));
    if(((d_19 != NULL) && (d_19 != t)))
      _fail(t);
    else
      d_19 = t;
    t = SSLsetAnnotations(d_19, d_46);
    if(((l_46 != NULL) && (l_46 != t)))
      _fail(t);
    else
      l_46 = t;
    if(match_cons(t, sym__2))
      {
        if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          p_47 = ATgetArgument(t, 0);
        if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = NULL,v_10 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,e_19 = NULL;
          t = SSLgetAnnotations(l_46);
          q_10 = t;
          t = p_47;
          t = fetch_1_0(j_8, t);
          v_10 = t;
          t = q_47;
          if(match_cons(t, sym__2))
            {
              e_11 = ATgetArgument(t, 0);
              f_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_6(k_8, e_11, f_11, t);
          d_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_10, d_11);
          e_19 = t;
          t = SSLsetAnnotations(e_19, q_10);
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            ATerm d_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(l_46);
            d_12 = t;
            t = q_47;
            if(match_cons(t, sym__2))
              {
                k_12 = ATgetArgument(t, 0);
                l_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_6(l_8, k_12, l_12, t);
            i_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_47, i_12);
            f_19 = t;
            t = SSLsetAnnotations(f_19, d_12);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  x_47 = t;
  t = dtime_0_0(t);
  t = x_47;
  t = b_98(t);
  w_47 = t;
  t = dtime_0_0(t);
  t_47 = t;
  t = w_47;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_47), (ATerm) ATmakeAppl(sym_Runtime_1, t_47)), v_47);
  return(t);
}
ATerm l_48 (ATerm f_48, ATerm t)
{
  t = SSL_fclose(f_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_48 = ATgetArgument(t, 0);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_48);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = l_48(j_48, t);
          }
      }
    }
  else
    {
      t = l_48(j_48, t);
    }
  return(t);
}
ATerm a_7 (ATerm p_43, ATerm t)
{
  t = SSL_read_term_from_stream(p_43);
  return(t);
}
ATerm b_7 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm m_48 = NULL;
  t = SSL_fopen(b_40, c_40);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_48 = NULL;
  t = SSL_stdin_stream();
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = SSL_stdout_stream();
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_48 = NULL;
  t = SSL_stderr_stream();
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_48);
  return(t);
}
ATerm k_50 (ATerm v_48, ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_explode_term(v_48);
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
          {
            b_49 = ATgetFirst((ATermList) g_28);
            {
              ATerm h_28 = (ATerm) ATgetNext((ATermList) g_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_50 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,q_49 = NULL,m_19 = NULL;
  t = SSLgetAnnotations(g_49);
  j_49 = t;
  t = e_49;
  if(match_cons(t, sym_Path_1))
    {
      q_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_49, f_49);
  m_19 = t;
  t = SSLsetAnnotations(m_19, j_49);
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(h_49, i_49, t);
  return(t);
}
ATerm m_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm y_49 = NULL,b_50 = NULL,c_50 = NULL,f_50 = NULL,n_19 = NULL;
  t = SSLgetAnnotations(x_49);
  c_50 = t;
  t = SSL_is_string(v_49);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, w_49);
  n_19 = t;
  t = SSLsetAnnotations(n_19, c_50);
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(y_49, b_50, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      ATerm k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_50 = t;
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
      {
        ATerm l_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_50(h_50, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = l_28;
            {
              ATerm s_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_50(i_50, j_50, h_50, t);
                  ;
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = s_28;
                  t = m_50(i_50, j_50, h_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_50(h_50, t);
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_50 = NULL,u_50 = NULL,v_50 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_50 = NULL;
      w_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_50, term_b_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = debug_1_0(n_8, t);
      _fail(t);
    }
  u_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(v_50, t);
  n_50 = t;
  t = u_50;
  t = fclose_0_0(t);
  t = n_50;
  return(t);
}
ATerm fetch_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm e_52 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
    b_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_52 = ATgetFirst((ATermList) t);
        d_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = NULL,w_13 = NULL,q_19 = NULL;
          t = SSLgetAnnotations(b_52);
          o_13 = t;
          t = c_52;
          t = m_82(t);
          w_13 = t;
          t = (ATerm) ATinsert(CheckATermList(d_52), w_13);
          q_19 = t;
          t = SSLsetAnnotations(q_19, o_13);
          ;
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          {
            ATerm g_14 = NULL,p_14 = NULL,r_19 = NULL;
            t = SSLgetAnnotations(b_52);
            g_14 = t;
            t = d_52;
            t = e_52(t);
            p_14 = t;
            t = (ATerm) ATinsert(CheckATermList(p_14), c_52);
            r_19 = t;
            t = SSLsetAnnotations(r_19, g_14);
          }
        }
    }
    return(t);
  }
  t = e_52(t);
  return(t);
}
ATerm v_6 (ATerm p_34, ATerm q_34, ATerm t)
{
  t = SSL_strcat(p_34, q_34);
  return(t);
}
ATerm debug_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  h_52 = t;
  t = x_94(t);
  i_52 = t;
  t = term_m_13;
  j_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_52), i_52);
  k_52 = t;
  t = SSL_printnl(j_52, k_52);
  t = h_52;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_52 = NULL;
      r_52 = t;
      t = SSL_is_string(r_52);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_8, t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
              x_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_52 = ATgetArgument(t, 0);
                  t = y_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_52 = ATgetArgument(t, 0);
                      t = y_52;
                      {
                        ATerm l_29 = t;
                        int m_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_29);
                          }
                        else
                          {
                            t = l_29;
                            t = debug_1_0(r_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_53 = NULL,e_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_52 = ATgetArgument(t, 0);
                          z_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_52;
                      t = eval_config_0_0(t);
                      d_53 = t;
                      t = z_52;
                      t = eval_config_0_0(t);
                      e_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
                      t = v_6(d_53, e_53, t);
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
  ATerm i_53 = NULL,j_53 = NULL;
  i_53 = t;
  t = term_n_29;
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, i_53);
  t = e_7(j_53, i_53, t);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_53 = NULL,l_53 = NULL;
        t = eval_config_0_0(t);
        k_53 = t;
        t = term_n_29;
        l_53 = t;
        t = SSL_table_put(l_53, i_53, k_53);
        t = k_53;
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm p_53 = NULL;
  p_53 = t;
  {
    ATerm q_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL;
        t = term_t_29;
        t = get_config_0_0(t);
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_53, term_y_29);
        t = geq_0_0(t);
        t = p_53;
        t = k_96(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = q_29;
        t = p_53;
      }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  if(match_string(t, "-k"))
    {
      t = u_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_53;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  t = SSL_string_to_int(v_53);
  w_53 = t;
  t = term_z_29;
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, w_53);
  t = h_7(x_53, w_53, t);
  t = v_53;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm z_53 = NULL;
  z_53 = t;
  if(match_string(t, "-S"))
    {
      t = z_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_53;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  t = term_t_29;
  a_54 = t;
  t = term_e_30;
  b_54 = t;
  t = term_f_30;
  t = h_7(a_54, b_54, t);
  t = term_g_30;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  t = SSL_string_to_int(c_54);
  d_54 = t;
  t = term_t_29;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, d_54);
  t = h_7(e_54, d_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_54);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = term_k_30;
  f_54 = t;
  t = term_l_13;
  g_54 = t;
  t = term_l_30;
  t = h_7(f_54, g_54, t);
  t = term_m_30;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_8, b_9, d_9, t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_9, g_9, p_9, t);
            ;
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            t = Option_3_0(q_9, r_9, s_9, t);
          }
      }
    }
  return(t);
}
ATerm h_7 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm h_54 = NULL;
  t = term_n_29;
  h_54 = t;
  t = SSL_table_put(h_54, q_44, r_44);
  t = (ATerm) ATmakeAppl(sym__3, term_n_29, q_44, r_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
      t = term_l_13;
      t = e_0(t);
      m_54 = t;
      t = term_v_30;
      n_54 = t;
      t = term_x_30;
      o_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_30, term_x_30, m_54);
      t = f_7(n_54, o_54, m_54, t);
      _fail(t);
    }
  else
    {
      ATerm r_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_54 = ATgetFirst((ATermList) t);
          l_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_54;
      t = c_0(t);
      t = term_l_13;
      t = d_0(t);
      r_54 = t;
      t = (ATerm) ATinsert(CheckATermList(l_54), r_54);
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm t_54 = NULL;
  t_54 = t;
  if(match_string(t, "-o"))
    {
      t = t_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_54;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  u_54 = t;
  t = term_y_30;
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, u_54);
  t = h_7(v_54, u_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_54);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, w_9, t);
  return(t);
}
ATerm f_7 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
  {
    ATerm a_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm e_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
        t = e_7(o_49, p_49, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
    y_54 = t;
    t = (ATerm) ATinsert(CheckATermList(y_54), n_49);
    z_54 = t;
    t = SSL_table_put(o_49, p_49, z_54);
    t = x_54;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
      t = term_l_13;
      t = r_0(t);
      q_55 = t;
      t = term_v_30;
      r_55 = t;
      t = term_x_30;
      s_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_30, term_x_30, q_55);
      t = f_7(r_55, s_55, q_55, t);
      _fail(t);
    }
  else
    {
      ATerm w_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_55;
      t = l_0(t);
      t = o_55;
      t = m_0(t);
      w_55 = t;
      t = (ATerm) ATinsert(CheckATermList(p_55), w_55);
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  if(match_string(t, "-i"))
    {
      t = y_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_55;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  z_55 = t;
  t = term_f_31;
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, z_55);
  t = h_7(a_56, z_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_55);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, b_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_13;
  t = whoami_0_0(t);
  b_56 = t;
  t = term_m_13;
  h_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_31), b_56);
  i_56 = t;
  t = SSL_printnl(h_56, i_56);
  t = term_y_13;
  g_56 = t;
  t = SSL_exit(g_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_7 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_36, a_37);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = SSL_addr(z_36, a_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_56;
      t = f_88(t);
    }
  else
    {
      ATerm p_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_56 = ATgetFirst((ATermList) t);
          m_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_56;
      t = foldr_2_0(f_88, g_88, t);
      p_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_56, p_56);
      t = g_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(e_16, f_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_56 = NULL,n_15 = NULL,o_15 = NULL;
  t = times_0_0(t);
  o_15 = t;
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15;
  t = foldr_2_0(g_10, h_10, t);
  s_56 = t;
  t = SSL_TicksToSeconds(s_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  if(match_cons(t, sym__2))
    {
      e_57 = ATgetArgument(t, 0);
      f_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_57;
        if((e_57 != t))
          {
            _fail(t);
          }
        t = d_57;
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        {
          ATerm o_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_57, f_57);
              ;
              LocalPopChoice(p_31);
            }
          else
            {
              t = o_31;
              t = SSL_gtr(e_57, f_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_57 = NULL;
        t = term_t_29;
        t = get_config_0_0(t);
        l_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_57, term_y_13);
        t = geq_0_0(t);
        t = j_57;
        t = j_96(t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = j_57;
      }
  }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL;
  t = run_time_0_0(t);
  n_57 = t;
  t = term_l_13;
  t = whoami_0_0(t);
  o_57 = t;
  t = term_m_13;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_31), n_57), term_s_31), o_57);
  r_57 = t;
  t = SSL_printnl(q_57, r_57);
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_31), n_57), term_s_31), o_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_30;
  s_57 = t;
  t = SSL_exit(s_57);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  b_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_58 = ATgetArgument(t, 0);
          {
            ATerm z_16 = NULL,u_19 = NULL;
            t = SSLgetAnnotations(b_58);
            z_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_58);
            u_19 = t;
            t = SSLsetAnnotations(u_19, z_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = fetch_1_0(k_10, t);
    }
  t = z_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_58 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_58 = NULL,k_58 = NULL;
        ATerm l_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), not_null(k_58));
          return(t);
        }
        t = f_58;
        t = j_0(t);
        if(((j_58 != NULL) && (j_58 != t)))
          _fail(t);
        else
          j_58 = t;
        t = e_58;
        t = h_0(t);
        if(((k_58 != NULL) && (k_58 != t)))
          _fail(t);
        else
          k_58 = t;
        t = f_58;
        t = reverse_acc_2_0(h_0, l_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_13;
      t = j_0(t);
    }
  return(t);
}
ATerm e_7 (ATerm f_51, ATerm g_51, ATerm t)
{
  t = SSL_table_get(f_51, g_51);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,w_19 = NULL;
  q_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_58);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_58);
  w_19 = t;
  t = SSLsetAnnotations(w_19, o_58);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm s_58 = NULL;
  s_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_58), term_a_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = fetch_1_0(n_10, t);
    }
  t = term_d_32;
  t = echo_0_0(t);
  t = term_v_30;
  m_58 = t;
  t = term_x_30;
  n_58 = t;
  t = term_g_32;
  t = e_7(m_58, n_58, t);
  t = reverse_acc_2_0(_id, o_10, t);
  t = map_1_0(p_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_32 = ATgetFirst((ATermList) t);
                ATerm k_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_58;
          }
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, u_58);
      }
    v_58 = t;
    t = term_z_27;
    w_58 = t;
    t = SSL_printnl(w_58, v_58);
    t = u_58;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  t = term_m_32;
  a_59 = t;
  t = term_l_13;
  b_59 = t;
  t = term_n_32;
  t = h_7(a_59, b_59, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  t = term_m_32;
  e_59 = t;
  t = term_l_13;
  f_59 = t;
  t = term_n_32;
  t = h_7(e_59, f_59, t);
  t = term_r_32;
  c_59 = t;
  t = term_l_13;
  d_59 = t;
  t = term_s_32;
  t = h_7(c_59, d_59, t);
  t = term_w_32;
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_10, t_10, u_10, t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = Option_3_0(w_10, x_10, y_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,p_59 = NULL,q_59 = NULL,y_19 = NULL;
  k_59 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = c_101(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
      }
    t = k_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_59 = ATgetFirst((ATermList) t);
        n_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_59);
    l_59 = t;
    t = term_i_31;
    q_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_31, m_59);
    t = h_7(q_59, m_59, t);
    t = n_59;
    {
      ATerm a_60 (ATerm t)
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_59 = NULL;
                t_59 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_59;
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                t = c_101(t);
                t = Cons_2_0(_id, a_60, t);
              }
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm w_59 = NULL,x_59 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_59 = ATgetFirst((ATermList) t);
                  x_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_59), (ATerm) ATmakeAppl(sym_Undefined_1, w_59));
            }
          }
        return(t);
      }
      t = a_60(t);
      if(((p_59 != NULL) && (p_59 != t)))
        _fail(t);
      else
        p_59 = t;
      t = (ATerm) ATinsert(CheckATermList(p_59), (ATerm) ATmakeAppl(sym_Program_1, m_59));
      if(((y_19 != NULL) && (y_19 != t)))
        _fail(t);
      else
        y_19 = t;
      t = SSLsetAnnotations(y_19, l_59);
    }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  if(match_string(t, "--help"))
    {
      t = m_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_60;
        }
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = term_w_31;
  n_60 = t;
  t = term_l_13;
  o_60 = t;
  t = term_j_33;
  t = h_7(n_60, o_60, t);
  t = term_m_33;
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm y_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  h_60 = t;
  t = term_v_30;
  j_60 = t;
  t = term_x_30;
  k_60 = t;
  t = (ATerm) ATempty;
  l_60 = t;
  t = SSL_table_put(j_60, k_60, l_60);
  t = h_60;
  {
    ATerm z_10 (ATerm t)
    {
      ATerm o_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_101(t);
          ;
          LocalPopChoice(p_33);
        }
      else
        {
          t = o_33;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_11, b_11, l_11, t);
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
    t = parse_options_p__1_0(z_10, t);
    {
      ATerm u_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_60 = NULL;
          v_60 = t;
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL;
                t = v_60;
                {
                  ATerm b_34 = t;
                  int e_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_34);
                    }
                  else
                    {
                      t = b_34;
                      t = fetch_1_0(y_11, t);
                    }
                  t = v_60;
                  t = default_system_usage_0_0(t);
                  t = term_e_30;
                  j_17 = t;
                  t = SSL_exit(j_17);
                }
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
                {
                  ATerm q_17 = NULL;
                  t = term_m_32;
                  t = get_config_0_0(t);
                  t = v_60;
                  t = default_system_about_0_0(t);
                  t = term_e_30;
                  q_17 = t;
                  t = SSL_exit(q_17);
                }
              }
          }
          ;
          LocalPopChoice(y_33);
        }
      else
        {
          t = u_33;
          {
            ATerm f_34 = t;
            int g_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
                ATerm z_11 (ATerm t)
                {
                  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,a_20 = NULL;
                  d_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_61);
                  b_61 = t;
                  t = c_61;
                  if(((f_60 != NULL) && (f_60 != t)))
                    _fail(t);
                  else
                    f_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_61);
                  a_20 = t;
                  t = SSLsetAnnotations(a_20, b_61);
                  return(t);
                }
                t = fetch_1_0(z_11, t);
                t = term_m_13;
                if(((z_60 != NULL) && (z_60 != t)))
                  _fail(t);
                else
                  z_60 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_60)), term_h_34);
                if(((a_61 != NULL) && (a_61 != t)))
                  _fail(t);
                else
                  a_61 = t;
                t = SSL_printnl(z_60, a_61);
                t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_60)), term_h_34));
                t = default_system_usage_0_0(t);
                t = term_y_13;
                if(((y_60 != NULL) && (y_60 != t)))
                  _fail(t);
                else
                  y_60 = t;
                t = SSL_exit(y_60);
                ;
                LocalPopChoice(g_34);
              }
            else
              {
                t = f_34;
              }
          }
        }
      if(((g_60 != NULL) && (g_60 != t)))
        _fail(t);
      else
        g_60 = t;
      t = term_v_30;
      if(((i_60 != NULL) && (i_60 != t)))
        _fail(t);
      else
        i_60 = t;
      t = SSL_table_destroy(i_60);
      t = g_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  t = parse_options_1_0(b_99, t);
  i_61 = t;
  t = term_i_34;
  l_61 = t;
  t = SSL_table_create(l_61);
  t = term_i_34;
  j_61 = t;
  t = term_j_34;
  k_61 = t;
  t = SSL_table_put(j_61, k_61, i_61);
  t = i_61;
  t = d_99(t);
  {
    ATerm m_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_99, t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = m_34;
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = if_verbose2_1_0(u_12, t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  t = term_w_34;
  m_61 = t;
  t = term_l_13;
  n_61 = t;
  t = term_x_34;
  t = h_7(m_61, n_61, t);
  t = term_y_34;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  o_61 = t;
  t = term_i_31;
  t = get_config_0_0(t);
  p_61 = t;
  t = term_m_13;
  q_61 = t;
  t = (ATerm) ATinsert(ATempty, p_61);
  r_61 = t;
  t = SSL_printnl(q_61, r_61);
  t = o_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_98(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_35);
                  }
                else
                  {
                    t = i_35;
                    {
                      ATerm l_35 = t;
                      int m_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_12, j_12, n_12, t);
                          ;
                          LocalPopChoice(m_35);
                        }
                      else
                        {
                          t = l_35;
                          {
                            ATerm p_35 = t;
                            int t_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_35);
                              }
                            else
                              {
                                t = p_35;
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
  ATerm g_12 (ATerm t)
  {
    ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
    t_61 = t;
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_61 != NULL) && (s_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_12, t);
          ;
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          t = term_y_35;
          s_61 = t;
        }
      t = not_null(s_61);
      t = ReadFromFile_0_0(t);
      if(((u_61 != NULL) && (u_61 != t)))
        _fail(t);
      else
        u_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_61, u_61);
      t = apply_strategy_1_0(k_98, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_12, m_98, e_12, g_12, t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,g_20 = NULL,f_20 = NULL,e_20 = NULL,c_20 = NULL;
  j_62 = t;
  if(match_cons(t, sym__2))
    {
      w_61 = ATgetArgument(t, 0);
      x_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_62);
  v_61 = t;
  t = x_61;
  if(match_cons(t, sym_Specification_1))
    {
      z_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_61);
  y_61 = t;
  t = z_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_62 = ATgetFirst((ATermList) t);
      d_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_61);
  b_62 = t;
  t = c_62;
  if(match_cons(t, sym_Signature_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_62);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, h_62);
  c_20 = t;
  t = SSLsetAnnotations(c_20, g_62);
  i_62 = t;
  t = d_62;
  t = Cons_2_0(d_13, e_13, t);
  e_62 = t;
  t = (ATerm) ATinsert(CheckATermList(e_62), i_62);
  e_20 = t;
  t = SSLsetAnnotations(e_20, b_62);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_62);
  f_20 = t;
  t = SSLsetAnnotations(f_20, y_61);
  a_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_61, a_62);
  g_20 = t;
  t = SSLsetAnnotations(g_20, v_61);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,d_20 = NULL;
  n_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  k_62 = t;
  t = l_62;
  t = map_1_0(h_13, t);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_62);
  d_20 = t;
  t = SSLsetAnnotations(d_20, k_62);
  return(t);
}
ATerm e_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = scope_2_0(i_13, j_13, t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = scope_2_0(k_13, cp_0_0, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_12, _fail, default_usage_0_0, t);
  return(t);
}
