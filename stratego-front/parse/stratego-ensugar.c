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
ATerm term_j_25;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_h_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_d_19;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_c_15;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_g_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Some_1, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, term_u_7);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm init_parenthesation_rules_0_0 (ATerm);
ATerm parenthesize_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm stratego_parenthesize_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm b_103 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm l_68 (ATerm), ATerm);
ATerm Var_1_0 (ATerm c_65 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm is_double_quoted_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_chars_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm is_double_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm a_103 (ATerm), ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm c_77 (ATerm), ATerm);
ATerm stratego_ensugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_1);
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      {
        ATerm q_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm r_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(w_1, (ATerm) ATempty);
  x_1 = t;
  t = SSL_mkterm(v_1, (ATerm) ATempty);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, y_1);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_s_7;
      return(t);
    }
    t = rewrite_1_0(c_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm t_7 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("h_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_u_7;
  }
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      {
        ATerm v_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      {
        ATerm w_7 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(e_2, (ATerm) ATempty);
  f_2 = t;
  t = SSL_mkterm(c_2, (ATerm) ATempty);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, i_2);
  {
    ATerm e_0 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    t = rewrite_1_0(e_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm y_7 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("l_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_u_7;
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,s_2 = NULL,r_0 = NULL;
  o_2 = t;
  t = term_u_7;
  t = x_87(t);
  s_2 = t;
  t = SSL_table_get(s_2, o_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_0 = ATgetFirst((ATermList) t);
      {
        ATerm c_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_0;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_2);
  if(match_cons(t, sym__2))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm e_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_2);
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      {
        ATerm f_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(z_2, (ATerm) ATempty);
  a_3 = t;
  t = SSL_mkterm(x_2, (ATerm) ATempty);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
  {
    ATerm n_0 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    t = rewrite_1_0(n_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm h_8 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_u_7;
  }
  return(t);
}
ATerm at_last_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, o_0, t);
        t = v_80(t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = Cons_2_0(_id, d_3, t);
      }
    return(t);
  }
  t = d_3(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm f_3 = NULL,i_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_3 = ATgetFirst((ATermList) t);
        {
          ATerm k_8 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(p_0, t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, not_null(f_3));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,q_3 = NULL,w_3 = NULL,a_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL;
  k_3 = t;
  q_3 = t;
  t = SSL_explode_term(q_3);
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            a_4 = ATgetFirst((ATermList) l_8);
            d_4 = (ATerm) ATgetNext((ATermList) l_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_4;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, m_4);
      t = RightAssoc_0_0(t);
      t = m_4;
      t = v_105(t);
      return(t);
    }
    t = try_1_0(q_0, t);
    h_4 = t;
    t = e_4;
    {
      ATerm s_0 (ATerm t)
      {
        ATerm n_4 = NULL;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_3, n_4);
        t = GreaterThan_0_0(t);
        t = n_4;
        t = v_105(t);
        return(t);
      }
      t = map_1_0(s_0, t);
      i_4 = t;
      t = g_4;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm o_4 = NULL;
          o_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_3, o_4);
          t = LeftAssoc_0_0(t);
          t = o_4;
          t = v_105(t);
          return(t);
        }
        t = try_1_0(t_0, t);
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_4, (ATerm) ATinsert(ATempty, k_4));
        t = conc_0_0(t);
        l_4 = t;
        t = SSL_mkterm(w_3, (ATerm) ATinsert(CheckATermList(l_4), h_4));
      }
    }
  }
  return(t);
}
ATerm gen_none_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            ATerm n_8 = ATgetFirst((ATermList) m_8);
            if(match_cons(n_8, sym__2))
              {
                ATerm q_8 = ATgetArgument(n_8, 0);
                if(!(match_cons(q_8, sym_None_0)))
                  _fail(t);
                r_4 = ATgetArgument(n_8, 1);
              }
            else
              _fail(t);
            s_4 = (ATerm) ATgetNext((ATermList) m_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
  {
    ATerm u_0 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(u_0, t);
    t = (ATerm) ATmakeAppl(sym__2, r_4, q_4);
    t = conc_0_0(t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, s_4);
  }
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm u_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
          {
            ATerm s_8 = ATgetFirst((ATermList) r_8);
            if(match_cons(s_8, sym__2))
              {
                ATerm t_8 = ATgetArgument(s_8, 0);
                if(match_cons(t_8, sym_Some_1))
                  {
                    ATerm u_8 = ATgetArgument(t_8, 0);
                    if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                x_4 = ATgetArgument(s_8, 1);
              }
            else
              _fail(t);
            z_4 = (ATerm) ATgetNext((ATermList) r_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_4, x_4);
  {
    ATerm w_0 (ATerm t)
    {
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(w_0, t);
    t = (ATerm) ATmakeAppl(sym__2, u_4, x_4);
    {
      ATerm x_0 (ATerm t)
      {
        t = GenGreaterThan_0_0(t);
        t = GenLeftAssoc_0_0(t);
        t = GenRightAssoc_0_0(t);
        return(t);
      }
      t = for_each_pair_1_0(x_0, t);
      t = (ATerm) ATmakeAppl(sym__2, x_4, u_4);
      t = conc_0_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
    }
  }
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      {
        ATerm y_8 = ATgetArgument(t, 1);
        if(((ATgetType(y_8) == AT_LIST) && !(ATisEmpty(y_8))))
          {
            ATerm z_8 = ATgetFirst((ATermList) y_8);
            if(match_cons(z_8, sym__2))
              {
                ATerm a_9 = ATgetArgument(z_8, 0);
                if(match_cons(a_9, sym_Some_1))
                  {
                    ATerm b_9 = ATgetArgument(a_9, 0);
                    if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                c_5 = ATgetArgument(z_8, 1);
              }
            else
              _fail(t);
            d_5 = (ATerm) ATgetNext((ATermList) y_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_5, c_5);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
  {
    ATerm y_0 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, c_5, b_5);
    t = conc_0_0(t);
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_5, d_5);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_5, k_5), term_d_9);
  {
    ATerm a_1 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    t = assert_1_0(a_1, t);
    t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  }
  return(t);
}
ATerm GenLeftAssoc_0_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(l_5, (ATerm) ATempty);
  n_5 = t;
  t = SSL_mkterm(m_5, (ATerm) ATempty);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_5, o_5), term_g_9);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_s_7;
      return(t);
    }
    t = assert_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, l_5, m_5);
  }
  return(t);
}
ATerm assert_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_87(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_5, r_5, s_5);
  t = table_push_0_0(t);
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_6 = ATgetFirst((ATermList) t);
        d_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_5, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_6), (ATerm) ATinsert(CheckATermList(c_6), r_5)));
    t = (ATerm) ATmakeAppl(sym__2, r_5, s_5);
  }
  return(t);
}
ATerm GenGreaterThan_0_0 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,o_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(i_6, (ATerm) ATempty);
  o_6 = t;
  t = SSL_mkterm(j_6, (ATerm) ATempty);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_6, p_6), term_m_9);
  {
    ATerm c_1 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    t = assert_1_0(c_1, t);
    t = (ATerm) ATmakeAppl(sym__2, i_6, j_6);
  }
  return(t);
}
ATerm for_each_pair_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm v_6 = NULL;
      v_6 = t;
      t = r_6;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm d_7 = NULL;
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_6, d_7);
          t = o_79(t);
          return(t);
        }
        t = map_1_0(e_1, t);
      }
      return(t);
    }
    t = map_1_0(d_1, t);
  }
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm f_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm o_9 = ATgetArgument(t, 1);
        if(((ATgetType(o_9) == AT_LIST) && !(ATisEmpty(o_9))))
          {
            ATerm p_9 = ATgetFirst((ATermList) o_9);
            if(match_cons(p_9, sym__2))
              {
                ATerm q_9 = ATgetArgument(p_9, 0);
                if(match_cons(q_9, sym_Some_1))
                  {
                    ATerm r_9 = ATgetArgument(q_9, 0);
                    if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                z_7 = ATgetArgument(p_9, 1);
              }
            else
              _fail(t);
            a_8 = (ATerm) ATgetNext((ATermList) o_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_7, z_7);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, f_7, z_7);
  {
    ATerm g_1 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(g_1, t);
    t = (ATerm) ATmakeAppl(sym__2, z_7, f_7);
    t = conc_0_0(t);
    b_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_8, a_8);
  }
  return(t);
}
ATerm init_parenthesation_rules_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_8);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = gen_left_0_0(t);
          ;
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm u_9 = t;
            int w_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = gen_right_0_0(t);
                ;
                LocalPopChoice(w_9);
              }
            else
              {
                t = u_9;
                {
                  ATerm x_9 = t;
                  int y_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = gen_non_assoc_0_0(t);
                      ;
                      LocalPopChoice(y_9);
                    }
                  else
                    {
                      t = x_9;
                      t = gen_none_0_0(t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = repeat_1_0(h_1, t);
  }
  return(t);
}
ATerm parenthesize_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm o_8 = NULL;
  o_8 = t;
  t = t_105(t);
  t = init_parenthesation_rules_0_0(t);
  t = o_8;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm j_1 (ATerm t)
      {
        t = Disambiguate_1_0(s_105, t);
        return(t);
      }
      t = try_1_0(j_1, t);
      return(t);
    }
    t = bottomup_1_0(i_1, t);
  }
  return(t);
}
ATerm stratego_parenthesize_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm p_8 = NULL;
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym_ParenStrat_1, p_8);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, term_d_10), term_c_10))), (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATempty, term_b_10)));
    return(t);
  }
  t = parenthesize_2_0(k_1, l_1, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = bottomup_1_0(b_103, t);
    return(t);
  }
  t = SRTS_all(m_1, t);
  t = b_103(t);
  return(t);
}
ATerm innermost_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = t_95(t);
      t = innermost_1_0(t_95, t);
      return(t);
    }
    t = try_1_0(o_1, t);
    return(t);
  }
  t = bottomup_1_0(n_1, t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    t = fetch_1_0(_id, t);
    return(t);
  }
  t = _2_0(_id, p_1, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_11), term_c_11), term_b_11), term_a_11), term_y_10), term_w_10), term_v_10), term_u_10), term_s_10), term_r_10), term_q_10), term_p_10), term_o_10), term_n_10), term_m_10), term_l_10), term_k_10), term_i_10), term_h_10), term_g_10), term_f_10), term_e_10));
  t = member_0_0(t);
  t = v_8;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm w_8 = NULL;
      w_8 = t;
      t = (ATerm) ATinsert(CheckATermList(w_8), term_g_11);
      return(t);
    }
    t = string_as_chars_1_0(q_1, t);
  }
  return(t);
}
ATerm Op_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,f_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL,v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_9);
  x_8 = t;
  t = f_9;
  t = i_65(t);
  l_9 = t;
  t = k_9;
  t = j_65(t);
  n_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, l_9, n_9), x_8);
  return(t);
}
ATerm OpDecl_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,t_10 = NULL,x_10 = NULL,z_10 = NULL,d_11 = NULL,e_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_11);
  j_10 = t;
  t = t_10;
  t = s_64(t);
  z_10 = t;
  t = x_10;
  t = t_64(t);
  d_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, z_10, d_11), j_10);
  return(t);
}
ATerm SVar_1_0 (ATerm l_68 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  m_11 = t;
  t = o_11;
  t = l_68(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, p_11), m_11);
  return(t);
}
ATerm Var_1_0 (ATerm c_65 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  w_11 = t;
  t = x_11;
  t = c_65(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, y_11), w_11);
  return(t);
}
ATerm VarDec_2_0 (ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  d_12 = t;
  t = e_12;
  t = x_70(t);
  g_12 = t;
  t = f_12;
  t = y_70(t);
  h_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, g_12, h_12), d_12);
  return(t);
}
ATerm SDef_3_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym_SDef_3))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
      p_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  m_12 = t;
  t = n_12;
  t = b_71(t);
  q_12 = t;
  t = o_12;
  t = c_71(t);
  r_12 = t;
  t = p_12;
  t = d_71(t);
  s_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, q_12, r_12, s_12), m_12);
  return(t);
}
ATerm RDef_3_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_RDef_3))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      a_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  x_12 = t;
  t = y_12;
  t = h_67(t);
  b_13 = t;
  t = z_12;
  t = i_67(t);
  c_13 = t;
  t = a_13;
  t = j_67(t);
  d_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, b_13, c_13, d_13), x_12);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_13);
  i_13 = t;
  t = j_13;
  t = w_70(t);
  k_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, k_13), i_13);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_13 = ATgetFirst((ATermList) t);
      t_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_13;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_13), term_i_11), term_h_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_13), term_h_11), term_h_11);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_13), term_j_11), term_h_11);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, u_1, t);
      }
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm n_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = n_11;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, a_14);
  t = is_quoted_chars_0_0(t);
  t = a_14;
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_14 = NULL,n_14 = NULL;
      m_14 = t;
      if(match_cons(t, sym_Str_1))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm p_14 = NULL;
            t = n_14;
            {
              ATerm b_2 (ATerm t)
              {
                ATerm u_11 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_11;
                  }
                t = escape_chars_0_0(t);
                t = double_quote_chars_0_0(t);
                return(t);
              }
              t = string_as_chars_1_0(b_2, t);
              p_14 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, p_14);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              n_14 = ATgetArgument(t, 0);
              {
                ATerm v_0 = NULL;
                t = SSL_real_to_string(n_14);
                v_0 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, v_0);
              }
            }
          else
            {
              ATerm z_0 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  n_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(n_14);
              z_0 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, z_0);
            }
        }
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm v_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = v_11;
            {
              ATerm b_12 = t;
              int c_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(c_12);
                }
              else
                {
                  t = b_12;
                  {
                    ATerm j_12 = t;
                    int k_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(k_12);
                      }
                    else
                      {
                        t = j_12;
                        {
                          ATerm l_12 = t;
                          int u_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
                              ;
                              LocalPopChoice(u_12);
                            }
                          else
                            {
                              t = l_12;
                              {
                                ATerm v_12 = t;
                                int w_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(w_12);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm f_13 = t;
                                      int g_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(g_13);
                                        }
                                      else
                                        {
                                          t = f_13;
                                          {
                                            ATerm h_13 = t;
                                            int m_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(m_13);
                                              }
                                            else
                                              {
                                                t = h_13;
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
  ATerm s_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_14), t_14), (ATerm) ATinsert(ATempty, t_14));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, u_14);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  v_14 = t;
  t = SSL_explode_string(v_14);
  t = y_102(t);
  w_14 = t;
  t = SSL_implode_string(w_14);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_15;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_15;
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          t = b_15;
          t = last_0_0(t);
        }
    }
  else
    {
      t = b_15;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_chars_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((h_15 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      j_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_15;
  t = last_0_0(t);
  if((h_15 != t))
    {
      _fail(t);
    }
  t = g_15;
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm k_15 = NULL;
    k_15 = t;
    t = SSL_explode_string(k_15);
    return(t);
  }
  t = _2_0(_id, g_2, t);
  t = is_quoted_chars_0_0(t);
  return(t);
}
ATerm is_double_quoted_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, l_15);
  t = is_quoted_0_0(t);
  t = l_15;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
      w_15 = ATgetArgument(t, 2);
      t = w_15;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, y_15, z_15);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          y_15 = ATgetArgument(t, 0);
          z_15 = ATgetArgument(t, 1);
          w_15 = ATgetArgument(t, 2);
          t = w_15;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, y_15, z_15);
        }
      else
        {
          ATerm f_1 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              y_15 = ATgetArgument(t, 0);
              z_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_15;
          {
            ATerm p_13 = t;
            if((PushChoice() == 0))
              {
                t = is_double_quoted_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_13;
              }
            t = y_15;
            t = double_quote_0_0(t);
            f_1 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, f_1, z_15);
          }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm f_16 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = h_93(t);
      t = f_16(t);
      return(t);
    }
    t = try_1_0(h_2, t);
    return(t);
  }
  t = f_16(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  t = a_103(t);
  {
    ATerm j_2 (ATerm t)
    {
      t = topdown_1_0(a_103, t);
      return(t);
    }
    t = SRTS_all(j_2, t);
  }
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm g_16 = NULL,h_16 = NULL;
    g_16 = t;
    t = SSL_explode_term(g_16);
    if(match_cons(t, sym__2))
      {
        ATerm q_13 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm r_13 = ATgetArgument(t, 1);
          if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
            {
              h_16 = ATgetFirst((ATermList) r_13);
              {
                ATerm u_13 = (ATerm) ATgetNext((ATermList) r_13);
                if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = h_16;
    return(t);
  }
  t = try_1_0(k_2, t);
  {
    ATerm l_2 (ATerm t)
    {
      t = repeat_1_0(Ensugar_0_0, t);
      t = try_1_0(EnsugarOnce_0_0, t);
      return(t);
    }
    t = topdown_1_0(l_2, t);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            i_16 = ATgetArgument(t, 0);
            {
              ATerm v_13 = ATgetArgument(t, 1);
              if(match_cons(v_13, sym_Seq_2))
                {
                  j_16 = ATgetArgument(v_13, 0);
                  k_16 = ATgetArgument(v_13, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, i_16, j_16), k_16);
        return(t);
      }
      t = innermost_1_0(m_2, t);
      t = stratego_parenthesize_0_0(t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm p_62 (ATerm), ATerm q_62 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  l_16 = t;
  t = m_16;
  t = p_62(t);
  o_16 = t;
  t = n_16;
  t = q_62(t);
  p_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_16, p_16), l_16);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  u_16 = t;
  t = term_u_7;
  t = whoami_0_0(t);
  v_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_16;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm y_16 = NULL,z_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_16 = ATgetFirst((ATermList) t);
            z_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_16;
        {
          ATerm n_2 (ATerm t)
          {
            t = z_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  d_17 = t;
  t = SSL_explode_term(d_17);
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_17;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm z_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_17, t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = z_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_80(t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_17;
  {
    ATerm p_2 (ATerm t)
    {
      t = g_17;
      return(t);
    }
    t = at_end_1_0(p_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm q_2 (ATerm t)
  {
    ATerm j_17 = NULL;
    j_17 = t;
    t = SSL_explode_string(j_17);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm k_17 = NULL;
    k_17 = t;
    t = SSL_explode_string(k_17);
    return(t);
  }
  t = _2_0(q_2, r_2, t);
  t = conc_0_0(t);
  i_17 = t;
  t = SSL_implode_string(i_17);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      q_17 = t;
      t = SSL_is_string(q_17);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_2, t);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
              u_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_17 = ATgetArgument(t, 0);
                  t = v_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_17 = ATgetArgument(t, 0);
                      t = v_17;
                      {
                        ATerm i_14 = t;
                        int j_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_14);
                          }
                        else
                          {
                            t = i_14;
                            {
                              ATerm w_2 (ATerm t)
                              {
                                t = term_k_14;
                                return(t);
                              }
                              t = debug_1_0(w_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm a_18 = NULL,b_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_17 = ATgetArgument(t, 0);
                          w_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_17;
                      t = eval_config_0_0(t);
                      a_18 = t;
                      t = w_17;
                      t = eval_config_0_0(t);
                      b_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_18, b_18);
                      t = conc_strings_0_0(t);
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
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_18);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm f_18 = NULL;
      t = eval_config_0_0(t);
      f_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_18, f_18);
      t = f_18;
      return(t);
    }
    t = try_1_0(y_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm g_18 = NULL,h_18 = NULL;
    g_18 = t;
    t = term_l_14;
    t = get_config_0_0(t);
    h_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_18, term_o_14);
    t = geq_0_0(t);
    t = g_18;
    t = t_100(t);
    return(t);
  }
  t = try_1_0(c_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_14 = ATgetArgument(t, 0);
        if(match_cons(q_14, sym_Stream_1))
          {
            i_18 = ATgetArgument(q_14, 0);
          }
        else
          _fail(t);
        j_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(i_18, j_18);
    k_18 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), k_18);
    l_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_18);
    return(t);
  }
  t = WriteToFile_1_0(e_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_18, term_r_14);
  t = open_stream_0_0(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, n_18);
  t = u_90(t);
  t = fclose_0_0(t);
  t = n_18;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_14 = ATgetArgument(t, 0);
        if(match_cons(x_14, sym_Stream_1))
          {
            p_18 = ATgetArgument(x_14, 0);
          }
        else
          _fail(t);
        q_18 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(p_18, q_18);
    r_18 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_18);
    return(t);
  }
  t = WriteToFile_1_0(g_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                t_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(j_3, t);
          ;
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          t = term_c_15;
          t_18 = t;
        }
      return(t);
    }
    t = _2_0(h_3, _id, t);
    t = s_18;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          t = not_null(t_18);
          return(t);
        }
        t = split_2_0(m_3, _id, t);
        return(t);
      }
      t = _2_0(_id, l_3, t);
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm o_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(o_3, t);
              return(t);
            }
            t = _2_0(n_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  u_18 = t;
  t = dtime_0_0(t);
  t = u_18;
  t = y_76(t);
  v_18 = t;
  t = dtime_0_0(t);
  w_18 = t;
  t = v_18;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_18), (ATerm) ATmakeAppl(sym_Runtime_1, w_18)), y_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_19 (ATerm g_19, ATerm t)
  {
    t = SSL_fclose(g_19);
    return(t);
  }
  ATerm j_19 = NULL,k_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_19 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_19);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = f_15;
            t = m_19(k_19, t);
          }
      }
    }
  else
    {
      t = m_19(k_19, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  t = g_90(t);
  o_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_19), o_19));
  t = n_19;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_19 = NULL;
  t = SSL_stdin_stream();
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_stdout_stream();
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_19 = NULL;
  t = SSL_stderr_stream();
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_19);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      ATerm o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,d_2 = NULL;
        r_1 = t;
        t = SSL_explode_term(r_1);
        if(match_cons(t, sym__2))
          {
            ATerm r_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_15 = ATgetArgument(t, 1);
              if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
                {
                  d_2 = ATgetFirst((ATermList) s_15);
                  {
                    ATerm t_15 = (ATerm) ATgetNext((ATermList) s_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
              ATerm p_3 (ATerm t)
              {
                ATerm z_19 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_19;
                return(t);
              }
              t = _2_0(p_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_19 = ATgetArgument(t, 0);
                  x_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_19, x_19);
              y_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_19);
              ;
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              {
                ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
                ATerm r_3 (ATerm t)
                {
                  ATerm d_20 = NULL;
                  d_20 = t;
                  t = SSL_is_string(d_20);
                  return(t);
                }
                t = _2_0(r_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_20 = ATgetArgument(t, 0);
                    b_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_20, b_20);
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL;
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, term_c_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm s_3 (ATerm t)
        {
          t = term_d_16;
          return(t);
        }
        t = debug_1_0(s_3, t);
        _fail(t);
      }
    }
  e_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_20);
  f_20 = t;
  t = e_20;
  t = fclose_0_0(t);
  t = f_20;
  return(t);
}
ATerm split_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  t = w_78(t);
  k_20 = t;
  t = j_20;
  t = x_78(t);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  {
    ATerm e_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              n_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(t_3, t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = e_16;
        t = term_s_16;
        n_20 = t;
      }
    t = m_20;
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(n_20);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, u_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm p_20 = NULL;
    p_20 = t;
    if(match_string(t, "-k"))
      {
        t = p_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = p_20;
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL;
    q_20 = t;
    t = SSL_string_to_int(q_20);
    r_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_20);
    t = q_20;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm t_20 = NULL;
        t_20 = t;
        if(match_string(t, "-S"))
          {
            t = t_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = t_20;
          }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_b_17;
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_c_17;
        return(t);
      }
      t = Option_3_0(z_3, b_4, c_4, t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm u_20 = NULL,v_20 = NULL;
              u_20 = t;
              t = SSL_string_to_int(u_20);
              v_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, u_20);
              return(t);
            }
            ATerm p_4 (ATerm t)
            {
              t = term_n_17;
              return(t);
            }
            t = ArgOption_3_0(f_4, j_4, p_4, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm v_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_o_17;
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_p_17;
                return(t);
              }
              t = Option_3_0(v_4, w_4, y_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm x_20 = NULL;
    x_20 = t;
    if(match_string(t, "-o"))
      {
        t = x_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = x_20;
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm y_20 = NULL;
    y_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_20);
    t = (ATerm) ATmakeAppl(sym_Output_1, y_20);
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = ArgOption_3_0(e_5, g_5, p_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm q_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_17;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = Option_3_0(q_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  b_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_21;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_21 = ATgetFirst((ATermList) t);
          d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_21 = ATgetFirst((ATermList) t);
          f_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_21;
      t = i_0(t);
      t = e_21;
      t = k_0(t);
      j_21 = t;
      t = (ATerm) ATinsert(CheckATermList(f_21), j_21);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm l_21 = NULL;
    l_21 = t;
    if(match_string(t, "-i"))
      {
        t = l_21;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = l_21;
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm m_21 = NULL;
    m_21 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_21);
    t = (ATerm) ATmakeAppl(sym_Input_1, m_21);
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_7;
  t = whoami_0_0(t);
  n_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), n_21));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_86(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm q_21 = NULL,r_21 = NULL,u_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_21 = ATgetFirst((ATermList) t);
            r_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_21;
        t = foldr_2_0(k_86, l_86, t);
        u_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_21, u_21);
        t = l_86(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = SSL_explode_term(v_21);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_21;
  t = foldr_2_0(i_84, j_84, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = times_0_0(t);
  {
    ATerm y_5 (ATerm t)
    {
      t = term_a_17;
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm y_21 = NULL,z_21 = NULL;
      if(match_cons(t, sym__2))
        {
          y_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(y_21, z_21);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = i_19;
            t = SSL_addr(y_21, z_21);
          }
      }
      return(t);
    }
    t = crush_2_0(y_5, a_6, t);
    x_21 = t;
    t = SSL_TicksToSeconds(x_21);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_22;
        if((j_22 != t))
          {
            _fail(t);
          }
        t = i_22;
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = s_19;
        t = i_22;
        {
          ATerm v_19 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_22, k_22);
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = v_19;
              t = SSL_gtr(j_22, k_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm n_22 = NULL,o_22 = NULL;
    n_22 = t;
    t = term_l_14;
    t = get_config_0_0(t);
    o_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_22, term_o_20);
    t = geq_0_0(t);
    t = n_22;
    t = s_100(t);
    return(t);
  }
  t = try_1_0(b_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL;
    t = run_time_0_0(t);
    q_22 = t;
    t = term_u_7;
    t = whoami_0_0(t);
    r_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_22), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_22));
    t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), q_22), term_w_20), r_22));
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
ATerm need_help_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm a_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = a_21;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm i_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = i_21;
              {
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(p_21);
                  }
                else
                  {
                    t = o_21;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_6, t);
      }
    }
  t = w_77(t);
  return(t);
}
ATerm map_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm t_22 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = Cons_2_0(u_79, t_22, t);
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_22 = ATgetFirst((ATermList) t);
      w_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_23 = NULL,b_23 = NULL;
        t = w_22;
        t = g_0(t);
        a_23 = t;
        t = v_22;
        t = f_0(t);
        b_23 = t;
        t = w_22;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_23), b_23);
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
      t = term_u_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  c_23 = t;
  t = d_23;
  t = e_76(t);
  e_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_23), c_23);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm k_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(k_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_c_22;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm j_23 = NULL;
      j_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, j_23), term_d_22);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(l_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_23);
  k_23 = t;
  t = l_23;
  t = f_76(t);
  m_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, m_23), k_23);
  return(t);
}
ATerm fetch_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm r_23 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_80, _id, t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = Cons_2_0(_id, r_23, t);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  t = fetch_1_0(y_91, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_22 = ATgetFirst((ATermList) t);
                ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_23;
          }
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATinsert(ATempty, t_23);
      }
    u_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_23);
    t = t_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_87(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = p_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_23;
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        t = term_h_23;
        return(t);
      }
      t = Option_3_0(m_6, n_6, s_6, t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = u_22;
      {
        ATerm t_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_23;
          return(t);
        }
        ATerm w_6 (ATerm t)
        {
          t = term_o_23;
          return(t);
        }
        t = Option_3_0(t_6, u_6, w_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__3))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      c_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_23 = ATgetArgument(t, 0);
            ATerm v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_24, b_24);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    d_24 = t;
    t = SSL_table_put(a_24, b_24, (ATerm) ATinsert(CheckATermList(d_24), c_24));
    t = (ATerm) ATmakeAppl(sym__3, a_24, b_24, c_24);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm i_24 = NULL;
  t = term_u_7;
  t = d_93(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_23, term_x_23, i_24);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_24;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm p_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_24 = ATgetFirst((ATermList) t);
          m_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_24;
      t = a_0(t);
      t = term_u_7;
      t = b_0(t);
      p_24 = t;
      t = (ATerm) ATinsert(CheckATermList(m_24), p_24);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm r_24 = NULL;
    r_24 = t;
    if(match_string(t, "--help"))
      {
        t = r_24;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = r_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = r_24;
          }
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_y_23;
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_z_23;
    return(t);
  }
  t = Option_3_0(x_6, z_6, a_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  x_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_24 = ATgetFirst((ATermList) t);
      u_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  s_24 = t;
  t = t_24;
  t = y_63(t);
  v_24 = t;
  t = u_24;
  t = z_63(t);
  w_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_24), v_24), s_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  {
    ATerm b_7 (ATerm t)
    {
      t = term_e_24;
      t = b_93(t);
      return(t);
    }
    t = try_1_0(b_7, t);
    t = e_25;
    {
      ATerm c_7 (ATerm t)
      {
        ATerm f_25 = NULL;
        f_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, f_25);
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_24);
              }
            else
              {
                t = h_24;
                t = b_93(t);
                t = Cons_2_0(_id, e_7, t);
              }
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            {
              ATerm h_25 = NULL,i_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_25 = ATgetFirst((ATermList) t);
                  i_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATmakeAppl(sym_Undefined_1, h_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_7, e_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_25;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_93(t);
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          {
            ATerm q_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(y_24);
              }
            else
              {
                t = q_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm h_7 (ATerm t)
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_25 = NULL;
            v_25 = t;
            {
              ATerm b_25 = t;
              int c_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_25;
                  {
                    ATerm d_25 = t;
                    int g_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_h_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(g_25);
                      }
                    else
                      {
                        t = d_25;
                        {
                          ATerm i_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(i_7, t);
                        }
                      }
                    t = v_25;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(c_25);
                }
              else
                {
                  t = b_25;
                  t = term_z_22;
                  t = get_config_0_0(t);
                  t = v_25;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm j_7 (ATerm t)
              {
                ATerm k_7 (ATerm t)
                {
                  p_25 = t;
                  return(t);
                }
                t = Undefined_1_0(k_7, t);
                return(t);
              }
              t = option_defined_1_0(j_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), term_j_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(h_7, t);
      q_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm y_6 = NULL;
  t = parse_options_1_0(y_77, t);
  y_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_6);
  t = y_6;
  t = a_78(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_77, t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_77(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(n_77, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_7, p_77, q_77, m_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      ATerm y_25 = NULL,z_25 = NULL;
      y_25 = t;
      t = term_d_19;
      t = get_config_0_0(t);
      z_25 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, z_25));
      t = y_25;
      return(t);
    }
    t = if_verbose2_1_0(o_7, t);
    return(t);
  }
  t = iowrap_4_0(h_77, i_77, j_77, n_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t)
{
  t = iowrap_3_0(f_77, g_77, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    t = _2_0(_id, c_77, t);
    return(t);
  }
  t = iowrap_2_0(p_7, _fail, t);
  return(t);
}
ATerm stratego_ensugar_0_0 (ATerm t)
{
  t = iowrap_1_0(Stratego_Ensugar_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_ensugar_0_0(t);
  return(t);
}
