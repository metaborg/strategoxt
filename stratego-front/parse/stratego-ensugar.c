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
Symbol sym_List_1;
Symbol sym_ListTail_2;
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
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
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
ATerm term_h_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_b_17;
ATerm term_d_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_l_14;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_j_9;
void init_constant_terms (void)
{
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Some_1, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_j_9);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_x_18);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_j_9);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_j_9);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_j_9);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_j_9);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm r_6 (ATerm v_32, ATerm w_32, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm s_6 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm t_6 (ATerm s_53, ATerm t_53, ATerm r_53, ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm u_6 (ATerm p_53, ATerm q_53, ATerm o_53, ATerm);
ATerm d_2 (ATerm);
ATerm v_6 (ATerm c_54, ATerm d_54, ATerm);
ATerm g_2 (ATerm);
ATerm b_7 (ATerm x_53, ATerm y_53, ATerm);
ATerm c_7 (ATerm y_83 (ATerm), ATerm c_32, ATerm a_32, ATerm);
ATerm j_2 (ATerm);
ATerm d_7 (ATerm h_54, ATerm i_54, ATerm);
ATerm e_7 (ATerm o_75 (ATerm), ATerm l_21, ATerm m_21, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm f_7 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm);
ATerm repeat_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_25 (ATerm l_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm at_last_1_0 (ATerm v_76 (ATerm), ATerm);
ATerm split_last_0_0 (ATerm);
ATerm implode_cons_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm r_7 (ATerm n_20, ATerm o_20, ATerm);
ATerm s_7 (ATerm t_38, ATerm u_38, ATerm);
ATerm u_7 (ATerm x_86 (ATerm), ATerm v_368, ATerm x_38, ATerm);
ATerm t_7 (ATerm p_38, ATerm q_38, ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm n_38 (ATerm h_38, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_7 (ATerm v_38, ATerm);
ATerm w_7 (ATerm p_20, ATerm q_20, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_40 (ATerm e_39, ATerm);
ATerm m_40 (ATerm i_39, ATerm j_39, ATerm k_39, ATerm);
ATerm n_40 (ATerm s_39, ATerm t_39, ATerm z_39, ATerm);
ATerm x_7 (ATerm);
ATerm c_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm q_7 (ATerm f_53, ATerm g_53, ATerm);
ATerm debug_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_97 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm m_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_8 (ATerm t_45, ATerm u_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm u_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_8 (ATerm k_32, ATerm l_32, ATerm j_32, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_7 (ATerm o_30, ATerm p_30, ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm need_help_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm a_8 (ATerm b_34, ATerm c_34, ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm z_7 (ATerm);
ATerm e_8 (ATerm);
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm g_9 (ATerm);
ATerm iowrap_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm i_9 (ATerm);
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
  t = term_j_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_k_9;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), c_0), term_p_9);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_s_9;
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
        ATerm t_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm u_9 = ATgetArgument(t, 1);
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
  t = term_w_9;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATmakeAppl(sym__2, u_0, v_0));
  t = r_6(q_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_9;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm c_1 = NULL,f_1 = NULL,h_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,p_1 = NULL,r_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_1);
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      {
        ATerm y_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      {
        ATerm c_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  n_1 = t;
  t = SSL_mkterm(c_1, n_1);
  h_1 = t;
  t = (ATerm) ATempty;
  m_1 = t;
  t = SSL_mkterm(f_1, m_1);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, l_1);
  d_1 = t;
  t = term_d_10;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym__2, h_1, l_1));
  t = r_6(e_1, d_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_9;
  return(t);
}
ATerm r_6 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm u_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
  t = a_8(v_32, w_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_1 = ATgetFirst((ATermList) t);
      {
        ATerm g_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm y_1 = NULL,b_2 = NULL,c_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,l_2 = NULL,n_2 = NULL,i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_2);
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      {
        ATerm h_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  i_2 = t;
  t = SSL_mkterm(y_1, i_2);
  c_2 = t;
  t = (ATerm) ATempty;
  h_2 = t;
  t = SSL_mkterm(b_2, h_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, f_2);
  i_1 = t;
  t = term_j_10;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, (ATerm) ATmakeAppl(sym__2, c_2, f_2));
  t = r_6(j_1, i_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_j_9;
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  ATerm b_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_2 != NULL) && (p_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_2 = ATgetFirst((ATermList) t);
        {
          ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(b_1, t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, not_null(p_2));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  g_3 = t;
  m_3 = t;
  t = SSL_explode_term(m_3);
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            v_2 = ATgetFirst((ATermList) n_10);
            u_2 = (ATerm) ATgetNext((ATermList) n_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_2;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_2;
  {
    ATerm s_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_3, v_2);
        t = RightAssoc_0_0(t);
        t = v_2;
        t = g_102(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = s_10;
      }
    w_2 = t;
    t = c_3;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm b_4 = NULL;
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, b_4);
        t = GreaterThan_0_0(t);
        t = b_4;
        t = g_102(t);
        return(t);
      }
      t = map_1_0(g_1, t);
      e_3 = t;
      t = f_3;
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, g_3, f_3);
            t = LeftAssoc_0_0(t);
            t = f_3;
            t = g_102(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
          }
        h_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATempty, h_3));
        t = conc_0_0(t);
        k_3 = t;
        t = (ATerm) ATinsert(CheckATermList(k_3), w_2);
        l_3 = t;
        t = SSL_mkterm(t_2, l_3);
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(m_99, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = m_99(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(v_4, x_4, t);
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(t_4, u_4, t);
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(q_4, r_4, t);
  return(t);
}
ATerm s_6 (ATerm v_53, ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm n_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  t = e_7(t_1, v_53, w_53, t);
  t = (ATerm) ATmakeAppl(sym__2, w_53, v_53);
  t = conc_0_0(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, u_53);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(d_5, e_5, t);
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(a_5, b_5, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(j_5, k_5, t);
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(h_5, i_5, t);
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(f_5, g_5, t);
  return(t);
}
ATerm t_6 (ATerm s_53, ATerm t_53, ATerm r_53, ATerm t)
{
  ATerm y_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_53, t_53);
  t = e_7(v_1, t_53, t_53, t);
  t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
  t = e_7(x_1, s_53, t_53, t);
  t = (ATerm) ATmakeAppl(sym__2, t_53, s_53);
  t = conc_0_0(t);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_4, r_53);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(p_5, q_5, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(x_5, z_5, t);
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(t_5, w_5, t);
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(r_5, s_5, t);
  return(t);
}
ATerm u_6 (ATerm p_53, ATerm q_53, ATerm o_53, ATerm t)
{
  ATerm l_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_53, q_53);
  t = e_7(z_1, q_53, q_53, t);
  t = (ATerm) ATmakeAppl(sym__2, p_53, q_53);
  t = e_7(a_2, p_53, q_53, t);
  t = (ATerm) ATmakeAppl(sym__2, q_53, p_53);
  t = conc_0_0(t);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_5, o_53);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm v_6 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm a_6 = NULL,d_6 = NULL,e_6 = NULL,h_6 = NULL,p_6 = NULL,q_6 = NULL,g_7 = NULL;
  a_6 = t;
  t = (ATerm) ATempty;
  p_6 = t;
  t = SSL_mkterm(c_54, p_6);
  d_6 = t;
  t = (ATerm) ATempty;
  h_6 = t;
  t = SSL_mkterm(d_54, h_6);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, e_6);
  q_6 = t;
  t = term_z_10;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_6, e_6), term_z_10);
  t = c_7(d_2, q_6, g_7, t);
  t = a_6;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm b_7 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm i_7 = NULL,o_7 = NULL,p_7 = NULL,c_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL;
  i_7 = t;
  t = (ATerm) ATempty;
  g_8 = t;
  t = SSL_mkterm(x_53, g_8);
  o_7 = t;
  t = (ATerm) ATempty;
  c_8 = t;
  t = SSL_mkterm(y_53, c_8);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_7, p_7);
  h_8 = t;
  t = term_c_11;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_7, p_7), term_c_11);
  t = c_7(g_2, h_8, j_8, t);
  t = i_7;
  return(t);
}
ATerm c_7 (ATerm y_83 (ATerm), ATerm c_32, ATerm a_32, ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  t = y_83(t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_8, c_32, a_32);
  t = b_8(k_8, c_32, a_32, t);
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = term_i_11;
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_8, term_i_11);
        t = a_8(k_8, s_8, t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_8 = ATgetFirst((ATermList) t);
        m_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_11;
    p_8 = t;
    t = (ATerm) ATinsert(CheckATermList(m_8), (ATerm) ATinsert(CheckATermList(l_8), c_32));
    q_8 = t;
    t = SSL_table_put(k_8, p_8, q_8);
    t = o_8;
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm d_7 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,e_9 = NULL,f_9 = NULL;
  t_8 = t;
  t = (ATerm) ATempty;
  x_8 = t;
  t = SSL_mkterm(h_54, x_8);
  u_8 = t;
  t = (ATerm) ATempty;
  w_8 = t;
  t = SSL_mkterm(i_54, w_8);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_8, v_8);
  e_9 = t;
  t = term_l_11;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_8, v_8), term_l_11);
  t = c_7(j_2, e_9, f_9, t);
  t = t_8;
  return(t);
}
ATerm e_7 (ATerm o_75 (ATerm), ATerm l_21, ATerm m_21, ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm l_9 = NULL;
    ATerm o_2 (ATerm t)
    {
      ATerm m_9 = NULL;
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), m_9);
      t = o_75(t);
      return(t);
    }
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = m_21;
    t = map_1_0(o_2, t);
    return(t);
  }
  t = l_21;
  t = map_1_0(m_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(v_9, z_9, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm a_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(r_10, t_10, t);
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(p_10, q_10, t);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(a_10, o_10, t);
  return(t);
}
ATerm f_7 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t)
{
  ATerm n_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_53, n_53);
  t = e_7(r_2, n_53, n_53, t);
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  t = e_7(s_2, m_53, n_53, t);
  t = (ATerm) ATmakeAppl(sym__2, n_53, m_53);
  t = conc_0_0(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, l_53);
  return(t);
}
ATerm repeat_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_89(t);
        t = b_11(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,q_11 = NULL,v_11 = NULL,x_11 = NULL,y_0 = NULL;
  x_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  f_11 = t;
  t = q_11;
  {
    ATerm x_2 (ATerm t)
    {
      if((g_11 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(x_2, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_11, v_11);
    y_0 = t;
    t = SSLsetAnnotations(y_0, f_11);
  }
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm c_12 = NULL,o_1 = NULL,w_1 = NULL;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_12), term_y_12), term_x_12), term_w_12), term_u_12), term_t_12), term_q_12), term_j_12), term_i_12), term_g_12), term_f_12), term_d_12), term_b_12), term_a_12), term_z_11), term_y_11), term_w_11), term_u_11), term_s_11), term_r_11), term_p_11), term_o_11));
  t = member_0_0(t);
  t = SSL_explode_string(c_12);
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_1), term_a_13);
  o_1 = t;
  t = SSL_implode_string(o_1);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,k_1 = NULL;
      ATerm j_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_12 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(m_13) != AT_INT) || (ATgetInt((ATermInt) m_13) != 34)))
                _fail(t);
              p_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_12), term_o_13), term_n_13);
          ;
          LocalPopChoice(l_13);
        }
      else
        {
          t = j_13;
          {
            ATerm r_12 = NULL,s_12 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_12 = ATgetFirst((ATermList) t);
                s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_12;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_12), term_n_13), term_n_13);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_12), term_r_13), term_n_13);
              }
          }
        }
      o_12 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_12 = ATgetFirst((ATermList) t);
          m_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_12);
      k_12 = t;
      t = m_12;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      n_12 = t;
      t = (ATerm) ATinsert(CheckATermList(n_12), l_12);
      k_1 = t;
      t = SSLsetAnnotations(k_1, k_12);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm p_13 = NULL,t_13 = NULL,u_13 = NULL;
        u_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            t_13 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_2 = NULL,k_2 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(u_13);
              e_2 = t;
              t = t_13;
              t = escape_chars_0_0(t);
              k_2 = t;
              t = (ATerm) ATinsert(CheckATermList(k_2), p_13);
              s_1 = t;
              t = SSLsetAnnotations(s_1, e_2);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_13;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm e_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      y_20 = ATgetArgument(t, 0);
      {
        ATerm c_21 = NULL,y_2 = NULL,b_3 = NULL;
        t = SSL_explode_string(y_20);
        {
          ATerm w_13 = t;
          if((PushChoice() == 0))
            {
              ATerm d_3 = NULL,i_3 = NULL;
              d_3 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_13 = ATgetFirst((ATermList) t);
                  if(((ATgetType(x_13) != AT_INT) || (ATgetInt((ATermInt) x_13) != 34)))
                    _fail(t);
                  i_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_3;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = d_3;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_13;
            }
          t = escape_chars_0_0(t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_3), term_o_13), (ATerm) ATinsert(ATempty, term_o_13));
          t = conc_0_0(t);
          y_2 = t;
          t = SSL_implode_string(y_2);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym_Str_1, c_21);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          y_20 = ATgetArgument(t, 0);
          {
            ATerm r_3 = NULL;
            t = SSL_real_to_string(y_20);
            r_3 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, r_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              y_20 = ATgetArgument(t, 0);
              {
                ATerm y_3 = NULL;
                t = SSL_int_to_string(y_20);
                y_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_3);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  y_20 = ATgetArgument(t, 0);
                  {
                    ATerm f_4 = NULL,h_4 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(x_20);
                    f_4 = t;
                    t = y_20;
                    t = AddLeadingPrime_0_0(t);
                    h_4 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_4);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, f_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDef_3))
                    {
                      y_20 = ATgetArgument(t, 0);
                      z_20 = ATgetArgument(t, 1);
                      e_20 = ATgetArgument(t, 2);
                      {
                        ATerm c_5 = NULL,v_5 = NULL,e_12 = NULL;
                        t = SSLgetAnnotations(x_20);
                        c_5 = t;
                        t = y_20;
                        t = AddLeadingPrime_0_0(t);
                        v_5 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, v_5, z_20, e_20);
                        e_12 = t;
                        t = SSLsetAnnotations(e_12, c_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDef_3))
                        {
                          y_20 = ATgetArgument(t, 0);
                          z_20 = ATgetArgument(t, 1);
                          e_20 = ATgetArgument(t, 2);
                          {
                            ATerm m_6 = NULL,x_6 = NULL,b_13 = NULL;
                            t = SSLgetAnnotations(x_20);
                            m_6 = t;
                            t = y_20;
                            t = AddLeadingPrime_0_0(t);
                            x_6 = t;
                            t = (ATerm) ATmakeAppl(sym_SDef_3, x_6, z_20, e_20);
                            b_13 = t;
                            t = SSLsetAnnotations(b_13, m_6);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              y_20 = ATgetArgument(t, 0);
                              z_20 = ATgetArgument(t, 1);
                              {
                                ATerm n_7 = NULL,f_8 = NULL,c_13 = NULL;
                                t = SSLgetAnnotations(x_20);
                                n_7 = t;
                                t = y_20;
                                t = AddLeadingPrime_0_0(t);
                                f_8 = t;
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, f_8, z_20);
                                c_13 = t;
                                t = SSLsetAnnotations(c_13, n_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Var_1))
                                {
                                  y_20 = ATgetArgument(t, 0);
                                  {
                                    ATerm b_9 = NULL,d_9 = NULL,d_13 = NULL;
                                    t = SSLgetAnnotations(x_20);
                                    b_9 = t;
                                    t = y_20;
                                    t = AddLeadingPrime_0_0(t);
                                    d_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, d_9);
                                    d_13 = t;
                                    t = SSLsetAnnotations(d_13, b_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SVar_1))
                                    {
                                      y_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm o_9 = NULL,q_9 = NULL,e_13 = NULL;
                                        t = SSLgetAnnotations(x_20);
                                        o_9 = t;
                                        t = y_20;
                                        t = AddLeadingPrime_0_0(t);
                                        q_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_SVar_1, q_9);
                                        e_13 = t;
                                        t = SSLsetAnnotations(e_13, o_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_OpDecl_2))
                                        {
                                          y_20 = ATgetArgument(t, 0);
                                          z_20 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_10 = NULL,e_10 = NULL,f_13 = NULL;
                                            t = SSLgetAnnotations(x_20);
                                            b_10 = t;
                                            t = y_20;
                                            t = AddLeadingPrime_0_0(t);
                                            e_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, e_10, z_20);
                                            f_13 = t;
                                            t = SSLsetAnnotations(f_13, b_10);
                                          }
                                        }
                                      else
                                        {
                                          ATerm m_10 = NULL,u_10 = NULL,g_13 = NULL;
                                          if(match_cons(t, sym_Op_2))
                                            {
                                              y_20 = ATgetArgument(t, 0);
                                              z_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(x_20);
                                          m_10 = t;
                                          t = y_20;
                                          t = AddLeadingPrime_0_0(t);
                                          u_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Op_2, u_10, z_20);
                                          g_13 = t;
                                          t = SSLsetAnnotations(g_13, m_10);
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
ATerm at_end_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
    t_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_23 = ATgetFirst((ATermList) t);
        s_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_11 = NULL,k_11 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(t_23);
          h_11 = t;
          t = s_23;
          t = u_23(t);
          k_11 = t;
          t = (ATerm) ATinsert(CheckATermList(k_11), r_23);
          v_14 = t;
          t = SSLsetAnnotations(v_14, h_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_23;
        t = k_76(t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_22 = NULL,n_22 = NULL,r_22 = NULL;
  j_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_22;
    }
  else
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(r_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_22 = ATgetFirst((ATermList) t);
          if(((r_22 != NULL) && (r_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_22;
      t = at_end_1_0(z_2, t);
    }
  return(t);
}
ATerm c_25 (ATerm l_24, ATerm t)
{
  ATerm m_24 = NULL;
  t = SSL_explode_term(l_24);
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_24 = NULL,w_24 = NULL,x_24 = NULL;
  x_24 = t;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = w_24;
              return(t);
            }
            t = t_24;
            t = at_end_1_0(j_3, t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = c_25(x_24, t);
          }
      }
    }
  else
    {
      t = c_25(x_24, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_25 = NULL,p_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      p_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_25;
    }
  else
    {
      t = p_25;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm y_25 = NULL,b_26 = NULL,d_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,p_26 = NULL,r_26 = NULL,x_14 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  h_26 = t;
  t = SSL_explode_string(j_26);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, l_26);
  x_14 = t;
  t = SSLsetAnnotations(x_14, h_26);
  p_26 = t;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((y_25 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      b_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_26;
  t = last_0_0(t);
  if((y_25 != t))
    {
      _fail(t);
    }
  t = p_26;
  return(t);
}
ATerm at_last_1_0 (ATerm v_76 (ATerm), ATerm t)
{
  ATerm f_28 (ATerm t)
  {
    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
    b_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_28 = ATgetFirst((ATermList) t);
        d_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_11 = NULL,a_15 = NULL;
          t = SSLgetAnnotations(b_28);
          t_11 = t;
          t = d_28;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(d_28), c_28);
          a_15 = t;
          t = SSLsetAnnotations(a_15, t_11);
          t = v_76(t);
          ;
          LocalPopChoice(c_14);
        }
      else
        {
          t = b_14;
          {
            ATerm h_12 = NULL,v_12 = NULL,b_15 = NULL;
            t = SSLgetAnnotations(b_28);
            h_12 = t;
            t = d_28;
            t = f_28(t);
            v_12 = t;
            t = (ATerm) ATinsert(CheckATermList(v_12), c_28);
            b_15 = t;
            t = SSLsetAnnotations(b_15, h_12);
          }
        }
    }
    return(t);
  }
  t = f_28(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = NULL,l_28 = NULL;
      ATerm n_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((k_28 != NULL) && (k_28 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              k_28 = ATgetFirst((ATermList) t);
            {
              ATerm f_14 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_14) != AT_LIST) || !(ATisEmpty(f_14))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATempty;
        return(t);
      }
      t = at_last_1_0(n_3, t);
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_28, not_null(k_28));
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm m_28 = NULL,n_28 = NULL;
        ATerm o_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((m_28 != NULL) && (m_28 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                m_28 = ATgetFirst((ATermList) t);
              {
                ATerm g_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        t = at_last_1_0(o_3, t);
        n_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_28, not_null(m_28));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  f_29 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
      t = a_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_29 = ATgetFirst((ATermList) t);
          c_29 = (ATerm) ATgetNext((ATermList) t);
          t = c_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_29 = ATgetFirst((ATermList) t);
              e_29 = (ATerm) ATgetNext((ATermList) t);
              t = e_29;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_28;
                  if(match_string(t, "Cons"))
                    {
                      ATerm h_14 = t;
                      int i_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_29 = NULL;
                          t = d_29;
                          t = implode_cons_0_0(t);
                          j_29 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_29), b_29);
                          ;
                          LocalPopChoice(i_14);
                        }
                      else
                        {
                          t = h_14;
                          t = (ATerm) ATinsert(ATempty, f_29);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, f_29);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, f_29);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, f_29);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, f_29);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, f_29);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm n_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,z_32 = NULL,d_33 = NULL;
  t_32 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_32 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
      t = z_32;
      if(match_string(t, "Cons"))
        {
          ATerm k_13 = NULL,q_13 = NULL,s_13 = NULL,v_13 = NULL;
          t = d_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_14 = ATgetFirst((ATermList) t);
              n_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_32;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_14 = ATgetFirst((ATermList) t);
              r_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_32;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_32;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              s_13 = ATgetArgument(t, 0);
              v_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_13;
          if(match_cons(t, sym_Op_2))
            {
              k_13 = ATgetArgument(t, 0);
              q_13 = ATgetArgument(t, 1);
              t = q_13;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_13;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, s_13);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, s_13, v_13);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, s_13, v_13);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, s_13, v_13);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = d_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_l_14;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          z_32 = ATgetArgument(t, 0);
          d_33 = ATgetArgument(t, 1);
          s_32 = ATgetArgument(t, 2);
          t = s_32;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, z_32, d_33);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              z_32 = ATgetArgument(t, 0);
              d_33 = ATgetArgument(t, 1);
              s_32 = ATgetArgument(t, 2);
              t = s_32;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, z_32, d_33);
            }
          else
            {
              ATerm n_14 = NULL,t_14 = NULL,z_14 = NULL;
              if(match_cons(t, sym_Prim_2))
                {
                  z_32 = ATgetArgument(t, 0);
                  d_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_32;
              {
                ATerm m_14 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_14 = NULL;
                    o_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_o_13, o_14);
                    t = is_quoted_0_0(t);
                    t = o_14;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_14;
                  }
                t = SSL_explode_string(z_32);
                z_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_14), term_o_13), (ATerm) ATinsert(ATempty, term_o_13));
                t = conc_0_0(t);
                t_14 = t;
                t = SSL_implode_string(t_14);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_Prim_2, n_14, d_33);
              }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = topdown_1_0(l_99, t);
    return(t);
  }
  t = l_99(t);
  t = SRTS_all(p_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  c_35 = t;
  if(match_cons(t, sym__2))
    {
      d_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_35 = ATgetFirst((ATermList) t);
      i_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_35;
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_35;
  if(match_cons(t, sym_Some_1))
    {
      b_35 = ATgetArgument(t, 0);
      t = b_35;
      if(match_string(t, "left"))
        {
          t = c_35;
          t = f_7(d_35, h_35, i_35, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = c_35;
              t = u_6(d_35, h_35, i_35, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = c_35;
              t = t_6(d_35, h_35, i_35, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = c_35;
      t = s_6(d_35, h_35, i_35, t);
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(v_3, t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, v_35);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm x_33 = NULL,e_34 = NULL;
  e_34 = t;
  {
    ATerm u_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL;
        t = SSL_explode_term(e_34);
        if(match_cons(t, sym__2))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_15 = ATgetArgument(t, 1);
              if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
                {
                  h_15 = ATgetFirst((ATermList) c_15);
                  {
                    ATerm d_15 = (ATerm) ATgetNext((ATermList) c_15);
                    if(((ATgetType(d_15) != AT_LIST) || !(ATisEmpty(d_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_15;
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = u_14;
        t = e_34;
      }
    t = topdown_1_0(q_3, t);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,r_34 = NULL,s_34 = NULL;
        s_34 = t;
        if(match_cons(t, sym_Seq_2))
          {
            m_34 = ATgetArgument(t, 0);
            n_34 = ATgetArgument(t, 1);
            t = n_34;
            if(match_cons(t, sym_Seq_2))
              {
                o_34 = ATgetArgument(t, 0);
                r_34 = ATgetArgument(t, 1);
                {
                  ATerm e_15 = t;
                  int k_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_34, o_34);
                      t = s_3(t);
                      x_34 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_34, r_34);
                      t = s_3(t);
                      ;
                      LocalPopChoice(k_15);
                    }
                  else
                    {
                      t = e_15;
                      t = s_34;
                    }
                }
              }
            else
              {
                t = s_34;
              }
          }
        else
          {
            t = s_34;
          }
        return(t);
      }
      t = bottomup_1_0(s_3, t);
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, term_r_15), term_q_15))), (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATempty, term_n_15))));
      t = repeat_1_0(t_3, t);
      t = x_33;
      t = bottomup_1_0(u_3, t);
    }
  }
  return(t);
}
ATerm r_7 (ATerm n_20, ATerm o_20, ATerm t)
{
  ATerm a_36 = NULL;
  t = SSL_fputc(n_20, o_20);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_36);
  return(t);
}
ATerm s_7 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_write_term_to_stream_text(t_38, u_38);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_36);
  return(t);
}
ATerm u_7 (ATerm x_86 (ATerm), ATerm v_368, ATerm x_38, ATerm t)
{
  ATerm c_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_368, term_s_15);
  t = x_7(t);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, x_38);
  t = x_86(t);
  t = fclose_0_0(t);
  t = x_38;
  return(t);
}
ATerm t_7 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_write_term_to_stream_baf(p_38, q_38);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_36);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      if(match_cons(t_15, sym_Stream_1))
        {
          h_16 = ATgetArgument(t_15, 0);
        }
      else
        _fail(t);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(h_16, j_16, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm i_17 = NULL,n_17 = NULL,q_17 = NULL,u_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(match_cons(v_15, sym_Stream_1))
        {
          u_17 = ATgetArgument(v_15, 0);
        }
      else
        _fail(t);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(u_17, w_17, t);
  i_17 = t;
  t = term_x_15;
  n_17 = t;
  t = i_17;
  if(match_cons(t, sym_Stream_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, i_17);
  t = r_7(n_17, q_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,r_37 = NULL,s_37 = NULL,g_15 = NULL,f_15 = NULL;
  i_36 = t;
  if(match_cons(t, sym__2))
    {
      p_36 = ATgetArgument(t, 0);
      q_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  o_36 = t;
  t = p_36;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_3, t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        t = term_d_16;
        h_36 = t;
      }
    r_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_36, q_36);
    f_15 = t;
    t = SSLsetAnnotations(f_15, o_36);
    t = i_36;
    if(match_cons(t, sym__2))
      {
        k_36 = ATgetArgument(t, 0);
        l_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_36);
    j_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_36, (ATerm) ATmakeAppl(sym__2, not_null(h_36), l_36));
    g_15 = t;
    t = SSLsetAnnotations(g_15, j_36);
    n_36 = t;
    if(match_cons(t, sym__2))
      {
        r_37 = ATgetArgument(t, 0);
        s_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_15 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,i_15 = NULL;
          t = SSLgetAnnotations(n_36);
          y_15 = t;
          t = r_37;
          t = fetch_1_0(x_3, t);
          b_16 = t;
          t = s_37;
          if(match_cons(t, sym__2))
            {
              f_16 = ATgetArgument(t, 0);
              g_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_7(z_3, f_16, g_16, t);
          c_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_16, c_16);
          i_15 = t;
          t = SSLsetAnnotations(i_15, y_15);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = e_16;
          {
            ATerm y_16 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(n_36);
            y_16 = t;
            t = s_37;
            if(match_cons(t, sym__2))
              {
                f_17 = ATgetArgument(t, 0);
                g_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_7(a_4, f_17, g_17, t);
            e_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_37, e_17);
            j_15 = t;
            t = SSLsetAnnotations(j_15, y_16);
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
ATerm apply_strategy_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  z_37 = t;
  t = dtime_0_0(t);
  t = z_37;
  t = y_72(t);
  y_37 = t;
  t = dtime_0_0(t);
  v_37 = t;
  t = y_37;
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_37), (ATerm) ATmakeAppl(sym_Runtime_1, v_37)), x_37);
  return(t);
}
ATerm n_38 (ATerm h_38, ATerm t)
{
  t = SSL_fclose(h_38);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_38 = ATgetArgument(t, 0);
      {
        ATerm m_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_38);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = m_16;
            t = n_38(l_38, t);
          }
      }
    }
  else
    {
      t = n_38(l_38, t);
    }
  return(t);
}
ATerm v_7 (ATerm v_38, ATerm t)
{
  t = SSL_read_term_from_stream(v_38);
  return(t);
}
ATerm w_7 (ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm o_38 = NULL;
  t = SSL_fopen(p_20, q_20);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_38);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_stdin_stream();
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_38);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_38 = NULL;
  t = SSL_stdout_stream();
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_38);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_38 = NULL;
  t = SSL_stderr_stream();
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_38);
  return(t);
}
ATerm l_40 (ATerm e_39, ATerm t)
{
  ATerm f_39 = NULL;
  t = SSL_explode_term(e_39);
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            f_39 = ATgetFirst((ATermList) s_16);
            {
              ATerm u_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_40 (ATerm i_39, ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,q_39 = NULL,o_15 = NULL;
  t = SSLgetAnnotations(k_39);
  n_39 = t;
  t = i_39;
  if(match_cons(t, sym_Path_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_39, j_39);
  o_15 = t;
  t = SSLsetAnnotations(o_15, n_39);
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(l_39, m_39, t);
  return(t);
}
ATerm n_40 (ATerm s_39, ATerm t_39, ATerm z_39, ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,f_40 = NULL,p_15 = NULL;
  t = SSLgetAnnotations(z_39);
  c_40 = t;
  t = SSL_is_string(s_39);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_40, t_39);
  p_15 = t;
  t = SSLsetAnnotations(p_15, c_40);
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(a_40, b_40, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_40(h_40, t);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm x_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_40(i_40, k_40, h_40, t);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = x_16;
                  t = n_40(i_40, k_40, h_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_40(h_40, t);
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_40 = NULL;
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_40, term_h_17);
      t = x_7(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      t = debug_1_0(c_4, t);
      _fail(t);
    }
  p_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(q_40, t);
  o_40 = t;
  t = p_40;
  t = fclose_0_0(t);
  t = o_40;
  return(t);
}
ATerm fetch_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm p_41 (ATerm t)
  {
    ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
    m_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_41 = ATgetFirst((ATermList) t);
        o_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_18 = NULL,v_18 = NULL,u_15 = NULL;
          t = SSLgetAnnotations(m_41);
          s_18 = t;
          t = n_41;
          t = e_76(t);
          v_18 = t;
          t = (ATerm) ATinsert(CheckATermList(o_41), v_18);
          u_15 = t;
          t = SSLsetAnnotations(u_15, s_18);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm d_19 = NULL,h_19 = NULL,w_15 = NULL;
            t = SSLgetAnnotations(m_41);
            d_19 = t;
            t = o_41;
            t = p_41(t);
            h_19 = t;
            t = (ATerm) ATinsert(CheckATermList(h_19), n_41);
            w_15 = t;
            t = SSLsetAnnotations(w_15, d_19);
          }
        }
    }
    return(t);
  }
  t = p_41(t);
  return(t);
}
ATerm q_7 (ATerm f_53, ATerm g_53, ATerm t)
{
  t = SSL_strcat(f_53, g_53);
  return(t);
}
ATerm debug_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  s_41 = t;
  t = v_86(t);
  t_41 = t;
  t = term_k_9;
  u_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_41), t_41);
  v_41 = t;
  t = SSL_printnl(u_41, v_41);
  t = s_41;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_42 = NULL;
      c_42 = t;
      t = SSL_is_string(c_42);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = p_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_4, t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
              i_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_42 = ATgetArgument(t, 0);
                  t = j_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_42 = ATgetArgument(t, 0);
                      t = j_42;
                      {
                        ATerm v_17 = t;
                        int x_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_17);
                          }
                        else
                          {
                            t = v_17;
                            t = debug_1_0(e_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_42 = NULL,p_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_42 = ATgetArgument(t, 0);
                          k_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_42;
                      t = eval_config_0_0(t);
                      o_42 = t;
                      t = k_42;
                      t = eval_config_0_0(t);
                      p_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_42, p_42);
                      t = q_7(o_42, p_42, t);
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
  ATerm t_42 = NULL,u_42 = NULL;
  t_42 = t;
  t = term_y_17;
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, t_42);
  t = a_8(u_42, t_42, t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL,w_42 = NULL;
        t = eval_config_0_0(t);
        v_42 = t;
        t = term_y_17;
        w_42 = t;
        t = SSL_table_put(w_42, t_42, v_42);
        t = v_42;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_43 = NULL;
        t = term_d_18;
        t = get_config_0_0(t);
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_43, term_e_18);
        t = geq_0_0(t);
        t = a_43;
        t = g_97(t);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = a_43;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  if(match_string(t, "-k"))
    {
      t = f_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_43;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  t = SSL_string_to_int(g_43);
  h_43 = t;
  t = term_f_18;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, h_43);
  t = d_8(i_43, h_43, t);
  t = g_43;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm k_43 = NULL;
  k_43 = t;
  if(match_string(t, "-S"))
    {
      t = k_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_43;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  t = term_d_18;
  l_43 = t;
  t = term_h_18;
  m_43 = t;
  t = term_i_18;
  t = d_8(l_43, m_43, t);
  t = term_j_18;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  t = SSL_string_to_int(n_43);
  o_43 = t;
  t = term_d_18;
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, o_43);
  t = d_8(p_43, o_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_43);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  t = term_m_18;
  q_43 = t;
  t = term_j_9;
  r_43 = t;
  t = term_n_18;
  t = d_8(q_43, r_43, t);
  t = term_o_18;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, s_4, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = Option_3_0(w_4, z_4, m_5, t);
          }
      }
    }
  return(t);
}
ATerm d_8 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm s_43 = NULL;
  t = term_y_17;
  s_43 = t;
  t = SSL_table_put(s_43, t_45, u_45);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, t_45, u_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
      t = term_j_9;
      t = i_0(t);
      x_43 = t;
      t = term_w_18;
      y_43 = t;
      t = term_x_18;
      z_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, x_43);
      t = b_8(y_43, z_43, x_43, t);
      _fail(t);
    }
  else
    {
      ATerm c_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_43 = ATgetFirst((ATermList) t);
          w_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_43;
      t = d_0(t);
      t = term_j_9;
      t = g_0(t);
      c_44 = t;
      t = (ATerm) ATinsert(CheckATermList(w_43), c_44);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "-o"))
    {
      t = e_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_44;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  f_44 = t;
  t = term_y_18;
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, f_44);
  t = d_8(g_44, f_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_44);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, u_5, t);
  return(t);
}
ATerm b_8 (ATerm k_32, ATerm l_32, ATerm j_32, ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
        t = a_8(k_32, l_32, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
    j_44 = t;
    t = (ATerm) ATinsert(CheckATermList(j_44), j_32);
    k_44 = t;
    t = SSL_table_put(k_32, l_32, k_44);
    t = i_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
      t = term_j_9;
      t = r_0(t);
      v_44 = t;
      t = term_w_18;
      w_44 = t;
      t = term_x_18;
      x_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, v_44);
      t = b_8(w_44, x_44, v_44, t);
      _fail(t);
    }
  else
    {
      ATerm b_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_44 = ATgetFirst((ATermList) t);
          s_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_44 = ATgetFirst((ATermList) t);
          u_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_44;
      t = n_0(t);
      t = t_44;
      t = p_0(t);
      b_45 = t;
      t = (ATerm) ATinsert(CheckATermList(u_44), b_45);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  if(match_string(t, "-i"))
    {
      t = d_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_45;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  e_45 = t;
  t = term_f_19;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, e_45);
  t = d_8(f_45, e_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_45);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, b_6, c_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_9;
  t = whoami_0_0(t);
  g_45 = t;
  t = term_k_9;
  i_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_19), g_45);
  j_45 = t;
  t = SSL_printnl(i_45, j_45);
  t = term_s_9;
  h_45 = t;
  t = SSL_exit(h_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_7 (ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_30, p_30);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      t = SSL_addr(o_30, p_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_45;
      t = m_82(t);
    }
  else
    {
      ATerm q_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_45;
      t = foldr_2_0(m_82, n_82, t);
      q_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_45, q_45);
      t = n_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(k_20, l_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_45 = NULL,g_20 = NULL,h_20 = NULL;
  t = times_0_0(t);
  h_20 = t;
  t = SSL_explode_term(h_20);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_20;
  t = foldr_2_0(f_6, g_6, t);
  v_45 = t;
  t = SSL_TicksToSeconds(v_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_46;
        if((m_46 != t))
          {
            _fail(t);
          }
        t = l_46;
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_46, n_46);
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = SSL_gtr(m_46, n_46);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL;
        t = term_d_18;
        t = get_config_0_0(t);
        t_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_46, term_s_9);
        t = geq_0_0(t);
        t = r_46;
        t = f_97(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = r_46;
      }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = run_time_0_0(t);
  v_46 = t;
  t = term_j_9;
  t = whoami_0_0(t);
  w_46 = t;
  t = term_k_9;
  y_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_19), v_46), term_t_19), w_46);
  z_46 = t;
  t = SSL_printnl(y_46, z_46);
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_19), v_46), term_t_19), w_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_18;
  a_47 = t;
  t = SSL_exit(a_47);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  j_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_47 = ATgetArgument(t, 0);
          {
            ATerm n_21 = NULL,i_16 = NULL;
            t = SSLgetAnnotations(j_47);
            n_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_47);
            i_16 = t;
            t = SSLsetAnnotations(i_16, n_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = fetch_1_0(j_6, t);
    }
  t = w_73(t);
  return(t);
}
ATerm map_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  ATerm z_47 (ATerm t)
  {
    ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
    w_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_47;
      }
    else
      {
        ATerm x_21 = NULL,f_22 = NULL,h_22 = NULL,l_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_47 = ATgetFirst((ATermList) t);
            y_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_47);
        x_21 = t;
        t = x_47;
        t = u_75(t);
        f_22 = t;
        t = y_47;
        t = z_47(t);
        h_22 = t;
        t = (ATerm) ATinsert(CheckATermList(h_22), f_22);
        l_16 = t;
        t = SSLsetAnnotations(l_16, x_21);
      }
    return(t);
  }
  t = z_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_48 = ATgetFirst((ATermList) t);
      d_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_48 = NULL,i_48 = NULL;
        ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_48)), not_null(i_48));
          return(t);
        }
        t = d_48;
        t = l_0(t);
        if(((h_48 != NULL) && (h_48 != t)))
          _fail(t);
        else
          h_48 = t;
        t = c_48;
        t = k_0(t);
        if(((i_48 != NULL) && (i_48 != t)))
          _fail(t);
        else
          i_48 = t;
        t = d_48;
        t = reverse_acc_2_0(k_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_9;
      t = l_0(t);
    }
  return(t);
}
ATerm a_8 (ATerm b_34, ATerm c_34, ATerm t)
{
  t = SSL_table_get(b_34, c_34);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,n_16 = NULL;
  o_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_48);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_48);
  n_16 = t;
  t = SSLsetAnnotations(n_16, m_48);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_48), term_y_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = fetch_1_0(l_6, t);
    }
  t = term_b_20;
  t = echo_0_0(t);
  t = term_w_18;
  k_48 = t;
  t = term_x_18;
  l_48 = t;
  t = term_c_20;
  t = a_8(k_48, l_48, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_20 = ATgetFirst((ATermList) t);
                ATerm j_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_48;
          }
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATinsert(ATempty, s_48);
      }
    t_48 = t;
    t = term_d_16;
    u_48 = t;
    t = SSL_printnl(u_48, t_48);
    t = s_48;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_m_20;
  y_48 = t;
  t = term_j_9;
  z_48 = t;
  t = term_r_20;
  t = d_8(y_48, z_48, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  t = term_m_20;
  c_49 = t;
  t = term_j_9;
  d_49 = t;
  t = term_r_20;
  t = d_8(c_49, d_49, t);
  t = term_t_20;
  a_49 = t;
  t = term_j_9;
  b_49 = t;
  t = term_u_20;
  t = d_8(a_49, b_49, t);
  t = term_v_20;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, y_6, z_6, t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = Option_3_0(a_7, h_7, j_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,p_16 = NULL;
  j_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_49 = ATgetFirst((ATermList) t);
      g_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  e_49 = t;
  t = f_49;
  t = l_59(t);
  h_49 = t;
  t = g_49;
  t = m_59(t);
  i_49 = t;
  t = (ATerm) ATinsert(CheckATermList(i_49), h_49);
  p_16 = t;
  t = SSLsetAnnotations(p_16, e_49);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,t_49 = NULL,u_49 = NULL,r_16 = NULL;
  o_49 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_21;
        t = e_89(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
      }
    t = o_49;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_49 = ATgetFirst((ATermList) t);
        r_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_49);
    p_49 = t;
    t = term_j_19;
    u_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_19, q_49);
    t = d_8(u_49, q_49, t);
    t = r_49;
    {
      ATerm e_50 (ATerm t)
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_21 = t;
            int j_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_49 = NULL;
                x_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_49;
                ;
                LocalPopChoice(j_21);
              }
            else
              {
                t = i_21;
                t = e_89(t);
                t = Cons_2_0(_id, e_50, t);
              }
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm a_50 = NULL,b_50 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_50 = ATgetFirst((ATermList) t);
                  b_50 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_50), (ATerm) ATmakeAppl(sym_Undefined_1, a_50));
            }
          }
        return(t);
      }
      t = e_50(t);
      t_49 = t;
      t = (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Program_1, q_49));
      r_16 = t;
      t = SSLsetAnnotations(r_16, p_49);
    }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  if(match_string(t, "--help"))
    {
      t = q_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_50;
        }
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  t = term_x_19;
  r_50 = t;
  t = term_j_9;
  s_50 = t;
  t = term_k_21;
  t = d_8(r_50, s_50, t);
  t = term_o_21;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  l_50 = t;
  t = term_w_18;
  n_50 = t;
  t = term_x_18;
  o_50 = t;
  t = (ATerm) ATempty;
  p_50 = t;
  t = SSL_table_put(n_50, o_50, p_50);
  t = l_50;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_89(t);
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
                t = Option_3_0(l_7, m_7, z_7, t);
                ;
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_7, t);
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_50 = NULL;
          z_50 = t;
          {
            ATerm w_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_22 = NULL;
                t = z_50;
                {
                  ATerm z_21 = t;
                  int a_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_22);
                    }
                  else
                    {
                      t = z_21;
                      t = fetch_1_0(e_8, t);
                    }
                  t = z_50;
                  t = default_system_usage_0_0(t);
                  t = term_h_18;
                  q_22 = t;
                  t = SSL_exit(q_22);
                }
                ;
                LocalPopChoice(y_21);
              }
            else
              {
                t = w_21;
                {
                  ATerm y_22 = NULL;
                  t = term_m_20;
                  t = get_config_0_0(t);
                  t = z_50;
                  t = default_system_about_0_0(t);
                  t = term_h_18;
                  y_22 = t;
                  t = SSL_exit(y_22);
                }
              }
          }
          ;
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
                ATerm i_8 (ATerm t)
                {
                  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,t_16 = NULL;
                  f_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_51);
                  d_51 = t;
                  t = e_51;
                  if(((j_50 != NULL) && (j_50 != t)))
                    _fail(t);
                  else
                    j_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_51);
                  t_16 = t;
                  t = SSLsetAnnotations(t_16, d_51);
                  return(t);
                }
                t = fetch_1_0(i_8, t);
                t = term_k_9;
                b_51 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_50)), term_d_22);
                c_51 = t;
                t = SSL_printnl(b_51, c_51);
                t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_50)), term_d_22));
                t = default_system_usage_0_0(t);
                t = term_s_9;
                a_51 = t;
                t = SSL_exit(a_51);
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
              }
          }
        }
      k_50 = t;
      t = term_w_18;
      m_50 = t;
      t = SSL_table_destroy(m_50);
      t = k_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  t = parse_options_1_0(y_73, t);
  k_51 = t;
  t = term_e_22;
  n_51 = t;
  t = SSL_table_create(n_51);
  t = term_e_22;
  l_51 = t;
  t = term_g_22;
  m_51 = t;
  t = SSL_table_put(l_51, m_51, k_51);
  t = k_51;
  t = a_74(t);
  {
    ATerm i_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_73, t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = i_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_74(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = if_verbose2_1_0(g_9, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  t = term_o_22;
  o_51 = t;
  t = term_j_9;
  p_51 = t;
  t = term_p_22;
  t = d_8(o_51, p_51, t);
  t = term_s_22;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  q_51 = t;
  t = term_j_19;
  t = get_config_0_0(t);
  r_51 = t;
  t = term_k_9;
  s_51 = t;
  t = (ATerm) ATinsert(ATempty, r_51);
  t_51 = t;
  t = SSL_printnl(s_51, t_51);
  t = q_51;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_73(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    {
                      ATerm b_23 = t;
                      int c_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_8, a_9, c_9, t);
                          ;
                          LocalPopChoice(c_23);
                        }
                      else
                        {
                          t = b_23;
                          {
                            ATerm d_23 = t;
                            int e_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_23);
                              }
                            else
                              {
                                t = d_23;
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
  ATerm y_8 (ATerm t)
  {
    ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
    v_51 = t;
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_9, t);
          ;
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          t = term_h_23;
          u_51 = t;
        }
      t = not_null(u_51);
      t = ReadFromFile_0_0(t);
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_51, w_51);
      t = apply_strategy_1_0(h_73, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_8, j_73, r_8, y_8, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,a_17 = NULL;
  b_52 = t;
  if(match_cons(t, sym__2))
    {
      y_51 = ATgetArgument(t, 0);
      z_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  x_51 = t;
  t = z_51;
  t = Stratego_Ensugar_0_0(t);
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, a_52);
  a_17 = t;
  t = SSLsetAnnotations(a_17, x_51);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_9, _fail, default_usage_0_0, t);
  return(t);
}
