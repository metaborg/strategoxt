#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_PrimT_3;
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
static void init_module_constructors (void)
{
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
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
ATerm term_g_23;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_x_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_o_18;
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
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_b_15;
ATerm term_f_14;
ATerm term_e_14;
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
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
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
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
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
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Some_1, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
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
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_q_9);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_o_18);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_q_9);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_q_9);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_q_9);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_q_9);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
static ATerm a_7 (ATerm h_35, ATerm i_35, ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm Disambiguate_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm r_106 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm b_7 (ATerm u_56, ATerm v_56, ATerm t_56, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_7 (ATerm r_56, ATerm s_56, ATerm q_56, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm d_7 (ATerm o_56, ATerm p_56, ATerm n_56, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm e_7 (ATerm b_57, ATerm c_57, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm k_7 (ATerm w_56, ATerm x_56, ATerm t);
static ATerm l_7 (ATerm w_90 (ATerm), ATerm o_34, ATerm m_34, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm m_7 (ATerm g_57, ATerm h_57, ATerm t);
static ATerm n_7 (ATerm m_82 (ATerm), ATerm x_23, ATerm y_23, ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm o_7 (ATerm l_56, ATerm m_56, ATerm k_56, ATerm t);
ATerm repeat_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm i_83 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_26 (ATerm m_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_106 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
static ATerm a_8 (ATerm x_22, ATerm y_22, ATerm t);
static ATerm b_8 (ATerm h_41, ATerm i_41, ATerm t);
static ATerm d_8 (ATerm b_93 (ATerm), ATerm q_382, ATerm l_41, ATerm t);
static ATerm c_8 (ATerm d_41, ATerm e_41, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm a_78 (ATerm), ATerm t);
static ATerm k_40 (ATerm e_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_8 (ATerm j_41, ATerm t);
static ATerm f_8 (ATerm z_22, ATerm a_23, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_42 (ATerm u_40, ATerm t);
static ATerm d_42 (ATerm y_40, ATerm z_40, ATerm a_41, ATerm t);
static ATerm e_42 (ATerm p_41, ATerm q_41, ATerm r_41, ATerm t);
static ATerm g_8 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm z_7 (ATerm e_56, ATerm f_56, ATerm t);
ATerm debug_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_8 (ATerm t_48, ATerm u_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_8 (ATerm w_34, ATerm x_34, ATerm v_34, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_8 (ATerm a_33, ATerm b_33, ATerm t);
ATerm foldr_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm need_help_1_0 (ATerm y_78 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_82 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm j_8 (ATerm n_36, ATerm o_36, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_95 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm parse_options_1_0 (ATerm h_95 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm iowrap_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,f_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_q_9;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_r_9;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), f_0), term_s_9);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_x_9;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,b_0 = NULL,s_0 = NULL;
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
        ATerm y_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm z_9 = ATgetArgument(t, 1);
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
  t = term_a_10;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = a_7(s_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm c_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_q_9;
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
        ATerm f_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm g_10 = ATgetArgument(t, 1);
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
  t = term_k_10;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATmakeAppl(sym__2, h_1, i_1));
  t = a_7(f_1, e_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_q_9;
  return(t);
}
static ATerm a_7 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm t_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  t = j_8(h_35, i_35, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      {
        ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm n_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_2);
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm o_10 = ATgetArgument(t, 1);
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
  t = term_p_10;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATmakeAppl(sym__2, b_2, d_2));
  t = a_7(o_1, m_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_q_9;
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm o_2 = NULL,r_2 = NULL;
  static ATerm c_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_2 != NULL) && (o_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_2 = ATgetFirst((ATermList) t);
        {
          ATerm r_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(r_10) != AT_LIST) || !(ATisEmpty(r_10))))
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
ATerm Disambiguate_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,w_1 = NULL,c_2 = NULL,f_2 = NULL;
        t = SSL_explode_term(c_5);
        if(match_cons(t, sym__2))
          {
            u_1 = ATgetArgument(t, 0);
            {
              ATerm w_10 = ATgetArgument(t, 1);
              if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
                {
                  w_1 = ATgetFirst((ATermList) w_10);
                  {
                    ATerm a_11 = (ATerm) ATgetNext((ATermList) w_10);
                    if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
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
        t = o_0(t);
        c_2 = t;
        t = (ATerm) ATinsert(ATempty, c_2);
        f_2 = t;
        t = SSL_mkterm(u_1, f_2);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
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
            ATerm d_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, c_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = o_0(t);
                LocalPopChoice(e_11);
              }
            else
              {
                t = d_11;
              }
          }
          t_2 = t;
          t = u_2;
          {
            static ATerm k_1 (ATerm t)
            {
              ATerm x_3 = NULL;
              x_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_5, x_3);
              t = GreaterThan_0_0(t);
              t = x_3;
              t = o_0(t);
              return(t);
            }
            t = map_1_0(k_1, t);
          }
          v_2 = t;
          t = w_2;
          {
            ATerm g_11 = t;
            int h_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, c_5, w_2);
                t = LeftAssoc_0_0(t);
                t = w_2;
                t = o_0(t);
                LocalPopChoice(h_11);
              }
            else
              {
                t = g_11;
              }
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
  return(t);
}
ATerm bottomup_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  static ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(r_106, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = r_106(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(n_5, o_5, t);
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(k_5, m_5, t);
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(i_5, j_5, t);
  return(t);
}
static ATerm b_7 (ATerm u_56, ATerm v_56, ATerm t_56, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
  t = n_7(s_1, u_56, v_56, t);
  t = (ATerm) ATmakeAppl(sym__2, v_56, u_56);
  t = conc_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, t_56);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(t_5, u_5, t);
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(r_5, s_5, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(b_6, c_6, t);
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(z_5, a_6, t);
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(w_5, y_5, t);
  return(t);
}
static ATerm c_7 (ATerm r_56, ATerm s_56, ATerm q_56, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_56, s_56);
  t = n_7(x_1, s_56, s_56, t);
  t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
  t = n_7(y_1, r_56, s_56, t);
  t = (ATerm) ATmakeAppl(sym__2, s_56, r_56);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, q_56);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(i_6, j_6, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,q_6 = NULL,y_6 = NULL,z_6 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(z_6, p_7, t);
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(q_6, y_6, t);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(m_6, n_6, t);
  return(t);
}
static ATerm d_7 (ATerm o_56, ATerm p_56, ATerm n_56, ATerm t)
{
  ATerm f_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_56, p_56);
  t = n_7(g_2, p_56, p_56, t);
  t = (ATerm) ATmakeAppl(sym__2, o_56, p_56);
  t = n_7(j_2, o_56, p_56, t);
  t = (ATerm) ATmakeAppl(sym__2, p_56, o_56);
  t = conc_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, n_56);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_10;
  return(t);
}
static ATerm e_7 (ATerm b_57, ATerm c_57, ATerm t)
{
  ATerm r_7 = NULL,x_7 = NULL,y_7 = NULL,l_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
  r_7 = t;
  t = (ATerm) ATempty;
  p_8 = t;
  t = SSL_mkterm(b_57, p_8);
  x_7 = t;
  t = (ATerm) ATempty;
  l_8 = t;
  t = SSL_mkterm(c_57, l_8);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
  q_8 = t;
  t = term_q_11;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_7, y_7), term_q_11);
  t = l_7(k_2, q_8, s_8, t);
  t = r_7;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
static ATerm k_7 (ATerm w_56, ATerm x_56, ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL;
  t_8 = t;
  t = (ATerm) ATempty;
  y_8 = t;
  t = SSL_mkterm(w_56, y_8);
  u_8 = t;
  t = (ATerm) ATempty;
  x_8 = t;
  t = SSL_mkterm(x_56, x_8);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_8, v_8);
  z_8 = t;
  t = term_s_11;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_8, v_8), term_s_11);
  t = l_7(m_2, z_8, b_9, t);
  t = t_8;
  return(t);
}
static ATerm l_7 (ATerm w_90 (ATerm), ATerm o_34, ATerm m_34, ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,n_9 = NULL;
  f_9 = t;
  t = w_90(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_9, o_34, m_34);
  t = k_8(c_9, o_34, m_34, t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL;
        t = term_w_11;
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, term_w_11);
        t = j_8(c_9, o_9, t);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_9 = ATgetFirst((ATermList) t);
      e_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_w_11;
  g_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), (ATerm) ATinsert(CheckATermList(d_9), o_34));
  n_9 = t;
  t = SSL_table_put(c_9, g_9, n_9);
  t = f_9;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm m_7 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,d_10 = NULL,e_10 = NULL,i_10 = NULL,j_10 = NULL;
  u_9 = t;
  t = (ATerm) ATempty;
  e_10 = t;
  t = SSL_mkterm(g_57, e_10);
  v_9 = t;
  t = (ATerm) ATempty;
  d_10 = t;
  t = SSL_mkterm(h_57, d_10);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
  i_10 = t;
  t = term_a_12;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_9, w_9), term_a_12);
  t = l_7(n_2, i_10, j_10, t);
  t = u_9;
  return(t);
}
static ATerm n_7 (ATerm m_82 (ATerm), ATerm x_23, ATerm y_23, ATerm t)
{
  static ATerm x_2 (ATerm t)
  {
    ATerm x_10 = NULL;
    static ATerm e_3 (ATerm t)
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), y_10);
      t = m_82(t);
      return(t);
    }
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = y_23;
    t = map_1_0(e_3, t);
    return(t);
  }
  t = x_23;
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(c_11, f_11, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,o_11 = NULL,p_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(p_11, z_11, t);
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(k_11, o_11, t);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(i_11, j_11, t);
  return(t);
}
static ATerm o_7 (ATerm l_56, ATerm m_56, ATerm k_56, ATerm t)
{
  ATerm z_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_56, m_56);
  t = n_7(i_3, m_56, m_56, t);
  t = (ATerm) ATmakeAppl(sym__2, l_56, m_56);
  t = n_7(k_3, l_56, m_56, t);
  t = (ATerm) ATmakeAppl(sym__2, m_56, l_56);
  t = conc_0_0(t);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, k_56);
  return(t);
}
ATerm repeat_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  static ATerm e_12 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_80(t);
        t = e_12(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = e_80(t);
      }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm g_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,z_0 = NULL;
  p_12 = t;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_12);
  g_12 = t;
  t = n_12;
  {
    static ATerm m_3 (ATerm t)
    {
      if((l_12 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(m_3, t);
  }
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_12, o_12);
  z_0 = t;
  t = SSLsetAnnotations(z_0, g_12);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm q_12 = NULL,c_4 = NULL,g_4 = NULL;
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), term_q_13), term_p_13), term_o_13), term_n_13), term_m_13), term_l_13), term_i_13), term_g_13), term_e_13), term_d_13), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_r_12), term_m_12), term_j_12), term_i_12), term_f_12), term_d_12));
  t = member_0_0(t);
  t = SSL_explode_string(q_12);
  g_4 = t;
  t = (ATerm) ATinsert(CheckATermList(g_4), term_s_13);
  c_4 = t;
  t = SSL_implode_string(c_4);
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
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(z_13) != AT_INT) || (ATgetInt((ATermInt) z_13) != 34)))
                _fail(t);
              c_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_13), term_e_14), term_b_14);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm h_13 = NULL,k_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_13 = ATgetFirst((ATermList) t);
                k_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_13;
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
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm j_14 = NULL,m_14 = NULL,n_14 = NULL;
        n_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_14 = ATgetFirst((ATermList) t);
            m_14 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm m_4 = NULL,p_4 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(n_14);
              m_4 = t;
              t = m_14;
              t = escape_chars_0_0(t);
              p_4 = t;
              t = (ATerm) ATinsert(CheckATermList(p_4), j_14);
              v_1 = t;
              t = SSLsetAnnotations(v_1, m_4);
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
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm l_21 = NULL,v_4 = NULL,f_5 = NULL;
        t = SSL_explode_string(l_20);
        {
          ATerm h_14 = t;
          if((PushChoice() == 0))
            {
              ATerm l_5 = NULL,v_5 = NULL;
              l_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(i_14) != AT_INT) || (ATgetInt((ATermInt) i_14) != 34)))
                    _fail(t);
                  v_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_5;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = l_5;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_14;
            }
        }
        t = escape_chars_0_0(t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_5), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
        t = conc_0_0(t);
        v_4 = t;
        t = SSL_implode_string(v_4);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, l_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          l_20 = ATgetArgument(t, 0);
          {
            ATerm h_6 = NULL;
            t = SSL_real_to_string(l_20);
            h_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, h_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              l_20 = ATgetArgument(t, 0);
              {
                ATerm s_6 = NULL;
                t = SSL_int_to_string(l_20);
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, s_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  l_20 = ATgetArgument(t, 0);
                  n_20 = ATgetArgument(t, 1);
                  {
                    ATerm h_7 = NULL;
                    t = n_20;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        h_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, l_20, h_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      l_20 = ATgetArgument(t, 0);
                      {
                        ATerm u_7 = NULL,w_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(k_20);
                        u_7 = t;
                        t = l_20;
                        t = AddLeadingPrime_0_0(t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, u_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          l_20 = ATgetArgument(t, 0);
                          n_20 = ATgetArgument(t, 1);
                          j_20 = ATgetArgument(t, 2);
                          {
                            ATerm i_9 = NULL,m_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(k_20);
                            i_9 = t;
                            t = l_20;
                            t = AddLeadingPrime_0_0(t);
                            m_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, m_9, n_20, j_20);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, i_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              l_20 = ATgetArgument(t, 0);
                              n_20 = ATgetArgument(t, 1);
                              j_20 = ATgetArgument(t, 2);
                              {
                                ATerm b_10 = NULL,h_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(k_20);
                                b_10 = t;
                                t = l_20;
                                t = AddLeadingPrime_0_0(t);
                                h_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, h_10, n_20, j_20);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, b_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  l_20 = ATgetArgument(t, 0);
                                  n_20 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_10 = NULL,v_10 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(k_20);
                                    s_10 = t;
                                    t = l_20;
                                    t = AddLeadingPrime_0_0(t);
                                    v_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, v_10, n_20);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, s_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      l_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_11 = NULL,n_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(k_20);
                                        l_11 = t;
                                        t = l_20;
                                        t = AddLeadingPrime_0_0(t);
                                        n_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, l_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          l_20 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_11 = NULL,x_11 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(k_20);
                                            v_11 = t;
                                            t = l_20;
                                            t = AddLeadingPrime_0_0(t);
                                            x_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, x_11);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, v_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              l_20 = ATgetArgument(t, 0);
                                              n_20 = ATgetArgument(t, 1);
                                              {
                                                ATerm h_12 = NULL,k_12 = NULL,j_3 = NULL;
                                                t = SSLgetAnnotations(k_20);
                                                h_12 = t;
                                                t = l_20;
                                                t = AddLeadingPrime_0_0(t);
                                                k_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_12, n_20);
                                                j_3 = t;
                                                t = SSLsetAnnotations(j_3, h_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm f_13 = NULL,j_13 = NULL,l_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  l_20 = ATgetArgument(t, 0);
                                                  n_20 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(k_20);
                                              f_13 = t;
                                              t = l_20;
                                              t = AddLeadingPrime_0_0(t);
                                              j_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, j_13, n_20);
                                              l_3 = t;
                                              t = SSLsetAnnotations(l_3, f_13);
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
ATerm at_end_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  static ATerm h_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,g_25 = NULL;
    g_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        b_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_14 = NULL,g_14 = NULL,w_3 = NULL;
          t = SSLgetAnnotations(g_25);
          a_14 = t;
          t = b_25;
          t = h_25(t);
          g_14 = t;
          t = (ATerm) ATinsert(CheckATermList(g_14), a_25);
          w_3 = t;
          t = SSLsetAnnotations(w_3, a_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_25;
        t = i_83(t);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_23 = NULL,o_23 = NULL,p_23 = NULL;
  m_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_23;
    }
  else
    {
      static ATerm n_3 (ATerm t)
      {
        t = not_null(p_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          if(((p_23 != NULL) && (p_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_23;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
static ATerm h_26 (ATerm m_25, ATerm t)
{
  ATerm n_25 = NULL;
  t = SSL_explode_term(m_25);
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  v_25 = t;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
      {
        ATerm l_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_3 (ATerm t)
            {
              t = u_25;
              return(t);
            }
            t = t_25;
            t = at_end_1_0(o_3, t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = l_14;
            t = h_26(v_25, t);
          }
      }
    }
  else
    {
      t = h_26(v_25, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_26 = NULL,q_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_26;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_26;
    }
  else
    {
      t = q_26;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm z_26 = NULL,d_27 = NULL,h_27 = NULL,k_27 = NULL,m_27 = NULL,p_27 = NULL,r_27 = NULL,v_27 = NULL,w_27 = NULL,e_4 = NULL;
  w_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_27);
  k_27 = t;
  t = SSL_explode_string(p_27);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, r_27);
  e_4 = t;
  t = SSLsetAnnotations(e_4, k_27);
  v_27 = t;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((z_26 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      d_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_27;
  t = last_0_0(t);
  if((z_26 != t))
    {
      _fail(t);
    }
  t = v_27;
  return(t);
}
ATerm at_last_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  static ATerm e_29 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
    b_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_29 = ATgetFirst((ATermList) t);
        d_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(b_29);
          u_14 = t;
          t = d_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(d_29), c_29);
          k_4 = t;
          t = SSLsetAnnotations(k_4, u_14);
          t = t_83(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = p_14;
          {
            ATerm f_15 = NULL,i_15 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(b_29);
            f_15 = t;
            t = d_29;
            t = e_29(t);
            i_15 = t;
            t = (ATerm) ATinsert(CheckATermList(i_15), c_29);
            l_4 = t;
            t = SSLsetAnnotations(l_4, f_15);
          }
        }
    }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL;
      static ATerm p_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_29 != NULL) && (j_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_29 = ATgetFirst((ATermList) t);
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
      t = at_last_1_0(p_3, t);
      k_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_29, not_null(j_29));
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm l_29 = NULL,o_29 = NULL;
        static ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((l_29 != NULL) && (l_29 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                l_29 = ATgetFirst((ATermList) t);
              {
                ATerm w_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
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
        t = (ATerm) ATmakeAppl(sym__2, o_29, not_null(l_29));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_29 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
      t = a_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
          t = c_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_30 = ATgetFirst((ATermList) t);
              e_30 = (ATerm) ATgetNext((ATermList) t);
              t = e_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_29;
                  if(match_string(t, "Cons"))
                    {
                      ATerm x_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_30 = NULL;
                          t = d_30;
                          t = implode_cons_0_0(t);
                          k_30 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_30), b_30);
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          t = (ATerm) ATinsert(ATempty, f_30);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, f_30);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, f_30);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, f_30);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, f_30);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, f_30);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm a_34 = NULL,f_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      t = j_34;
      if(match_string(t, "Cons"))
        {
          ATerm o_15 = NULL,q_15 = NULL,e_16 = NULL,g_16 = NULL;
          t = k_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_14 = ATgetFirst((ATermList) t);
              a_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_15 = ATgetFirst((ATermList) t);
              f_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_34;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              e_16 = ATgetArgument(t, 0);
              g_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_16;
          if(match_cons(t, sym_Op_2))
            {
              o_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              t = q_15;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_15;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, e_16);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, e_16, g_16);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, e_16, g_16);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, e_16, g_16);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = k_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_b_15;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          j_34 = ATgetArgument(t, 0);
          k_34 = ATgetArgument(t, 1);
          h_34 = ATgetArgument(t, 2);
          t = h_34;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, j_34, k_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              j_34 = ATgetArgument(t, 0);
              k_34 = ATgetArgument(t, 1);
              h_34 = ATgetArgument(t, 2);
              t = h_34;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, j_34, k_34);
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  j_34 = ATgetArgument(t, 0);
                  k_34 = ATgetArgument(t, 1);
                  h_34 = ATgetArgument(t, 2);
                  {
                    ATerm o_17 = NULL,p_17 = NULL,r_17 = NULL;
                    t = j_34;
                    {
                      ATerm c_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_17 = NULL;
                          x_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_e_14, x_17);
                          t = is_quoted_0_0(t);
                          t = x_17;
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = c_15;
                        }
                    }
                    t = SSL_explode_string(j_34);
                    p_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_17), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                    t = conc_0_0(t);
                    r_17 = t;
                    t = SSL_implode_string(r_17);
                    o_17 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, o_17, k_34, h_34);
                  }
                }
              else
                {
                  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
                  if(match_cons(t, sym_Prim_2))
                    {
                      j_34 = ATgetArgument(t, 0);
                      k_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_34;
                  {
                    ATerm d_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm t_18 = NULL;
                        t_18 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_e_14, t_18);
                        t = is_quoted_0_0(t);
                        t = t_18;
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = d_15;
                      }
                  }
                  t = SSL_explode_string(j_34);
                  q_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_18), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                  t = conc_0_0(t);
                  r_18 = t;
                  t = SSL_implode_string(r_18);
                  p_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, p_18, k_34);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(q_106, t);
    return(t);
  }
  t = q_106(t);
  t = SRTS_all(r_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = repeat_2_0(Ensugar_0_0, _id, t);
  {
    ATerm e_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = e_15;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  y_36 = t;
  if(match_cons(t, sym__2))
    {
      z_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_37 = ATgetFirst((ATermList) t);
      e_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_37;
  if(match_cons(t, sym__2))
    {
      c_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_37;
  if(match_cons(t, sym_Some_1))
    {
      x_36 = ATgetArgument(t, 0);
      t = x_36;
      if(match_string(t, "left"))
        {
          t = y_36;
          t = o_7(z_36, d_37, e_37, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = y_36;
              t = d_7(z_36, d_37, e_37, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = y_36;
              t = c_7(z_36, d_37, e_37, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = y_36;
      t = b_7(z_36, d_37, e_37, t);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(y_3, t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, s_37);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm z_35 = NULL,e_36 = NULL;
  e_36 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        t = SSL_explode_term(e_36);
        if(match_cons(t, sym__2))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_15 = ATgetArgument(t, 1);
              if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
                {
                  o_19 = ATgetFirst((ATermList) n_15);
                  {
                    ATerm r_15 = (ATerm) ATgetNext((ATermList) n_15);
                    if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_19;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = e_36;
      }
  }
  t = topdown_1_0(s_3, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,p_36 = NULL;
      p_36 = t;
      if(match_cons(t, sym_Seq_2))
        {
          j_36 = ATgetArgument(t, 0);
          k_36 = ATgetArgument(t, 1);
          t = k_36;
          if(match_cons(t, sym_Seq_2))
            {
              l_36 = ATgetArgument(t, 0);
              m_36 = ATgetArgument(t, 1);
              {
                ATerm t_15 = t;
                int u_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_36 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_36, l_36);
                    t = t_3(t);
                    t_36 = t;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_36, m_36);
                    t = t_3(t);
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    t = p_36;
                  }
              }
            }
          else
            {
              t = p_36;
            }
        }
      else
        {
          t = p_36;
        }
      return(t);
    }
    t = bottomup_1_0(t_3, t);
  }
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, term_d_16), term_c_16))), (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATempty, term_a_16))));
  t = repeat_2_0(u_3, _id, t);
  t = z_35;
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm a_8 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_fputc(x_22, y_22);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
  return(t);
}
static ATerm b_8 (ATerm h_41, ATerm i_41, ATerm t)
{
  ATerm y_37 = NULL;
  t = SSL_write_term_to_stream_text(h_41, i_41);
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_37);
  return(t);
}
static ATerm d_8 (ATerm b_93 (ATerm), ATerm q_382, ATerm l_41, ATerm t)
{
  ATerm z_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_382, term_f_16);
  t = g_8(t);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_37, l_41);
  t = b_93(t);
  t = fclose_0_0(t);
  t = l_41;
  return(t);
}
static ATerm c_8 (ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm a_38 = NULL;
  t = SSL_write_term_to_stream_baf(d_41, e_41);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_38);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if(match_cons(h_16, sym_Stream_1))
        {
          t_20 = ATgetArgument(h_16, 0);
        }
      else
        _fail(t);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(t_20, u_20, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if(match_cons(i_16, sym_Stream_1))
        {
          i_21 = ATgetArgument(i_16, 0);
        }
      else
        _fail(t);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(i_21, j_21, t);
  f_21 = t;
  t = term_j_16;
  g_21 = t;
  t = f_21;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, f_21);
  t = a_8(g_21, h_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,o_39 = NULL,p_39 = NULL,z_4 = NULL,x_4 = NULL;
  f_38 = t;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  l_38 = t;
  t = m_38;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_3, t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = term_m_16;
        e_38 = t;
      }
  }
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, n_38);
  x_4 = t;
  t = SSLsetAnnotations(x_4, l_38);
  t = f_38;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_38, (ATerm) ATmakeAppl(sym__2, not_null(e_38), i_38));
  z_4 = t;
  t = SSLsetAnnotations(z_4, g_38);
  k_38 = t;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,a_5 = NULL;
        t = SSLgetAnnotations(k_38);
        g_20 = t;
        t = o_39;
        t = fetch_1_0(a_4, t);
        p_20 = t;
        t = p_39;
        if(match_cons(t, sym__2))
          {
            r_20 = ATgetArgument(t, 0);
            s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_8(b_4, r_20, s_20, t);
        q_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        a_5 = t;
        t = SSLsetAnnotations(a_5, g_20);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm z_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(k_38);
          z_20 = t;
          t = p_39;
          if(match_cons(t, sym__2))
            {
              d_21 = ATgetArgument(t, 0);
              e_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_8(d_4, d_21, e_21, t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_39, c_21);
          b_5 = t;
          t = SSLsetAnnotations(b_5, z_20);
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
ATerm apply_strategy_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  w_39 = t;
  t = dtime_0_0(t);
  t = w_39;
  t = a_78(t);
  v_39 = t;
  t = dtime_0_0(t);
  s_39 = t;
  t = v_39;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_39), (ATerm) ATmakeAppl(sym_Runtime_1, s_39)), u_39);
  return(t);
}
static ATerm k_40 (ATerm e_40, ATerm t)
{
  t = SSL_fclose(e_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  i_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_40 = ATgetArgument(t, 0);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_40);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = k_40(i_40, t);
          }
      }
    }
  else
    {
      t = k_40(i_40, t);
    }
  return(t);
}
static ATerm e_8 (ATerm j_41, ATerm t)
{
  t = SSL_read_term_from_stream(j_41);
  return(t);
}
static ATerm f_8 (ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_fopen(z_22, a_23);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_stdin_stream();
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_40 = NULL;
  t = SSL_stdout_stream();
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_40);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_stderr_stream();
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_40);
  return(t);
}
static ATerm c_42 (ATerm u_40, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_explode_term(u_40);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            v_40 = ATgetFirst((ATermList) s_16);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_42 (ATerm y_40, ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,f_41 = NULL,n_41 = NULL,v_13 = NULL;
  t = SSLgetAnnotations(a_41);
  f_41 = t;
  t = y_40;
  if(match_cons(t, sym_Path_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_41, z_40);
  v_13 = t;
  t = SSLsetAnnotations(v_13, f_41);
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(b_41, c_41, t);
  return(t);
}
static ATerm e_42 (ATerm p_41, ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,x_41 = NULL,w_13 = NULL;
  t = SSLgetAnnotations(r_41);
  u_41 = t;
  t = SSL_is_string(p_41);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_41, q_41);
  w_13 = t;
  t = SSLsetAnnotations(w_13, u_41);
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(s_41, t_41, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_42(z_41, t);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_42(a_42, b_42, z_41, t);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  t = e_42(a_42, b_42, z_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_42(z_41, t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = NULL;
      n_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_42, term_b_17);
      t = g_8(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = debug_1_0(f_4, t);
      _fail(t);
    }
  g_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(h_42, t);
  f_42 = t;
  t = g_42;
  t = fclose_0_0(t);
  t = f_42;
  return(t);
}
ATerm fetch_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  static ATerm m_43 (ATerm t)
  {
    ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
    j_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_43 = ATgetFirst((ATermList) t);
        l_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = NULL,b_22 = NULL,c_14 = NULL;
          t = SSLgetAnnotations(j_43);
          y_21 = t;
          t = k_43;
          t = c_83(t);
          b_22 = t;
          t = (ATerm) ATinsert(CheckATermList(l_43), b_22);
          c_14 = t;
          t = SSLsetAnnotations(c_14, y_21);
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm q_22 = NULL,v_22 = NULL,d_14 = NULL;
            t = SSLgetAnnotations(j_43);
            q_22 = t;
            t = l_43;
            t = m_43(t);
            v_22 = t;
            t = (ATerm) ATinsert(CheckATermList(v_22), k_43);
            d_14 = t;
            t = SSLsetAnnotations(d_14, q_22);
          }
        }
    }
    return(t);
  }
  t = m_43(t);
  return(t);
}
static ATerm z_7 (ATerm e_56, ATerm f_56, ATerm t)
{
  t = SSL_strcat(e_56, f_56);
  return(t);
}
ATerm debug_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  p_43 = t;
  t = z_92(t);
  q_43 = t;
  t = term_r_9;
  r_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_43), q_43);
  s_43 = t;
  t = SSL_printnl(r_43, s_43);
  t = p_43;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_43 = NULL;
      z_43 = t;
      t = SSL_is_string(z_43);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_4, t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
              f_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_44 = ATgetArgument(t, 0);
                  t = g_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_44 = ATgetArgument(t, 0);
                      t = g_44;
                      {
                        ATerm l_17 = t;
                        int m_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_17);
                          }
                        else
                          {
                            t = l_17;
                            t = debug_1_0(i_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_44 = NULL,m_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_44 = ATgetArgument(t, 0);
                          h_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_44;
                      t = eval_config_0_0(t);
                      l_44 = t;
                      t = h_44;
                      t = eval_config_0_0(t);
                      m_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_44, m_44);
                      t = z_7(l_44, m_44, t);
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
  ATerm q_44 = NULL,r_44 = NULL;
  q_44 = t;
  t = term_n_17;
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, q_44);
  t = j_8(r_44, q_44, t);
  {
    ATerm q_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL,t_44 = NULL;
        t = eval_config_0_0(t);
        s_44 = t;
        t = term_n_17;
        t_44 = t;
        t = SSL_table_put(t_44, q_44, s_44);
        t = s_44;
        LocalPopChoice(s_17);
      }
    else
      {
        t = q_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        z_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_44, term_w_17);
        t = geq_0_0(t);
        t = x_44;
        t = m_104(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = x_44;
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  if(match_string(t, "-k"))
    {
      t = c_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_45;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  t = SSL_string_to_int(d_45);
  e_45 = t;
  t = term_y_17;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, e_45);
  t = m_8(f_45, e_45, t);
  t = d_45;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, n_4, o_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "-S"))
    {
      t = h_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_45;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  t = term_v_17;
  i_45 = t;
  t = term_a_18;
  j_45 = t;
  t = term_b_18;
  t = m_8(i_45, j_45, t);
  t = term_c_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  t = SSL_string_to_int(k_45);
  l_45 = t;
  t = term_v_17;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, l_45);
  t = m_8(m_45, l_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_45);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  t = term_f_18;
  n_45 = t;
  t = term_q_9;
  o_45 = t;
  t = term_g_18;
  t = m_8(n_45, o_45, t);
  t = term_h_18;
  return(t);
}
static ATerm e_5 (ATerm t)
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
      t = Option_3_0(q_4, r_4, s_4, t);
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
            t = ArgOption_3_0(t_4, u_4, w_4, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = Option_3_0(y_4, d_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm p_45 = NULL;
  t = term_n_17;
  p_45 = t;
  t = SSL_table_put(p_45, t_48, u_48);
  t = (ATerm) ATmakeAppl(sym__3, term_n_17, t_48, u_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
      t = term_q_9;
      t = e_0(t);
      u_45 = t;
      t = term_n_18;
      v_45 = t;
      t = term_o_18;
      w_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, u_45);
      t = k_8(v_45, w_45, u_45, t);
      _fail(t);
    }
  else
    {
      ATerm z_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_45 = ATgetFirst((ATermList) t);
          t_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_45;
      t = c_0(t);
      t = term_q_9;
      t = d_0(t);
      z_45 = t;
      t = (ATerm) ATinsert(CheckATermList(t_45), z_45);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  if(match_string(t, "-o"))
    {
      t = b_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_46;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  c_46 = t;
  t = term_s_18;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, c_46);
  t = m_8(d_46, c_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_46);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, q_5, x_5, t);
  return(t);
}
static ATerm k_8 (ATerm w_34, ATerm x_34, ATerm v_34, ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
        t = j_8(w_34, x_34, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATempty;
      }
  }
  g_46 = t;
  t = (ATerm) ATinsert(CheckATermList(g_46), v_34);
  h_46 = t;
  t = SSL_table_put(w_34, x_34, h_46);
  t = f_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
      t = term_q_9;
      t = n_0(t);
      s_46 = t;
      t = term_n_18;
      t_46 = t;
      t = term_o_18;
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, s_46);
      t = k_8(t_46, u_46, s_46, t);
      _fail(t);
    }
  else
    {
      ATerm y_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_46 = ATgetFirst((ATermList) t);
          p_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_46 = ATgetFirst((ATermList) t);
          r_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_46;
      t = k_0(t);
      t = q_46;
      t = l_0(t);
      y_46 = t;
      t = (ATerm) ATinsert(CheckATermList(r_46), y_46);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  if(match_string(t, "-i"))
    {
      t = a_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_47;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  b_47 = t;
  t = term_z_18;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, b_47);
  t = m_8(c_47, b_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_47);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, e_6, g_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_9;
  t = whoami_0_0(t);
  d_47 = t;
  t = term_r_9;
  f_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_19), d_47);
  g_47 = t;
  t = SSL_printnl(f_47, g_47);
  t = term_x_9;
  e_47 = t;
  t = SSL_exit(e_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_19;
  t = get_config_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_33, b_33);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = SSL_addr(a_33, b_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_47;
      t = k_89(t);
    }
  else
    {
      ATerm n_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_47 = ATgetFirst((ATermList) t);
          k_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_47;
      t = foldr_2_0(k_89, l_89, t);
      n_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_47, n_47);
      t = l_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(e_24, f_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_47 = NULL,w_23 = NULL,z_23 = NULL;
  t = times_0_0(t);
  z_23 = t;
  t = SSL_explode_term(z_23);
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_23;
  t = foldr_2_0(k_6, l_6, t);
  q_47 = t;
  t = SSL_TicksToSeconds(q_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_48;
        if((c_48 != t))
          {
            _fail(t);
          }
        t = b_48;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_48, d_48);
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
              t = SSL_gtr(c_48, d_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_48 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_48, term_x_9);
        t = geq_0_0(t);
        t = h_48;
        t = l_104(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = h_48;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = run_time_0_0(t);
  l_48 = t;
  t = term_q_9;
  t = whoami_0_0(t);
  m_48 = t;
  t = term_r_9;
  o_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_19), l_48), term_m_19), m_48);
  p_48 = t;
  t = SSL_printnl(o_48, p_48);
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_19), l_48), term_m_19), m_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_18;
  q_48 = t;
  t = SSL_exit(q_48);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  b_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_49 = ATgetArgument(t, 0);
          {
            ATerm v_24 = NULL,q_14 = NULL;
            t = SSLgetAnnotations(b_49);
            v_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_49);
            q_14 = t;
            t = SSLsetAnnotations(q_14, v_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_19;
      t = get_config_0_0(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = fetch_1_0(p_6, t);
    }
  t = y_78(t);
  return(t);
}
ATerm map_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  static ATerm w_49 (ATerm t)
  {
    ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
    t_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_49;
      }
    else
      {
        ATerm k_25 = NULL,q_25 = NULL,r_25 = NULL,p_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_49 = ATgetFirst((ATermList) t);
            v_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_49);
        k_25 = t;
        t = u_49;
        t = s_82(t);
        q_25 = t;
        t = v_49;
        t = w_49(t);
        r_25 = t;
        t = (ATerm) ATinsert(CheckATermList(r_25), q_25);
        p_15 = t;
        t = SSLsetAnnotations(p_15, k_25);
      }
    return(t);
  }
  t = w_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_49 = ATgetFirst((ATermList) t);
      a_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_50 = NULL,f_50 = NULL;
        static ATerm r_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_50)), not_null(f_50));
          return(t);
        }
        t = a_50;
        t = i_0(t);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = z_49;
        t = g_0(t);
        if(((f_50 != NULL) && (f_50 != t)))
          _fail(t);
        else
          f_50 = t;
        t = a_50;
        t = reverse_acc_2_0(g_0, r_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm j_8 (ATerm n_36, ATerm o_36, ATerm t)
{
  t = SSL_table_get(n_36, o_36);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,s_15 = NULL;
  l_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_50);
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_50);
  s_15 = t;
  t = SSLsetAnnotations(s_15, j_50);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_50), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_19;
      t = get_config_0_0(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(t_6, t);
    }
  t = term_v_19;
  t = echo_0_0(t);
  t = term_n_18;
  h_50 = t;
  t = term_o_18;
  i_50 = t;
  t = term_w_19;
  t = j_8(h_50, i_50, t);
  t = reverse_acc_2_0(_id, u_6, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_50;
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
            t = p_50;
          }
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, p_50);
      }
  }
  q_50 = t;
  t = term_m_16;
  r_50 = t;
  t = SSL_printnl(r_50, q_50);
  t = p_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  t = term_b_20;
  v_50 = t;
  t = term_q_9;
  w_50 = t;
  t = term_c_20;
  t = m_8(v_50, w_50, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  t = term_b_20;
  z_50 = t;
  t = term_q_9;
  a_51 = t;
  t = term_c_20;
  t = m_8(z_50, a_51, t);
  t = term_e_20;
  x_50 = t;
  t = term_q_9;
  y_50 = t;
  t = term_f_20;
  t = m_8(x_50, y_50, t);
  t = term_h_20;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, x_6, f_7, t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = m_20;
      t = Option_3_0(g_7, i_7, j_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,v_15 = NULL;
  g_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      d_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_51);
  b_51 = t;
  t = c_51;
  t = q_72(t);
  e_51 = t;
  t = d_51;
  t = r_72(t);
  f_51 = t;
  t = (ATerm) ATinsert(CheckATermList(f_51), e_51);
  v_15 = t;
  t = SSLsetAnnotations(v_15, b_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_95 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL,x_15 = NULL;
  l_51 = t;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_20;
        t = i_95(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
      }
  }
  t = l_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_51 = ATgetFirst((ATermList) t);
      o_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_51);
  m_51 = t;
  t = term_c_19;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, n_51);
  t = m_8(r_51, n_51, t);
  t = o_51;
  {
    static ATerm b_52 (ATerm t)
    {
      ATerm y_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_51 = NULL;
              u_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_51;
              LocalPopChoice(k_21);
            }
          else
            {
              t = b_21;
              t = i_95(t);
              t = Cons_2_0(_id, b_52, t);
            }
          LocalPopChoice(a_21);
        }
      else
        {
          t = y_20;
          {
            ATerm x_51 = NULL,y_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_51 = ATgetFirst((ATermList) t);
                y_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_51), (ATerm) ATmakeAppl(sym_Undefined_1, x_51));
          }
        }
      return(t);
    }
    t = b_52(t);
  }
  q_51 = t;
  t = (ATerm) ATinsert(CheckATermList(q_51), (ATerm) ATmakeAppl(sym_Program_1, n_51));
  x_15 = t;
  t = SSLsetAnnotations(x_15, m_51);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  if(match_string(t, "--help"))
    {
      t = n_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_52;
        }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  t = term_r_19;
  o_52 = t;
  t = term_q_9;
  p_52 = t;
  t = term_m_21;
  t = m_8(o_52, p_52, t);
  t = term_n_21;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  i_52 = t;
  t = term_n_18;
  k_52 = t;
  t = term_o_18;
  l_52 = t;
  t = (ATerm) ATempty;
  m_52 = t;
  t = SSL_table_put(k_52, l_52, m_52);
  t = i_52;
  {
    static ATerm q_7 (ATerm t)
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_95(t);
          LocalPopChoice(q_21);
        }
      else
        {
          t = p_21;
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_7, t_7, v_7, t);
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_7, t);
  }
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_52 = NULL;
        w_52 = t;
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_26 = NULL;
              t = w_52;
              {
                ATerm x_21 = t;
                int z_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_19;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_21);
                  }
                else
                  {
                    t = x_21;
                    t = fetch_1_0(i_8, t);
                  }
              }
              t = w_52;
              t = default_system_usage_0_0(t);
              t = term_a_18;
              c_26 = t;
              t = SSL_exit(c_26);
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm i_26 = NULL;
                t = term_b_20;
                t = get_config_0_0(t);
                t = w_52;
                t = default_system_about_0_0(t);
                t = term_a_18;
                i_26 = t;
                t = SSL_exit(i_26);
              }
            }
        }
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm a_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
              static ATerm n_8 (ATerm t)
              {
                ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,z_15 = NULL;
                c_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_53);
                a_53 = t;
                t = b_53;
                if(((g_52 != NULL) && (g_52 != t)))
                  _fail(t);
                else
                  g_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_53);
                z_15 = t;
                t = SSLsetAnnotations(z_15, a_53);
                return(t);
              }
              t = fetch_1_0(n_8, t);
              t = term_r_9;
              y_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), term_d_22);
              z_52 = t;
              t = SSL_printnl(y_52, z_52);
              t = (ATerm) ATmakeAppl(sym__2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), term_d_22));
              t = default_system_usage_0_0(t);
              t = term_x_9;
              x_52 = t;
              t = SSL_exit(x_52);
              LocalPopChoice(c_22);
            }
          else
            {
              t = a_22;
            }
        }
      }
  }
  h_52 = t;
  t = term_n_18;
  j_52 = t;
  t = SSL_table_destroy(j_52);
  t = h_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  t = parse_options_1_0(a_79, t);
  h_53 = t;
  t = term_e_22;
  k_53 = t;
  t = SSL_table_create(k_53);
  t = term_e_22;
  i_53 = t;
  t = term_f_22;
  j_53 = t;
  t = SSL_table_put(i_53, j_53, h_53);
  t = h_53;
  t = c_79(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_79, t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_79(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = if_verbose2_1_0(k_9, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  t = term_k_22;
  l_53 = t;
  t = term_q_9;
  m_53 = t;
  t = term_l_22;
  t = m_8(l_53, m_53, t);
  t = term_m_22;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  t = term_c_19;
  t = get_config_0_0(t);
  o_53 = t;
  t = term_r_9;
  p_53 = t;
  t = (ATerm) ATinsert(ATempty, o_53);
  q_53 = t;
  t = SSL_printnl(p_53, q_53);
  t = n_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t)
{
  static ATerm o_8 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_78(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              {
                ATerm t_22 = t;
                int u_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_22);
                  }
                else
                  {
                    t = t_22;
                    {
                      ATerm w_22 = t;
                      int b_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_9, h_9, j_9, t);
                          LocalPopChoice(b_23);
                        }
                      else
                        {
                          t = w_22;
                          {
                            ATerm c_23 = t;
                            int d_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(d_23);
                              }
                            else
                              {
                                t = c_23;
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
  static ATerm w_8 (ATerm t)
  {
    ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
    s_53 = t;
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_9, t);
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          t = term_g_23;
          r_53 = t;
        }
    }
    t = not_null(r_53);
    t = ReadFromFile_0_0(t);
    t_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
    t = apply_strategy_1_0(j_78, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_8, l_78, r_8, w_8, t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,b_16 = NULL;
  y_53 = t;
  if(match_cons(t, sym__2))
    {
      v_53 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_53);
  u_53 = t;
  t = w_53;
  t = Stratego_Ensugar_0_0(t);
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, x_53);
  b_16 = t;
  t = SSLsetAnnotations(b_16, u_53);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_9, _fail, default_usage_0_0, t);
  return(t);
}
