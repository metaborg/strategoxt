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
ATerm term_s_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_w_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_m_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_g_21;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_f_16;
ATerm term_x_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_10);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Some_1, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__3, term_f_24, term_i_24, term_b_9);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm gen_none_0_0 (ATerm);
ATerm gen_non_assoc_0_0 (ATerm);
ATerm gen_right_0_0 (ATerm);
ATerm GenRightAssoc_0_0 (ATerm);
ATerm GenLeftAssoc_0_0 (ATerm);
ATerm assert_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm GenGreaterThan_0_0 (ATerm);
ATerm for_each_pair_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm gen_left_0_0 (ATerm);
ATerm init_parenthesation_rules_0_0 (ATerm);
ATerm parenthesize_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm stratego_parenthesize_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm m_103 (ATerm), ATerm);
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
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm is_double_quoted_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_chars_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm is_double_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_91 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm j_77 (ATerm), ATerm);
ATerm stratego_ensugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      n_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      q_0 = ATgetArgument(t, 0);
      {
        ATerm v_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm y_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(s_0, (ATerm) ATempty);
  t_0 = t;
  t = SSL_mkterm(q_0, (ATerm) ATempty);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, u_0);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = rewrite_1_0(b_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm a_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("h_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_b_9;
  }
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_0);
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      {
        ATerm c_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_0);
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      {
        ATerm d_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(a_1, (ATerm) ATempty);
  b_1 = t;
  t = SSL_mkterm(z_0, (ATerm) ATempty);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, e_1);
  {
    ATerm f_0 (ATerm t)
    {
      t = term_e_9;
      return(t);
    }
    t = rewrite_1_0(f_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm g_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_9) != ATmakeSymbol("m_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_b_9;
  }
  return(t);
}
ATerm rewrite_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,d_1 = NULL;
  l_1 = t;
  t = term_b_9;
  t = f_88(t);
  m_1 = t;
  t = SSL_table_get(m_1, l_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_1 = ATgetFirst((ATermList) t);
      {
        ATerm i_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      {
        ATerm j_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      {
        ATerm m_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm(r_1, (ATerm) ATempty);
  s_1 = t;
  t = SSL_mkterm(q_1, (ATerm) ATempty);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, t_1);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_n_9;
      return(t);
    }
    t = rewrite_1_0(p_0, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm o_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) o_9) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_b_9;
  }
  return(t);
}
ATerm at_last_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, r_0, t);
        t = d_81(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = Cons_2_0(_id, u_1, t);
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  ATerm x_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_1 != NULL) && (v_1 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_1 = ATgetFirst((ATermList) t);
        {
          ATerm r_9 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(x_0, t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, not_null(v_1));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  x_1 = t;
  y_1 = t;
  t = SSL_explode_term(y_1);
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            b_2 = ATgetFirst((ATermList) s_9);
            c_2 = (ATerm) ATgetNext((ATermList) s_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_2;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_2;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm o_2 = NULL;
      o_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_1, o_2);
      t = RightAssoc_0_0(t);
      t = o_2;
      t = g_106(t);
      return(t);
    }
    t = try_1_0(y_0, t);
    i_2 = t;
    t = e_2;
    {
      ATerm c_1 (ATerm t)
      {
        ATerm s_2 = NULL;
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, s_2);
        t = GreaterThan_0_0(t);
        t = s_2;
        t = g_106(t);
        return(t);
      }
      t = map_1_0(c_1, t);
      l_2 = t;
      t = f_2;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm t_2 = NULL;
          t_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_1, t_2);
          t = LeftAssoc_0_0(t);
          t = t_2;
          t = g_106(t);
          return(t);
        }
        t = try_1_0(f_1, t);
        m_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATempty, m_2));
        t = conc_0_0(t);
        n_2 = t;
        t = SSL_mkterm(a_2, (ATerm) ATinsert(CheckATermList(n_2), i_2));
      }
    }
  }
  return(t);
}
ATerm gen_none_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm t_9 = ATgetArgument(t, 1);
        if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
          {
            ATerm u_9 = ATgetFirst((ATermList) t_9);
            if(match_cons(u_9, sym__2))
              {
                ATerm v_9 = ATgetArgument(u_9, 0);
                if(!(match_cons(v_9, sym_None_0)))
                  _fail(t);
                v_2 = ATgetArgument(u_9, 1);
              }
            else
              _fail(t);
            x_2 = (ATerm) ATgetNext((ATermList) t_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  {
    ATerm g_1 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(g_1, t);
    t = (ATerm) ATmakeAppl(sym__2, v_2, u_2);
    t = conc_0_0(t);
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_2, x_2);
  }
  return(t);
}
ATerm gen_non_assoc_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            ATerm x_9 = ATgetFirst((ATermList) w_9);
            if(match_cons(x_9, sym__2))
              {
                ATerm y_9 = ATgetArgument(x_9, 0);
                if(match_cons(y_9, sym_Some_1))
                  {
                    ATerm c_10 = ATgetArgument(y_9, 0);
                    if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                b_3 = ATgetArgument(x_9, 1);
              }
            else
              _fail(t);
            d_3 = (ATerm) ATgetNext((ATermList) w_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, b_3);
  {
    ATerm h_1 (ATerm t)
    {
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(h_1, t);
    t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
    {
      ATerm i_1 (ATerm t)
      {
        t = GenGreaterThan_0_0(t);
        t = GenLeftAssoc_0_0(t);
        t = GenRightAssoc_0_0(t);
        return(t);
      }
      t = for_each_pair_1_0(i_1, t);
      t = (ATerm) ATmakeAppl(sym__2, b_3, a_3);
      t = conc_0_0(t);
      f_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_3, d_3);
    }
  }
  return(t);
}
ATerm gen_right_0_0 (ATerm t)
{
  ATerm i_3 = NULL,k_3 = NULL,q_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
          {
            ATerm f_10 = ATgetFirst((ATermList) e_10);
            if(match_cons(f_10, sym__2))
              {
                ATerm g_10 = ATgetArgument(f_10, 0);
                if(match_cons(g_10, sym_Some_1))
                  {
                    ATerm h_10 = ATgetArgument(g_10, 0);
                    if((ATgetSymbol((ATermAppl) h_10) != ATmakeSymbol("right", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                k_3 = ATgetArgument(f_10, 1);
              }
            else
              _fail(t);
            q_3 = (ATerm) ATgetNext((ATermList) e_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_3, k_3);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, i_3, k_3);
  {
    ATerm j_1 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(j_1, t);
    t = (ATerm) ATmakeAppl(sym__2, k_3, i_3);
    t = conc_0_0(t);
    r_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_3, q_3);
  }
  return(t);
}
ATerm GenRightAssoc_0_0 (ATerm t)
{
  ATerm w_3 = NULL,a_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(w_3, (ATerm) ATempty);
  d_4 = t;
  t = SSL_mkterm(a_4, (ATerm) ATempty);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_4, e_4), term_k_10);
  {
    ATerm k_1 (ATerm t)
    {
      t = term_n_9;
      return(t);
    }
    t = assert_1_0(k_1, t);
    t = (ATerm) ATmakeAppl(sym__2, w_3, a_4);
  }
  return(t);
}
ATerm GenLeftAssoc_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(g_4, (ATerm) ATempty);
  i_4 = t;
  t = SSL_mkterm(h_4, (ATerm) ATempty);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_4, k_4), term_m_10);
  {
    ATerm p_1 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = assert_1_0(p_1, t);
    t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
  }
  return(t);
}
ATerm assert_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_88(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_4, l_4, m_4);
  t = table_push_0_0(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_4 = ATgetFirst((ATermList) t);
        q_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_4), (ATerm) ATinsert(CheckATermList(o_4), l_4)));
    t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  }
  return(t);
}
ATerm GenGreaterThan_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(r_4, (ATerm) ATempty);
  t_4 = t;
  t = SSL_mkterm(s_4, (ATerm) ATempty);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_4, u_4), term_r_10);
  {
    ATerm z_1 (ATerm t)
    {
      t = term_e_9;
      return(t);
    }
    t = assert_1_0(z_1, t);
    t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  }
  return(t);
}
ATerm for_each_pair_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm a_5 = NULL;
      a_5 = t;
      t = z_4;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm b_5 = NULL;
          b_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
          t = v_79(t);
          return(t);
        }
        t = map_1_0(h_2, t);
      }
      return(t);
    }
    t = map_1_0(g_2, t);
  }
  return(t);
}
ATerm gen_left_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      {
        ATerm s_10 = ATgetArgument(t, 1);
        if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
          {
            ATerm u_10 = ATgetFirst((ATermList) s_10);
            if(match_cons(u_10, sym__2))
              {
                ATerm v_10 = ATgetArgument(u_10, 0);
                if(match_cons(v_10, sym_Some_1))
                  {
                    ATerm w_10 = ATgetArgument(v_10, 0);
                    if((ATgetSymbol((ATermAppl) w_10) != ATmakeSymbol("left", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                d_5 = ATgetArgument(u_10, 1);
              }
            else
              _fail(t);
            f_5 = (ATerm) ATgetNext((ATermList) s_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, d_5);
  t = for_each_pair_1_0(GenLeftAssoc_0_0, t);
  t = (ATerm) ATmakeAppl(sym__2, c_5, d_5);
  {
    ATerm j_2 (ATerm t)
    {
      t = GenGreaterThan_0_0(t);
      t = GenLeftAssoc_0_0(t);
      t = GenRightAssoc_0_0(t);
      return(t);
    }
    t = for_each_pair_1_0(j_2, t);
    t = (ATerm) ATmakeAppl(sym__2, d_5, c_5);
    t = conc_0_0(t);
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_5, f_5);
  }
  return(t);
}
ATerm init_parenthesation_rules_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_5);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = gen_left_0_0(t);
          ;
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
          {
            ATerm a_11 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = gen_right_0_0(t);
                ;
                LocalPopChoice(b_11);
              }
            else
              {
                t = a_11;
                {
                  ATerm c_11 = t;
                  int d_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = gen_non_assoc_0_0(t);
                      ;
                      LocalPopChoice(d_11);
                    }
                  else
                    {
                      t = c_11;
                      t = gen_none_0_0(t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = repeat_1_0(p_2, t);
  }
  return(t);
}
ATerm parenthesize_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  t = e_106(t);
  t = init_parenthesation_rules_0_0(t);
  t = j_5;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        t = Disambiguate_1_0(d_106, t);
        return(t);
      }
      t = try_1_0(r_2, t);
      return(t);
    }
    t = bottomup_1_0(q_2, t);
  }
  return(t);
}
ATerm stratego_parenthesize_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm k_5 = NULL;
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym_ParenStrat_1, k_5);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATinsert(ATinsert(ATempty, term_m_11), term_l_11))), (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATinsert(ATempty, term_k_11)));
    return(t);
  }
  t = parenthesize_2_0(w_2, y_2, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = bottomup_1_0(m_103, t);
    return(t);
  }
  t = SRTS_all(e_3, t);
  t = m_103(t);
  return(t);
}
ATerm innermost_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = b_96(t);
      t = innermost_1_0(b_96, t);
      return(t);
    }
    t = try_1_0(h_3, t);
    return(t);
  }
  t = bottomup_1_0(g_3, t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  ATerm j_3 (ATerm t)
  {
    if(((l_5 != NULL) && (l_5 != t)))
      _fail(t);
    else
      l_5 = t;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      if(((l_5 != NULL) && (l_5 != t)))
        _fail(t);
      else
        l_5 = t;
      return(t);
    }
    t = fetch_1_0(m_3, t);
    return(t);
  }
  t = _2_0(j_3, l_3, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_12), term_p_12), term_o_12), term_n_12), term_m_12), term_l_12), term_h_12), term_g_12), term_f_12), term_e_12), term_c_12), term_b_12), term_a_12), term_z_11), term_v_11), term_u_11), term_s_11), term_r_11), term_q_11), term_p_11), term_o_11), term_n_11));
  t = member_0_0(t);
  t = m_5;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm n_5 = NULL;
      n_5 = t;
      t = (ATerm) ATinsert(CheckATermList(n_5), term_r_12);
      return(t);
    }
    t = string_as_chars_1_0(n_3, t);
  }
  return(t);
}
ATerm Op_2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,r_5 = NULL,s_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_Op_2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  o_5 = t;
  t = r_5;
  t = p_65(t);
  z_5 = t;
  t = s_5;
  t = q_65(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, z_5, a_6), o_5);
  return(t);
}
ATerm OpDecl_2_0 (ATerm z_64 (ATerm), ATerm a_65 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_6);
  j_6 = t;
  t = o_6;
  t = z_64(t);
  q_6 = t;
  t = p_6;
  t = a_65(t);
  r_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, q_6, r_6), j_6);
  return(t);
}
ATerm SVar_1_0 (ATerm s_68 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,s_7 = NULL,z_7 = NULL;
  z_7 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_7);
  f_7 = t;
  t = g_7;
  t = s_68(t);
  s_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, s_7), f_7);
  return(t);
}
ATerm Var_1_0 (ATerm j_65 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,m_8 = NULL,o_8 = NULL,p_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_8);
  d_8 = t;
  t = m_8;
  t = j_65(t);
  o_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, o_8), d_8);
  return(t);
}
ATerm VarDec_2_0 (ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,f_9 = NULL,h_9 = NULL,k_9 = NULL,l_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_8 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  w_8 = t;
  t = x_8;
  t = e_71(t);
  h_9 = t;
  t = f_9;
  t = f_71(t);
  k_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, h_9, k_9), w_8);
  return(t);
}
ATerm SDef_3_0 (ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,d_10 = NULL,j_10 = NULL,p_10 = NULL,t_10 = NULL,x_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
      d_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_10);
  z_9 = t;
  t = a_10;
  t = i_71(t);
  j_10 = t;
  t = b_10;
  t = j_71(t);
  p_10 = t;
  t = d_10;
  t = k_71(t);
  t_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, j_10, p_10, t_10), z_9);
  return(t);
}
ATerm RDef_3_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,j_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_RDef_3))
    {
      f_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      j_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  e_11 = t;
  t = f_11;
  t = o_67(t);
  t_11 = t;
  t = h_11;
  t = p_67(t);
  w_11 = t;
  t = j_11;
  t = q_67(t);
  x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, t_11, w_11, x_11), e_11);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  d_12 = t;
  t = i_12;
  t = d_71(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, j_12), d_12);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_12;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(x_12), term_t_12), term_s_12);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_12), term_s_12), term_s_12);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_12), term_u_12), term_s_12);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm v_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm o_3 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_3, t);
      }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = v_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, e_13);
  t = is_quoted_chars_0_0(t);
  t = e_13;
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_13 = NULL,r_13 = NULL;
      q_13 = t;
      if(match_cons(t, sym_Str_1))
        {
          r_13 = ATgetArgument(t, 0);
          {
            ATerm t_13 = NULL;
            t = r_13;
            {
              ATerm p_3 (ATerm t)
              {
                ATerm d_13 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_13;
                  }
                t = escape_chars_0_0(t);
                t = double_quote_chars_0_0(t);
                return(t);
              }
              t = string_as_chars_1_0(p_3, t);
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, t_13);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              r_13 = ATgetArgument(t, 0);
              {
                ATerm d_2 = NULL;
                t = SSL_real_to_string(r_13);
                d_2 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, d_2);
              }
            }
          else
            {
              ATerm k_2 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  r_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(r_13);
              k_2 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, k_2);
            }
        }
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm h_13 = t;
              int i_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(i_13);
                }
              else
                {
                  t = h_13;
                  {
                    ATerm j_13 = t;
                    int k_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(k_13);
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm l_13 = t;
                          int m_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
                              ;
                              LocalPopChoice(m_13);
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm n_13 = t;
                                int o_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(o_13);
                                  }
                                else
                                  {
                                    t = n_13;
                                    {
                                      ATerm p_13 = t;
                                      int s_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(s_13);
                                        }
                                      else
                                        {
                                          t = p_13;
                                          {
                                            ATerm u_13 = t;
                                            int v_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(v_13);
                                              }
                                            else
                                              {
                                                t = u_13;
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
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_13), z_13), (ATerm) ATinsert(ATempty, z_13));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, a_14);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  t = SSL_explode_string(b_14);
  t = j_103(t);
  c_14 = t;
  t = SSL_implode_string(c_14);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_14;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_14;
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          t = h_14;
          t = last_0_0(t);
        }
    }
  else
    {
      t = h_14;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_chars_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((n_14 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      p_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_14;
  t = last_0_0(t);
  if((n_14 != t))
    {
      _fail(t);
    }
  t = m_14;
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm q_14 = NULL;
    q_14 = t;
    t = SSL_explode_string(q_14);
    return(t);
  }
  t = _2_0(_id, s_3, t);
  t = is_quoted_chars_0_0(t);
  return(t);
}
ATerm is_double_quoted_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_12, r_14);
  t = is_quoted_0_0(t);
  t = r_14;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
      c_15 = ATgetArgument(t, 2);
      t = c_15;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, e_15, f_15);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_15 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          c_15 = ATgetArgument(t, 2);
          t = c_15;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, e_15, f_15);
        }
      else
        {
          ATerm c_3 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              e_15 = ATgetArgument(t, 0);
              f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_15;
          {
            ATerm d_14 = t;
            if((PushChoice() == 0))
              {
                t = is_double_quoted_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_14;
              }
            t = e_15;
            t = double_quote_0_0(t);
            c_3 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, c_3, f_15);
          }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm l_15 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      t = p_93(t);
      t = l_15(t);
      return(t);
    }
    t = try_1_0(t_3, t);
    return(t);
  }
  t = l_15(t);
  return(t);
}
ATerm topdown_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  t = l_103(t);
  {
    ATerm x_3 (ATerm t)
    {
      t = topdown_1_0(l_103, t);
      return(t);
    }
    t = SRTS_all(x_3, t);
  }
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL;
    m_15 = t;
    t = SSL_explode_term(m_15);
    if(match_cons(t, sym__2))
      {
        ATerm e_14 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) e_14) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm f_14 = ATgetArgument(t, 1);
          if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
            {
              n_15 = ATgetFirst((ATermList) f_14);
              {
                ATerm i_14 = (ATerm) ATgetNext((ATermList) f_14);
                if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = n_15;
    return(t);
  }
  t = try_1_0(y_3, t);
  {
    ATerm z_3 (ATerm t)
    {
      t = repeat_1_0(Ensugar_0_0, t);
      t = try_1_0(EnsugarOnce_0_0, t);
      return(t);
    }
    t = topdown_1_0(z_3, t);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            o_15 = ATgetArgument(t, 0);
            {
              ATerm j_14 = ATgetArgument(t, 1);
              if(match_cons(j_14, sym_Seq_2))
                {
                  p_15 = ATgetArgument(j_14, 0);
                  q_15 = ATgetArgument(j_14, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, o_15, p_15), q_15);
        return(t);
      }
      t = innermost_1_0(b_4, t);
      t = stratego_parenthesize_0_0(t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_15);
  r_15 = t;
  t = s_15;
  t = w_62(t);
  u_15 = t;
  t = t_15;
  t = x_62(t);
  v_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_15, v_15), r_15);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  a_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), a_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = z_15;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm d_16 = NULL,e_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_16 = ATgetFirst((ATermList) t);
            e_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_16;
        {
          ATerm c_4 (ATerm t)
          {
            t = e_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  t = SSL_explode_term(i_16);
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm k_16 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_16, t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_80(t);
      }
    return(t);
  }
  t = k_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_16;
  {
    ATerm f_4 (ATerm t)
    {
      t = l_16;
      return(t);
    }
    t = at_end_1_0(f_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  ATerm j_4 (ATerm t)
  {
    ATerm o_16 = NULL;
    o_16 = t;
    t = SSL_explode_string(o_16);
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm p_16 = NULL;
    p_16 = t;
    t = SSL_explode_string(p_16);
    return(t);
  }
  t = _2_0(j_4, p_4, t);
  t = conc_0_0(t);
  n_16 = t;
  t = SSL_implode_string(n_16);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL;
      v_16 = t;
      t = SSL_is_string(v_16);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_4, t);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
              z_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_17 = ATgetArgument(t, 0);
                  t = a_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_17 = ATgetArgument(t, 0);
                      t = a_17;
                      {
                        ATerm b_15 = t;
                        int g_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_15);
                          }
                        else
                          {
                            t = b_15;
                            {
                              ATerm w_4 (ATerm t)
                              {
                                t = term_h_15;
                                return(t);
                              }
                              t = debug_1_0(w_4, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm f_17 = NULL,g_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_17 = ATgetArgument(t, 0);
                          b_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_17;
                      t = eval_config_0_0(t);
                      f_17 = t;
                      t = b_17;
                      t = eval_config_0_0(t);
                      g_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
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
  ATerm j_17 = NULL;
  j_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_17);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm k_17 = NULL;
      t = eval_config_0_0(t);
      k_17 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_17, k_17);
      t = k_17;
      return(t);
    }
    t = try_1_0(y_4, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm l_17 = NULL,m_17 = NULL;
    l_17 = t;
    t = term_i_15;
    t = get_config_0_0(t);
    m_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_17, term_j_15);
    t = geq_0_0(t);
    t = l_17;
    t = e_101(t);
    return(t);
  }
  t = try_1_0(e_5, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_15 = ATgetArgument(t, 0);
        if(match_cons(k_15, sym_Stream_1))
          {
            n_17 = ATgetArgument(k_15, 0);
          }
        else
          _fail(t);
        o_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(n_17, o_17);
    p_17 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), p_17);
    q_17 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, q_17);
    return(t);
  }
  t = WriteToFile_1_0(g_5, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_17, term_x_15);
  t = open_stream_0_0(t);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_17, s_17);
  t = c_91(t);
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm y_15 = ATgetArgument(t, 0);
        if(match_cons(y_15, sym_Stream_1))
          {
            u_17 = ATgetArgument(y_15, 0);
          }
        else
          _fail(t);
        v_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(u_17, v_17);
    w_17 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
    return(t);
  }
  t = WriteToFile_1_0(p_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(t_5, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = term_f_16;
          if(((y_17 != NULL) && (y_17 != t)))
            _fail(t);
          else
            y_17 = t;
        }
      return(t);
    }
    t = _2_0(q_5, _id, t);
    t = x_17;
    {
      ATerm u_5 (ATerm t)
      {
        ATerm v_5 (ATerm t)
        {
          t = not_null(y_17);
          return(t);
        }
        t = split_2_0(v_5, _id, t);
        return(t);
      }
      t = _2_0(_id, u_5, t);
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              ATerm x_5 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(x_5, t);
              return(t);
            }
            t = _2_0(w_5, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
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
ATerm apply_strategy_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  z_17 = t;
  t = dtime_0_0(t);
  t = z_17;
  t = f_77(t);
  a_18 = t;
  t = dtime_0_0(t);
  b_18 = t;
  t = a_18;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_18), (ATerm) ATmakeAppl(sym_Runtime_1, b_18)), d_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_18 (ATerm l_18, ATerm t)
  {
    t = SSL_fclose(l_18);
    return(t);
  }
  ATerm o_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_18);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = r_18(p_18, t);
          }
      }
    }
  else
    {
      t = r_18(p_18, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  t = o_90(t);
  t_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_18), t_18));
  t = s_18;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_stdin_stream();
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_stdout_stream();
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  t = SSL_stderr_stream();
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_18);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      ATerm t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,v_3 = NULL;
        u_3 = t;
        t = SSL_explode_term(u_3);
        if(match_cons(t, sym__2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_16 = ATgetArgument(t, 1);
              if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
                {
                  v_3 = ATgetFirst((ATermList) y_16);
                  {
                    ATerm c_17 = (ATerm) ATgetNext((ATermList) y_16);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = u_16;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
              ATerm y_5 (ATerm t)
              {
                ATerm e_19 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_19;
                return(t);
              }
              t = _2_0(y_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_19 = ATgetArgument(t, 0);
                  c_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_19, c_19);
              d_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_19);
              ;
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
                ATerm b_6 (ATerm t)
                {
                  ATerm i_19 = NULL;
                  i_19 = t;
                  t = SSL_is_string(i_19);
                  return(t);
                }
                t = _2_0(b_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_19 = ATgetArgument(t, 0);
                    g_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_19, g_19);
                h_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_19 = NULL;
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_19, term_e_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm d_6 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        t = debug_1_0(d_6, t);
        _fail(t);
      }
    }
  j_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_19);
  k_19 = t;
  t = j_19;
  t = fclose_0_0(t);
  t = k_19;
  return(t);
}
ATerm split_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  t = d_79(t);
  p_19 = t;
  t = o_19;
  t = e_79(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, q_19);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(e_6, t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = term_i_18;
        s_19 = t;
      }
    t = r_19;
    {
      ATerm f_6 (ATerm t)
      {
        t = not_null(s_19);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, f_6, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm u_19 = NULL;
    u_19 = t;
    if(match_string(t, "-k"))
      {
        t = u_19;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_19;
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm v_19 = NULL,w_19 = NULL;
    v_19 = t;
    t = SSL_string_to_int(v_19);
    w_19 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_19);
    t = v_19;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_j_18;
    return(t);
  }
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 (ATerm t)
      {
        ATerm y_19 = NULL;
        y_19 = t;
        if(match_string(t, "-S"))
          {
            t = y_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = y_19;
          }
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_18;
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = term_x_18;
        return(t);
      }
      t = Option_3_0(k_6, l_6, m_6, t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = k_18;
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm z_19 = NULL,a_20 = NULL;
              z_19 = t;
              t = SSL_string_to_int(z_19);
              a_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_20);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, z_19);
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_n_19;
              return(t);
            }
            t = ArgOption_3_0(n_6, t_6, u_6, t);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm v_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_t_19;
                return(t);
              }
              ATerm x_6 (ATerm t)
              {
                t = term_x_19;
                return(t);
              }
              t = Option_3_0(v_6, w_6, x_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = b_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm c_20 = NULL;
    c_20 = t;
    if(match_string(t, "-o"))
      {
        t = c_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_20;
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm d_20 = NULL;
    d_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_20);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_20);
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3_0(y_6, z_6, a_7, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm b_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_20;
          return(t);
        }
        ATerm d_7 (ATerm t)
        {
          t = term_p_20;
          return(t);
        }
        t = Option_3_0(b_7, c_7, d_7, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  g_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = g_20;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm o_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_20 = ATgetFirst((ATermList) t);
          i_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_20 = ATgetFirst((ATermList) t);
          k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_20;
      t = i_0(t);
      t = j_20;
      t = k_0(t);
      o_20 = t;
      t = (ATerm) ATinsert(CheckATermList(k_20), o_20);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm q_20 = NULL;
    q_20 = t;
    if(match_string(t, "-i"))
      {
        t = q_20;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = q_20;
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm r_20 = NULL;
    r_20 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_20);
    t = (ATerm) ATmakeAppl(sym_Input_1, r_20);
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = ArgOption_3_0(e_7, h_7, i_7, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = u_20;
      {
        ATerm y_20 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = y_20;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  t = whoami_0_0(t);
  s_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_20));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_86(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm v_20 = NULL,w_20 = NULL,z_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_20 = ATgetFirst((ATermList) t);
            w_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_20;
        t = foldr_2_0(s_86, t_86, t);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, z_20);
        t = t_86(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  t = SSL_explode_term(a_21);
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  t = foldr_2_0(q_84, r_84, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  t = times_0_0(t);
  {
    ATerm j_7 (ATerm t)
    {
      t = term_n_18;
      return(t);
    }
    ATerm k_7 (ATerm t)
    {
      ATerm d_21 = NULL,e_21 = NULL;
      if(match_cons(t, sym__2))
        {
          d_21 = ATgetArgument(t, 0);
          e_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_21, e_21);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = SSL_addr(d_21, e_21);
          }
      }
      return(t);
    }
    t = crush_2_0(j_7, k_7, t);
    c_21 = t;
    t = SSL_TicksToSeconds(c_21);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_21;
        if((o_21 != t))
          {
            _fail(t);
          }
        t = n_21;
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = m_21;
        t = n_21;
        {
          ATerm r_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_21, p_21);
              ;
              LocalPopChoice(u_21);
            }
          else
            {
              t = r_21;
              t = SSL_gtr(o_21, p_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL;
    s_21 = t;
    t = term_i_15;
    t = get_config_0_0(t);
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_21, term_x_21);
    t = geq_0_0(t);
    t = s_21;
    t = d_101(t);
    return(t);
  }
  t = try_1_0(l_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL;
    t = run_time_0_0(t);
    v_21 = t;
    t = term_b_9;
    t = whoami_0_0(t);
    w_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), v_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), w_21));
    t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_22), v_21), term_c_22), w_21));
    return(t);
  }
  t = if_verbose1_1_0(m_7, t);
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
  ATerm e_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = e_22;
      {
        ATerm n_7 (ATerm t)
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm v_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(y_22);
                  }
                else
                  {
                    t = v_22;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_7, t);
      }
    }
  t = d_78(t);
  return(t);
}
ATerm map_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm y_21 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = Cons_2_0(b_80, y_21, t);
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_22 = NULL,g_22 = NULL;
        t = b_22;
        t = g_0(t);
        f_22 = t;
        t = a_22;
        t = e_0(t);
        g_22 = t;
        t = b_22;
        {
          ATerm o_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_22), g_22);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_9;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, p_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  h_22 = t;
  t = i_22;
  t = l_76(t);
  j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_22), h_22);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm q_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(q_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_23;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm n_22 = NULL;
      n_22 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, n_22), term_i_23);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(r_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  o_22 = t;
  t = p_22;
  t = m_76(t);
  q_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_22), o_22);
  return(t);
}
ATerm fetch_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm u_22 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_80, _id, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = Cons_2_0(_id, u_22, t);
      }
    return(t);
  }
  t = u_22(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  t = fetch_1_0(g_92, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  {
    ATerm m_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_23 = ATgetFirst((ATermList) t);
                ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_22;
          }
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, w_22);
      }
    x_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_22);
    t = w_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_l_24;
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = Option_3_0(t_7, u_7, v_7, t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm w_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_24;
          return(t);
        }
        ATerm y_7 (ATerm t)
        {
          t = term_o_24;
          return(t);
        }
        t = Option_3_0(w_7, x_7, y_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__3))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
  {
    ATerm p_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            ATerm v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_23, e_23);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATempty;
      }
    g_23 = t;
    t = SSL_table_put(d_23, e_23, (ATerm) ATinsert(CheckATermList(g_23), f_23));
    t = (ATerm) ATmakeAppl(sym__3, d_23, e_23, f_23);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm l_23 = NULL;
  t = term_b_9;
  t = l_93(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_24, term_y_24, l_23);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_23;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm s_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_23;
      t = a_0(t);
      t = term_b_9;
      t = c_0(t);
      s_23 = t;
      t = (ATerm) ATinsert(CheckATermList(p_23), s_23);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm u_23 = NULL;
    u_23 = t;
    if(match_string(t, "--help"))
      {
        t = u_23;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = u_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = u_23;
          }
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_z_24;
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_c_25;
    return(t);
  }
  t = Option_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  a_24 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_23 = ATgetFirst((ATermList) t);
      x_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  v_23 = t;
  t = w_23;
  t = f_64(t);
  y_23 = t;
  t = x_23;
  t = g_64(t);
  z_23 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_23), y_23), v_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  {
    ATerm e_8 (ATerm t)
    {
      t = term_d_25;
      t = j_93(t);
      return(t);
    }
    t = try_1_0(e_8, t);
    t = g_24;
    {
      ATerm g_8 (ATerm t)
      {
        ATerm h_24 = NULL;
        h_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_24);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_24);
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_25);
              }
            else
              {
                t = g_25;
                t = j_93(t);
                t = Cons_2_0(_id, h_8, t);
              }
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm j_24 = NULL,k_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_24 = ATgetFirst((ATermList) t);
                  k_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_24), (ATerm) ATmakeAppl(sym_Undefined_1, j_24));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_8, h_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_24;
  {
    ATerm i_8 (ATerm t)
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
            ATerm k_25 = t;
            int l_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_25);
              }
            else
              {
                t = k_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_8, t);
    {
      ATerm j_8 (ATerm t)
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_24 = NULL;
            x_24 = t;
            {
              ATerm o_25 = t;
              int p_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_24;
                  {
                    ATerm q_25 = t;
                    int r_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_22;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_25);
                      }
                    else
                      {
                        t = q_25;
                        {
                          ATerm k_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(k_8, t);
                        }
                      }
                    t = x_24;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(p_25);
                }
              else
                {
                  t = o_25;
                  t = term_i_24;
                  t = get_config_0_0(t);
                  t = x_24;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm n_8 (ATerm t)
                {
                  if(((r_24 != NULL) && (r_24 != t)))
                    _fail(t);
                  else
                    r_24 = t;
                  return(t);
                }
                t = Undefined_1_0(n_8, t);
                return(t);
              }
              t = option_defined_1_0(l_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_24)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_24)), term_s_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(j_8, t);
      s_24 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm t)
{
  ATerm f_8 = NULL;
  t = parse_options_1_0(f_78, t);
  f_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_8);
  t = f_8;
  t = h_78(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_78, t);
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(u_77, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_8, w_77, x_77, r_8, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm t_8 (ATerm t)
    {
      ATerm a_25 = NULL,b_25 = NULL;
      a_25 = t;
      t = term_g_21;
      t = get_config_0_0(t);
      b_25 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_25));
      t = a_25;
      return(t);
    }
    t = if_verbose2_1_0(t_8, t);
    return(t);
  }
  t = iowrap_4_0(o_77, p_77, q_77, s_8, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  t = iowrap_3_0(m_77, n_77, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    t = _2_0(_id, j_77, t);
    return(t);
  }
  t = iowrap_2_0(u_8, _fail, t);
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
