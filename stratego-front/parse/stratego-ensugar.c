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
ATerm term_k_35;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_t_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_z_26;
ATerm term_p_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_k_24;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_b_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_d_14;
void init_constant_terms (void)
{
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_17);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Some_1, term_k_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__3, term_z_26, term_s_31, term_d_14);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm e_0 (ATerm c_0, ATerm);
ATerm d_7 (ATerm);
ATerm r_0 (ATerm s_0, ATerm t_0, ATerm);
ATerm f_7 (ATerm);
ATerm y_0 (ATerm j_1, ATerm m_1, ATerm);
ATerm d_1 (ATerm u_94 (ATerm), ATerm w_1, ATerm);
ATerm g_7 (ATerm);
ATerm e_1 (ATerm b_2, ATerm c_2, ATerm);
ATerm j_7 (ATerm);
ATerm at_last_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm f_1 (ATerm v_112 (ATerm), ATerm v_2, ATerm z_2, ATerm);
ATerm bottomup_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm h_1 (ATerm l_4, ATerm m_4, ATerm o_4, ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm i_1 (ATerm q_4, ATerm s_4, ATerm t_4, ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_1 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm);
ATerm n_8 (ATerm);
ATerm l_1 (ATerm b_5, ATerm c_5, ATerm);
ATerm o_8 (ATerm);
ATerm f_2 (ATerm l_5, ATerm m_5, ATerm);
ATerm i_2 (ATerm s_94 (ATerm), ATerm u_5, ATerm v_5, ATerm);
ATerm p_8 (ATerm);
ATerm j_2 (ATerm z_6, ATerm a_7, ATerm);
ATerm l_2 (ATerm j_86 (ATerm), ATerm o_7, ATerm p_7, ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm m_2 (ATerm z_7, ATerm m_8, ATerm t_8, ATerm);
ATerm d_9 (ATerm);
ATerm n_2 (ATerm f_9, ATerm);
ATerm member_0_0 (ATerm);
ATerm p_9 (ATerm);
ATerm w_2 (ATerm k_9, ATerm);
ATerm x_2 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm y_10, ATerm h_10, ATerm i_10, ATerm);
ATerm y_2 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm k_11, ATerm d_11, ATerm g_11, ATerm);
ATerm f_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm p_12, ATerm g_12, ATerm k_12, ATerm);
ATerm k_3 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm z_12, ATerm t_12, ATerm u_12, ATerm v_12, ATerm);
ATerm l_3 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm j_13, ATerm d_13, ATerm e_13, ATerm f_13, ATerm);
ATerm q_9 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm e_10 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_16 (ATerm a_16, ATerm);
ATerm conc_0_0 (ATerm);
ATerm n_3 (ATerm n_16, ATerm r_16, ATerm);
ATerm o_3 (ATerm y_109 (ATerm), ATerm t_16, ATerm);
ATerm last_0_0 (ATerm);
ATerm n_10 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm o_10 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm e_11 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm r_3 (ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm s_19, ATerm o_19, ATerm p_19, ATerm);
ATerm t_3 (ATerm r_97 (ATerm), ATerm x_19, ATerm y_19, ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm u_3 (ATerm b_20, ATerm);
ATerm dtime_0_0 (ATerm);
ATerm v_3 (ATerm t_83 (ATerm), ATerm v_20, ATerm);
ATerm q_21 (ATerm i_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm x_3 (ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm r_22, ATerm);
ATerm fetch_1_0 (ATerm z_86 (ATerm), ATerm);
ATerm a_4 (ATerm p_97 (ATerm), ATerm y_22, ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm b_4 (ATerm l_24, ATerm);
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_12 (ATerm);
ATerm l_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_4 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm a_26, ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm b_27, ATerm d_27, ATerm e_27, ATerm);
ATerm f_4 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm w_27, ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm t_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_13 (ATerm);
ATerm y_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm b_14 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_14 (ATerm);
ATerm need_help_1_0 (ATerm r_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm h_4 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm b_31, ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm k_14 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm n_4 (ATerm w_31, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm);
ATerm r_4 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm u_32, ATerm q_32, ATerm r_32, ATerm);
ATerm r_14 (ATerm);
ATerm u_4 (ATerm y_99 (ATerm), ATerm b_33, ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm b_15 (ATerm);
ATerm x_4 (ATerm x_99 (ATerm), ATerm v_33, ATerm);
ATerm option_wrap_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm);
ATerm f_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm iowrap_3_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm s_15 (ATerm);
ATerm u_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm e_0 (ATerm c_0, ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  t = term_d_14;
  t = whoami_0_0(t);
  n_0 = t;
  t = term_v_15;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_16), n_0), term_w_15);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_k_16;
  q_0 = t;
  t = SSL_exit(q_0);
  t = c_0;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm r_0 (ATerm s_0, ATerm t_0, ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,g_1 = NULL,f_5 = NULL;
  t = t_0;
  v_0 = t;
  t = SSL_explode_term(v_0);
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_0;
  x_0 = t;
  t = SSL_explode_term(x_0);
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      {
        ATerm q_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  a_1 = t;
  t = SSL_mkterm(z_0, a_1);
  b_1 = t;
  t = (ATerm) ATempty;
  c_1 = t;
  t = SSL_mkterm(w_0, c_1);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, g_1);
  f_5 = t;
  t = d_1(d_7, f_5, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_d_14;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm y_0 (ATerm j_1, ATerm m_1, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,i_5 = NULL;
  t = m_1;
  o_1 = t;
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      {
        ATerm a_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_1;
  q_1 = t;
  t = SSL_explode_term(q_1);
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      {
        ATerm b_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  s_1 = t;
  t = SSL_mkterm(r_1, s_1);
  t_1 = t;
  t = (ATerm) ATempty;
  u_1 = t;
  t = SSL_mkterm(p_1, u_1);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_1, v_1);
  i_5 = t;
  t = d_1(f_7, i_5, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm c_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_d_14;
  return(t);
}
ATerm d_1 (ATerm u_94 (ATerm), ATerm w_1, ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t = term_d_14;
  t = u_94(t);
  y_1 = t;
  t = w_1;
  z_1 = t;
  t = SSL_table_get(y_1, z_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_2 = ATgetFirst((ATermList) t);
      {
        ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_2;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm e_1 (ATerm b_2, ATerm c_2, ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL,k_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,q_5 = NULL;
  t = c_2;
  e_2 = t;
  t = SSL_explode_term(e_2);
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm f_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_2;
  h_2 = t;
  t = SSL_explode_term(h_2);
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      {
        ATerm g_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  o_2 = t;
  t = SSL_mkterm(k_2, o_2);
  p_2 = t;
  t = (ATerm) ATempty;
  q_2 = t;
  t = SSL_mkterm(g_2, q_2);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, r_2);
  q_5 = t;
  t = d_1(g_7, q_5, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_d_14;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL,y_5 = NULL,b_6 = NULL;
        s_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_5 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_4(_id, j_7, s_5, y_5, b_6, t);
        t = q_87(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
          g_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_6 = ATgetFirst((ATermList) t);
              i_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4(_id, s_2, g_6, h_6, i_6, t);
        }
      }
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  ATerm n_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_2 != NULL) && (t_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_2 = ATgetFirst((ATermList) t);
        {
          ATerm k_17 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(k_17) != AT_LIST) || !(ATisEmpty(k_17))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(n_7, t);
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_2, not_null(t_2));
  return(t);
}
ATerm f_1 (ATerm v_112 (ATerm), ATerm v_2, ATerm z_2, ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,q_3 = NULL,s_3 = NULL,y_3 = NULL,z_3 = NULL,e_4 = NULL;
  t = z_2;
  b_3 = t;
  t = SSL_explode_term(b_3);
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            g_3 = ATgetFirst((ATermList) l_17);
            h_3 = (ATerm) ATgetNext((ATermList) l_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_3;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL,p_6 = NULL;
        t = v_2;
        o_6 = t;
        t = g_3;
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_2, g_3);
        t = e_1(o_6, p_6, t);
        t = g_3;
        t = v_112(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
    q_3 = t;
    t = i_3;
    {
      ATerm t_7 (ATerm t)
      {
        ATerm i_4 = NULL,s_6 = NULL,t_6 = NULL;
        i_4 = t;
        t = v_2;
        s_6 = t;
        t = i_4;
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_2, i_4);
        t = y_0(s_6, t_6, t);
        t = i_4;
        t = v_112(t);
        return(t);
      }
      t = map_1_0(t_7, t);
      s_3 = t;
      t = j_3;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 = NULL,y_6 = NULL;
            t = v_2;
            w_6 = t;
            t = j_3;
            y_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_2, j_3);
            t = r_0(w_6, y_6, t);
            t = j_3;
            t = v_112(t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
          }
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATinsert(ATempty, y_3));
        t = conc_0_0(t);
        z_3 = t;
        t = (ATerm) ATinsert(CheckATermList(z_3), q_3);
        e_4 = t;
        t = SSL_mkterm(e_3, e_4);
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = bottomup_1_0(b_110, t);
    return(t);
  }
  t = SRTS_all(u_7, t);
  t = b_110(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,v_7 = NULL,w_7 = NULL,r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2(h_7, i_7, t);
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(r_7, s_7, t);
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1(v_7, w_7, t);
  return(t);
}
ATerm h_1 (ATerm l_4, ATerm m_4, ATerm o_4, ATerm t)
{
  ATerm p_4 = NULL,b_7 = NULL,c_7 = NULL;
  t = l_4;
  b_7 = t;
  t = m_4;
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  t = l_2(b_8, b_7, c_7, t);
  t = (ATerm) ATmakeAppl(sym__2, m_4, l_4);
  t = conc_0_0(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, o_4);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(e_8, f_8, t);
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1(i_8, j_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,z_8 = NULL,a_9 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2(q_8, r_8, t);
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(v_8, w_8, t);
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1(z_8, a_9, t);
  return(t);
}
ATerm i_1 (ATerm q_4, ATerm s_4, ATerm t_4, ATerm t)
{
  ATerm v_4 = NULL,y_7 = NULL,a_8 = NULL,k_8 = NULL,l_8 = NULL;
  t = s_4;
  y_7 = t;
  t = s_4;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, s_4);
  t = l_2(c_8, y_7, a_8, t);
  t = q_4;
  k_8 = t;
  t = s_4;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, s_4);
  t = l_2(d_8, k_8, l_8, t);
  t = (ATerm) ATmakeAppl(sym__2, s_4, q_4);
  t = conc_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm i_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(i_9, l_9, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,a_10 = NULL,b_10 = NULL,w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2(r_9, s_9, t);
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(w_9, x_9, t);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1(a_10, b_10, t);
  return(t);
}
ATerm k_1 (ATerm w_4, ATerm y_4, ATerm z_4, ATerm t)
{
  ATerm a_5 = NULL,b_9 = NULL,c_9 = NULL,m_9 = NULL,n_9 = NULL;
  t = y_4;
  b_9 = t;
  t = y_4;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_4, y_4);
  t = l_2(g_8, b_9, c_9, t);
  t = w_4;
  m_9 = t;
  t = y_4;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, y_4);
  t = l_2(h_8, m_9, n_9, t);
  t = (ATerm) ATmakeAppl(sym__2, y_4, w_4);
  t = conc_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm l_1 (ATerm b_5, ATerm c_5, ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,h_5 = NULL,j_5 = NULL,c_10 = NULL,d_10 = NULL;
  t = (ATerm) ATempty;
  d_5 = t;
  t = SSL_mkterm(b_5, d_5);
  e_5 = t;
  t = (ATerm) ATempty;
  h_5 = t;
  t = SSL_mkterm(c_5, h_5);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, j_5);
  c_10 = t;
  t = term_r_17;
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_5, j_5), term_r_17);
  t = i_2(n_8, c_10, d_10, t);
  t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm f_2 (ATerm l_5, ATerm m_5, ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,t_5 = NULL,f_10 = NULL,j_10 = NULL;
  t = (ATerm) ATempty;
  n_5 = t;
  t = SSL_mkterm(l_5, n_5);
  o_5 = t;
  t = (ATerm) ATempty;
  p_5 = t;
  t = SSL_mkterm(m_5, p_5);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, t_5);
  f_10 = t;
  t = term_t_17;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_5, t_5), term_t_17);
  t = i_2(o_8, f_10, j_10, t);
  t = (ATerm) ATmakeAppl(sym__2, l_5, m_5);
  return(t);
}
ATerm i_2 (ATerm s_94 (ATerm), ATerm u_5, ATerm v_5, ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL,d_6 = NULL,e_6 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  t = s_94(t);
  w_5 = t;
  q_10 = t;
  t = u_5;
  r_10 = t;
  t = v_5;
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_5, u_5, v_5);
  t = d_4(q_10, r_10, s_10, t);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_6 = NULL,x_6 = NULL;
        t = w_5;
        k_6 = t;
        t = term_w_17;
        x_6 = t;
        t = SSL_table_get(k_6, x_6);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_5 = ATgetFirst((ATermList) t);
        z_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = w_5;
    a_6 = t;
    t = term_w_17;
    d_6 = t;
    t = (ATerm) ATinsert(CheckATermList(z_5), (ATerm) ATinsert(CheckATermList(x_5), u_5));
    e_6 = t;
    t = SSL_table_put(a_6, d_6, e_6);
    t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm j_2 (ATerm z_6, ATerm a_7, ATerm t)
{
  ATerm e_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,t_10 = NULL,u_10 = NULL;
  t = (ATerm) ATempty;
  e_7 = t;
  t = SSL_mkterm(z_6, e_7);
  k_7 = t;
  t = (ATerm) ATempty;
  l_7 = t;
  t = SSL_mkterm(a_7, l_7);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_7, m_7);
  t_10 = t;
  t = term_y_17;
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_7, m_7), term_y_17);
  t = i_2(p_8, t_10, u_10, t);
  t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
  return(t);
}
ATerm l_2 (ATerm j_86 (ATerm), ATerm o_7, ATerm p_7, ATerm t)
{
  t = o_7;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm q_7 = NULL;
      ATerm u_8 (ATerm t)
      {
        ATerm x_7 = NULL;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_7), x_7);
        t = j_86(t);
        return(t);
      }
      if(((q_7 != NULL) && (q_7 != t)))
        _fail(t);
      else
        q_7 = t;
      t = p_7;
      t = map_1_0(u_8, t);
      return(t);
    }
    t = map_1_0(s_8, t);
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm i_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(i_11, o_11, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,v_13 = NULL,w_13 = NULL,n_12 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2(h_12, i_12, t);
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2(n_12, s_13, t);
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1(v_13, w_13, t);
  return(t);
}
ATerm m_2 (ATerm z_7, ATerm m_8, ATerm t_8, ATerm t)
{
  ATerm e_9 = NULL,w_10 = NULL,x_10 = NULL,s_11 = NULL,t_11 = NULL;
  t = m_8;
  w_10 = t;
  t = m_8;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_8, m_8);
  t = l_2(x_8, w_10, x_10, t);
  t = z_7;
  s_11 = t;
  t = m_8;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, m_8);
  t = l_2(y_8, s_11, t_11, t);
  t = (ATerm) ATmakeAppl(sym__2, m_8, z_7);
  t = conc_0_0(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, t_8);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
      if(match_cons(t, sym__2))
        {
          h_14 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
            if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
              {
                ATerm c_18 = ATgetFirst((ATermList) b_18);
                if(match_cons(c_18, sym__2))
                  {
                    ATerm d_18 = ATgetArgument(c_18, 0);
                    if(match_cons(d_18, sym_Some_1))
                      {
                        ATerm i_18 = ATgetArgument(d_18, 0);
                        if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("left", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    i_14 = ATgetArgument(c_18, 1);
                  }
                else
                  _fail(t);
                j_14 = (ATerm) ATgetNext((ATermList) b_18);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = m_2(h_14, i_14, j_14, t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL,u_14 = NULL,a_15 = NULL;
            if(match_cons(t, sym__2))
              {
                t_14 = ATgetArgument(t, 0);
                {
                  ATerm l_18 = ATgetArgument(t, 1);
                  if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
                    {
                      ATerm m_18 = ATgetFirst((ATermList) l_18);
                      if(match_cons(m_18, sym__2))
                        {
                          ATerm o_18 = ATgetArgument(m_18, 0);
                          if(match_cons(o_18, sym_Some_1))
                            {
                              ATerm p_18 = ATgetArgument(o_18, 0);
                              if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("right", 0, ATtrue)))
                                _fail(t);
                            }
                          else
                            _fail(t);
                          u_14 = ATgetArgument(m_18, 1);
                        }
                      else
                        _fail(t);
                      a_15 = (ATerm) ATgetNext((ATermList) l_18);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = k_1(t_14, u_14, a_15, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      k_15 = ATgetArgument(t, 0);
                      {
                        ATerm t_18 = ATgetArgument(t, 1);
                        if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
                          {
                            ATerm u_18 = ATgetFirst((ATermList) t_18);
                            if(match_cons(u_18, sym__2))
                              {
                                ATerm v_18 = ATgetArgument(u_18, 0);
                                if(match_cons(v_18, sym_Some_1))
                                  {
                                    ATerm w_18 = ATgetArgument(v_18, 0);
                                    if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                                l_15 = ATgetArgument(u_18, 1);
                              }
                            else
                              _fail(t);
                            m_15 = (ATerm) ATgetNext((ATermList) t_18);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = i_1(k_15, l_15, m_15, t);
                  ;
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  {
                    ATerm y_15 = NULL,z_15 = NULL,c_16 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        y_15 = ATgetArgument(t, 0);
                        {
                          ATerm y_18 = ATgetArgument(t, 1);
                          if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
                            {
                              ATerm b_19 = ATgetFirst((ATermList) y_18);
                              if(match_cons(b_19, sym__2))
                                {
                                  ATerm c_19 = ATgetArgument(b_19, 0);
                                  if(!(match_cons(c_19, sym_None_0)))
                                    _fail(t);
                                  z_15 = ATgetArgument(b_19, 1);
                                }
                              else
                                _fail(t);
                              c_16 = (ATerm) ATgetNext((ATermList) y_18);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = h_1(y_15, z_15, c_16, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_2 (ATerm f_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_9);
  t = repeat_1_0(d_9, t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm j_9 = NULL,d_16 = NULL,e_16 = NULL,o_16 = NULL;
  d_16 = t;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_9 (ATerm t)
    {
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      return(t);
    }
    ATerm h_9 (ATerm t)
    {
      ATerm o_9 (ATerm t)
      {
        if(((j_9 != NULL) && (j_9 != t)))
          _fail(t);
        else
          j_9 = t;
        return(t);
      }
      t = fetch_1_0(o_9, t);
      return(t);
    }
    t = r_3(g_9, h_9, d_16, e_16, o_16, t);
  }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = (ATerm) ATinsert(CheckATermList(w_16), term_d_19);
  return(t);
}
ATerm w_2 (ATerm k_9, ATerm t)
{
  ATerm s_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_20), term_o_20), term_m_20), term_l_20), term_j_20), term_i_20), term_h_20), term_g_20), term_f_20), term_d_20), term_c_20), term_z_19), term_w_19), term_v_19), term_u_19), term_t_19), term_m_19), term_l_19), term_k_19), term_i_19), term_h_19), term_g_19));
  t = member_0_0(t);
  t = k_9;
  s_16 = t;
  t = o_3(p_9, s_16, t);
  return(t);
}
ATerm x_2 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm y_10, ATerm h_10, ATerm i_10, ATerm t)
{
  ATerm g_10 = NULL,l_10 = NULL,p_10 = NULL,u_0 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(y_10);
  g_10 = t;
  t = h_10;
  t = d_72(t);
  l_10 = t;
  t = i_10;
  t = e_72(t);
  p_10 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, l_10, p_10);
  u_0 = t;
  t = SSLsetAnnotations(u_0, g_10);
  return(t);
}
ATerm y_2 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm k_11, ATerm d_11, ATerm g_11, ATerm t)
{
  ATerm c_11 = NULL,h_11 = NULL,j_11 = NULL,x_1 = NULL,d_2 = NULL;
  t = SSLgetAnnotations(k_11);
  c_11 = t;
  t = d_11;
  t = n_71(t);
  h_11 = t;
  t = g_11;
  t = o_71(t);
  j_11 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_11, j_11);
  x_1 = t;
  t = SSLsetAnnotations(x_1, c_11);
  return(t);
}
ATerm f_3 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm p_12, ATerm g_12, ATerm k_12, ATerm t)
{
  ATerm f_12 = NULL,m_12 = NULL,o_12 = NULL,a_3 = NULL,c_3 = NULL;
  t = SSLgetAnnotations(p_12);
  f_12 = t;
  t = g_12;
  t = s_77(t);
  m_12 = t;
  t = k_12;
  t = t_77(t);
  o_12 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_12, o_12);
  a_3 = t;
  t = SSLsetAnnotations(a_3, f_12);
  return(t);
}
ATerm k_3 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm z_12, ATerm t_12, ATerm u_12, ATerm v_12, ATerm t)
{
  ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,d_3 = NULL,m_3 = NULL;
  t = SSLgetAnnotations(z_12);
  s_12 = t;
  t = t_12;
  t = w_77(t);
  w_12 = t;
  t = u_12;
  t = x_77(t);
  x_12 = t;
  t = v_12;
  t = y_77(t);
  y_12 = t;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, w_12, x_12, y_12);
  d_3 = t;
  t = SSLsetAnnotations(d_3, s_12);
  return(t);
}
ATerm l_3 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm j_13, ATerm d_13, ATerm e_13, ATerm f_13, ATerm t)
{
  ATerm c_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,p_3 = NULL,w_3 = NULL;
  t = SSLgetAnnotations(j_13);
  c_13 = t;
  t = d_13;
  t = c_74(t);
  g_13 = t;
  t = e_13;
  t = d_74(t);
  h_13 = t;
  t = f_13;
  t = e_74(t);
  i_13 = t;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, g_13, h_13, i_13);
  p_3 = t;
  t = SSLsetAnnotations(p_3, c_13);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,n_20 = NULL,p_20 = NULL;
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(d_21) != AT_INT) || (ATgetInt((ATermInt) d_21) != 34)))
                _fail(t);
              x_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_13), term_f_21), term_e_21);
          ;
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm z_13 = NULL,a_14 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_13 = ATgetFirst((ATermList) t);
                a_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(a_14), term_e_21), term_e_21);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(a_14), term_g_21), term_e_21);
              }
          }
        }
      k_20 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          p_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_4(_id, q_9, k_20, n_20, p_20, t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm h_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_20 = NULL,b_21 = NULL,c_21 = NULL;
            x_20 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_21 = ATgetFirst((ATermList) t);
                c_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_4(_id, escape_chars_0_0, x_20, b_21, c_21, t);
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = h_21;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm p_21 = NULL,d_23 = NULL,e_23 = NULL;
  ATerm o_21 = t;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL,v_22 = NULL;
      x_21 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_21 = ATgetFirst((ATermList) t);
          if(((ATgetType(u_21) != AT_INT) || (ATgetInt((ATermInt) u_21) != 34)))
            _fail(t);
          v_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_22;
      t = last_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
        _fail(t);
      t = x_21;
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_21;
    }
  t = escape_chars_0_0(t);
  p_21 = t;
  t = term_f_21;
  d_23 = t;
  t = p_21;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, p_21);
  t = n_3(d_23, e_23, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = w_2(c_27, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = w_2(s_28, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = w_2(i_29, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  t = w_2(t_33, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  t = w_2(l_35, t);
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL,d_15 = NULL;
      z_14 = t;
      if(match_cons(t, sym_Str_1))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm g_15 = NULL,j_21 = NULL;
            t = d_15;
            j_21 = t;
            t = o_3(t_9, j_21, t);
            g_15 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, g_15);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              d_15 = ATgetArgument(t, 0);
              {
                ATerm j_23 = NULL,m_23 = NULL;
                t = d_15;
                m_23 = t;
                t = SSL_real_to_string(m_23);
                j_23 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, j_23);
              }
            }
          else
            {
              ATerm v_24 = NULL,d_25 = NULL;
              if(match_cons(t, sym_Int_1))
                {
                  d_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_15;
              d_25 = t;
              t = SSL_int_to_string(d_25);
              v_24 = t;
              t = (ATerm) ATmakeAppl(sym_Int_1, v_24);
            }
        }
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_25 = NULL,i_25 = NULL,p_25 = NULL,f_26 = NULL,r_25 = NULL,z_25 = NULL,l_26 = NULL,g_4 = NULL,j_4 = NULL;
            g_25 = t;
            if(match_cons(t, sym_DefaultVarDec_1))
              {
                i_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            f_26 = t;
            t = g_25;
            p_25 = t;
            t = SSLgetAnnotations(p_25);
            r_25 = t;
            t = i_25;
            l_26 = t;
            t = w_2(l_26, t);
            z_25 = t;
            j_4 = t;
            t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_25);
            g_4 = t;
            t = SSLsetAnnotations(g_4, r_25);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm a_22 = t;
              int e_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,u_26 = NULL;
                  o_26 = t;
                  if(match_cons(t, sym_RDef_3))
                    {
                      q_26 = ATgetArgument(t, 0);
                      r_26 = ATgetArgument(t, 1);
                      u_26 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_3(u_9, _id, _id, o_26, q_26, r_26, u_26, t);
                  ;
                  LocalPopChoice(e_22);
                }
              else
                {
                  t = a_22;
                  {
                    ATerm i_22 = t;
                    int j_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,u_27 = NULL;
                        i_27 = t;
                        if(match_cons(t, sym_SDef_3))
                          {
                            j_27 = ATgetArgument(t, 0);
                            k_27 = ATgetArgument(t, 1);
                            u_27 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = k_3(v_9, _id, _id, i_27, j_27, k_27, u_27, t);
                        ;
                        LocalPopChoice(j_22);
                      }
                    else
                      {
                        t = i_22;
                        {
                          ATerm k_22 = t;
                          int l_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
                              w_28 = t;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  x_28 = ATgetArgument(t, 0);
                                  y_28 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = f_3(y_9, _id, w_28, x_28, y_28, t);
                              ;
                              LocalPopChoice(l_22);
                            }
                          else
                            {
                              t = k_22;
                              {
                                ATerm q_22 = t;
                                int w_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_29 = NULL,n_29 = NULL,e_30 = NULL,m_30 = NULL,h_30 = NULL,i_30 = NULL,p_30 = NULL,k_4 = NULL,g_5 = NULL;
                                    m_29 = t;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        n_29 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    m_30 = t;
                                    t = m_29;
                                    e_30 = t;
                                    t = SSLgetAnnotations(e_30);
                                    h_30 = t;
                                    t = n_29;
                                    p_30 = t;
                                    t = w_2(p_30, t);
                                    i_30 = t;
                                    g_5 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, i_30);
                                    k_4 = t;
                                    t = SSLsetAnnotations(k_4, h_30);
                                    ;
                                    LocalPopChoice(w_22);
                                  }
                                else
                                  {
                                    t = q_22;
                                    {
                                      ATerm x_22 = t;
                                      int c_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_30 = NULL,v_30 = NULL,x_30 = NULL,x_32 = NULL,v_31 = NULL,c_32 = NULL,d_33 = NULL,k_5 = NULL,r_5 = NULL;
                                          u_30 = t;
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              v_30 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          x_32 = t;
                                          t = u_30;
                                          x_30 = t;
                                          t = SSLgetAnnotations(x_30);
                                          v_31 = t;
                                          t = v_30;
                                          d_33 = t;
                                          t = w_2(d_33, t);
                                          c_32 = t;
                                          r_5 = t;
                                          t = (ATerm) ATmakeAppl(sym_SVar_1, c_32);
                                          k_5 = t;
                                          t = SSLsetAnnotations(k_5, v_31);
                                          ;
                                          LocalPopChoice(c_23);
                                        }
                                      else
                                        {
                                          t = x_22;
                                          {
                                            ATerm f_23 = t;
                                            int g_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
                                                e_33 = t;
                                                if(match_cons(t, sym_OpDecl_2))
                                                  {
                                                    f_33 = ATgetArgument(t, 0);
                                                    g_33 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = y_2(z_9, _id, e_33, f_33, g_33, t);
                                                ;
                                                LocalPopChoice(g_23);
                                              }
                                            else
                                              {
                                                t = f_23;
                                                {
                                                  ATerm u_33 = NULL,w_33 = NULL,x_33 = NULL;
                                                  u_33 = t;
                                                  if(match_cons(t, sym_Op_2))
                                                    {
                                                      w_33 = ATgetArgument(t, 0);
                                                      x_33 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_2(e_10, _id, u_33, w_33, x_33, t);
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
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
        m_35 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_35 = ATgetFirst((ATermList) t);
            o_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_4(_id, x_15, m_35, n_35, o_35, t);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_87(t);
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = k_23;
      {
        ATerm r_15 = NULL,t_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_15 = ATgetFirst((ATermList) t);
            t_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_15;
        {
          ATerm k_10 (ATerm t)
          {
            t = t_15;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_10, t);
        }
      }
    }
  return(t);
}
ATerm m_16 (ATerm a_16, ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  t = a_16;
  f_16 = t;
  t = SSL_explode_term(f_16);
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 (ATerm t)
            {
              t = i_16;
              return(t);
            }
            t = h_16;
            t = at_end_1_0(m_10, t);
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = m_16(j_16, t);
          }
      }
    }
  else
    {
      t = m_16(j_16, t);
    }
  return(t);
}
ATerm n_3 (ATerm n_16, ATerm r_16, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_16), n_16), (ATerm) ATinsert(ATempty, n_16));
  t = conc_0_0(t);
  return(t);
}
ATerm o_3 (ATerm y_109 (ATerm), ATerm t_16, ATerm t)
{
  ATerm u_16 = NULL;
  t = SSL_explode_string(t_16);
  t = y_109(t);
  u_16 = t;
  t = SSL_implode_string(u_16);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_16 = ATgetFirst((ATermList) t);
      z_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_16;
          ;
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          t = z_16;
          t = last_0_0(t);
        }
    }
  else
    {
      t = z_16;
      t = last_0_0(t);
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_explode_string(b_36);
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm d_36 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  w_35 = t;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3(_id, n_10, w_35, x_35, y_35, t);
  d_36 = t;
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((f_36 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_36;
  t = last_0_0(t);
  if((f_36 != t))
    {
      _fail(t);
    }
  t = d_36;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm d_37 = NULL,g_37 = NULL,h_37 = NULL;
  d_37 = t;
  t = term_f_21;
  g_37 = t;
  t = d_37;
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, d_37);
  t = n_3(g_37, h_37, t);
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_StratRule_3))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      e_18 = ATgetArgument(t, 2);
      t = e_18;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, g_18, h_18);
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_18 = ATgetArgument(t, 0);
          h_18 = ATgetArgument(t, 1);
          e_18 = ATgetArgument(t, 2);
          t = e_18;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, g_18, h_18);
        }
      else
        {
          ATerm v_36 = NULL,b_37 = NULL;
          if(match_cons(t, sym_Prim_2))
            {
              g_18 = ATgetArgument(t, 0);
              h_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_18;
          {
            ATerm t_23 = t;
            if((PushChoice() == 0))
              {
                ATerm w_36 = NULL;
                w_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, w_36);
                t = is_quoted_0_0(t);
                t = w_36;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_23;
              }
            t = g_18;
            b_37 = t;
            t = o_3(o_10, b_37, t);
            v_36 = t;
            t = (ATerm) ATmakeAppl(sym_Prim_2, v_36, h_18);
          }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm n_18 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_100(t);
        t = n_18(t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  t = a_110(t);
  {
    ATerm v_10 (ATerm t)
    {
      t = topdown_1_0(a_110, t);
      return(t);
    }
    t = SRTS_all(v_10, t);
  }
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
      }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_37 = NULL,q_37 = NULL;
      p_37 = t;
      q_37 = t;
      t = f_1(e_11, p_37, q_37, t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, s_37);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm s_18 = NULL,o_37 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18 = NULL,k_37 = NULL,l_37 = NULL;
      x_18 = t;
      k_37 = t;
      t = SSL_explode_term(k_37);
      if(match_cons(t, sym__2))
        {
          ATerm c_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm d_24 = ATgetArgument(t, 1);
            if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
              {
                l_37 = ATgetFirst((ATermList) d_24);
                {
                  ATerm h_24 = (ATerm) ATgetNext((ATermList) d_24);
                  if(((ATgetType(h_24) != AT_LIST) || !(ATisEmpty(h_24))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = l_37;
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
    }
  t = topdown_1_0(z_10, t);
  {
    ATerm a_11 (ATerm t)
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_18 = NULL,a_19 = NULL,e_19 = NULL,f_19 = NULL,j_19 = NULL;
          if(match_cons(t, sym_Seq_2))
            {
              z_18 = ATgetArgument(t, 0);
              a_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_19;
          if(match_cons(t, sym_Seq_2))
            {
              e_19 = ATgetArgument(t, 0);
              f_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, z_18, e_19);
          t = a_11(t);
          j_19 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_19, f_19);
          t = a_11(t);
          ;
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
        }
      return(t);
    }
    t = bottomup_1_0(a_11, t);
    s_18 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, term_y_24), term_x_24))), (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, term_w_24)));
    o_37 = t;
    t = n_2(o_37, t);
    t = s_18;
    t = bottomup_1_0(b_11, t);
  }
  return(t);
}
ATerm r_3 (ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm s_19, ATerm o_19, ATerm p_19, ATerm t)
{
  ATerm n_19 = NULL,q_19 = NULL,r_19 = NULL,c_6 = NULL,f_6 = NULL;
  t = SSLgetAnnotations(s_19);
  n_19 = t;
  t = o_19;
  t = e_66(t);
  q_19 = t;
  t = p_19;
  t = f_66(t);
  r_19 = t;
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_19, r_19);
  c_6 = t;
  t = SSLsetAnnotations(c_6, n_19);
  return(t);
}
ATerm t_3 (ATerm r_97 (ATerm), ATerm x_19, ATerm y_19, ATerm t)
{
  ATerm a_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_19, term_z_24);
  t = open_stream_0_0(t);
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_20, y_19);
  t = r_97(t);
  t = fclose_0_0(t);
  t = y_19;
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = fetch_1_0(r_11, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(u_11, o_38, p_38, t);
  return(t);
}
ATerm r_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if(match_cons(a_25, sym_Stream_1))
        {
          r_38 = ATgetArgument(a_25, 0);
        }
      else
        _fail(t);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(r_38, s_38);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_38);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(w_11, f_39, g_39, t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym_Stream_1))
        {
          i_39 = ATgetArgument(b_25, 0);
        }
      else
        _fail(t);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(i_39, j_39);
  k_39 = t;
  t = term_c_25;
  l_39 = t;
  t = k_39;
  m_39 = t;
  t = SSL_fputc(l_39, m_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_39);
  return(t);
}
ATerm u_3 (ATerm b_20, ATerm t)
{
  ATerm e_20 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t_37 = t;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_11 (ATerm t)
    {
      ATerm e_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_11, t);
          ;
          LocalPopChoice(f_25);
        }
      else
        {
          t = e_25;
          t = term_h_25;
          if(((e_20 != NULL) && (e_20 != t)))
            _fail(t);
          else
            e_20 = t;
        }
      return(t);
    }
    t = r_3(f_11, _id, t_37, u_37, v_37, t);
    t = b_20;
    y_37 = t;
    if(match_cons(t, sym__2))
      {
        z_37 = ATgetArgument(t, 0);
        a_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_11 (ATerm t)
      {
        ATerm d_38 = NULL;
        ATerm n_11 (ATerm t)
        {
          t = not_null(e_20);
          return(t);
        }
        if(((d_38 != NULL) && (d_38 != t)))
          _fail(t);
        else
          d_38 = t;
        t = x_3(n_11, _id, not_null(d_38), t);
        return(t);
      }
      t = r_3(_id, m_11, y_37, z_37, a_38, t);
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
            g_38 = t;
            if(match_cons(t, sym__2))
              {
                h_38 = ATgetArgument(t, 0);
                i_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_3(p_11, q_11, g_38, h_38, i_38, t);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
              u_38 = t;
              if(match_cons(t, sym__2))
                {
                  v_38 = ATgetArgument(t, 0);
                  w_38 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_3(_id, v_11, u_38, v_38, w_38, t);
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
ATerm v_3 (ATerm t_83 (ATerm), ATerm v_20, ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  t = dtime_0_0(t);
  t = v_20;
  t = t_83(t);
  w_20 = t;
  t = dtime_0_0(t);
  y_20 = t;
  t = w_20;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_Runtime_1, y_20)), a_21);
  return(t);
}
ATerm q_21 (ATerm i_21, ATerm t)
{
  ATerm k_21 = NULL;
  t = i_21;
  k_21 = t;
  t = SSL_fclose(k_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_39 = NULL;
            t = l_21;
            q_39 = t;
            t = SSL_fclose(q_39);
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = q_21(m_21, t);
          }
      }
    }
  else
    {
      t = q_21(m_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  t = SSL_stdin_stream();
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_stdout_stream();
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stderr_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm i_40 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_40;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  t = SSL_is_string(o_40);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      ATerm o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_39 = NULL,a_40 = NULL,b_40 = NULL;
        y_39 = t;
        a_40 = t;
        t = SSL_explode_term(a_40);
        if(match_cons(t, sym__2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_25 = ATgetArgument(t, 1);
              if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
                {
                  b_40 = ATgetFirst((ATermList) u_25);
                  {
                    ATerm v_25 = (ATerm) ATgetNext((ATermList) u_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_40;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_40;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_40;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_40;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
              d_40 = t;
              if(match_cons(t, sym__2))
                {
                  e_40 = ATgetArgument(t, 0);
                  f_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_3(x_11, _id, d_40, e_40, f_40, t);
              if(match_cons(t, sym__2))
                {
                  b_22 = ATgetArgument(t, 0);
                  c_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_22, c_22);
              d_22 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
              ;
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              {
                ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
                j_40 = t;
                if(match_cons(t, sym__2))
                  {
                    k_40 = ATgetArgument(t, 0);
                    l_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_3(y_11, _id, j_40, k_40, l_40, t);
                if(match_cons(t, sym__2))
                  {
                    f_22 = ATgetArgument(t, 0);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_22, g_22);
                h_22 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL;
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, term_d_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm p_40 = NULL;
        p_40 = t;
        t = a_4(z_11, p_40, t);
        _fail(t);
      }
    }
  m_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_22);
  n_22 = t;
  t = m_22;
  t = fclose_0_0(t);
  t = n_22;
  return(t);
}
ATerm x_3 (ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm r_22, ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  t = r_85(t);
  s_22 = t;
  t = r_22;
  t = s_85(t);
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  return(t);
}
ATerm fetch_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm u_22 (ATerm t)
  {
    ATerm g_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
        r_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_40 = ATgetFirst((ATermList) t);
            t_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_4(z_86, _id, r_40, s_40, t_40, t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = g_26;
        {
          ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
          w_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_40 = ATgetFirst((ATermList) t);
              y_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4(_id, u_22, w_40, x_40, y_40, t);
        }
      }
    return(t);
  }
  t = u_22(t);
  return(t);
}
ATerm a_4 (ATerm p_97 (ATerm), ATerm y_22, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  t = p_97(t);
  z_22 = t;
  t = term_v_15;
  a_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_22), z_22);
  b_23 = t;
  t = SSL_printnl(a_23, b_23);
  t = y_22;
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm k_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = k_26;
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,c_41 = NULL;
      l_23 = t;
      c_41 = t;
      t = SSL_is_string(c_41);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_12, t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
              e_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_24 = ATgetArgument(t, 0);
                  t = f_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_24 = ATgetArgument(t, 0);
                      t = f_24;
                      {
                        ATerm x_26 = t;
                        int y_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_41 = NULL;
                            o_41 = t;
                            t = b_4(o_41, t);
                            ;
                            LocalPopChoice(y_26);
                          }
                        else
                          {
                            t = x_26;
                            {
                              ATerm p_41 = NULL;
                              p_41 = t;
                              t = a_4(b_12, p_41, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_24 = ATgetArgument(t, 0);
                          g_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_24;
                      t = eval_config_0_0(t);
                      w_41 = t;
                      t = g_24;
                      t = eval_config_0_0(t);
                      x_41 = t;
                      t = w_41;
                      y_41 = t;
                      t = x_41;
                      z_41 = t;
                      t = SSL_strcat(y_41, z_41);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_4 (ATerm l_24, ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  t = term_z_26;
  m_24 = t;
  t = l_24;
  n_24 = t;
  t = SSL_table_get(m_24, n_24);
  {
    ATerm a_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
        t = eval_config_0_0(t);
        o_24 = t;
        t = term_z_26;
        p_24 = t;
        t = l_24;
        q_24 = t;
        t = o_24;
        r_24 = t;
        t = SSL_table_put(p_24, q_24, r_24);
        t = o_24;
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = a_27;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24 = NULL,u_24 = NULL,e_42 = NULL;
      s_24 = t;
      t = term_p_27;
      e_42 = t;
      t = b_4(e_42, t);
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, term_q_27);
      t = geq_0_0(t);
      t = s_24;
      t = a_108(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  if(match_string(t, "-k"))
    {
      t = j_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_42;
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
  k_42 = t;
  m_42 = t;
  t = SSL_string_to_int(m_42);
  l_42 = t;
  t = term_z_26;
  n_42 = t;
  t = term_r_27;
  o_42 = t;
  t = l_42;
  p_42 = t;
  t = SSL_table_put(n_42, o_42, p_42);
  t = k_42;
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_42 = NULL;
  f_42 = t;
  t = f_4(c_12, d_12, e_12, f_42, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm u_42 = NULL;
  u_42 = t;
  if(match_string(t, "-S"))
    {
      t = u_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_42;
    }
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  t = term_z_26;
  v_42 = t;
  t = term_p_27;
  w_42 = t;
  t = term_t_27;
  x_42 = t;
  t = SSL_table_put(v_42, w_42, x_42);
  t = term_v_27;
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  c_43 = t;
  e_43 = t;
  t = SSL_string_to_int(e_43);
  d_43 = t;
  t = term_z_26;
  f_43 = t;
  t = term_p_27;
  g_43 = t;
  t = d_43;
  h_43 = t;
  t = SSL_table_put(f_43, g_43, h_43);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_43);
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  t = term_z_26;
  m_43 = t;
  t = term_e_28;
  n_43 = t;
  t = term_d_14;
  o_43 = t;
  t = SSL_table_put(m_43, n_43, o_43);
  t = term_g_28;
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_42 = NULL;
      q_42 = t;
      t = c_4(j_12, l_12, q_12, q_42, t);
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
            ATerm y_42 = NULL;
            y_42 = t;
            t = f_4(r_12, a_13, b_13, y_42, t);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm i_43 = NULL;
              i_43 = t;
              t = c_4(k_13, l_13, m_13, i_43, t);
            }
          }
      }
    }
  return(t);
}
ATerm c_4 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm a_26, ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_26 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
      t = term_d_14;
      t = d_0(t);
      i_26 = t;
      t = term_m_28;
      s_43 = t;
      t = term_n_28;
      t_43 = t;
      t = i_26;
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, i_26);
      t = d_4(s_43, t_43, u_43, t);
      _fail(t);
    }
  else
    {
      ATerm n_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_26 = ATgetFirst((ATermList) t);
          h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_26;
      t = a_0(t);
      t = term_d_14;
      t = b_0(t);
      n_26 = t;
      t = (ATerm) ATinsert(CheckATermList(h_26), n_26);
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  if(match_string(t, "-o"))
    {
      t = z_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_43;
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  a_44 = t;
  t = term_z_26;
  b_44 = t;
  t = term_t_28;
  c_44 = t;
  t = a_44;
  d_44 = t;
  t = SSL_table_put(b_44, c_44, d_44);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_44);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  t = f_4(n_13, o_13, p_13, v_43, t);
  return(t);
}
ATerm d_4 (ATerm b_27, ATerm d_27, ATerm e_27, ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,l_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_27, d_27);
  {
    ATerm a_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_44 = NULL,h_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_29 = ATgetArgument(t, 0);
            ATerm e_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_27;
        g_44 = t;
        t = d_27;
        h_44 = t;
        t = SSL_table_get(g_44, h_44);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
    f_27 = t;
    t = b_27;
    g_27 = t;
    t = d_27;
    h_27 = t;
    t = (ATerm) ATinsert(CheckATermList(f_27), e_27);
    l_27 = t;
    t = SSL_table_put(g_27, h_27, l_27);
    t = (ATerm) ATmakeAppl(sym__3, b_27, d_27, e_27);
  }
  return(t);
}
ATerm f_4 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm w_27, ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_28 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
      t = term_d_14;
      t = m_0(t);
      b_28 = t;
      t = term_m_28;
      n_44 = t;
      t = term_n_28;
      o_44 = t;
      t = b_28;
      p_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, b_28);
      t = d_4(n_44, o_44, p_44, t);
      _fail(t);
    }
  else
    {
      ATerm f_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_27 = ATgetFirst((ATermList) t);
          y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_27 = ATgetFirst((ATermList) t);
          a_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_27;
      t = i_0(t);
      t = z_27;
      t = k_0(t);
      f_28 = t;
      t = (ATerm) ATinsert(CheckATermList(a_28), f_28);
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  if(match_string(t, "-i"))
    {
      t = u_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_44;
    }
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  v_44 = t;
  t = term_z_26;
  w_44 = t;
  t = term_f_29;
  x_44 = t;
  t = v_44;
  y_44 = t;
  t = SSL_table_put(w_44, x_44, y_44);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_44);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  t = f_4(q_13, r_13, t_13, q_44, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_14;
  t = whoami_0_0(t);
  o_28 = t;
  t = term_v_15;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_29), o_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = term_k_16;
  r_28 = t;
  t = SSL_exit(r_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_45 = NULL;
  t = term_k_29;
  a_45 = t;
  t = b_4(a_45, t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm l_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_93(t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = l_29;
      {
        ATerm u_28 = NULL,v_28 = NULL,b_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_28 = ATgetFirst((ATermList) t);
            v_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_28;
        t = foldr_2_0(h_93, i_93, t);
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, b_29);
        t = i_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(r_45, s_45);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = SSL_addr(r_45, s_45);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_29 = NULL,h_45 = NULL,n_45 = NULL,o_45 = NULL;
  t = times_0_0(t);
  h_45 = t;
  n_45 = t;
  t = SSL_explode_term(n_45);
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_45;
  t = foldr_2_0(u_13, y_13, t);
  j_29 = t;
  t = SSL_TicksToSeconds(j_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_29;
        if((v_29 != t))
          {
            _fail(t);
          }
        t = u_29;
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm x_45 = NULL,y_45 = NULL;
          t = v_29;
          x_45 = t;
          t = w_29;
          y_45 = t;
          t = u_29;
          {
            ATerm x_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(x_45, y_45);
                ;
                LocalPopChoice(y_29);
              }
            else
              {
                t = x_29;
                t = SSL_gtr(x_45, y_45);
              }
            t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm a_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL,b_30 = NULL,d_46 = NULL;
      z_29 = t;
      t = term_p_27;
      d_46 = t;
      t = b_4(d_46, t);
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_30, term_k_16);
      t = geq_0_0(t);
      t = z_29;
      t = z_107(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = a_30;
    }
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm d_30 = NULL,f_30 = NULL,q_30 = NULL,r_30 = NULL;
  t = run_time_0_0(t);
  d_30 = t;
  t = term_d_14;
  t = whoami_0_0(t);
  f_30 = t;
  t = term_v_15;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), d_30), term_g_30), f_30);
  r_30 = t;
  t = SSL_printnl(q_30, r_30);
  t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), d_30), term_g_30), f_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_27;
  s_30 = t;
  t = SSL_exit(s_30);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_46 = NULL,h_46 = NULL,j_46 = NULL,q_46 = NULL,l_46 = NULL,m_46 = NULL,j_6 = NULL,l_6 = NULL;
            g_46 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                h_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            q_46 = t;
            t = g_46;
            j_46 = t;
            t = SSLgetAnnotations(j_46);
            l_46 = t;
            t = h_46;
            m_46 = t;
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_46);
            j_6 = t;
            t = SSLsetAnnotations(j_6, l_46);
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm w_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_46 = NULL;
      t = term_c_31;
      f_46 = t;
      t = b_4(f_46, t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = w_30;
      t = fetch_1_0(c_14, t);
    }
  t = r_84(t);
  return(t);
}
ATerm map_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm t_30 (ATerm t)
  {
    ATerm d_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = d_31;
        {
          ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
          s_46 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_46 = ATgetFirst((ATermList) t);
              u_46 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_4(p_86, t_30, s_46, t_46, u_46, t);
        }
      }
    return(t);
  }
  t = t_30(t);
  return(t);
}
ATerm h_4 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm b_31, ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_30 = ATgetFirst((ATermList) t);
      a_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_31 = NULL,f_31 = NULL,x_46 = NULL;
        t = a_31;
        t = g_0(t);
        e_31 = t;
        t = z_30;
        t = f_0(t);
        f_31 = t;
        t = a_31;
        x_46 = t;
        {
          ATerm e_14 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_31), f_31);
            return(t);
          }
          t = h_4(f_0, e_14, x_46, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_14;
      t = g_0(t);
    }
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,o_47 = NULL,v_47 = NULL,q_47 = NULL,r_47 = NULL,m_6 = NULL,n_6 = NULL;
  l_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  v_47 = t;
  t = l_47;
  o_47 = t;
  t = SSLgetAnnotations(o_47);
  q_47 = t;
  t = m_47;
  r_47 = t;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_47);
  m_6 = t;
  t = SSLsetAnnotations(m_6, q_47);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm o_31 = NULL,d_48 = NULL;
  o_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_31), term_h_31);
  d_48 = t;
  t = n_4(d_48, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,y_47 = NULL,z_47 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_47 = NULL;
      t = term_k_29;
      k_47 = t;
      t = b_4(k_47, t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = fetch_1_0(f_14, t);
    }
  t = term_k_31;
  y_47 = t;
  t = n_4(y_47, t);
  t = term_m_28;
  m_31 = t;
  t = term_n_28;
  n_31 = t;
  t = SSL_table_get(m_31, n_31);
  z_47 = t;
  t = h_4(_id, g_14, z_47, t);
  t = map_1_0(k_14, t);
  return(t);
}
ATerm n_4 (ATerm w_31, ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  ATerm l_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_32 = NULL;
      a_32 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_32;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_31 = ATgetFirst((ATermList) t);
              ATerm r_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_32;
        }
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = l_31;
      t = (ATerm) ATinsert(ATempty, w_31);
    }
  x_31 = t;
  t = term_h_25;
  y_31 = t;
  t = x_31;
  z_31 = t;
  t = SSL_printnl(y_31, z_31);
  t = w_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_48 = NULL,o_48 = NULL;
  t = term_k_29;
  o_48 = t;
  t = b_4(o_48, t);
  q_48 = t;
  t = n_4(q_48, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  t = term_z_26;
  v_48 = t;
  t = term_s_31;
  w_48 = t;
  t = term_d_14;
  x_48 = t;
  t = SSL_table_put(v_48, w_48, x_48);
  t = term_t_31;
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  t = term_z_26;
  c_49 = t;
  t = term_s_31;
  d_49 = t;
  t = term_d_14;
  e_49 = t;
  t = SSL_table_put(c_49, d_49, e_49);
  t = term_z_26;
  f_49 = t;
  t = term_b_32;
  g_49 = t;
  t = term_d_14;
  h_49 = t;
  t = SSL_table_put(f_49, g_49, h_49);
  t = term_d_32;
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_48 = NULL;
      r_48 = t;
      t = c_4(l_14, m_14, n_14, r_48, t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm y_48 = NULL;
        y_48 = t;
        t = c_4(o_14, p_14, q_14, y_48, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,q_32 = NULL,r_32 = NULL;
  u_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_32 = ATgetFirst((ATermList) t);
      r_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_4(t_70, u_70, u_32, q_32, r_32, t);
  return(t);
}
ATerm r_4 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm u_32, ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm p_32 = NULL,s_32 = NULL,t_32 = NULL,q_6 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(u_32);
  p_32 = t;
  t = q_32;
  t = t_70(t);
  s_32 = t;
  t = r_32;
  t = u_70(t);
  t_32 = t;
  r_6 = t;
  t = (ATerm) ATinsert(CheckATermList(t_32), s_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, p_32);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
  n_49 = t;
  t = term_z_26;
  o_49 = t;
  t = term_k_29;
  p_49 = t;
  t = n_49;
  q_49 = t;
  t = SSL_table_put(o_49, p_49, q_49);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_49);
  return(t);
}
ATerm u_4 (ATerm y_99 (ATerm), ATerm b_33, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_32;
      t = y_99(t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
    }
  t = b_33;
  i_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_49 = ATgetFirst((ATermList) t);
      k_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_14 (ATerm t)
    {
      ATerm k_32 = t;
      int l_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = y_99(t);
              t = Cons_2_0(_id, s_14, t);
            }
          ;
          LocalPopChoice(l_32);
        }
      else
        {
          t = k_32;
          {
            ATerm s_49 = NULL,t_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_49 = ATgetFirst((ATermList) t);
                t_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Undefined_1, s_49));
          }
        }
      return(t);
    }
    t = r_4(r_14, s_14, i_49, j_49, k_49, t);
  }
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  if(match_string(t, "--help"))
    {
      t = h_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_50;
        }
    }
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  t = term_z_26;
  i_50 = t;
  t = term_c_31;
  j_50 = t;
  t = term_d_14;
  k_50 = t;
  t = SSL_table_put(i_50, j_50, k_50);
  t = term_o_32;
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm b_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm x_99 (ATerm), ATerm v_33, ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,x_49 = NULL;
  t = term_m_28;
  y_33 = t;
  t = term_n_28;
  z_33 = t;
  t = (ATerm) ATempty;
  a_34 = t;
  t = SSL_table_put(y_33, z_33, a_34);
  t = v_33;
  x_49 = t;
  {
    ATerm v_14 (ATerm t)
    {
      ATerm w_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_99(t);
          ;
          LocalPopChoice(y_32);
        }
      else
        {
          t = w_32;
          {
            ATerm z_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_50 = NULL;
                d_50 = t;
                t = c_4(w_14, x_14, y_14, d_50, t);
                ;
                LocalPopChoice(a_33);
              }
            else
              {
                t = z_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = u_4(v_14, x_49, t);
    {
      ATerm c_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = NULL;
          o_34 = t;
          {
            ATerm i_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_50 = NULL;
                t = o_34;
                {
                  ATerm k_33 = t;
                  int l_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_50 = NULL;
                      t = term_c_31;
                      u_50 = t;
                      t = b_4(u_50, t);
                      ;
                      LocalPopChoice(l_33);
                    }
                  else
                    {
                      t = k_33;
                      t = fetch_1_0(b_15, t);
                    }
                  t = o_34;
                  t = default_system_usage_0_0(t);
                  t = term_t_27;
                  r_50 = t;
                  t = SSL_exit(r_50);
                }
                ;
                LocalPopChoice(j_33);
              }
            else
              {
                t = i_33;
                {
                  ATerm x_50 = NULL,a_51 = NULL;
                  t = term_s_31;
                  a_51 = t;
                  t = b_4(a_51, t);
                  t = o_34;
                  t = default_system_about_0_0(t);
                  t = term_t_27;
                  x_50 = t;
                  t = SSL_exit(x_50);
                }
              }
          }
          ;
          LocalPopChoice(h_33);
        }
      else
        {
          t = c_33;
          {
            ATerm m_33 = t;
            int n_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
                ATerm c_15 (ATerm t)
                {
                  ATerm b_51 = NULL,c_51 = NULL,e_51 = NULL,l_51 = NULL,g_51 = NULL,h_51 = NULL,u_6 = NULL,v_6 = NULL;
                  b_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  l_51 = t;
                  t = b_51;
                  e_51 = t;
                  t = SSLgetAnnotations(e_51);
                  g_51 = t;
                  t = c_51;
                  if(((b_34 != NULL) && (b_34 != t)))
                    _fail(t);
                  else
                    b_34 = t;
                  h_51 = t;
                  v_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_51);
                  u_6 = t;
                  t = SSLsetAnnotations(u_6, g_51);
                  return(t);
                }
                t = fetch_1_0(c_15, t);
                t = term_v_15;
                p_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_34)), term_o_33);
                q_34 = t;
                t = SSL_printnl(p_34, q_34);
                t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_34)), term_o_33));
                t = default_system_usage_0_0(t);
                t = term_k_16;
                r_34 = t;
                t = SSL_exit(r_34);
                ;
                LocalPopChoice(n_33);
              }
            else
              {
                t = m_33;
              }
          }
        }
      c_34 = t;
      t = term_m_28;
      d_34 = t;
      t = SSL_table_destroy(d_34);
      t = c_34;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,n_51 = NULL;
  n_51 = t;
  t = x_4(t_84, n_51, t);
  u_34 = t;
  t = term_p_33;
  v_34 = t;
  t = SSL_table_create(v_34);
  t = term_p_33;
  w_34 = t;
  t = term_q_33;
  x_34 = t;
  t = u_34;
  y_34 = t;
  t = SSL_table_put(w_34, x_34, y_34);
  t = u_34;
  t = v_84(t);
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_84, t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = if_verbose2_1_0(o_15, t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t = term_z_26;
  t_51 = t;
  t = term_g_34;
  u_51 = t;
  t = term_d_14;
  v_51 = t;
  t = SSL_table_put(t_51, u_51, v_51);
  t = term_h_34;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,x_51 = NULL;
  c_35 = t;
  t = term_k_29;
  x_51 = t;
  t = b_4(x_51, t);
  d_35 = t;
  t = term_v_15;
  e_35 = t;
  t = (ATerm) ATinsert(ATempty, d_35);
  f_35 = t;
  t = SSL_printnl(e_35, f_35);
  t = c_35;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_84(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm n_34 = t;
                int s_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_34);
                  }
                else
                  {
                    t = n_34;
                    {
                      ATerm t_34 = t;
                      int z_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_51 = NULL;
                          p_51 = t;
                          t = c_4(i_15, j_15, n_15, p_51, t);
                          ;
                          LocalPopChoice(z_34);
                        }
                      else
                        {
                          t = t_34;
                          {
                            ATerm a_35 = t;
                            int b_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_35);
                              }
                            else
                              {
                                t = a_35;
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
  ATerm h_15 (ATerm t)
  {
    ATerm g_35 = NULL,h_35 = NULL,y_51 = NULL,e_52 = NULL,b_52 = NULL;
    g_35 = t;
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_15, t);
          ;
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          t = term_k_35;
          h_35 = t;
        }
      t = g_35;
      y_51 = t;
      {
        ATerm q_15 (ATerm t)
        {
          t = not_null(h_35);
          t = ReadFromFile_0_0(t);
          return(t);
        }
        t = x_3(_id, q_15, y_51, t);
        b_52 = t;
        t = v_3(c_84, b_52, t);
        e_52 = t;
        t = u_3(e_52, t);
      }
    }
    return(t);
  }
  t = option_wrap_4_0(e_15, e_84, f_15, h_15, t);
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3(_id, Stratego_Ensugar_0_0, f_52, g_52, h_52, t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  t = e_0(l_52, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_15, _fail, u_15, t);
  return(t);
}
