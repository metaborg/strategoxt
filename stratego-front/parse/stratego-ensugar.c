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
ATerm term_p_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_w_25;
ATerm term_h_25;
ATerm term_h_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_c_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_b_20;
ATerm term_p_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
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
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_12);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
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
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Some_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__3, term_h_26, term_i_26, term_i_8);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm at_last_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm x_109 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm o_94 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm g_86 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm repeat_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm d_75 (ATerm), ATerm);
ATerm Var_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm w_109 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm i_18 (ATerm c_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm a_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm q_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm q_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_99 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm t_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm iowrap_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm h_8 (ATerm);
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
  t = term_i_8;
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
        ATerm j_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm o_8 = ATgetArgument(t, 1);
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
        ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_0;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_8;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      {
        ATerm r_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_0);
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      {
        ATerm s_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(b_1, (ATerm) ATempty);
  c_1 = t;
  t = SSL_mkterm(a_1, (ATerm) ATempty);
  g_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, c_1, g_1));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_1 = ATgetFirst((ATermList) t);
      {
        ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_8;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,y_1 = NULL;
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
        ATerm z_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      {
        ATerm a_9 = ATgetArgument(t, 1);
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
      y_1 = ATgetFirst((ATermList) t);
      {
        ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_1;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_8;
  return(t);
}
ATerm e_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm d_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_0, t);
        t = o_87(t);
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = d_9;
        t = Cons_2_0(_id, v_1, t);
      }
    return(t);
  }
  t = v_1(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  ATerm q_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_1 != NULL) && (w_1 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_1 = ATgetFirst((ATermList) t);
        {
          ATerm j_9 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_0, t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, not_null(w_1));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,k_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL;
  z_1 = t;
  a_2 = t;
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      {
        ATerm k_9 = ATgetArgument(t, 1);
        if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
          {
            d_2 = ATgetFirst((ATermList) k_9);
            e_2 = (ATerm) ATgetNext((ATermList) k_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_2;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_1, d_2);
        t = RightAssoc_0_0(t);
        t = d_2;
        t = r_112(t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
      }
    k_2 = t;
    t = g_2;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm r_2 = NULL;
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_1, r_2);
        t = GreaterThan_0_0(t);
        t = r_2;
        t = r_112(t);
        return(t);
      }
      t = map_1_0(r_0, t);
      o_2 = t;
      t = h_2;
      {
        ATerm n_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, z_1, h_2);
            t = LeftAssoc_0_0(t);
            t = h_2;
            t = r_112(t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = n_9;
          }
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATempty, p_2));
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm y_9 = ATgetArgument(t, 0);
                  ATerm b_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_2;
              {
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, p_2);
                  return(t);
                }
                t = at_end_1_0(z_0, t);
              }
              ;
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              {
                ATerm m_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATempty, p_2)));
                if(match_cons(t, sym__2))
                  {
                    ATerm d_10 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_10) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    m_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_2;
                t = concat_0_0(t);
              }
            }
          q_2 = t;
          t = SSL_mkterm(c_2, (ATerm) ATinsert(CheckATermList(q_2), k_2));
        }
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = bottomup_1_0(x_109, t);
    return(t);
  }
  t = SRTS_all(d_1, t);
  t = x_109(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_none_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
          {
            ATerm f_10 = ATgetFirst((ATermList) e_10);
            if(match_cons(f_10, sym__2))
              {
                ATerm g_10 = ATgetArgument(f_10, 0);
                if(!(match_cons(g_10, sym_None_0)))
                  _fail(t);
                d_3 = ATgetArgument(f_10, 1);
              }
            else
              _fail(t);
            e_3 = (ATerm) ATgetNext((ATermList) e_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
  t = for_each_pair_1_0(e_1, t);
  t = (ATerm) ATmakeAppl(sym__2, d_3, c_3);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            ATerm l_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_3;
        {
          ATerm f_1 (ATerm t)
          {
            t = c_3;
            return(t);
          }
          t = at_end_1_0(f_1, t);
        }
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm u_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_3, c_3));
          if(match_cons(t, sym__2))
            {
              ATerm m_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_2;
          t = concat_0_0(t);
        }
      }
    g_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_3, e_3);
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm s_3 = NULL,y_3 = NULL,z_3 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            ATerm o_10 = ATgetFirst((ATermList) n_10);
            if(match_cons(o_10, sym__2))
              {
                ATerm p_10 = ATgetArgument(o_10, 0);
                if(match_cons(p_10, sym_Some_1))
                  {
                    ATerm q_10 = ATgetArgument(p_10, 0);
                    if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                y_3 = ATgetArgument(o_10, 1);
              }
            else
              _fail(t);
            z_3 = (ATerm) ATgetNext((ATermList) n_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_3, y_3);
  t = for_each_pair_1_0(i_1, t);
  t = (ATerm) ATmakeAppl(sym__2, s_3, y_3);
  t = for_each_pair_1_0(j_1, t);
  t = (ATerm) ATmakeAppl(sym__2, y_3, s_3);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_10 = ATgetArgument(t, 0);
            ATerm u_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_3;
        {
          ATerm k_1 (ATerm t)
          {
            t = s_3;
            return(t);
          }
          t = at_end_1_0(k_1, t);
        }
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm b_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_3, s_3));
          if(match_cons(t, sym__2))
            {
              ATerm v_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_3;
          t = concat_0_0(t);
        }
      }
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, z_3);
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
          {
            ATerm a_11 = ATgetFirst((ATermList) w_10);
            if(match_cons(a_11, sym__2))
              {
                ATerm h_11 = ATgetArgument(a_11, 0);
                if(match_cons(h_11, sym_Some_1))
                  {
                    ATerm i_11 = ATgetArgument(h_11, 0);
                    if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                q_4 = ATgetArgument(a_11, 1);
              }
            else
              _fail(t);
            s_4 = (ATerm) ATgetNext((ATermList) w_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_4, q_4);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
  t = for_each_pair_1_0(l_1, t);
  t = (ATerm) ATmakeAppl(sym__2, q_4, p_4);
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_11 = ATgetArgument(t, 0);
            ATerm u_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_4;
        {
          ATerm m_1 (ATerm t)
          {
            t = p_4;
            return(t);
          }
          t = at_end_1_0(m_1, t);
        }
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        {
          ATerm m_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_4, p_4));
          if(match_cons(t, sym__2))
            {
              ATerm v_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_11) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_3;
          t = concat_0_0(t);
        }
      }
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm GenRightAssoc_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(z_4, (ATerm) ATempty);
  b_5 = t;
  t = SSL_mkterm(a_5, (ATerm) ATempty);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_5, c_5), term_d_12);
  t = assert_1_0(n_1, t);
  t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm GenLeftAssoc_0_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,g_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_5, (ATerm) ATempty);
  g_5 = t;
  t = SSL_mkterm(e_5, (ATerm) ATempty);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_5, j_5), term_g_12);
  t = assert_1_0(q_1, t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  return(t);
}
ATerm assert_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_94(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_5, l_5, m_5);
  t = table_push_0_0(t);
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_5, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATinsert(CheckATermList(o_5), l_5)));
    t = (ATerm) ATmakeAppl(sym__2, l_5, m_5);
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm GenGreaterThan_0_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(t_5, (ATerm) ATempty);
  v_5 = t;
  t = SSL_mkterm(u_5, (ATerm) ATempty);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_5, w_5), term_r_12);
  t = assert_1_0(b_2, t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, u_5);
  return(t);
}
ATerm for_each_pair_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm a_6 = NULL;
      ATerm i_2 (ATerm t)
      {
        ATerm d_6 = NULL;
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), d_6);
        t = g_86(t);
        return(t);
      }
      if(((a_6 != NULL) && (a_6 != t)))
        _fail(t);
      else
        a_6 = t;
      t = z_5;
      t = map_1_0(i_2, t);
      return(t);
    }
    t = map_1_0(f_2, t);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = GenGreaterThan_0_0(t);
  t = GenLeftAssoc_0_0(t);
  t = GenRightAssoc_0_0(t);
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm i_6 = NULL,s_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      {
        ATerm s_12 = ATgetArgument(t, 1);
        if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
          {
            ATerm t_12 = ATgetFirst((ATermList) s_12);
            if(match_cons(t_12, sym__2))
              {
                ATerm w_12 = ATgetArgument(t_12, 0);
                if(match_cons(w_12, sym_Some_1))
                  {
                    ATerm x_12 = ATgetArgument(w_12, 0);
                    if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                s_6 = ATgetArgument(t_12, 1);
              }
            else
              _fail(t);
            z_6 = (ATerm) ATgetNext((ATermList) s_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_6, s_6);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, s_6);
  t = for_each_pair_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, s_6, i_6);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_13 = ATgetArgument(t, 0);
            ATerm b_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_6;
        {
          ATerm l_2 (ATerm t)
          {
            t = i_6;
            return(t);
          }
          t = at_end_1_0(l_2, t);
        }
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm q_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_6, i_6));
          if(match_cons(t, sym__2))
            {
              ATerm c_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_3;
          t = concat_0_0(t);
        }
      }
    a_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_7, z_6);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm m_15 (ATerm t)
  {
    ATerm d_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_100(t);
        t = m_15(t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = d_13;
      }
    return(t);
  }
  t = m_15(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm n_2 (ATerm t)
  {
    if(((l_7 != NULL) && (l_7 != t)))
      _fail(t);
    else
      l_7 = t;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
      return(t);
    }
    t = fetch_1_0(t_2, t);
    return(t);
  }
  t = _2_0(n_2, s_2, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm m_7 = NULL,v_3 = NULL;
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_14), term_g_14), term_f_14), term_c_14), term_b_14), term_a_14), term_z_13), term_y_13), term_x_13), term_w_13), term_v_13), term_u_13), term_t_13), term_s_13), term_r_13), term_q_13), term_o_13), term_m_13), term_l_13), term_k_13), term_j_13), term_i_13));
  t = member_0_0(t);
  t = SSL_explode_string(m_7);
  v_3 = t;
  t = SSL_implode_string((ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATmakeInt(39)));
  return(t);
}
ATerm Op_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  x_7 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_7);
  p_7 = t;
  t = q_7;
  t = a_72(t);
  v_7 = t;
  t = u_7;
  t = b_72(t);
  w_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, v_7, w_7), p_7);
  return(t);
}
ATerm OpDecl_2_0 (ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_8);
  e_8 = t;
  t = f_8;
  t = k_71(t);
  l_8 = t;
  t = g_8;
  t = l_71(t);
  m_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, l_8, m_8), e_8);
  return(t);
}
ATerm SVar_1_0 (ATerm d_75 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_SVar_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  t_8 = t;
  t = u_8;
  t = d_75(t);
  v_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, v_8), t_8);
  return(t);
}
ATerm Var_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  e_9 = t;
  t = f_9;
  t = u_71(t);
  g_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_9), e_9);
  return(t);
}
ATerm VarDec_2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,v_9 = NULL,c_10 = NULL,k_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_10);
  o_9 = t;
  t = p_9;
  t = p_77(t);
  v_9 = t;
  t = q_9;
  t = q_77(t);
  c_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, v_9, c_10), o_9);
  return(t);
}
ATerm SDef_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      z_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      c_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  x_10 = t;
  t = z_10;
  t = t_77(t);
  d_11 = t;
  t = b_11;
  t = u_77(t);
  e_11 = t;
  t = c_11;
  t = v_77(t);
  f_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, d_11, e_11, f_11), x_10);
  return(t);
}
ATerm RDef_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_RDef_3))
    {
      k_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      o_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  j_11 = t;
  t = k_11;
  t = z_73(t);
  p_11 = t;
  t = m_11;
  t = a_74(t);
  q_11 = t;
  t = o_11;
  t = b_74(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, p_11, q_11, r_11), j_11);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,c_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  y_11 = t;
  t = z_11;
  t = o_77(t);
  a_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, a_12), y_11);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(m_14) != AT_INT) || (ATgetInt((ATermInt) m_14) != 34)))
                _fail(t);
              i_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_12), term_p_14), term_n_14);
          ;
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          {
            ATerm l_12 = NULL,m_12 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_12 = ATgetFirst((ATermList) t);
                m_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_12;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_12), term_n_14), term_n_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_12), term_q_14), term_n_14);
              }
          }
        }
      t = Cons_2_0(_id, v_2, t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL,f_13 = NULL;
      e_13 = t;
      if(match_cons(t, sym_Str_1))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm h_13 = NULL,x_3 = NULL,b_4 = NULL;
            t = SSL_explode_string(f_13);
            {
              ATerm w_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm c_4 = NULL,o_4 = NULL;
                  c_4 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_14 = ATgetFirst((ATermList) t);
                      if(((ATgetType(x_14) != AT_INT) || (ATgetInt((ATermInt) x_14) != 34)))
                        _fail(t);
                      o_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_4;
                  t = last_0_0(t);
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                    _fail(t);
                  t = c_4;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_14;
                }
              t = escape_chars_0_0(t);
              b_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_14, b_4);
              t = quote_chars_0_0(t);
              x_3 = t;
              t = SSL_implode_string(x_3);
              h_13 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, h_13);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              f_13 = ATgetArgument(t, 0);
              {
                ATerm f_5 = NULL;
                t = SSL_real_to_string(f_13);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, f_5);
              }
            }
          else
            {
              ATerm s_5 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  f_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(f_13);
              s_5 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, s_5);
            }
        }
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm a_15 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = a_15;
                  {
                    ATerm c_15 = t;
                    int h_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(h_15);
                      }
                    else
                      {
                        t = c_15;
                        {
                          ATerm i_15 = t;
                          int j_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
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
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(l_15);
                                  }
                                else
                                  {
                                    t = k_15;
                                    {
                                      ATerm o_15 = t;
                                      int p_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(p_15);
                                        }
                                      else
                                        {
                                          t = o_15;
                                          {
                                            ATerm r_15 = t;
                                            int s_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(s_15);
                                              }
                                            else
                                              {
                                                t = r_15;
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
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm n_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_13), n_13), (ATerm) ATinsert(ATempty, n_13));
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            ATerm b_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_13), n_13);
        {
          ATerm w_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, n_13);
            return(t);
          }
          t = at_end_1_0(w_2, t);
        }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
        {
          ATerm g_6 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_13), n_13), (ATerm) ATinsert(ATempty, n_13)));
          if(match_cons(t, sym__2))
            {
              ATerm c_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_6;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_14 = ATgetFirst((ATermList) t);
      e_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_14;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm e_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_14;
          ;
          LocalPopChoice(f_16);
        }
      else
        {
          t = e_16;
          t = e_14;
          t = last_0_0(t);
        }
    }
  else
    {
      t = e_14;
      t = last_0_0(t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = SSL_explode_string(o_14);
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  t = _2_0(_id, x_2, t);
  m_6 = t;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((n_6 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      p_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_6;
  t = last_0_0(t);
  if((n_6 != t))
    {
      _fail(t);
    }
  t = m_6;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
      d_15 = ATgetArgument(t, 2);
      t = d_15;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, f_15, g_15);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          f_15 = ATgetArgument(t, 0);
          g_15 = ATgetArgument(t, 1);
          d_15 = ATgetArgument(t, 2);
          t = d_15;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, f_15, g_15);
        }
      else
        {
          ATerm c_7 = NULL,s_7 = NULL,z_7 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              f_15 = ATgetArgument(t, 0);
              g_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_15;
          {
            ATerm i_16 = t;
            if((PushChoice() == 0))
              {
                ATerm g_7 = NULL;
                g_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_14, g_7);
                t = is_quoted_0_0(t);
                t = g_7;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_16;
              }
            t = SSL_explode_string(f_15);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_p_14, z_7);
            t = quote_chars_0_0(t);
            s_7 = t;
            t = SSL_implode_string(s_7);
            c_7 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, c_7, g_15);
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  t = w_109(t);
  {
    ATerm y_2 (ATerm t)
    {
      t = topdown_1_0(w_109, t);
      return(t);
    }
    t = SRTS_all(y_2, t);
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm j_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = j_16;
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm p_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = gen_left_0_0(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = p_16;
      {
        ATerm u_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = gen_right_0_0(t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = u_16;
            {
              ATerm k_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = gen_non_assoc_0_0(t);
                  ;
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = k_17;
                  t = gen_none_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(i_3, t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = m_17;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, h_16);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm q_15 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL,c_8 = NULL;
      u_15 = t;
      t = SSL_explode_term(u_15);
      if(match_cons(t, sym__2))
        {
          ATerm t_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm u_17 = ATgetArgument(t, 1);
            if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
              {
                c_8 = ATgetFirst((ATermList) u_17);
                {
                  ATerm v_17 = (ATerm) ATgetNext((ATermList) u_17);
                  if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = c_8;
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
    }
  t = topdown_1_0(z_2, t);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,g_16 = NULL;
          if(match_cons(t, sym_Seq_2))
            {
              w_15 = ATgetArgument(t, 0);
              x_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_15;
          if(match_cons(t, sym_Seq_2))
            {
              y_15 = ATgetArgument(t, 0);
              z_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, w_15, y_15);
          t = a_3(t);
          g_16 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, g_16, z_15);
          t = a_3(t);
          ;
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
        }
      return(t);
    }
    t = bottomup_1_0(a_3, t);
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, term_d_18), term_b_18))), (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATempty, term_a_18))));
    t = repeat_1_0(f_3, t);
    t = q_15;
    t = bottomup_1_0(h_3, t);
  }
  return(t);
}
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,r_16 = NULL,s_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  k_16 = t;
  t = l_16;
  t = b_66(t);
  n_16 = t;
  t = m_16;
  t = c_66(t);
  r_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_16, r_16), k_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_16, term_e_18);
  t = open_stream_0_0(t);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, w_16);
  t = n_97(t);
  t = fclose_0_0(t);
  t = w_16;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = fetch_1_0(p_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = WriteToFile_1_0(r_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if(match_cons(h_18, sym_Stream_1))
        {
          b_17 = ATgetArgument(h_18, 0);
        }
      else
        _fail(t);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_17, c_17);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_17);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = WriteToFile_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym_Stream_1))
        {
          e_17 = ATgetArgument(m_18, 0);
        }
      else
        _fail(t);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_17, f_17);
  g_17 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), g_17);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_17);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  z_16 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_3, t);
          ;
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          t = term_p_18;
          if(((a_17 != NULL) && (a_17 != t)))
            _fail(t);
          else
            a_17 = t;
        }
      return(t);
    }
    t = _2_0(j_3, _id, t);
    t = z_16;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm k_8 = NULL;
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), k_8);
        return(t);
      }
      t = _2_0(_id, l_3, t);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_3, o_3, t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = _2_0(_id, t_3, t);
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
ATerm apply_strategy_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL;
  i_17 = t;
  t = dtime_0_0(t);
  t = i_17;
  t = q_83(t);
  j_17 = t;
  t = dtime_0_0(t);
  n_17 = t;
  t = j_17;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_17), (ATerm) ATmakeAppl(sym_Runtime_1, n_17)), q_17);
  return(t);
}
ATerm i_18 (ATerm c_18, ATerm t)
{
  t = SSL_fclose(c_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_18 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_18);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = i_18(g_18, t);
          }
      }
    }
  else
    {
      t = i_18(g_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stdin_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stdout_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = SSL_stderr_stream();
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_18);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_18;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_is_string(x_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      ATerm i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL,s_9 = NULL;
        r_9 = t;
        t = SSL_explode_term(r_9);
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_19 = ATgetArgument(t, 1);
              if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
                {
                  s_9 = ATgetFirst((ATermList) o_19);
                  {
                    ATerm p_19 = (ATerm) ATgetNext((ATermList) o_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_9;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_9;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_9;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_9;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm v_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
              t = _2_0(w_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_18 = ATgetArgument(t, 0);
                  r_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_18, r_18);
              s_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_18);
              ;
              LocalPopChoice(y_19);
            }
          else
            {
              t = v_19;
              {
                ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
                t = _2_0(a_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_18 = ATgetArgument(t, 0);
                    v_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_18, v_18);
                w_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL;
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_19, term_b_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm t_9 = NULL;
        t_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_9), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = t_9;
        _fail(t);
      }
    }
  y_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_19);
  z_18 = t;
  t = y_18;
  t = fclose_0_0(t);
  t = z_18;
  return(t);
}
ATerm fetch_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_86, _id, t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = Cons_2_0(_id, g_19, t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm j_19 = NULL,k_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_19 = ATgetFirst((ATermList) t);
            k_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_19;
        {
          ATerm d_4 (ATerm t)
          {
            t = k_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_19, t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_87(t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_explode_string(t_19);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_explode_string(u_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_19 = NULL;
  t = _2_0(f_4, g_4, t);
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL,x_19 = NULL;
        if(match_cons(t, sym__2))
          {
            w_19 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_19;
        {
          ATerm h_4 (ATerm t)
          {
            t = x_19;
            return(t);
          }
          t = at_end_1_0(h_4, t);
        }
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        {
          ATerm z_9 = NULL,a_10 = NULL;
          z_9 = t;
          t = SSL_explode_term(z_9);
          if(match_cons(t, sym__2))
            {
              ATerm o_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_20) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_10;
          t = concat_0_0(t);
        }
      }
    s_19 = t;
    t = SSL_implode_string(s_19);
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL;
      h_20 = t;
      t = SSL_is_string(h_20);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_4, t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              l_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_20 = ATgetArgument(t, 0);
                  t = m_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_20 = ATgetArgument(t, 0);
                      t = m_20;
                      {
                        ATerm y_20 = t;
                        int a_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_20);
                            {
                              ATerm b_21 = t;
                              int f_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_10 = NULL;
                                  t = eval_config_0_0(t);
                                  y_10 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_20, y_10);
                                  t = y_10;
                                  ;
                                  LocalPopChoice(f_21);
                                }
                              else
                                {
                                  t = b_21;
                                }
                            }
                            ;
                            LocalPopChoice(a_21);
                          }
                        else
                          {
                            t = y_20;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_20 = NULL,s_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_20 = ATgetArgument(t, 0);
                          n_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_20;
                      t = eval_config_0_0(t);
                      r_20 = t;
                      t = n_20;
                      t = eval_config_0_0(t);
                      s_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm k_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_20 = NULL,z_20 = NULL;
      x_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_12 = NULL;
            t = eval_config_0_0(t);
            b_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_12);
            t = b_12;
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = p_21;
          }
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_20, term_u_21);
        t = geq_0_0(t);
        t = x_20;
        t = w_107(t);
      }
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = k_21;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  if(match_string(t, "-k"))
    {
      t = c_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_21;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  t = SSL_string_to_int(d_21);
  e_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_21);
  t = d_21;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  if(match_string(t, "-S"))
    {
      t = g_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_21;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_22;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  t = SSL_string_to_int(h_21);
  i_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_21);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_21);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_22;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, n_4, r_4, t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = m_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_4, v_4, w_4, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = Option_3_0(x_4, y_4, h_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_21 = NULL;
      t = term_i_8;
      t = d_0(t);
      n_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_22, term_t_22, n_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          m_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_21;
      t = a_0(t);
      t = term_i_8;
      t = b_0(t);
      q_21 = t;
      t = (ATerm) ATinsert(CheckATermList(m_21), q_21);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_string(t, "-o"))
    {
      t = s_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_21;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_21);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_21);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, k_5, q_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__3))
    {
      w_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      y_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
  {
    ATerm v_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm b_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_21, x_21);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATempty;
      }
    z_21 = t;
    t = SSL_table_put(w_21, x_21, (ATerm) ATinsert(CheckATermList(z_21), y_21));
    t = (ATerm) ATmakeAppl(sym__3, w_21, x_21, y_21);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_22 = NULL;
      t = term_i_8;
      t = m_0(t);
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_22, term_t_22, l_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          i_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_22 = ATgetFirst((ATermList) t);
          k_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_22;
      t = i_0(t);
      t = j_22;
      t = k_0(t);
      s_22 = t;
      t = (ATerm) ATinsert(CheckATermList(k_22), s_22);
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  if(match_string(t, "-i"))
    {
      t = w_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_22;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_22);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_22);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, y_5, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_8;
  t = whoami_0_0(t);
  a_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL;
        t = eval_config_0_0(t);
        k_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_12);
        t = k_12;
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_93(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm d_23 = NULL,e_23 = NULL,h_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_23 = ATgetFirst((ATermList) t);
            e_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_23;
        t = foldr_2_0(d_93, e_93, t);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_23, h_23);
        t = e_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_12, v_12);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = SSL_addr(u_12, v_12);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_23 = NULL,n_12 = NULL,p_12 = NULL;
  t = times_0_0(t);
  n_12 = t;
  t = SSL_explode_term(n_12);
  if(match_cons(t, sym__2))
    {
      ATerm n_23 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12;
  t = foldr_2_0(c_6, e_6, t);
  k_23 = t;
  t = SSL_TicksToSeconds(k_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_23;
        if((w_23 != t))
          {
            _fail(t);
          }
        t = v_23;
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = v_23;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_23, x_23);
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              t = SSL_gtr(w_23, x_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_23, x_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL,c_24 = NULL;
      a_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL;
            t = eval_config_0_0(t);
            r_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_14);
            t = r_14;
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = u_23;
          }
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, term_z_23);
        t = geq_0_0(t);
        t = a_24;
        t = v_107(t);
      }
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  t = run_time_0_0(t);
  e_24 = t;
  t = term_i_8;
  t = whoami_0_0(t);
  f_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_24));
  t = (ATerm) ATmakeAppl(sym__2, term_b_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_24), e_24), term_d_24), f_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm m_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = m_24;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm u_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL;
            t = eval_config_0_0(t);
            n_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_15);
            t = n_15;
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
          }
      }
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = u_24;
      t = fetch_1_0(h_6, t);
    }
  t = o_84(t);
  return(t);
}
ATerm map_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = Cons_2_0(m_86, g_24, t);
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_24 = ATgetFirst((ATermList) t);
      j_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_24 = NULL,o_24 = NULL;
        t = j_24;
        t = g_0(t);
        n_24 = t;
        t = i_24;
        t = f_0(t);
        o_24 = t;
        t = j_24;
        {
          ATerm j_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_24), o_24);
            return(t);
          }
          t = reverse_acc_2_0(f_0, j_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  p_24 = t;
  t = q_24;
  t = w_82(t);
  r_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_24), p_24);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_24), term_h_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL;
            t = eval_config_0_0(t);
            d_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_16);
            t = d_16;
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = q_25;
          }
      }
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = fetch_1_0(k_6, t);
    }
  t = term_w_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(q_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  w_24 = t;
  t = x_24;
  t = x_82(t);
  y_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, y_24), w_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  d_25 = t;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_25 = ATgetFirst((ATermList) t);
                ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_25;
          }
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, d_25);
      }
    e_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_25);
    t = d_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_16 = NULL;
        t = eval_config_0_0(t);
        q_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_16);
        t = q_16;
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = b_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_26;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_26;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, t_6, u_6, t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = Option_3_0(v_6, w_6, x_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_25 = ATgetFirst((ATermList) t);
      k_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  i_25 = t;
  t = j_25;
  t = q_70(t);
  l_25 = t;
  t = k_25;
  t = r_70(t);
  m_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_25), l_25), i_25);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_26;
        t = u_99(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
      }
    t = r_25;
    {
      ATerm b_7 (ATerm t)
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = u_99(t);
                t = Cons_2_0(_id, b_7, t);
              }
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm u_25 = NULL,v_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_25 = ATgetFirst((ATermList) t);
                  v_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_25), (ATerm) ATmakeAppl(sym_Undefined_1, u_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_6, b_7, t);
    }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "--help"))
    {
      t = f_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_26;
        }
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_27;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_26;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_99(t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_7, f_7, h_7, t);
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_7, t);
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = NULL;
          l_26 = t;
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_26;
                {
                  ATerm m_27 = t;
                  int n_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm o_27 = t;
                        int p_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_19 = NULL;
                            t = eval_config_0_0(t);
                            r_19 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_19);
                            t = r_19;
                            ;
                            LocalPopChoice(p_27);
                          }
                        else
                          {
                            t = o_27;
                          }
                      }
                      ;
                      LocalPopChoice(n_27);
                    }
                  else
                    {
                      t = m_27;
                      t = fetch_1_0(i_7, t);
                    }
                  t = l_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm q_27 = t;
                  int r_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_21 = NULL;
                      t = eval_config_0_0(t);
                      j_21 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_21);
                      t = j_21;
                      ;
                      LocalPopChoice(r_27);
                    }
                  else
                    {
                      t = q_27;
                    }
                  t = l_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_7 (ATerm t)
                {
                  ATerm k_7 (ATerm t)
                  {
                    if(((d_26 != NULL) && (d_26 != t)))
                      _fail(t);
                    else
                      d_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_7, t);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_b_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_26)), term_u_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
              }
          }
        }
      e_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm o_26 = NULL;
  t = parse_options_1_0(q_84, t);
  o_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_26);
  t = o_26;
  t = s_84(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_84, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = if_verbose2_1_0(b_8, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_27;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        t = eval_config_0_0(t);
        e_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_22);
        t = e_22;
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
      }
    q_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_26));
    t = p_26;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
              {
                ATerm h_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = h_28;
                    {
                      ATerm j_28 = t;
                      int k_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_7, y_7, a_8, t);
                          ;
                          LocalPopChoice(k_28);
                        }
                      else
                        {
                          t = j_28;
                          {
                            ATerm l_28 = t;
                            int m_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_28);
                              }
                            else
                              {
                                t = l_28;
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
    ATerm r_26 = NULL,s_26 = NULL,n_22 = NULL;
    r_26 = t;
    {
      ATerm n_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_8, t);
          ;
          LocalPopChoice(o_28);
        }
      else
        {
          t = n_28;
          t = term_p_28;
          s_26 = t;
        }
      t = not_null(s_26);
      t = ReadFromFile_0_0(t);
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, n_22);
      t = apply_strategy_1_0(z_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_7, b_84, o_7, r_7, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = _2_0(_id, Stratego_Ensugar_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_8, _fail, default_usage_0_0, t);
  return(t);
}
