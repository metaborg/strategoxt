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
ATerm term_p_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_b_26;
ATerm term_s_25;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_f_20;
ATerm term_g_19;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Some_1, term_j_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__3, term_m_26, term_o_26, term_y_7);
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
ATerm e_0 (ATerm);
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm y_109 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm p_94 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_100 (ATerm), ATerm);
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
ATerm a_3 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm l_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm d_18 (ATerm w_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm m_5 (ATerm);
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
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm y_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_99 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm parse_options_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm p_7 (ATerm);
ATerm iowrap_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,n_0 = NULL;
  c_0 = t;
  t = term_y_7;
  t = whoami_0_0(t);
  n_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm z_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm c_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(t_0, (ATerm) ATempty);
  u_0 = t;
  t = SSL_mkterm(s_0, (ATerm) ATempty);
  v_0 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, u_0, v_0));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_0 = ATgetFirst((ATermList) t);
      {
        ATerm d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_0;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_y_7;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,e_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      {
        ATerm g_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      {
        ATerm l_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(i_1, (ATerm) ATempty);
  l_1 = t;
  t = SSL_mkterm(e_1, (ATerm) ATempty);
  m_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, l_1, m_1));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_1 = ATgetFirst((ATermList) t);
      {
        ATerm m_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_y_7;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      {
        ATerm r_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      {
        ATerm s_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(s_1, (ATerm) ATempty);
  t_1 = t;
  t = SSL_mkterm(r_1, (ATerm) ATempty);
  u_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, t_1, u_1));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_1 = ATgetFirst((ATermList) t);
      {
        ATerm u_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_y_7;
  return(t);
}
ATerm e_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_0, t);
        t = p_87(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = Cons_2_0(_id, w_1, t);
      }
    return(t);
  }
  t = w_1(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  ATerm q_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_1 != NULL) && (x_1 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_1 = ATgetFirst((ATermList) t);
        {
          ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_0, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, not_null(x_1));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,e_2 = NULL,f_2 = NULL,i_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,t_2 = NULL,u_2 = NULL;
  a_2 = t;
  b_2 = t;
  t = SSL_explode_term(b_2);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
          {
            f_2 = ATgetFirst((ATermList) d_9);
            i_2 = (ATerm) ATgetNext((ATermList) d_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_2;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_2, f_2);
        t = RightAssoc_0_0(t);
        t = f_2;
        t = s_112(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
      }
    o_2 = t;
    t = m_2;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm x_2 = NULL;
        x_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_2, x_2);
        t = GreaterThan_0_0(t);
        t = x_2;
        t = s_112(t);
        return(t);
      }
      t = map_1_0(r_0, t);
      p_2 = t;
      t = n_2;
      {
        ATerm h_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, a_2, n_2);
            t = LeftAssoc_0_0(t);
            t = n_2;
            t = s_112(t);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = h_9;
          }
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, (ATerm) ATinsert(ATempty, t_2));
        {
          ATerm l_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm s_9 = ATgetArgument(t, 0);
                  ATerm w_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_2;
              {
                ATerm w_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, t_2);
                  return(t);
                }
                t = at_end_1_0(w_0, t);
              }
              ;
              LocalPopChoice(r_9);
            }
          else
            {
              t = l_9;
              {
                ATerm x_0 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_2, (ATerm) ATinsert(ATempty, t_2)));
                if(match_cons(t, sym__2))
                  {
                    ATerm x_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_9) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    x_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_0;
                t = concat_0_0(t);
              }
            }
          u_2 = t;
          t = SSL_mkterm(e_2, (ATerm) ATinsert(CheckATermList(u_2), o_2));
        }
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = bottomup_1_0(y_109, t);
    return(t);
  }
  t = SRTS_all(b_1, t);
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
  ATerm k_3 = NULL,q_3 = NULL,r_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
          {
            ATerm a_10 = ATgetFirst((ATermList) z_9);
            if(match_cons(a_10, sym__2))
              {
                ATerm b_10 = ATgetArgument(a_10, 0);
                if(!(match_cons(b_10, sym_None_0)))
                  _fail(t);
                q_3 = ATgetArgument(a_10, 1);
              }
            else
              _fail(t);
            r_3 = (ATerm) ATgetNext((ATermList) z_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_3, q_3);
  t = for_each_pair_1_0(c_1, t);
  t = (ATerm) ATmakeAppl(sym__2, q_3, k_3);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_10 = ATgetArgument(t, 0);
            ATerm h_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_3;
        {
          ATerm d_1 (ATerm t)
          {
            t = k_3;
            return(t);
          }
          t = at_end_1_0(d_1, t);
        }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm g_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_3, k_3));
          if(match_cons(t, sym__2))
            {
              ATerm i_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_1;
          t = concat_0_0(t);
        }
      }
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_3, r_3);
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      {
        ATerm j_10 = ATgetArgument(t, 1);
        if(((ATgetType(j_10) == AT_LIST) && !(ATisEmpty(j_10))))
          {
            ATerm k_10 = ATgetFirst((ATermList) j_10);
            if(match_cons(k_10, sym__2))
              {
                ATerm l_10 = ATgetArgument(k_10, 0);
                if(match_cons(l_10, sym_Some_1))
                  {
                    ATerm m_10 = ATgetArgument(l_10, 0);
                    if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                i_4 = ATgetArgument(k_10, 1);
              }
            else
              _fail(t);
            k_4 = (ATerm) ATgetNext((ATermList) j_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_4, i_4);
  t = for_each_pair_1_0(f_1, t);
  t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  t = for_each_pair_1_0(h_1, t);
  t = (ATerm) ATmakeAppl(sym__2, i_4, h_4);
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            ATerm w_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_4;
        {
          ATerm j_1 (ATerm t)
          {
            t = h_4;
            return(t);
          }
          t = at_end_1_0(j_1, t);
        }
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        {
          ATerm z_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_4, h_4));
          if(match_cons(t, sym__2))
            {
              ATerm x_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_1;
          t = concat_0_0(t);
        }
      }
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_4, k_4);
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
          {
            ATerm f_11 = ATgetFirst((ATermList) a_11);
            if(match_cons(f_11, sym__2))
              {
                ATerm i_11 = ATgetArgument(f_11, 0);
                if(match_cons(i_11, sym_Some_1))
                  {
                    ATerm j_11 = ATgetArgument(i_11, 0);
                    if((ATgetSymbol((ATermAppl) j_11) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t_4 = ATgetArgument(f_11, 1);
              }
            else
              _fail(t);
            u_4 = (ATerm) ATgetNext((ATermList) a_11);
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
  t = for_each_pair_1_0(k_1, t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            ATerm z_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_4;
        {
          ATerm q_1 (ATerm t)
          {
            t = s_4;
            return(t);
          }
          t = at_end_1_0(q_1, t);
        }
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          ATerm j_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_4, s_4));
          if(match_cons(t, sym__2))
            {
              ATerm a_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_2;
          t = concat_0_0(t);
        }
      }
    v_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_4, u_4);
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm GenRightAssoc_0_0 (ATerm t)
{
  ATerm d_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_5, (ATerm) ATempty);
  i_5 = t;
  t = SSL_mkterm(h_5, (ATerm) ATempty);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_5, j_5), term_g_12);
  t = assert_1_0(c_2, t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, h_5);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm GenLeftAssoc_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(k_5, (ATerm) ATempty);
  n_5 = t;
  t = SSL_mkterm(l_5, (ATerm) ATempty);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_5, o_5), term_j_12);
  t = assert_1_0(d_2, t);
  t = (ATerm) ATmakeAppl(sym__2, k_5, l_5);
  return(t);
}
ATerm assert_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,v_5 = NULL,a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_94(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_5, r_5, s_5);
  t = table_push_0_0(t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_6 = ATgetFirst((ATermList) t);
        b_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_5, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_6), (ATerm) ATinsert(CheckATermList(a_6), r_5)));
    t = (ATerm) ATmakeAppl(sym__2, r_5, s_5);
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm GenGreaterThan_0_0 (ATerm t)
{
  ATerm c_6 = NULL,l_6 = NULL,m_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(c_6, (ATerm) ATempty);
  m_6 = t;
  t = SSL_mkterm(l_6, (ATerm) ATempty);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_6, o_6), term_p_12);
  t = assert_1_0(g_2, t);
  t = (ATerm) ATmakeAppl(sym__2, c_6, l_6);
  return(t);
}
ATerm for_each_pair_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm u_6 = NULL;
      ATerm k_2 (ATerm t)
      {
        ATerm v_6 = NULL;
        v_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), v_6);
        t = h_86(t);
        return(t);
      }
      if(((u_6 != NULL) && (u_6 != t)))
        _fail(t);
      else
        u_6 = t;
      t = q_6;
      t = map_1_0(k_2, t);
      return(t);
    }
    t = map_1_0(h_2, t);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
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
                    ATerm t_12 = ATgetArgument(s_12, 0);
                    if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                b_7 = ATgetArgument(r_12, 1);
              }
            else
              _fail(t);
            e_7 = (ATerm) ATgetNext((ATermList) q_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_7, b_7);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, a_7, b_7);
  t = for_each_pair_1_0(l_2, t);
  t = (ATerm) ATmakeAppl(sym__2, b_7, a_7);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_12 = ATgetArgument(t, 0);
            ATerm x_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_7;
        {
          ATerm q_2 (ATerm t)
          {
            t = a_7;
            return(t);
          }
          t = at_end_1_0(q_2, t);
        }
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        {
          ATerm r_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_7, a_7));
          if(match_cons(t, sym__2))
            {
              ATerm y_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_2;
          t = concat_0_0(t);
        }
      }
    f_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_7, e_7);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm n_15 (ATerm t)
  {
    ATerm a_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_100(t);
        t = n_15(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = a_13;
      }
    return(t);
  }
  t = n_15(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  ATerm s_2 (ATerm t)
  {
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      if(((a_8 != NULL) && (a_8 != t)))
        _fail(t);
      else
        a_8 = t;
      return(t);
    }
    t = fetch_1_0(w_2, t);
    return(t);
  }
  t = _2_0(s_2, v_2, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm e_8 = NULL,y_2 = NULL;
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_14), term_d_14), term_c_14), term_b_14), term_z_13), term_x_13), term_w_13), term_v_13), term_u_13), term_r_13), term_q_13), term_p_13), term_o_13), term_n_13), term_m_13), term_l_13), term_k_13), term_i_13), term_h_13), term_g_13), term_f_13), term_e_13));
  t = member_0_0(t);
  t = SSL_explode_string(e_8);
  y_2 = t;
  t = SSL_implode_string((ATerm) ATinsert(CheckATermList(y_2), (ATerm) ATmakeInt(39)));
  return(t);
}
ATerm Op_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_8);
  i_8 = t;
  t = j_8;
  t = b_72(t);
  n_8 = t;
  t = k_8;
  t = c_72(t);
  o_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, n_8, o_8), i_8);
  return(t);
}
ATerm OpDecl_2_0 (ATerm l_71 (ATerm), ATerm m_71 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,w_8 = NULL,x_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  t_8 = t;
  t = w_8;
  t = l_71(t);
  a_9 = t;
  t = x_8;
  t = m_71(t);
  b_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, a_9, b_9), t_8);
  return(t);
}
ATerm SVar_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  i_9 = t;
  t = j_9;
  t = e_75(t);
  m_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, m_9), i_9);
  return(t);
}
ATerm Var_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL;
  y_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_9);
  t_9 = t;
  t = u_9;
  t = v_71(t);
  v_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, v_9), t_9);
  return(t);
}
ATerm VarDec_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_10);
  n_10 = t;
  t = o_10;
  t = q_77(t);
  q_10 = t;
  t = p_10;
  t = r_77(t);
  r_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, q_10, r_10), n_10);
  return(t);
}
ATerm SDef_3_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      z_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      c_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_11);
  y_10 = t;
  t = z_10;
  t = u_77(t);
  d_11 = t;
  t = b_11;
  t = v_77(t);
  e_11 = t;
  t = c_11;
  t = w_77(t);
  g_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, d_11, e_11, g_11), y_10);
  return(t);
}
ATerm RDef_3_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_RDef_3))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      n_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  k_11 = t;
  t = l_11;
  t = a_74(t);
  o_11 = t;
  t = m_11;
  t = b_74(t);
  p_11 = t;
  t = n_11;
  t = c_74(t);
  q_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, o_11, p_11, q_11), k_11);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  x_11 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  u_11 = t;
  t = v_11;
  t = p_77(t);
  w_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, w_11), u_11);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_12 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(n_14) != AT_INT) || (ATgetInt((ATermInt) n_14) != 34)))
                _fail(t);
              c_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_12), term_p_14), term_o_14);
          ;
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          {
            ATerm e_12 = NULL,f_12 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_12 = ATgetFirst((ATermList) t);
                f_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_12;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_12), term_o_14), term_o_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_12), term_q_14), term_o_14);
              }
          }
        }
      {
        ATerm z_2 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, z_2, t);
      }
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_14);
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12 = NULL,b_13 = NULL;
      z_12 = t;
      if(match_cons(t, sym_Str_1))
        {
          b_13 = ATgetArgument(t, 0);
          {
            ATerm d_13 = NULL,d_3 = NULL,f_3 = NULL;
            t = SSL_explode_string(b_13);
            {
              ATerm v_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_3 = NULL,u_3 = NULL;
                  g_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm w_14 = ATgetFirst((ATermList) t);
                      if(((ATgetType(w_14) != AT_INT) || (ATgetInt((ATermInt) w_14) != 34)))
                        _fail(t);
                      u_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = u_3;
                  t = last_0_0(t);
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                    _fail(t);
                  t = g_3;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_14;
                }
              t = escape_chars_0_0(t);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_3), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
              {
                ATerm x_14 = t;
                int y_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm a_15 = ATgetArgument(t, 0);
                        ATerm b_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(f_3), term_p_14);
                    t = at_end_1_0(a_3, t);
                    ;
                    LocalPopChoice(y_14);
                  }
                else
                  {
                    t = x_14;
                    {
                      ATerm z_3 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_3), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                      if(match_cons(t, sym__2))
                        {
                          ATerm d_15 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          z_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_3;
                      t = concat_0_0(t);
                    }
                  }
                d_3 = t;
                t = SSL_implode_string(d_3);
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, d_13);
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              b_13 = ATgetArgument(t, 0);
              {
                ATerm g_4 = NULL;
                t = SSL_real_to_string(b_13);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, g_4);
              }
            }
          else
            {
              ATerm x_4 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  b_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(b_13);
              x_4 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, x_4);
            }
        }
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm f_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = f_15;
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm k_15 = t;
                    int l_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(l_15);
                      }
                    else
                      {
                        t = k_15;
                        {
                          ATerm m_15 = t;
                          int o_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
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
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(q_15);
                                  }
                                else
                                  {
                                    t = p_15;
                                    {
                                      ATerm s_15 = t;
                                      int t_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(t_15);
                                        }
                                      else
                                        {
                                          t = s_15;
                                          {
                                            ATerm u_15 = t;
                                            int w_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(w_15);
                                              }
                                            else
                                              {
                                                t = u_15;
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
  ATerm s_13 = NULL,t_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_13 = ATgetFirst((ATermList) t);
      t_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_13;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm y_15 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_13;
          ;
          LocalPopChoice(d_16);
        }
      else
        {
          t = y_15;
          t = t_13;
          t = last_0_0(t);
        }
    }
  else
    {
      t = t_13;
      t = last_0_0(t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  t = SSL_explode_string(f_14);
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,t_5 = NULL,u_5 = NULL;
  t = _2_0(_id, b_3, t);
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((q_5 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      u_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_5;
  t = last_0_0(t);
  if((q_5 != t))
    {
      _fail(t);
    }
  t = p_5;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_14);
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm z_14 = NULL,c_15 = NULL,e_15 = NULL,g_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      e_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
      z_14 = ATgetArgument(t, 2);
      t = z_14;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, e_15, g_15);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_15 = ATgetArgument(t, 0);
          g_15 = ATgetArgument(t, 1);
          z_14 = ATgetArgument(t, 2);
          t = z_14;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, e_15, g_15);
        }
      else
        {
          ATerm w_6 = NULL,k_7 = NULL,n_7 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              e_15 = ATgetArgument(t, 0);
              g_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_15;
          {
            ATerm e_16 = t;
            if((PushChoice() == 0))
              {
                ATerm x_6 = NULL;
                x_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_14, x_6);
                t = is_quoted_0_0(t);
                t = x_6;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_16;
              }
            t = SSL_explode_string(e_15);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_7), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
            {
              ATerm f_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_16 = ATgetArgument(t, 0);
                      ATerm q_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(n_7), term_p_14);
                  t = at_end_1_0(c_3, t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = f_16;
                  {
                    ATerm u_7 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_7), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                    if(match_cons(t, sym__2))
                      {
                        ATerm r_16 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        u_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_7;
                    t = concat_0_0(t);
                  }
                }
              k_7 = t;
              t = SSL_implode_string(k_7);
              w_6 = t;
              t = (ATerm) ATmakeAppl(sym_Prim_2, w_6, g_15);
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
    ATerm e_3 (ATerm t)
    {
      t = topdown_1_0(x_109, t);
      return(t);
    }
    t = SRTS_all(e_3, t);
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm h_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gen_left_0_0(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = h_17;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = gen_right_0_0(t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = gen_non_assoc_0_0(t);
                  ;
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
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
  ATerm h_16 = NULL;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, h_16);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(m_3, t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
    }
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm v_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL,b_8 = NULL;
      v_15 = t;
      t = SSL_explode_term(v_15);
      if(match_cons(t, sym__2))
        {
          ATerm y_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm b_18 = ATgetArgument(t, 1);
            if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
              {
                b_8 = ATgetFirst((ATermList) b_18);
                {
                  ATerm c_18 = (ATerm) ATgetNext((ATermList) b_18);
                  if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = b_8;
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = v_17;
    }
  t = topdown_1_0(h_3, t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_15 = NULL,z_15 = NULL,b_16 = NULL,c_16 = NULL,g_16 = NULL;
          if(match_cons(t, sym_Seq_2))
            {
              x_15 = ATgetArgument(t, 0);
              z_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_15;
          if(match_cons(t, sym_Seq_2))
            {
              b_16 = ATgetArgument(t, 0);
              c_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_15, b_16);
          t = i_3(t);
          g_16 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, g_16, c_16);
          t = i_3(t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
        }
      return(t);
    }
    t = bottomup_1_0(i_3, t);
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, term_s_18), term_p_18))), (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATempty, term_o_18))));
    t = repeat_1_0(j_3, t);
    t = r_15;
    t = bottomup_1_0(l_3, t);
  }
  return(t);
}
ATerm _2_0 (ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_16);
  k_16 = t;
  t = l_16;
  t = c_66(t);
  n_16 = t;
  t = m_16;
  t = d_66(t);
  o_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_16, o_16), k_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_16, term_x_18);
  t = open_stream_0_0(t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, t_16);
  t = o_97(t);
  t = fclose_0_0(t);
  t = t_16;
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym_Stream_1))
        {
          x_16 = ATgetArgument(y_18, 0);
        }
      else
        _fail(t);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_16, y_16);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(match_cons(z_18, sym_Stream_1))
        {
          a_17 = ATgetArgument(z_18, 0);
        }
      else
        _fail(t);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_17, b_17);
  c_17 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), c_17);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_17);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = fetch_1_0(v_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = WriteToFile_1_0(x_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = WriteToFile_1_0(a_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm c_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_16 != NULL) && (w_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_3, t);
          ;
          LocalPopChoice(f_19);
        }
      else
        {
          t = c_19;
          t = term_g_19;
          if(((w_16 != NULL) && (w_16 != t)))
            _fail(t);
          else
            w_16 = t;
        }
      return(t);
    }
    t = _2_0(n_3, _id, t);
    t = v_16;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm h_8 = NULL;
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), h_8);
        return(t);
      }
      t = _2_0(_id, p_3, t);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(s_3, t_3, t);
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = _2_0(_id, y_3, t);
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
  ATerm e_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  e_17 = t;
  t = dtime_0_0(t);
  t = e_17;
  t = r_83(t);
  i_17 = t;
  t = dtime_0_0(t);
  j_17 = t;
  t = i_17;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_17), (ATerm) ATmakeAppl(sym_Runtime_1, j_17)), l_17);
  return(t);
}
ATerm d_18 (ATerm w_17, ATerm t)
{
  t = SSL_fclose(w_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_17 = ATgetArgument(t, 0);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_17);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = d_18(a_18, t);
          }
      }
    }
  else
    {
      t = d_18(a_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  t = SSL_stdin_stream();
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_stdout_stream();
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_stderr_stream();
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm r_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_18;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_is_string(w_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      ATerm p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL,p_9 = NULL;
        o_9 = t;
        t = SSL_explode_term(o_9);
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_19 = ATgetArgument(t, 1);
              if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
                {
                  p_9 = ATgetFirst((ATermList) u_19);
                  {
                    ATerm y_19 = (ATerm) ATgetNext((ATermList) u_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_9;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_9;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_9;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_9;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_18 = NULL,m_18 = NULL,q_18 = NULL;
              t = _2_0(b_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_18 = ATgetArgument(t, 0);
                  m_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_18, m_18);
              q_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_18);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
                t = _2_0(c_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_18 = ATgetArgument(t, 0);
                    u_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_18, u_18);
                v_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,d_19 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19 = NULL;
      e_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_19, term_f_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm q_9 = NULL;
        q_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_9;
        _fail(t);
      }
    }
  a_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(d_19);
  b_19 = t;
  t = a_19;
  t = fclose_0_0(t);
  t = b_19;
  return(t);
}
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm j_19 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_86, _id, t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2_0(_id, j_19, t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm m_19 = NULL,n_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_19 = ATgetFirst((ATermList) t);
            n_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_19;
        {
          ATerm d_4 (ATerm t)
          {
            t = n_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm t_19 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_19, t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_87(t);
      }
    return(t);
  }
  t = t_19(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_explode_string(w_19);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = SSL_explode_string(x_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  t = _2_0(e_4, f_4, t);
  {
    ATerm n_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL,a_20 = NULL;
        if(match_cons(t, sym__2))
          {
            z_19 = ATgetArgument(t, 0);
            a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_19;
        {
          ATerm j_4 (ATerm t)
          {
            t = a_20;
            return(t);
          }
          t = at_end_1_0(j_4, t);
        }
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = n_20;
        {
          ATerm c_10 = NULL,d_10 = NULL;
          c_10 = t;
          t = SSL_explode_term(c_10);
          if(match_cons(t, sym__2))
            {
              ATerm s_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_20) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10;
          t = concat_0_0(t);
        }
      }
    v_19 = t;
    t = SSL_implode_string(v_19);
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm t_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = t_20;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = SSL_is_string(k_20);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_4, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = z_20;
            {
              ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
              o_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_20 = ATgetArgument(t, 0);
                  t = p_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_20 = ATgetArgument(t, 0);
                      t = p_20;
                      {
                        ATerm d_21 = t;
                        int h_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_20);
                            {
                              ATerm m_21 = t;
                              int q_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_12 = NULL;
                                  t = eval_config_0_0(t);
                                  m_12 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_20, m_12);
                                  t = m_12;
                                  ;
                                  LocalPopChoice(q_21);
                                }
                              else
                                {
                                  t = m_21;
                                }
                            }
                            ;
                            LocalPopChoice(h_21);
                          }
                        else
                          {
                            t = d_21;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_20 = NULL,v_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_20 = ATgetArgument(t, 0);
                          q_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_20;
                      t = eval_config_0_0(t);
                      u_20 = t;
                      t = q_20;
                      t = eval_config_0_0(t);
                      v_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
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
  ATerm r_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_21 = NULL,c_21 = NULL;
      a_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = NULL;
            t = eval_config_0_0(t);
            j_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_13);
            t = j_13;
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
          }
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, term_c_22);
        t = geq_0_0(t);
        t = a_21;
        t = q_107(t);
      }
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = r_21;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  if(match_string(t, "-k"))
    {
      t = e_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_21;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  f_21 = t;
  t = SSL_string_to_int(f_21);
  g_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_21);
  t = f_21;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_string(t, "-S"))
    {
      t = i_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_21;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_f_22;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = SSL_string_to_int(j_21);
  k_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_21);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_21);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_h_22;
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
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_22;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, w_4, t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm r_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, z_4, a_5, t);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = r_22;
            t = Option_3_0(b_5, c_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_21 = NULL;
      t = term_y_7;
      t = d_0(t);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_b_23, p_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_21 = ATgetFirst((ATermList) t);
          o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_21;
      t = a_0(t);
      t = term_y_7;
      t = b_0(t);
      s_21 = t;
      t = (ATerm) ATinsert(CheckATermList(o_21), s_21);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "-o"))
    {
      t = u_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_21;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_21);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_21);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, m_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__3))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
      a_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            ATerm i_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_21, z_21);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATempty;
      }
    b_22 = t;
    t = SSL_table_put(y_21, z_21, (ATerm) ATinsert(CheckATermList(b_22), a_22));
    t = (ATerm) ATmakeAppl(sym__3, y_21, z_21, a_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_22 = NULL;
      t = term_y_7;
      t = m_0(t);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_b_23, o_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_22 = ATgetFirst((ATermList) t);
          l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          n_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_22;
      t = i_0(t);
      t = m_22;
      t = k_0(t);
      s_22 = t;
      t = (ATerm) ATinsert(CheckATermList(n_22), s_22);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  if(match_string(t, "-i"))
    {
      t = u_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_22;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_22);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_22);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_7;
  t = whoami_0_0(t);
  w_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_22));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL;
        t = eval_config_0_0(t);
        y_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_13);
        t = y_13;
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_93(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm z_22 = NULL,a_23 = NULL,d_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_22 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_23;
        t = foldr_2_0(e_93, f_93, t);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_22, d_23);
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
  t = term_e_22;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_14, k_14);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = o_23;
        t = SSL_addr(j_14, k_14);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_23 = NULL,a_14 = NULL,g_14 = NULL;
  t = times_0_0(t);
  a_14 = t;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14;
  t = foldr_2_0(z_5, d_6, t);
  g_23 = t;
  t = SSL_TicksToSeconds(g_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,y_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_23;
        if((v_23 != t))
          {
            _fail(t);
          }
        t = u_23;
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = u_23;
        {
          ATerm x_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_23, y_23);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = x_23;
              t = SSL_gtr(v_23, y_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_23, y_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_24 = NULL,f_24 = NULL;
      d_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = NULL;
            t = eval_config_0_0(t);
            a_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_16);
            t = a_16;
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = c_24;
          }
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_24, term_g_24);
        t = geq_0_0(t);
        t = d_24;
        t = p_107(t);
      }
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  t = run_time_0_0(t);
  h_24 = t;
  t = term_y_7;
  t = whoami_0_0(t);
  i_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_24));
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_24), h_24), term_n_24), i_24));
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
  ATerm p_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm x_24 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_17 = NULL;
            t = eval_config_0_0(t);
            m_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), m_17);
            t = m_17;
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = x_24;
          }
      }
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = p_24;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              {
                ATerm i_25 = t;
                int j_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_25);
                  }
                else
                  {
                    t = i_25;
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
  ATerm j_24 (ATerm t)
  {
    ATerm k_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = k_25;
        t = Cons_2_0(n_86, j_24, t);
      }
    return(t);
  }
  t = j_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_24 = ATgetFirst((ATermList) t);
      m_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_24 = NULL,r_24 = NULL;
        t = m_24;
        t = g_0(t);
        q_24 = t;
        t = l_24;
        t = f_0(t);
        r_24 = t;
        t = m_24;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_24), r_24);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  s_24 = t;
  t = t_24;
  t = x_82(t);
  u_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_24), s_24);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_24), term_s_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_17 = NULL;
            t = eval_config_0_0(t);
            s_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_17);
            t = s_17;
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
          }
      }
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = t_25;
      {
        ATerm h_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(h_6, t);
      }
    }
  t = term_b_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, i_6, t);
  t = map_1_0(j_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  z_24 = t;
  t = a_25;
  t = y_82(t);
  b_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_25), z_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  g_25 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_26 = ATgetFirst((ATermList) t);
                ATerm j_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_25;
          }
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = (ATerm) ATinsert(ATempty, g_25);
      }
    h_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_25);
    t = g_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL;
        t = eval_config_0_0(t);
        n_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_18);
        t = n_18;
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_26;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_26;
  return(t);
}
ATerm y_6 (ATerm t)
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
      t = Option_3_0(k_6, n_6, r_6, t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = Option_3_0(s_6, t_6, y_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  q_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_25 = ATgetFirst((ATermList) t);
      n_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  l_25 = t;
  t = m_25;
  t = r_70(t);
  o_25 = t;
  t = n_25;
  t = s_70(t);
  p_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_25), o_25), l_25);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
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
    t = u_25;
    {
      ATerm c_7 (ATerm t)
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
                t = Cons_2_0(_id, c_7, t);
              }
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm x_25 = NULL,y_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_25 = ATgetFirst((ATermList) t);
                  y_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_25), (ATerm) ATmakeAppl(sym_Undefined_1, x_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_6, c_7, t);
    }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "--help"))
    {
      t = i_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_26;
        }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_27;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_26;
  {
    ATerm d_7 (ATerm t)
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
                t = Option_3_0(g_7, h_7, i_7, t);
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
    t = parse_options_p__1_0(d_7, t);
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_26 = NULL;
          n_26 = t;
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_26;
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
                            ATerm l_21 = NULL;
                            t = eval_config_0_0(t);
                            l_21 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_21);
                            t = l_21;
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
                      t = fetch_1_0(j_7, t);
                    }
                  t = n_26;
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
                      ATerm t_22 = NULL;
                      t = eval_config_0_0(t);
                      t_22 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), t_22);
                      t = t_22;
                      ;
                      LocalPopChoice(w_27);
                    }
                  else
                    {
                      t = v_27;
                    }
                  t = n_26;
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
                ATerm l_7 (ATerm t)
                {
                  ATerm m_7 (ATerm t)
                  {
                    if(((g_26 != NULL) && (g_26 != t)))
                      _fail(t);
                    else
                      g_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_7, t);
                  return(t);
                }
                t = fetch_1_0(l_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_k_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), term_z_27));
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
      h_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm q_26 = NULL;
  t = parse_options_1_0(r_84, t);
  q_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), q_26);
  t = q_26;
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
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_28;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        t = eval_config_0_0(t);
        p_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_23);
        t = p_23;
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
      }
    s_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, s_26));
    t = r_26;
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
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
                          t = Option_3_0(r_7, s_7, t_7, t);
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
  ATerm q_7 (ATerm t)
  {
    ATerm t_26 = NULL,u_26 = NULL,w_23 = NULL;
    t_26 = t;
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_26 != NULL) && (u_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_26 = ATgetArgument(t, 0);
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
          u_26 = t;
        }
      t = not_null(u_26);
      t = ReadFromFile_0_0(t);
      w_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_26, w_23);
      t = apply_strategy_1_0(a_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_7, c_84, p_7, q_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    t = _2_0(_id, Stratego_Ensugar_0_0, t);
    return(t);
  }
  t = iowrap_3_0(x_7, _fail, default_usage_0_0, t);
  return(t);
}
