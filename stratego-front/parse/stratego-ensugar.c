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
ATerm term_h_26;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_b_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_j_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
void init_constant_terms (void)
{
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Some_1, term_l_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_s_10);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_20);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_s_10);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_s_10);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_s_10);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_s_10);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm p_6 (ATerm j_44, ATerm k_44, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm at_last_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm j_110 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm q_6 (ATerm g_65, ATerm h_65, ATerm f_65, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_6 (ATerm d_65, ATerm e_65, ATerm c_65, ATerm);
ATerm r_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_6 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm);
ATerm w_3 (ATerm);
ATerm y_6 (ATerm n_65, ATerm o_65, ATerm);
ATerm x_3 (ATerm);
ATerm z_6 (ATerm i_65, ATerm j_65, ATerm);
ATerm a_7 (ATerm a_95 (ATerm), ATerm q_43, ATerm o_43, ATerm);
ATerm a_4 (ATerm);
ATerm b_7 (ATerm s_65, ATerm t_65, ATerm);
ATerm c_7 (ATerm r_86 (ATerm), ATerm b_33, ATerm c_33, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm d_7 (ATerm x_64, ATerm y_64, ATerm w_64, ATerm);
ATerm repeat_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm Var_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_18 (ATerm r_17, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm i_110 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm q_5 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm _2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm);
ATerm p_7 (ATerm d_32, ATerm e_32, ATerm);
ATerm q_7 (ATerm h_50, ATerm i_50, ATerm);
ATerm s_7 (ATerm z_97 (ATerm), ATerm i_392, ATerm l_50, ATerm);
ATerm r_7 (ATerm d_50, ATerm e_50, ATerm);
ATerm w_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm x_25 (ATerm q_25, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_7 (ATerm j_50, ATerm);
ATerm u_7 (ATerm f_32, ATerm g_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm o_7 (ATerm q_64, ATerm r_64, ATerm);
ATerm debug_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_8 (ATerm h_57, ATerm i_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_7 (ATerm y_43, ATerm z_43, ATerm x_43, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_7 (ATerm c_42, ATerm d_42, ATerm);
ATerm foldr_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm need_help_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm x_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm Program_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm k_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_100 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm parse_options_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm iowrap_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm);
ATerm r_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL;
  n_0 = t;
  t = term_s_10;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_t_10;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_10), o_0), term_u_10);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_w_10;
  s_0 = t;
  t = SSL_exit(s_0);
  t = n_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,b_0 = NULL,f_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_0);
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      {
        ATerm z_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_0);
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      {
        ATerm a_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  z_0 = t;
  t = SSL_mkterm(x_0, z_0);
  a_1 = t;
  t = (ATerm) ATempty;
  b_1 = t;
  t = SSL_mkterm(w_0, b_1);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, c_1);
  b_0 = t;
  t = term_b_11;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, (ATerm) ATmakeAppl(sym__2, a_1, c_1));
  t = p_6(f_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_s_10;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm j_1 = NULL,m_1 = NULL,p_1 = NULL,r_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL,y_0 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_1);
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      {
        ATerm g_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(j_1);
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      {
        ATerm h_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  t_1 = t;
  t = SSL_mkterm(r_1, t_1);
  v_1 = t;
  t = (ATerm) ATempty;
  w_1 = t;
  t = SSL_mkterm(p_1, w_1);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, y_1);
  y_0 = t;
  t = term_i_11;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATmakeAppl(sym__2, v_1, y_1));
  t = p_6(d_1, y_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_11) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_s_10;
  return(t);
}
ATerm p_6 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm z_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_44, k_44);
  t = x_7(j_44, k_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_1 = ATgetFirst((ATermList) t);
      {
        ATerm k_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm e_2 = NULL,h_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_2);
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      {
        ATerm l_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_2);
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      {
        ATerm m_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  p_2 = t;
  t = SSL_mkterm(o_2, p_2);
  q_2 = t;
  t = (ATerm) ATempty;
  r_2 = t;
  t = SSL_mkterm(n_2, r_2);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, s_2);
  f_1 = t;
  t = term_n_11;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATmakeAppl(sym__2, q_2, s_2));
  t = p_6(g_1, f_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_11) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_s_10;
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_3, t);
        t = y_87(t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = Cons_2_0(_id, t_2, t);
      }
    return(t);
  }
  t = t_2(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm u_2 = NULL,a_3 = NULL;
  ATerm k_3 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_2 != NULL) && (u_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_2 = ATgetFirst((ATermList) t);
        {
          ATerm s_11 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(k_3, t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_3, not_null(u_2));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL,s_3 = NULL,y_3 = NULL,z_3 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL;
  b_3 = t;
  e_3 = t;
  t = SSL_explode_term(e_3);
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
          {
            i_3 = ATgetFirst((ATermList) t_11);
            j_3 = (ATerm) ATgetNext((ATermList) t_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_3;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_3;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_3, i_3);
        t = RightAssoc_0_0(t);
        t = i_3;
        t = d_113(t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
      }
    y_3 = t;
    t = l_3;
    {
      ATerm m_3 (ATerm t)
      {
        ATerm o_4 = NULL;
        o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, o_4);
        t = GreaterThan_0_0(t);
        t = o_4;
        t = d_113(t);
        return(t);
      }
      t = map_1_0(m_3, t);
      z_3 = t;
      t = s_3;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_3, s_3);
            t = LeftAssoc_0_0(t);
            t = s_3;
            t = d_113(t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
          }
        j_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_3, (ATerm) ATinsert(ATempty, j_4));
        t = conc_0_0(t);
        l_4 = t;
        t = (ATerm) ATinsert(CheckATermList(l_4), y_3);
        m_4 = t;
        t = SSL_mkterm(h_3, m_4);
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = bottomup_1_0(j_110, t);
    return(t);
  }
  t = SRTS_all(n_3, t);
  t = j_110(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(s_4, t_4, t);
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(y_4, z_4, t);
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(v_4, w_4, t);
  return(t);
}
ATerm q_6 (ATerm g_65, ATerm h_65, ATerm f_65, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_65, h_65);
  t = c_7(o_3, g_65, h_65, t);
  t = (ATerm) ATmakeAppl(sym__2, h_65, g_65);
  t = conc_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, f_65);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(e_5, j_5, t);
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(c_5, d_5, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(l_5, m_5, t);
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(p_5, t_5, t);
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(n_5, o_5, t);
  return(t);
}
ATerm r_6 (ATerm d_65, ATerm e_65, ATerm c_65, ATerm t)
{
  ATerm b_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_65, e_65);
  t = c_7(p_3, e_65, e_65, t);
  t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
  t = c_7(q_3, d_65, e_65, t);
  t = (ATerm) ATmakeAppl(sym__2, e_65, d_65);
  t = conc_0_0(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, c_65);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(x_5, y_5, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,d_6 = NULL,e_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(z_5, a_6, t);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(m_6, n_6, t);
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(d_6, e_6, t);
  return(t);
}
ATerm x_6 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t)
{
  ATerm v_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_65, b_65);
  t = c_7(r_3, b_65, b_65, t);
  t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
  t = c_7(v_3, a_65, b_65, t);
  t = (ATerm) ATmakeAppl(sym__2, b_65, a_65);
  t = conc_0_0(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, z_64);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm y_6 (ATerm n_65, ATerm o_65, ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  e_7 = t;
  t = (ATerm) ATempty;
  g_7 = t;
  t = SSL_mkterm(n_65, g_7);
  d_8 = t;
  t = (ATerm) ATempty;
  e_8 = t;
  t = SSL_mkterm(o_65, e_8);
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_8, g_8);
  h_8 = t;
  t = term_z_11;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_8, g_8), term_z_11);
  t = a_7(w_3, h_8, i_8, t);
  t = e_7;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm z_6 (ATerm i_65, ATerm j_65, ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL;
  j_8 = t;
  t = (ATerm) ATempty;
  k_8 = t;
  t = SSL_mkterm(i_65, k_8);
  l_8 = t;
  t = (ATerm) ATempty;
  m_8 = t;
  t = SSL_mkterm(j_65, m_8);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_8, n_8);
  p_8 = t;
  t = term_c_12;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_8, n_8), term_c_12);
  t = a_7(x_3, p_8, q_8, t);
  t = j_8;
  return(t);
}
ATerm a_7 (ATerm a_95 (ATerm), ATerm q_43, ATerm o_43, ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,b_9 = NULL,c_9 = NULL,i_9 = NULL;
  r_8 = t;
  t = a_95(t);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_8, q_43, o_43);
  t = y_7(s_8, q_43, o_43, t);
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = term_f_12;
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_f_12);
        t = x_7(s_8, j_9, t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_8 = ATgetFirst((ATermList) t);
        b_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_12;
    c_9 = t;
    t = (ATerm) ATinsert(CheckATermList(b_9), (ATerm) ATinsert(CheckATermList(t_8), q_43));
    i_9 = t;
    t = SSL_table_put(s_8, c_9, i_9);
    t = r_8;
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm b_7 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,w_9 = NULL,x_9 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  r_9 = t;
  t = (ATerm) ATempty;
  s_9 = t;
  t = SSL_mkterm(s_65, s_9);
  w_9 = t;
  t = (ATerm) ATempty;
  x_9 = t;
  t = SSL_mkterm(t_65, x_9);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_9, l_10);
  m_10 = t;
  t = term_i_12;
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_9, l_10), term_i_12);
  t = a_7(a_4, m_10, n_10, t);
  t = r_9;
  return(t);
}
ATerm c_7 (ATerm r_86 (ATerm), ATerm b_33, ATerm c_33, ATerm t)
{
  t = b_33;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm o_10 = NULL;
      ATerm d_4 (ATerm t)
      {
        ATerm q_10 = NULL;
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), q_10);
        t = r_86(t);
        return(t);
      }
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
      t = c_33;
      t = map_1_0(d_4, t);
      return(t);
    }
    t = map_1_0(b_4, t);
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_10 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(y_10, c_11, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,r_11 = NULL,a_12 = NULL,h_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(d_11, e_11, t);
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(h_12, o_12, t);
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(r_11, a_12, t);
  return(t);
}
ATerm d_7 (ATerm x_64, ATerm y_64, ATerm w_64, ATerm t)
{
  ATerm x_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_64, y_64);
  t = c_7(f_4, y_64, y_64, t);
  t = (ATerm) ATmakeAppl(sym__2, x_64, y_64);
  t = c_7(g_4, x_64, y_64, t);
  t = (ATerm) ATmakeAppl(sym__2, y_64, x_64);
  t = conc_0_0(t);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, w_64);
  return(t);
}
ATerm repeat_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_100(t);
        t = x_12(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm i_4 (ATerm t)
  {
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      return(t);
    }
    t = fetch_1_0(n_4, t);
    return(t);
  }
  t = _2_0(i_4, k_4, t);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm z_12 = NULL,k_1 = NULL,o_1 = NULL;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_14), term_d_14), term_c_14), term_b_14), term_w_13), term_v_13), term_q_13), term_p_13), term_i_13), term_h_13), term_a_13), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_r_12), term_q_12), term_p_12), term_n_12), term_m_12), term_l_12));
  t = member_0_0(t);
  t = SSL_explode_string(z_12);
  o_1 = t;
  t = (ATerm) ATinsert(CheckATermList(o_1), term_j_14);
  k_1 = t;
  t = SSL_implode_string(k_1);
  return(t);
}
ATerm Op_2_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,r_0 = NULL,v_0 = NULL;
  g_13 = t;
  if(match_cons(t, sym_Op_2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_13);
  b_13 = t;
  t = c_13;
  t = l_72(t);
  e_13 = t;
  t = d_13;
  t = m_72(t);
  f_13 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, e_13, f_13);
  r_0 = t;
  t = SSLsetAnnotations(r_0, b_13);
  return(t);
}
ATerm OpDecl_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,e_1 = NULL,h_1 = NULL;
  o_13 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  j_13 = t;
  t = k_13;
  t = q_71(t);
  m_13 = t;
  t = l_13;
  t = r_71(t);
  n_13 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, m_13, n_13);
  e_1 = t;
  t = SSLsetAnnotations(e_1, j_13);
  return(t);
}
ATerm SVar_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,i_1 = NULL,l_1 = NULL;
  u_13 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_13);
  r_13 = t;
  t = s_13;
  t = o_75(t);
  t_13 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, t_13);
  i_1 = t;
  t = SSLsetAnnotations(i_1, r_13);
  return(t);
}
ATerm Var_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,n_1 = NULL,q_1 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_14);
  x_13 = t;
  t = y_13;
  t = f_72(t);
  z_13 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
  n_1 = t;
  t = SSLsetAnnotations(n_1, x_13);
  return(t);
}
ATerm VarDec_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,l_14 = NULL,u_1 = NULL,c_2 = NULL;
  l_14 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_14);
  e_14 = t;
  t = f_14;
  t = a_78(t);
  i_14 = t;
  t = h_14;
  t = b_78(t);
  k_14 = t;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_14, k_14);
  u_1 = t;
  t = SSLsetAnnotations(u_1, e_14);
  return(t);
}
ATerm SDef_3_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,y_14 = NULL,d_2 = NULL,f_2 = NULL;
  y_14 = t;
  if(match_cons(t, sym_SDef_3))
    {
      p_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
      s_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_14);
  o_14 = t;
  t = p_14;
  t = e_78(t);
  t_14 = t;
  t = r_14;
  t = f_78(t);
  u_14 = t;
  t = s_14;
  t = g_78(t);
  v_14 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, t_14, u_14, v_14);
  d_2 = t;
  t = SSLsetAnnotations(d_2, o_14);
  return(t);
}
ATerm RDef_3_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,g_2 = NULL,i_2 = NULL;
  i_15 = t;
  if(match_cons(t, sym_RDef_3))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  b_15 = t;
  t = c_15;
  t = k_74(t);
  f_15 = t;
  t = d_15;
  t = l_74(t);
  g_15 = t;
  t = e_15;
  t = m_74(t);
  h_15 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, f_15, g_15, h_15);
  g_2 = t;
  t = SSLsetAnnotations(g_2, b_15);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,k_2 = NULL,l_2 = NULL;
  o_15 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  l_15 = t;
  t = m_15;
  t = z_77(t);
  n_15 = t;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, l_15);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(x_14) != AT_INT) || (ATgetInt((ATermInt) x_14) != 34)))
                _fail(t);
              t_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_15), term_a_15), term_z_14);
          ;
          LocalPopChoice(w_14);
        }
      else
        {
          t = q_14;
          {
            ATerm v_15 = NULL,w_15 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_15 = ATgetFirst((ATermList) t);
                w_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_15;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_z_14), term_z_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_j_15), term_z_14);
              }
          }
        }
      t = Cons_2_0(_id, p_4, t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm k_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = k_15;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = NULL,p_16 = NULL;
      o_16 = t;
      if(match_cons(t, sym_Str_1))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm s_16 = NULL,s_1 = NULL,x_1 = NULL;
            t = SSL_explode_string(p_16);
            {
              ATerm s_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm a_2 = NULL,b_2 = NULL;
                  a_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm u_15 = ATgetFirst((ATermList) t);
                      if(((ATgetType(u_15) != AT_INT) || (ATgetInt((ATermInt) u_15) != 34)))
                        _fail(t);
                      b_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = b_2;
                  t = last_0_0(t);
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                    _fail(t);
                  t = a_2;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_15;
                }
              t = escape_chars_0_0(t);
              x_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_1), term_a_15), (ATerm) ATinsert(ATempty, term_a_15));
              t = conc_0_0(t);
              s_1 = t;
              t = SSL_implode_string(s_1);
              s_16 = t;
              t = (ATerm) ATmakeAppl(sym_Str_1, s_16);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              p_16 = ATgetArgument(t, 0);
              {
                ATerm j_2 = NULL;
                t = SSL_real_to_string(p_16);
                j_2 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, j_2);
              }
            }
          else
            {
              ATerm y_2 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  p_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_int_to_string(p_16);
              y_2 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, y_2);
            }
        }
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(AddLeadingPrime_0_0, t);
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm z_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                  ;
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = z_15;
                  {
                    ATerm b_16 = t;
                    int c_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(AddLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(c_16);
                      }
                    else
                      {
                        t = b_16;
                        {
                          ATerm d_16 = t;
                          int e_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(AddLeadingPrime_0_0, _id, t);
                              ;
                              LocalPopChoice(e_16);
                            }
                          else
                            {
                              t = d_16;
                              {
                                ATerm f_16 = t;
                                int g_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(AddLeadingPrime_0_0, t);
                                    ;
                                    LocalPopChoice(g_16);
                                  }
                                else
                                  {
                                    t = f_16;
                                    {
                                      ATerm h_16 = t;
                                      int i_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(AddLeadingPrime_0_0, t);
                                          ;
                                          LocalPopChoice(i_16);
                                        }
                                      else
                                        {
                                          t = h_16;
                                          {
                                            ATerm j_16 = t;
                                            int k_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(AddLeadingPrime_0_0, _id, t);
                                                ;
                                                LocalPopChoice(k_16);
                                              }
                                            else
                                              {
                                                t = j_16;
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
ATerm at_end_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_17, t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_87(t);
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = n_16;
      {
        ATerm h_17 = NULL,i_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_17 = ATgetFirst((ATermList) t);
            i_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_17;
        {
          ATerm r_4 (ATerm t)
          {
            t = i_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_4, t);
        }
      }
    }
  return(t);
}
ATerm n_18 (ATerm r_17, ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_explode_term(r_17);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              t = w_17;
              return(t);
            }
            t = v_17;
            t = at_end_1_0(u_4, t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = n_18(j_18, t);
          }
      }
    }
  else
    {
      t = n_18(j_18, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_18 = ATgetFirst((ATermList) t);
      x_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_18;
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = x_18;
          t = last_0_0(t);
        }
    }
  else
    {
      t = x_18;
      t = last_0_0(t);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  t = SSL_explode_string(j_19);
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL;
  t = _2_0(_id, x_4, t);
  d_19 = t;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((e_19 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      h_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_19;
  t = last_0_0(t);
  if((e_19 != t))
    {
      _fail(t);
    }
  t = d_19;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      z_19 = ATgetArgument(t, 2);
      t = z_19;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, b_20, c_20);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          b_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          z_19 = ATgetArgument(t, 2);
          t = z_19;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, b_20, c_20);
        }
      else
        {
          ATerm t_3 = NULL,c_4 = NULL,e_4 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              b_20 = ATgetArgument(t, 0);
              c_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_20;
          {
            ATerm x_16 = t;
            if((PushChoice() == 0))
              {
                ATerm u_3 = NULL;
                u_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_15, u_3);
                t = is_quoted_0_0(t);
                t = u_3;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_16;
              }
            t = SSL_explode_string(b_20);
            e_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_4), term_a_15), (ATerm) ATinsert(ATempty, term_a_15));
            t = conc_0_0(t);
            c_4 = t;
            t = SSL_implode_string(c_4);
            t_3 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, t_3, c_20);
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  t = i_110(t);
  {
    ATerm a_5 (ATerm t)
    {
      t = topdown_1_0(i_110, t);
      return(t);
    }
    t = SRTS_all(a_5, t);
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
      }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,g_22 = NULL,j_22 = NULL,l_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      l_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_22;
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_22;
  if(match_cons(t, sym_Some_1))
    {
      a_22 = ATgetArgument(t, 0);
      t = a_22;
      if(match_string(t, "left"))
        {
          t = b_22;
          t = d_7(c_22, j_22, l_22, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = b_22;
              t = x_6(c_22, j_22, l_22, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = b_22;
              t = r_6(c_22, j_22, l_22, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = b_22;
      t = q_6(c_22, j_22, l_22, t);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(q_5, t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, h_23);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,h_4 = NULL;
      g_21 = t;
      t = SSL_explode_term(g_21);
      if(match_cons(t, sym__2))
        {
          ATerm e_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm f_17 = ATgetArgument(t, 1);
            if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
              {
                h_4 = ATgetFirst((ATermList) f_17);
                {
                  ATerm g_17 = (ATerm) ATgetNext((ATermList) f_17);
                  if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = h_4;
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
    }
  t = topdown_1_0(f_5, t);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL,o_21 = NULL,z_21 = NULL;
          if(match_cons(t, sym_Seq_2))
            {
              k_21 = ATgetArgument(t, 0);
              l_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_21;
          if(match_cons(t, sym_Seq_2))
            {
              n_21 = ATgetArgument(t, 0);
              o_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_21, n_21);
          t = g_5(t);
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, z_21, o_21);
          t = g_5(t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
        }
      return(t);
    }
    t = bottomup_1_0(g_5, t);
    v_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_q_17), term_p_17))), (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_o_17))));
    t = repeat_1_0(h_5, t);
    t = v_20;
    t = bottomup_1_0(k_5, t);
  }
  return(t);
}
ATerm _2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,v_23 = NULL,m_2 = NULL,v_2 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  o_23 = t;
  t = p_23;
  t = h_66(t);
  r_23 = t;
  t = q_23;
  t = i_66(t);
  s_23 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_23, s_23);
  m_2 = t;
  t = SSLsetAnnotations(m_2, o_23);
  return(t);
}
ATerm p_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm y_23 = NULL;
  t = SSL_fputc(d_32, e_32);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_23);
  return(t);
}
ATerm q_7 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm z_23 = NULL;
  t = SSL_write_term_to_stream_text(h_50, i_50);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_23);
  return(t);
}
ATerm s_7 (ATerm z_97 (ATerm), ATerm i_392, ATerm l_50, ATerm t)
{
  ATerm a_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_392, term_s_17);
  t = open_stream_0_0(t);
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_24, l_50);
  t = z_97(t);
  t = fclose_0_0(t);
  t = l_50;
  return(t);
}
ATerm r_7 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm c_24 = NULL;
  t = SSL_write_term_to_stream_baf(d_50, e_50);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_24);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = fetch_1_0(c_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(f_6, j_24, k_24, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          m_24 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(m_24, n_24, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(h_6, o_24, p_24, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(match_cons(x_17, sym_Stream_1))
        {
          r_24 = ATgetArgument(x_17, 0);
        }
      else
        _fail(t);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(r_24, s_24, t);
  q_24 = t;
  t = term_y_17;
  t_24 = t;
  t = q_24;
  if(match_cons(t, sym_Stream_1))
    {
      u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, q_24);
  t = p_7(t_24, u_24, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  e_24 = t;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm z_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_5, t);
          ;
          LocalPopChoice(a_18);
        }
      else
        {
          t = z_17;
          t = term_b_18;
          if(((f_24 != NULL) && (f_24 != t)))
            _fail(t);
          else
            f_24 = t;
        }
      return(t);
    }
    t = _2_0(r_5, _id, t);
    t = e_24;
    {
      ATerm u_5 (ATerm t)
      {
        ATerm i_24 = NULL;
        i_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), i_24);
        return(t);
      }
      t = _2_0(_id, u_5, t);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_5, b_6, t);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = _2_0(_id, g_6, t);
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
ATerm apply_strategy_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  t = dtime_0_0(t);
  t = x_24;
  t = b_84(t);
  y_24 = t;
  t = dtime_0_0(t);
  z_24 = t;
  t = y_24;
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_25), (ATerm) ATmakeAppl(sym_Runtime_1, z_24)), b_25);
  return(t);
}
ATerm x_25 (ATerm q_25, ATerm t)
{
  t = SSL_fclose(q_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  v_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_25 = ATgetArgument(t, 0);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_25);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = x_25(v_25, t);
          }
      }
    }
  else
    {
      t = x_25(v_25, t);
    }
  return(t);
}
ATerm t_7 (ATerm j_50, ATerm t)
{
  t = SSL_read_term_from_stream(j_50);
  return(t);
}
ATerm u_7 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_fopen(f_32, g_32);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_stdin_stream();
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_26 = NULL;
  t = SSL_stdout_stream();
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  t = SSL_stderr_stream();
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_26);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm s_26 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_26;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  t = SSL_is_string(v_26);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      ATerm h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,i_5 = NULL;
        m_26 = t;
        t = SSL_explode_term(m_26);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_18 = ATgetArgument(t, 1);
              if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
                {
                  i_5 = ATgetFirst((ATermList) m_18);
                  {
                    ATerm o_18 = (ATerm) ATgetNext((ATermList) m_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_26 = NULL,p_26 = NULL;
              t = _2_0(k_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_26 = ATgetArgument(t, 0);
                  p_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_7(n_26, p_26, t);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm t_26 = NULL,u_26 = NULL;
                t = _2_0(l_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_26 = ATgetArgument(t, 0);
                    u_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_7(t_26, u_26, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_27 = NULL,f_27 = NULL,i_27 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL;
      j_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_27, term_u_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      t = debug_1_0(t_6, t);
      _fail(t);
    }
  c_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(i_27, t);
  f_27 = t;
  t = c_27;
  t = fclose_0_0(t);
  t = f_27;
  return(t);
}
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm n_27 (ATerm t)
  {
    ATerm v_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_87, _id, t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = v_18;
        t = Cons_2_0(_id, n_27, t);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm o_7 (ATerm q_64, ATerm r_64, ATerm t)
{
  t = SSL_strcat(q_64, r_64);
  return(t);
}
ATerm debug_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,t_27 = NULL,v_27 = NULL;
  o_27 = t;
  t = x_97(t);
  p_27 = t;
  t = term_t_10;
  t_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_27), p_27);
  v_27 = t;
  t = SSL_printnl(t_27, v_27);
  t = o_27;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL;
      d_28 = t;
      t = SSL_is_string(d_28);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = c_19;
      {
        ATerm i_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_6, t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = i_19;
            {
              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
              h_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_28 = ATgetArgument(t, 0);
                  t = i_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_28 = ATgetArgument(t, 0);
                      t = i_28;
                      {
                        ATerm l_19 = t;
                        int m_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_19);
                          }
                        else
                          {
                            t = l_19;
                            t = debug_1_0(v_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_28 = NULL,o_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_28 = ATgetArgument(t, 0);
                          j_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_28;
                      t = eval_config_0_0(t);
                      n_28 = t;
                      t = j_28;
                      t = eval_config_0_0(t);
                      o_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
                      t = o_7(n_28, o_28, t);
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
  ATerm v_28 = NULL,w_28 = NULL;
  v_28 = t;
  t = term_n_19;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, v_28);
  t = x_7(w_28, v_28, t);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL,a_29 = NULL;
        t = eval_config_0_0(t);
        z_28 = t;
        t = term_n_19;
        a_29 = t;
        t = SSL_table_put(a_29, v_28, z_28);
        t = z_28;
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL,f_29 = NULL;
      b_29 = t;
      t = term_s_19;
      t = get_config_0_0(t);
      f_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_29, term_t_19);
      t = geq_0_0(t);
      t = b_29;
      t = i_108(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-k"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  t = SSL_string_to_int(j_29);
  k_29 = t;
  t = term_u_19;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, k_29);
  t = a_8(l_29, k_29, t);
  t = j_29;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, f_7, h_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  if(match_string(t, "-S"))
    {
      t = n_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_29;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  t = term_s_19;
  o_29 = t;
  t = term_w_19;
  p_29 = t;
  t = term_x_19;
  t = a_8(o_29, p_29, t);
  t = term_y_19;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  t = SSL_string_to_int(q_29);
  r_29 = t;
  t = term_s_19;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, r_29);
  t = a_8(s_29, r_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_29);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  t = term_f_20;
  t_29 = t;
  t = term_s_10;
  u_29 = t;
  t = term_g_20;
  t = a_8(t_29, u_29, t);
  t = term_h_20;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, j_7, k_7, t);
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
            t = ArgOption_3_0(l_7, m_7, w_7, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = Option_3_0(z_7, b_8, f_8, t);
          }
      }
    }
  return(t);
}
ATerm a_8 (ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm v_29 = NULL;
  t = term_n_19;
  v_29 = t;
  t = SSL_table_put(v_29, h_57, i_57);
  t = (ATerm) ATmakeAppl(sym__3, term_n_19, h_57, i_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
      t = term_s_10;
      t = d_0(t);
      a_30 = t;
      t = term_n_20;
      b_30 = t;
      t = term_o_20;
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, a_30);
      t = y_7(b_30, c_30, a_30, t);
      _fail(t);
    }
  else
    {
      ATerm f_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_29 = ATgetFirst((ATermList) t);
          z_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_29;
      t = a_0(t);
      t = term_s_10;
      t = c_0(t);
      f_30 = t;
      t = (ATerm) ATinsert(CheckATermList(z_29), f_30);
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  if(match_string(t, "-o"))
    {
      t = h_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_30;
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm i_30 = NULL,k_30 = NULL;
  i_30 = t;
  t = term_p_20;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, i_30);
  t = a_8(k_30, i_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_30);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_8, u_8, v_8, t);
  return(t);
}
ATerm y_7 (ATerm y_43, ATerm z_43, ATerm x_43, ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            ATerm u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        t = x_7(y_43, z_43, t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATempty;
      }
    x_30 = t;
    t = (ATerm) ATinsert(CheckATermList(x_30), x_43);
    y_30 = t;
    t = SSL_table_put(y_43, z_43, y_30);
    t = w_30;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
      t = term_s_10;
      t = l_0(t);
      n_31 = t;
      t = term_n_20;
      o_31 = t;
      t = term_o_20;
      p_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, n_31);
      t = y_7(o_31, p_31, n_31, t);
      _fail(t);
    }
  else
    {
      ATerm t_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_31 = ATgetFirst((ATermList) t);
          k_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_31 = ATgetFirst((ATermList) t);
          m_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_31;
      t = i_0(t);
      t = l_31;
      t = k_0(t);
      t_31 = t;
      t = (ATerm) ATinsert(CheckATermList(m_31), t_31);
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  if(match_string(t, "-i"))
    {
      t = v_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_31;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  t = term_w_20;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, w_31);
  t = a_8(x_31, w_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_31);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_8, x_8, y_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_10;
  t = whoami_0_0(t);
  y_31 = t;
  t = term_t_10;
  z_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_20), y_31);
  a_32 = t;
  t = SSL_printnl(z_31, a_32);
  t = term_w_10;
  b_32 = t;
  t = SSL_exit(b_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_7 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_42, d_42);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = SSL_addr(c_42, d_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_93(t);
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm k_32 = NULL,l_32 = NULL,o_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_32 = ATgetFirst((ATermList) t);
            l_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_32;
        t = foldr_2_0(p_93, q_93, t);
        o_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_32, o_32);
        t = q_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm o_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(o_6, s_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_32 = NULL,i_6 = NULL,j_6 = NULL;
  t = times_0_0(t);
  i_6 = t;
  t = SSL_explode_term(i_6);
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6;
  t = foldr_2_0(z_8, a_9, t);
  r_32 = t;
  t = SSL_TicksToSeconds(r_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_33;
        if((g_33 != t))
          {
            _fail(t);
          }
        t = f_33;
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_33, h_33);
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = SSL_gtr(g_33, h_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm m_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL,r_33 = NULL;
      p_33 = t;
      t = term_s_19;
      t = get_config_0_0(t);
      r_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, term_w_10);
      t = geq_0_0(t);
      t = p_33;
      t = h_108(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = m_21;
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,w_33 = NULL,x_33 = NULL;
  t = run_time_0_0(t);
  t_33 = t;
  t = term_s_10;
  t = whoami_0_0(t);
  u_33 = t;
  t = term_t_10;
  w_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_21), t_33), term_q_21), u_33);
  x_33 = t;
  t = SSL_printnl(w_33, x_33);
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_21), t_33), term_q_21), u_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_19;
  y_33 = t;
  t = SSL_exit(y_33);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      t = fetch_1_0(e_9, t);
    }
  t = z_84(t);
  return(t);
}
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm z_33 (ATerm t)
  {
    ATerm f_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = f_22;
        t = Cons_2_0(x_86, z_33, t);
      }
    return(t);
  }
  t = z_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_34 = ATgetFirst((ATermList) t);
      e_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_34 = NULL,j_34 = NULL;
        t = e_34;
        t = g_0(t);
        i_34 = t;
        t = d_34;
        t = e_0(t);
        j_34 = t;
        t = e_34;
        {
          ATerm f_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_34), j_34);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_10;
      t = g_0(t);
    }
  return(t);
}
ATerm x_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  t = SSL_table_get(p_45, q_45);
  return(t);
}
ATerm Program_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,w_2 = NULL,x_2 = NULL;
  n_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  k_34 = t;
  t = l_34;
  t = h_83(t);
  m_34 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_34);
  w_2 = t;
  t = SSLsetAnnotations(w_2, k_34);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_34), term_i_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      t = fetch_1_0(g_9, t);
    }
  t = term_n_22;
  t = echo_0_0(t);
  t = term_n_20;
  q_34 = t;
  t = term_o_20;
  r_34 = t;
  t = term_o_22;
  t = x_7(q_34, r_34, t);
  t = reverse_acc_2_0(_id, h_9, t);
  t = map_1_0(k_9, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,z_2 = NULL,c_3 = NULL;
  w_34 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  t_34 = t;
  t = u_34;
  t = i_83(t);
  v_34 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_34);
  z_2 = t;
  t = SSLsetAnnotations(z_2, t_34);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_22 = ATgetFirst((ATermList) t);
                ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_35;
          }
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATinsert(ATempty, a_35);
      }
    b_35 = t;
    t = term_b_18;
    c_35 = t;
    t = SSL_printnl(c_35, b_35);
    t = a_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  t = term_t_22;
  g_35 = t;
  t = term_s_10;
  h_35 = t;
  t = term_u_22;
  t = a_8(g_35, h_35, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  t = term_t_22;
  i_35 = t;
  t = term_s_10;
  j_35 = t;
  t = term_u_22;
  t = a_8(i_35, j_35, t);
  t = term_w_22;
  k_35 = t;
  t = term_s_10;
  l_35 = t;
  t = term_x_22;
  t = a_8(k_35, l_35, t);
  t = term_y_22;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, m_9, n_9, t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = Option_3_0(o_9, p_9, q_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,d_3 = NULL,f_3 = NULL;
  r_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      o_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_35);
  m_35 = t;
  t = n_35;
  t = w_70(t);
  p_35 = t;
  t = o_35;
  t = x_70(t);
  q_35 = t;
  f_3 = t;
  t = (ATerm) ATinsert(CheckATermList(q_35), p_35);
  d_3 = t;
  t = SSLsetAnnotations(d_3, m_35);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  w_35 = t;
  t = term_z_20;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, w_35);
  t = a_8(x_35, w_35, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_23;
        t = g_100(t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
      }
    t = v_35;
    {
      ATerm u_9 (ATerm t)
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                t = g_100(t);
                t = Cons_2_0(_id, u_9, t);
              }
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            {
              ATerm z_35 = NULL,a_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_35 = ATgetFirst((ATermList) t);
                  a_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_36), (ATerm) ATmakeAppl(sym_Undefined_1, z_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_9, u_9, t);
    }
  }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "--help"))
    {
      t = o_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_36;
        }
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_y_21;
  p_36 = t;
  t = term_s_10;
  q_36 = t;
  t = term_k_23;
  t = a_8(p_36, q_36, t);
  t = term_l_23;
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  h_36 = t;
  t = term_n_20;
  k_36 = t;
  t = term_o_20;
  l_36 = t;
  t = (ATerm) ATempty;
  m_36 = t;
  t = SSL_table_put(k_36, l_36, m_36);
  t = h_36;
  {
    ATerm v_9 (ATerm t)
    {
      ATerm n_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_100(t);
          ;
          LocalPopChoice(t_23);
        }
      else
        {
          t = n_23;
          {
            ATerm u_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_9, z_9, a_10, t);
                ;
                LocalPopChoice(w_23);
              }
            else
              {
                t = u_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_9, t);
    {
      ATerm x_23 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = NULL;
          x_36 = t;
          {
            ATerm d_24 = t;
            int g_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_7 = NULL;
                t = x_36;
                {
                  ATerm h_24 = t;
                  int l_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_24);
                    }
                  else
                    {
                      t = h_24;
                      t = fetch_1_0(b_10, t);
                    }
                  t = x_36;
                  t = default_system_usage_0_0(t);
                  t = term_w_19;
                  n_7 = t;
                  t = SSL_exit(n_7);
                }
                ;
                LocalPopChoice(g_24);
              }
            else
              {
                t = d_24;
                {
                  ATerm c_8 = NULL;
                  t = term_t_22;
                  t = get_config_0_0(t);
                  t = x_36;
                  t = default_system_about_0_0(t);
                  t = term_w_19;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
              }
          }
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = x_23;
          {
            ATerm v_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
                ATerm c_10 (ATerm t)
                {
                  ATerm d_10 (ATerm t)
                  {
                    if(((i_36 != NULL) && (i_36 != t)))
                      _fail(t);
                    else
                      i_36 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_10, t);
                  return(t);
                }
                t = fetch_1_0(c_10, t);
                t = term_t_10;
                y_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_36)), term_c_25);
                z_36 = t;
                t = SSL_printnl(y_36, z_36);
                t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_36)), term_c_25));
                t = default_system_usage_0_0(t);
                t = term_w_10;
                a_37 = t;
                t = SSL_exit(a_37);
                ;
                LocalPopChoice(w_24);
              }
            else
              {
                t = v_24;
              }
          }
        }
      j_36 = t;
      t = term_n_20;
      n_36 = t;
      t = SSL_table_destroy(n_36);
      t = j_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  t = parse_options_1_0(b_85, t);
  d_37 = t;
  t = term_d_25;
  e_37 = t;
  t = SSL_table_create(e_37);
  t = term_d_25;
  f_37 = t;
  t = term_e_25;
  g_37 = t;
  t = SSL_table_put(f_37, g_37, d_37);
  t = d_37;
  t = d_85(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_85, t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = if_verbose2_1_0(k_10, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  t = term_j_25;
  h_37 = t;
  t = term_s_10;
  i_37 = t;
  t = term_k_25;
  t = a_8(h_37, i_37, t);
  t = term_l_25;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  j_37 = t;
  t = term_z_20;
  t = get_config_0_0(t);
  k_37 = t;
  t = term_t_10;
  l_37 = t;
  t = (ATerm) ATinsert(ATempty, k_37);
  m_37 = t;
  t = SSL_printnl(l_37, m_37);
  t = j_37;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm p_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_25);
            }
          else
            {
              t = p_25;
              {
                ATerm s_25 = t;
                int t_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_25);
                  }
                else
                  {
                    t = s_25;
                    {
                      ATerm w_25 = t;
                      int y_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_10, i_10, j_10, t);
                          ;
                          LocalPopChoice(y_25);
                        }
                      else
                        {
                          t = w_25;
                          {
                            ATerm a_26 = t;
                            int b_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_26);
                              }
                            else
                              {
                                t = a_26;
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
  ATerm g_10 (ATerm t)
  {
    ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
    n_37 = t;
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_37 != NULL) && (o_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_10, t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          t = term_h_26;
          o_37 = t;
        }
      t = not_null(o_37);
      t = ReadFromFile_0_0(t);
      p_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_37, p_37);
      t = apply_strategy_1_0(k_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_10, m_84, f_10, g_10, t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = _2_0(_id, Stratego_Ensugar_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_10, _fail, default_usage_0_0, t);
  return(t);
}
