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
ATerm term_c_23;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_q_17;
ATerm term_g_17;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
void init_constant_terms (void)
{
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_10);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Some_1, term_y_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_i_9);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_s_18);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_i_9);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_i_9);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_i_9);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_i_9);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm q_6 (ATerm l_32, ATerm m_32, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm r_6 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm s_6 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm t_6 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm);
ATerm d_2 (ATerm);
ATerm u_6 (ATerm s_53, ATerm t_53, ATerm);
ATerm g_2 (ATerm);
ATerm a_7 (ATerm n_53, ATerm o_53, ATerm);
ATerm b_7 (ATerm g_83 (ATerm), ATerm s_31, ATerm q_31, ATerm);
ATerm j_2 (ATerm);
ATerm c_7 (ATerm x_53, ATerm y_53, ATerm);
ATerm d_7 (ATerm w_74 (ATerm), ATerm d_21, ATerm e_21, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm e_7 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm);
ATerm repeat_1_0 (ATerm s_88 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm b_25 (ATerm k_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm at_last_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm split_last_0_0 (ATerm);
ATerm implode_cons_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm q_7 (ATerm f_20, ATerm g_20, ATerm);
ATerm r_7 (ATerm j_38, ATerm k_38, ATerm);
ATerm t_7 (ATerm f_86 (ATerm), ATerm u_365, ATerm n_38, ATerm);
ATerm s_7 (ATerm f_38, ATerm g_38, ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm p_38 (ATerm c_38, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_7 (ATerm l_38, ATerm);
ATerm v_7 (ATerm h_20, ATerm i_20, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_40 (ATerm z_38, ATerm);
ATerm h_40 (ATerm d_39, ATerm e_39, ATerm f_39, ATerm);
ATerm i_40 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm);
ATerm w_7 (ATerm);
ATerm b_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_75 (ATerm), ATerm);
ATerm p_7 (ATerm v_52, ATerm w_52, ATerm);
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_96 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_8 (ATerm j_45, ATerm k_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm t_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm a_8 (ATerm a_32, ATerm b_32, ATerm z_31, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm x_7 (ATerm e_30, ATerm f_30, ATerm);
ATerm foldr_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm need_help_1_0 (ATerm e_73 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm z_7 (ATerm r_33, ATerm s_33, ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_88 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm d_8 (ATerm);
ATerm parse_options_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm iowrap_3_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm);
ATerm h_9 (ATerm);
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
  t = term_i_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_j_9;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), c_0), term_n_9);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_r_9;
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
        ATerm s_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm t_9 = ATgetArgument(t, 1);
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
  t = term_v_9;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATmakeAppl(sym__2, u_0, v_0));
  t = q_6(q_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_9;
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
        ATerm x_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      {
        ATerm a_10 = ATgetArgument(t, 1);
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
  t = term_c_10;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym__2, h_1, l_1));
  t = q_6(e_1, d_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_9;
  return(t);
}
ATerm q_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm u_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
  t = z_7(l_32, m_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_1 = ATgetFirst((ATermList) t);
      {
        ATerm f_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm g_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      {
        ATerm h_10 = ATgetArgument(t, 1);
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
  t = term_i_10;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATmakeAppl(sym__2, c_2, f_2));
  t = q_6(j_1, i_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_i_9;
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
          ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
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
ATerm Disambiguate_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  f_3 = t;
  l_3 = t;
  t = SSL_explode_term(l_3);
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
          {
            v_2 = ATgetFirst((ATermList) l_10);
            u_2 = (ATerm) ATgetNext((ATermList) l_10);
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
      b_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_2;
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_3, v_2);
        t = RightAssoc_0_0(t);
        t = v_2;
        t = o_101(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = r_10;
      }
    w_2 = t;
    t = b_3;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm a_4 = NULL;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_3, a_4);
        t = GreaterThan_0_0(t);
        t = a_4;
        t = o_101(t);
        return(t);
      }
      t = map_1_0(g_1, t);
      d_3 = t;
      t = e_3;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, f_3, e_3);
            t = LeftAssoc_0_0(t);
            t = e_3;
            t = o_101(t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
          }
        g_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATempty, g_3));
        t = conc_0_0(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), w_2);
        k_3 = t;
        t = SSL_mkterm(t_2, k_3);
      }
    }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(u_98, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = u_98(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(u_4, w_4, t);
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(s_4, t_4, t);
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(p_4, q_4, t);
  return(t);
}
ATerm r_6 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t)
{
  ATerm m_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  t = d_7(t_1, l_53, m_53, t);
  t = (ATerm) ATmakeAppl(sym__2, m_53, l_53);
  t = conc_0_0(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_4, k_53);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(c_5, d_5, t);
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(z_4, a_5, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(i_5, j_5, t);
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(g_5, h_5, t);
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(e_5, f_5, t);
  return(t);
}
ATerm s_6 (ATerm i_53, ATerm j_53, ATerm h_53, ATerm t)
{
  ATerm x_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_53, j_53);
  t = d_7(v_1, j_53, j_53, t);
  t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
  t = d_7(x_1, i_53, j_53, t);
  t = (ATerm) ATmakeAppl(sym__2, j_53, i_53);
  t = conc_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, h_53);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(o_5, p_5, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(w_5, y_5, t);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(s_5, v_5, t);
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(q_5, r_5, t);
  return(t);
}
ATerm t_6 (ATerm f_53, ATerm g_53, ATerm e_53, ATerm t)
{
  ATerm k_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_53, g_53);
  t = d_7(z_1, g_53, g_53, t);
  t = (ATerm) ATmakeAppl(sym__2, f_53, g_53);
  t = d_7(a_2, f_53, g_53, t);
  t = (ATerm) ATmakeAppl(sym__2, g_53, f_53);
  t = conc_0_0(t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, e_53);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm u_6 (ATerm s_53, ATerm t_53, ATerm t)
{
  ATerm z_5 = NULL,c_6 = NULL,d_6 = NULL,g_6 = NULL,o_6 = NULL,p_6 = NULL,f_7 = NULL;
  z_5 = t;
  t = (ATerm) ATempty;
  o_6 = t;
  t = SSL_mkterm(s_53, o_6);
  c_6 = t;
  t = (ATerm) ATempty;
  g_6 = t;
  t = SSL_mkterm(t_53, g_6);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_6, d_6);
  p_6 = t;
  t = term_y_10;
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_6, d_6), term_y_10);
  t = b_7(d_2, p_6, f_7, t);
  t = z_5;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm a_7 (ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm h_7 = NULL,n_7 = NULL,o_7 = NULL,b_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL;
  h_7 = t;
  t = (ATerm) ATempty;
  f_8 = t;
  t = SSL_mkterm(n_53, f_8);
  n_7 = t;
  t = (ATerm) ATempty;
  b_8 = t;
  t = SSL_mkterm(o_53, b_8);
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
  g_8 = t;
  t = term_b_11;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_7, o_7), term_b_11);
  t = b_7(g_2, g_8, i_8, t);
  t = h_7;
  return(t);
}
ATerm b_7 (ATerm g_83 (ATerm), ATerm s_31, ATerm q_31, ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  t = g_83(t);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_8, s_31, q_31);
  t = a_8(j_8, s_31, q_31, t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL;
        t = term_g_11;
        r_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_g_11);
        t = z_7(j_8, r_8, t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_8 = ATgetFirst((ATermList) t);
        l_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_11;
    o_8 = t;
    t = (ATerm) ATinsert(CheckATermList(l_8), (ATerm) ATinsert(CheckATermList(k_8), s_31));
    p_8 = t;
    t = SSL_table_put(j_8, o_8, p_8);
    t = n_8;
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm c_7 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,d_9 = NULL,e_9 = NULL;
  s_8 = t;
  t = (ATerm) ATempty;
  w_8 = t;
  t = SSL_mkterm(x_53, w_8);
  t_8 = t;
  t = (ATerm) ATempty;
  v_8 = t;
  t = SSL_mkterm(y_53, v_8);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, u_8);
  d_9 = t;
  t = term_j_11;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_8, u_8), term_j_11);
  t = b_7(j_2, d_9, e_9, t);
  t = s_8;
  return(t);
}
ATerm d_7 (ATerm w_74 (ATerm), ATerm d_21, ATerm e_21, ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm k_9 = NULL;
    ATerm o_2 (ATerm t)
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), l_9);
      t = w_74(t);
      return(t);
    }
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = e_21;
    t = map_1_0(o_2, t);
    return(t);
  }
  t = d_21;
  t = map_1_0(m_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm u_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(u_9, y_9, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm z_9 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(q_10, s_10, t);
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(o_10, p_10, t);
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(z_9, n_10, t);
  return(t);
}
ATerm e_7 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm t)
{
  ATerm m_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_53, d_53);
  t = d_7(r_2, d_53, d_53, t);
  t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
  t = d_7(s_2, c_53, d_53, t);
  t = (ATerm) ATmakeAppl(sym__2, d_53, c_53);
  t = conc_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, b_53);
  return(t);
}
ATerm repeat_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        t = a_11(t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
      }
    return(t);
  }
  t = a_11(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,p_11 = NULL,u_11 = NULL,w_11 = NULL,y_0 = NULL;
  w_11 = t;
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  e_11 = t;
  t = p_11;
  {
    ATerm x_2 (ATerm t)
    {
      if((f_11 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(x_2, t);
    u_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_11, u_11);
    y_0 = t;
    t = SSLsetAnnotations(y_0, e_11);
  }
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm b_12 = NULL,o_1 = NULL,w_1 = NULL;
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_12), term_x_12), term_w_12), term_u_12), term_t_12), term_s_12), term_p_12), term_i_12), term_g_12), term_f_12), term_e_12), term_c_12), term_a_12), term_z_11), term_y_11), term_x_11), term_v_11), term_s_11), term_r_11), term_q_11), term_o_11), term_n_11));
  t = member_0_0(t);
  t = SSL_explode_string(b_12);
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_1), term_z_12);
  o_1 = t;
  t = SSL_implode_string(o_1);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm d_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,k_1 = NULL;
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_12 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(k_13) != AT_INT) || (ATgetInt((ATermInt) k_13) != 34)))
                _fail(t);
              o_12 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_12), term_m_13), term_l_13);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm q_12 = NULL,r_12 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_12 = ATgetFirst((ATermList) t);
                r_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_12;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(r_12), term_l_13), term_l_13);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(r_12), term_n_13), term_l_13);
              }
          }
        }
      n_12 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_12 = ATgetFirst((ATermList) t);
          l_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_12);
      j_12 = t;
      t = l_12;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      m_12 = t;
      t = (ATerm) ATinsert(CheckATermList(m_12), k_12);
      k_1 = t;
      t = SSLsetAnnotations(k_1, j_12);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = d_13;
      {
        ATerm o_13 = NULL,s_13 = NULL,t_13 = NULL;
        t_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            s_13 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_2 = NULL,k_2 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(t_13);
              e_2 = t;
              t = s_13;
              t = escape_chars_0_0(t);
              k_2 = t;
              t = (ATerm) ATinsert(CheckATermList(k_2), o_13);
              s_1 = t;
              t = SSLsetAnnotations(s_1, e_2);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_13;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm d_20 = NULL,p_20 = NULL,q_20 = NULL,y_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      q_20 = ATgetArgument(t, 0);
      {
        ATerm b_21 = NULL,y_2 = NULL,c_3 = NULL;
        t = SSL_explode_string(q_20);
        {
          ATerm r_13 = t;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL,i_3 = NULL;
              h_3 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_13 = ATgetFirst((ATermList) t);
                  if(((ATgetType(v_13) != AT_INT) || (ATgetInt((ATermInt) v_13) != 34)))
                    _fail(t);
                  i_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_3;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = h_3;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_13;
            }
          t = escape_chars_0_0(t);
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_3), term_m_13), (ATerm) ATinsert(ATempty, term_m_13));
          t = conc_0_0(t);
          y_2 = t;
          t = SSL_implode_string(y_2);
          b_21 = t;
          t = (ATerm) ATmakeAppl(sym_Str_1, b_21);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm r_3 = NULL;
            t = SSL_real_to_string(q_20);
            r_3 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, r_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_20 = ATgetArgument(t, 0);
              {
                ATerm y_3 = NULL;
                t = SSL_int_to_string(q_20);
                y_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_3);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  q_20 = ATgetArgument(t, 0);
                  {
                    ATerm f_4 = NULL,i_4 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(p_20);
                    f_4 = t;
                    t = q_20;
                    t = AddLeadingPrime_0_0(t);
                    i_4 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_4);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, f_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDef_3))
                    {
                      q_20 = ATgetArgument(t, 0);
                      y_20 = ATgetArgument(t, 1);
                      d_20 = ATgetArgument(t, 2);
                      {
                        ATerm l_5 = NULL,x_5 = NULL,d_12 = NULL;
                        t = SSLgetAnnotations(p_20);
                        l_5 = t;
                        t = q_20;
                        t = AddLeadingPrime_0_0(t);
                        x_5 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, x_5, y_20, d_20);
                        d_12 = t;
                        t = SSLsetAnnotations(d_12, l_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDef_3))
                        {
                          q_20 = ATgetArgument(t, 0);
                          y_20 = ATgetArgument(t, 1);
                          d_20 = ATgetArgument(t, 2);
                          {
                            ATerm m_6 = NULL,x_6 = NULL,a_13 = NULL;
                            t = SSLgetAnnotations(p_20);
                            m_6 = t;
                            t = q_20;
                            t = AddLeadingPrime_0_0(t);
                            x_6 = t;
                            t = (ATerm) ATmakeAppl(sym_SDef_3, x_6, y_20, d_20);
                            a_13 = t;
                            t = SSLsetAnnotations(a_13, m_6);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              q_20 = ATgetArgument(t, 0);
                              y_20 = ATgetArgument(t, 1);
                              {
                                ATerm y_7 = NULL,h_8 = NULL,b_13 = NULL;
                                t = SSLgetAnnotations(p_20);
                                y_7 = t;
                                t = q_20;
                                t = AddLeadingPrime_0_0(t);
                                h_8 = t;
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, h_8, y_20);
                                b_13 = t;
                                t = SSLsetAnnotations(b_13, y_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Var_1))
                                {
                                  q_20 = ATgetArgument(t, 0);
                                  {
                                    ATerm b_9 = NULL,f_9 = NULL,c_13 = NULL;
                                    t = SSLgetAnnotations(p_20);
                                    b_9 = t;
                                    t = q_20;
                                    t = AddLeadingPrime_0_0(t);
                                    f_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, f_9);
                                    c_13 = t;
                                    t = SSLsetAnnotations(c_13, b_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_SVar_1))
                                    {
                                      q_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm o_9 = NULL,q_9 = NULL,e_13 = NULL;
                                        t = SSLgetAnnotations(p_20);
                                        o_9 = t;
                                        t = q_20;
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
                                          q_20 = ATgetArgument(t, 0);
                                          y_20 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_10 = NULL,e_10 = NULL,f_13 = NULL;
                                            t = SSLgetAnnotations(p_20);
                                            b_10 = t;
                                            t = q_20;
                                            t = AddLeadingPrime_0_0(t);
                                            e_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, e_10, y_20);
                                            f_13 = t;
                                            t = SSLsetAnnotations(f_13, b_10);
                                          }
                                        }
                                      else
                                        {
                                          ATerm m_10 = NULL,u_10 = NULL,g_13 = NULL;
                                          if(match_cons(t, sym_Op_2))
                                            {
                                              q_20 = ATgetArgument(t, 0);
                                              y_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(p_20);
                                          m_10 = t;
                                          t = q_20;
                                          t = AddLeadingPrime_0_0(t);
                                          u_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Op_2, u_10, y_20);
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
ATerm at_end_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm t_23 (ATerm t)
  {
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
    s_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_23 = ATgetFirst((ATermList) t);
        r_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_11 = NULL,k_11 = NULL,u_14 = NULL;
          t = SSLgetAnnotations(s_23);
          h_11 = t;
          t = r_23;
          t = t_23(t);
          k_11 = t;
          t = (ATerm) ATinsert(CheckATermList(k_11), q_23);
          u_14 = t;
          t = SSLsetAnnotations(u_14, h_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_23;
        t = s_75(t);
      }
    return(t);
  }
  t = t_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,q_22 = NULL;
  n_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_22;
    }
  else
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(q_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_22 = ATgetFirst((ATermList) t);
          if(((q_22 != NULL) && (q_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_22;
      t = at_end_1_0(z_2, t);
    }
  return(t);
}
ATerm b_25 (ATerm k_24, ATerm t)
{
  ATerm l_24 = NULL;
  t = SSL_explode_term(k_24);
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_24 = NULL,v_24 = NULL,w_24 = NULL;
  w_24 = t;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              t = v_24;
              return(t);
            }
            t = s_24;
            t = at_end_1_0(m_3, t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = b_25(w_24, t);
          }
      }
    }
  else
    {
      t = b_25(w_24, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_25 = NULL,o_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_25 = ATgetFirst((ATermList) t);
      o_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_25;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_25;
    }
  else
    {
      t = o_25;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL,c_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,k_26 = NULL,o_26 = NULL,q_26 = NULL,w_14 = NULL;
  q_26 = t;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  g_26 = t;
  t = SSL_explode_string(i_26);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, k_26);
  w_14 = t;
  t = SSLsetAnnotations(w_14, g_26);
  o_26 = t;
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((x_25 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      a_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_26;
  t = last_0_0(t);
  if((x_25 != t))
    {
      _fail(t);
    }
  t = o_26;
  return(t);
}
ATerm at_last_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm g_28 (ATerm t)
  {
    ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
    c_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_28 = ATgetFirst((ATermList) t);
        e_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_11 = NULL,z_14 = NULL;
          t = SSLgetAnnotations(c_28);
          t_11 = t;
          t = e_28;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(e_28), d_28);
          z_14 = t;
          t = SSLsetAnnotations(z_14, t_11);
          t = d_76(t);
          ;
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          {
            ATerm h_12 = NULL,v_12 = NULL,a_15 = NULL;
            t = SSLgetAnnotations(c_28);
            h_12 = t;
            t = e_28;
            t = g_28(t);
            v_12 = t;
            t = (ATerm) ATinsert(CheckATermList(v_12), d_28);
            a_15 = t;
            t = SSLsetAnnotations(a_15, h_12);
          }
        }
    }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  ATerm n_3 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_28 != NULL) && (j_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_28 = ATgetFirst((ATermList) t);
        {
          ATerm c_14 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(c_14) != AT_LIST) || !(ATisEmpty(c_14))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(n_3, t);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, not_null(j_28));
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_Op_2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
      t = w_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_28 = ATgetFirst((ATermList) t);
          y_28 = (ATerm) ATgetNext((ATermList) t);
          t = y_28;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_28 = ATgetFirst((ATermList) t);
              a_29 = (ATerm) ATgetNext((ATermList) t);
              t = a_29;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = v_28;
                  if(match_string(t, "Cons"))
                    {
                      ATerm d_14 = t;
                      int e_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_29 = NULL;
                          t = z_28;
                          t = implode_cons_0_0(t);
                          e_29 = t;
                          t = (ATerm) ATinsert(CheckATermList(e_29), x_28);
                          ;
                          LocalPopChoice(e_14);
                        }
                      else
                        {
                          t = d_14;
                          t = (ATerm) ATinsert(ATempty, b_29);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, b_29);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, b_29);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, b_29);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, b_29);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, b_29);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm g_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL,r_32 = NULL,s_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym_Op_2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
      {
        ATerm p_13 = NULL,q_13 = NULL,u_13 = NULL,w_13 = NULL;
        t = r_32;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
          _fail(t);
        t = s_32;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_14 = ATgetFirst((ATermList) t);
            g_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_32;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_14 = ATgetFirst((ATermList) t);
            k_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_32;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_32;
        t = implode_cons_0_0(t);
        t = split_last_0_0(t);
        if(match_cons(t, sym__2))
          {
            u_13 = ATgetArgument(t, 0);
            w_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_13;
        if(match_cons(t, sym_Op_2))
          {
            p_13 = ATgetArgument(t, 0);
            q_13 = ATgetArgument(t, 1);
            t = q_13;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = p_13;
                if(match_string(t, "Nil"))
                  {
                    t = (ATerm) ATmakeAppl(sym_List_1, u_13);
                  }
                else
                  {
                    t = (ATerm) ATmakeAppl(sym_ListTail_2, u_13, w_13);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym_ListTail_2, u_13, w_13);
              }
          }
        else
          {
            t = (ATerm) ATmakeAppl(sym_ListTail_2, u_13, w_13);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          r_32 = ATgetArgument(t, 0);
          s_32 = ATgetArgument(t, 1);
          n_32 = ATgetArgument(t, 2);
          t = n_32;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, r_32, s_32);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              r_32 = ATgetArgument(t, 0);
              s_32 = ATgetArgument(t, 1);
              n_32 = ATgetArgument(t, 2);
              t = n_32;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, r_32, s_32);
            }
          else
            {
              ATerm n_14 = NULL,t_14 = NULL,d_15 = NULL;
              if(match_cons(t, sym_Prim_2))
                {
                  r_32 = ATgetArgument(t, 0);
                  s_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_32;
              {
                ATerm h_14 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_14 = NULL;
                    o_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_13, o_14);
                    t = is_quoted_0_0(t);
                    t = o_14;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_14;
                  }
                t = SSL_explode_string(r_32);
                d_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_15), term_m_13), (ATerm) ATinsert(ATempty, term_m_13));
                t = conc_0_0(t);
                t_14 = t;
                t = SSL_implode_string(t_14);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_Prim_2, n_14, s_32);
              }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(t_98, t);
    return(t);
  }
  t = t_98(t);
  t = SRTS_all(o_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
      }
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  x_34 = t;
  if(match_cons(t, sym__2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_35 = ATgetFirst((ATermList) t);
      d_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_35;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  if(match_cons(t, sym_Some_1))
    {
      w_34 = ATgetArgument(t, 0);
      t = w_34;
      if(match_string(t, "left"))
        {
          t = x_34;
          t = e_7(y_34, c_35, d_35, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = x_34;
              t = t_6(y_34, c_35, d_35, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = x_34;
              t = s_6(y_34, c_35, d_35, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = x_34;
      t = r_6(y_34, c_35, d_35, t);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(u_3, t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, q_35);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm t_33 = NULL,x_33 = NULL;
  x_33 = t;
  {
    ATerm m_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_15 = NULL;
        t = SSL_explode_term(x_33);
        if(match_cons(t, sym__2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_14 = ATgetArgument(t, 1);
              if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
                {
                  r_15 = ATgetFirst((ATermList) r_14);
                  {
                    ATerm s_14 = (ATerm) ATgetNext((ATermList) r_14);
                    if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_15;
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = m_14;
        t = x_33;
      }
    t = topdown_1_0(p_3, t);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm d_34 = NULL,g_34 = NULL,h_34 = NULL,k_34 = NULL,l_34 = NULL;
        l_34 = t;
        if(match_cons(t, sym_Seq_2))
          {
            d_34 = ATgetArgument(t, 0);
            g_34 = ATgetArgument(t, 1);
            t = g_34;
            if(match_cons(t, sym_Seq_2))
              {
                h_34 = ATgetArgument(t, 0);
                k_34 = ATgetArgument(t, 1);
                {
                  ATerm v_14 = t;
                  int x_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_34, h_34);
                      t = q_3(t);
                      s_34 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_34, k_34);
                      t = q_3(t);
                      ;
                      LocalPopChoice(x_14);
                    }
                  else
                    {
                      t = v_14;
                      t = l_34;
                    }
                }
              }
            else
              {
                t = l_34;
              }
          }
        else
          {
            t = l_34;
          }
        return(t);
      }
      t = bottomup_1_0(q_3, t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATempty, term_j_15), term_g_15))), (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATempty, term_c_15))));
      t = repeat_1_0(s_3, t);
      t = t_33;
      t = bottomup_1_0(t_3, t);
    }
  }
  return(t);
}
ATerm q_7 (ATerm f_20, ATerm g_20, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_fputc(f_20, g_20);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_35);
  return(t);
}
ATerm r_7 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_write_term_to_stream_text(j_38, k_38);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm t_7 (ATerm f_86 (ATerm), ATerm u_365, ATerm n_38, ATerm t)
{
  ATerm x_35 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_365, term_k_15);
  t = w_7(t);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_35, n_38);
  t = f_86(t);
  t = fclose_0_0(t);
  t = n_38;
  return(t);
}
ATerm s_7 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_write_term_to_stream_baf(f_38, g_38);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_35);
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_Stream_1))
        {
          i_16 = ATgetArgument(l_15, 0);
        }
      else
        _fail(t);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(i_16, t_16, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm m_17 = NULL,p_17 = NULL,t_17 = NULL,v_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(match_cons(m_15, sym_Stream_1))
        {
          v_17 = ATgetArgument(m_15, 0);
        }
      else
        _fail(t);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(v_17, x_17, t);
  m_17 = t;
  t = term_p_15;
  p_17 = t;
  t = m_17;
  if(match_cons(t, sym_Stream_1))
    {
      t_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_15, m_17);
  t = q_7(p_17, t_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,m_37 = NULL,n_37 = NULL,f_15 = NULL,e_15 = NULL;
  d_36 = t;
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_36);
  j_36 = t;
  t = k_36;
  {
    ATerm q_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(v_3, t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = q_15;
        t = term_u_15;
        c_36 = t;
      }
    m_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_36, l_36);
    e_15 = t;
    t = SSLsetAnnotations(e_15, j_36);
    t = d_36;
    if(match_cons(t, sym__2))
      {
        f_36 = ATgetArgument(t, 0);
        g_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_36);
    e_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_36, (ATerm) ATmakeAppl(sym__2, not_null(c_36), g_36));
    f_15 = t;
    t = SSLsetAnnotations(f_15, e_36);
    i_36 = t;
    if(match_cons(t, sym__2))
      {
        m_37 = ATgetArgument(t, 0);
        n_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_15 = NULL,b_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_15 = NULL;
          t = SSLgetAnnotations(i_36);
          y_15 = t;
          t = m_37;
          t = fetch_1_0(w_3, t);
          b_16 = t;
          t = n_37;
          if(match_cons(t, sym__2))
            {
              f_16 = ATgetArgument(t, 0);
              g_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_7(x_3, f_16, g_16, t);
          e_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_16, e_16);
          h_15 = t;
          t = SSLsetAnnotations(h_15, y_15);
          ;
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          {
            ATerm a_17 = NULL,e_17 = NULL,f_17 = NULL,h_17 = NULL,i_15 = NULL;
            t = SSLgetAnnotations(i_36);
            a_17 = t;
            t = n_37;
            if(match_cons(t, sym__2))
              {
                f_17 = ATgetArgument(t, 0);
                h_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_7(z_3, f_17, h_17, t);
            e_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_37, e_17);
            i_15 = t;
            t = SSLsetAnnotations(i_15, a_17);
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
ATerm apply_strategy_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  u_37 = t;
  t = dtime_0_0(t);
  t = u_37;
  t = g_72(t);
  t_37 = t;
  t = dtime_0_0(t);
  q_37 = t;
  t = t_37;
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_37), (ATerm) ATmakeAppl(sym_Runtime_1, q_37)), s_37);
  return(t);
}
ATerm p_38 (ATerm c_38, ATerm t)
{
  t = SSL_fclose(c_38);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  i_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_38 = ATgetArgument(t, 0);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_38);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            t = p_38(i_38, t);
          }
      }
    }
  else
    {
      t = p_38(i_38, t);
    }
  return(t);
}
ATerm u_7 (ATerm l_38, ATerm t)
{
  t = SSL_read_term_from_stream(l_38);
  return(t);
}
ATerm v_7 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_fopen(h_20, i_20);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_38);
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
  ATerm t_38 = NULL;
  t = SSL_stderr_stream();
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_38);
  return(t);
}
ATerm g_40 (ATerm z_38, ATerm t)
{
  ATerm a_39 = NULL;
  t = SSL_explode_term(z_38);
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
          {
            a_39 = ATgetFirst((ATermList) d_16);
            {
              ATerm j_16 = (ATerm) ATgetNext((ATermList) d_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_40 (ATerm d_39, ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,q_39 = NULL,n_15 = NULL;
  t = SSLgetAnnotations(f_39);
  i_39 = t;
  t = d_39;
  if(match_cons(t, sym_Path_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_39, e_39);
  n_15 = t;
  t = SSLsetAnnotations(n_15, i_39);
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(g_39, h_39, t);
  return(t);
}
ATerm i_40 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,b_40 = NULL,o_15 = NULL;
  t = SSLgetAnnotations(u_39);
  x_39 = t;
  t = SSL_is_string(s_39);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, t_39);
  o_15 = t;
  t = SSLsetAnnotations(o_15, x_39);
  if(match_cons(t, sym__2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(v_39, w_39, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
      {
        ATerm l_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_40(d_40, t);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = l_16;
            {
              ATerm p_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_40(e_40, f_40, d_40, t);
                  ;
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = p_16;
                  t = i_40(e_40, f_40, d_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_40(d_40, t);
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_40 = NULL;
      m_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_40, term_x_16);
      t = w_7(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      t = debug_1_0(b_4, t);
      _fail(t);
    }
  k_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(l_40, t);
  j_40 = t;
  t = k_40;
  t = fclose_0_0(t);
  t = j_40;
  return(t);
}
ATerm fetch_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm k_41 (ATerm t)
  {
    ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
    h_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_41 = ATgetFirst((ATermList) t);
        j_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_16 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = NULL,p_18 = NULL,t_15 = NULL;
          t = SSLgetAnnotations(h_41);
          m_18 = t;
          t = i_41;
          t = m_75(t);
          p_18 = t;
          t = (ATerm) ATinsert(CheckATermList(j_41), p_18);
          t_15 = t;
          t = SSLsetAnnotations(t_15, m_18);
          ;
          LocalPopChoice(b_17);
        }
      else
        {
          t = y_16;
          {
            ATerm x_18 = NULL,b_19 = NULL,v_15 = NULL;
            t = SSLgetAnnotations(h_41);
            x_18 = t;
            t = j_41;
            t = k_41(t);
            b_19 = t;
            t = (ATerm) ATinsert(CheckATermList(b_19), i_41);
            v_15 = t;
            t = SSLsetAnnotations(v_15, x_18);
          }
        }
    }
    return(t);
  }
  t = k_41(t);
  return(t);
}
ATerm p_7 (ATerm v_52, ATerm w_52, ATerm t)
{
  t = SSL_strcat(v_52, w_52);
  return(t);
}
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  n_41 = t;
  t = d_86(t);
  o_41 = t;
  t = term_j_9;
  p_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_41), o_41);
  q_41 = t;
  t = SSL_printnl(p_41, q_41);
  t = n_41;
  return(t);
}
ATerm c_4 (ATerm t)
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
ATerm d_4 (ATerm t)
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
      ATerm x_41 = NULL;
      x_41 = t;
      t = SSL_is_string(x_41);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_4, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
              d_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_42 = ATgetArgument(t, 0);
                  t = e_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_42 = ATgetArgument(t, 0);
                      t = e_42;
                      {
                        ATerm n_17 = t;
                        int o_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_17);
                          }
                        else
                          {
                            t = n_17;
                            t = debug_1_0(d_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_42 = NULL,k_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_42 = ATgetArgument(t, 0);
                          f_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_42;
                      t = eval_config_0_0(t);
                      j_42 = t;
                      t = f_42;
                      t = eval_config_0_0(t);
                      k_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
                      t = p_7(j_42, k_42, t);
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
  ATerm o_42 = NULL,p_42 = NULL;
  o_42 = t;
  t = term_q_17;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, o_42);
  t = z_7(p_42, o_42, t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_42 = NULL,r_42 = NULL;
        t = eval_config_0_0(t);
        q_42 = t;
        t = term_q_17;
        r_42 = t;
        t = SSL_table_put(r_42, o_42, q_42);
        t = q_42;
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
ATerm if_verbose2_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL;
        t = term_y_17;
        t = get_config_0_0(t);
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_42, term_z_17);
        t = geq_0_0(t);
        t = v_42;
        t = o_96(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
        t = v_42;
      }
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  if(match_string(t, "-k"))
    {
      t = a_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_43;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  t = SSL_string_to_int(b_43);
  c_43 = t;
  t = term_a_18;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, c_43);
  t = c_8(d_43, c_43, t);
  t = b_43;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, g_4, h_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  if(match_string(t, "-S"))
    {
      t = f_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_43;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  t = term_y_17;
  g_43 = t;
  t = term_c_18;
  h_43 = t;
  t = term_d_18;
  t = c_8(g_43, h_43, t);
  t = term_e_18;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  t = SSL_string_to_int(i_43);
  j_43 = t;
  t = term_y_17;
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, j_43);
  t = c_8(k_43, j_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_43);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  t = term_h_18;
  l_43 = t;
  t = term_i_9;
  m_43 = t;
  t = term_i_18;
  t = c_8(l_43, m_43, t);
  t = term_j_18;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = l_18;
      {
        ATerm o_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_4, o_4, r_4, t);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = o_18;
            t = Option_3_0(v_4, y_4, b_5, t);
          }
      }
    }
  return(t);
}
ATerm c_8 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm n_43 = NULL;
  t = term_q_17;
  n_43 = t;
  t = SSL_table_put(n_43, j_45, k_45);
  t = (ATerm) ATmakeAppl(sym__3, term_q_17, j_45, k_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
      t = term_i_9;
      t = i_0(t);
      s_43 = t;
      t = term_r_18;
      t_43 = t;
      t = term_s_18;
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_18, term_s_18, s_43);
      t = a_8(t_43, u_43, s_43, t);
      _fail(t);
    }
  else
    {
      ATerm x_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_43 = ATgetFirst((ATermList) t);
          r_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_43;
      t = d_0(t);
      t = term_i_9;
      t = g_0(t);
      x_43 = t;
      t = (ATerm) ATinsert(CheckATermList(r_43), x_43);
    }
  return(t);
}
ATerm m_5 (ATerm t)
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
ATerm n_5 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  a_44 = t;
  t = term_t_18;
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, a_44);
  t = c_8(b_44, a_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_44);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, t_5, t);
  return(t);
}
ATerm a_8 (ATerm a_32, ATerm b_32, ATerm z_31, ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
        t = z_7(a_32, b_32, t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATempty;
      }
    e_44 = t;
    t = (ATerm) ATinsert(CheckATermList(e_44), z_31);
    f_44 = t;
    t = SSL_table_put(a_32, b_32, f_44);
    t = d_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
      t = term_i_9;
      t = r_0(t);
      q_44 = t;
      t = term_r_18;
      r_44 = t;
      t = term_s_18;
      s_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_18, term_s_18, q_44);
      t = a_8(r_44, s_44, q_44, t);
      _fail(t);
    }
  else
    {
      ATerm w_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_44 = ATgetFirst((ATermList) t);
          n_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_44 = ATgetFirst((ATermList) t);
          p_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_44;
      t = n_0(t);
      t = o_44;
      t = p_0(t);
      w_44 = t;
      t = (ATerm) ATinsert(CheckATermList(p_44), w_44);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  if(match_string(t, "-i"))
    {
      t = y_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_44;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  t = term_a_19;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, z_44);
  t = c_8(a_45, z_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_44);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, a_6, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_9;
  t = whoami_0_0(t);
  b_45 = t;
  t = term_j_9;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_19), b_45);
  e_45 = t;
  t = SSL_printnl(d_45, e_45);
  t = term_r_9;
  c_45 = t;
  t = SSL_exit(c_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm x_7 (ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_30, f_30);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = SSL_addr(e_30, f_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_45;
      t = u_81(t);
    }
  else
    {
      ATerm n_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_45 = ATgetFirst((ATermList) t);
          i_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_45;
      t = foldr_2_0(u_81, v_81, t);
      n_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_45, n_45);
      t = v_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(o_20, r_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_45 = NULL,k_20 = NULL,l_20 = NULL;
  t = times_0_0(t);
  l_20 = t;
  t = SSL_explode_term(l_20);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_20;
  t = foldr_2_0(e_6, f_6, t);
  q_45 = t;
  t = SSL_TicksToSeconds(q_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_46;
        if((h_46 != t))
          {
            _fail(t);
          }
        t = g_46;
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_46, i_46);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = SSL_gtr(h_46, i_46);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL;
        t = term_y_17;
        t = get_config_0_0(t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_46, term_r_9);
        t = geq_0_0(t);
        t = m_46;
        t = n_96(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = m_46;
      }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = run_time_0_0(t);
  q_46 = t;
  t = term_i_9;
  t = whoami_0_0(t);
  r_46 = t;
  t = term_j_9;
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), q_46), term_o_19), r_46);
  u_46 = t;
  t = SSL_printnl(t_46, u_46);
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), q_46), term_o_19), r_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_18;
  v_46 = t;
  t = SSL_exit(v_46);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_47 = ATgetArgument(t, 0);
          {
            ATerm l_21 = NULL,h_16 = NULL;
            t = SSLgetAnnotations(e_47);
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_47);
            h_16 = t;
            t = SSLsetAnnotations(h_16, l_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_73 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = fetch_1_0(i_6, t);
    }
  t = e_73(t);
  return(t);
}
ATerm map_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm u_47 (ATerm t)
  {
    ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
    r_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_47;
      }
    else
      {
        ATerm x_21 = NULL,e_22 = NULL,h_22 = NULL,k_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_47 = ATgetFirst((ATermList) t);
            t_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_47);
        x_21 = t;
        t = s_47;
        t = c_75(t);
        e_22 = t;
        t = t_47;
        t = u_47(t);
        h_22 = t;
        t = (ATerm) ATinsert(CheckATermList(h_22), e_22);
        k_16 = t;
        t = SSLsetAnnotations(k_16, x_21);
      }
    return(t);
  }
  t = u_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_47 = ATgetFirst((ATermList) t);
      y_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_48 = NULL,d_48 = NULL;
        ATerm j_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_48)), not_null(d_48));
          return(t);
        }
        t = y_47;
        t = l_0(t);
        if(((c_48 != NULL) && (c_48 != t)))
          _fail(t);
        else
          c_48 = t;
        t = x_47;
        t = k_0(t);
        if(((d_48 != NULL) && (d_48 != t)))
          _fail(t);
        else
          d_48 = t;
        t = y_47;
        t = reverse_acc_2_0(k_0, j_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_9;
      t = l_0(t);
    }
  return(t);
}
ATerm z_7 (ATerm r_33, ATerm s_33, ATerm t)
{
  t = SSL_table_get(r_33, s_33);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,m_16 = NULL;
  j_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_48);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_48);
  m_16 = t;
  t = SSLsetAnnotations(m_16, h_48);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_48), term_t_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = fetch_1_0(k_6, t);
    }
  t = term_w_19;
  t = echo_0_0(t);
  t = term_r_18;
  f_48 = t;
  t = term_s_18;
  g_48 = t;
  t = term_x_19;
  t = z_7(f_48, g_48, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_20 = ATgetFirst((ATermList) t);
                ATerm b_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_48;
          }
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = (ATerm) ATinsert(ATempty, n_48);
      }
    o_48 = t;
    t = term_u_15;
    p_48 = t;
    t = SSL_printnl(p_48, o_48);
    t = n_48;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  t = term_c_20;
  t_48 = t;
  t = term_i_9;
  u_48 = t;
  t = term_e_20;
  t = c_8(t_48, u_48, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  t = term_c_20;
  x_48 = t;
  t = term_i_9;
  y_48 = t;
  t = term_e_20;
  t = c_8(x_48, y_48, t);
  t = term_m_20;
  v_48 = t;
  t = term_i_9;
  w_48 = t;
  t = term_n_20;
  t = c_8(v_48, w_48, t);
  t = term_s_20;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_6, w_6, y_6, t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = Option_3_0(z_6, g_7, i_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,o_16 = NULL;
  e_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_49 = ATgetFirst((ATermList) t);
      b_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_49);
  z_48 = t;
  t = a_49;
  t = b_59(t);
  c_49 = t;
  t = b_49;
  t = c_59(t);
  d_49 = t;
  t = (ATerm) ATinsert(CheckATermList(d_49), c_49);
  o_16 = t;
  t = SSLsetAnnotations(o_16, z_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,o_49 = NULL,p_49 = NULL,q_16 = NULL;
  j_49 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_20;
        t = m_88(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
      }
    t = j_49;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_49 = ATgetFirst((ATermList) t);
        m_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_49);
    k_49 = t;
    t = term_e_19;
    p_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_19, l_49);
    t = c_8(p_49, l_49, t);
    t = m_49;
    {
      ATerm z_49 (ATerm t)
      {
        ATerm a_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_49 = NULL;
                s_49 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_49;
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = m_88(t);
                t = Cons_2_0(_id, z_49, t);
              }
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = a_21;
            {
              ATerm v_49 = NULL,w_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_49 = ATgetFirst((ATermList) t);
                  w_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_49), (ATerm) ATmakeAppl(sym_Undefined_1, v_49));
            }
          }
        return(t);
      }
      t = z_49(t);
      o_49 = t;
      t = (ATerm) ATinsert(CheckATermList(o_49), (ATerm) ATmakeAppl(sym_Program_1, l_49));
      q_16 = t;
      t = SSLsetAnnotations(q_16, k_49);
    }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm l_50 = NULL;
  l_50 = t;
  if(match_string(t, "--help"))
    {
      t = l_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_50;
        }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  t = term_s_19;
  m_50 = t;
  t = term_i_9;
  n_50 = t;
  t = term_h_21;
  t = c_8(m_50, n_50, t);
  t = term_i_21;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  g_50 = t;
  t = term_r_18;
  i_50 = t;
  t = term_s_18;
  j_50 = t;
  t = (ATerm) ATempty;
  k_50 = t;
  t = SSL_table_put(i_50, j_50, k_50);
  t = g_50;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm k_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_88(t);
          ;
          LocalPopChoice(m_21);
        }
      else
        {
          t = k_21;
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, l_7, m_7, t);
                ;
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_50 = NULL;
          u_50 = t;
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_22 = NULL;
                t = u_50;
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_19;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      t = fetch_1_0(d_8, t);
                    }
                  t = u_50;
                  t = default_system_usage_0_0(t);
                  t = term_c_18;
                  t_22 = t;
                  t = SSL_exit(t_22);
                }
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                {
                  ATerm y_22 = NULL;
                  t = term_c_20;
                  t = get_config_0_0(t);
                  t = u_50;
                  t = default_system_about_0_0(t);
                  t = term_c_18;
                  y_22 = t;
                  t = SSL_exit(y_22);
                }
              }
          }
          ;
          LocalPopChoice(q_21);
        }
      else
        {
          t = p_21;
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
                ATerm e_8 (ATerm t)
                {
                  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,s_16 = NULL;
                  a_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_51);
                  y_50 = t;
                  t = z_50;
                  if(((e_50 != NULL) && (e_50 != t)))
                    _fail(t);
                  else
                    e_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_50);
                  s_16 = t;
                  t = SSLsetAnnotations(s_16, y_50);
                  return(t);
                }
                t = fetch_1_0(e_8, t);
                t = term_j_9;
                w_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_50)), term_y_21);
                x_50 = t;
                t = SSL_printnl(w_50, x_50);
                t = (ATerm) ATmakeAppl(sym__2, term_j_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_50)), term_y_21));
                t = default_system_usage_0_0(t);
                t = term_r_9;
                v_50 = t;
                t = SSL_exit(v_50);
                ;
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
              }
          }
        }
      f_50 = t;
      t = term_r_18;
      h_50 = t;
      t = SSL_table_destroy(h_50);
      t = f_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  t = parse_options_1_0(g_73, t);
  f_51 = t;
  t = term_z_21;
  i_51 = t;
  t = SSL_table_create(i_51);
  t = term_z_21;
  g_51 = t;
  t = term_a_22;
  h_51 = t;
  t = SSL_table_put(g_51, h_51, f_51);
  t = f_51;
  t = i_73(t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_73, t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          ATerm d_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_73(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = d_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = if_verbose2_1_0(c_9, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  t = term_g_22;
  j_51 = t;
  t = term_i_9;
  k_51 = t;
  t = term_i_22;
  t = c_8(j_51, k_51, t);
  t = term_j_22;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  l_51 = t;
  t = term_e_19;
  t = get_config_0_0(t);
  m_51 = t;
  t = term_j_9;
  n_51 = t;
  t = (ATerm) ATinsert(ATempty, m_51);
  o_51 = t;
  t = SSL_printnl(n_51, o_51);
  t = l_51;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_72(t);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm p_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_22);
            }
          else
            {
              t = p_22;
              {
                ATerm s_22 = t;
                int u_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_22);
                  }
                else
                  {
                    t = s_22;
                    {
                      ATerm v_22 = t;
                      int w_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_8, z_8, a_9, t);
                          ;
                          LocalPopChoice(w_22);
                        }
                      else
                        {
                          t = v_22;
                          {
                            ATerm x_22 = t;
                            int z_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_22);
                              }
                            else
                              {
                                t = x_22;
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
  ATerm x_8 (ATerm t)
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
    q_51 = t;
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_51 != NULL) && (p_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_9, t);
          ;
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          t = term_c_23;
          p_51 = t;
        }
      t = not_null(p_51);
      t = ReadFromFile_0_0(t);
      r_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_51, r_51);
      t = apply_strategy_1_0(p_72, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_8, r_72, q_8, x_8, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,z_16 = NULL;
  w_51 = t;
  if(match_cons(t, sym__2))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  s_51 = t;
  t = u_51;
  t = Stratego_Ensugar_0_0(t);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_51, v_51);
  z_16 = t;
  t = SSLsetAnnotations(z_16, s_51);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_9, _fail, default_usage_0_0, t);
  return(t);
}
