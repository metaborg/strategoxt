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
ATerm term_u_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_w_9;
ATerm term_n_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Some_1, term_v_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_m_8);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_p_18);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_m_8);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_m_8);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_m_8);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_m_8);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm n_6 (ATerm f_32, ATerm g_32, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm o_6 (ATerm e_53, ATerm f_53, ATerm d_53, ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm p_6 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm);
ATerm a_2 (ATerm);
ATerm e_2 (ATerm);
ATerm q_6 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm);
ATerm g_2 (ATerm);
ATerm r_6 (ATerm l_53, ATerm m_53, ATerm);
ATerm i_2 (ATerm);
ATerm x_6 (ATerm g_53, ATerm h_53, ATerm);
ATerm y_6 (ATerm z_82 (ATerm), ATerm m_31, ATerm k_31, ATerm);
ATerm j_2 (ATerm);
ATerm z_6 (ATerm q_53, ATerm r_53, ATerm);
ATerm a_7 (ATerm p_74 (ATerm), ATerm x_20, ATerm y_20, ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm b_7 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm);
ATerm repeat_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_26 (ATerm y_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm e_3 (ATerm);
ATerm i_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm n_7 (ATerm z_19, ATerm a_20, ATerm);
ATerm o_7 (ATerm d_38, ATerm e_38, ATerm);
ATerm q_7 (ATerm y_85 (ATerm), ATerm q_362, ATerm h_38, ATerm);
ATerm p_7 (ATerm z_37, ATerm a_38, ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm v_35 (ATerm p_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_7 (ATerm f_38, ATerm);
ATerm s_7 (ATerm b_20, ATerm c_20, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_37 (ATerm f_36, ATerm);
ATerm h_37 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm);
ATerm i_37 (ATerm t_36, ATerm u_36, ATerm v_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm m_7 (ATerm o_52, ATerm p_52, ATerm);
ATerm debug_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_7 (ATerm d_45, ATerm e_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_7 (ATerm u_31, ATerm v_31, ATerm t_31, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_7 (ATerm y_29, ATerm z_29, ATerm);
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm need_help_1_0 (ATerm x_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_7 (ATerm l_33, ATerm m_33, ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm l_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_88 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm parse_options_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm j_8 (ATerm);
ATerm iowrap_3_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_q_8;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_8), c_0), term_x_8);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_z_8;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,b_0 = NULL,q_0 = NULL;
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
      t_0 = ATgetArgument(t, 0);
      {
        ATerm b_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm c_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  x_0 = t;
  t = SSL_mkterm(s_0, x_0);
  u_0 = t;
  t = (ATerm) ATempty;
  w_0 = t;
  t = SSL_mkterm(t_0, w_0);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
  b_0 = t;
  t = term_g_9;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATmakeAppl(sym__2, u_0, v_0));
  t = n_6(q_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_8;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm c_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_1);
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      {
        ATerm j_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      {
        ATerm m_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  k_1 = t;
  t = SSL_mkterm(c_1, k_1);
  g_1 = t;
  t = (ATerm) ATempty;
  j_1 = t;
  t = SSL_mkterm(f_1, j_1);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  d_1 = t;
  t = term_n_9;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATmakeAppl(sym__2, g_1, h_1));
  t = n_6(e_1, d_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_9) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_8;
  return(t);
}
ATerm n_6 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm p_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_32, g_32);
  t = v_7(f_32, g_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_1 = ATgetFirst((ATermList) t);
      {
        ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,b_2 = NULL,c_2 = NULL,f_2 = NULL,h_2 = NULL,o_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_2);
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      {
        ATerm q_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_2);
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      {
        ATerm r_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  c_2 = t;
  t = SSL_mkterm(u_1, c_2);
  x_1 = t;
  t = (ATerm) ATempty;
  b_2 = t;
  t = SSL_mkterm(v_1, b_2);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, y_1);
  o_1 = t;
  t = term_w_9;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATmakeAppl(sym__2, x_1, y_1));
  t = n_6(q_1, o_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_9) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_8;
  return(t);
}
ATerm at_last_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm m_3 = NULL,n_3 = NULL,q_3 = NULL;
    m_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_3 = ATgetFirst((ATermList) t);
        q_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_2 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(m_3);
          d_2 = t;
          t = q_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_3), n_3);
          y_0 = t;
          t = SSLsetAnnotations(y_0, d_2);
          t = w_75(t);
          ;
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          {
            ATerm w_2 = NULL,c_3 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(m_3);
            w_2 = t;
            t = q_3;
            t = s_3(t);
            c_3 = t;
            t = (ATerm) ATinsert(CheckATermList(c_3), n_3);
            i_1 = t;
            t = SSLsetAnnotations(i_1, w_2);
          }
        }
    }
    return(t);
  }
  t = s_3(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL;
  ATerm b_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_4 != NULL) && (e_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_4 = ATgetFirst((ATermList) t);
        {
          ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(b_1, t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, not_null(e_4));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  x_4 = t;
  c_5 = t;
  t = SSL_explode_term(c_5);
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
          {
            q_4 = ATgetFirst((ATermList) e_10);
            p_4 = (ATerm) ATgetNext((ATermList) e_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_4;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_4, q_4);
        t = RightAssoc_0_0(t);
        t = q_4;
        t = h_101(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
      }
    r_4 = t;
    t = t_4;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm j_5 = NULL;
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_4, j_5);
        t = GreaterThan_0_0(t);
        t = j_5;
        t = h_101(t);
        return(t);
      }
      t = map_1_0(n_1, t);
      v_4 = t;
      t = w_4;
      {
        ATerm i_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, x_4, w_4);
            t = LeftAssoc_0_0(t);
            t = w_4;
            t = h_101(t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = i_10;
          }
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_4, (ATerm) ATinsert(ATempty, z_4));
        t = conc_0_0(t);
        a_5 = t;
        t = (ATerm) ATinsert(CheckATermList(a_5), r_4);
        b_5 = t;
        t = SSL_mkterm(n_4, b_5);
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    t = bottomup_1_0(n_98, t);
    return(t);
  }
  t = SRTS_all(r_1, t);
  t = n_98(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(t_5, v_5, t);
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(r_5, s_5, t);
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(o_5, p_5, t);
  return(t);
}
ATerm o_6 (ATerm e_53, ATerm f_53, ATerm d_53, ATerm t)
{
  ATerm m_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
  t = a_7(s_1, e_53, f_53, t);
  t = (ATerm) ATmakeAppl(sym__2, f_53, e_53);
  t = conc_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, d_53);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,f_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(f_6, k_6, t);
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(z_5, a_6, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm c_7 = NULL,e_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(j_7, k_7, t);
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(g_7, i_7, t);
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(c_7, e_7, t);
  return(t);
}
ATerm p_6 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm t)
{
  ATerm w_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_53, c_53);
  t = a_7(w_1, c_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
  t = a_7(z_1, b_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym__2, c_53, b_53);
  t = conc_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, a_53);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(c_8, e_8, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(n_8, o_8, t);
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(h_8, i_8, t);
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(f_8, g_8, t);
  return(t);
}
ATerm q_6 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t)
{
  ATerm l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_52, z_52);
  t = a_7(a_2, z_52, z_52, t);
  t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
  t = a_7(e_2, y_52, z_52, t);
  t = (ATerm) ATmakeAppl(sym__2, z_52, y_52);
  t = conc_0_0(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, x_52);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm r_6 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm p_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  p_8 = t;
  t = (ATerm) ATempty;
  u_8 = t;
  t = SSL_mkterm(l_53, u_8);
  r_8 = t;
  t = (ATerm) ATempty;
  t_8 = t;
  t = SSL_mkterm(m_53, t_8);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  v_8 = t;
  t = term_m_10;
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_8, s_8), term_m_10);
  t = y_6(g_2, v_8, w_8, t);
  t = p_8;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm x_6 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,k_9 = NULL,l_9 = NULL,t_9 = NULL,u_9 = NULL;
  d_9 = t;
  t = (ATerm) ATempty;
  l_9 = t;
  t = SSL_mkterm(g_53, l_9);
  e_9 = t;
  t = (ATerm) ATempty;
  k_9 = t;
  t = SSL_mkterm(h_53, k_9);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
  t_9 = t;
  t = term_t_10;
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_9, f_9), term_t_10);
  t = y_6(i_2, t_9, u_9, t);
  t = d_9;
  return(t);
}
ATerm y_6 (ATerm z_82 (ATerm), ATerm m_31, ATerm k_31, ATerm t)
{
  ATerm v_9 = NULL,y_9 = NULL,z_9 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  t = z_82(t);
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_9, m_31, k_31);
  t = w_7(v_9, m_31, k_31, t);
  {
    ATerm w_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = term_b_11;
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_9, term_b_11);
        t = v_7(v_9, q_10, t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_9 = ATgetFirst((ATermList) t);
        z_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_11;
    o_10 = t;
    t = (ATerm) ATinsert(CheckATermList(z_9), (ATerm) ATinsert(CheckATermList(y_9), m_31));
    p_10 = t;
    t = SSL_table_put(v_9, o_10, p_10);
    t = n_10;
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm z_6 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm s_10 = NULL,v_10 = NULL,z_10 = NULL,a_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  s_10 = t;
  t = (ATerm) ATempty;
  e_11 = t;
  t = SSL_mkterm(q_53, e_11);
  v_10 = t;
  t = (ATerm) ATempty;
  a_11 = t;
  t = SSL_mkterm(r_53, a_11);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, z_10);
  f_11 = t;
  t = term_d_11;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_10, z_10), term_d_11);
  t = y_6(j_2, f_11, g_11, t);
  t = s_10;
  return(t);
}
ATerm a_7 (ATerm p_74 (ATerm), ATerm x_20, ATerm y_20, ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm n_11 = NULL;
    ATerm l_2 (ATerm t)
    {
      ATerm p_11 = NULL;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), p_11);
      t = p_74(t);
      return(t);
    }
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    t = y_20;
    t = map_1_0(l_2, t);
    return(t);
  }
  t = x_20;
  t = map_1_0(k_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(b_12, g_12, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm l_12 = NULL,n_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(v_12, w_12, t);
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(s_12, u_12, t);
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(l_12, n_12, t);
  return(t);
}
ATerm b_7 (ATerm v_52, ATerm w_52, ATerm u_52, ATerm t)
{
  ATerm u_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_52, w_52);
  t = a_7(m_2, w_52, w_52, t);
  t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
  t = a_7(n_2, v_52, w_52, t);
  t = (ATerm) ATmakeAppl(sym__2, w_52, v_52);
  t = conc_0_0(t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_11, u_52);
  return(t);
}
ATerm repeat_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm a_13 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        t = a_13(t);
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
      }
    return(t);
  }
  t = a_13(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,t_1 = NULL;
  f_13 = t;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_13);
  b_13 = t;
  t = d_13;
  {
    ATerm o_2 (ATerm t)
    {
      if((c_13 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(o_2, t);
    e_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_13, e_13);
    t_1 = t;
    t = SSLsetAnnotations(t_1, b_13);
  }
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm g_13 = NULL,p_3 = NULL,u_3 = NULL;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), term_p_12), term_o_12), term_k_12), term_j_12), term_i_12), term_h_12), term_f_12), term_e_12), term_d_12), term_a_12), term_z_11), term_x_11), term_w_11), term_v_11), term_t_11), term_s_11), term_r_11), term_q_11), term_o_11), term_l_11), term_k_11));
  t = member_0_0(t);
  t = SSL_explode_string(g_13);
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(u_3), term_t_12);
  p_3 = t;
  t = SSL_implode_string(p_3);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL,t_13 = NULL,x_13 = NULL,b_14 = NULL,c_14 = NULL,r_2 = NULL;
      ATerm z_12 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_14 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(i_13) != AT_INT) || (ATgetInt((ATermInt) i_13) != 34)))
                _fail(t);
              i_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_14), term_l_13), term_j_13);
          ;
          LocalPopChoice(h_13);
        }
      else
        {
          t = z_12;
          {
            ATerm l_14 = NULL,m_14 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_14 = ATgetFirst((ATermList) t);
                m_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_14;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_14), term_j_13), term_j_13);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_14), term_n_13), term_j_13);
              }
          }
        }
      c_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_13 = ATgetFirst((ATermList) t);
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_14);
      s_13 = t;
      t = x_13;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      b_14 = t;
      t = (ATerm) ATinsert(CheckATermList(b_14), t_13);
      r_2 = t;
      t = SSLsetAnnotations(r_2, s_13);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm f_15 = NULL,h_15 = NULL,i_15 = NULL;
        i_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            h_15 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm a_4 = NULL,d_4 = NULL,s_2 = NULL;
              t = SSLgetAnnotations(i_15);
              a_4 = t;
              t = h_15;
              t = escape_chars_0_0(t);
              d_4 = t;
              t = (ATerm) ATinsert(CheckATermList(d_4), f_15);
              s_2 = t;
              t = SSLsetAnnotations(s_2, a_4);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_15;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Str_1))
    {
      q_22 = ATgetArgument(t, 0);
      {
        ATerm t_22 = NULL,k_4 = NULL,o_4 = NULL;
        t = SSL_explode_string(q_22);
        {
          ATerm o_13 = t;
          if((PushChoice() == 0))
            {
              ATerm s_4 = NULL,u_4 = NULL;
              s_4 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_13 = ATgetFirst((ATermList) t);
                  if(((ATgetType(p_13) != AT_INT) || (ATgetInt((ATermInt) p_13) != 34)))
                    _fail(t);
                  u_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_4;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = s_4;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_13;
            }
          t = escape_chars_0_0(t);
          o_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_4), term_l_13), (ATerm) ATinsert(ATempty, term_l_13));
          t = conc_0_0(t);
          k_4 = t;
          t = SSL_implode_string(k_4);
          t_22 = t;
          t = (ATerm) ATmakeAppl(sym_Str_1, t_22);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          q_22 = ATgetArgument(t, 0);
          {
            ATerm i_5 = NULL;
            t = SSL_real_to_string(q_22);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, i_5);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_22 = ATgetArgument(t, 0);
              {
                ATerm d_6 = NULL;
                t = SSL_int_to_string(q_22);
                d_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_6);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  q_22 = ATgetArgument(t, 0);
                  {
                    ATerm j_6 = NULL,m_6 = NULL,v_2 = NULL;
                    t = SSLgetAnnotations(p_22);
                    j_6 = t;
                    t = q_22;
                    t = AddLeadingPrime_0_0(t);
                    m_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_6);
                    v_2 = t;
                    t = SSLsetAnnotations(v_2, j_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDef_3))
                    {
                      q_22 = ATgetArgument(t, 0);
                      r_22 = ATgetArgument(t, 1);
                      m_22 = ATgetArgument(t, 2);
                      {
                        ATerm h_7 = NULL,a_8 = NULL,x_2 = NULL;
                        t = SSLgetAnnotations(p_22);
                        h_7 = t;
                        t = q_22;
                        t = AddLeadingPrime_0_0(t);
                        a_8 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, a_8, r_22, m_22);
                        x_2 = t;
                        t = SSLsetAnnotations(x_2, h_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDef_3))
                        {
                          q_22 = ATgetArgument(t, 0);
                          r_22 = ATgetArgument(t, 1);
                          m_22 = ATgetArgument(t, 2);
                          {
                            ATerm a_9 = NULL,h_9 = NULL,a_3 = NULL;
                            t = SSLgetAnnotations(p_22);
                            a_9 = t;
                            t = q_22;
                            t = AddLeadingPrime_0_0(t);
                            h_9 = t;
                            t = (ATerm) ATmakeAppl(sym_SDef_3, h_9, r_22, m_22);
                            a_3 = t;
                            t = SSLsetAnnotations(a_3, a_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              q_22 = ATgetArgument(t, 0);
                              r_22 = ATgetArgument(t, 1);
                              {
                                ATerm s_9 = NULL,a_10 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(p_22);
                                s_9 = t;
                                t = q_22;
                                t = AddLeadingPrime_0_0(t);
                                a_10 = t;
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, a_10, r_22);
                                b_3 = t;
                                t = SSLsetAnnotations(b_3, s_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Var_1))
                                {
                                  q_22 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_10 = NULL,j_10 = NULL,d_3 = NULL;
                                    t = SSLgetAnnotations(p_22);
                                    h_10 = t;
                                    t = q_22;
                                    t = AddLeadingPrime_0_0(t);
                                    j_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, j_10);
                                    d_3 = t;
                                    t = SSLsetAnnotations(d_3, h_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SVar_1))
                                    {
                                      q_22 = ATgetArgument(t, 0);
                                      {
                                        ATerm u_10 = NULL,x_10 = NULL,f_3 = NULL;
                                        t = SSLgetAnnotations(p_22);
                                        u_10 = t;
                                        t = q_22;
                                        t = AddLeadingPrime_0_0(t);
                                        x_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_SVar_1, x_10);
                                        f_3 = t;
                                        t = SSLsetAnnotations(f_3, u_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_OpDecl_2))
                                        {
                                          q_22 = ATgetArgument(t, 0);
                                          r_22 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_11 = NULL,m_11 = NULL,g_3 = NULL;
                                            t = SSLgetAnnotations(p_22);
                                            j_11 = t;
                                            t = q_22;
                                            t = AddLeadingPrime_0_0(t);
                                            m_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, m_11, r_22);
                                            g_3 = t;
                                            t = SSLsetAnnotations(g_3, j_11);
                                          }
                                        }
                                      else
                                        {
                                          ATerm y_11 = NULL,c_12 = NULL,h_3 = NULL;
                                          if(match_cons(t, sym_Op_2))
                                            {
                                              q_22 = ATgetArgument(t, 0);
                                              r_22 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(p_22);
                                          y_11 = t;
                                          t = q_22;
                                          t = AddLeadingPrime_0_0(t);
                                          c_12 = t;
                                          t = (ATerm) ATmakeAppl(sym_Op_2, c_12, r_22);
                                          h_3 = t;
                                          t = SSLsetAnnotations(h_3, y_11);
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
ATerm at_end_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm q_25 (ATerm t)
  {
    ATerm k_25 = NULL,l_25 = NULL,n_25 = NULL;
    n_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_25 = ATgetFirst((ATermList) t);
        l_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_12 = NULL,q_12 = NULL,k_13 = NULL;
          t = SSLgetAnnotations(n_25);
          m_12 = t;
          t = l_25;
          t = q_25(t);
          q_12 = t;
          t = (ATerm) ATinsert(CheckATermList(q_12), k_25);
          k_13 = t;
          t = SSLsetAnnotations(k_13, m_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_25;
        t = l_75(t);
      }
    return(t);
  }
  t = q_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,l_24 = NULL;
  h_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_24;
    }
  else
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(l_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_24 = ATgetFirst((ATermList) t);
          if(((l_24 != NULL) && (l_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_24;
      t = at_end_1_0(p_2, t);
    }
  return(t);
}
ATerm p_26 (ATerm y_25, ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_explode_term(y_25);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      {
        ATerm r_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              t = j_26;
              return(t);
            }
            t = g_26;
            t = at_end_1_0(q_2, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = r_13;
            t = p_26(k_26, t);
          }
      }
    }
  else
    {
      t = p_26(k_26, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_27;
    }
  else
    {
      t = f_27;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,m_13 = NULL;
  z_27 = t;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  r_27 = t;
  t = SSL_explode_string(w_27);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, x_27);
  m_13 = t;
  t = SSLsetAnnotations(m_13, r_27);
  y_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((m_27 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      n_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_27;
  t = last_0_0(t);
  if((m_27 != t))
    {
      _fail(t);
    }
  t = y_27;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      o_28 = ATgetArgument(t, 2);
      t = o_28;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, q_28, r_28);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_28 = ATgetArgument(t, 0);
          r_28 = ATgetArgument(t, 1);
          o_28 = ATgetArgument(t, 2);
          t = o_28;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, q_28, r_28);
        }
      else
        {
          ATerm u_13 = NULL,d_14 = NULL,g_14 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              q_28 = ATgetArgument(t, 0);
              r_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_28;
          {
            ATerm y_13 = t;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL;
                v_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_13, v_13);
                t = is_quoted_0_0(t);
                t = v_13;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_13;
              }
            t = SSL_explode_string(q_28);
            g_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_14), term_l_13), (ATerm) ATinsert(ATempty, term_l_13));
            t = conc_0_0(t);
            d_14 = t;
            t = SSL_implode_string(d_14);
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, u_13, r_28);
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = topdown_1_0(m_98, t);
    return(t);
  }
  t = m_98(t);
  t = SRTS_all(t_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm r_30 = NULL,u_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  u_30 = t;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_30 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_30;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_31;
  if(match_cons(t, sym_Some_1))
    {
      r_30 = ATgetArgument(t, 0);
      t = r_30;
      if(match_string(t, "left"))
        {
          t = u_30;
          t = b_7(x_30, b_31, c_31, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = u_30;
              t = q_6(x_30, b_31, c_31, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = u_30;
              t = p_6(x_30, b_31, c_31, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = u_30;
      t = o_6(x_30, b_31, c_31, t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(i_3, t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = e_14;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, s_32);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm s_29 = NULL,a_30 = NULL;
  a_30 = t;
  {
    ATerm j_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_14 = NULL;
        t = SSL_explode_term(a_30);
        if(match_cons(t, sym__2))
          {
            ATerm o_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_14 = ATgetArgument(t, 1);
              if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
                {
                  k_14 = ATgetFirst((ATermList) p_14);
                  {
                    ATerm q_14 = (ATerm) ATgetNext((ATermList) p_14);
                    if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_14;
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = j_14;
        t = a_30;
      }
    t = topdown_1_0(u_2, t);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm e_30 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
        j_30 = t;
        if(match_cons(t, sym_Seq_2))
          {
            e_30 = ATgetArgument(t, 0);
            f_30 = ATgetArgument(t, 1);
            t = f_30;
            if(match_cons(t, sym_Seq_2))
              {
                h_30 = ATgetArgument(t, 0);
                i_30 = ATgetArgument(t, 1);
                {
                  ATerm t_14 = t;
                  int u_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_30, h_30);
                      t = y_2(t);
                      n_30 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_30, i_30);
                      t = y_2(t);
                      ;
                      LocalPopChoice(u_14);
                    }
                  else
                    {
                      t = t_14;
                      t = j_30;
                    }
                }
              }
            else
              {
                t = j_30;
              }
          }
        else
          {
            t = j_30;
          }
        return(t);
      }
      t = bottomup_1_0(y_2, t);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15))), (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATempty, term_z_14))));
      t = repeat_1_0(z_2, t);
      t = s_29;
      t = bottomup_1_0(e_3, t);
    }
  }
  return(t);
}
ATerm n_7 (ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm x_32 = NULL;
  t = SSL_fputc(z_19, a_20);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_32);
  return(t);
}
ATerm o_7 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm y_32 = NULL;
  t = SSL_write_term_to_stream_text(d_38, e_38);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_32);
  return(t);
}
ATerm q_7 (ATerm y_85 (ATerm), ATerm q_362, ATerm h_38, ATerm t)
{
  ATerm z_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_362, term_c_15);
  t = open_stream_0_0(t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_32, h_38);
  t = y_85(t);
  t = fclose_0_0(t);
  t = h_38;
  return(t);
}
ATerm p_7 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm a_33 = NULL;
  t = SSL_write_term_to_stream_baf(z_37, a_38);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_33);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      if(match_cons(d_15, sym_Stream_1))
        {
          o_15 = ATgetArgument(d_15, 0);
        }
      else
        _fail(t);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(o_15, p_15, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      if(match_cons(j_15, sym_Stream_1))
        {
          d_16 = ATgetArgument(j_15, 0);
        }
      else
        _fail(t);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(d_16, e_16, t);
  a_16 = t;
  t = term_q_15;
  b_16 = t;
  t = a_16;
  if(match_cons(t, sym_Stream_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, a_16);
  t = n_7(b_16, c_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,k_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,z_34 = NULL,a_35 = NULL,r_14 = NULL,f_14 = NULL;
  f_33 = t;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  n_33 = t;
  t = o_33;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_3, t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = term_t_15;
        e_33 = t;
      }
    s_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_33, p_33);
    f_14 = t;
    t = SSLsetAnnotations(f_14, n_33);
    t = f_33;
    if(match_cons(t, sym__2))
      {
        h_33 = ATgetArgument(t, 0);
        i_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_33);
    g_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_33, (ATerm) ATmakeAppl(sym__2, not_null(e_33), i_33));
    r_14 = t;
    t = SSLsetAnnotations(r_14, g_33);
    k_33 = t;
    if(match_cons(t, sym__2))
      {
        z_34 = ATgetArgument(t, 0);
        a_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 = NULL,g_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,s_14 = NULL;
          t = SSLgetAnnotations(k_33);
          x_14 = t;
          t = z_34;
          t = fetch_1_0(k_3, t);
          g_15 = t;
          t = a_35;
          if(match_cons(t, sym__2))
            {
              m_15 = ATgetArgument(t, 0);
              n_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_7(l_3, m_15, n_15, t);
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_15, l_15);
          s_14 = t;
          t = SSLsetAnnotations(s_14, x_14);
          ;
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          {
            ATerm u_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(k_33);
            u_15 = t;
            t = a_35;
            if(match_cons(t, sym__2))
              {
                y_15 = ATgetArgument(t, 0);
                z_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_7(o_3, y_15, z_15, t);
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_34, x_15);
            w_14 = t;
            t = SSLsetAnnotations(w_14, u_15);
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
ATerm apply_strategy_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  h_35 = t;
  t = dtime_0_0(t);
  t = h_35;
  t = z_71(t);
  g_35 = t;
  t = dtime_0_0(t);
  d_35 = t;
  t = g_35;
  if(match_cons(t, sym__2))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_35), (ATerm) ATmakeAppl(sym_Runtime_1, d_35)), f_35);
  return(t);
}
ATerm v_35 (ATerm p_35, ATerm t)
{
  t = SSL_fclose(p_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_35 = ATgetArgument(t, 0);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_35);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = v_35(t_35, t);
          }
      }
    }
  else
    {
      t = v_35(t_35, t);
    }
  return(t);
}
ATerm r_7 (ATerm f_38, ATerm t)
{
  t = SSL_read_term_from_stream(f_38);
  return(t);
}
ATerm s_7 (ATerm b_20, ATerm c_20, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_fopen(b_20, c_20);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_stdin_stream();
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_stdout_stream();
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_35 = NULL;
  t = SSL_stderr_stream();
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_35);
  return(t);
}
ATerm g_37 (ATerm f_36, ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_explode_term(f_36);
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_16 = ATgetArgument(t, 1);
        if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
          {
            g_36 = ATgetFirst((ATermList) k_16);
            {
              ATerm l_16 = (ATerm) ATgetNext((ATermList) k_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_37 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,r_36 = NULL,e_15 = NULL;
  t = SSLgetAnnotations(l_36);
  o_36 = t;
  t = j_36;
  if(match_cons(t, sym_Path_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_36, k_36);
  e_15 = t;
  t = SSLsetAnnotations(e_15, o_36);
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(m_36, n_36, t);
  return(t);
}
ATerm i_37 (ATerm t_36, ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,b_37 = NULL,k_15 = NULL;
  t = SSLgetAnnotations(v_36);
  y_36 = t;
  t = SSL_is_string(t_36);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, u_36);
  k_15 = t;
  t = SSLsetAnnotations(k_15, y_36);
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(w_36, x_36, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      ATerm p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_37 = t;
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_37(d_37, t);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm s_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_37(e_37, f_37, d_37, t);
                  ;
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = s_16;
                  t = i_37(e_37, f_37, d_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_37(d_37, t);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL;
      m_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_37, term_y_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = debug_1_0(r_3, t);
      _fail(t);
    }
  k_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(l_37, t);
  j_37 = t;
  t = k_37;
  t = fclose_0_0(t);
  t = j_37;
  return(t);
}
ATerm fetch_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm r_38 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_38 = ATgetFirst((ATermList) t);
        q_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_17 = NULL,l_17 = NULL,i_16 = NULL;
          t = SSLgetAnnotations(o_38);
          d_17 = t;
          t = p_38;
          t = f_75(t);
          l_17 = t;
          t = (ATerm) ATinsert(CheckATermList(q_38), l_17);
          i_16 = t;
          t = SSLsetAnnotations(i_16, d_17);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm d_18 = NULL,i_18 = NULL,j_16 = NULL;
            t = SSLgetAnnotations(o_38);
            d_18 = t;
            t = q_38;
            t = r_38(t);
            i_18 = t;
            t = (ATerm) ATinsert(CheckATermList(i_18), p_38);
            j_16 = t;
            t = SSLsetAnnotations(j_16, d_18);
          }
        }
    }
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm m_7 (ATerm o_52, ATerm p_52, ATerm t)
{
  t = SSL_strcat(o_52, p_52);
  return(t);
}
ATerm debug_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  u_38 = t;
  t = w_85(t);
  v_38 = t;
  t = term_q_8;
  w_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_38), v_38);
  x_38 = t;
  t = SSL_printnl(w_38, x_38);
  t = u_38;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm b_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_39 = NULL;
      j_39 = t;
      t = SSL_is_string(j_39);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_3, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = k_17;
            {
              ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
              p_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_39 = ATgetArgument(t, 0);
                  t = q_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_39 = ATgetArgument(t, 0);
                      t = q_39;
                      {
                        ATerm o_17 = t;
                        int p_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_17);
                          }
                        else
                          {
                            t = o_17;
                            t = debug_1_0(v_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_39 = NULL,x_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_39 = ATgetArgument(t, 0);
                          r_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_39;
                      t = eval_config_0_0(t);
                      w_39 = t;
                      t = r_39;
                      t = eval_config_0_0(t);
                      x_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
                      t = m_7(w_39, x_39, t);
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
  ATerm b_40 = NULL,c_40 = NULL;
  b_40 = t;
  t = term_q_17;
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, b_40);
  t = v_7(c_40, b_40, t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,e_40 = NULL;
        t = eval_config_0_0(t);
        d_40 = t;
        t = term_q_17;
        e_40 = t;
        t = SSL_table_put(e_40, b_40, d_40);
        t = d_40;
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_40 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        k_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_40, term_w_17);
        t = geq_0_0(t);
        t = i_40;
        t = h_96(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = i_40;
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  if(match_string(t, "-k"))
    {
      t = n_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_40;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  t = SSL_string_to_int(o_40);
  p_40 = t;
  t = term_x_17;
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, p_40);
  t = y_7(q_40, p_40, t);
  t = o_40;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_40 = NULL;
  s_40 = t;
  if(match_string(t, "-S"))
    {
      t = s_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_40;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  t = term_v_17;
  t_40 = t;
  t = term_z_17;
  u_40 = t;
  t = term_a_18;
  t = y_7(t_40, u_40, t);
  t = term_b_18;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  t = SSL_string_to_int(v_40);
  w_40 = t;
  t = term_v_17;
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, w_40);
  t = y_7(x_40, w_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_40);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  t = term_f_18;
  y_40 = t;
  t = term_m_8;
  z_40 = t;
  t = term_g_18;
  t = y_7(y_40, z_40, t);
  t = term_h_18;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, c_4, t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, g_4, i_4, t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = Option_3_0(j_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
ATerm y_7 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm a_41 = NULL;
  t = term_q_17;
  a_41 = t;
  t = SSL_table_put(a_41, d_45, e_45);
  t = (ATerm) ATmakeAppl(sym__3, term_q_17, d_45, e_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
      t = term_m_8;
      t = i_0(t);
      f_41 = t;
      t = term_o_18;
      g_41 = t;
      t = term_p_18;
      h_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, f_41);
      t = w_7(g_41, h_41, f_41, t);
      _fail(t);
    }
  else
    {
      ATerm k_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_41 = ATgetFirst((ATermList) t);
          e_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_41;
      t = d_0(t);
      t = term_m_8;
      t = g_0(t);
      k_41 = t;
      t = (ATerm) ATinsert(CheckATermList(e_41), k_41);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-o"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  n_41 = t;
  t = term_q_18;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, n_41);
  t = y_7(o_41, n_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_41);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, d_5, e_5, t);
  return(t);
}
ATerm w_7 (ATerm u_31, ATerm v_31, ATerm t_31, ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_31, v_31);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_31, v_31);
        t = v_7(u_31, v_31, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATempty;
      }
    r_41 = t;
    t = (ATerm) ATinsert(CheckATermList(r_41), t_31);
    s_41 = t;
    t = SSL_table_put(u_31, v_31, s_41);
    t = q_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
      t = term_m_8;
      t = r_0(t);
      d_42 = t;
      t = term_o_18;
      e_42 = t;
      t = term_p_18;
      f_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, d_42);
      t = w_7(e_42, f_42, d_42, t);
      _fail(t);
    }
  else
    {
      ATerm j_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_41 = ATgetFirst((ATermList) t);
          a_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_42 = ATgetFirst((ATermList) t);
          c_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_41;
      t = n_0(t);
      t = b_42;
      t = p_0(t);
      j_42 = t;
      t = (ATerm) ATinsert(CheckATermList(c_42), j_42);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  if(match_string(t, "-i"))
    {
      t = l_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_42;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  m_42 = t;
  t = term_y_18;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, m_42);
  t = y_7(n_42, m_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_42);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, h_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  o_42 = t;
  t = term_q_8;
  q_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_19), o_42);
  r_42 = t;
  t = SSL_printnl(q_42, r_42);
  t = term_z_8;
  p_42 = t;
  t = SSL_exit(p_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_7 (ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_29, z_29);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      t = SSL_addr(y_29, z_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_42;
      t = n_81(t);
    }
  else
    {
      ATerm y_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_42 = ATgetFirst((ATermList) t);
          v_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_42;
      t = foldr_2_0(n_81, o_81, t);
      y_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_42, y_42);
      t = o_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(i_19, j_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_43 = NULL,w_18 = NULL,x_18 = NULL;
  t = times_0_0(t);
  x_18 = t;
  t = SSL_explode_term(x_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  t = foldr_2_0(k_5, l_5, t);
  b_43 = t;
  t = SSL_TicksToSeconds(b_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_43;
        if((n_43 != t))
          {
            _fail(t);
          }
        t = m_43;
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
        {
          ATerm h_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_43, o_43);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = h_19;
              t = SSL_gtr(n_43, o_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        u_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_43, term_z_8);
        t = geq_0_0(t);
        t = s_43;
        t = g_96(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = s_43;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL;
  t = run_time_0_0(t);
  w_43 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  x_43 = t;
  t = term_q_8;
  z_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), w_43), term_n_19), x_43);
  a_44 = t;
  t = SSL_printnl(z_43, a_44);
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), w_43), term_n_19), x_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_17;
  b_44 = t;
  t = SSL_exit(b_44);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_44 = ATgetArgument(t, 0);
          {
            ATerm g_20 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(k_44);
            g_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_44);
            m_16 = t;
            t = SSLsetAnnotations(m_16, g_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = fetch_1_0(q_5, t);
    }
  t = x_72(t);
  return(t);
}
ATerm map_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm a_45 (ATerm t)
  {
    ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
    x_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_44;
      }
    else
      {
        ATerm u_20 = NULL,e_21 = NULL,f_21 = NULL,o_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_44 = ATgetFirst((ATermList) t);
            z_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_44);
        u_20 = t;
        t = y_44;
        t = v_74(t);
        e_21 = t;
        t = z_44;
        t = a_45(t);
        f_21 = t;
        t = (ATerm) ATinsert(CheckATermList(f_21), e_21);
        o_16 = t;
        t = SSLsetAnnotations(o_16, u_20);
      }
    return(t);
  }
  t = a_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_45 = ATgetFirst((ATermList) t);
      g_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_45 = NULL,l_45 = NULL;
        ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(l_45));
          return(t);
        }
        t = g_45;
        t = m_0(t);
        if(((k_45 != NULL) && (k_45 != t)))
          _fail(t);
        else
          k_45 = t;
        t = f_45;
        t = k_0(t);
        if(((l_45 != NULL) && (l_45 != t)))
          _fail(t);
        else
          l_45 = t;
        t = g_45;
        t = reverse_acc_2_0(k_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = m_0(t);
    }
  return(t);
}
ATerm v_7 (ATerm l_33, ATerm m_33, ATerm t)
{
  t = SSL_table_get(l_33, m_33);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,t_16 = NULL;
  w_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_45);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_45);
  t_16 = t;
  t = SSLsetAnnotations(t_16, u_45);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_45), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(x_5, t);
    }
  t = term_v_19;
  t = echo_0_0(t);
  t = term_o_18;
  s_45 = t;
  t = term_p_18;
  t_45 = t;
  t = term_w_19;
  t = v_7(s_45, t_45, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(b_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_20 = ATgetFirst((ATermList) t);
                ATerm e_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_46;
          }
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, a_46);
      }
    b_46 = t;
    t = term_t_15;
    c_46 = t;
    t = SSL_printnl(c_46, b_46);
    t = a_46;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  t = term_f_20;
  g_46 = t;
  t = term_m_8;
  h_46 = t;
  t = term_h_20;
  t = y_7(g_46, h_46, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  t = term_f_20;
  k_46 = t;
  t = term_m_8;
  l_46 = t;
  t = term_h_20;
  t = y_7(k_46, l_46, t);
  t = term_j_20;
  i_46 = t;
  t = term_m_8;
  j_46 = t;
  t = term_k_20;
  t = y_7(i_46, j_46, t);
  t = term_l_20;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, e_6, g_6, t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = Option_3_0(h_6, i_6, l_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,c_17 = NULL;
  r_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_46 = ATgetFirst((ATermList) t);
      o_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  m_46 = t;
  t = n_46;
  t = u_58(t);
  p_46 = t;
  t = o_46;
  t = v_58(t);
  q_46 = t;
  t = (ATerm) ATinsert(CheckATermList(q_46), p_46);
  c_17 = t;
  t = SSLsetAnnotations(c_17, m_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,b_47 = NULL,c_47 = NULL,f_17 = NULL;
  w_46 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_20;
        t = f_88(t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
      }
    t = w_46;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_46 = ATgetFirst((ATermList) t);
        z_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_46);
    x_46 = t;
    t = term_b_19;
    c_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_19, y_46);
    t = y_7(c_47, y_46, t);
    t = z_46;
    {
      ATerm m_47 (ATerm t)
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_47 = NULL;
                f_47 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_47;
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = f_88(t);
                t = Cons_2_0(_id, m_47, t);
              }
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm i_47 = NULL,j_47 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_47 = ATgetFirst((ATermList) t);
                  j_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_47), (ATerm) ATmakeAppl(sym_Undefined_1, i_47));
            }
          }
        return(t);
      }
      t = m_47(t);
      b_47 = t;
      t = (ATerm) ATinsert(CheckATermList(b_47), (ATerm) ATmakeAppl(sym_Program_1, y_46));
      f_17 = t;
      t = SSLsetAnnotations(f_17, x_46);
    }
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "--help"))
    {
      t = y_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_47;
        }
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  t = term_r_19;
  z_47 = t;
  t = term_m_8;
  a_48 = t;
  t = term_z_20;
  t = y_7(z_47, a_48, t);
  t = term_a_21;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  t_47 = t;
  t = term_o_18;
  v_47 = t;
  t = term_p_18;
  w_47 = t;
  t = (ATerm) ATempty;
  x_47 = t;
  t = SSL_table_put(v_47, w_47, x_47);
  t = t_47;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_88(t);
          ;
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_6, u_6, v_6, t);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_6, t);
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_48 = NULL;
          h_48 = t;
          {
            ATerm k_21 = t;
            int l_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_21 = NULL;
                t = h_48;
                {
                  ATerm m_21 = t;
                  int n_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_21);
                    }
                  else
                    {
                      t = m_21;
                      t = fetch_1_0(w_6, t);
                    }
                  t = h_48;
                  t = default_system_usage_0_0(t);
                  t = term_z_17;
                  o_21 = t;
                  t = SSL_exit(o_21);
                }
                ;
                LocalPopChoice(l_21);
              }
            else
              {
                t = k_21;
                {
                  ATerm x_21 = NULL;
                  t = term_f_20;
                  t = get_config_0_0(t);
                  t = h_48;
                  t = default_system_about_0_0(t);
                  t = term_z_17;
                  x_21 = t;
                  t = SSL_exit(x_21);
                }
              }
          }
          ;
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
                ATerm d_7 (ATerm t)
                {
                  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,h_17 = NULL;
                  n_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_48);
                  l_48 = t;
                  t = m_48;
                  if(((r_47 != NULL) && (r_47 != t)))
                    _fail(t);
                  else
                    r_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_48);
                  h_17 = t;
                  t = SSLsetAnnotations(h_17, l_48);
                  return(t);
                }
                t = fetch_1_0(d_7, t);
                t = term_q_8;
                j_48 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), term_r_21);
                k_48 = t;
                t = SSL_printnl(j_48, k_48);
                t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), term_r_21));
                t = default_system_usage_0_0(t);
                t = term_z_8;
                i_48 = t;
                t = SSL_exit(i_48);
                ;
                LocalPopChoice(q_21);
              }
            else
              {
                t = p_21;
              }
          }
        }
      s_47 = t;
      t = term_o_18;
      u_47 = t;
      t = SSL_table_destroy(u_47);
      t = s_47;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t = parse_options_1_0(z_72, t);
  s_48 = t;
  t = term_s_21;
  v_48 = t;
  t = SSL_table_create(v_48);
  t = term_s_21;
  t_48 = t;
  t = term_t_21;
  u_48 = t;
  t = SSL_table_put(t_48, u_48, s_48);
  t = s_48;
  t = b_73(t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_73, t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm w_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_73(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = w_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  t = term_z_21;
  w_48 = t;
  t = term_m_8;
  x_48 = t;
  t = term_a_22;
  t = y_7(w_48, x_48, t);
  t = term_b_22;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  y_48 = t;
  t = term_b_19;
  t = get_config_0_0(t);
  z_48 = t;
  t = term_q_8;
  a_49 = t;
  t = (ATerm) ATinsert(ATempty, z_48);
  b_49 = t;
  t = SSL_printnl(a_49, b_49);
  t = y_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_72(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                ATerm h_22 = t;
                int i_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_22);
                  }
                else
                  {
                    t = h_22;
                    {
                      ATerm j_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_7, b_8, d_8, t);
                          ;
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = j_22;
                          {
                            ATerm l_22 = t;
                            int n_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(n_22);
                              }
                            else
                              {
                                t = l_22;
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
  ATerm x_7 (ATerm t)
  {
    ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
    d_49 = t;
    {
      ATerm o_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_8, t);
          ;
          LocalPopChoice(s_22);
        }
      else
        {
          t = o_22;
          t = term_u_22;
          c_49 = t;
        }
      t = not_null(c_49);
      t = ReadFromFile_0_0(t);
      e_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
      t = apply_strategy_1_0(i_72, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_7, k_72, u_7, x_7, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,n_17 = NULL;
  j_49 = t;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  f_49 = t;
  t = h_49;
  t = Stratego_Ensugar_0_0(t);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, i_49);
  n_17 = t;
  t = SSLsetAnnotations(n_17, f_49);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_8, _fail, default_usage_0_0, t);
  return(t);
}
