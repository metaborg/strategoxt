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
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Seq_2;
Symbol sym_Prim_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_u_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_z_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_l_26;
ATerm term_a_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_m_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_l_20;
ATerm term_n_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_b_8;
void init_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_12);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Some_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, term_b_8);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm y_109 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm p_94 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm Var_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm l_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm b_4 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm z_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm o_17 (ATerm i_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm v_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm d_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm r_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_99 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm parse_options_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm q_7 (ATerm);
ATerm iowrap_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  n_0 = t;
  t = term_b_8;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = n_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm c_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_0);
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      {
        ATerm g_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(u_0, (ATerm) ATempty);
  v_0 = t;
  t = SSL_mkterm(t_0, (ATerm) ATempty);
  y_0 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, v_0, y_0));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_0 = ATgetFirst((ATermList) t);
      {
        ATerm k_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_0;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_8;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_1);
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      {
        ATerm n_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      {
        ATerm o_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(l_1, (ATerm) ATempty);
  m_1 = t;
  t = SSL_mkterm(i_1, (ATerm) ATempty);
  n_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, m_1, n_1));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_1 = ATgetFirst((ATermList) t);
      {
        ATerm s_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_8;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_1);
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      {
        ATerm w_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm x_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(t_1, (ATerm) ATempty);
  u_1 = t;
  t = SSL_mkterm(s_1, (ATerm) ATempty);
  v_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, u_1, v_1));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_1 = ATgetFirst((ATermList) t);
      {
        ATerm a_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_8;
  return(t);
}
ATerm c_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm c_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_0, t);
        t = p_87(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = c_9;
        t = Cons_2_0(_id, x_1, t);
      }
    return(t);
  }
  t = x_1(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  ATerm e_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_1 != NULL) && (y_1 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_1 = ATgetFirst((ATermList) t);
        {
          ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(e_0, t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, not_null(y_1));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,f_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  b_2 = t;
  c_2 = t;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      {
        ATerm i_9 = ATgetArgument(t, 1);
        if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
          {
            i_2 = ATgetFirst((ATermList) i_9);
            l_2 = (ATerm) ATgetNext((ATermList) i_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_2;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_2;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_2, i_2);
        t = RightAssoc_0_0(t);
        t = i_2;
        t = s_112(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
      }
    o_2 = t;
    t = m_2;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm z_2 = NULL;
        z_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_2, z_2);
        t = GreaterThan_0_0(t);
        t = z_2;
        t = s_112(t);
        return(t);
      }
      t = map_1_0(r_0, t);
      t_2 = t;
      t = n_2;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_2, n_2);
            t = LeftAssoc_0_0(t);
            t = n_2;
            t = s_112(t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
          }
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_2, (ATerm) ATinsert(ATempty, u_2));
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm x_9 = ATgetArgument(t, 0);
                  ATerm y_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_2;
              {
                ATerm s_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, u_2);
                  return(t);
                }
                t = at_end_1_0(s_0, t);
              }
              ;
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              {
                ATerm w_0 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_2, (ATerm) ATinsert(ATempty, u_2)));
                if(match_cons(t, sym__2))
                  {
                    ATerm z_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    w_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_0;
                t = concat_0_0(t);
              }
            }
          x_2 = t;
          t = SSL_mkterm(f_2, (ATerm) ATinsert(CheckATermList(x_2), o_2));
        }
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = bottomup_1_0(y_109, t);
    return(t);
  }
  t = SRTS_all(x_0, t);
  t = y_109(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_none_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,w_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
          {
            ATerm b_10 = ATgetFirst((ATermList) a_10);
            if(match_cons(b_10, sym__2))
              {
                ATerm e_10 = ATgetArgument(b_10, 0);
                if(!(match_cons(e_10, sym_None_0)))
                  _fail(t);
                r_3 = ATgetArgument(b_10, 1);
              }
            else
              _fail(t);
            w_3 = (ATerm) ATgetNext((ATermList) a_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  t = for_each_pair_1_0(c_1, t);
  t = (ATerm) ATmakeAppl(sym__2, r_3, q_3);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm l_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3;
        {
          ATerm d_1 (ATerm t)
          {
            t = q_3;
            return(t);
          }
          t = at_end_1_0(d_1, t);
        }
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        {
          ATerm f_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_3, q_3));
          if(match_cons(t, sym__2))
            {
              ATerm n_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_1;
          t = concat_0_0(t);
        }
      }
    a_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_4, w_3);
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
          {
            ATerm r_10 = ATgetFirst((ATermList) p_10);
            if(match_cons(r_10, sym__2))
              {
                ATerm s_10 = ATgetArgument(r_10, 0);
                if(match_cons(s_10, sym_Some_1))
                  {
                    ATerm t_10 = ATgetArgument(s_10, 0);
                    if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                k_4 = ATgetArgument(r_10, 1);
              }
            else
              _fail(t);
            l_4 = (ATerm) ATgetNext((ATermList) p_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_4, k_4);
  t = for_each_pair_1_0(e_1, t);
  t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
  t = for_each_pair_1_0(g_1, t);
  t = (ATerm) ATmakeAppl(sym__2, k_4, i_4);
  {
    ATerm y_10 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_11 = ATgetArgument(t, 0);
            ATerm n_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_4;
        {
          ATerm h_1 (ATerm t)
          {
            t = i_4;
            return(t);
          }
          t = at_end_1_0(h_1, t);
        }
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = y_10;
        {
          ATerm k_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, k_4, i_4));
          if(match_cons(t, sym__2))
            {
              ATerm o_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_11) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_1;
          t = concat_0_0(t);
        }
      }
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_4, l_4);
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
          {
            ATerm u_11 = ATgetFirst((ATermList) t_11);
            if(match_cons(u_11, sym__2))
              {
                ATerm v_11 = ATgetArgument(u_11, 0);
                if(match_cons(v_11, sym_Some_1))
                  {
                    ATerm w_11 = ATgetArgument(v_11, 0);
                    if((ATgetSymbol((ATermAppl) w_11) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t_4 = ATgetArgument(u_11, 1);
              }
            else
              _fail(t);
            u_4 = (ATerm) ATgetNext((ATermList) t_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, t_4);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
  t = for_each_pair_1_0(j_1, t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_12 = ATgetArgument(t, 0);
            ATerm d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_4;
        {
          ATerm r_1 (ATerm t)
          {
            t = s_4;
            return(t);
          }
          t = at_end_1_0(r_1, t);
        }
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm h_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_4, s_4));
          if(match_cons(t, sym__2))
            {
              ATerm e_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              h_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_2;
          t = concat_0_0(t);
        }
      }
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, u_4);
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm GenRightAssoc_0_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(h_5, (ATerm) ATempty);
  j_5 = t;
  t = SSL_mkterm(i_5, (ATerm) ATempty);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_5, k_5), term_h_12);
  t = assert_1_0(a_2, t);
  t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm GenLeftAssoc_0_0 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL,r_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(l_5, (ATerm) ATempty);
  o_5 = t;
  t = SSL_mkterm(n_5, (ATerm) ATempty);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_5, r_5), term_k_12);
  t = assert_1_0(d_2, t);
  t = (ATerm) ATmakeAppl(sym__2, l_5, n_5);
  return(t);
}
ATerm assert_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_94(t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_6, s_5, t_5);
  t = table_push_0_0(t);
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_6, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_6 = ATgetFirst((ATermList) t);
        c_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_6, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATinsert(CheckATermList(b_6), s_5)));
    t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm GenGreaterThan_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(g_6, (ATerm) ATempty);
  j_6 = t;
  t = SSL_mkterm(h_6, (ATerm) ATempty);
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_6, k_6), term_p_12);
  t = assert_1_0(e_2, t);
  t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
  return(t);
}
ATerm for_each_pair_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm p_6 = NULL;
      ATerm j_2 (ATerm t)
      {
        ATerm q_6 = NULL;
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), q_6);
        t = h_86(t);
        return(t);
      }
      if(((p_6 != NULL) && (p_6 != t)))
        _fail(t);
      else
        p_6 = t;
      t = o_6;
      t = map_1_0(j_2, t);
      return(t);
    }
    t = map_1_0(g_2, t);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm v_6 = NULL,y_6 = NULL,z_6 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      {
        ATerm q_12 = ATgetArgument(t, 1);
        if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
          {
            ATerm r_12 = ATgetFirst((ATermList) q_12);
            if(match_cons(r_12, sym__2))
              {
                ATerm s_12 = ATgetArgument(r_12, 0);
                if(match_cons(s_12, sym_Some_1))
                  {
                    ATerm u_12 = ATgetArgument(s_12, 0);
                    if((ATgetSymbol((ATermAppl) u_12) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                y_6 = ATgetArgument(r_12, 1);
              }
            else
              _fail(t);
            z_6 = (ATerm) ATgetNext((ATermList) q_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, y_6);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, v_6, y_6);
  t = for_each_pair_1_0(k_2, t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, v_6);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_13 = ATgetArgument(t, 0);
            ATerm b_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_6;
        {
          ATerm p_2 (ATerm t)
          {
            t = v_6;
            return(t);
          }
          t = at_end_1_0(p_2, t);
        }
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm q_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_6, v_6));
          if(match_cons(t, sym__2))
            {
              ATerm c_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_2;
          t = concat_0_0(t);
        }
      }
    f_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_7, z_6);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm k_15 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_100(t);
        t = k_15(t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
ATerm innermost_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_102(t);
        t = innermost_1_0(n_102, t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
      }
    return(t);
  }
  t = bottomup_1_0(r_2, t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm y_7 = NULL;
  ATerm s_2 (ATerm t)
  {
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      if(((y_7 != NULL) && (y_7 != t)))
        _fail(t);
      else
        y_7 = t;
      return(t);
    }
    t = fetch_1_0(y_2, t);
    return(t);
  }
  t = _2_0(s_2, v_2, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm z_7 = NULL,w_2 = NULL;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_14), term_i_14), term_h_14), term_c_14), term_b_14), term_a_14), term_z_13), term_y_13), term_x_13), term_v_13), term_u_13), term_t_13), term_s_13), term_r_13), term_q_13), term_o_13), term_m_13), term_l_13), term_k_13), term_j_13), term_i_13), term_h_13));
  t = member_0_0(t);
  t = SSL_explode_string(z_7);
  w_2 = t;
  t = SSL_implode_string((ATerm) ATinsert(CheckATermList(w_2), (ATerm) ATmakeInt(39)));
  return(t);
}
ATerm Op_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_8);
  d_8 = t;
  t = e_8;
  t = b_72(t);
  i_8 = t;
  t = h_8;
  t = c_72(t);
  j_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, i_8, j_8), d_8);
  return(t);
}
ATerm OpDecl_2_0 (ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,u_8 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL;
  z_8 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      r_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_8);
  q_8 = t;
  t = r_8;
  t = l_71(t);
  v_8 = t;
  t = u_8;
  t = m_71(t);
  y_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, v_8, y_8), q_8);
  return(t);
}
ATerm SVar_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,l_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  d_9 = t;
  t = g_9;
  t = e_75(t);
  h_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, h_9), d_9);
  return(t);
}
ATerm Var_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL,t_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_9);
  o_9 = t;
  t = p_9;
  t = v_71(t);
  s_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_9), o_9);
  return(t);
}
ATerm VarDec_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,m_10 = NULL,o_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  i_10 = t;
  t = j_10;
  t = q_77(t);
  m_10 = t;
  t = k_10;
  t = r_77(t);
  o_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, m_10, o_10), i_10);
  return(t);
}
ATerm SDef_3_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
      x_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  u_10 = t;
  t = v_10;
  t = u_77(t);
  z_10 = t;
  t = w_10;
  t = v_77(t);
  a_11 = t;
  t = x_10;
  t = w_77(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, z_10, a_11, b_11), u_10);
  return(t);
}
ATerm RDef_3_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_RDef_3))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      i_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_11);
  f_11 = t;
  t = g_11;
  t = a_74(t);
  j_11 = t;
  t = h_11;
  t = b_74(t);
  k_11 = t;
  t = i_11;
  t = c_74(t);
  l_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, j_11, k_11, l_11), f_11);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  p_11 = t;
  t = q_11;
  t = p_77(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, r_11), p_11);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(p_14) != AT_INT) || (ATgetInt((ATermInt) p_14) != 34)))
                _fail(t);
              x_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_11), term_r_14), term_q_14);
          ;
          LocalPopChoice(o_14);
        }
      else
        {
          t = n_14;
          {
            ATerm a_12 = NULL,c_12 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_12 = ATgetFirst((ATermList) t);
                c_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_12;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_12), term_q_14), term_q_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_12), term_s_14), term_q_14);
              }
          }
        }
      {
        ATerm a_3 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, a_3, t);
      }
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm t_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = t_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_14);
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,w_12 = NULL;
      v_12 = t;
      if(match_cons(t, sym_Str_1))
        {
          w_12 = ATgetArgument(t, 0);
          {
            ATerm z_12 = NULL,c_3 = NULL,e_3 = NULL;
            t = SSL_explode_string(w_12);
            {
              ATerm a_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_3 = NULL,t_3 = NULL;
                  g_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_15 = ATgetFirst((ATermList) t);
                      if(((ATgetType(c_15) != AT_INT) || (ATgetInt((ATermInt) c_15) != 34)))
                        _fail(t);
                      t_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_3;
                  t = last_0_0(t);
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                    _fail(t);
                  t = g_3;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = a_15;
                }
              t = escape_chars_0_0(t);
              e_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), term_r_14), (ATerm) ATinsert(ATempty, term_r_14));
              {
                ATerm e_15 = t;
                int f_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_15 = ATgetArgument(t, 0);
                        ATerm h_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(e_3), term_r_14);
                    t = at_end_1_0(b_3, t);
                    ;
                    LocalPopChoice(f_15);
                  }
                else
                  {
                    t = e_15;
                    {
                      ATerm y_3 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                      if(match_cons(t, sym__2))
                        {
                          ATerm i_15 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) i_15) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          y_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_3;
                      t = concat_0_0(t);
                    }
                  }
                c_3 = t;
                t = SSL_implode_string(c_3);
                z_12 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, z_12);
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              w_12 = ATgetArgument(t, 0);
              {
                ATerm f_4 = NULL;
                t = SSL_real_to_string(w_12);
                f_4 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, f_4);
              }
            }
          else
            {
              ATerm w_4 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  w_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(w_12);
              w_4 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, w_4);
            }
        }
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = w_14;
      {
        ATerm j_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(l_15);
          }
        else
          {
            t = j_15;
            {
              ATerm m_15 = t;
              int o_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(o_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm p_15 = t;
                    int q_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(q_15);
                      }
                    else
                      {
                        t = p_15;
                        {
                          ATerm w_15 = t;
                          int x_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
                              ;
                              LocalPopChoice(x_15);
                            }
                          else
                            {
                              t = w_15;
                              {
                                ATerm z_15 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = z_15;
                                    {
                                      ATerm g_16 = t;
                                      int y_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(y_16);
                                        }
                                      else
                                        {
                                          t = g_16;
                                          {
                                            ATerm z_16 = t;
                                            int a_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(a_17);
                                              }
                                            else
                                              {
                                                t = z_16;
                                                t = Op_2_0(AddLeadingPrime_0_0, _id, t);
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
ATerm last_0_0 (ATerm t)
{
  ATerm n_13 = NULL,p_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_13 = ATgetFirst((ATermList) t);
      p_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_13;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_13;
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          t = p_13;
          t = last_0_0(t);
        }
    }
  else
    {
      t = p_13;
      t = last_0_0(t);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_explode_string(d_14);
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm m_5 = NULL,p_5 = NULL,q_5 = NULL,u_5 = NULL;
  t = _2_0(_id, d_3, t);
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((p_5 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      u_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_5;
  t = last_0_0(t);
  if((p_5 != t))
    {
      _fail(t);
    }
  t = m_5;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_14);
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,b_15 = NULL,d_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      b_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      x_14 = ATgetArgument(t, 2);
      t = x_14;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, b_15, d_15);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          b_15 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
          x_14 = ATgetArgument(t, 2);
          t = x_14;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, b_15, d_15);
        }
      else
        {
          ATerm x_6 = NULL,k_7 = NULL,m_7 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              b_15 = ATgetArgument(t, 0);
              d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_15;
          {
            ATerm d_17 = t;
            if((PushChoice() == 0))
              {
                ATerm a_7 = NULL;
                a_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_14, a_7);
                t = is_quoted_0_0(t);
                t = a_7;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_17;
              }
            t = SSL_explode_string(b_15);
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), term_r_14), (ATerm) ATinsert(ATempty, term_r_14));
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_17 = ATgetArgument(t, 0);
                      ATerm j_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(m_7), term_r_14);
                  t = at_end_1_0(f_3, t);
                  ;
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  {
                    ATerm x_7 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                    if(match_cons(t, sym__2))
                      {
                        ATerm k_17 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        x_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_7;
                    t = concat_0_0(t);
                  }
                }
              k_7 = t;
              t = SSL_implode_string(k_7);
              x_6 = t;
              t = (ATerm) ATmakeAppl(sym_Prim_2, x_6, d_15);
            }
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  t = x_109(t);
  {
    ATerm h_3 (ATerm t)
    {
      t = topdown_1_0(x_109, t);
      return(t);
    }
    t = SRTS_all(h_3, t);
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm n_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_15 = ATgetArgument(t, 0);
      {
        ATerm s_17 = ATgetArgument(t, 1);
        if(match_cons(s_17, sym_Seq_2))
          {
            t_15 = ATgetArgument(s_17, 0);
            u_15 = ATgetArgument(s_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, s_15, t_15), u_15);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gen_left_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = gen_right_0_0(t);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm a_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = gen_non_assoc_0_0(t);
                  ;
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = a_18;
                  t = gen_none_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, v_15);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(m_3, t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = NULL,f_8 = NULL;
      r_15 = t;
      t = SSL_explode_term(r_15);
      if(match_cons(t, sym__2))
        {
          ATerm s_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm t_18 = ATgetArgument(t, 1);
            if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
              {
                f_8 = ATgetFirst((ATermList) t_18);
                {
                  ATerm w_18 = (ATerm) ATgetNext((ATermList) t_18);
                  if(((ATgetType(w_18) != AT_LIST) || !(ATisEmpty(w_18))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = f_8;
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
    }
  t = topdown_1_0(i_3, t);
  t = innermost_1_0(j_3, t);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATempty, term_d_19), term_b_19))), (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATempty, term_z_18))));
  t = repeat_1_0(k_3, t);
  t = n_15;
  t = bottomup_1_0(l_3, t);
  return(t);
}
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  e_16 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_16);
  y_15 = t;
  t = a_16;
  t = c_66(t);
  c_16 = t;
  t = b_16;
  t = d_66(t);
  d_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_16, d_16), y_15);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_16, term_e_19);
  t = open_stream_0_0(t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, i_16);
  t = o_97(t);
  t = fclose_0_0(t);
  t = i_16;
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if(match_cons(f_19, sym_Stream_1))
        {
          m_16 = ATgetArgument(f_19, 0);
        }
      else
        _fail(t);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(m_16, n_16);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_16);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if(match_cons(g_19, sym_Stream_1))
        {
          p_16 = ATgetArgument(g_19, 0);
        }
      else
        _fail(t);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(p_16, q_16);
  r_16 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), r_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_16);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = fetch_1_0(v_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = WriteToFile_1_0(x_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = WriteToFile_1_0(b_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm h_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_3, t);
          ;
          LocalPopChoice(j_19);
        }
      else
        {
          t = h_19;
          t = term_n_19;
          if(((l_16 != NULL) && (l_16 != t)))
            _fail(t);
          else
            l_16 = t;
        }
      return(t);
    }
    t = _2_0(n_3, _id, t);
    t = k_16;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_8 = NULL;
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), p_8);
        return(t);
      }
      t = _2_0(_id, p_3, t);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(s_3, u_3, t);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = _2_0(_id, z_3, t);
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
ATerm apply_strategy_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  t_16 = t;
  t = dtime_0_0(t);
  t = t_16;
  t = r_83(t);
  u_16 = t;
  t = dtime_0_0(t);
  v_16 = t;
  t = u_16;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_16), (ATerm) ATmakeAppl(sym_Runtime_1, v_16)), x_16);
  return(t);
}
ATerm o_17 (ATerm i_17, ATerm t)
{
  t = SSL_fclose(i_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_17 = ATgetArgument(t, 0);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_17);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = o_17(m_17, t);
          }
      }
    }
  else
    {
      t = o_17(m_17, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_stdin_stream();
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_stdout_stream();
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stderr_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm d_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_18;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_is_string(h_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      ATerm v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,v_9 = NULL;
        u_9 = t;
        t = SSL_explode_term(u_9);
        if(match_cons(t, sym__2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_20 = ATgetArgument(t, 1);
              if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
                {
                  v_9 = ATgetFirst((ATermList) a_20);
                  {
                    ATerm b_20 = (ATerm) ATgetNext((ATermList) a_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_9;
        if(match_cons(t, sym_stderr_0))
          {
            t = v_9;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = v_9;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_9;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          ATerm c_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_17 = NULL,b_18 = NULL,c_18 = NULL;
              t = _2_0(c_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_17 = ATgetArgument(t, 0);
                  b_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_17, b_18);
              c_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_18);
              ;
              LocalPopChoice(g_20);
            }
          else
            {
              t = c_20;
              {
                ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                t = _2_0(d_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_18 = ATgetArgument(t, 0);
                    f_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_18, f_18);
                g_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL;
      l_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, term_l_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm w_9 = NULL;
        w_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = w_9;
        _fail(t);
      }
    }
  i_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_18);
  j_18 = t;
  t = i_18;
  t = fclose_0_0(t);
  t = j_18;
  return(t);
}
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_86, _id, t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = Cons_2_0(_id, u_18, t);
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = o_20;
      {
        ATerm a_19 = NULL,c_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_19 = ATgetFirst((ATermList) t);
            c_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_19;
        {
          ATerm e_4 (ATerm t)
          {
            t = c_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm i_19 (ATerm t)
  {
    ATerm s_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_19, t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = s_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_87(t);
      }
    return(t);
  }
  t = i_19(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  t = SSL_explode_string(l_19);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = SSL_explode_string(m_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  t = _2_0(g_4, h_4, t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL,p_19 = NULL;
        if(match_cons(t, sym__2))
          {
            o_19 = ATgetArgument(t, 0);
            p_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_19;
        {
          ATerm j_4 (ATerm t)
          {
            t = p_19;
            return(t);
          }
          t = at_end_1_0(j_4, t);
        }
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm c_10 = NULL,d_10 = NULL;
          c_10 = t;
          t = SSL_explode_term(c_10);
          if(match_cons(t, sym__2))
            {
              ATerm f_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10;
          t = concat_0_0(t);
        }
      }
    k_19 = t;
    t = SSL_implode_string(k_19);
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      t = SSL_is_string(z_19);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_4, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
              d_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_20 = ATgetArgument(t, 0);
                  t = e_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_20 = ATgetArgument(t, 0);
                      t = e_20;
                      {
                        ATerm t_21 = t;
                        int u_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_20);
                            {
                              ATerm w_21 = t;
                              int x_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_12 = NULL;
                                  t = eval_config_0_0(t);
                                  t_12 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_20, t_12);
                                  t = t_12;
                                  ;
                                  LocalPopChoice(x_21);
                                }
                              else
                                {
                                  t = w_21;
                                }
                            }
                            ;
                            LocalPopChoice(u_21);
                          }
                        else
                          {
                            t = t_21;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = e_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_20 = NULL,k_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_20 = ATgetArgument(t, 0);
                          f_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_20;
                      t = eval_config_0_0(t);
                      j_20 = t;
                      t = f_20;
                      t = eval_config_0_0(t);
                      k_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_20, k_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      p_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_13 = NULL;
            t = eval_config_0_0(t);
            w_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_13);
            t = w_13;
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
          }
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, term_i_22);
        t = geq_0_0(t);
        t = p_20;
        t = q_107(t);
      }
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  if(match_string(t, "-k"))
    {
      t = t_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_20;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  u_20 = t;
  t = SSL_string_to_int(u_20);
  v_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_20);
  t = u_20;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-S"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_q_22;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  y_20 = t;
  t = SSL_string_to_int(y_20);
  z_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_20);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_20);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_22;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, v_4, x_4, t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, a_5, b_5, t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = Option_3_0(c_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_21 = NULL;
      t = term_b_8;
      t = d_0(t);
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_23, term_c_23, e_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_21 = ATgetFirst((ATermList) t);
          d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_21;
      t = a_0(t);
      t = term_b_8;
      t = b_0(t);
      h_21 = t;
      t = (ATerm) ATinsert(CheckATermList(d_21), h_21);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  if(match_string(t, "-o"))
    {
      t = j_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_21;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_21);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_21);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, v_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__3))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
      p_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm k_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_21, o_21);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATempty;
      }
    q_21 = t;
    t = SSL_table_put(n_21, o_21, (ATerm) ATinsert(CheckATermList(q_21), p_21));
    t = (ATerm) ATmakeAppl(sym__3, n_21, o_21, p_21);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_22 = NULL;
      t = term_b_8;
      t = m_0(t);
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_23, term_c_23, d_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = i_0(t);
      t = a_22;
      t = k_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(b_22), h_22);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  if(match_string(t, "-i"))
    {
      t = j_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_22;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_22);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_22);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_8;
  t = whoami_0_0(t);
  l_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL;
        t = eval_config_0_0(t);
        e_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_14);
        t = e_14;
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_93(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = r_23;
      {
        ATerm o_22 = NULL,p_22 = NULL,s_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_22 = ATgetFirst((ATermList) t);
            p_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_22;
        t = foldr_2_0(e_93, f_93, t);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, s_22);
        t = f_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm j_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_14, u_14);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = SSL_addr(j_14, u_14);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_22 = NULL,f_14 = NULL,g_14 = NULL;
  t = times_0_0(t);
  f_14 = t;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14;
  t = foldr_2_0(z_5, d_6, t);
  v_22 = t;
  t = SSL_TicksToSeconds(v_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_23;
        if((h_23 != t))
          {
            _fail(t);
          }
        t = g_23;
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = g_23;
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_23, i_23);
              ;
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              t = SSL_gtr(h_23, i_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_23, i_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,n_23 = NULL;
      l_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 = NULL;
            t = eval_config_0_0(t);
            e_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_17);
            t = e_17;
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = u_24;
          }
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_y_24);
        t = geq_0_0(t);
        t = l_23;
        t = p_107(t);
      }
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t = run_time_0_0(t);
  s_23 = t;
  t = term_b_8;
  t = whoami_0_0(t);
  t_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_23));
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), s_23), term_g_25), t_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm i_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_17 = NULL;
            t = eval_config_0_0(t);
            r_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_17);
            t = r_17;
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
          }
      }
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = i_25;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              {
                ATerm s_25 = t;
                int t_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(t_25);
                  }
                else
                  {
                    t = s_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(f_6, t);
      }
    }
  t = p_84(t);
  return(t);
}
ATerm map_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = Cons_2_0(n_86, u_23, t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,a_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_23 = ATgetFirst((ATermList) t);
      a_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_24 = NULL,g_24 = NULL;
        t = a_24;
        t = g_0(t);
        f_24 = t;
        t = y_23;
        t = f_0(t);
        g_24 = t;
        t = a_24;
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_24), g_24);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  h_24 = t;
  t = i_24;
  t = x_82(t);
  j_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_24), h_24);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_24), term_a_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18 = NULL;
            t = eval_config_0_0(t);
            m_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_18);
            t = m_18;
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = e_26;
          }
      }
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = b_26;
      {
        ATerm m_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(m_6, t);
      }
    }
  t = term_l_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(r_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_24);
  o_24 = t;
  t = p_24;
  t = y_82(t);
  q_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_24), o_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_26 = ATgetFirst((ATermList) t);
                ATerm p_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_24;
          }
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATinsert(ATempty, v_24);
      }
    w_24 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_24);
    t = v_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        t = eval_config_0_0(t);
        v_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_18);
        t = v_18;
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_26;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_26;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, t_6, u_6, t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = Option_3_0(w_6, b_7, c_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  f_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  a_25 = t;
  t = b_25;
  t = r_70(t);
  d_25 = t;
  t = c_25;
  t = s_70(t);
  e_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_25), d_25), a_25);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_27;
        t = v_99(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
      }
    t = j_25;
    {
      ATerm e_7 (ATerm t)
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = t;
            int g_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_27);
              }
            else
              {
                t = f_27;
                t = v_99(t);
                t = Cons_2_0(_id, e_7, t);
              }
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm m_25 = NULL,n_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_25 = ATgetFirst((ATermList) t);
                  n_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_25), (ATerm) ATmakeAppl(sym_Undefined_1, m_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_7, e_7, t);
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
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
ATerm i_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_27;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_25;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_99(t);
          ;
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, j_7, t);
                ;
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_26 = NULL;
          c_26 = t;
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_26;
                {
                  ATerm r_27 = t;
                  int s_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_27 = t;
                        int u_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_21 = NULL;
                            t = eval_config_0_0(t);
                            v_21 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_21);
                            t = v_21;
                            ;
                            LocalPopChoice(u_27);
                          }
                        else
                          {
                            t = t_27;
                          }
                      }
                      ;
                      LocalPopChoice(s_27);
                    }
                  else
                    {
                      t = r_27;
                      t = fetch_1_0(l_7, t);
                    }
                  t = c_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_27 = t;
                  int w_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_23 = NULL;
                      t = eval_config_0_0(t);
                      o_23 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), o_23);
                      t = o_23;
                      ;
                      LocalPopChoice(w_27);
                    }
                  else
                    {
                      t = v_27;
                    }
                  t = c_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          {
            ATerm x_27 = t;
            int y_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_7 (ATerm t)
                {
                  ATerm o_7 (ATerm t)
                  {
                    if(((v_25 != NULL) && (v_25 != t)))
                      _fail(t);
                    else
                      v_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(o_7, t);
                  return(t);
                }
                t = fetch_1_0(n_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_25)), term_z_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_27);
              }
            else
              {
                t = x_27;
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
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm f_26 = NULL;
  t = parse_options_1_0(r_84, t);
  f_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_26);
  t = f_26;
  t = t_84(t);
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_84, t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_28;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = eval_config_0_0(t);
        w_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_23);
        t = w_23;
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
      }
    h_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_26));
    t = g_26;
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              {
                ATerm m_28 = t;
                int n_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_28);
                  }
                else
                  {
                    t = m_28;
                    {
                      ATerm o_28 = t;
                      int p_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_7, t_7, u_7, t);
                          ;
                          LocalPopChoice(p_28);
                        }
                      else
                        {
                          t = o_28;
                          {
                            ATerm q_28 = t;
                            int r_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_28);
                              }
                            else
                              {
                                t = q_28;
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
  ATerm r_7 (ATerm t)
  {
    ATerm i_26 = NULL,j_26 = NULL,b_24 = NULL;
    i_26 = t;
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_7, t);
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          t = term_u_28;
          j_26 = t;
        }
      t = not_null(j_26);
      t = ReadFromFile_0_0(t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_26, b_24);
      t = apply_strategy_1_0(a_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_7, c_84, q_7, r_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    t = _2_0(_id, Stratego_Ensugar_0_0, t);
    return(t);
  }
  t = iowrap_3_0(a_8, _fail, default_usage_0_0, t);
  return(t);
}
