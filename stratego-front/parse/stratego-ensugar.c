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
Symbol sym_Anno_2;
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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_b_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_a_15;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
void init_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
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
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Some_1, term_u_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_o_9);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_o_18);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_o_9);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_o_9);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_o_9);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_o_9);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm LeftAssoc_0_0 (ATerm);
ATerm GreaterThan_0_0 (ATerm);
ATerm y_6 (ATerm c_33, ATerm d_33, ATerm);
ATerm RightAssoc_0_0 (ATerm);
ATerm split_init_last_0_0 (ATerm);
ATerm Disambiguate_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm z_6 (ATerm a_54, ATerm b_54, ATerm z_53, ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_7 (ATerm x_53, ATerm y_53, ATerm w_53, ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm b_7 (ATerm u_53, ATerm v_53, ATerm t_53, ATerm);
ATerm k_2 (ATerm);
ATerm c_7 (ATerm h_54, ATerm i_54, ATerm);
ATerm m_2 (ATerm);
ATerm i_7 (ATerm c_54, ATerm d_54, ATerm);
ATerm j_7 (ATerm m_84 (ATerm), ATerm j_32, ATerm h_32, ATerm);
ATerm n_2 (ATerm);
ATerm k_7 (ATerm m_54, ATerm n_54, ATerm);
ATerm l_7 (ATerm c_76 (ATerm), ATerm s_21, ATerm t_21, ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_7 (ATerm r_53, ATerm s_53, ATerm q_53, ATerm);
ATerm repeat_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm member_0_0 (ATerm);
ATerm AddLeadingPrime_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EnsugarOnce_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_26 (ATerm s_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm is_quoted_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_77 (ATerm), ATerm);
ATerm split_last_0_0 (ATerm);
ATerm implode_cons_0_0 (ATerm);
ATerm Ensugar_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm Stratego_Ensugar_0_0 (ATerm);
ATerm y_7 (ATerm u_20, ATerm v_20, ATerm);
ATerm z_7 (ATerm c_39, ATerm d_39, ATerm);
ATerm b_8 (ATerm l_87 (ATerm), ATerm t_375, ATerm g_39, ATerm);
ATerm a_8 (ATerm y_38, ATerm z_38, ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm w_39 (ATerm q_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_8 (ATerm e_39, ATerm);
ATerm d_8 (ATerm w_20, ATerm x_20, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_41 (ATerm l_40, ATerm);
ATerm o_41 (ATerm p_40, ATerm q_40, ATerm r_40, ATerm);
ATerm p_41 (ATerm a_41, ATerm b_41, ATerm c_41, ATerm);
ATerm e_8 (ATerm);
ATerm f_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm x_7 (ATerm k_53, ATerm l_53, ATerm);
ATerm debug_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm k_8 (ATerm c_46, ATerm d_46, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_8 (ATerm r_32, ATerm s_32, ATerm q_32, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm h_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_8 (ATerm v_30, ATerm w_30, ATerm);
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm need_help_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm h_8 (ATerm i_34, ATerm j_34, ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_89 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm y_8 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm iowrap_3_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm n_9 (ATerm);
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
  t = term_o_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_p_9;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), c_0), term_q_9);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_v_9;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,b_0 = NULL,q_0 = NULL;
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
      u_0 = ATgetArgument(t, 0);
      {
        ATerm w_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm x_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  y_0 = t;
  t = SSL_mkterm(t_0, y_0);
  v_0 = t;
  t = (ATerm) ATempty;
  x_0 = t;
  t = SSL_mkterm(u_0, x_0);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, w_0);
  b_0 = t;
  t = term_y_9;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = y_6(q_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_10) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_9;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,n_1 = NULL,r_1 = NULL,e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_1);
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      {
        ATerm d_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm e_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  l_1 = t;
  t = SSL_mkterm(d_1, l_1);
  h_1 = t;
  t = (ATerm) ATempty;
  j_1 = t;
  t = SSL_mkterm(g_1, j_1);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  e_1 = t;
  t = term_i_10;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATmakeAppl(sym__2, h_1, i_1));
  t = y_6(f_1, e_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_9;
  return(t);
}
ATerm y_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm t_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_33, d_33);
  t = h_8(c_33, d_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      {
        ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL,h_2 = NULL,i_2 = NULL,l_2 = NULL,m_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      {
        ATerm l_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_2);
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm m_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  h_2 = t;
  t = SSL_mkterm(z_1, h_2);
  b_2 = t;
  t = (ATerm) ATempty;
  e_2 = t;
  t = SSL_mkterm(a_2, e_2);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, d_2);
  m_1 = t;
  t = term_n_10;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATmakeAppl(sym__2, b_2, d_2));
  t = y_6(o_1, m_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_9;
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm o_2 = NULL,r_2 = NULL;
  ATerm c_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_2 != NULL) && (o_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_2 = ATgetFirst((ATermList) t);
        {
          ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(c_1, t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_2, not_null(o_2));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,w_1 = NULL,c_2 = NULL,f_2 = NULL;
        t = SSL_explode_term(c_5);
        if(match_cons(t, sym__2))
          {
            u_1 = ATgetArgument(t, 0);
            {
              ATerm u_10 = ATgetArgument(t, 1);
              if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
                {
                  w_1 = ATgetFirst((ATermList) u_10);
                  {
                    ATerm z_10 = (ATerm) ATgetNext((ATermList) u_10);
                    if(((ATgetType(z_10) != AT_LIST) || !(ATisEmpty(z_10))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_5, w_1);
        t = GreaterThan_0_0(t);
        t = w_1;
        t = s_0(t);
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, c_2);
        f_2 = t;
        t = SSL_mkterm(u_1, f_2);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm p_2 = NULL,q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
          t = SSL_explode_term(c_5);
          if(match_cons(t, sym__2))
            {
              p_2 = ATgetArgument(t, 0);
              {
                ATerm b_11 = ATgetArgument(t, 1);
                if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
                  {
                    s_2 = ATgetFirst((ATermList) b_11);
                    q_2 = (ATerm) ATgetNext((ATermList) b_11);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = q_2;
          t = split_init_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              u_2 = ATgetArgument(t, 0);
              w_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_2;
          {
            ATerm c_11 = t;
            int d_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, c_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = s_0(t);
                ;
                LocalPopChoice(d_11);
              }
            else
              {
                t = c_11;
              }
            t_2 = t;
            t = u_2;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm v_3 = NULL;
                v_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_5, v_3);
                t = GreaterThan_0_0(t);
                t = v_3;
                t = s_0(t);
                return(t);
              }
              t = map_1_0(k_1, t);
              v_2 = t;
              t = w_2;
              {
                ATerm e_11 = t;
                int f_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, c_5, w_2);
                    t = LeftAssoc_0_0(t);
                    t = w_2;
                    t = s_0(t);
                    ;
                    LocalPopChoice(f_11);
                  }
                else
                  {
                    t = e_11;
                  }
                f_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_2, (ATerm) ATinsert(ATempty, f_3));
                t = conc_0_0(t);
                g_3 = t;
                t = (ATerm) ATinsert(CheckATermList(g_3), t_2);
                h_3 = t;
                t = SSL_mkterm(p_2, h_3);
              }
            }
          }
        }
      }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(u_99, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = u_99(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(n_5, o_5, t);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(l_5, m_5, t);
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(i_5, k_5, t);
  return(t);
}
ATerm z_6 (ATerm a_54, ATerm b_54, ATerm z_53, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
  t = l_7(s_1, a_54, b_54, t);
  t = (ATerm) ATmakeAppl(sym__2, b_54, a_54);
  t = conc_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, z_53);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,u_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(u_5, w_5, t);
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(r_5, s_5, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(d_6, e_6, t);
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(z_5, a_6, t);
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(x_5, y_5, t);
  return(t);
}
ATerm a_7 (ATerm x_53, ATerm y_53, ATerm w_53, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_53, y_53);
  t = l_7(x_1, y_53, y_53, t);
  t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
  t = l_7(y_1, x_53, y_53, t);
  t = (ATerm) ATmakeAppl(sym__2, y_53, x_53);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, w_53);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(k_6, l_6, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm o_6 = NULL,w_6 = NULL,x_6 = NULL,n_7 = NULL,p_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(p_7, v_7, t);
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(x_6, n_7, t);
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(o_6, w_6, t);
  return(t);
}
ATerm b_7 (ATerm u_53, ATerm v_53, ATerm t_53, ATerm t)
{
  ATerm g_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_53, v_53);
  t = l_7(g_2, v_53, v_53, t);
  t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
  t = l_7(j_2, u_53, v_53, t);
  t = (ATerm) ATmakeAppl(sym__2, v_53, u_53);
  t = conc_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, t_53);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm c_7 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm w_7 = NULL,j_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  w_7 = t;
  t = (ATerm) ATempty;
  q_8 = t;
  t = SSL_mkterm(h_54, q_8);
  j_8 = t;
  t = (ATerm) ATempty;
  o_8 = t;
  t = SSL_mkterm(i_54, o_8);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, n_8);
  r_8 = t;
  t = term_o_11;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_8, n_8), term_o_11);
  t = j_7(k_2, r_8, s_8, t);
  t = w_7;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm i_7 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t_8 = t;
  t = (ATerm) ATempty;
  z_8 = t;
  t = SSL_mkterm(c_54, z_8);
  v_8 = t;
  t = (ATerm) ATempty;
  x_8 = t;
  t = SSL_mkterm(d_54, x_8);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
  a_9 = t;
  t = term_q_11;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_8, w_8), term_q_11);
  t = j_7(m_2, a_9, b_9, t);
  t = t_8;
  return(t);
}
ATerm j_7 (ATerm m_84 (ATerm), ATerm j_32, ATerm h_32, ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,l_9 = NULL,m_9 = NULL,s_9 = NULL;
  l_9 = t;
  t = m_84(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_9, j_32, h_32);
  t = i_8(c_9, j_32, h_32, t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_u_11;
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, term_u_11);
        t = h_8(c_9, t_9, t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_9 = ATgetFirst((ATermList) t);
        e_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_11;
    m_9 = t;
    t = (ATerm) ATinsert(CheckATermList(e_9), (ATerm) ATinsert(CheckATermList(d_9), j_32));
    s_9 = t;
    t = SSL_table_put(c_9, m_9, s_9);
    t = l_9;
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm k_7 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm u_9 = NULL,b_10 = NULL,c_10 = NULL,g_10 = NULL,h_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_9 = t;
  t = (ATerm) ATempty;
  h_10 = t;
  t = SSL_mkterm(m_54, h_10);
  b_10 = t;
  t = (ATerm) ATempty;
  g_10 = t;
  t = SSL_mkterm(n_54, g_10);
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_10, c_10);
  v_10 = t;
  t = term_y_11;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_10, c_10), term_y_11);
  t = j_7(n_2, v_10, w_10, t);
  t = u_9;
  return(t);
}
ATerm l_7 (ATerm c_76 (ATerm), ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm x_10 = NULL;
    ATerm e_3 (ATerm t)
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), y_10);
      t = c_76(t);
      return(t);
    }
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = t_21;
    t = map_1_0(e_3, t);
    return(t);
  }
  t = s_21;
  t = map_1_0(x_2, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(g_11, h_11, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm i_11 = NULL,m_11 = NULL,n_11 = NULL,x_11 = NULL,c_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(c_12, e_12, t);
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(n_11, x_11, t);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(i_11, m_11, t);
  return(t);
}
ATerm m_7 (ATerm r_53, ATerm s_53, ATerm q_53, ATerm t)
{
  ATerm a_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_53, s_53);
  t = l_7(i_3, s_53, s_53, t);
  t = (ATerm) ATmakeAppl(sym__2, r_53, s_53);
  t = l_7(k_3, r_53, s_53, t);
  t = (ATerm) ATmakeAppl(sym__2, s_53, r_53);
  t = conc_0_0(t);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, q_53);
  return(t);
}
ATerm repeat_2_0 (ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm j_12 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        t = j_12(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = w_89(t);
      }
    return(t);
  }
  t = j_12(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,z_0 = NULL;
  p_12 = t;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  l_12 = t;
  t = n_12;
  {
    ATerm m_3 (ATerm t)
    {
      if((m_12 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(m_3, t);
    o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_12, o_12);
    z_0 = t;
    t = SSLsetAnnotations(z_0, l_12);
  }
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm q_12 = NULL,a_4 = NULL,e_4 = NULL;
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), term_q_13), term_p_13), term_o_13), term_n_13), term_m_13), term_l_13), term_i_13), term_g_13), term_e_13), term_c_13), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_r_12), term_k_12), term_h_12), term_g_12), term_d_12), term_b_12));
  t = member_0_0(t);
  t = SSL_explode_string(q_12);
  e_4 = t;
  t = (ATerm) ATinsert(CheckATermList(e_4), term_s_13);
  a_4 = t;
  t = SSL_implode_string(a_4);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,p_1 = NULL;
      ATerm x_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_14) != AT_INT) || (ATgetInt((ATermInt) a_14) != 34)))
                _fail(t);
              f_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_13), term_c_14), term_b_14);
          ;
          LocalPopChoice(z_13);
        }
      else
        {
          t = x_13;
          {
            ATerm j_13 = NULL,k_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_13 = ATgetFirst((ATermList) t);
                k_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_13), term_b_14), term_b_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_13), term_f_14), term_b_14);
              }
          }
        }
      b_13 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_12 = ATgetFirst((ATermList) t);
          z_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_13);
      x_12 = t;
      t = z_12;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      a_13 = t;
      t = (ATerm) ATinsert(CheckATermList(a_13), y_12);
      p_1 = t;
      t = SSLsetAnnotations(p_1, x_12);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
        n_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            m_14 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm k_4 = NULL,n_4 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(n_14);
              k_4 = t;
              t = m_14;
              t = escape_chars_0_0(t);
              n_4 = t;
              t = (ATerm) ATinsert(CheckATermList(n_4), l_14);
              v_1 = t;
              t = SSLsetAnnotations(v_1, k_4);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_14;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,q_22 = NULL;
  j_22 = t;
  if(match_cons(t, sym_Str_1))
    {
      k_22 = ATgetArgument(t, 0);
      {
        ATerm u_22 = NULL,t_4 = NULL,d_5 = NULL;
        t = SSL_explode_string(k_22);
        {
          ATerm g_14 = t;
          if((PushChoice() == 0))
            {
              ATerm j_5 = NULL,t_5 = NULL;
              j_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(i_14) != AT_INT) || (ATgetInt((ATermInt) i_14) != 34)))
                    _fail(t);
                  t_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_5;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = j_5;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_14;
            }
          t = escape_chars_0_0(t);
          d_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_5), term_c_14), (ATerm) ATinsert(ATempty, term_c_14));
          t = conc_0_0(t);
          t_4 = t;
          t = SSL_implode_string(t_4);
          u_22 = t;
          t = (ATerm) ATmakeAppl(sym_Str_1, u_22);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          k_22 = ATgetArgument(t, 0);
          {
            ATerm f_6 = NULL;
            t = SSL_real_to_string(k_22);
            f_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, f_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              k_22 = ATgetArgument(t, 0);
              {
                ATerm q_6 = NULL;
                t = SSL_int_to_string(k_22);
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, q_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  k_22 = ATgetArgument(t, 0);
                  q_22 = ATgetArgument(t, 1);
                  {
                    ATerm f_7 = NULL;
                    t = q_22;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        f_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, k_22, f_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      k_22 = ATgetArgument(t, 0);
                      {
                        ATerm s_7 = NULL,u_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(j_22);
                        s_7 = t;
                        t = k_22;
                        t = AddLeadingPrime_0_0(t);
                        u_7 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, s_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          k_22 = ATgetArgument(t, 0);
                          q_22 = ATgetArgument(t, 1);
                          i_22 = ATgetArgument(t, 2);
                          {
                            ATerm g_9 = NULL,k_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(j_22);
                            g_9 = t;
                            t = k_22;
                            t = AddLeadingPrime_0_0(t);
                            k_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, k_9, q_22, i_22);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, g_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              k_22 = ATgetArgument(t, 0);
                              q_22 = ATgetArgument(t, 1);
                              i_22 = ATgetArgument(t, 2);
                              {
                                ATerm z_9 = NULL,f_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(j_22);
                                z_9 = t;
                                t = k_22;
                                t = AddLeadingPrime_0_0(t);
                                f_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, f_10, q_22, i_22);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, z_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  k_22 = ATgetArgument(t, 0);
                                  q_22 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_10 = NULL,t_10 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(j_22);
                                    q_10 = t;
                                    t = k_22;
                                    t = AddLeadingPrime_0_0(t);
                                    t_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, t_10, q_22);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, q_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      k_22 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_11 = NULL,l_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(j_22);
                                        j_11 = t;
                                        t = k_22;
                                        t = AddLeadingPrime_0_0(t);
                                        l_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, j_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          k_22 = ATgetArgument(t, 0);
                                          {
                                            ATerm t_11 = NULL,v_11 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(j_22);
                                            t_11 = t;
                                            t = k_22;
                                            t = AddLeadingPrime_0_0(t);
                                            v_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, v_11);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, t_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              k_22 = ATgetArgument(t, 0);
                                              q_22 = ATgetArgument(t, 1);
                                              {
                                                ATerm f_12 = NULL,i_12 = NULL,j_3 = NULL;
                                                t = SSLgetAnnotations(j_22);
                                                f_12 = t;
                                                t = k_22;
                                                t = AddLeadingPrime_0_0(t);
                                                i_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_12, q_22);
                                                j_3 = t;
                                                t = SSLsetAnnotations(j_3, f_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm d_13 = NULL,h_13 = NULL,l_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  k_22 = ATgetArgument(t, 0);
                                                  q_22 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(j_22);
                                              d_13 = t;
                                              t = k_22;
                                              t = AddLeadingPrime_0_0(t);
                                              h_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, h_13, q_22);
                                              l_3 = t;
                                              t = SSLsetAnnotations(l_3, d_13);
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
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm m_25 (ATerm t)
  {
    ATerm h_25 = NULL,k_25 = NULL,l_25 = NULL;
    l_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_25 = ATgetFirst((ATermList) t);
        k_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_13 = NULL,e_14 = NULL,c_4 = NULL;
          t = SSLgetAnnotations(l_25);
          y_13 = t;
          t = k_25;
          t = m_25(t);
          e_14 = t;
          t = (ATerm) ATinsert(CheckATermList(e_14), h_25);
          c_4 = t;
          t = SSLsetAnnotations(c_4, y_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_25;
        t = y_76(t);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,d_24 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_23;
    }
  else
    {
      ATerm n_3 (ATerm t)
      {
        t = not_null(d_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_23 = ATgetFirst((ATermList) t);
          if(((d_24 != NULL) && (d_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
ATerm m_26 (ATerm s_25, ATerm t)
{
  ATerm t_25 = NULL;
  t = SSL_explode_term(s_25);
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_26 = NULL,f_26 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
      {
        ATerm k_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              t = f_26;
              return(t);
            }
            t = d_26;
            t = at_end_1_0(o_3, t);
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = k_14;
            t = m_26(g_26, t);
          }
      }
    }
  else
    {
      t = m_26(g_26, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_27 = NULL,f_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_27;
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
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,c_28 = NULL,i_4 = NULL;
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  v_27 = t;
  t = SSL_explode_string(x_27);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_27, y_27);
  i_4 = t;
  t = SSLsetAnnotations(i_4, v_27);
  z_27 = t;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((o_27 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      p_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_27;
  t = last_0_0(t);
  if((o_27 != t))
    {
      _fail(t);
    }
  t = z_27;
  return(t);
}
ATerm at_last_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm g_29 (ATerm t)
  {
    ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
    d_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_29 = ATgetFirst((ATermList) t);
        f_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_14 = t;
      int q_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(d_29);
          s_14 = t;
          t = f_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_29), e_29);
          p_4 = t;
          t = SSLsetAnnotations(p_4, s_14);
          t = j_77(t);
          ;
          LocalPopChoice(q_14);
        }
      else
        {
          t = p_14;
          {
            ATerm d_15 = NULL,g_15 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(d_29);
            d_15 = t;
            t = f_29;
            t = g_29(t);
            g_15 = t;
            t = (ATerm) ATinsert(CheckATermList(g_15), e_29);
            u_4 = t;
            t = SSLsetAnnotations(u_4, d_15);
          }
        }
    }
    return(t);
  }
  t = g_29(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm r_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL,m_29 = NULL;
      ATerm p_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_29 != NULL) && (l_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_29 = ATgetFirst((ATermList) t);
            {
              ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATempty;
        return(t);
      }
      t = at_last_1_0(p_3, t);
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_29, not_null(l_29));
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = r_14;
      {
        ATerm n_29 = NULL,o_29 = NULL;
        ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((n_29 != NULL) && (n_29 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                n_29 = ATgetFirst((ATermList) t);
              {
                ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        t = at_last_1_0(q_3, t);
        o_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_29, not_null(n_29));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Op_2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
      t = z_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_30 = ATgetFirst((ATermList) t);
          h_30 = (ATerm) ATgetNext((ATermList) t);
          t = h_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_30 = ATgetFirst((ATermList) t);
              j_30 = (ATerm) ATgetNext((ATermList) t);
              t = j_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = y_29;
                  if(match_string(t, "Cons"))
                    {
                      ATerm w_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_30 = NULL;
                          t = i_30;
                          t = implode_cons_0_0(t);
                          o_30 = t;
                          t = (ATerm) ATinsert(CheckATermList(o_30), a_30);
                          ;
                          LocalPopChoice(x_14);
                        }
                      else
                        {
                          t = w_14;
                          t = (ATerm) ATinsert(ATempty, k_30);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, k_30);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, k_30);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, k_30);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, k_30);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, k_30);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm v_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      t = a_34;
      if(match_string(t, "Cons"))
        {
          ATerm e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL;
          t = b_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_14 = ATgetFirst((ATermList) t);
              v_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_14 = ATgetFirst((ATermList) t);
              x_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_33;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              h_16 = ATgetArgument(t, 0);
              i_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_16;
          if(match_cons(t, sym_Op_2))
            {
              e_16 = ATgetArgument(t, 0);
              f_16 = ATgetArgument(t, 1);
              t = f_16;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_16;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, h_16);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, i_16);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, i_16);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, i_16);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = b_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_a_15;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          a_34 = ATgetArgument(t, 0);
          b_34 = ATgetArgument(t, 1);
          y_33 = ATgetArgument(t, 2);
          t = y_33;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, a_34, b_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              a_34 = ATgetArgument(t, 0);
              b_34 = ATgetArgument(t, 1);
              y_33 = ATgetArgument(t, 2);
              t = y_33;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, a_34, b_34);
            }
          else
            {
              ATerm p_17 = NULL,e_18 = NULL,j_18 = NULL;
              if(match_cons(t, sym_Prim_2))
                {
                  a_34 = ATgetArgument(t, 0);
                  b_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_34;
              {
                ATerm b_15 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_17 = NULL;
                    v_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_c_14, v_17);
                    t = is_quoted_0_0(t);
                    t = v_17;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_15;
                  }
                t = SSL_explode_string(a_34);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_18), term_c_14), (ATerm) ATinsert(ATempty, term_c_14));
                t = conc_0_0(t);
                e_18 = t;
                t = SSL_implode_string(e_18);
                p_17 = t;
                t = (ATerm) ATmakeAppl(sym_Prim_2, p_17, b_34);
              }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(t_99, t);
    return(t);
  }
  t = t_99(t);
  t = SRTS_all(r_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = repeat_2_0(Ensugar_0_0, _id, t);
  {
    ATerm c_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = c_15;
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_36 = ATgetFirst((ATermList) t);
      j_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_36;
  if(match_cons(t, sym__2))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_36;
  if(match_cons(t, sym_Some_1))
    {
      c_36 = ATgetArgument(t, 0);
      t = c_36;
      if(match_string(t, "left"))
        {
          t = d_36;
          t = m_7(e_36, i_36, j_36, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = d_36;
              t = b_7(e_36, i_36, j_36, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = d_36;
              t = a_7(e_36, i_36, j_36, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = d_36;
      t = z_6(e_36, i_36, j_36, t);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(x_3, t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, x_36);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm g_35 = NULL,l_35 = NULL;
  l_35 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL;
        t = SSL_explode_term(l_35);
        if(match_cons(t, sym__2))
          {
            ATerm k_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_15 = ATgetArgument(t, 1);
              if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
                {
                  n_18 = ATgetFirst((ATermList) m_15);
                  {
                    ATerm o_15 = (ATerm) ATgetNext((ATermList) m_15);
                    if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_18;
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = l_35;
      }
    t = topdown_1_0(s_3, t);
    {
      ATerm t_3 (ATerm t)
      {
        ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
        u_35 = t;
        if(match_cons(t, sym_Seq_2))
          {
            q_35 = ATgetArgument(t, 0);
            r_35 = ATgetArgument(t, 1);
            t = r_35;
            if(match_cons(t, sym_Seq_2))
              {
                s_35 = ATgetArgument(t, 0);
                t_35 = ATgetArgument(t, 1);
                {
                  ATerm q_15 = t;
                  int s_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_35, s_35);
                      t = t_3(t);
                      y_35 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_35, t_35);
                      t = t_3(t);
                      ;
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = q_15;
                      t = u_35;
                    }
                }
              }
            else
              {
                t = u_35;
              }
          }
        else
          {
            t = u_35;
          }
        return(t);
      }
      t = bottomup_1_0(t_3, t);
      g_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATinsert(ATinsert(ATempty, term_a_16), term_z_15))), (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATinsert(ATempty, term_y_15))));
      t = repeat_2_0(u_3, _id, t);
      t = g_35;
      t = bottomup_1_0(w_3, t);
    }
  }
  return(t);
}
ATerm y_7 (ATerm u_20, ATerm v_20, ATerm t)
{
  ATerm c_37 = NULL;
  t = SSL_fputc(u_20, v_20);
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_37);
  return(t);
}
ATerm z_7 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_write_term_to_stream_text(c_39, d_39);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_37);
  return(t);
}
ATerm b_8 (ATerm l_87 (ATerm), ATerm t_375, ATerm g_39, ATerm t)
{
  ATerm e_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_375, term_b_16);
  t = e_8(t);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_37, g_39);
  t = l_87(t);
  t = fclose_0_0(t);
  t = g_39;
  return(t);
}
ATerm a_8 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm f_37 = NULL;
  t = SSL_write_term_to_stream_baf(y_38, z_38);
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_37);
  return(t);
}
ATerm z_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          a_19 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8(a_19, b_19, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(match_cons(d_16, sym_Stream_1))
        {
          q_19 = ATgetArgument(d_16, 0);
        }
      else
        _fail(t);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(q_19, r_19, t);
  n_19 = t;
  t = term_g_16;
  o_19 = t;
  t = n_19;
  if(match_cons(t, sym_Stream_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, n_19);
  t = y_7(o_19, p_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,t_38 = NULL,u_38 = NULL,z_4 = NULL,y_4 = NULL;
  k_37 = t;
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  q_37 = t;
  t = r_37;
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_37 != NULL) && (j_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = term_l_16;
        j_37 = t;
      }
    t_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_37, s_37);
    y_4 = t;
    t = SSLsetAnnotations(y_4, q_37);
    t = k_37;
    if(match_cons(t, sym__2))
      {
        m_37 = ATgetArgument(t, 0);
        n_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_37);
    l_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_37, (ATerm) ATmakeAppl(sym__2, not_null(j_37), n_37));
    z_4 = t;
    t = SSLsetAnnotations(z_4, l_37);
    p_37 = t;
    if(match_cons(t, sym__2))
      {
        t_38 = ATgetArgument(t, 0);
        u_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_5 = NULL;
          t = SSLgetAnnotations(p_37);
          t_18 = t;
          t = t_38;
          t = fetch_1_0(z_3, t);
          w_18 = t;
          t = u_38;
          if(match_cons(t, sym__2))
            {
              y_18 = ATgetArgument(t, 0);
              z_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_8(b_4, y_18, z_18, t);
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
          a_5 = t;
          t = SSLsetAnnotations(a_5, t_18);
          ;
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm g_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(p_37);
            g_19 = t;
            t = u_38;
            if(match_cons(t, sym__2))
              {
                k_19 = ATgetArgument(t, 0);
                m_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_8(d_4, k_19, m_19, t);
            j_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_38, j_19);
            b_5 = t;
            t = SSLsetAnnotations(b_5, g_19);
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
ATerm apply_strategy_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,a_39 = NULL,b_39 = NULL,h_39 = NULL,i_39 = NULL;
  i_39 = t;
  t = dtime_0_0(t);
  t = i_39;
  t = h_73(t);
  h_39 = t;
  t = dtime_0_0(t);
  x_38 = t;
  t = h_39;
  if(match_cons(t, sym__2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_39), (ATerm) ATmakeAppl(sym_Runtime_1, x_38)), b_39);
  return(t);
}
ATerm w_39 (ATerm q_39, ATerm t)
{
  t = SSL_fclose(q_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  u_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_39 = ATgetArgument(t, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_39);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = w_39(u_39, t);
          }
      }
    }
  else
    {
      t = w_39(u_39, t);
    }
  return(t);
}
ATerm c_8 (ATerm e_39, ATerm t)
{
  t = SSL_read_term_from_stream(e_39);
  return(t);
}
ATerm d_8 (ATerm w_20, ATerm x_20, ATerm t)
{
  ATerm x_39 = NULL;
  t = SSL_fopen(w_20, x_20);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_39 = NULL;
  t = SSL_stdin_stream();
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_39 = NULL;
  t = SSL_stdout_stream();
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_stderr_stream();
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_40);
  return(t);
}
ATerm n_41 (ATerm l_40, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_explode_term(l_40);
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
          {
            m_40 = ATgetFirst((ATermList) r_16);
            {
              ATerm s_16 = (ATerm) ATgetNext((ATermList) r_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_41 (ATerm p_40, ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,y_40 = NULL,v_13 = NULL;
  t = SSLgetAnnotations(r_40);
  v_40 = t;
  t = p_40;
  if(match_cons(t, sym_Path_1))
    {
      y_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_40, q_40);
  v_13 = t;
  t = SSLsetAnnotations(v_13, v_40);
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(t_40, u_40, t);
  return(t);
}
ATerm p_41 (ATerm a_41, ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL,w_13 = NULL;
  t = SSLgetAnnotations(c_41);
  f_41 = t;
  t = SSL_is_string(a_41);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, b_41);
  w_13 = t;
  t = SSLsetAnnotations(w_13, f_41);
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(d_41, e_41, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_41(k_41, t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            {
              ATerm v_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_41(l_41, m_41, k_41, t);
                  ;
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
                  t = p_41(l_41, m_41, k_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_41(k_41, t);
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_41 = NULL;
      t_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_41, term_a_17);
      t = e_8(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      t = debug_1_0(f_4, t);
      _fail(t);
    }
  r_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(s_41, t);
  q_41 = t;
  t = r_41;
  t = fclose_0_0(t);
  t = q_41;
  return(t);
}
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm r_42 (ATerm t)
  {
    ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
    o_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_42 = ATgetFirst((ATermList) t);
        q_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL,h_21 = NULL,d_14 = NULL;
          t = SSLgetAnnotations(o_42);
          d_21 = t;
          t = p_42;
          t = s_76(t);
          h_21 = t;
          t = (ATerm) ATinsert(CheckATermList(q_42), h_21);
          d_14 = t;
          t = SSLsetAnnotations(d_14, d_21);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm u_21 = NULL,z_21 = NULL,h_14 = NULL;
            t = SSLgetAnnotations(o_42);
            u_21 = t;
            t = q_42;
            t = r_42(t);
            z_21 = t;
            t = (ATerm) ATinsert(CheckATermList(z_21), p_42);
            h_14 = t;
            t = SSLsetAnnotations(h_14, u_21);
          }
        }
    }
    return(t);
  }
  t = r_42(t);
  return(t);
}
ATerm x_7 (ATerm k_53, ATerm l_53, ATerm t)
{
  t = SSL_strcat(k_53, l_53);
  return(t);
}
ATerm debug_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  u_42 = t;
  t = j_87(t);
  v_42 = t;
  t = term_p_9;
  w_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_42), v_42);
  x_42 = t;
  t = SSL_printnl(w_42, x_42);
  t = u_42;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_43 = NULL;
      e_43 = t;
      t = SSL_is_string(e_43);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_4, t);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
              k_43 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_43 = ATgetArgument(t, 0);
                  t = l_43;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_43 = ATgetArgument(t, 0);
                      t = l_43;
                      {
                        ATerm k_17 = t;
                        int l_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_17);
                          }
                        else
                          {
                            t = k_17;
                            t = debug_1_0(h_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_43 = NULL,r_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_43 = ATgetArgument(t, 0);
                          m_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_43;
                      t = eval_config_0_0(t);
                      q_43 = t;
                      t = m_43;
                      t = eval_config_0_0(t);
                      r_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
                      t = x_7(q_43, r_43, t);
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
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  t = term_m_17;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_17, v_43);
  t = h_8(w_43, v_43, t);
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_43 = NULL,y_43 = NULL;
        t = eval_config_0_0(t);
        x_43 = t;
        t = term_m_17;
        y_43 = t;
        t = SSL_table_put(y_43, v_43, x_43);
        t = x_43;
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_44 = NULL;
        t = term_s_17;
        t = get_config_0_0(t);
        e_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_44, term_t_17);
        t = geq_0_0(t);
        t = c_44;
        t = t_97(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = c_44;
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  if(match_string(t, "-k"))
    {
      t = h_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_44;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  t = SSL_string_to_int(i_44);
  j_44 = t;
  t = term_u_17;
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, j_44);
  t = k_8(k_44, j_44, t);
  t = i_44;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, l_4, m_4, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm m_44 = NULL;
  m_44 = t;
  if(match_string(t, "-S"))
    {
      t = m_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_44;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  t = term_s_17;
  n_44 = t;
  t = term_x_17;
  o_44 = t;
  t = term_y_17;
  t = k_8(n_44, o_44, t);
  t = term_z_17;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  t = SSL_string_to_int(p_44);
  q_44 = t;
  t = term_s_17;
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, q_44);
  t = k_8(r_44, q_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_44);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  t = term_c_18;
  s_44 = t;
  t = term_o_9;
  t_44 = t;
  t = term_d_18;
  t = k_8(s_44, t_44, t);
  t = term_f_18;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, q_4, r_4, t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, v_4, w_4, t);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = Option_3_0(x_4, e_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm k_8 (ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm u_44 = NULL;
  t = term_m_17;
  u_44 = t;
  t = SSL_table_put(u_44, c_46, d_46);
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, c_46, d_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
      t = term_o_9;
      t = i_0(t);
      z_44 = t;
      t = term_m_18;
      a_45 = t;
      t = term_o_18;
      b_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_18, term_o_18, z_44);
      t = i_8(a_45, b_45, z_44, t);
      _fail(t);
    }
  else
    {
      ATerm e_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_44 = ATgetFirst((ATermList) t);
          y_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_44;
      t = d_0(t);
      t = term_o_9;
      t = g_0(t);
      e_45 = t;
      t = (ATerm) ATinsert(CheckATermList(y_44), e_45);
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  if(match_string(t, "-o"))
    {
      t = g_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_45;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  h_45 = t;
  t = term_p_18;
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, h_45);
  t = k_8(i_45, h_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_45);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, q_5, v_5, t);
  return(t);
}
ATerm i_8 (ATerm r_32, ATerm s_32, ATerm q_32, ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
        t = h_8(r_32, s_32, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = (ATerm) ATempty;
      }
    l_45 = t;
    t = (ATerm) ATinsert(CheckATermList(l_45), q_32);
    m_45 = t;
    t = SSL_table_put(r_32, s_32, m_45);
    t = k_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
      t = term_o_9;
      t = r_0(t);
      x_45 = t;
      t = term_m_18;
      y_45 = t;
      t = term_o_18;
      z_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_18, term_o_18, x_45);
      t = i_8(y_45, z_45, x_45, t);
      _fail(t);
    }
  else
    {
      ATerm f_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_45 = ATgetFirst((ATermList) t);
          u_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_45;
      t = n_0(t);
      t = v_45;
      t = p_0(t);
      f_46 = t;
      t = (ATerm) ATinsert(CheckATermList(w_45), f_46);
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  if(match_string(t, "-i"))
    {
      t = h_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_46;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  i_46 = t;
  t = term_c_19;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, i_46);
  t = k_8(j_46, i_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_46);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, c_6, h_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_9;
  t = whoami_0_0(t);
  k_46 = t;
  t = term_p_9;
  r_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_19), k_46);
  s_46 = t;
  t = SSL_printnl(r_46, s_46);
  t = term_v_9;
  q_46 = t;
  t = SSL_exit(q_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_8 (ATerm v_30, ATerm w_30, ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_30, w_30);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = SSL_addr(v_30, w_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_46;
      t = a_83(t);
    }
  else
    {
      ATerm z_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_46 = ATgetFirst((ATermList) t);
          w_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_46;
      t = foldr_2_0(a_83, b_83, t);
      z_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_46, z_46);
      t = b_83(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm y_22 = NULL,b_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(y_22, b_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_47 = NULL,t_22 = NULL,v_22 = NULL;
  t = times_0_0(t);
  v_22 = t;
  t = SSL_explode_term(v_22);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_22;
  t = foldr_2_0(i_6, j_6, t);
  c_47 = t;
  t = SSL_TicksToSeconds(c_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_47;
        if((o_47 != t))
          {
            _fail(t);
          }
        t = n_47;
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_47, p_47);
              ;
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              t = SSL_gtr(o_47, p_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_47 = NULL;
        t = term_s_17;
        t = get_config_0_0(t);
        v_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_47, term_v_9);
        t = geq_0_0(t);
        t = t_47;
        t = s_97(t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = t_47;
      }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,a_48 = NULL,b_48 = NULL;
  t = run_time_0_0(t);
  x_47 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  y_47 = t;
  t = term_p_9;
  a_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_19), x_47), term_y_19), y_47);
  b_48 = t;
  t = SSL_printnl(a_48, b_48);
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_19), x_47), term_y_19), y_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_17;
  c_48 = t;
  t = SSL_exit(c_48);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_48 = ATgetArgument(t, 0);
          {
            ATerm b_24 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(l_48);
            b_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_48);
            l_15 = t;
            t = SSLsetAnnotations(l_15, b_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = fetch_1_0(n_6, t);
    }
  t = f_74(t);
  return(t);
}
ATerm map_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm b_49 (ATerm t)
  {
    ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
    y_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_48;
      }
    else
      {
        ATerm o_24 = NULL,r_24 = NULL,s_24 = NULL,n_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_48 = ATgetFirst((ATermList) t);
            a_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_48);
        o_24 = t;
        t = z_48;
        t = i_76(t);
        r_24 = t;
        t = a_49;
        t = b_49(t);
        s_24 = t;
        t = (ATerm) ATinsert(CheckATermList(s_24), r_24);
        n_15 = t;
        t = SSLsetAnnotations(n_15, o_24);
      }
    return(t);
  }
  t = b_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_49 = ATgetFirst((ATermList) t);
      f_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_49 = NULL,k_49 = NULL;
        ATerm p_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_49)), not_null(k_49));
          return(t);
        }
        t = f_49;
        t = l_0(t);
        if(((j_49 != NULL) && (j_49 != t)))
          _fail(t);
        else
          j_49 = t;
        t = e_49;
        t = k_0(t);
        if(((k_49 != NULL) && (k_49 != t)))
          _fail(t);
        else
          k_49 = t;
        t = f_49;
        t = reverse_acc_2_0(k_0, p_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_9;
      t = l_0(t);
    }
  return(t);
}
ATerm h_8 (ATerm i_34, ATerm j_34, ATerm t)
{
  t = SSL_table_get(i_34, j_34);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,p_15 = NULL;
  q_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_49);
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_49);
  p_15 = t;
  t = SSLsetAnnotations(p_15, o_49);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_49), term_d_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = fetch_1_0(r_6, t);
    }
  t = term_g_20;
  t = echo_0_0(t);
  t = term_m_18;
  m_49 = t;
  t = term_o_18;
  n_49 = t;
  t = term_h_20;
  t = h_8(m_49, n_49, t);
  t = reverse_acc_2_0(_id, s_6, t);
  t = map_1_0(t_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_20 = ATgetFirst((ATermList) t);
                ATerm l_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_49;
          }
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATinsert(ATempty, u_49);
      }
    v_49 = t;
    t = term_l_16;
    w_49 = t;
    t = SSL_printnl(w_49, v_49);
    t = u_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  t = term_m_20;
  a_50 = t;
  t = term_o_9;
  b_50 = t;
  t = term_n_20;
  t = k_8(a_50, b_50, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  t = term_m_20;
  e_50 = t;
  t = term_o_9;
  f_50 = t;
  t = term_n_20;
  t = k_8(e_50, f_50, t);
  t = term_p_20;
  c_50 = t;
  t = term_o_9;
  d_50 = t;
  t = term_q_20;
  t = k_8(c_50, d_50, t);
  t = term_r_20;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, d_7, t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = t_20;
      t = Option_3_0(e_7, g_7, h_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,r_15 = NULL;
  l_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_50 = ATgetFirst((ATermList) t);
      i_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_50);
  g_50 = t;
  t = h_50;
  t = u_59(t);
  j_50 = t;
  t = i_50;
  t = v_59(t);
  k_50 = t;
  t = (ATerm) ATinsert(CheckATermList(k_50), j_50);
  r_15 = t;
  t = SSLsetAnnotations(r_15, g_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,v_50 = NULL,w_50 = NULL,t_15 = NULL;
  q_50 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_21;
        t = s_89(t);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
      }
    t = q_50;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_50 = ATgetFirst((ATermList) t);
        t_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_50);
    r_50 = t;
    t = term_f_19;
    w_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_19, s_50);
    t = k_8(w_50, s_50, t);
    t = t_50;
    {
      ATerm g_51 (ATerm t)
      {
        ATerm c_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_50 = NULL;
                z_50 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_50;
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = s_89(t);
                t = Cons_2_0(_id, g_51, t);
              }
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = c_21;
            {
              ATerm c_51 = NULL,d_51 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_51 = ATgetFirst((ATermList) t);
                  d_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_51), (ATerm) ATmakeAppl(sym_Undefined_1, c_51));
            }
          }
        return(t);
      }
      t = g_51(t);
      v_50 = t;
      t = (ATerm) ATinsert(CheckATermList(v_50), (ATerm) ATmakeAppl(sym_Program_1, s_50));
      t_15 = t;
      t = SSLsetAnnotations(t_15, r_50);
    }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  if(match_string(t, "--help"))
    {
      t = s_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_51;
        }
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL;
  t = term_c_20;
  t_51 = t;
  t = term_o_9;
  u_51 = t;
  t = term_i_21;
  t = k_8(t_51, u_51, t);
  t = term_j_21;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  n_51 = t;
  t = term_m_18;
  p_51 = t;
  t = term_o_18;
  q_51 = t;
  t = (ATerm) ATempty;
  r_51 = t;
  t = SSL_table_put(p_51, q_51, r_51);
  t = n_51;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_89(t);
          ;
          LocalPopChoice(m_21);
        }
      else
        {
          t = l_21;
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, t_7, t);
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
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_52 = NULL;
          b_52 = t;
          {
            ATerm r_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_25 = NULL;
                t = b_52;
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                      t = fetch_1_0(g_8, t);
                    }
                  t = b_52;
                  t = default_system_usage_0_0(t);
                  t = term_x_17;
                  f_25 = t;
                  t = SSL_exit(f_25);
                }
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = r_21;
                {
                  ATerm p_25 = NULL;
                  t = term_m_20;
                  t = get_config_0_0(t);
                  t = b_52;
                  t = default_system_about_0_0(t);
                  t = term_x_17;
                  p_25 = t;
                  t = SSL_exit(p_25);
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
            ATerm y_21 = t;
            int a_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
                ATerm l_8 (ATerm t)
                {
                  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,v_15 = NULL;
                  h_52 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_52);
                  f_52 = t;
                  t = g_52;
                  if(((l_51 != NULL) && (l_51 != t)))
                    _fail(t);
                  else
                    l_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_52);
                  v_15 = t;
                  t = SSLsetAnnotations(v_15, f_52);
                  return(t);
                }
                t = fetch_1_0(l_8, t);
                t = term_p_9;
                d_52 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_51)), term_b_22);
                e_52 = t;
                t = SSL_printnl(d_52, e_52);
                t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_51)), term_b_22));
                t = default_system_usage_0_0(t);
                t = term_v_9;
                c_52 = t;
                t = SSL_exit(c_52);
                ;
                LocalPopChoice(a_22);
              }
            else
              {
                t = y_21;
              }
          }
        }
      m_51 = t;
      t = term_m_18;
      o_51 = t;
      t = SSL_table_destroy(o_51);
      t = m_51;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = parse_options_1_0(h_74, t);
  m_52 = t;
  t = term_c_22;
  p_52 = t;
  t = SSL_table_create(p_52);
  t = term_c_22;
  n_52 = t;
  t = term_d_22;
  o_52 = t;
  t = SSL_table_put(n_52, o_52, m_52);
  t = m_52;
  t = j_74(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_74, t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_74(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = if_verbose2_1_0(i_9, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  t = term_l_22;
  q_52 = t;
  t = term_o_9;
  r_52 = t;
  t = term_m_22;
  t = k_8(q_52, r_52, t);
  t = term_n_22;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  s_52 = t;
  t = term_f_19;
  t = get_config_0_0(t);
  t_52 = t;
  t = term_p_9;
  u_52 = t;
  t = (ATerm) ATinsert(ATempty, t_52);
  v_52 = t;
  t = SSL_printnl(u_52, v_52);
  t = s_52;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm p_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_73(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = p_22;
        {
          ATerm s_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_22);
            }
          else
            {
              t = s_22;
              {
                ATerm x_22 = t;
                int z_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_22);
                  }
                else
                  {
                    t = x_22;
                    {
                      ATerm a_23 = t;
                      int c_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_8, f_9, h_9, t);
                          ;
                          LocalPopChoice(c_23);
                        }
                      else
                        {
                          t = a_23;
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
  ATerm u_8 (ATerm t)
  {
    ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
    x_52 = t;
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_52 != NULL) && (w_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_9, t);
          ;
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          t = term_h_23;
          w_52 = t;
        }
      t = not_null(w_52);
      t = ReadFromFile_0_0(t);
      y_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_52, y_52);
      t = apply_strategy_1_0(q_73, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_8, s_73, p_8, u_8, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,x_15 = NULL;
  d_53 = t;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_53);
  z_52 = t;
  t = b_53;
  t = Stratego_Ensugar_0_0(t);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_53, c_53);
  x_15 = t;
  t = SSLsetAnnotations(x_15, z_52);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_9, _fail, default_usage_0_0, t);
  return(t);
}
