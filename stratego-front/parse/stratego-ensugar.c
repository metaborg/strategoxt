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
ATerm term_o_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_l_8;
void init_constant_terms (void)
{
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Some_1, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
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
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
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
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_l_8);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
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
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_p_18);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_l_8);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_l_8);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_l_8);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_v_21, term_l_8);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm n_6 (ATerm j_44, ATerm k_44, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm j_110 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm o_6 (ATerm g_65, ATerm h_65, ATerm f_65, ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm p_6 (ATerm d_65, ATerm e_65, ATerm c_65, ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm q_6 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm);
ATerm e_2 (ATerm);
ATerm r_6 (ATerm n_65, ATerm o_65, ATerm);
ATerm g_2 (ATerm);
ATerm x_6 (ATerm i_65, ATerm j_65, ATerm);
ATerm y_6 (ATerm a_95 (ATerm), ATerm q_43, ATerm o_43, ATerm);
ATerm i_2 (ATerm);
ATerm z_6 (ATerm s_65, ATerm t_65, ATerm);
ATerm a_7 (ATerm r_86 (ATerm), ATerm b_33, ATerm c_33, ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm b_7 (ATerm x_64, ATerm y_64, ATerm w_64, ATerm);
ATerm repeat_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_25 (ATerm w_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm i_110 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm n_7 (ATerm d_32, ATerm e_32, ATerm);
ATerm o_7 (ATerm h_50, ATerm i_50, ATerm);
ATerm q_7 (ATerm z_97 (ATerm), ATerm i_392, ATerm l_50, ATerm);
ATerm p_7 (ATerm d_50, ATerm e_50, ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm d_35 (ATerm x_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_7 (ATerm j_50, ATerm);
ATerm s_7 (ATerm f_32, ATerm g_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_36 (ATerm n_35, ATerm);
ATerm p_36 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm);
ATerm q_36 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm m_7 (ATerm q_64, ATerm r_64, ATerm);
ATerm debug_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_7 (ATerm h_57, ATerm i_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm e_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_7 (ATerm y_43, ATerm z_43, ATerm x_43, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_7 (ATerm c_42, ATerm d_42, ATerm);
ATerm foldr_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm need_help_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm v_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_100 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm iowrap_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  b_0 = t;
  t = term_l_8;
  t = whoami_0_0(t);
  n_0 = t;
  t = term_m_8;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), n_0), term_q_8);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_y_8;
  o_0 = t;
  t = SSL_exit(o_0);
  t = b_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,f_0 = NULL,r_0 = NULL;
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
        ATerm a_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm b_9 = ATgetArgument(t, 1);
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
  f_0 = t;
  t = term_c_9;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATmakeAppl(sym__2, u_0, v_0));
  t = n_6(r_0, f_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_l_8;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm c_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      {
        ATerm i_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_1);
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      {
        ATerm j_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  l_1 = t;
  t = SSL_mkterm(c_1, l_1);
  h_1 = t;
  t = (ATerm) ATempty;
  k_1 = t;
  t = SSL_mkterm(g_1, k_1);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, j_1);
  d_1 = t;
  t = term_m_9;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATmakeAppl(sym__2, h_1, j_1));
  t = n_6(e_1, d_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_9) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_l_8;
  return(t);
}
ATerm n_6 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm r_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_44, k_44);
  t = v_7(j_44, k_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_1 = ATgetFirst((ATermList) t);
      {
        ATerm o_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL,b_2 = NULL,c_2 = NULL,f_2 = NULL,h_2 = NULL,l_2 = NULL,i_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      {
        ATerm p_9 = ATgetArgument(t, 1);
      }
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
  t = (ATerm) ATempty;
  f_2 = t;
  t = SSL_mkterm(v_1, f_2);
  y_1 = t;
  t = (ATerm) ATempty;
  c_2 = t;
  t = SSL_mkterm(x_1, c_2);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, b_2);
  i_1 = t;
  t = term_s_9;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATmakeAppl(sym__2, y_1, b_2));
  t = n_6(o_1, i_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_l_8;
  return(t);
}
ATerm at_last_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm n_3 = NULL,q_3 = NULL,s_3 = NULL;
    n_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_3 = ATgetFirst((ATermList) t);
        s_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(n_3);
          a_2 = t;
          t = s_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_3), q_3);
          y_0 = t;
          t = SSLsetAnnotations(y_0, a_2);
          t = y_87(t);
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm q_2 = NULL,z_2 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(n_3);
            q_2 = t;
            t = s_3;
            t = x_3(t);
            z_2 = t;
            t = (ATerm) ATinsert(CheckATermList(z_2), q_3);
            f_1 = t;
            t = SSLsetAnnotations(f_1, q_2);
          }
        }
    }
    return(t);
  }
  t = x_3(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm h_4 = NULL,k_4 = NULL;
  ATerm b_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_4 != NULL) && (h_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_4 = ATgetFirst((ATermList) t);
        {
          ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(c_10) != AT_LIST) || !(ATisEmpty(c_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(b_1, t);
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(h_4));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  t = SSL_explode_term(not_null(d_5));
  if(match_cons(t, sym__2))
    {
      if(((p_4 != NULL) && (p_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_4 = ATgetArgument(t, 0);
      {
        ATerm d_10 = ATgetArgument(t, 1);
        if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
          {
            if(((r_4 != NULL) && (r_4 != ATgetFirst((ATermList) d_10))))
              _fail(ATgetFirst((ATermList) d_10));
            else
              r_4 = ATgetFirst((ATermList) d_10);
            if(((q_4 != NULL) && (q_4 != (ATerm) ATgetNext((ATermList) d_10))))
              _fail((ATerm) ATgetNext((ATermList) d_10));
            else
              q_4 = (ATerm) ATgetNext((ATermList) d_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_4);
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((v_4 != NULL) && (v_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_4 = ATgetArgument(t, 0);
      if(((x_4 != NULL) && (x_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_4);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), not_null(r_4));
        t = RightAssoc_0_0(t);
        t = not_null(r_4);
        t = d_113(t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
      }
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    t = not_null(v_4);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm k_5 = NULL;
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), k_5);
        t = GreaterThan_0_0(t);
        t = k_5;
        t = d_113(t);
        return(t);
      }
      t = map_1_0(p_1, t);
      if(((w_4 != NULL) && (w_4 != t)))
        _fail(t);
      else
        w_4 = t;
      t = not_null(x_4);
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), not_null(x_4));
            t = LeftAssoc_0_0(t);
            t = not_null(x_4);
            t = d_113(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
          }
        if(((a_5 != NULL) && (a_5 != t)))
          _fail(t);
        else
          a_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATempty, not_null(a_5)));
        t = conc_0_0(t);
        if(((b_5 != NULL) && (b_5 != t)))
          _fail(t);
        else
          b_5 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(b_5)), not_null(t_4));
        if(((c_5 != NULL) && (c_5 != t)))
          _fail(t);
        else
          c_5 = t;
        t = SSL_mkterm(not_null(p_4), not_null(c_5));
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(j_110, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = j_110(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(v_5, w_5, t);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(s_5, t_5, t);
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(p_5, r_5, t);
  return(t);
}
ATerm o_6 (ATerm g_65, ATerm h_65, ATerm f_65, ATerm t)
{
  ATerm n_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_65, h_65);
  t = a_7(s_1, g_65, h_65, t);
  t = (ATerm) ATmakeAppl(sym__2, h_65, g_65);
  t = conc_0_0(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, f_65);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_6 = NULL,f_6 = NULL,k_6 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(k_6, c_7, t);
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(a_6, f_6, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(k_7, l_7, t);
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(i_7, j_7, t);
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(e_7, g_7, t);
  return(t);
}
ATerm p_6 (ATerm d_65, ATerm e_65, ATerm c_65, ATerm t)
{
  ATerm y_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_65, e_65);
  t = a_7(t_1, e_65, e_65, t);
  t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
  t = a_7(w_1, d_65, e_65, t);
  t = (ATerm) ATmakeAppl(sym__2, e_65, d_65);
  t = conc_0_0(t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_5, c_65);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(e_8, f_8, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(o_8, p_8, t);
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(i_8, n_8, t);
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(g_8, h_8, t);
  return(t);
}
ATerm q_6 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t)
{
  ATerm b_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_65, b_65);
  t = a_7(z_1, b_65, b_65, t);
  t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
  t = a_7(d_2, a_65, b_65, t);
  t = (ATerm) ATmakeAppl(sym__2, b_65, a_65);
  t = conc_0_0(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, z_64);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm r_6 (ATerm n_65, ATerm o_65, ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,d_9 = NULL;
  r_8 = t;
  t = (ATerm) ATempty;
  v_8 = t;
  t = SSL_mkterm(n_65, v_8);
  s_8 = t;
  t = (ATerm) ATempty;
  u_8 = t;
  t = SSL_mkterm(o_65, u_8);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
  w_8 = t;
  t = term_l_10;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_8, t_8), term_l_10);
  t = y_6(e_2, w_8, d_9, t);
  t = r_8;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm x_6 (ATerm i_65, ATerm j_65, ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,k_9 = NULL,l_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  e_9 = t;
  t = (ATerm) ATempty;
  t_9 = t;
  t = SSL_mkterm(i_65, t_9);
  f_9 = t;
  t = (ATerm) ATempty;
  l_9 = t;
  t = SSL_mkterm(j_65, l_9);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, k_9);
  u_9 = t;
  t = term_r_10;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_9, k_9), term_r_10);
  t = y_6(g_2, u_9, v_9, t);
  t = e_9;
  return(t);
}
ATerm y_6 (ATerm a_95 (ATerm), ATerm q_43, ATerm o_43, ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  t = a_95(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_9, q_43, o_43);
  t = w_7(y_9, q_43, o_43, t);
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_y_10;
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_9, term_y_10);
        t = v_7(y_9, s_10, t);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_9 = ATgetFirst((ATermList) t);
        n_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_y_10;
    p_10 = t;
    t = (ATerm) ATinsert(CheckATermList(n_10), (ATerm) ATinsert(CheckATermList(z_9), q_43));
    q_10 = t;
    t = SSL_table_put(y_9, p_10, q_10);
    t = o_10;
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm z_6 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm v_10 = NULL,z_10 = NULL,a_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,n_11 = NULL;
  v_10 = t;
  t = (ATerm) ATempty;
  f_11 = t;
  t = SSL_mkterm(s_65, f_11);
  z_10 = t;
  t = (ATerm) ATempty;
  e_11 = t;
  t = SSL_mkterm(t_65, e_11);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, a_11);
  g_11 = t;
  t = term_c_11;
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_10, a_11), term_c_11);
  t = y_6(i_2, g_11, n_11, t);
  t = v_10;
  return(t);
}
ATerm a_7 (ATerm r_86 (ATerm), ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm p_11 = NULL;
    ATerm k_2 (ATerm t)
    {
      ATerm u_11 = NULL;
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), u_11);
      t = r_86(t);
      return(t);
    }
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = not_null(c_33);
    t = map_1_0(k_2, t);
    return(t);
  }
  t = not_null(b_33);
  t = map_1_0(j_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(g_12, l_12, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm n_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(w_12, x_12, t);
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(u_12, v_12, t);
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(n_12, s_12, t);
  return(t);
}
ATerm b_7 (ATerm x_64, ATerm y_64, ATerm w_64, ATerm t)
{
  ATerm w_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_64, y_64);
  t = a_7(m_2, y_64, y_64, t);
  t = (ATerm) ATmakeAppl(sym__2, x_64, y_64);
  t = a_7(n_2, x_64, y_64, t);
  t = (ATerm) ATmakeAppl(sym__2, y_64, x_64);
  t = conc_0_0(t);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, w_64);
  return(t);
}
ATerm repeat_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm d_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_100(t);
        t = b_13(t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = d_11;
      }
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,u_1 = NULL;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_13 != NULL) && (d_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_13 = ATgetArgument(t, 0);
      if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(g_13));
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = not_null(e_13);
  {
    ATerm o_2 (ATerm t)
    {
      if(((d_13 != NULL) && (d_13 != t)))
        _fail(t);
      else
        d_13 = t;
      return(t);
    }
    t = fetch_1_0(o_2, t);
    if(((f_13 != NULL) && (f_13 != t)))
      _fail(t);
    else
      f_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(f_13));
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = SSLsetAnnotations(not_null(u_1), not_null(c_13));
  }
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm h_13 = NULL,o_3 = NULL,t_3 = NULL;
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_12), term_o_12), term_m_12), term_j_12), term_i_12), term_h_12), term_f_12), term_e_12), term_d_12), term_c_12), term_b_12), term_z_11), term_y_11), term_v_11), term_t_11), term_s_11), term_r_11), term_q_11), term_o_11), term_m_11), term_k_11), term_j_11));
  t = member_0_0(t);
  t = SSL_explode_string(h_13);
  t_3 = t;
  t = (ATerm) ATinsert(CheckATermList(t_3), term_r_12);
  o_3 = t;
  t = SSL_implode_string(o_3);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,x_13 = NULL,b_14 = NULL,c_14 = NULL,i_14 = NULL,s_2 = NULL;
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_14 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(i_13) != AT_INT) || (ATgetInt((ATermInt) i_13) != 34)))
                _fail(t);
              j_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_14), term_l_13), term_j_13);
          ;
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            ATerm m_14 = NULL,o_14 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_14 = ATgetFirst((ATermList) t);
                o_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_14;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(o_14), term_j_13), term_j_13);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(o_14), term_n_13), term_j_13);
              }
          }
        }
      i_14 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_13 = ATgetFirst((ATermList) t);
          b_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_14);
      t_13 = t;
      t = b_14;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      c_14 = t;
      t = (ATerm) ATinsert(CheckATermList(c_14), x_13);
      s_2 = t;
      t = SSLsetAnnotations(s_2, t_13);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = t_12;
      {
        ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
        j_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm z_3 = NULL,c_4 = NULL,t_2 = NULL;
              t = SSLgetAnnotations(j_15);
              z_3 = t;
              t = i_15;
              t = escape_chars_0_0(t);
              c_4 = t;
              t = (ATerm) ATinsert(CheckATermList(c_4), h_15);
              t_2 = t;
              t = SSLsetAnnotations(t_2, z_3);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_15;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym_Str_1))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm o_21 = NULL,j_4 = NULL,n_4 = NULL;
        t = SSL_explode_string(l_21);
        {
          ATerm o_13 = t;
          if((PushChoice() == 0))
            {
              ATerm o_4 = NULL,s_4 = NULL;
              o_4 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_13 = ATgetFirst((ATermList) t);
                  if(((ATgetType(p_13) != AT_INT) || (ATgetInt((ATermInt) p_13) != 34)))
                    _fail(t);
                  s_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_4;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = o_4;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_13;
            }
          t = escape_chars_0_0(t);
          n_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_4), term_l_13), (ATerm) ATinsert(ATempty, term_l_13));
          t = conc_0_0(t);
          j_4 = t;
          t = SSL_implode_string(j_4);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym_Str_1, o_21);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          l_21 = ATgetArgument(t, 0);
          {
            ATerm h_5 = NULL;
            t = SSL_real_to_string(l_21);
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, h_5);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              l_21 = ATgetArgument(t, 0);
              {
                ATerm c_6 = NULL;
                t = SSL_int_to_string(l_21);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, c_6);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  l_21 = ATgetArgument(t, 0);
                  {
                    ATerm i_6 = NULL,l_6 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(k_21);
                    i_6 = t;
                    t = l_21;
                    t = AddLeadingPrime_0_0(t);
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_6);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, i_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDef_3))
                    {
                      l_21 = ATgetArgument(t, 0);
                      m_21 = ATgetArgument(t, 1);
                      j_21 = ATgetArgument(t, 2);
                      {
                        ATerm f_7 = NULL,z_7 = NULL,a_3 = NULL;
                        t = SSLgetAnnotations(k_21);
                        f_7 = t;
                        t = l_21;
                        t = AddLeadingPrime_0_0(t);
                        z_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, z_7, m_21, j_21);
                        a_3 = t;
                        t = SSLsetAnnotations(a_3, f_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDef_3))
                        {
                          l_21 = ATgetArgument(t, 0);
                          m_21 = ATgetArgument(t, 1);
                          j_21 = ATgetArgument(t, 2);
                          {
                            ATerm z_8 = NULL,g_9 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(k_21);
                            z_8 = t;
                            t = l_21;
                            t = AddLeadingPrime_0_0(t);
                            g_9 = t;
                            t = (ATerm) ATmakeAppl(sym_SDef_3, g_9, m_21, j_21);
                            b_3 = t;
                            t = SSLsetAnnotations(b_3, z_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              l_21 = ATgetArgument(t, 0);
                              m_21 = ATgetArgument(t, 1);
                              {
                                ATerm r_9 = NULL,x_9 = NULL,d_3 = NULL;
                                t = SSLgetAnnotations(k_21);
                                r_9 = t;
                                t = l_21;
                                t = AddLeadingPrime_0_0(t);
                                x_9 = t;
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, x_9, m_21);
                                d_3 = t;
                                t = SSLsetAnnotations(d_3, r_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Var_1))
                                {
                                  l_21 = ATgetArgument(t, 0);
                                  {
                                    ATerm g_10 = NULL,i_10 = NULL,f_3 = NULL;
                                    t = SSLgetAnnotations(k_21);
                                    g_10 = t;
                                    t = l_21;
                                    t = AddLeadingPrime_0_0(t);
                                    i_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, g_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SVar_1))
                                    {
                                      l_21 = ATgetArgument(t, 0);
                                      {
                                        ATerm t_10 = NULL,w_10 = NULL,g_3 = NULL;
                                        t = SSLgetAnnotations(k_21);
                                        t_10 = t;
                                        t = l_21;
                                        t = AddLeadingPrime_0_0(t);
                                        w_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_SVar_1, w_10);
                                        g_3 = t;
                                        t = SSLsetAnnotations(g_3, t_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_OpDecl_2))
                                        {
                                          l_21 = ATgetArgument(t, 0);
                                          m_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm i_11 = NULL,l_11 = NULL,h_3 = NULL;
                                            t = SSLgetAnnotations(k_21);
                                            i_11 = t;
                                            t = l_21;
                                            t = AddLeadingPrime_0_0(t);
                                            l_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, l_11, m_21);
                                            h_3 = t;
                                            t = SSLsetAnnotations(h_3, i_11);
                                          }
                                        }
                                      else
                                        {
                                          ATerm x_11 = NULL,a_12 = NULL,i_3 = NULL;
                                          if(match_cons(t, sym_Op_2))
                                            {
                                              l_21 = ATgetArgument(t, 0);
                                              m_21 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(k_21);
                                          x_11 = t;
                                          t = l_21;
                                          t = AddLeadingPrime_0_0(t);
                                          a_12 = t;
                                          t = (ATerm) ATmakeAppl(sym_Op_2, a_12, m_21);
                                          i_3 = t;
                                          t = SSLsetAnnotations(i_3, x_11);
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
  ATerm q_24 (ATerm t)
  {
    ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
    p_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_24 = ATgetFirst((ATermList) t);
        o_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_12 = NULL,p_12 = NULL,k_13 = NULL;
          t = SSLgetAnnotations(p_24);
          k_12 = t;
          t = o_24;
          t = q_24(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_12), n_24);
          k_13 = t;
          t = SSLsetAnnotations(k_13, k_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_24;
        t = n_87(t);
      }
    return(t);
  }
  t = q_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_22 = NULL,f_23 = NULL,g_23 = NULL;
  z_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_22;
    }
  else
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(g_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_23 != NULL) && (f_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_23 = ATgetFirst((ATermList) t);
          if(((g_23 != NULL) && (g_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_23);
      t = at_end_1_0(p_2, t);
    }
  return(t);
}
ATerm n_25 (ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL;
  t = SSL_explode_term(w_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_25 = NULL,j_25 = NULL,k_25 = NULL;
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  if(match_cons(t, sym__2))
    {
      g_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
      {
        ATerm r_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              t = not_null(j_25);
              return(t);
            }
            t = not_null(g_25);
            t = at_end_1_0(r_2, t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = r_13;
            t = n_25(not_null(k_25), t);
          }
      }
    }
  else
    {
      t = n_25(not_null(k_25), t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_25;
    }
  else
    {
      t = y_25;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,m_13 = NULL;
  t_26 = t;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  m_26 = t;
  t = SSL_explode_string(q_26);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_26, r_26);
  m_13 = t;
  t = SSLsetAnnotations(m_13, m_26);
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((j_26 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      k_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_26;
  t = last_0_0(t);
  if((j_26 != t))
    {
      _fail(t);
    }
  t = s_26;
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm n_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
      n_27 = ATgetArgument(t, 2);
      t = n_27;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, q_27, r_27);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          n_27 = ATgetArgument(t, 2);
          t = n_27;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, q_27, r_27);
        }
      else
        {
          ATerm s_13 = NULL,a_14 = NULL,f_14 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              q_27 = ATgetArgument(t, 0);
              r_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_27;
          {
            ATerm w_13 = t;
            if((PushChoice() == 0))
              {
                ATerm u_13 = NULL;
                u_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_13, u_13);
                t = is_quoted_0_0(t);
                t = u_13;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_13;
              }
            t = SSL_explode_string(q_27);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_14), term_l_13), (ATerm) ATinsert(ATempty, term_l_13));
            t = conc_0_0(t);
            a_14 = t;
            t = SSL_implode_string(a_14);
            s_13 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, s_13, r_27);
          }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = topdown_1_0(i_110, t);
    return(t);
  }
  t = i_110(t);
  t = SRTS_all(u_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
      }
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,k_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym__2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_30 = ATgetFirst((ATermList) t);
      k_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_30;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_30;
  if(match_cons(t, sym_Some_1))
    {
      c_30 = ATgetArgument(t, 0);
      t = c_30;
      if(match_string(t, "left"))
        {
          t = d_30;
          t = b_7(e_30, i_30, k_30, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = d_30;
              t = q_6(e_30, i_30, k_30, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = d_30;
              t = p_6(e_30, i_30, k_30, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = d_30;
      t = o_6(e_30, i_30, k_30, t);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm d_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(e_3, t);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, l_31);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm n_28 = NULL,t_28 = NULL;
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL;
        t = SSL_explode_term(not_null(t_28));
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_14 = ATgetArgument(t, 1);
              if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
                {
                  h_14 = ATgetFirst((ATermList) p_14);
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
        t = h_14;
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = not_null(t_28);
      }
    t = topdown_1_0(v_2, t);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm z_28 = NULL,d_29 = NULL,g_29 = NULL,j_29 = NULL,m_29 = NULL;
        m_29 = t;
        if(match_cons(t, sym_Seq_2))
          {
            z_28 = ATgetArgument(t, 0);
            d_29 = ATgetArgument(t, 1);
            t = d_29;
            if(match_cons(t, sym_Seq_2))
              {
                g_29 = ATgetArgument(t, 0);
                j_29 = ATgetArgument(t, 1);
                {
                  ATerm r_14 = t;
                  int t_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_28, g_29);
                      t = w_2(t);
                      s_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_29, j_29);
                      t = w_2(t);
                      ;
                      LocalPopChoice(t_14);
                    }
                  else
                    {
                      t = r_14;
                      t = m_29;
                    }
                }
              }
            else
              {
                t = m_29;
              }
          }
        else
          {
            t = m_29;
          }
        return(t);
      }
      t = bottomup_1_0(w_2, t);
      if(((n_28 != NULL) && (n_28 != t)))
        _fail(t);
      else
        n_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, term_b_15), term_a_15))), (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATempty, term_y_14))));
      t = repeat_1_0(y_2, t);
      t = not_null(n_28);
      t = bottomup_1_0(c_3, t);
    }
  }
  return(t);
}
ATerm n_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_fputc(d_32, e_32);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_31);
  return(t);
}
ATerm o_7 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_write_term_to_stream_text(h_50, i_50);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_31);
  return(t);
}
ATerm q_7 (ATerm z_97 (ATerm), ATerm i_392, ATerm l_50, ATerm t)
{
  ATerm w_31 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_392, term_c_15);
  t = open_stream_0_0(t);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, l_50);
  t = z_97(t);
  t = fclose_0_0(t);
  t = l_50;
  return(t);
}
ATerm p_7 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_write_term_to_stream_baf(d_50, e_50);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_31);
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
      ATerm e_15 = ATgetArgument(t, 0);
      if(match_cons(e_15, sym_Stream_1))
        {
          o_15 = ATgetArgument(e_15, 0);
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
ATerm m_3 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym_Stream_1))
        {
          d_16 = ATgetArgument(k_15, 0);
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
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,h_34 = NULL,i_34 = NULL,s_14 = NULL,e_14 = NULL;
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  if(match_cons(t, sym__2))
    {
      if(((u_32 != NULL) && (u_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_32 = ATgetArgument(t, 0);
      if(((v_32 != NULL) && (v_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(m_32));
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  t = not_null(u_32);
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_32 != NULL) && (l_32 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_32 = ATgetArgument(t, 0);
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
        if(((l_32 != NULL) && (l_32 != t)))
          _fail(t);
        else
          l_32 = t;
      }
    if(((w_32 != NULL) && (w_32 != t)))
      _fail(t);
    else
      w_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_32), not_null(v_32));
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    t = SSLsetAnnotations(not_null(e_14), not_null(t_32));
    t = not_null(m_32);
    if(match_cons(t, sym__2))
      {
        if(((o_32 != NULL) && (o_32 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          o_32 = ATgetArgument(t, 0);
        if(((q_32 != NULL) && (q_32 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(m_32));
    if(((n_32 != NULL) && (n_32 != t)))
      _fail(t);
    else
      n_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), (ATerm) ATmakeAppl(sym__2, not_null(l_32), not_null(q_32)));
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = SSLsetAnnotations(not_null(s_14), not_null(n_32));
    if(((s_32 != NULL) && (s_32 != t)))
      _fail(t);
    else
      s_32 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_34 != NULL) && (h_34 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_34 = ATgetArgument(t, 0);
        if(((i_34 != NULL) && (i_34 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL,d_15 = NULL,g_15 = NULL,m_15 = NULL,n_15 = NULL,w_14 = NULL;
          t = SSLgetAnnotations(not_null(s_32));
          v_14 = t;
          t = not_null(h_34);
          t = fetch_1_0(k_3, t);
          d_15 = t;
          t = not_null(i_34);
          if(match_cons(t, sym__2))
            {
              m_15 = ATgetArgument(t, 0);
              n_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_7(l_3, m_15, n_15, t);
          g_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_15, g_15);
          w_14 = t;
          t = SSLsetAnnotations(w_14, v_14);
          ;
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          {
            ATerm u_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,z_14 = NULL;
            t = SSLgetAnnotations(not_null(s_32));
            u_15 = t;
            t = not_null(i_34);
            if(match_cons(t, sym__2))
              {
                y_15 = ATgetArgument(t, 0);
                z_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_7(m_3, y_15, z_15, t);
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), x_15);
            z_14 = t;
            t = SSLsetAnnotations(z_14, u_15);
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
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  p_34 = t;
  t = dtime_0_0(t);
  t = p_34;
  t = b_84(t);
  o_34 = t;
  t = dtime_0_0(t);
  l_34 = t;
  t = o_34;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_34), (ATerm) ATmakeAppl(sym_Runtime_1, l_34)), n_34);
  return(t);
}
ATerm d_35 (ATerm x_34, ATerm t)
{
  t = SSL_fclose(x_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  b_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_35 = ATgetArgument(t, 0);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_35);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = d_35(b_35, t);
          }
      }
    }
  else
    {
      t = d_35(b_35, t);
    }
  return(t);
}
ATerm r_7 (ATerm j_50, ATerm t)
{
  t = SSL_read_term_from_stream(j_50);
  return(t);
}
ATerm s_7 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm e_35 = NULL;
  t = SSL_fopen(f_32, g_32);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_stdin_stream();
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_stdout_stream();
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = SSL_stderr_stream();
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_35);
  return(t);
}
ATerm o_36 (ATerm n_35, ATerm t)
{
  ATerm o_35 = NULL;
  t = SSL_explode_term(n_35);
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_16 = ATgetArgument(t, 1);
        if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
          {
            o_35 = ATgetFirst((ATermList) i_16);
            {
              ATerm l_16 = (ATerm) ATgetNext((ATermList) i_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_36 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,z_35 = NULL,f_15 = NULL;
  t = SSLgetAnnotations(t_35);
  w_35 = t;
  t = r_35;
  if(match_cons(t, sym_Path_1))
    {
      z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_35, s_35);
  f_15 = t;
  t = SSLsetAnnotations(f_15, w_35);
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(u_35, v_35, t);
  return(t);
}
ATerm q_36 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,j_36 = NULL,l_15 = NULL;
  t = SSLgetAnnotations(d_36);
  g_36 = t;
  t = SSL_is_string(b_36);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, c_36);
  l_15 = t;
  t = SSLsetAnnotations(l_15, g_36);
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(e_36, f_36, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_16 = ATgetArgument(t, 0);
      ATerm o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_36 = t;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_36(l_36, t);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm r_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_36(m_36, n_36, l_36, t);
                  ;
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = r_16;
                  t = q_36(m_36, n_36, l_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_36(l_36, t);
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_36 = NULL;
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_36, term_y_16);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = debug_1_0(p_3, t);
      _fail(t);
    }
  s_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(t_36, t);
  r_36 = t;
  t = s_36;
  t = fclose_0_0(t);
  t = r_36;
  return(t);
}
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm s_37 (ATerm t)
  {
    ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
    p_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_37 = ATgetFirst((ATermList) t);
        r_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_17 = NULL,k_17 = NULL,j_16 = NULL;
          t = SSLgetAnnotations(p_37);
          b_17 = t;
          t = q_37;
          t = h_87(t);
          k_17 = t;
          t = (ATerm) ATinsert(CheckATermList(r_37), k_17);
          j_16 = t;
          t = SSLsetAnnotations(j_16, b_17);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm z_17 = NULL,o_18 = NULL,k_16 = NULL;
            t = SSLgetAnnotations(p_37);
            z_17 = t;
            t = r_37;
            t = s_37(t);
            o_18 = t;
            t = (ATerm) ATinsert(CheckATermList(o_18), q_37);
            k_16 = t;
            t = SSLsetAnnotations(k_16, z_17);
          }
        }
    }
    return(t);
  }
  t = s_37(t);
  return(t);
}
ATerm m_7 (ATerm q_64, ATerm r_64, ATerm t)
{
  t = SSL_strcat(q_64, r_64);
  return(t);
}
ATerm debug_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  v_37 = t;
  t = x_97(t);
  w_37 = t;
  t = term_m_8;
  x_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_37), w_37);
  y_37 = t;
  t = SSL_printnl(x_37, y_37);
  t = v_37;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_38 = NULL;
      f_38 = t;
      t = SSL_is_string(f_38);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
              l_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_38 = ATgetArgument(t, 0);
                  t = m_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_38 = ATgetArgument(t, 0);
                      t = m_38;
                      {
                        ATerm n_17 = t;
                        int p_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_17);
                          }
                        else
                          {
                            t = n_17;
                            t = debug_1_0(u_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_38 = NULL,s_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_38 = ATgetArgument(t, 0);
                          n_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_38;
                      t = eval_config_0_0(t);
                      r_38 = t;
                      t = n_38;
                      t = eval_config_0_0(t);
                      s_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
                      t = m_7(r_38, s_38, t);
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
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  t = term_q_17;
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, x_38);
  t = v_7(y_38, x_38, t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL,a_39 = NULL;
        t = eval_config_0_0(t);
        z_38 = t;
        t = term_q_17;
        a_39 = t;
        t = SSL_table_put(a_39, x_38, z_38);
        t = z_38;
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
ATerm if_verbose2_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        g_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_39, term_w_17);
        t = geq_0_0(t);
        t = e_39;
        t = i_108(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = e_39;
      }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  if(match_string(t, "-k"))
    {
      t = j_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_39;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  t = SSL_string_to_int(k_39);
  l_39 = t;
  t = term_x_17;
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, l_39);
  t = y_7(m_39, l_39, t);
  t = k_39;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, y_3, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  if(match_string(t, "-S"))
    {
      t = o_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_39;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  t = term_v_17;
  p_39 = t;
  t = term_a_18;
  q_39 = t;
  t = term_b_18;
  t = y_7(p_39, q_39, t);
  t = term_c_18;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  t = SSL_string_to_int(r_39);
  s_39 = t;
  t = term_v_17;
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, s_39);
  t = y_7(t_39, s_39, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_39);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_f_18;
  u_39 = t;
  t = term_l_8;
  v_39 = t;
  t = term_g_18;
  t = y_7(u_39, v_39, t);
  t = term_h_18;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, b_4, d_4, t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = Option_3_0(i_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
ATerm y_7 (ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm w_39 = NULL;
  t = term_q_17;
  w_39 = t;
  t = SSL_table_put(w_39, h_57, i_57);
  t = (ATerm) ATmakeAppl(sym__3, term_q_17, h_57, i_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
      t = term_l_8;
      t = d_0(t);
      d_40 = t;
      t = term_n_18;
      e_40 = t;
      t = term_p_18;
      f_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_p_18, d_40);
      t = w_7(e_40, f_40, d_40, t);
      _fail(t);
    }
  else
    {
      ATerm i_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_40 = ATgetFirst((ATermList) t);
          c_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_40;
      t = a_0(t);
      t = term_l_8;
      t = c_0(t);
      i_40 = t;
      t = (ATerm) ATinsert(CheckATermList(c_40), i_40);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  if(match_string(t, "-o"))
    {
      t = k_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_40;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  l_40 = t;
  t = term_q_18;
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, l_40);
  t = y_7(m_40, l_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_40);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, y_4, e_5, t);
  return(t);
}
ATerm w_7 (ATerm y_43, ATerm z_43, ATerm x_43, ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
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
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        t = v_7(y_43, z_43, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATempty;
      }
    p_40 = t;
    t = (ATerm) ATinsert(CheckATermList(p_40), x_43);
    q_40 = t;
    t = SSL_table_put(y_43, z_43, q_40);
    t = o_40;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
      t = term_l_8;
      t = l_0(t);
      b_41 = t;
      t = term_n_18;
      c_41 = t;
      t = term_p_18;
      d_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_p_18, b_41);
      t = w_7(c_41, d_41, b_41, t);
      _fail(t);
    }
  else
    {
      ATerm h_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          y_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_40;
      t = i_0(t);
      t = z_40;
      t = k_0(t);
      h_41 = t;
      t = (ATerm) ATinsert(CheckATermList(a_41), h_41);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  if(match_string(t, "-i"))
    {
      t = j_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_41;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  k_41 = t;
  t = term_w_18;
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, k_41);
  t = y_7(l_41, k_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_41);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_8;
  t = whoami_0_0(t);
  m_41 = t;
  t = term_m_8;
  o_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_18), m_41);
  p_41 = t;
  t = SSL_printnl(o_41, p_41);
  t = term_y_8;
  n_41 = t;
  t = SSL_exit(n_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_18;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_7 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_42, d_42);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      t = SSL_addr(c_42, d_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_41;
      t = p_93(t);
    }
  else
    {
      ATerm w_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_41 = ATgetFirst((ATermList) t);
          t_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_41;
      t = foldr_2_0(p_93, q_93, t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_41, w_41);
      t = q_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm j_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(j_19, m_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_41 = NULL,f_19 = NULL,g_19 = NULL;
  t = times_0_0(t);
  g_19 = t;
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_19;
  t = foldr_2_0(j_5, l_5, t);
  z_41 = t;
  t = SSL_TicksToSeconds(z_41);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  if(match_cons(t, sym__2))
    {
      n_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_42;
        if((n_42 != t))
          {
            _fail(t);
          }
        t = m_42;
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_42, o_42);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = SSL_gtr(n_42, o_42);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        u_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_42, term_y_8);
        t = geq_0_0(t);
        t = s_42;
        t = h_108(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = s_42;
      }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,z_42 = NULL,a_43 = NULL;
  t = run_time_0_0(t);
  w_42 = t;
  t = term_l_8;
  t = whoami_0_0(t);
  x_42 = t;
  t = term_m_8;
  z_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), w_42), term_n_19), x_42);
  a_43 = t;
  t = SSL_printnl(z_42, a_43);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), w_42), term_n_19), x_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_18;
  b_43 = t;
  t = SSL_exit(b_43);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  l_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_43 = ATgetArgument(t, 0);
          {
            ATerm u_20 = NULL,n_16 = NULL;
            t = SSLgetAnnotations(l_43);
            u_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_43);
            n_16 = t;
            t = SSLsetAnnotations(n_16, u_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_84 (ATerm), ATerm t)
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
      t = fetch_1_0(o_5, t);
    }
  t = z_84(t);
  return(t);
}
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm m_44 (ATerm t)
  {
    ATerm h_44 = NULL,i_44 = NULL,l_44 = NULL;
    h_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_44;
      }
    else
      {
        ATerm g_21 = NULL,u_21 = NULL,w_21 = NULL,s_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_44 = ATgetFirst((ATermList) t);
            l_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_44);
        g_21 = t;
        t = i_44;
        t = x_86(t);
        u_21 = t;
        t = l_44;
        t = m_44(t);
        w_21 = t;
        t = (ATerm) ATinsert(CheckATermList(w_21), u_21);
        s_16 = t;
        t = SSLsetAnnotations(s_16, g_21);
      }
    return(t);
  }
  t = m_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_44 = ATgetFirst((ATermList) t);
      q_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_44 = NULL,v_44 = NULL;
        ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_44)), not_null(v_44));
          return(t);
        }
        t = not_null(q_44);
        t = g_0(t);
        if(((u_44 != NULL) && (u_44 != t)))
          _fail(t);
        else
          u_44 = t;
        t = not_null(p_44);
        t = e_0(t);
        if(((v_44 != NULL) && (v_44 != t)))
          _fail(t);
        else
          v_44 = t;
        t = not_null(q_44);
        t = reverse_acc_2_0(e_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_8;
      t = g_0(t);
    }
  return(t);
}
ATerm v_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  t = SSL_table_get(p_45, q_45);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,v_16 = NULL;
  b_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_45);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_45);
  v_16 = t;
  t = SSLsetAnnotations(v_16, z_44);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_45), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(u_5, t);
    }
  t = term_v_19;
  t = echo_0_0(t);
  t = term_n_18;
  x_44 = t;
  t = term_p_18;
  y_44 = t;
  t = term_w_19;
  t = v_7(x_44, y_44, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_19 = ATgetFirst((ATermList) t);
                ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_45;
          }
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, f_45);
      }
    g_45 = t;
    t = term_t_15;
    h_45 = t;
    t = SSL_printnl(h_45, g_45);
    t = f_45;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_18;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  t = term_b_20;
  l_45 = t;
  t = term_l_8;
  m_45 = t;
  t = term_c_20;
  t = y_7(l_45, m_45, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,r_45 = NULL,s_45 = NULL;
  t = term_b_20;
  r_45 = t;
  t = term_l_8;
  s_45 = t;
  t = term_c_20;
  t = y_7(r_45, s_45, t);
  t = term_e_20;
  n_45 = t;
  t = term_l_8;
  o_45 = t;
  t = term_f_20;
  t = y_7(n_45, o_45, t);
  t = term_g_20;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, d_6, e_6, t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      t = Option_3_0(g_6, h_6, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,e_17 = NULL;
  y_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_45 = ATgetFirst((ATermList) t);
      v_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_45);
  t_45 = t;
  t = u_45;
  t = w_70(t);
  w_45 = t;
  t = v_45;
  t = x_70(t);
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
  e_17 = t;
  t = SSLsetAnnotations(e_17, t_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,i_46 = NULL,j_46 = NULL,g_17 = NULL;
  if(((d_46 != NULL) && (d_46 != t)))
    _fail(t);
  else
    d_46 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_20;
        t = g_100(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
      }
    t = not_null(d_46);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_46 != NULL) && (f_46 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_46 = ATgetFirst((ATermList) t);
        if(((g_46 != NULL) && (g_46 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(d_46));
    if(((e_46 != NULL) && (e_46 != t)))
      _fail(t);
    else
      e_46 = t;
    t = term_z_18;
    if(((j_46 != NULL) && (j_46 != t)))
      _fail(t);
    else
      j_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(f_46));
    t = y_7(not_null(j_46), not_null(f_46), t);
    t = not_null(g_46);
    {
      ATerm t_46 (ATerm t)
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_46 = NULL;
                m_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_46;
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = g_100(t);
                t = Cons_2_0(_id, t_46, t);
              }
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm p_46 = NULL,q_46 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_46 = ATgetFirst((ATermList) t);
                  q_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_46), (ATerm) ATmakeAppl(sym_Undefined_1, p_46));
            }
          }
        return(t);
      }
      t = t_46(t);
      if(((i_46 != NULL) && (i_46 != t)))
        _fail(t);
      else
        i_46 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(i_46)), (ATerm) ATmakeAppl(sym_Program_1, not_null(f_46)));
      if(((g_17 != NULL) && (g_17 != t)))
        _fail(t);
      else
        g_17 = t;
      t = SSLsetAnnotations(not_null(g_17), not_null(e_46));
    }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  if(match_string(t, "--help"))
    {
      t = f_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_47;
        }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  t = term_r_19;
  g_47 = t;
  t = term_l_8;
  h_47 = t;
  t = term_r_20;
  t = y_7(g_47, h_47, t);
  t = term_s_20;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  t = term_n_18;
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  t = term_p_18;
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = (ATerm) ATempty;
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = SSL_table_put(not_null(c_47), not_null(d_47), not_null(e_47));
  t = not_null(a_47);
  {
    ATerm m_6 (ATerm t)
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_100(t);
          ;
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          {
            ATerm x_20 = t;
            int y_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_6, t_6, u_6, t);
                ;
                LocalPopChoice(y_20);
              }
            else
              {
                t = x_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_6, t);
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_47 = NULL;
          o_47 = t;
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_22 = NULL;
                t = o_47;
                {
                  ATerm d_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = d_21;
                      t = fetch_1_0(v_6, t);
                    }
                  t = o_47;
                  t = default_system_usage_0_0(t);
                  t = term_a_18;
                  f_22 = t;
                  t = SSL_exit(f_22);
                }
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                {
                  ATerm k_22 = NULL;
                  t = term_b_20;
                  t = get_config_0_0(t);
                  t = o_47;
                  t = default_system_about_0_0(t);
                  t = term_a_18;
                  k_22 = t;
                  t = SSL_exit(k_22);
                }
              }
          }
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          {
            ATerm f_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
                ATerm w_6 (ATerm t)
                {
                  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,i_17 = NULL;
                  u_47 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_47);
                  s_47 = t;
                  t = t_47;
                  if(((y_46 != NULL) && (y_46 != t)))
                    _fail(t);
                  else
                    y_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_47);
                  i_17 = t;
                  t = SSLsetAnnotations(i_17, s_47);
                  return(t);
                }
                t = fetch_1_0(w_6, t);
                t = term_m_8;
                if(((q_47 != NULL) && (q_47 != t)))
                  _fail(t);
                else
                  q_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_i_21);
                if(((r_47 != NULL) && (r_47 != t)))
                  _fail(t);
                else
                  r_47 = t;
                t = SSL_printnl(not_null(q_47), not_null(r_47));
                t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_i_21));
                t = default_system_usage_0_0(t);
                t = term_y_8;
                if(((p_47 != NULL) && (p_47 != t)))
                  _fail(t);
                else
                  p_47 = t;
                t = SSL_exit(not_null(p_47));
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = f_21;
              }
          }
        }
      if(((z_46 != NULL) && (z_46 != t)))
        _fail(t);
      else
        z_46 = t;
      t = term_n_18;
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = SSL_table_destroy(not_null(b_47));
      t = not_null(z_46);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  t = parse_options_1_0(b_85, t);
  z_47 = t;
  t = term_n_21;
  c_48 = t;
  t = SSL_table_create(c_48);
  t = term_n_21;
  a_48 = t;
  t = term_p_21;
  b_48 = t;
  t = SSL_table_put(a_48, b_48, z_47);
  t = z_47;
  t = d_85(t);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_85, t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = if_verbose2_1_0(d_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  t = term_v_21;
  d_48 = t;
  t = term_l_8;
  e_48 = t;
  t = term_x_21;
  t = y_7(d_48, e_48, t);
  t = term_y_21;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  f_48 = t;
  t = term_z_18;
  t = get_config_0_0(t);
  g_48 = t;
  t = term_m_8;
  h_48 = t;
  t = (ATerm) ATinsert(ATempty, g_48);
  i_48 = t;
  t = SSL_printnl(h_48, i_48);
  t = f_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          t = Option_3_0(x_7, a_8, c_8, t);
                          ;
                          LocalPopChoice(i_22);
                        }
                      else
                        {
                          t = h_22;
                          {
                            ATerm j_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = j_22;
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
  ATerm u_7 (ATerm t)
  {
    ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
    if(((k_48 != NULL) && (k_48 != t)))
      _fail(t);
    else
      k_48 = t;
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_48 != NULL) && (j_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_8, t);
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          t = term_o_22;
          if(((j_48 != NULL) && (j_48 != t)))
            _fail(t);
          else
            j_48 = t;
        }
      t = not_null(j_48);
      t = ReadFromFile_0_0(t);
      if(((l_48 != NULL) && (l_48 != t)))
        _fail(t);
      else
        l_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_48), not_null(l_48));
      t = apply_strategy_1_0(k_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_7, m_84, h_7, u_7, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,o_17 = NULL;
  q_48 = t;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  m_48 = t;
  t = o_48;
  t = Stratego_Ensugar_0_0(t);
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, p_48);
  o_17 = t;
  t = SSLsetAnnotations(o_17, m_48);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_8, _fail, default_usage_0_0, t);
  return(t);
}
