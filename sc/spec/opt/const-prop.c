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
ATerm term_t_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_j_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_r_29;
ATerm term_g_29;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_b_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_y_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_h_25;
ATerm term_u_24;
ATerm term_t_23;
ATerm term_h_20;
ATerm term_u_19;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
void init_constant_terms (void)
{
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_c_14, (ATerm) ATempty);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_k_13);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_v_30);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_k_13);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_k_13);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_k_13);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_k_13);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm a_6 (ATerm e_87 (ATerm), ATerm r_31, ATerm s_31, ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm e_6 (ATerm u_105 (ATerm), ATerm h_51, ATerm f_51, ATerm);
ATerm p_1 (ATerm);
ATerm b_6 (ATerm f_87 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm e_8 (ATerm z_4, ATerm a_5, ATerm b_5, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm g_11 (ATerm i_9, ATerm n_9, ATerm p_9, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm c_6 (ATerm l_63, ATerm k_63, ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm k_5 (ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm m_6 (ATerm);
ATerm d_6 (ATerm d_87 (ATerm), ATerm m_31, ATerm);
ATerm o_6 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm f_6 (ATerm f_32, ATerm g_32, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm);
ATerm p_6 (ATerm g_117 (ATerm), ATerm x_67, ATerm y_67, ATerm a_68, ATerm z_67, ATerm);
ATerm at_end_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm s_24 (ATerm f_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm j_6 (ATerm b_629, ATerm g_629, ATerm z_68, ATerm);
ATerm while_not_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm j_37 (ATerm w_30, ATerm x_30, ATerm d_31, ATerm);
ATerm k_37 (ATerm z_31, ATerm d_32, ATerm h_32, ATerm);
ATerm l_37 (ATerm d_33, ATerm e_33, ATerm n_33, ATerm);
ATerm m_37 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm);
ATerm n_37 (ATerm y_34, ATerm b_35, ATerm e_35, ATerm);
ATerm v_7 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm s_6 (ATerm t_62, ATerm u_62, ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm t_6 (ATerm n_62, ATerm o_62, ATerm);
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm w_6 (ATerm t_52, ATerm u_52, ATerm);
ATerm x_6 (ATerm h_56, ATerm i_56, ATerm);
ATerm z_6 (ATerm n_107 (ATerm), ATerm r_454, ATerm l_56, ATerm);
ATerm y_6 (ATerm d_56, ATerm e_56, ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm x_46 (ATerm r_46, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_7 (ATerm j_56, ATerm);
ATerm b_7 (ATerm v_52, ATerm w_52, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_48 (ATerm h_47, ATerm);
ATerm m_48 (ATerm n_47, ATerm o_47, ATerm p_47, ATerm);
ATerm n_48 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm);
ATerm debug_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_7 (ATerm k_57, ATerm l_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_7 (ATerm i_62, ATerm j_62, ATerm h_62, ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm c_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_7 (ATerm t_49, ATerm u_49, ATerm);
ATerm foldr_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm e_7 (ATerm z_63, ATerm a_64, ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm);
ATerm d_12 (ATerm);
ATerm j_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm t_12 (ATerm);
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm);
ATerm v_12 (ATerm);
ATerm x_12 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,g_1 = NULL;
  y_0 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_l_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_13), z_0), term_o_13);
  g_1 = t;
  t = SSL_printnl(d_1, g_1);
  t = term_w_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  v_1 = t;
  t = term_b_14;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_b_14);
  t = e_6(s_0, v_1, x_1, t);
  t = u_1;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm a_6 (ATerm e_87 (ATerm), ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,n_0 = NULL;
    j_1 = t;
    t = not_null(s_31);
    t = map_1_0(r_0, t);
    t = j_1;
    if(match_cons(t, sym_SDefT_4))
      {
        l_1 = ATgetArgument(t, 0);
        m_1 = ATgetArgument(t, 1);
        n_1 = ATgetArgument(t, 2);
        o_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_1);
    k_1 = t;
    t = (ATerm) ATempty;
    r_1 = t;
    t = term_b_14;
    s_1 = t;
    t = term_d_14;
    t = e_6(t_0, r_1, s_1, t);
    t = o_1;
    t = e_87(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, m_1, n_1, q_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, k_1);
    return(t);
  }
  t = scope_2_0(o_0, p_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  a_2 = t;
  t = (ATerm) ATempty;
  f_2 = t;
  t = term_b_14;
  g_2 = t;
  t = term_d_14;
  t = e_6(v_0, f_2, g_2, t);
  t = a_2;
  t = save_Binding_0_0(t);
  y_1 = t;
  t = a_2;
  t = v_86(t);
  z_1 = t;
  t = (ATerm) ATempty;
  d_2 = t;
  t = term_b_14;
  e_2 = t;
  t = term_d_14;
  t = e_6(w_0, d_2, e_2, t);
  t = term_y_13;
  c_2 = t;
  t = SSL_table_destroy(c_2);
  t = term_y_13;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, y_1);
  t = c_6(b_2, y_1, t);
  t = z_1;
  return(t);
}
ATerm e_6 (ATerm u_105 (ATerm), ATerm h_51, ATerm f_51, ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL;
  n_2 = t;
  t = u_105(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_2, h_51, f_51);
  t = f_7(h_2, h_51, f_51, t);
  {
    ATerm e_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_2 = NULL;
        t = term_i_14;
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_2, term_i_14);
        t = e_7(h_2, u_2, t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_2 = ATgetFirst((ATermList) t);
        j_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_14;
    p_2 = t;
    t = (ATerm) ATinsert(CheckATermList(j_2), (ATerm) ATinsert(CheckATermList(i_2), h_51));
    r_2 = t;
    t = SSL_table_put(h_2, p_2, r_2);
    t = n_2;
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm b_6 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,g_3 = NULL,l_3 = NULL,m_3 = NULL,s_3 = NULL,y_3 = NULL,a_4 = NULL,y_4 = NULL;
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = save_Binding_0_0(t);
  if(((w_2 != NULL) && (w_2 != t)))
    _fail(t);
  else
    w_2 = t;
  t = save_CurrentTerm_0_0(t);
  if(((v_2 != NULL) && (v_2 != t)))
    _fail(t);
  else
    v_2 = t;
  t = not_null(x_2);
  if(match_cons(t, sym_Let_2))
    {
      if(((b_3 != NULL) && (b_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_3 = ATgetArgument(t, 0);
      if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(x_2));
  if(((a_3 != NULL) && (a_3 != t)))
    _fail(t);
  else
    a_3 = t;
  t = not_null(b_3);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL;
      b_4 = t;
      t = (ATerm) ATempty;
      f_4 = t;
      t = term_b_14;
      h_4 = t;
      t = term_d_14;
      t = e_6(p_1, f_4, h_4, t);
      t = term_y_13;
      e_4 = t;
      t = SSL_table_destroy(e_4);
      t = term_y_13;
      d_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(w_2));
      t = c_6(d_4, not_null(w_2), t);
      t = b_4;
      t = f_87(t);
      return(t);
    }
    t = map_1_0(x_0, t);
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    t = term_c_14;
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    t = SSL_table_destroy(not_null(a_4));
    t = term_c_14;
    if(((y_3 != NULL) && (y_3 != t)))
      _fail(t);
    else
      y_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(v_2));
    t = c_6(not_null(y_3), not_null(v_2), t);
    t = term_y_13;
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = SSL_table_destroy(not_null(s_3));
    t = term_y_13;
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(w_2));
    t = c_6(not_null(m_3), not_null(w_2), t);
    t = not_null(e_3);
    t = f_87(t);
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_3), not_null(l_3));
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    t = SSLsetAnnotations(not_null(y_4), not_null(a_3));
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,q_5 = NULL,g_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
      t = o_5;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_5 = ATgetFirst((ATermList) t);
                {
                  ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_14);
            t = q_5;
            {
              ATerm u_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm w_14 = ATgetArgument(t, 0);
                      g_6 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_14);
                  t = n_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = n_6;
                    }
                  else
                    {
                      ATerm x_14 = t;
                      int z_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_8(n_5, g_6, n_6, t);
                          ;
                          LocalPopChoice(z_14);
                        }
                      else
                        {
                          t = x_14;
                          t = n_6;
                        }
                    }
                }
              else
                {
                  t = u_14;
                  t = n_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = n_6;
                    }
                  else
                    {
                      t = n_6;
                    }
                }
            }
          }
        else
          {
            t = p_14;
            t = n_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = n_6;
              }
            else
              {
                t = n_6;
              }
          }
      }
    }
  else
    {
      t = n_6;
    }
  return(t);
}
ATerm e_8 (ATerm z_4, ATerm a_5, ATerm b_5, ATerm t)
{
  t = b_5;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_c_14;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_14, z_4);
        t = e_7(q_0, z_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_15 = ATgetFirst((ATermList) t);
            if(match_cons(c_15, sym_Defined_2))
              {
                ATerm b_16 = ATgetArgument(c_15, 0);
                if((a_5 != ATgetArgument(c_15, 1)))
                  {
                    _fail(ATgetArgument(c_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_5;
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATempty, term_b_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL;
  t = map_1_0(w_1, t);
  t_4 = t;
  t = term_c_14;
  x_4 = t;
  t = SSL_table_destroy(x_4);
  t = term_c_14;
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, t_4);
  t = c_6(v_4, t_4, t);
  t = t_4;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm f_10 = NULL,j_10 = NULL,l_10 = NULL,n_10 = NULL,t_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      t = j_10;
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_10 = ATgetFirst((ATermList) t);
                {
                  ATerm i_16 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_16);
            t = l_10;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_16 = ATgetArgument(t, 0);
                      n_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_16);
                  t = f_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = t_10;
                    }
                  else
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_11(f_10, n_10, t_10, t);
                          ;
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          t = t_10;
                        }
                    }
                }
              else
                {
                  t = j_16;
                  t = f_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = t_10;
                    }
                  else
                    {
                      t = t_10;
                    }
                }
            }
          }
        else
          {
            t = g_16;
            t = f_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = t_10;
              }
            else
              {
                t = t_10;
              }
          }
      }
    }
  else
    {
      t = t_10;
    }
  return(t);
}
ATerm g_11 (ATerm i_9, ATerm n_9, ATerm p_9, ATerm t)
{
  t = p_9;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_y_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_13, i_9);
        t = e_7(u_0, i_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_16 = ATgetFirst((ATermList) t);
            if(match_cons(q_16, sym_Defined_2))
              {
                ATerm t_16 = ATgetArgument(q_16, 0);
                if((n_9 != ATgetArgument(q_16, 1)))
                  {
                    _fail(ATgetArgument(q_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm r_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_9;
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = (ATerm) ATmakeAppl(sym__2, i_9, (ATerm) ATinsert(ATempty, term_b_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm c_9 = NULL,e_9 = NULL,h_9 = NULL;
  t = map_1_0(k_2, t);
  c_9 = t;
  t = term_y_13;
  h_9 = t;
  t = SSL_table_destroy(h_9);
  t = term_y_13;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, c_9);
  t = c_6(e_9, c_9, t);
  t = c_9;
  return(t);
}
ATerm c_6 (ATerm l_63, ATerm k_63, ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_11 = NULL,m_11 = NULL;
    if(match_cons(t, sym__2))
      {
        i_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(l_63), i_11, m_11);
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_63), i_11, m_11);
    return(t);
  }
  t = not_null(k_63);
  t = map_1_0(h_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_c_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL;
    o_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), o_11);
    t = e_7(not_null(n_11), o_11, t);
    p_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_11, p_11);
    return(t);
  }
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = SSL_table_keys(not_null(n_11));
  t = map_1_0(i_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_y_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,a_12 = NULL,b_12 = NULL,e_12 = NULL;
  w_11 = t;
  t = save_Binding_0_0(t);
  q_11 = t;
  t = save_CurrentTerm_0_0(t);
  r_11 = t;
  t = w_11;
  t = j_87(t);
  v_11 = t;
  t = save_Binding_0_0(t);
  s_11 = t;
  t = term_y_13;
  e_12 = t;
  t = SSL_table_destroy(e_12);
  t = term_y_13;
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, q_11);
  t = c_6(b_12, q_11, t);
  t = q_11;
  t = save_CurrentTerm_0_0(t);
  t_11 = t;
  t = term_c_14;
  a_12 = t;
  t = SSL_table_destroy(a_12);
  t = term_c_14;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, r_11);
  t = c_6(x_11, r_11, t);
  t = v_11;
  t = k_87(t);
  u_11 = t;
  t = s_11;
  t = isect_Binding_0_0(t);
  t = t_11;
  t = isect_CurrentTerm_0_0(t);
  t = u_11;
  return(t);
}
ATerm prop_choice_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm g_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            ATerm z_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_16);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm p_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,h_5 = NULL;
            a_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                w_12 = ATgetArgument(t, 0);
                y_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_13);
            p_12 = t;
            t = w_12;
            t = i_87(t);
            z_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, z_12, y_12);
            h_5 = t;
            t = SSLsetAnnotations(h_5, p_12);
            return(t);
          }
          ATerm z_3 (ATerm t)
          {
            ATerm b_13 = NULL,c_13 = NULL,f_13 = NULL,g_13 = NULL,n_13 = NULL,i_5 = NULL;
            n_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                c_13 = ATgetArgument(t, 0);
                f_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_13);
            b_13 = t;
            t = f_13;
            t = i_87(t);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, c_13, g_13);
            i_5 = t;
            t = SSLsetAnnotations(i_5, b_13);
            return(t);
          }
          t = not_null(g_12);
          t = prop_abstract_choice_2_0(j_3, z_3, t);
        }
      }
    else
      {
        t = u_16;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm c_17 = ATgetArgument(t, 0);
                  ATerm f_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(b_17);
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,j_5 = NULL;
                  v_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      s_13 = ATgetArgument(t, 0);
                      t_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_13);
                  r_13 = t;
                  t = s_13;
                  t = i_87(t);
                  u_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, u_13, t_13);
                  j_5 = t;
                  t = SSLsetAnnotations(j_5, r_13);
                  return(t);
                }
                ATerm g_4 (ATerm t)
                {
                  ATerm x_13 = NULL,a_14 = NULL,h_14 = NULL,k_14 = NULL,l_14 = NULL,p_5 = NULL;
                  l_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      a_14 = ATgetArgument(t, 0);
                      h_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_14);
                  x_13 = t;
                  t = h_14;
                  t = i_87(t);
                  k_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, a_14, k_14);
                  p_5 = t;
                  t = SSLsetAnnotations(p_5, x_13);
                  return(t);
                }
                t = not_null(g_12);
                t = prop_abstract_choice_2_0(c_4, g_4, t);
              }
            }
          else
            {
              t = a_17;
              {
                ATerm g_17 = t;
                int i_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm j_17 = ATgetArgument(t, 0);
                        ATerm k_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_17);
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,r_14 = NULL,t_14 = NULL,u_5 = NULL;
                        t_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            n_14 = ATgetArgument(t, 0);
                            o_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_14);
                        m_14 = t;
                        t = n_14;
                        t = i_87(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, o_14);
                        u_5 = t;
                        t = SSLsetAnnotations(u_5, m_14);
                        return(t);
                      }
                      ATerm k_4 (ATerm t)
                      {
                        ATerm y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,v_5 = NULL;
                        i_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            f_15 = ATgetArgument(t, 0);
                            g_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_15);
                        y_14 = t;
                        t = g_15;
                        t = i_87(t);
                        h_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, f_15, h_15);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, y_14);
                        return(t);
                      }
                      t = not_null(g_12);
                      t = prop_abstract_choice_2_0(i_4, k_4, t);
                    }
                  }
                else
                  {
                    t = g_17;
                    {
                      ATerm l_4 (ATerm t)
                      {
                        ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_5 = NULL,w_5 = NULL;
                        w_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            r_15 = ATgetArgument(t, 0);
                            s_15 = ATgetArgument(t, 1);
                            t_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_15);
                        q_15 = t;
                        t = r_15;
                        t = i_87(t);
                        u_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_15, s_15, t_15);
                        w_5 = t;
                        t = SSLsetAnnotations(w_5, q_15);
                        v_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            k_15 = ATgetArgument(t, 0);
                            l_15 = ATgetArgument(t, 1);
                            m_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_15);
                        j_15 = t;
                        t = l_15;
                        t = i_87(t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_15, p_15, m_15);
                        x_5 = t;
                        t = SSLsetAnnotations(x_5, j_15);
                        return(t);
                      }
                      ATerm n_4 (ATerm t)
                      {
                        ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,y_5 = NULL;
                        e_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            y_15 = ATgetArgument(t, 0);
                            z_15 = ATgetArgument(t, 1);
                            a_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(e_16);
                        x_15 = t;
                        t = a_16;
                        t = i_87(t);
                        d_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_15, z_15, d_16);
                        y_5 = t;
                        t = SSLsetAnnotations(y_5, x_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm l_17 = ATgetArgument(t, 0);
                          ATerm o_17 = ATgetArgument(t, 1);
                          ATerm q_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = not_null(g_12);
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
  t = term_c_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,i_8 = NULL;
      if(((e_17 != NULL) && (e_17 != t)))
        _fail(t);
      else
        e_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm a_18 = ATgetArgument(t, 0);
          ATerm f_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      if(((a_1 != NULL) && (a_1 != t)))
        _fail(t);
      else
        a_1 = t;
      t = term_b_14;
      if(((b_1 != NULL) && (b_1 != t)))
        _fail(t);
      else
        b_1 = t;
      t = term_d_14;
      t = e_6(o_4, not_null(a_1), not_null(b_1), t);
      t = not_null(e_17);
      if(match_cons(t, sym_Cong_2))
        {
          if(((f_1 != NULL) && (f_1 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_1 = ATgetArgument(t, 0);
          if(((h_1 != NULL) && (h_1 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(e_17));
      if(((e_1 != NULL) && (e_1 != t)))
        _fail(t);
      else
        e_1 = t;
      t = not_null(h_1);
      {
        ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(m_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
        if(((i_1 != NULL) && (i_1 != t)))
          _fail(t);
        else
          i_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(f_1), not_null(i_1));
        if(((i_8 != NULL) && (i_8 != t)))
          _fail(t);
        else
          i_8 = t;
        t = SSLsetAnnotations(not_null(i_8), not_null(e_1));
      }
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = r_17;
      {
        ATerm m_17 = NULL,n_17 = NULL,y_17 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = exec_maybe_1_0(m_0, t);
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
              ATerm z_17 = NULL;
              z_17 = t;
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
                    t = z_17;
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
                              ATerm s_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_18);
                          t = z_17;
                        }
                      else
                        {
                          t = m_18;
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm w_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_18);
                                t = z_17;
                              }
                            else
                              {
                                t = t_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm y_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = z_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        if(((m_17 != NULL) && (m_17 != t)))
          _fail(t);
        else
          m_17 = t;
        t = (ATerm) ATempty;
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        t = term_b_14;
        if(((y_17 != NULL) && (y_17 != t)))
          _fail(t);
        else
          y_17 = t;
        t = term_d_14;
        t = e_6(q_4, not_null(n_17), not_null(y_17), t);
        t = not_null(m_17);
        t = SRTS_one(r_4, t);
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,f_3 = NULL,a_10 = NULL;
  t = Binding_0_0(t);
  f_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_3);
  a_10 = t;
  t = SSLsetAnnotations(a_10, c_3);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,h_11 = NULL;
  t = Binding_0_0(t);
  x_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_3);
  h_11 = t;
  t = SSLsetAnnotations(h_11, v_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
            ATerm j_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_19);
        {
          ATerm l_2 = NULL,m_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,t_2 = NULL,y_2 = NULL,z_2 = NULL,b_10 = NULL;
          t = (ATerm) ATempty;
          if(((l_2 != NULL) && (l_2 != t)))
            _fail(t);
          else
            l_2 = t;
          t = term_b_14;
          if(((m_2 != NULL) && (m_2 != t)))
            _fail(t);
          else
            m_2 = t;
          t = term_d_14;
          t = e_6(u_4, not_null(l_2), not_null(m_2), t);
          t = not_null(d_20);
          if(match_cons(t, sym_PrimT_3))
            {
              if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_2 = ATgetArgument(t, 0);
              if(((s_2 != NULL) && (s_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_2 = ATgetArgument(t, 1);
              if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                t_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(not_null(d_20));
          if(((o_2 != NULL) && (o_2 != t)))
            _fail(t);
          else
            o_2 = t;
          t = not_null(s_2);
          {
            ATerm w_4 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(w_4, t);
            if(((y_2 != NULL) && (y_2 != t)))
              _fail(t);
            else
              y_2 = t;
            t = not_null(t_2);
            t = alltd_1_0(c_5, t);
            if(((z_2 != NULL) && (z_2 != t)))
              _fail(t);
            else
              z_2 = t;
            t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(q_2), not_null(y_2), not_null(z_2));
            if(((b_10 != NULL) && (b_10 != t)))
              _fail(t);
            else
              b_10 = t;
            t = SSLsetAnnotations(not_null(b_10), not_null(o_2));
          }
        }
      }
    else
      {
        t = d_19;
        {
          ATerm k_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,o_15 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_19 = ATgetArgument(t, 0);
              ATerm n_19 = ATgetArgument(t, 1);
              ATerm o_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          if(((k_3 != NULL) && (k_3 != t)))
            _fail(t);
          else
            k_3 = t;
          t = term_b_14;
          if(((n_3 != NULL) && (n_3 != t)))
            _fail(t);
          else
            n_3 = t;
          t = term_d_14;
          t = e_6(d_5, not_null(k_3), not_null(n_3), t);
          t = not_null(d_20);
          if(match_cons(t, sym_CallT_3))
            {
              if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_3 = ATgetArgument(t, 0);
              if(((q_3 != NULL) && (q_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_3 = ATgetArgument(t, 1);
              if(((r_3 != NULL) && (r_3 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                r_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(not_null(d_20));
          if(((o_3 != NULL) && (o_3 != t)))
            _fail(t);
          else
            o_3 = t;
          t = not_null(q_3);
          {
            ATerm g_5 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(g_5, t);
            if(((t_3 != NULL) && (t_3 != t)))
              _fail(t);
            else
              t_3 = t;
            t = not_null(r_3);
            t = alltd_1_0(k_5, t);
            if(((u_3 != NULL) && (u_3 != t)))
              _fail(t);
            else
              u_3 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(p_3), not_null(t_3), not_null(u_3));
            if(((o_15 != NULL) && (o_15 != t)))
              _fail(t);
            else
              o_15 = t;
            t = SSLsetAnnotations(not_null(o_15), not_null(o_3));
          }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
  a_21 = t;
  t = term_b_14;
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_20), term_b_14);
  t = e_6(i_6, a_21, b_21, t);
  t = z_20;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm d_6 (ATerm d_87 (ATerm), ATerm m_31, ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,x_20 = NULL,y_20 = NULL,s_16 = NULL;
    if(((o_20 != NULL) && (o_20 != t)))
      _fail(t);
    else
      o_20 = t;
    t = not_null(m_31);
    t = map_1_0(h_6, t);
    t = not_null(o_20);
    if(match_cons(t, sym_Scope_2))
      {
        if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_20 = ATgetArgument(t, 0);
        if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_20));
    if(((p_20 != NULL) && (p_20 != t)))
      _fail(t);
    else
      p_20 = t;
    t = not_null(r_20);
    t = d_87(t);
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_20), not_null(x_20));
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = SSLsetAnnotations(not_null(s_16), not_null(p_20));
    if(((y_20 != NULL) && (y_20 != t)))
      _fail(t);
    else
      y_20 = t;
    {
      ATerm q_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
          t = CurrentTerm_0_0(t);
          {
            ATerm k_6 (ATerm t)
            {
              ATerm g_21 = NULL;
              ATerm l_6 (ATerm t)
              {
                if(((g_21 != NULL) && (g_21 != t)))
                  _fail(t);
                else
                  g_21 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(m_31);
              t = fetch_1_0(l_6, t);
              return(t);
            }
            t = oncetd_1_0(k_6, t);
            if(((d_21 != NULL) && (d_21 != t)))
              _fail(t);
            else
              d_21 = t;
            t = (ATerm) ATempty;
            if(((e_21 != NULL) && (e_21 != t)))
              _fail(t);
            else
              e_21 = t;
            t = term_b_14;
            if(((f_21 != NULL) && (f_21 != t)))
              _fail(t);
            else
              f_21 = t;
            t = term_d_14;
            t = e_6(m_6, not_null(e_21), not_null(f_21), t);
            t = not_null(d_21);
          }
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = q_19;
        }
      t = not_null(y_20);
    }
    return(t);
  }
  t = scope_2_0(t_5, z_5, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_16 = NULL;
  v_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_21);
  q_21 = t;
  t = s_21;
  t = alltd_1_0(Binding_0_0, t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, t_21);
  w_16 = t;
  t = SSLsetAnnotations(w_16, q_21);
  u_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, n_21);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, n_21));
  t = e_6(o_6, o_21, p_21, t);
  t = u_21;
  return(t);
}
ATerm oncetd_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm w_21 (ATerm t)
  {
    ATerm w_19 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = w_19;
        t = SRTS_one(w_21, t);
      }
    return(t);
  }
  t = w_21(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = k_22;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm e_20 = ATgetArgument(t, 0);
          ATerm f_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_22;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm f_6 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm y_21 = NULL,f_22 = NULL,j_22 = NULL;
  y_21 = t;
  t = g_32;
  {
    ATerm g_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(q_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_20;
      }
    t = (ATerm) ATmakeAppl(sym_Var_1, f_32);
    f_22 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_20, g_32);
    j_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_32), (ATerm) ATmakeAppl(sym_Defined_2, term_h_20, g_32));
    t = e_6(r_6, f_22, j_22, t);
    t = y_21;
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_25;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_25;
            if((t_25 != t))
              {
                _fail(t);
              }
            t = r_25;
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = (ATerm) ATmakeAppl(sym__2, t_25, w_25);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, t_25, w_25);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if(((ATgetType(k_20) != AT_LIST) || !(ATisEmpty(k_20))))
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
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
  ATerm a_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
        {
          a_29 = ATgetFirst((ATermList) m_20);
          d_29 = (ATerm) ATgetNext((ATermList) m_20);
        }
      else
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
          {
            e_29 = ATgetFirst((ATermList) n_20);
            f_29 = (ATerm) ATgetNext((ATermList) n_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_29, e_29), (ATerm) ATmakeAppl(sym__2, d_29, f_29));
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_29), k_29);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm f_28 = NULL,h_28 = NULL,l_28 = NULL,p_28 = NULL;
  f_28 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(t_20);
        t = f_28;
      }
    else
      {
        t = s_20;
        {
          ATerm z_28 = NULL;
          if(match_cons(t, sym__3))
            {
              h_28 = ATgetArgument(t, 0);
              l_28 = ATgetArgument(t, 1);
              p_28 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_28, l_28);
          t = genzip_4_0(d_7, g_7, j_7, _id, t);
          z_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_28, p_28);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  ATerm k_7 (ATerm t)
  {
    ATerm s_4 = NULL;
    t = u_113(t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, not_null(o_29));
    t = lookup_0_0(t);
    t = v_113(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((o_29 != NULL) && (o_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_29 = ATgetArgument(t, 0);
      if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_29);
  t = alltd_1_0(k_7, t);
  return(t);
}
ATerm p_6 (ATerm g_117 (ATerm), ATerm x_67, ATerm y_67, ATerm a_68, ATerm z_67, ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = not_null(x_67);
  t = g_117(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(y_67));
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL;
        if(match_cons(t, sym__2))
          {
            if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_29 = ATgetArgument(t, 0);
            if(((v_29 != NULL) && (v_29 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(v_29);
        {
          ATerm l_7 (ATerm t)
          {
            if(((u_29 != NULL) && (u_29 != t)))
              _fail(t);
            else
              u_29 = t;
            return(t);
          }
          t = oncetd_1_0(l_7, t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_29), not_null(v_29));
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(y_67))), (ATerm) ATmakeAppl(sym__2, not_null(z_67), not_null(a_68)));
    t = substitute_2_0(g_117, _id, t);
    if(match_cons(t, sym__2))
      {
        if(((s_29 != NULL) && (s_29 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_29 = ATgetArgument(t, 0);
        if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), (ATerm) ATinsert(CheckATermList(not_null(s_29)), (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(y_67))));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm z_23 (ATerm t)
  {
    ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
    w_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_23 = ATgetFirst((ATermList) t);
        v_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_4 = NULL,m_4 = NULL,d_17 = NULL;
          t = SSLgetAnnotations(w_23);
          j_4 = t;
          t = v_23;
          t = z_23(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), u_23);
          d_17 = t;
          t = SSLsetAnnotations(d_17, j_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_23;
        t = m_95(t);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_22;
    }
  else
    {
      ATerm m_7 (ATerm t)
      {
        t = not_null(a_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_22 != NULL) && (z_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_22 = ATgetFirst((ATermList) t);
          if(((a_23 != NULL) && (a_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(z_22);
      t = at_end_1_0(m_7, t);
    }
  return(t);
}
ATerm s_24 (ATerm f_24, ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_explode_term(f_24);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 (ATerm t)
            {
              t = not_null(m_24);
              return(t);
            }
            t = not_null(l_24);
            t = at_end_1_0(n_7, t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = s_24(not_null(n_24), t);
          }
      }
    }
  else
    {
      t = s_24(not_null(n_24), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_96(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm c_27 = NULL,d_27 = NULL,g_27 = NULL,h_27 = NULL,p_27 = NULL,v_27 = NULL,s_17 = NULL;
          t = a_97(t);
          v_27 = t;
          if(match_cons(t, sym__2))
            {
              d_27 = ATgetArgument(t, 0);
              g_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_27);
          c_27 = t;
          t = d_27;
          t = c_97(t);
          h_27 = t;
          t = g_27;
          t = z_27(t);
          p_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_27, p_27);
          s_17 = t;
          t = SSLsetAnnotations(s_17, c_27);
          t = b_97(t);
        }
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(((ATgetType(l_21) != AT_LIST) || !(ATisEmpty(l_21))))
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(((ATgetType(m_21) != AT_LIST) || !(ATisEmpty(m_21))))
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
  ATerm f_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
        {
          f_25 = ATgetFirst((ATermList) r_21);
          g_25 = (ATerm) ATgetNext((ATermList) r_21);
        }
      else
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            i_25 = ATgetFirst((ATermList) x_21);
            j_25 = (ATerm) ATgetNext((ATermList) x_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_25, i_25), (ATerm) ATmakeAppl(sym__2, g_25, j_25));
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_25), k_25);
  return(t);
}
ATerm j_6 (ATerm b_629, ATerm g_629, ATerm z_68, ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = SSL_explode_term(g_629);
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_629);
  if(match_cons(t, sym__2))
    {
      if((v_24 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
  t = genzip_4_0(o_7, p_7, q_7, _id, t);
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_68);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm z_29 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = x_88(t);
        t = z_29(t);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm for_3_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t)
{
  t = z_88(t);
  t = while_not_2_0(a_89, b_89, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, (ATerm) ATempty);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(((ATgetType(b_22) != AT_LIST) || !(ATisEmpty(b_22))))
        _fail(t);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_30;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,k_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  if(match_cons(t, sym__2))
    {
      p_36 = ATgetArgument(t, 0);
      q_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
      t = e_36;
      if(match_cons(t, sym__2))
        {
          f_36 = ATgetArgument(t, 0);
          g_36 = ATgetArgument(t, 1);
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_37(p_36, q_36, o_36, t);
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                {
                  ATerm e_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_36;
                      t = p_6(v_7, f_36, g_36, k_36, q_36, t);
                      ;
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = e_22;
                      {
                        ATerm h_22 = t;
                        int i_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = k_37(p_36, q_36, o_36, t);
                            ;
                            LocalPopChoice(i_22);
                          }
                        else
                          {
                            t = h_22;
                            {
                              ATerm l_22 = t;
                              int m_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = l_37(p_36, q_36, o_36, t);
                                  ;
                                  LocalPopChoice(m_22);
                                }
                              else
                                {
                                  t = l_22;
                                  {
                                    ATerm n_22 = t;
                                    int o_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_37(p_36, q_36, o_36, t);
                                        ;
                                        LocalPopChoice(o_22);
                                      }
                                    else
                                      {
                                        t = n_22;
                                        t = n_37(p_36, q_36, o_36, t);
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
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_37(p_36, q_36, o_36, t);
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
                    t = k_37(p_36, q_36, o_36, t);
                    ;
                    LocalPopChoice(s_22);
                  }
                else
                  {
                    t = r_22;
                    {
                      ATerm t_22 = t;
                      int u_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_37(p_36, q_36, o_36, t);
                          ;
                          LocalPopChoice(u_22);
                        }
                      else
                        {
                          t = t_22;
                          {
                            ATerm v_22 = t;
                            int w_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_37(p_36, q_36, o_36, t);
                                ;
                                LocalPopChoice(w_22);
                              }
                            else
                              {
                                t = v_22;
                                t = n_37(p_36, q_36, o_36, t);
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
      ATerm x_22 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_37(p_36, q_36, o_36, t);
          ;
          LocalPopChoice(b_23);
        }
      else
        {
          t = x_22;
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_37(p_36, q_36, o_36, t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                {
                  ATerm e_23 = t;
                  int f_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_37(p_36, q_36, o_36, t);
                      ;
                      LocalPopChoice(f_23);
                    }
                  else
                    {
                      t = e_23;
                      {
                        ATerm g_23 = t;
                        int h_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_37(p_36, q_36, o_36, t);
                            ;
                            LocalPopChoice(h_23);
                          }
                        else
                          {
                            t = g_23;
                            t = n_37(p_36, q_36, o_36, t);
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
ATerm j_37 (ATerm w_30, ATerm x_30, ATerm d_31, ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL,p_31 = NULL,u_17 = NULL;
  t = SSLgetAnnotations(d_31);
  e_31 = t;
  t = w_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_23 = ATgetFirst((ATermList) t);
      if(match_cons(i_23, sym__2))
        {
          h_31 = ATgetArgument(i_23, 0);
          if((h_31 != ATgetArgument(i_23, 1)))
            {
              _fail(ATgetArgument(i_23, 1));
            }
        }
      else
        _fail(t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_31, x_30);
  u_17 = t;
  t = SSLsetAnnotations(u_17, e_31);
  return(t);
}
ATerm k_37 (ATerm z_31, ATerm d_32, ATerm h_32, ATerm t)
{
  ATerm m_32 = NULL,q_32 = NULL,r_32 = NULL,v_32 = NULL,x_32 = NULL,v_17 = NULL;
  t = SSLgetAnnotations(h_32);
  m_32 = t;
  t = z_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          r_32 = ATgetArgument(j_23, 0);
          v_32 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      x_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_6(r_32, v_32, x_32, t);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, d_32);
  v_17 = t;
  t = SSLsetAnnotations(v_17, m_32);
  return(t);
}
ATerm l_37 (ATerm d_33, ATerm e_33, ATerm n_33, ATerm t)
{
  ATerm o_33 = NULL,x_33 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,w_17 = NULL;
  t = SSLgetAnnotations(n_33);
  o_33 = t;
  t = d_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_23 = ATgetFirst((ATermList) t);
      if(match_cons(k_23, sym__2))
        {
          ATerm l_23 = ATgetArgument(k_23, 0);
          if(match_cons(l_23, sym_As_2))
            {
              x_33 = ATgetArgument(l_23, 0);
              b_34 = ATgetArgument(l_23, 1);
            }
          else
            _fail(t);
          c_34 = ATgetArgument(k_23, 1);
        }
      else
        _fail(t);
      d_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(d_34), (ATerm) ATmakeAppl(sym__2, b_34, c_34)), (ATerm) ATmakeAppl(sym__2, x_33, c_34)), e_33);
  w_17 = t;
  t = SSLsetAnnotations(w_17, o_33);
  return(t);
}
ATerm m_37 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm t)
{
  ATerm s_34 = NULL,w_34 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(l_34);
  s_34 = t;
  t = j_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          ATerm n_23 = ATgetArgument(m_23, 0);
          if(!(match_cons(n_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm o_23 = ATgetArgument(m_23, 1);
          }
        }
      else
        _fail(t);
      w_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_34, k_34);
  x_17 = t;
  t = SSLsetAnnotations(x_17, s_34);
  return(t);
}
ATerm n_37 (ATerm y_34, ATerm b_35, ATerm e_35, ATerm t)
{
  ATerm f_35 = NULL,k_35 = NULL,l_35 = NULL,p_35 = NULL,s_35 = NULL,v_35 = NULL,d_18 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(e_35);
  f_35 = t;
  t = y_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_23 = ATgetFirst((ATermList) t);
      if(match_cons(p_23, sym__2))
        {
          k_35 = ATgetArgument(p_23, 0);
          l_35 = ATgetArgument(p_23, 1);
        }
      else
        _fail(t);
      p_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_35;
  {
    ATerm q_23 = t;
    if((PushChoice() == 0))
      {
        ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,b_18 = NULL;
        b_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_36);
        z_35 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_36);
        b_18 = t;
        t = SSLsetAnnotations(b_18, z_35);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_23;
      }
    t = l_35;
    if(match_cons(t, sym_Var_1))
      {
        v_35 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_35);
    s_35 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, v_35);
    c_18 = t;
    t = SSLsetAnnotations(c_18, s_35);
    t = (ATerm) ATmakeAppl(sym__2, p_35, b_35);
    d_18 = t;
    t = SSLsetAnnotations(d_18, f_35);
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm z_36 = NULL,e_37 = NULL,i_37 = NULL,e_18 = NULL;
  i_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_37);
  e_18 = t;
  t = SSLsetAnnotations(e_18, z_36);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(s_7, t_7, u_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL,e_5 = NULL,f_5 = NULL;
      t = (ATerm) ATempty;
      e_5 = t;
      t = term_c_14;
      f_5 = t;
      t = term_t_23;
      t = s_6(f_5, e_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm x_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_23) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          q_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_37;
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_37 = NULL,l_5 = NULL,m_5 = NULL;
            t = (ATerm) ATempty;
            l_5 = t;
            t = term_c_14;
            m_5 = t;
            t = term_t_23;
            t = s_6(m_5, l_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm b_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                r_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_37;
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = y_23;
            {
              ATerm r_5 = NULL,s_5 = NULL;
              t = (ATerm) ATempty;
              r_5 = t;
              t = term_c_14;
              s_5 = t;
              t = term_t_23;
              t = s_6(s_5, r_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm t_62, ATerm u_62, ATerm t)
{
  ATerm t_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_62, u_62);
  t = e_7(t_62, u_62, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      {
        ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_37;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,i_7 = NULL;
        t = term_y_13;
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_13, v_38);
        t = s_6(i_7, v_38, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            u_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_6;
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = e_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_7 = NULL;
              t = term_y_13;
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_13, v_38);
              t = s_6(r_7, v_38, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm z_7 = NULL;
                t = term_y_13;
                z_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_13, v_38);
                t = s_6(z_7, v_38, t);
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
ATerm alltd_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm d_39 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_90(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = SRTS_all(d_39, t);
      }
    return(t);
  }
  t = d_39(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 = NULL,h_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm t_24 = ATgetArgument(t, 0);
          if(match_cons(t_24, sym_Var_1))
            {
              g_8 = ATgetArgument(t_24, 0);
            }
          else
            _fail(t);
          h_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_6(g_8, h_8, t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = z_39;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm z_24 = ATgetArgument(t, 0);
          ATerm a_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_39;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,l_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,n_18 = NULL;
  p_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_39);
  i_39 = t;
  t = l_39;
  t = alltd_1_0(Binding_0_0, t);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, n_39);
  n_18 = t;
  t = SSLsetAnnotations(n_18, i_39);
  o_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        g_39 = t;
        t = o_39;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_39, g_39));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(w_7, t);
              t = o_39;
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = (ATerm) ATmakeAppl(sym__4, term_h_25, o_39, term_m_25, g_39);
              t = debug_1_0(x_7, t);
              t = term_n_25;
            }
        }
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_39 = NULL,y_39 = NULL;
              t = h_39;
              {
                ATerm x_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(y_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_25;
                  }
                t = (ATerm) ATempty;
                x_39 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_25, h_39);
                y_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_25, h_39));
                t = e_6(a_8, x_39, y_39, t);
                t = o_39;
              }
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_40 = NULL,x_40 = NULL;
                  p_40 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      x_40 = ATgetArgument(t, 0);
                      {
                        ATerm f_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = p_40;
                  t = d_6(cp_0_0, x_40, t);
                  ;
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = d_26;
                  {
                    ATerm g_26 = t;
                    int h_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(h_26);
                      }
                    else
                      {
                        t = g_26;
                        {
                          ATerm i_26 = t;
                          int j_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
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
                                    ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,p_18 = NULL;
                                    v_41 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        w_41 = ATgetArgument(t, 0);
                                        x_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_41);
                                    m_8 = t;
                                    t = w_41;
                                    t = cp_0_0(t);
                                    p_8 = t;
                                    t = x_41;
                                    t = cp_0_0(t);
                                    q_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, q_8);
                                    p_18 = t;
                                    t = SSLsetAnnotations(p_18, m_8);
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
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(n_26);
                                        }
                                      else
                                        {
                                          t = m_26;
                                          {
                                            ATerm o_26 = t;
                                            int p_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_42 = NULL,m_42 = NULL,o_42 = NULL;
                                                l_42 = t;
                                                {
                                                  ATerm q_26 = t;
                                                  int r_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm s_26 = ATgetArgument(t, 0);
                                                          ATerm t_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(r_26);
                                                      t = l_42;
                                                      t = b_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = q_26;
                                                      {
                                                        ATerm u_26 = t;
                                                        int v_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm w_26 = ATgetArgument(t, 0);
                                                                ATerm x_26 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(v_26);
                                                            {
                                                              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,q_18 = NULL;
                                                              t = l_42;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  x_8 = ATgetArgument(t, 0);
                                                                  y_8 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(l_42);
                                                              w_8 = t;
                                                              t = y_8;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              z_8 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, x_8, z_8);
                                                              q_18 = t;
                                                              t = SSLsetAnnotations(q_18, w_8);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = u_26;
                                                            {
                                                              ATerm y_26 = t;
                                                              int z_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm a_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(z_26);
                                                                  {
                                                                    ATerm g_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,r_18 = NULL;
                                                                    t = (ATerm) ATempty;
                                                                    g_9 = t;
                                                                    t = term_b_14;
                                                                    j_9 = t;
                                                                    t = term_d_14;
                                                                    t = e_6(b_8, g_9, j_9, t);
                                                                    t = l_42;
                                                                    if(match_cons(t, sym_Not_1))
                                                                      {
                                                                        l_9 = ATgetArgument(t, 0);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    t = SSLgetAnnotations(l_42);
                                                                    k_9 = t;
                                                                    t = l_9;
                                                                    t = exec_maybe_1_0(cp_0_0, t);
                                                                    m_9 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Not_1, m_9);
                                                                    r_18 = t;
                                                                    t = SSLsetAnnotations(r_18, k_9);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = y_26;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      m_42 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm b_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      o_42 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm e_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = l_42;
                                                                  t = a_6(cp_0_0, m_42, o_42, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                ;
                                                LocalPopChoice(p_26);
                                              }
                                            else
                                              {
                                                t = o_26;
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
ATerm t_6 (ATerm n_62, ATerm o_62, ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  w_42 = t;
  {
    ATerm f_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_62, o_62);
        t = e_7(n_62, o_62, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_27 = ATgetFirst((ATermList) t);
            v_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_27);
        t = SSL_table_put(n_62, o_62, v_42);
        t = (ATerm) ATmakeAppl(sym__3, n_62, o_62, v_42);
      }
    else
      {
        t = f_27;
        t = SSL_table_remove(n_62, o_62);
        t = (ATerm) ATmakeAppl(sym__2, n_62, o_62);
      }
    t = w_42;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = r_105(t);
  if(((z_42 != NULL) && (z_42 != t)))
    _fail(t);
  else
    z_42 = t;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_43 = NULL;
        t = term_i_14;
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), term_i_14);
        t = e_7(not_null(z_42), c_43, t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_42 != NULL) && (y_42 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_42 = ATgetFirst((ATermList) t);
        if(((x_42 != NULL) && (x_42 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_14;
    if(((b_43 != NULL) && (b_43 != t)))
      _fail(t);
    else
      b_43 = t;
    t = SSL_table_put(not_null(z_42), not_null(b_43), not_null(x_42));
    t = not_null(y_42);
    {
      ATerm c_8 (ATerm t)
      {
        ATerm d_43 = NULL;
        d_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), d_43);
        t = t_6(not_null(z_42), d_43, t);
        return(t);
      }
      t = map_1_0(c_8, t);
      t = not_null(a_43);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_88(t);
      t = b_88(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = b_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  g_43 = t;
  t = q_105(t);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_43, term_i_14);
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_27 = ATgetArgument(t, 0);
            ATerm s_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_14;
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_43, term_i_14);
        t = e_7(f_43, n_43, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    h_43 = t;
    t = term_i_14;
    i_43 = t;
    t = (ATerm) ATinsert(CheckATermList(h_43), (ATerm) ATempty);
    j_43 = t;
    t = SSL_table_put(f_43, i_43, j_43);
    t = g_43;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    t = end_scope_1_0(s_105, t);
    return(t);
  }
  t = begin_scope_1_0(s_105, t);
  t = restore_always_2_0(t_105, d_8, t);
  return(t);
}
ATerm map_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm c_44 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
    z_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_43;
      }
    else
      {
        ATerm u_9 = NULL,z_9 = NULL,d_10 = NULL,v_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_44 = ATgetFirst((ATermList) t);
            b_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_43);
        u_9 = t;
        t = a_44;
        t = w_94(t);
        z_9 = t;
        t = b_44;
        t = c_44(t);
        d_10 = t;
        t = (ATerm) ATinsert(CheckATermList(d_10), z_9);
        v_18 = t;
        t = SSLsetAnnotations(v_18, u_9);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
ATerm Cons_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,x_18 = NULL;
  j_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_44 = ATgetFirst((ATermList) t);
      g_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_44);
  e_44 = t;
  t = f_44;
  t = q_73(t);
  h_44 = t;
  t = g_44;
  t = r_73(t);
  i_44 = t;
  t = (ATerm) ATinsert(CheckATermList(i_44), h_44);
  x_18 = t;
  t = SSLsetAnnotations(x_18, e_44);
  return(t);
}
ATerm w_6 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm k_44 = NULL;
  t = SSL_fputc(t_52, u_52);
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_44);
  return(t);
}
ATerm x_6 (ATerm h_56, ATerm i_56, ATerm t)
{
  ATerm l_44 = NULL;
  t = SSL_write_term_to_stream_text(h_56, i_56);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_44);
  return(t);
}
ATerm z_6 (ATerm n_107 (ATerm), ATerm r_454, ATerm l_56, ATerm t)
{
  ATerm m_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_454, term_t_27);
  t = open_stream_0_0(t);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_44, l_56);
  t = n_107(t);
  t = fclose_0_0(t);
  t = l_56;
  return(t);
}
ATerm y_6 (ATerm d_56, ATerm e_56, ATerm t)
{
  ATerm n_44 = NULL;
  t = SSL_write_term_to_stream_baf(d_56, e_56);
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_44);
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
  ATerm f_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym_Stream_1))
        {
          f_11 = ATgetArgument(u_27, 0);
        }
      else
        _fail(t);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(f_11, j_11, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(match_cons(w_27, sym_Stream_1))
        {
          r_12 = ATgetArgument(w_27, 0);
        }
      else
        _fail(t);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(r_12, s_12, t);
  l_12 = t;
  t = term_x_27;
  m_12 = t;
  t = l_12;
  if(match_cons(t, sym_Stream_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, l_12);
  t = w_6(m_12, q_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,b_46 = NULL,c_46 = NULL,a_19 = NULL,z_18 = NULL;
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  if(match_cons(t, sym__2))
    {
      if(((z_44 != NULL) && (z_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_44 = ATgetArgument(t, 0);
      if(((a_45 != NULL) && (a_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(s_44));
  if(((y_44 != NULL) && (y_44 != t)))
    _fail(t);
  else
    y_44 = t;
  t = not_null(z_44);
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_8, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        t = term_b_28;
        if(((r_44 != NULL) && (r_44 != t)))
          _fail(t);
        else
          r_44 = t;
      }
    if(((b_45 != NULL) && (b_45 != t)))
      _fail(t);
    else
      b_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_45), not_null(a_45));
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = SSLsetAnnotations(not_null(z_18), not_null(y_44));
    t = not_null(s_44);
    if(match_cons(t, sym__2))
      {
        if(((u_44 != NULL) && (u_44 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_44 = ATgetArgument(t, 0);
        if(((v_44 != NULL) && (v_44 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(s_44));
    if(((t_44 != NULL) && (t_44 != t)))
      _fail(t);
    else
      t_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), (ATerm) ATmakeAppl(sym__2, not_null(r_44), not_null(v_44)));
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    t = SSLsetAnnotations(not_null(a_19), not_null(t_44));
    if(((x_44 != NULL) && (x_44 != t)))
      _fail(t);
    else
      x_44 = t;
    if(match_cons(t, sym__2))
      {
        if(((b_46 != NULL) && (b_46 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_46 = ATgetArgument(t, 0);
        if(((c_46 != NULL) && (c_46 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL,u_10 = NULL,v_10 = NULL,d_11 = NULL,e_11 = NULL,b_19 = NULL;
          t = SSLgetAnnotations(not_null(x_44));
          p_10 = t;
          t = not_null(b_46);
          t = fetch_1_0(j_8, t);
          u_10 = t;
          t = not_null(c_46);
          if(match_cons(t, sym__2))
            {
              d_11 = ATgetArgument(t, 0);
              e_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_6(k_8, d_11, e_11, t);
          v_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
          b_19 = t;
          t = SSLsetAnnotations(b_19, p_10);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          {
            ATerm c_12 = NULL,h_12 = NULL,i_12 = NULL,k_12 = NULL,c_19 = NULL;
            t = SSLgetAnnotations(not_null(x_44));
            c_12 = t;
            t = not_null(c_46);
            if(match_cons(t, sym__2))
              {
                i_12 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_6(l_8, i_12, k_12, t);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_46), h_12);
            c_19 = t;
            t = SSLsetAnnotations(c_19, c_12);
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
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  j_46 = t;
  t = dtime_0_0(t);
  t = j_46;
  t = p_110(t);
  i_46 = t;
  t = dtime_0_0(t);
  f_46 = t;
  t = i_46;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_46), (ATerm) ATmakeAppl(sym_Runtime_1, f_46)), h_46);
  return(t);
}
ATerm x_46 (ATerm r_46, ATerm t)
{
  t = SSL_fclose(r_46);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  v_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_46 = ATgetArgument(t, 0);
      {
        ATerm e_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_46);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = e_28;
            t = x_46(v_46, t);
          }
      }
    }
  else
    {
      t = x_46(v_46, t);
    }
  return(t);
}
ATerm a_7 (ATerm j_56, ATerm t)
{
  t = SSL_read_term_from_stream(j_56);
  return(t);
}
ATerm b_7 (ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm y_46 = NULL;
  t = SSL_fopen(v_52, w_52);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_46);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_46 = NULL;
  t = SSL_stdin_stream();
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_46);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_47 = NULL;
  t = SSL_stdout_stream();
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_47 = NULL;
  t = SSL_stderr_stream();
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_47);
  return(t);
}
ATerm l_48 (ATerm h_47, ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_explode_term(h_47);
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_28 = ATgetArgument(t, 1);
        if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
          {
            i_47 = ATgetFirst((ATermList) j_28);
            {
              ATerm k_28 = (ATerm) ATgetNext((ATermList) j_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_48 (ATerm n_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,w_47 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(p_47);
  t_47 = t;
  t = n_47;
  if(match_cons(t, sym_Path_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_47, o_47);
  h_19 = t;
  t = SSLsetAnnotations(h_19, t_47);
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(r_47, s_47, t);
  return(t);
}
ATerm n_48 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,g_48 = NULL,i_19 = NULL;
  t = SSLgetAnnotations(a_48);
  d_48 = t;
  t = SSL_is_string(y_47);
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_48, z_47);
  i_19 = t;
  t = SSLsetAnnotations(i_19, d_48);
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(b_48, c_48, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      ATerm n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_48 = t;
  if(match_cons(t, sym__2))
    {
      j_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
      {
        ATerm o_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_48(i_48, t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = o_28;
            {
              ATerm r_28 = t;
              int s_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_48(j_48, k_48, i_48, t);
                  ;
                  LocalPopChoice(s_28);
                }
              else
                {
                  t = r_28;
                  t = n_48(j_48, k_48, i_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_48(i_48, t);
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_48 = NULL;
      r_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_48, term_w_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = debug_1_0(n_8, t);
      _fail(t);
    }
  p_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(q_48, t);
  o_48 = t;
  t = p_48;
  t = fclose_0_0(t);
  t = o_48;
  return(t);
}
ATerm fetch_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm p_49 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
    m_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_49 = ATgetFirst((ATermList) t);
        o_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = NULL,q_13 = NULL,l_19 = NULL;
          t = SSLgetAnnotations(m_49);
          m_13 = t;
          t = n_49;
          t = g_95(t);
          q_13 = t;
          t = (ATerm) ATinsert(CheckATermList(o_49), q_13);
          l_19 = t;
          t = SSLsetAnnotations(l_19, m_13);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          {
            ATerm f_14 = NULL,j_14 = NULL,m_19 = NULL;
            t = SSLgetAnnotations(m_49);
            f_14 = t;
            t = o_49;
            t = p_49(t);
            j_14 = t;
            t = (ATerm) ATinsert(CheckATermList(j_14), n_49);
            m_19 = t;
            t = SSLsetAnnotations(m_19, f_14);
          }
        }
    }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  t = SSL_strcat(j_47, k_47);
  return(t);
}
ATerm debug_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  s_49 = t;
  t = l_107(t);
  v_49 = t;
  t = term_l_13;
  w_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_49), v_49);
  x_49 = t;
  t = SSL_printnl(w_49, x_49);
  t = s_49;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
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
      ATerm e_50 = NULL;
      e_50 = t;
      t = SSL_is_string(e_50);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_8, t);
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = j_29;
            {
              ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
              k_50 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_50 = ATgetArgument(t, 0);
                  t = l_50;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_50 = ATgetArgument(t, 0);
                      t = l_50;
                      {
                        ATerm p_29 = t;
                        int q_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_29);
                          }
                        else
                          {
                            t = p_29;
                            t = debug_1_0(r_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_50 = NULL,r_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_50 = ATgetArgument(t, 0);
                          m_50 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_50;
                      t = eval_config_0_0(t);
                      q_50 = t;
                      t = m_50;
                      t = eval_config_0_0(t);
                      r_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
                      t = v_6(q_50, r_50, t);
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
  ATerm v_50 = NULL,w_50 = NULL;
  v_50 = t;
  t = term_r_29;
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, v_50);
  t = e_7(w_50, v_50, t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_50 = NULL,y_50 = NULL;
        t = eval_config_0_0(t);
        x_50 = t;
        t = term_r_29;
        y_50 = t;
        t = SSL_table_put(y_50, v_50, x_50);
        t = x_50;
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm o_51 = NULL;
  o_51 = t;
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL;
        t = term_b_30;
        t = get_config_0_0(t);
        q_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_51, term_c_30);
        t = geq_0_0(t);
        t = o_51;
        t = y_108(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
        t = o_51;
      }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  if(match_string(t, "-k"))
    {
      t = t_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_51;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t = SSL_string_to_int(u_51);
  v_51 = t;
  t = term_d_30;
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_30, v_51);
  t = h_7(w_51, v_51, t);
  t = u_51;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  if(match_string(t, "-S"))
    {
      t = y_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_51;
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  t = term_b_30;
  z_51 = t;
  t = term_f_30;
  a_52 = t;
  t = term_g_30;
  t = h_7(z_51, a_52, t);
  t = term_h_30;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  t = SSL_string_to_int(b_52);
  c_52 = t;
  t = term_b_30;
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, c_52);
  t = h_7(d_52, c_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_52);
  return(t);
}
ATerm o_9 (ATerm t)
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
  ATerm e_52 = NULL,f_52 = NULL;
  t = term_k_30;
  e_52 = t;
  t = term_k_13;
  f_52 = t;
  t = term_l_30;
  t = h_7(e_52, f_52, t);
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
      t = Option_3_0(v_8, a_9, b_9, t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm q_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_9, f_9, o_9, t);
            ;
            LocalPopChoice(t_30);
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
ATerm h_7 (ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm g_52 = NULL;
  t = term_r_29;
  g_52 = t;
  t = SSL_table_put(g_52, k_57, l_57);
  t = (ATerm) ATmakeAppl(sym__3, term_r_29, k_57, l_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
      t = term_k_13;
      t = c_0(t);
      l_52 = t;
      t = term_u_30;
      m_52 = t;
      t = term_v_30;
      n_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, l_52);
      t = f_7(m_52, n_52, l_52, t);
      _fail(t);
    }
  else
    {
      ATerm q_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_52 = ATgetFirst((ATermList) t);
          k_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_52;
      t = a_0(t);
      t = term_k_13;
      t = b_0(t);
      q_52 = t;
      t = (ATerm) ATinsert(CheckATermList(k_52), q_52);
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  if(match_string(t, "-o"))
    {
      t = s_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_52;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  z_52 = t;
  t = term_y_30;
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, z_52);
  t = h_7(a_53, z_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_52);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, v_9, w_9, t);
  return(t);
}
ATerm f_7 (ATerm i_62, ATerm j_62, ATerm h_62, ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_62, j_62);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_31 = ATgetArgument(t, 0);
            ATerm f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_62, j_62);
        t = e_7(i_62, j_62, t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
    d_53 = t;
    t = (ATerm) ATinsert(CheckATermList(d_53), h_62);
    e_53 = t;
    t = SSL_table_put(i_62, j_62, e_53);
    t = c_53;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
      t = term_k_13;
      t = j_0(t);
      p_53 = t;
      t = term_u_30;
      q_53 = t;
      t = term_v_30;
      r_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_v_30, p_53);
      t = f_7(q_53, r_53, p_53, t);
      _fail(t);
    }
  else
    {
      ATerm v_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_53 = ATgetFirst((ATermList) t);
          o_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_53;
      t = f_0(t);
      t = n_53;
      t = h_0(t);
      v_53 = t;
      t = (ATerm) ATinsert(CheckATermList(o_53), v_53);
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  if(match_string(t, "-i"))
    {
      t = x_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_53;
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  y_53 = t;
  t = term_g_31;
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, y_53);
  t = h_7(z_53, y_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_53);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, y_9, c_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_13;
  t = whoami_0_0(t);
  a_54 = t;
  t = term_l_13;
  c_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_31), a_54);
  d_54 = t;
  t = SSL_printnl(c_54, d_54);
  t = term_w_13;
  b_54 = t;
  t = SSL_exit(b_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_7 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm l_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_49, u_49);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = l_31;
      t = SSL_addr(t_49, u_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_54;
      t = z_100(t);
    }
  else
    {
      ATerm k_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_54;
      t = foldr_2_0(z_100, a_101, t);
      k_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_54, k_54);
      t = a_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm c_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(c_16, f_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_54 = NULL,e_15 = NULL,n_15 = NULL;
  t = times_0_0(t);
  n_15 = t;
  t = SSL_explode_term(n_15);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  t = foldr_2_0(e_10, g_10, t);
  n_54 = t;
  t = SSL_TicksToSeconds(n_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  if(match_cons(t, sym__2))
    {
      z_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_55;
        if((z_54 != t))
          {
            _fail(t);
          }
        t = y_54;
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_54, a_55);
              ;
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = SSL_gtr(z_54, a_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_55 = NULL;
        t = term_b_30;
        t = get_config_0_0(t);
        g_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_55, term_w_13);
        t = geq_0_0(t);
        t = e_55;
        t = x_108(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = e_55;
      }
  }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL;
  t = run_time_0_0(t);
  i_55 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  j_55 = t;
  t = term_l_13;
  l_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), i_55), term_y_31), j_55);
  m_55 = t;
  t = SSL_printnl(l_55, m_55);
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), i_55), term_y_31), j_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_30;
  n_55 = t;
  t = SSL_exit(n_55);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_55 = ATgetArgument(t, 0);
          {
            ATerm y_16 = NULL,p_19 = NULL;
            t = SSLgetAnnotations(w_55);
            y_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_55);
            p_19 = t;
            t = SSLsetAnnotations(p_19, y_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = fetch_1_0(i_10, t);
    }
  t = n_111(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_55 = ATgetFirst((ATermList) t);
      a_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_56 = NULL,m_56 = NULL;
        ATerm k_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_56)), not_null(m_56));
          return(t);
        }
        t = not_null(a_56);
        t = e_0(t);
        if(((g_56 != NULL) && (g_56 != t)))
          _fail(t);
        else
          g_56 = t;
        t = not_null(z_55);
        t = d_0(t);
        if(((m_56 != NULL) && (m_56 != t)))
          _fail(t);
        else
          m_56 = t;
        t = not_null(a_56);
        t = reverse_acc_2_0(d_0, k_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_13;
      t = e_0(t);
    }
  return(t);
}
ATerm e_7 (ATerm z_63, ATerm a_64, ATerm t)
{
  t = SSL_table_get(z_63, a_64);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,r_19 = NULL;
  s_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_56);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_56);
  r_19 = t;
  t = SSLsetAnnotations(r_19, q_56);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm u_56 = NULL;
  u_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_56), term_i_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = fetch_1_0(m_10, t);
    }
  t = term_l_32;
  t = echo_0_0(t);
  t = term_u_30;
  o_56 = t;
  t = term_v_30;
  p_56 = t;
  t = term_n_32;
  t = e_7(o_56, p_56, t);
  t = reverse_acc_2_0(_id, o_10, t);
  t = map_1_0(q_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_32 = ATgetFirst((ATermList) t);
                ATerm t_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_56;
          }
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = (ATerm) ATinsert(ATempty, w_56);
      }
    x_56 = t;
    t = term_b_28;
    y_56 = t;
    t = SSL_printnl(y_56, x_56);
    t = w_56;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_31;
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
ATerm s_10 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  t = term_u_32;
  c_57 = t;
  t = term_k_13;
  d_57 = t;
  t = term_w_32;
  t = h_7(c_57, d_57, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  t = term_u_32;
  g_57 = t;
  t = term_k_13;
  h_57 = t;
  t = term_w_32;
  t = h_7(g_57, h_57, t);
  t = term_z_32;
  e_57 = t;
  t = term_k_13;
  f_57 = t;
  t = term_a_33;
  t = h_7(e_57, f_57, t);
  t = term_b_33;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_10, s_10, w_10, t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      t = Option_3_0(x_10, y_10, z_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,y_57 = NULL,z_57 = NULL,t_19 = NULL;
  if(((o_57 != NULL) && (o_57 != t)))
    _fail(t);
  else
    o_57 = t;
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_33;
        t = q_113(t);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
      }
    t = not_null(o_57);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_57 != NULL) && (q_57 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_57 = ATgetFirst((ATermList) t);
        if(((r_57 != NULL) && (r_57 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_57));
    if(((p_57 != NULL) && (p_57 != t)))
      _fail(t);
    else
      p_57 = t;
    t = term_k_31;
    if(((z_57 != NULL) && (z_57 != t)))
      _fail(t);
    else
      z_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_31, not_null(q_57));
    t = h_7(not_null(z_57), not_null(q_57), t);
    t = not_null(r_57);
    {
      ATerm j_58 (ATerm t)
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_58 = NULL;
                c_58 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_58;
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = m_33;
                t = q_113(t);
                t = Cons_2_0(_id, j_58, t);
              }
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            {
              ATerm f_58 = NULL,g_58 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_58 = ATgetFirst((ATermList) t);
                  g_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_58), (ATerm) ATmakeAppl(sym_Undefined_1, f_58));
            }
          }
        return(t);
      }
      t = j_58(t);
      if(((y_57 != NULL) && (y_57 != t)))
        _fail(t);
      else
        y_57 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(y_57)), (ATerm) ATmakeAppl(sym_Program_1, not_null(q_57)));
      if(((t_19 != NULL) && (t_19 != t)))
        _fail(t);
      else
        t_19 = t;
      t = SSLsetAnnotations(not_null(t_19), not_null(p_57));
    }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  if(match_string(t, "--help"))
    {
      t = v_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_58;
        }
    }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL;
  t = term_e_32;
  w_58 = t;
  t = term_k_13;
  x_58 = t;
  t = term_q_33;
  t = h_7(w_58, x_58, t);
  t = term_r_33;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm l_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  if(((q_58 != NULL) && (q_58 != t)))
    _fail(t);
  else
    q_58 = t;
  t = term_u_30;
  if(((s_58 != NULL) && (s_58 != t)))
    _fail(t);
  else
    s_58 = t;
  t = term_v_30;
  if(((t_58 != NULL) && (t_58 != t)))
    _fail(t);
  else
    t_58 = t;
  t = (ATerm) ATempty;
  if(((u_58 != NULL) && (u_58 != t)))
    _fail(t);
  else
    u_58 = t;
  t = SSL_table_put(not_null(s_58), not_null(t_58), not_null(u_58));
  t = not_null(q_58);
  {
    ATerm a_11 (ATerm t)
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_113(t);
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm v_33 = t;
            int w_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_11, c_11, k_11, t);
                ;
                LocalPopChoice(w_33);
              }
            else
              {
                t = v_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_11, t);
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_59 = NULL;
          i_59 = t;
          {
            ATerm a_34 = t;
            int e_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_17 = NULL;
                t = i_59;
                {
                  ATerm f_34 = t;
                  int g_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_34);
                    }
                  else
                    {
                      t = f_34;
                      t = fetch_1_0(l_11, t);
                    }
                  t = i_59;
                  t = default_system_usage_0_0(t);
                  t = term_f_30;
                  h_17 = t;
                  t = SSL_exit(h_17);
                }
                ;
                LocalPopChoice(e_34);
              }
            else
              {
                t = a_34;
                {
                  ATerm p_17 = NULL;
                  t = term_u_32;
                  t = get_config_0_0(t);
                  t = i_59;
                  t = default_system_about_0_0(t);
                  t = term_f_30;
                  p_17 = t;
                  t = SSL_exit(p_17);
                }
              }
          }
          ;
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm h_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
                ATerm y_11 (ATerm t)
                {
                  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,v_19 = NULL;
                  o_59 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_59);
                  m_59 = t;
                  t = n_59;
                  if(((o_58 != NULL) && (o_58 != t)))
                    _fail(t);
                  else
                    o_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_59);
                  v_19 = t;
                  t = SSLsetAnnotations(v_19, m_59);
                  return(t);
                }
                t = fetch_1_0(y_11, t);
                t = term_l_13;
                if(((k_59 != NULL) && (k_59 != t)))
                  _fail(t);
                else
                  k_59 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_58)), term_m_34);
                if(((l_59 != NULL) && (l_59 != t)))
                  _fail(t);
                else
                  l_59 = t;
                t = SSL_printnl(not_null(k_59), not_null(l_59));
                t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_58)), term_m_34));
                t = default_system_usage_0_0(t);
                t = term_w_13;
                if(((j_59 != NULL) && (j_59 != t)))
                  _fail(t);
                else
                  j_59 = t;
                t = SSL_exit(not_null(j_59));
                ;
                LocalPopChoice(i_34);
              }
            else
              {
                t = h_34;
              }
          }
        }
      if(((p_58 != NULL) && (p_58 != t)))
        _fail(t);
      else
        p_58 = t;
      t = term_u_30;
      if(((r_58 != NULL) && (r_58 != t)))
        _fail(t);
      else
        r_58 = t;
      t = SSL_table_destroy(not_null(r_58));
      t = not_null(p_58);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  t = parse_options_1_0(p_111, t);
  t_59 = t;
  t = term_n_34;
  w_59 = t;
  t = SSL_table_create(w_59);
  t = term_n_34;
  u_59 = t;
  t = term_o_34;
  v_59 = t;
  t = SSL_table_put(u_59, v_59, t_59);
  t = t_59;
  t = r_111(t);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_111, t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          ATerm r_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_34);
            }
          else
            {
              t = r_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = if_verbose2_1_0(t_12, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = term_u_34;
  x_59 = t;
  t = term_k_13;
  y_59 = t;
  t = term_v_34;
  t = h_7(x_59, y_59, t);
  t = term_x_34;
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  z_59 = t;
  t = term_k_31;
  t = get_config_0_0(t);
  a_60 = t;
  t = term_l_13;
  b_60 = t;
  t = (ATerm) ATinsert(ATempty, a_60);
  c_60 = t;
  t = SSL_printnl(b_60, c_60);
  t = z_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm a_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = a_35;
        {
          ATerm d_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = d_35;
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_35);
                  }
                else
                  {
                    t = h_35;
                    {
                      ATerm j_35 = t;
                      int m_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_12, n_12, o_12, t);
                          ;
                          LocalPopChoice(m_35);
                        }
                      else
                        {
                          t = j_35;
                          {
                            ATerm n_35 = t;
                            int o_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(o_35);
                              }
                            else
                              {
                                t = n_35;
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
  ATerm f_12 (ATerm t)
  {
    ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
    if(((e_60 != NULL) && (e_60 != t)))
      _fail(t);
    else
      e_60 = t;
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_60 != NULL) && (d_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_12, t);
          ;
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          t = term_t_35;
          if(((d_60 != NULL) && (d_60 != t)))
            _fail(t);
          else
            d_60 = t;
        }
      t = not_null(d_60);
      t = ReadFromFile_0_0(t);
      if(((f_60 != NULL) && (f_60 != t)))
        _fail(t);
      else
        f_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_60), not_null(f_60));
      t = apply_strategy_1_0(y_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_11, a_111, d_12, f_12, t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,b_20 = NULL,a_20 = NULL,z_19 = NULL,x_19 = NULL;
  u_60 = t;
  if(match_cons(t, sym__2))
    {
      h_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_60);
  g_60 = t;
  t = i_60;
  if(match_cons(t, sym_Specification_1))
    {
      k_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_60);
  j_60 = t;
  t = k_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  m_60 = t;
  t = n_60;
  if(match_cons(t, sym_Signature_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_60);
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, s_60);
  x_19 = t;
  t = SSLsetAnnotations(x_19, r_60);
  t_60 = t;
  t = o_60;
  t = Cons_2_0(x_12, d_13, t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), t_60);
  z_19 = t;
  t = SSLsetAnnotations(z_19, m_60);
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_60);
  a_20 = t;
  t = SSLsetAnnotations(a_20, j_60);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_60, l_60);
  b_20 = t;
  t = SSLsetAnnotations(b_20, g_60);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,y_19 = NULL;
  y_60 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  v_60 = t;
  t = w_60;
  t = map_1_0(e_13, t);
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_60);
  y_19 = t;
  t = SSLsetAnnotations(y_19, v_60);
  return(t);
}
ATerm d_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = scope_2_0(h_13, i_13, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = scope_2_0(j_13, cp_0_0, t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(v_12, _fail, default_usage_0_0, t);
  return(t);
}
