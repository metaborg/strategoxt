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
ATerm term_d_22;
ATerm term_c_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_y_20;
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
ATerm term_q_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_q_18;
ATerm term_p_18;
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
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_b_15;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
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
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(110);
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
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(10);
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
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_t_9);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
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
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_o_18);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_t_9);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_t_9);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_t_9);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_t_9);
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
static ATerm d_7 (ATerm g_36, ATerm h_36, ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm Disambiguate_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_107 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm e_7 (ATerm t_57, ATerm u_57, ATerm s_57, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_7 (ATerm q_57, ATerm r_57, ATerm p_57, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm g_7 (ATerm n_57, ATerm o_57, ATerm m_57, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm h_7 (ATerm a_58, ATerm b_58, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm n_7 (ATerm v_57, ATerm w_57, ATerm t);
static ATerm o_7 (ATerm x_91 (ATerm), ATerm r_34, ATerm p_34, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm p_7 (ATerm f_58, ATerm g_58, ATerm t);
static ATerm q_7 (ATerm n_83 (ATerm), ATerm y_23, ATerm z_23, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_7 (ATerm k_57, ATerm l_57, ATerm j_57, ATerm t);
ATerm repeat_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_25 (ATerm l_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_107 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
static ATerm d_8 (ATerm y_22, ATerm z_22, ATerm t);
static ATerm e_8 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm g_8 (ATerm h_94 (ATerm), ATerm f_389, ATerm k_42, ATerm t);
static ATerm f_8 (ATerm c_42, ATerm d_42, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_79 (ATerm), ATerm t);
static ATerm k_40 (ATerm e_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_8 (ATerm i_42, ATerm t);
static ATerm i_8 (ATerm a_23, ATerm b_23, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_41 (ATerm u_40, ATerm t);
static ATerm w_41 (ATerm y_40, ATerm z_40, ATerm a_41, ATerm t);
static ATerm x_41 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm t);
static ATerm j_8 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm t);
static ATerm c_8 (ATerm d_57, ATerm e_57, ATerm t);
ATerm debug_1_0 (ATerm f_94 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_105 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_8 (ATerm s_49, ATerm t_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_8 (ATerm v_35, ATerm w_35, ATerm u_35, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_8 (ATerm d_33, ATerm e_33, ATerm t);
ATerm foldr_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm need_help_1_0 (ATerm z_79 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_8 (ATerm m_37, ATerm n_37, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_96 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm parse_options_1_0 (ATerm n_96 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm iowrap_3_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_u_9;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), c_0), term_v_9);
  m_0 = t;
  t = SSL_printnl(f_0, m_0);
  t = term_a_10;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm q_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_0 = NULL,s_0 = NULL;
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
      u_0 = ATgetArgument(t, 0);
      {
        ATerm b_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      q_0 = ATgetArgument(t, 0);
      {
        ATerm c_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  y_0 = t;
  t = SSL_mkterm(q_0, y_0);
  v_0 = t;
  t = (ATerm) ATempty;
  x_0 = t;
  t = SSL_mkterm(u_0, x_0);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, w_0);
  b_0 = t;
  t = term_d_10;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = d_7(s_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_t_9;
  return(t);
}
ATerm GreaterThan_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,h_1 = NULL,i_1 = NULL;
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
      e_1 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm j_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  k_1 = t;
  t = SSL_mkterm(d_1, k_1);
  f_1 = t;
  t = (ATerm) ATempty;
  j_1 = t;
  t = SSL_mkterm(e_1, j_1);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, g_1);
  h_1 = t;
  t = term_n_10;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
  t = d_7(i_1, h_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_t_9;
  return(t);
}
static ATerm d_7 (ATerm g_36, ATerm h_36, ATerm t)
{
  ATerm q_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
  t = m_8(g_36, h_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      {
        ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_1;
  return(t);
}
ATerm RightAssoc_0_0 (ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,p_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_2);
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      {
        ATerm q_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_2);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm r_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  e_2 = t;
  t = SSL_mkterm(w_1, e_2);
  a_2 = t;
  t = (ATerm) ATempty;
  d_2 = t;
  t = SSL_mkterm(y_1, d_2);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, c_2);
  p_1 = t;
  t = term_s_10;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, (ATerm) ATmakeAppl(sym__2, a_2, c_2));
  t = d_7(r_1, p_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_t_9;
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL;
  static ATerm c_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_2 != NULL) && (l_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_2 = ATgetFirst((ATermList) t);
        {
          ATerm u_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(u_10) != AT_LIST) || !(ATisEmpty(u_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(c_1, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, not_null(l_2));
  return(t);
}
ATerm Disambiguate_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL,f_2 = NULL,i_2 = NULL;
        t = SSL_explode_term(a_5);
        if(match_cons(t, sym__2))
          {
            x_1 = ATgetArgument(t, 0);
            {
              ATerm z_10 = ATgetArgument(t, 1);
              if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
                {
                  z_1 = ATgetFirst((ATermList) z_10);
                  {
                    ATerm a_11 = (ATerm) ATgetNext((ATermList) z_10);
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
        t = (ATerm) ATmakeAppl(sym__2, a_5, z_1);
        t = GreaterThan_0_0(t);
        t = z_1;
        t = t_0(t);
        f_2 = t;
        t = (ATerm) ATinsert(ATempty, f_2);
        i_2 = t;
        t = SSL_mkterm(x_1, i_2);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
          t = SSL_explode_term(a_5);
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm e_11 = ATgetArgument(t, 1);
                if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                  {
                    s_2 = ATgetFirst((ATermList) e_11);
                    r_2 = (ATerm) ATgetNext((ATermList) e_11);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = r_2;
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
            ATerm g_11 = t;
            int h_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, a_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = t_0(t);
                LocalPopChoice(h_11);
              }
            else
              {
                t = g_11;
              }
          }
          t_2 = t;
          t = u_2;
          {
            static ATerm n_1 (ATerm t)
            {
              ATerm a_4 = NULL;
              a_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_5, a_4);
              t = GreaterThan_0_0(t);
              t = a_4;
              t = t_0(t);
              return(t);
            }
            t = map_1_0(n_1, t);
          }
          v_2 = t;
          t = w_2;
          {
            ATerm j_11 = t;
            int k_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, a_5, w_2);
                t = LeftAssoc_0_0(t);
                t = w_2;
                t = t_0(t);
                LocalPopChoice(k_11);
              }
            else
              {
                t = j_11;
              }
          }
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_2, (ATerm) ATinsert(ATempty, i_3));
          t = conc_0_0(t);
          j_3 = t;
          t = (ATerm) ATinsert(CheckATermList(j_3), t_2);
          k_3 = t;
          t = SSL_mkterm(q_2, k_3);
        }
      }
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(x_107, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = x_107(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(m_5, n_5, t);
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(k_5, l_5, t);
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(h_5, j_5, t);
  return(t);
}
static ATerm e_7 (ATerm t_57, ATerm u_57, ATerm s_57, ATerm t)
{
  ATerm f_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
  t = q_7(t_1, t_57, u_57, t);
  t = (ATerm) ATmakeAppl(sym__2, u_57, t_57);
  t = conc_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_5, s_57);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(t_5, u_5, t);
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(r_5, s_5, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(b_6, c_6, t);
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(x_5, z_5, t);
  if(match_cons(t, sym__2))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(v_5, w_5, t);
  return(t);
}
static ATerm f_7 (ATerm q_57, ATerm r_57, ATerm p_57, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_57, r_57);
  t = q_7(v_1, r_57, r_57, t);
  t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
  t = q_7(b_2, q_57, r_57, t);
  t = (ATerm) ATmakeAppl(sym__2, r_57, q_57);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, p_57);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm f_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(f_6, i_6, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm j_6 = NULL,l_6 = NULL,m_6 = NULL,p_6 = NULL,q_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(q_6, t_6, t);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(m_6, p_6, t);
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(j_6, l_6, t);
  return(t);
}
static ATerm g_7 (ATerm n_57, ATerm o_57, ATerm m_57, ATerm t)
{
  ATerm d_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_57, o_57);
  t = q_7(j_2, o_57, o_57, t);
  t = (ATerm) ATmakeAppl(sym__2, n_57, o_57);
  t = q_7(k_2, n_57, o_57, t);
  t = (ATerm) ATmakeAppl(sym__2, o_57, n_57);
  t = conc_0_0(t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, m_57);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm h_7 (ATerm a_58, ATerm b_58, ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,s_7 = NULL,u_7 = NULL,a_8 = NULL,b_8 = NULL,o_8 = NULL;
  b_7 = t;
  t = (ATerm) ATempty;
  a_8 = t;
  t = SSL_mkterm(a_58, a_8);
  c_7 = t;
  t = (ATerm) ATempty;
  u_7 = t;
  t = SSL_mkterm(b_58, u_7);
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_7, s_7);
  b_8 = t;
  t = term_t_11;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_7, s_7), term_t_11);
  t = o_7(m_2, b_8, o_8, t);
  t = b_7;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm n_7 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,a_9 = NULL;
  s_8 = t;
  t = (ATerm) ATempty;
  x_8 = t;
  t = SSL_mkterm(v_57, x_8);
  t_8 = t;
  t = (ATerm) ATempty;
  w_8 = t;
  t = SSL_mkterm(w_57, w_8);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, v_8);
  y_8 = t;
  t = term_v_11;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_8, v_8), term_v_11);
  t = o_7(n_2, y_8, a_9, t);
  t = s_8;
  return(t);
}
static ATerm o_7 (ATerm x_91 (ATerm), ATerm r_34, ATerm p_34, ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  t = x_91(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_9, r_34, p_34);
  t = n_8(b_9, r_34, p_34, t);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = term_z_11;
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_9, term_z_11);
        t = m_8(b_9, i_9, t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_9 = ATgetFirst((ATermList) t);
      e_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_11;
  g_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), (ATerm) ATinsert(CheckATermList(c_9), r_34));
  h_9 = t;
  t = SSL_table_put(b_9, g_9, h_9);
  t = f_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
static ATerm p_7 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm j_9 = NULL,q_9 = NULL,r_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,g_10 = NULL;
  j_9 = t;
  t = (ATerm) ATempty;
  y_9 = t;
  t = SSL_mkterm(f_58, y_9);
  q_9 = t;
  t = (ATerm) ATempty;
  x_9 = t;
  t = SSL_mkterm(g_58, x_9);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
  z_9 = t;
  t = term_d_12;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_9, r_9), term_d_12);
  t = o_7(p_2, z_9, g_10, t);
  t = j_9;
  return(t);
}
static ATerm q_7 (ATerm n_83 (ATerm), ATerm y_23, ATerm z_23, ATerm t)
{
  static ATerm x_2 (ATerm t)
  {
    ATerm h_10 = NULL;
    static ATerm g_3 (ATerm t)
    {
      ATerm l_10 = NULL;
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), l_10);
      t = n_83(t);
      return(t);
    }
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = z_23;
    t = map_1_0(g_3, t);
    return(t);
  }
  t = y_23;
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(b_11, c_11, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(m_11, n_11, t);
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(i_11, l_11, t);
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(d_11, f_11, t);
  return(t);
}
static ATerm r_7 (ATerm k_57, ATerm l_57, ATerm j_57, ATerm t)
{
  ATerm m_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_57, l_57);
  t = q_7(h_3, l_57, l_57, t);
  t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
  t = q_7(l_3, k_57, l_57, t);
  t = (ATerm) ATmakeAppl(sym__2, l_57, k_57);
  t = conc_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, j_57);
  return(t);
}
ATerm repeat_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  static ATerm r_11 (ATerm t)
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_81(t);
        t = r_11(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = f_81(t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm s_11 = NULL,c_12 = NULL,h_12 = NULL,j_12 = NULL,o_12 = NULL,b_1 = NULL;
  o_12 = t;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  s_11 = t;
  t = h_12;
  {
    static ATerm m_3 (ATerm t)
    {
      if((c_12 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(m_3, t);
  }
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, j_12);
  b_1 = t;
  t = SSLsetAnnotations(b_1, s_11);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm q_12 = NULL,f_4 = NULL,j_4 = NULL;
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_13), term_r_13), term_q_13), term_o_13), term_n_13), term_l_13), term_k_13), term_j_13), term_h_13), term_g_13), term_d_13), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_r_12), term_p_12), term_m_12), term_l_12), term_i_12), term_g_12));
  t = member_0_0(t);
  t = SSL_explode_string(q_12);
  j_4 = t;
  t = (ATerm) ATinsert(CheckATermList(j_4), term_u_13);
  f_4 = t;
  t = SSL_implode_string(f_4);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,s_1 = NULL;
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_14) != AT_INT) || (ATgetInt((ATermInt) b_14) != 34)))
                _fail(t);
              c_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_13), term_e_14), term_c_14);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm e_13 = NULL,f_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_13 = ATgetFirst((ATermList) t);
                f_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_13), term_c_14), term_c_14);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_13), term_h_14), term_c_14);
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
      s_1 = t;
      t = SSLsetAnnotations(s_1, x_12);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
        i_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_14 = ATgetFirst((ATermList) t);
            g_14 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm p_4 = NULL,s_4 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(i_14);
              p_4 = t;
              t = g_14;
              t = escape_chars_0_0(t);
              s_4 = t;
              t = (ATerm) ATinsert(CheckATermList(s_4), f_14);
              u_1 = t;
              t = SSLsetAnnotations(u_1, p_4);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_14;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm p_20 = NULL,y_4 = NULL,i_5 = NULL;
        t = SSL_explode_string(l_20);
        {
          ATerm k_14 = t;
          if((PushChoice() == 0))
            {
              ATerm o_5 = NULL,y_5 = NULL;
              o_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(l_14) != AT_INT) || (ATgetInt((ATermInt) l_14) != 34)))
                    _fail(t);
                  y_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_5;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = o_5;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_14;
            }
        }
        t = escape_chars_0_0(t);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_5), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
        t = conc_0_0(t);
        y_4 = t;
        t = SSL_implode_string(y_4);
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, p_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          l_20 = ATgetArgument(t, 0);
          {
            ATerm k_6 = NULL;
            t = SSL_real_to_string(l_20);
            k_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, k_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              l_20 = ATgetArgument(t, 0);
              {
                ATerm v_6 = NULL;
                t = SSL_int_to_string(l_20);
                v_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, v_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  l_20 = ATgetArgument(t, 0);
                  m_20 = ATgetArgument(t, 1);
                  {
                    ATerm k_7 = NULL;
                    t = m_20;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        k_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, l_20, k_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      l_20 = ATgetArgument(t, 0);
                      {
                        ATerm x_7 = NULL,z_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(k_20);
                        x_7 = t;
                        t = l_20;
                        t = AddLeadingPrime_0_0(t);
                        z_7 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, x_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          l_20 = ATgetArgument(t, 0);
                          m_20 = ATgetArgument(t, 1);
                          i_20 = ATgetArgument(t, 2);
                          {
                            ATerm l_9 = NULL,p_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(k_20);
                            l_9 = t;
                            t = l_20;
                            t = AddLeadingPrime_0_0(t);
                            p_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, p_9, m_20, i_20);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, l_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              l_20 = ATgetArgument(t, 0);
                              m_20 = ATgetArgument(t, 1);
                              i_20 = ATgetArgument(t, 2);
                              {
                                ATerm e_10 = NULL,k_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(k_20);
                                e_10 = t;
                                t = l_20;
                                t = AddLeadingPrime_0_0(t);
                                k_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, k_10, m_20, i_20);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, e_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  l_20 = ATgetArgument(t, 0);
                                  m_20 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_10 = NULL,y_10 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(k_20);
                                    v_10 = t;
                                    t = l_20;
                                    t = AddLeadingPrime_0_0(t);
                                    y_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, y_10, m_20);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, v_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      l_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm o_11 = NULL,q_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(k_20);
                                        o_11 = t;
                                        t = l_20;
                                        t = AddLeadingPrime_0_0(t);
                                        q_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, o_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          l_20 = ATgetArgument(t, 0);
                                          {
                                            ATerm y_11 = NULL,a_12 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(k_20);
                                            y_11 = t;
                                            t = l_20;
                                            t = AddLeadingPrime_0_0(t);
                                            a_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, a_12);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, y_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              l_20 = ATgetArgument(t, 0);
                                              m_20 = ATgetArgument(t, 1);
                                              {
                                                ATerm k_12 = NULL,n_12 = NULL,e_3 = NULL;
                                                t = SSLgetAnnotations(k_20);
                                                k_12 = t;
                                                t = l_20;
                                                t = AddLeadingPrime_0_0(t);
                                                n_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_12, m_20);
                                                e_3 = t;
                                                t = SSLsetAnnotations(e_3, k_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm i_13 = NULL,m_13 = NULL,f_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  l_20 = ATgetArgument(t, 0);
                                                  m_20 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(k_20);
                                              i_13 = t;
                                              t = l_20;
                                              t = AddLeadingPrime_0_0(t);
                                              m_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, m_13, m_20);
                                              f_3 = t;
                                              t = SSLsetAnnotations(f_3, i_13);
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
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  static ATerm d_25 (ATerm t)
  {
    ATerm r_24 = NULL,a_25 = NULL,c_25 = NULL;
    c_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_24 = ATgetFirst((ATermList) t);
        a_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_14 = NULL,j_14 = NULL,w_3 = NULL;
          t = SSLgetAnnotations(c_25);
          d_14 = t;
          t = a_25;
          t = d_25(t);
          j_14 = t;
          t = (ATerm) ATinsert(CheckATermList(j_14), r_24);
          w_3 = t;
          t = SSLsetAnnotations(w_3, d_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_25;
        t = j_84(t);
      }
    return(t);
  }
  t = d_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,o_23 = NULL;
  l_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_23;
    }
  else
    {
      static ATerm n_3 (ATerm t)
      {
        t = not_null(o_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_23 = ATgetFirst((ATermList) t);
          if(((o_23 != NULL) && (o_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
static ATerm y_25 (ATerm l_25, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_explode_term(l_25);
  if(match_cons(t, sym__2))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_3 (ATerm t)
            {
              t = q_25;
              return(t);
            }
            t = p_25;
            t = at_end_1_0(o_3, t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = y_25(r_25, t);
          }
      }
    }
  else
    {
      t = y_25(r_25, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_26 = ATgetFirst((ATermList) t);
      o_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_26;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_26;
    }
  else
    {
      t = o_26;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm v_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,g_27 = NULL,k_27 = NULL,n_27 = NULL,p_27 = NULL,s_27 = NULL,y_3 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  c_27 = t;
  t = SSL_explode_string(k_27);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, n_27);
  y_3 = t;
  t = SSLsetAnnotations(y_3, c_27);
  p_27 = t;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((v_26 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      a_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_27;
  t = last_0_0(t);
  if((v_26 != t))
    {
      _fail(t);
    }
  t = p_27;
  return(t);
}
ATerm at_last_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  static ATerm e_29 (ATerm t)
  {
    ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
    z_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_29 = ATgetFirst((ATermList) t);
        b_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(z_28);
          v_14 = t;
          t = b_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_29), a_29);
          b_4 = t;
          t = SSLsetAnnotations(b_4, v_14);
          t = u_84(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = p_14;
          {
            ATerm f_15 = NULL,i_15 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(z_28);
            f_15 = t;
            t = b_29;
            t = e_29(t);
            i_15 = t;
            t = (ATerm) ATinsert(CheckATermList(i_15), a_29);
            h_4 = t;
            t = SSLsetAnnotations(h_4, f_15);
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
      ATerm h_29 = NULL,i_29 = NULL;
      static ATerm p_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((h_29 != NULL) && (h_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              h_29 = ATgetFirst((ATermList) t);
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
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_29, not_null(h_29));
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm j_29 = NULL,m_29 = NULL;
        static ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((j_29 != NULL) && (j_29 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                j_29 = ATgetFirst((ATermList) t);
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
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_29, not_null(j_29));
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
                          ATerm i_30 = NULL;
                          t = d_30;
                          t = implode_cons_0_0(t);
                          i_30 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_30), b_30);
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
  ATerm x_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,i_34 = NULL,k_34 = NULL;
  e_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      i_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      t = i_34;
      if(match_string(t, "Cons"))
        {
          ATerm o_15 = NULL,t_15 = NULL,h_16 = NULL,j_16 = NULL;
          t = k_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_14 = ATgetFirst((ATermList) t);
              x_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_15 = ATgetFirst((ATermList) t);
              c_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_34;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              h_16 = ATgetArgument(t, 0);
              j_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_16;
          if(match_cons(t, sym_Op_2))
            {
              o_15 = ATgetArgument(t, 0);
              t_15 = ATgetArgument(t, 1);
              t = t_15;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_15;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, h_16);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, j_16);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, j_16);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, h_16, j_16);
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
          i_34 = ATgetArgument(t, 0);
          k_34 = ATgetArgument(t, 1);
          d_34 = ATgetArgument(t, 2);
          t = d_34;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, i_34, k_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              i_34 = ATgetArgument(t, 0);
              k_34 = ATgetArgument(t, 1);
              d_34 = ATgetArgument(t, 2);
              t = d_34;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, i_34, k_34);
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  i_34 = ATgetArgument(t, 0);
                  k_34 = ATgetArgument(t, 1);
                  d_34 = ATgetArgument(t, 2);
                  {
                    ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL;
                    t = i_34;
                    {
                      ATerm c_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm a_18 = NULL;
                          a_18 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_e_14, a_18);
                          t = is_quoted_0_0(t);
                          t = a_18;
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = c_15;
                        }
                    }
                    t = SSL_explode_string(i_34);
                    s_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_17), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                    t = conc_0_0(t);
                    u_17 = t;
                    t = SSL_implode_string(u_17);
                    r_17 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, r_17, k_34, d_34);
                  }
                }
              else
                {
                  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
                  if(match_cons(t, sym_Prim_2))
                    {
                      i_34 = ATgetArgument(t, 0);
                      k_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_34;
                  {
                    ATerm d_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm w_18 = NULL;
                        w_18 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_e_14, w_18);
                        t = is_quoted_0_0(t);
                        t = w_18;
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = d_15;
                      }
                  }
                  t = SSL_explode_string(i_34);
                  t_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_18), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                  t = conc_0_0(t);
                  u_18 = t;
                  t = SSL_implode_string(u_18);
                  s_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, s_18, k_34);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(w_107, t);
    return(t);
  }
  t = w_107(t);
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  w_36 = t;
  if(match_cons(t, sym__2))
    {
      x_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      c_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_36;
  if(match_cons(t, sym__2))
    {
      a_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym_Some_1))
    {
      v_36 = ATgetArgument(t, 0);
      t = v_36;
      if(match_string(t, "left"))
        {
          t = w_36;
          t = r_7(x_36, b_37, c_37, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = w_36;
              t = g_7(x_36, b_37, c_37, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = w_36;
              t = f_7(x_36, b_37, c_37, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = w_36;
      t = e_7(x_36, b_37, c_37, t);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(x_3, t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, s_37);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm s_35 = NULL,c_36 = NULL;
  c_36 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL;
        t = SSL_explode_term(c_36);
        if(match_cons(t, sym__2))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_15 = ATgetArgument(t, 1);
              if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
                {
                  r_19 = ATgetFirst((ATermList) n_15);
                  {
                    ATerm q_15 = (ATerm) ATgetNext((ATermList) n_15);
                    if(((ATgetType(q_15) != AT_LIST) || !(ATisEmpty(q_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_19;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = c_36;
      }
  }
  t = topdown_1_0(s_3, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
      n_36 = t;
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
                ATerm s_15 = t;
                int v_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_36 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_36, l_36);
                    t = t_3(t);
                    r_36 = t;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, r_36, m_36);
                    t = t_3(t);
                    LocalPopChoice(v_15);
                  }
                else
                  {
                    t = s_15;
                    t = n_36;
                  }
              }
            }
          else
            {
              t = n_36;
            }
        }
      else
        {
          t = n_36;
        }
      return(t);
    }
    t = bottomup_1_0(t_3, t);
  }
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, term_d_16), term_c_16))), (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATempty, term_a_16))));
  t = repeat_2_0(u_3, _id, t);
  t = s_35;
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm d_8 (ATerm y_22, ATerm z_22, ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_fputc(y_22, z_22);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
  return(t);
}
static ATerm e_8 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm y_37 = NULL;
  t = SSL_write_term_to_stream_text(g_42, h_42);
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_37);
  return(t);
}
static ATerm g_8 (ATerm h_94 (ATerm), ATerm f_389, ATerm k_42, ATerm t)
{
  ATerm z_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_389, term_e_16);
  t = j_8(t);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_37, k_42);
  t = h_94(t);
  t = fclose_0_0(t);
  t = k_42;
  return(t);
}
static ATerm f_8 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm a_38 = NULL;
  t = SSL_write_term_to_stream_baf(c_42, d_42);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_38);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym_Stream_1))
        {
          v_20 = ATgetArgument(f_16, 0);
        }
      else
        _fail(t);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(v_20, w_20, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if(match_cons(g_16, sym_Stream_1))
        {
          k_21 = ATgetArgument(g_16, 0);
        }
      else
        _fail(t);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(k_21, l_21, t);
  h_21 = t;
  t = term_i_16;
  i_21 = t;
  t = h_21;
  if(match_cons(t, sym_Stream_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, h_21);
  t = d_8(i_21, j_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,o_39 = NULL,p_39 = NULL,u_4 = NULL,o_4 = NULL;
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
  o_4 = t;
  t = SSLsetAnnotations(o_4, l_38);
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
  u_4 = t;
  t = SSLsetAnnotations(u_4, g_38);
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
        ATerm j_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,z_4 = NULL;
        t = SSLgetAnnotations(k_38);
        j_20 = t;
        t = o_39;
        t = fetch_1_0(c_4, t);
        r_20 = t;
        t = p_39;
        if(match_cons(t, sym__2))
          {
            t_20 = ATgetArgument(t, 0);
            u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_8(d_4, t_20, u_20, t);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
        z_4 = t;
        t = SSLsetAnnotations(z_4, j_20);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm b_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(k_38);
          b_21 = t;
          t = p_39;
          if(match_cons(t, sym__2))
            {
              f_21 = ATgetArgument(t, 0);
              g_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_8(e_4, f_21, g_21, t);
          e_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_39, e_21);
          c_5 = t;
          t = SSLsetAnnotations(c_5, b_21);
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
ATerm apply_strategy_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  w_39 = t;
  t = dtime_0_0(t);
  t = w_39;
  t = b_79(t);
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
static ATerm h_8 (ATerm i_42, ATerm t)
{
  t = SSL_read_term_from_stream(i_42);
  return(t);
}
static ATerm i_8 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_fopen(a_23, b_23);
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
static ATerm v_41 (ATerm u_40, ATerm t)
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
static ATerm w_41 (ATerm y_40, ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,g_41 = NULL,p_13 = NULL;
  t = SSLgetAnnotations(a_41);
  d_41 = t;
  t = y_40;
  if(match_cons(t, sym_Path_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_41, z_40);
  p_13 = t;
  t = SSLsetAnnotations(p_13, d_41);
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(b_41, c_41, t);
  return(t);
}
static ATerm x_41 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,q_41 = NULL,t_13 = NULL;
  t = SSLgetAnnotations(k_41);
  n_41 = t;
  t = SSL_is_string(i_41);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, j_41);
  t_13 = t;
  t = SSLsetAnnotations(t_13, n_41);
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(l_41, m_41, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_41(s_41, t);
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
                  t = w_41(t_41, u_41, s_41, t);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  t = x_41(t_41, u_41, s_41, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_41(s_41, t);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL;
      b_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_42, term_b_17);
      t = j_8(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = debug_1_0(g_4, t);
      _fail(t);
    }
  z_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(a_42, t);
  y_41 = t;
  t = z_41;
  t = fclose_0_0(t);
  t = y_41;
  return(t);
}
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  static ATerm g_43 (ATerm t)
  {
    ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
    d_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_43 = ATgetFirst((ATermList) t);
        f_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_22 = NULL,e_22 = NULL,z_13 = NULL;
          t = SSLgetAnnotations(d_43);
          b_22 = t;
          t = e_43;
          t = d_84(t);
          e_22 = t;
          t = (ATerm) ATinsert(CheckATermList(f_43), e_22);
          z_13 = t;
          t = SSLsetAnnotations(z_13, b_22);
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm t_22 = NULL,c_23 = NULL,a_14 = NULL;
            t = SSLgetAnnotations(d_43);
            t_22 = t;
            t = f_43;
            t = g_43(t);
            c_23 = t;
            t = (ATerm) ATinsert(CheckATermList(c_23), e_43);
            a_14 = t;
            t = SSLsetAnnotations(a_14, t_22);
          }
        }
    }
    return(t);
  }
  t = g_43(t);
  return(t);
}
static ATerm c_8 (ATerm d_57, ATerm e_57, ATerm t)
{
  t = SSL_strcat(d_57, e_57);
  return(t);
}
ATerm debug_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  o_43 = t;
  t = f_94(t);
  p_43 = t;
  t = term_u_9;
  q_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_43), p_43);
  r_43 = t;
  t = SSL_printnl(q_43, r_43);
  t = o_43;
  return(t);
}
static ATerm i_4 (ATerm t)
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
static ATerm k_4 (ATerm t)
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
            t = map_1_0(i_4, t);
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
                            t = debug_1_0(k_4, t);
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
                      t = c_8(l_44, m_44, t);
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
  t = m_8(r_44, q_44, t);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL,t_44 = NULL;
        t = eval_config_0_0(t);
        s_44 = t;
        t = term_n_17;
        t_44 = t;
        t = SSL_table_put(t_44, q_44, s_44);
        t = s_44;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        z_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_44, term_w_17);
        t = geq_0_0(t);
        t = x_44;
        t = s_105(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = q_17;
        t = x_44;
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
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
static ATerm m_4 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  t = SSL_string_to_int(d_45);
  e_45 = t;
  t = term_x_17;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, e_45);
  t = p_8(f_45, e_45, t);
  t = d_45;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
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
  t = term_z_17;
  j_45 = t;
  t = term_b_18;
  t = p_8(i_45, j_45, t);
  t = term_c_18;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  t = SSL_string_to_int(k_45);
  l_45 = t;
  t = term_v_17;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, l_45);
  t = p_8(m_45, l_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_45);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm b_5 (ATerm t)
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
  t = term_t_9;
  o_45 = t;
  t = term_g_18;
  t = p_8(n_45, o_45, t);
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
      t = Option_3_0(q_4, r_4, t_4, t);
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
            t = ArgOption_3_0(v_4, w_4, x_4, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = Option_3_0(b_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm p_8 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm p_45 = NULL;
  t = term_n_17;
  p_45 = t;
  t = SSL_table_put(p_45, s_49, t_49);
  t = (ATerm) ATmakeAppl(sym__3, term_n_17, s_49, t_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
      t = term_t_9;
      t = i_0(t);
      u_45 = t;
      t = term_n_18;
      v_45 = t;
      t = term_o_18;
      w_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, u_45);
      t = n_8(v_45, w_45, u_45, t);
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
      t = d_0(t);
      t = term_t_9;
      t = g_0(t);
      z_45 = t;
      t = (ATerm) ATinsert(CheckATermList(t_45), z_45);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
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
  t = term_p_18;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, c_46);
  t = p_8(d_46, c_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_46);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, q_5, a_6, t);
  return(t);
}
static ATerm n_8 (ATerm v_35, ATerm w_35, ATerm u_35, ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
  {
    ATerm r_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
        t = m_8(v_35, w_35, t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = r_18;
        t = (ATerm) ATempty;
      }
  }
  g_46 = t;
  t = (ATerm) ATinsert(CheckATermList(g_46), u_35);
  h_46 = t;
  t = SSL_table_put(v_35, w_35, h_46);
  t = f_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
      t = term_t_9;
      t = r_0(t);
      s_46 = t;
      t = term_n_18;
      t_46 = t;
      t = term_o_18;
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, s_46);
      t = n_8(t_46, u_46, s_46, t);
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
      t = o_0(t);
      t = q_46;
      t = p_0(t);
      y_46 = t;
      t = (ATerm) ATinsert(CheckATermList(r_46), y_46);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
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
static ATerm g_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  b_47 = t;
  t = term_z_18;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, b_47);
  t = p_8(c_47, b_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_47);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, g_6, h_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  t = whoami_0_0(t);
  d_47 = t;
  t = term_u_9;
  f_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_19), d_47);
  g_47 = t;
  t = SSL_printnl(f_47, g_47);
  t = term_a_10;
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
static ATerm k_8 (ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_33, e_33);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = SSL_addr(d_33, e_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_47;
      t = l_90(t);
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
      t = foldr_2_0(l_90, m_90, t);
      n_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_47, n_47);
      t = m_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_z_17;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(g_24, h_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_47 = NULL,a_24 = NULL,b_24 = NULL;
  t = times_0_0(t);
  b_24 = t;
  t = SSL_explode_term(b_24);
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_24;
  t = foldr_2_0(n_6, o_6, t);
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
ATerm if_verbose1_1_0 (ATerm r_105 (ATerm), ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, j_48, term_a_10);
        t = geq_0_0(t);
        t = h_48;
        t = r_105(t);
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
static ATerm r_6 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = run_time_0_0(t);
  l_48 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  m_48 = t;
  t = term_u_9;
  o_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_19), l_48), term_m_19), m_48);
  p_48 = t;
  t = SSL_printnl(o_48, p_48);
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_19), l_48), term_m_19), m_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_17;
  q_48 = t;
  t = SSL_exit(q_48);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  z_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm y_24 = NULL,q_14 = NULL;
            t = SSLgetAnnotations(z_48);
            y_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_48);
            q_14 = t;
            t = SSLsetAnnotations(q_14, y_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_19;
      t = get_config_0_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = fetch_1_0(s_6, t);
    }
  t = z_79(t);
  return(t);
}
ATerm map_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  static ATerm p_49 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
    m_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_49;
      }
    else
      {
        ATerm k_25 = NULL,t_25 = NULL,u_25 = NULL,p_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_49 = ATgetFirst((ATermList) t);
            o_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_49);
        k_25 = t;
        t = n_49;
        t = t_83(t);
        t_25 = t;
        t = o_49;
        t = p_49(t);
        u_25 = t;
        t = (ATerm) ATinsert(CheckATermList(u_25), t_25);
        p_15 = t;
        t = SSLsetAnnotations(p_15, k_25);
      }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_49 = ATgetFirst((ATermList) t);
      v_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_49 = NULL,a_50 = NULL;
        static ATerm u_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_49)), not_null(a_50));
          return(t);
        }
        t = v_49;
        t = n_0(t);
        if(((z_49 != NULL) && (z_49 != t)))
          _fail(t);
        else
          z_49 = t;
        t = u_49;
        t = k_0(t);
        if(((a_50 != NULL) && (a_50 != t)))
          _fail(t);
        else
          a_50 = t;
        t = v_49;
        t = reverse_acc_2_0(k_0, u_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_9;
      t = n_0(t);
    }
  return(t);
}
static ATerm m_8 (ATerm m_37, ATerm n_37, ATerm t)
{
  t = SSL_table_get(m_37, n_37);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,r_15 = NULL;
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
  r_15 = t;
  t = SSLsetAnnotations(r_15, j_50);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
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
      t = fetch_1_0(w_6, t);
    }
  t = term_v_19;
  t = echo_0_0(t);
  t = term_n_18;
  h_50 = t;
  t = term_o_18;
  i_50 = t;
  t = term_w_19;
  t = m_8(h_50, i_50, t);
  t = reverse_acc_2_0(_id, x_6, t);
  t = map_1_0(y_6, t);
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
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  t = term_b_20;
  v_50 = t;
  t = term_t_9;
  w_50 = t;
  t = term_c_20;
  t = p_8(v_50, w_50, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  t = term_b_20;
  z_50 = t;
  t = term_t_9;
  a_51 = t;
  t = term_c_20;
  t = p_8(z_50, a_51, t);
  t = term_e_20;
  x_50 = t;
  t = term_t_9;
  y_50 = t;
  t = term_f_20;
  t = p_8(x_50, y_50, t);
  t = term_g_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_6, a_7, i_7, t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = Option_3_0(j_7, l_7, m_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,u_15 = NULL;
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
  t = r_73(t);
  e_51 = t;
  t = d_51;
  t = s_73(t);
  f_51 = t;
  t = (ATerm) ATinsert(CheckATermList(f_51), e_51);
  u_15 = t;
  t = SSLsetAnnotations(u_15, b_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL,x_15 = NULL;
  l_51 = t;
  {
    ATerm q_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_20;
        t = o_96(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = q_20;
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
  t = p_8(r_51, n_51, t);
  t = o_51;
  {
    static ATerm b_52 (ATerm t)
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_51 = NULL;
              u_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_51;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = o_96(t);
              t = Cons_2_0(_id, b_52, t);
            }
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
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
static ATerm v_7 (ATerm t)
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
static ATerm w_7 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  t = term_q_19;
  o_52 = t;
  t = term_t_9;
  p_52 = t;
  t = term_m_21;
  t = p_8(o_52, p_52, t);
  t = term_n_21;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_96 (ATerm), ATerm t)
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
    static ATerm t_7 (ATerm t)
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_96(t);
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
                t = Option_3_0(v_7, w_7, y_7, t);
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
    t = parse_options_p__1_0(t_7, t);
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
              ATerm e_26 = NULL;
              t = w_52;
              {
                ATerm x_21 = t;
                int y_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_19;
                    t = get_config_0_0(t);
                    LocalPopChoice(y_21);
                  }
                else
                  {
                    t = x_21;
                    t = fetch_1_0(l_8, t);
                  }
              }
              t = w_52;
              t = default_system_usage_0_0(t);
              t = term_z_17;
              e_26 = t;
              t = SSL_exit(e_26);
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
                t = term_z_17;
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
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
              static ATerm q_8 (ATerm t)
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
              t = fetch_1_0(q_8, t);
              t = term_u_9;
              y_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), term_c_22);
              z_52 = t;
              t = SSL_printnl(y_52, z_52);
              t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_52)), term_c_22));
              t = default_system_usage_0_0(t);
              t = term_a_10;
              x_52 = t;
              t = SSL_exit(x_52);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
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
ATerm option_wrap_4_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  t = parse_options_1_0(b_80, t);
  h_53 = t;
  t = term_d_22;
  k_53 = t;
  t = SSL_table_create(k_53);
  t = term_d_22;
  i_53 = t;
  t = term_f_22;
  j_53 = t;
  t = SSL_table_put(i_53, j_53, h_53);
  t = h_53;
  t = d_80(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_80, t);
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
              t = e_80(t);
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
static ATerm u_8 (ATerm t)
{
  t = if_verbose2_1_0(n_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  t = term_k_22;
  l_53 = t;
  t = term_t_9;
  m_53 = t;
  t = term_l_22;
  t = p_8(l_53, m_53, t);
  t = term_m_22;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  t = term_c_19;
  t = get_config_0_0(t);
  o_53 = t;
  t = term_u_9;
  p_53 = t;
  t = (ATerm) ATinsert(ATempty, o_53);
  q_53 = t;
  t = SSL_printnl(p_53, q_53);
  t = n_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_79(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              {
                ATerm s_22 = t;
                int u_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(d_9, k_9, m_9, t);
                          LocalPopChoice(w_22);
                        }
                      else
                        {
                          t = v_22;
                          {
                            ATerm x_22 = t;
                            int d_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(d_23);
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
  static ATerm z_8 (ATerm t)
  {
    ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
    s_53 = t;
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_9 (ATerm t)
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
          t = fetch_1_0(o_9, t);
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
    t = apply_strategy_1_0(k_79, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_8, m_79, u_8, z_8, t);
  return(t);
}
static ATerm s_9 (ATerm t)
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
  t = iowrap_3_0(s_9, _fail, default_usage_0_0, t);
  return(t);
}
