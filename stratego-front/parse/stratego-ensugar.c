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
ATerm term_n_28;
ATerm term_m_28;
ATerm term_z_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_20;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Some_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__3, term_u_26, term_v_26, term_f_8);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm m_103 (ATerm), ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm s_68 (ATerm), ATerm);
ATerm Var_1_0 (ATerm j_65 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_91 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
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
  t = term_f_8;
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
        ATerm g_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_0);
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      {
        ATerm k_8 = ATgetArgument(t, 1);
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
        ATerm m_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_0;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_8;
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
        ATerm o_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      {
        ATerm p_8 = ATgetArgument(t, 1);
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
      if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_8;
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
        ATerm a_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm c_9 = ATgetArgument(t, 1);
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
        ATerm e_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_9) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_f_8;
  return(t);
}
ATerm at_last_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, b_0, t);
        t = d_81(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
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
  ATerm f_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_1 != NULL) && (y_1 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_1 = ATgetFirst((ATermList) t);
        {
          ATerm m_9 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(m_9) != AT_LIST) || !(ATisEmpty(m_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(f_0, t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, not_null(y_1));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,f_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  b_2 = t;
  c_2 = t;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      {
        ATerm n_9 = ATgetArgument(t, 1);
        if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
          {
            i_2 = ATgetFirst((ATermList) n_9);
            l_2 = (ATerm) ATgetNext((ATermList) n_9);
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
    ATerm r_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_2, i_2);
        t = RightAssoc_0_0(t);
        t = i_2;
        t = g_106(t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = r_9;
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
        t = g_106(t);
        return(t);
      }
      t = map_1_0(r_0, t);
      t_2 = t;
      t = n_2;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_2, n_2);
            t = LeftAssoc_0_0(t);
            t = n_2;
            t = g_106(t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
          }
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_2, (ATerm) ATinsert(ATempty, u_2));
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm z_9 = ATgetArgument(t, 0);
                  ATerm a_10 = ATgetArgument(t, 1);
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
              LocalPopChoice(y_9);
            }
          else
            {
              t = x_9;
              {
                ATerm w_0 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_2, (ATerm) ATinsert(ATempty, u_2)));
                if(match_cons(t, sym__2))
                  {
                    ATerm b_10 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_10) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm bottomup_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = bottomup_1_0(m_103, t);
    return(t);
  }
  t = SRTS_all(x_0, t);
  t = m_103(t);
  return(t);
}
ATerm gen_none_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,w_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
          {
            ATerm d_10 = ATgetFirst((ATermList) c_10);
            if(match_cons(d_10, sym__2))
              {
                ATerm e_10 = ATgetArgument(d_10, 0);
                if(!(match_cons(e_10, sym_None_0)))
                  _fail(t);
                r_3 = ATgetArgument(d_10, 1);
              }
            else
              _fail(t);
            w_3 = (ATerm) ATgetNext((ATermList) c_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  {
    ATerm c_1 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
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
  }
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            ATerm s_10 = ATgetFirst((ATermList) r_10);
            if(match_cons(s_10, sym__2))
              {
                ATerm t_10 = ATgetArgument(s_10, 0);
                if(match_cons(t_10, sym_Some_1))
                  {
                    ATerm y_10 = ATgetArgument(t_10, 0);
                    if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                k_4 = ATgetArgument(s_10, 1);
              }
            else
              _fail(t);
            l_4 = (ATerm) ATgetNext((ATermList) r_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_4, k_4);
  {
    ATerm e_1 (ATerm t)
    {
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(e_1, t);
    t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
    {
      ATerm g_1 (ATerm t)
      {
        t = GenGreaterThan_0_0(t);
        t = GenLeftAssoc_0_0(t);
        t = GenRightAssoc_0_0(t);
        return(t);
      }
      t = for_each_pair_1_0(g_1, t);
      t = (ATerm) ATmakeAppl(sym__2, k_4, i_4);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm n_11 = ATgetArgument(t, 0);
                ATerm o_11 = ATgetArgument(t, 1);
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
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm k_1 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, k_4, i_4));
              if(match_cons(t, sym__2))
                {
                  ATerm t_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_11) != ATmakeSymbol("", 0, ATtrue)))
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
    }
  }
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
          {
            ATerm v_11 = ATgetFirst((ATermList) u_11);
            if(match_cons(v_11, sym__2))
              {
                ATerm w_11 = ATgetArgument(v_11, 0);
                if(match_cons(w_11, sym_Some_1))
                  {
                    ATerm y_11 = ATgetArgument(w_11, 0);
                    if((ATgetSymbol((ATermAppl) y_11) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t_4 = ATgetArgument(v_11, 1);
              }
            else
              _fail(t);
            u_4 = (ATerm) ATgetNext((ATermList) u_11);
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
  {
    ATerm j_1 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(j_1, t);
    t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
    {
      ATerm z_11 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm d_12 = ATgetArgument(t, 0);
              ATerm e_12 = ATgetArgument(t, 1);
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
          LocalPopChoice(b_12);
        }
      else
        {
          t = z_11;
          {
            ATerm h_2 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_4, s_4));
            if(match_cons(t, sym__2))
              {
                ATerm f_12 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
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
  }
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_5, k_5), term_i_12);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_j_12;
      return(t);
    }
    t = assert_1_0(a_2, t);
    t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  }
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_5, r_5), term_l_12);
  {
    ATerm d_2 (ATerm t)
    {
      t = term_m_12;
      return(t);
    }
    t = assert_1_0(d_2, t);
    t = (ATerm) ATmakeAppl(sym__2, l_5, n_5);
  }
  return(t);
}
ATerm assert_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_88(t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_6, s_5, t_5);
  t = table_push_0_0(t);
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_6, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_6, k_6), term_s_12);
  {
    ATerm e_2 (ATerm t)
    {
      t = term_u_12;
      return(t);
    }
    t = assert_1_0(e_2, t);
    t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
  }
  return(t);
}
ATerm for_each_pair_1_0 (ATerm v_79 (ATerm), ATerm t)
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
      p_6 = t;
      t = o_6;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm q_6 = NULL;
          q_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_6, q_6);
          t = v_79(t);
          return(t);
        }
        t = map_1_0(j_2, t);
      }
      return(t);
    }
    t = map_1_0(g_2, t);
  }
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm v_6 = NULL,y_6 = NULL,z_6 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      {
        ATerm x_12 = ATgetArgument(t, 1);
        if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
          {
            ATerm y_12 = ATgetFirst((ATermList) x_12);
            if(match_cons(y_12, sym__2))
              {
                ATerm a_13 = ATgetArgument(y_12, 0);
                if(match_cons(a_13, sym_Some_1))
                  {
                    ATerm b_13 = ATgetArgument(a_13, 0);
                    if((ATgetSymbol((ATermAppl) b_13) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                y_6 = ATgetArgument(y_12, 1);
              }
            else
              _fail(t);
            z_6 = (ATerm) ATgetNext((ATermList) x_12);
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
  {
    ATerm k_2 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(k_2, t);
    t = (ATerm) ATmakeAppl(sym__2, y_6, v_6);
    {
      ATerm c_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_13 = ATgetArgument(t, 0);
              ATerm f_13 = ATgetArgument(t, 1);
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
          LocalPopChoice(d_13);
        }
      else
        {
          t = c_13;
          {
            ATerm q_2 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_6, v_6));
            if(match_cons(t, sym__2))
              {
                ATerm g_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("", 0, ATtrue)))
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
  }
  return(t);
}
ATerm repeat_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm k_15 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        t = k_15(t);
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
ATerm innermost_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm j_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_96(t);
        t = innermost_1_0(b_96, t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = j_13;
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
  t = (ATerm) ATmakeAppl(sym__2, z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_14), term_l_14), term_k_14), term_j_14), term_i_14), term_g_14), term_f_14), term_e_14), term_c_14), term_b_14), term_a_14), term_z_13), term_y_13), term_x_13), term_w_13), term_v_13), term_u_13), term_t_13), term_s_13), term_r_13), term_q_13), term_o_13));
  t = member_0_0(t);
  t = SSL_explode_string(z_7);
  w_2 = t;
  t = SSL_implode_string((ATerm) ATinsert(CheckATermList(w_2), (ATerm) ATmakeInt(39)));
  return(t);
}
ATerm Op_2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
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
  t = p_65(t);
  i_8 = t;
  t = h_8;
  t = q_65(t);
  j_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, i_8, j_8), d_8);
  return(t);
}
ATerm OpDecl_2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm t)
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
  t = z_64(t);
  v_8 = t;
  t = u_8;
  t = a_65(t);
  y_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, v_8, y_8), q_8);
  return(t);
}
ATerm SVar_1_0 (ATerm s_68 (ATerm), ATerm t)
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
  t = s_68(t);
  h_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, h_9), d_9);
  return(t);
}
ATerm Var_1_0 (ATerm j_65 (ATerm), ATerm t)
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
  t = j_65(t);
  s_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_9), o_9);
  return(t);
}
ATerm VarDec_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t)
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
  t = e_71(t);
  m_10 = t;
  t = k_10;
  t = f_71(t);
  o_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, m_10, o_10), i_10);
  return(t);
}
ATerm SDef_3_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm t)
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
  t = i_71(t);
  z_10 = t;
  t = w_10;
  t = j_71(t);
  a_11 = t;
  t = x_10;
  t = k_71(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, z_10, a_11, b_11), u_10);
  return(t);
}
ATerm RDef_3_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm t)
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
  t = o_67(t);
  j_11 = t;
  t = h_11;
  t = p_67(t);
  k_11 = t;
  t = i_11;
  t = q_67(t);
  l_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, j_11, k_11, l_11), f_11);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm d_71 (ATerm), ATerm t)
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
  t = d_71(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, r_11), p_11);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(r_14) != AT_INT) || (ATgetInt((ATermInt) r_14) != 34)))
                _fail(t);
              x_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_11), term_t_14), term_s_14);
          ;
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
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
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_12), term_s_14), term_s_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_12), term_u_14), term_s_14);
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
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      {
        ATerm v_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = v_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int c_15 = stack_ptr;
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
              ATerm f_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_3 = NULL,t_3 = NULL;
                  g_3 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_15 = ATgetFirst((ATermList) t);
                      if(((ATgetType(g_15) != AT_INT) || (ATgetInt((ATermInt) g_15) != 34)))
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
                  t = f_15;
                }
              t = escape_chars_0_0(t);
              e_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
              {
                ATerm h_15 = t;
                int i_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm j_15 = ATgetArgument(t, 0);
                        ATerm l_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(e_3), term_t_14);
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, term_t_14);
                        return(t);
                      }
                      t = at_end_1_0(b_3, t);
                    }
                    ;
                    LocalPopChoice(i_15);
                  }
                else
                  {
                    t = h_15;
                    {
                      ATerm y_3 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                      if(match_cons(t, sym__2))
                        {
                          ATerm m_15 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
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
              ATerm r_4 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  w_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(w_12);
              r_4 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, r_4);
            }
        }
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = a_15;
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm q_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = q_15;
                  {
                    ATerm x_15 = t;
                    int f_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(f_16);
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm g_16 = t;
                          int y_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
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
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(a_17);
                                  }
                                else
                                  {
                                    t = z_16;
                                    {
                                      ATerm b_17 = t;
                                      int c_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(c_17);
                                        }
                                      else
                                        {
                                          t = b_17;
                                          {
                                            ATerm d_17 = t;
                                            int e_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(e_17);
                                              }
                                            else
                                              {
                                                t = d_17;
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
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_13;
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
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
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm a_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm d_14 = NULL;
    d_14 = t;
    t = SSL_explode_string(d_14);
    return(t);
  }
  t = _2_0(_id, d_3, t);
  a_5 = t;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((e_5 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      g_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_5;
  t = last_0_0(t);
  if((e_5 != t))
    {
      _fail(t);
    }
  t = a_5;
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
          ATerm s_6 = NULL,c_7 = NULL,e_7 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              b_15 = ATgetArgument(t, 0);
              d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_15;
          {
            ATerm h_17 = t;
            if((PushChoice() == 0))
              {
                ATerm t_6 = NULL;
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_14, t_6);
                t = is_quoted_0_0(t);
                t = t_6;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_17;
              }
            t = SSL_explode_string(b_15);
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_7), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_17 = ATgetArgument(t, 0);
                      ATerm q_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(e_7), term_t_14);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, term_t_14);
                      return(t);
                    }
                    t = at_end_1_0(f_3, t);
                  }
                  ;
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                  {
                    ATerm m_7 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_7), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                    if(match_cons(t, sym__2))
                      {
                        ATerm r_17 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        m_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = m_7;
                    t = concat_0_0(t);
                  }
                }
              c_7 = t;
              t = SSL_implode_string(c_7);
              s_6 = t;
              t = (ATerm) ATmakeAppl(sym_Prim_2, s_6, d_15);
            }
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  t = l_103(t);
  {
    ATerm h_3 (ATerm t)
    {
      t = topdown_1_0(l_103, t);
      return(t);
    }
    t = SRTS_all(h_3, t);
  }
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm s_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = NULL,p_7 = NULL;
      r_15 = t;
      t = SSL_explode_term(r_15);
      if(match_cons(t, sym__2))
        {
          ATerm w_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm x_17 = ATgetArgument(t, 1);
            if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
              {
                p_7 = ATgetFirst((ATermList) x_17);
                {
                  ATerm y_17 = (ATerm) ATgetNext((ATermList) x_17);
                  if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_7;
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = s_17;
    }
  {
    ATerm i_3 (ATerm t)
    {
      t = repeat_1_0(Ensugar_0_0, t);
      {
        ATerm a_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = EnsugarOnce_0_0(t);
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = a_18;
          }
      }
      return(t);
    }
    t = topdown_1_0(i_3, t);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            s_15 = ATgetArgument(t, 0);
            {
              ATerm n_18 = ATgetArgument(t, 1);
              if(match_cons(n_18, sym_Seq_2))
                {
                  t_15 = ATgetArgument(n_18, 0);
                  u_15 = ATgetArgument(n_18, 1);
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
      t = innermost_1_0(j_3, t);
      n_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, term_t_18), term_s_18))), (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATempty, term_r_18))));
      {
        ATerm k_3 (ATerm t)
        {
          ATerm v_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = gen_left_0_0(t);
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = v_18;
              {
                ATerm x_18 = t;
                int y_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = gen_right_0_0(t);
                    ;
                    LocalPopChoice(y_18);
                  }
                else
                  {
                    t = x_18;
                    {
                      ATerm z_18 = t;
                      int d_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = gen_non_assoc_0_0(t);
                          ;
                          LocalPopChoice(d_19);
                        }
                      else
                        {
                          t = z_18;
                          t = gen_none_0_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1_0(k_3, t);
        t = n_15;
        {
          ATerm l_3 (ATerm t)
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm v_15 = NULL;
                  v_15 = t;
                  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, v_15);
                  return(t);
                }
                t = Disambiguate_1_0(m_3, t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
              }
            return(t);
          }
          t = bottomup_1_0(l_3, t);
        }
      }
    }
  }
  return(t);
}
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
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
  t = w_62(t);
  c_16 = t;
  t = b_16;
  t = x_62(t);
  d_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_16, d_16), y_15);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_16, term_g_19);
  t = open_stream_0_0(t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, i_16);
  t = c_91(t);
  t = fclose_0_0(t);
  t = i_16;
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
        ATerm w_7 = NULL;
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), w_7);
        return(t);
      }
      t = _2_0(_id, p_3, t);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(v_3, t);
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              ATerm x_3 (ATerm t)
              {
                ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm s_19 = ATgetArgument(t, 0);
                    if(match_cons(s_19, sym_Stream_1))
                      {
                        m_16 = ATgetArgument(s_19, 0);
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
              t = WriteToFile_1_0(x_3, t);
              return(t);
            }
            t = _2_0(s_3, u_3, t);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_19 = ATgetArgument(t, 0);
                      if(match_cons(t_19, sym_Stream_1))
                        {
                          p_16 = ATgetArgument(t_19, 0);
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
                t = WriteToFile_1_0(b_4, t);
                return(t);
              }
              t = _2_0(_id, z_3, t);
            }
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
ATerm apply_strategy_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  t_16 = t;
  t = dtime_0_0(t);
  t = t_16;
  t = f_77(t);
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
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_17 (ATerm i_17, ATerm t)
  {
    t = SSL_fclose(i_17);
    return(t);
  }
  ATerm l_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_17 = ATgetArgument(t, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_17);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
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
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      ATerm y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL,x_8 = NULL;
        w_8 = t;
        t = SSL_explode_term(w_8);
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_20 = ATgetArgument(t, 1);
              if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
                {
                  x_8 = ATgetFirst((ATermList) g_20);
                  {
                    ATerm h_20 = (ATerm) ATgetNext((ATermList) g_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm i_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_17 = NULL,b_18 = NULL,c_18 = NULL;
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
              LocalPopChoice(l_20);
            }
          else
            {
              t = i_20;
              {
                ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                ATerm d_4 (ATerm t)
                {
                  ATerm h_18 = NULL;
                  h_18 = t;
                  t = SSL_is_string(h_18);
                  return(t);
                }
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
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL;
      l_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, term_o_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm b_9 = NULL;
        b_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = b_9;
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
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_80, _id, t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
        t = Cons_2_0(_id, u_18, t);
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = w_20;
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
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm i_19 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_19, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_80(t);
      }
    return(t);
  }
  t = i_19(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
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
  t = _2_0(g_4, h_4, t);
  {
    ATerm i_21 = t;
    int l_21 = stack_ptr;
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
        LocalPopChoice(l_21);
      }
    else
      {
        t = i_21;
        {
          ATerm k_9 = NULL,q_9 = NULL;
          k_9 = t;
          t = SSL_explode_term(k_9);
          if(match_cons(t, sym__2))
            {
              ATerm m_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_9;
          t = concat_0_0(t);
        }
      }
    k_19 = t;
    t = SSL_implode_string(k_19);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      t = SSL_is_string(z_19);
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
            ATerm n_4 (ATerm t)
            {
              ATerm v_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_21);
                }
              else
                {
                  t = v_21;
                }
              return(t);
            }
            t = map_1_0(n_4, t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
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
                        ATerm x_21 = t;
                        int c_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_20);
                            {
                              ATerm e_22 = t;
                              int f_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_10 = NULL;
                                  t = eval_config_0_0(t);
                                  p_10 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_20, p_10);
                                  t = p_10;
                                  ;
                                  LocalPopChoice(f_22);
                                }
                              else
                                {
                                  t = e_22;
                                }
                            }
                            ;
                            LocalPopChoice(c_22);
                          }
                        else
                          {
                            t = x_21;
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
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm g_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      p_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_12 = NULL;
            t = eval_config_0_0(t);
            g_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_12);
            t = g_12;
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
          }
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, term_q_22);
        t = geq_0_0(t);
        t = p_20;
        t = e_101(t);
      }
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = g_22;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
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
    t = term_r_22;
    return(t);
  }
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 (ATerm t)
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
      ATerm w_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_22;
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_y_22;
        return(t);
      }
      t = Option_3_0(v_4, w_4, x_4, t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm y_20 = NULL,z_20 = NULL;
              y_20 = t;
              t = SSL_string_to_int(y_20);
              z_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_20);
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_b_23;
              return(t);
            }
            t = ArgOption_3_0(y_4, b_5, c_5, t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm d_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_23;
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = term_d_23;
                return(t);
              }
              t = Option_3_0(d_5, m_5, p_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_21 = NULL;
      t = term_f_8;
      t = d_0(t);
      e_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_23, term_f_23, e_21);
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
      t = term_f_8;
      t = c_0(t);
      h_21 = t;
      t = (ATerm) ATinsert(CheckATermList(d_21), h_21);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
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
  ATerm u_5 (ATerm t)
  {
    ATerm k_21 = NULL;
    k_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_21);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_21);
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = ArgOption_3_0(q_5, u_5, v_5, t);
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
    ATerm k_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_21, o_21);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
    q_21 = t;
    t = SSL_table_put(n_21, o_21, (ATerm) ATinsert(CheckATermList(q_21), p_21));
    t = (ATerm) ATmakeAppl(sym__3, n_21, o_21, p_21);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_22 = NULL;
      t = term_f_8;
      t = l_0(t);
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_23, term_f_23, d_22);
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
ATerm input_option_0_0 (ATerm t)
{
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
    t = term_q_23;
    return(t);
  }
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_8;
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
    ATerm r_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_12 = NULL;
        t = eval_config_0_0(t);
        p_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_12);
        t = p_12;
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = r_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_86(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
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
        t = foldr_2_0(s_86, t_86, t);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, s_22);
        t = t_86(t);
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
  ATerm v_22 = NULL,r_12 = NULL,t_12 = NULL;
  t = times_0_0(t);
  r_12 = t;
  t = SSL_explode_term(r_12);
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_w_22;
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm k_13 = NULL,l_13 = NULL;
      if(match_cons(t, sym__2))
        {
          k_13 = ATgetArgument(t, 0);
          l_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_13, l_13);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            t = SSL_addr(k_13, l_13);
          }
      }
      return(t);
    }
    t = foldr_2_0(z_5, d_6, t);
    v_22 = t;
    t = SSL_TicksToSeconds(v_22);
  }
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
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm t)
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
            ATerm h_14 = NULL;
            t = eval_config_0_0(t);
            h_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_14);
            t = h_14;
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
        t = d_101(t);
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
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm s_23 = NULL,t_23 = NULL;
    t = run_time_0_0(t);
    s_23 = t;
    t = term_f_8;
    t = whoami_0_0(t);
    t_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_23), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_23));
    t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_25), s_23), term_g_25), t_23));
    return(t);
  }
  t = if_verbose1_1_0(e_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_78 (ATerm), ATerm t)
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
            ATerm w_14 = NULL;
            t = eval_config_0_0(t);
            w_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_14);
            t = w_14;
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
  t = d_78(t);
  return(t);
}
ATerm map_1_0 (ATerm b_80 (ATerm), ATerm t)
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
        t = Cons_2_0(b_80, u_23, t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
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
        t = e_0(t);
        g_24 = t;
        t = a_24;
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_24), g_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm l_76 (ATerm), ATerm t)
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
  t = l_76(t);
  j_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_24), h_24);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_15 = NULL;
            t = eval_config_0_0(t);
            e_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_15);
            t = e_15;
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
          }
      }
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm m_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(m_6, t);
      }
    }
  t = term_k_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm n_6 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, n_6, t);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm n_24 = NULL;
        n_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_24), term_l_26);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_6, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm m_76 (ATerm), ATerm t)
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
  t = m_76(t);
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
        ATerm z_15 = NULL;
        t = eval_config_0_0(t);
        z_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_15);
        t = z_15;
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
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_26;
        return(t);
      }
      ATerm x_6 (ATerm t)
      {
        t = term_x_26;
        return(t);
      }
      t = Option_3_0(u_6, w_6, x_6, t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm a_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_26;
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = term_z_26;
          return(t);
        }
        t = Option_3_0(a_7, b_7, d_7, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
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
  t = f_64(t);
  d_25 = t;
  t = c_25;
  t = g_64(t);
  e_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_25), d_25), a_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_27;
        t = j_93(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
      }
    t = j_25;
    {
      ATerm g_7 (ATerm t)
      {
        ATerm k_25 = NULL;
        k_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, k_25);
        return(t);
      }
      ATerm h_7 (ATerm t)
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
                t = j_93(t);
                t = Cons_2_0(_id, h_7, t);
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
      t = Cons_2_0(g_7, h_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_25;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_7 (ATerm t)
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
                ATerm k_7 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_l_27;
                  return(t);
                }
                ATerm l_7 (ATerm t)
                {
                  t = term_m_27;
                  return(t);
                }
                t = Option_3_0(j_7, k_7, l_7, t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
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
                            ATerm o_18 = NULL;
                            t = eval_config_0_0(t);
                            o_18 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_18);
                            t = o_18;
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
                      {
                        ATerm n_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(n_7, t);
                      }
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
                      ATerm b_19 = NULL;
                      t = eval_config_0_0(t);
                      b_19 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_19);
                      t = b_19;
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
                ATerm o_7 (ATerm t)
                {
                  ATerm q_7 (ATerm t)
                  {
                    if(((v_25 != NULL) && (v_25 != t)))
                      _fail(t);
                    else
                      v_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_7, t);
                  return(t);
                }
                t = fetch_1_0(o_7, t);
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
ATerm option_wrap_4_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm t)
{
  ATerm f_26 = NULL;
  t = parse_options_1_0(f_78, t);
  f_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_26);
  t = f_26;
  t = h_78(t);
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_78, t);
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
              t = i_78(t);
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
ATerm iowrap_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_77(t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              {
                ATerm i_28 = t;
                int j_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          ATerm u_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm v_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_m_28;
                            return(t);
                          }
                          ATerm x_7 (ATerm t)
                          {
                            t = term_n_28;
                            return(t);
                          }
                          t = Option_3_0(u_7, v_7, x_7, t);
                          ;
                          LocalPopChoice(l_28);
                        }
                      else
                        {
                          t = k_28;
                          {
                            ATerm o_28 = t;
                            int p_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_28);
                              }
                            else
                              {
                                t = o_28;
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
  ATerm s_7 (ATerm t)
  {
    ATerm a_8 (ATerm t)
    {
      ATerm g_26 = NULL,h_26 = NULL;
      g_26 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 = NULL;
            t = eval_config_0_0(t);
            w_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_19);
            t = w_19;
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
          }
        h_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_26));
        t = g_26;
      }
      return(t);
    }
    t = if_verbose2_1_0(a_8, t);
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm i_26 = NULL,j_26 = NULL,a_21 = NULL;
    i_26 = t;
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_8 (ATerm t)
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
          t = fetch_1_0(b_8, t);
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
      a_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_26, a_21);
      t = apply_strategy_1_0(o_77, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_7, q_77, s_7, t_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    t = _2_0(_id, Stratego_Ensugar_0_0, t);
    return(t);
  }
  t = iowrap_3_0(c_8, _fail, default_usage_0_0, t);
  return(t);
}
