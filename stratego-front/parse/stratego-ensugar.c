#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ListTail_2;
Symbol sym_List_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_Seq_2;
Symbol sym_Id_0;
Symbol sym_ParenStrat_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_3;
Symbol sym_OpDecl_2;
Symbol sym_StratRule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_RDef_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Hashtable_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
static void init_module_constructors (void)
{
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
}
ATerm term_c_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_e_15;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_b_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Some_1, term_u_15);
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
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_b_9);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_r_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_j_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_d_18);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_9);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_b_9);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_b_9);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, (ATerm) ATempty);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_a_20);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_b_9);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
static ATerm i_7 (ATerm x_38, ATerm y_38, ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm Disambiguate_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm c_130 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm j_7 (ATerm n_75, ATerm o_75, ATerm m_75, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm k_7 (ATerm k_75, ATerm l_75, ATerm j_75, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_7 (ATerm h_75, ATerm i_75, ATerm g_75, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm m_7 (ATerm u_75, ATerm v_75, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_7 (ATerm p_75, ATerm q_75, ATerm t);
static ATerm t_7 (ATerm l_112 (ATerm), ATerm i_37, ATerm g_37, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_7 (ATerm z_75, ATerm a_76, ATerm t);
static ATerm v_7 (ATerm f_103 (ATerm), ATerm f_26, ATerm g_26, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm w_7 (ATerm e_75, ATerm f_75, ATerm d_75, ATerm t);
ATerm repeat_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm v_129 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_26 (ATerm t_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_130 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
static ATerm i_8 (ATerm e_25, ATerm f_25, ATerm t);
static ATerm j_8 (ATerm k_59, ATerm l_59, ATerm t);
static ATerm l_8 (ATerm o_117 (ATerm), ATerm x_525, ATerm q_59, ATerm t);
static ATerm k_8 (ATerm g_59, ATerm h_59, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_98 (ATerm), ATerm t);
static ATerm k_42 (ATerm e_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_8 (ATerm m_59, ATerm t);
static ATerm n_8 (ATerm u_74, ATerm v_74, ATerm t);
static ATerm o_8 (ATerm g_25, ATerm h_25, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_44 (ATerm u_42, ATerm t);
static ATerm g_44 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t);
static ATerm h_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t);
static ATerm p_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_103 (ATerm), ATerm t);
static ATerm u_8 (ATerm f_40, ATerm g_40, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_127 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_8 (ATerm o_67, ATerm p_67, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_8 (ATerm m_38, ATerm n_38, ATerm l_38, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_8 (ATerm u_35, ATerm v_35, ATerm t);
ATerm foldr_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_127 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm need_help_1_0 (ATerm m_99 (ATerm), ATerm t);
static ATerm y_8 (ATerm e_43, ATerm f_43, ATerm g_43, ATerm t);
static ATerm z_8 (ATerm h_43, ATerm i_43, ATerm t);
ATerm lookup_table_0_1 (ATerm y_39, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_43, ATerm n_43, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_8 (ATerm j_43, ATerm k_43, ATerm t);
static ATerm t_8 (ATerm o_43, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_119 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm parse_options_1_0 (ATerm u_119 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm iowrap_3_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_e_9;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), c_0), term_n_9);
  n_0 = t;
  t = SSL_printnl(i_0, n_0);
  t = term_w_9;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm LeftAssoc_0_0 (ATerm t)
{
  ATerm s_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_0 = NULL,t_0 = NULL;
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
        ATerm x_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm z_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  y_0 = t;
  t = SSL_mkterm(s_0, y_0);
  v_0 = t;
  t = (ATerm) ATempty;
  x_0 = t;
  t = SSL_mkterm(u_0, x_0);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, w_0);
  b_0 = t;
  t = term_c_10;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = i_7(t_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_10) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_9;
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
        ATerm e_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm f_10 = ATgetArgument(t, 1);
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
  t = term_g_10;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
  t = i_7(i_1, h_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_9;
  return(t);
}
static ATerm i_7 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm q_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
  t = u_8(x_38, y_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      {
        ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm l_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_2);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm n_10 = ATgetArgument(t, 1);
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
  t = term_o_10;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, (ATerm) ATmakeAppl(sym__2, a_2, c_2));
  t = i_7(r_1, p_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_10) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_b_9;
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL;
  static ATerm c_1 (ATerm t);
  static ATerm c_1 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_2 != NULL) && (l_2 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_2 = ATgetFirst((ATermList) t);
        {
          ATerm t_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(t_10) != AT_LIST) || !(ATisEmpty(t_10))))
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
ATerm Disambiguate_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL,f_2 = NULL,i_2 = NULL;
        t = SSL_explode_term(d_5);
        if(match_cons(t, sym__2))
          {
            x_1 = ATgetArgument(t, 0);
            {
              ATerm y_10 = ATgetArgument(t, 1);
              if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
                {
                  z_1 = ATgetFirst((ATermList) y_10);
                  {
                    ATerm z_10 = (ATerm) ATgetNext((ATermList) y_10);
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
        t = (ATerm) ATmakeAppl(sym__2, d_5, z_1);
        t = GreaterThan_0_0(t);
        t = z_1;
        t = r_0(t);
        f_2 = t;
        t = (ATerm) ATinsert(ATempty, f_2);
        i_2 = t;
        t = SSL_mkterm(x_1, i_2);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        {
          ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
          t = SSL_explode_term(d_5);
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm a_11 = ATgetArgument(t, 1);
                if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
                  {
                    s_2 = ATgetFirst((ATermList) a_11);
                    r_2 = (ATerm) ATgetNext((ATermList) a_11);
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
            ATerm b_11 = t;
            int c_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = r_0(t);
                LocalPopChoice(c_11);
              }
            else
              {
                t = b_11;
              }
          }
          t_2 = t;
          t = u_2;
          {
            static ATerm n_1 (ATerm t);
            static ATerm n_1 (ATerm t)
            {
              ATerm w_3 = NULL;
              w_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_5, w_3);
              t = GreaterThan_0_0(t);
              t = w_3;
              t = r_0(t);
              return(t);
            }
            t = map_1_0(n_1, t);
          }
          v_2 = t;
          t = w_2;
          {
            ATerm e_11 = t;
            int f_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, w_2);
                t = LeftAssoc_0_0(t);
                t = w_2;
                t = r_0(t);
                LocalPopChoice(f_11);
              }
            else
              {
                t = e_11;
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
ATerm bottomup_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(c_130, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = c_130(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(n_5, o_5, t);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(l_5, m_5, t);
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(j_5, k_5, t);
  return(t);
}
static ATerm j_7 (ATerm n_75, ATerm o_75, ATerm m_75, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_75, o_75);
  t = v_7(t_1, n_75, o_75, t);
  t = (ATerm) ATmakeAppl(sym__2, o_75, n_75);
  t = conc_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, m_75);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(x_5, y_5, t);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(s_5, t_5, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(f_6, g_6, t);
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(b_6, c_6, t);
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(z_5, a_6, t);
  return(t);
}
static ATerm k_7 (ATerm k_75, ATerm l_75, ATerm j_75, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_75, l_75);
  t = v_7(v_1, l_75, l_75, t);
  t = (ATerm) ATmakeAppl(sym__2, k_75, l_75);
  t = v_7(b_2, k_75, l_75, t);
  t = (ATerm) ATmakeAppl(sym__2, l_75, k_75);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, j_75);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(m_6, n_6, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm r_6 = NULL,w_6 = NULL,x_6 = NULL,f_7 = NULL,g_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(g_7, n_7, t);
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(x_6, f_7, t);
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(r_6, w_6, t);
  return(t);
}
static ATerm l_7 (ATerm h_75, ATerm i_75, ATerm g_75, ATerm t)
{
  ATerm i_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_75, i_75);
  t = v_7(j_2, i_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym__2, h_75, i_75);
  t = v_7(k_2, h_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym__2, i_75, h_75);
  t = conc_0_0(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, g_75);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
static ATerm m_7 (ATerm u_75, ATerm v_75, ATerm t)
{
  ATerm z_7 = NULL,e_8 = NULL,f_8 = NULL,h_8 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL;
  z_7 = t;
  t = (ATerm) ATempty;
  c_9 = t;
  t = SSL_mkterm(u_75, c_9);
  e_8 = t;
  t = (ATerm) ATempty;
  h_8 = t;
  t = SSL_mkterm(v_75, h_8);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, f_8);
  d_9 = t;
  t = term_j_11;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_8, f_8), term_j_11);
  t = t_7(m_2, d_9, f_9, t);
  t = z_7;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
static ATerm s_7 (ATerm p_75, ATerm q_75, ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  g_9 = t;
  t = (ATerm) ATempty;
  k_9 = t;
  t = SSL_mkterm(p_75, k_9);
  h_9 = t;
  t = (ATerm) ATempty;
  j_9 = t;
  t = SSL_mkterm(q_75, j_9);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
  l_9 = t;
  t = term_p_11;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_9, i_9), term_p_11);
  t = t_7(n_2, l_9, m_9, t);
  t = g_9;
  return(t);
}
static ATerm t_7 (ATerm l_112 (ATerm), ATerm i_37, ATerm g_37, ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,a_10 = NULL,b_10 = NULL;
  r_9 = t;
  t = l_112(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_9, i_37, g_37);
  t = v_8(o_9, i_37, g_37, t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = term_v_11;
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, term_v_11);
        t = u_8(o_9, h_10, t);
        {
          ATerm y_11 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_11;
            }
        }
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
      p_9 = ATgetFirst((ATermList) t);
      q_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_9, term_v_11, (ATerm) ATinsert(CheckATermList(q_9), (ATerm) ATinsert(CheckATermList(p_9), i_37)));
  t = lookup_table_0_1(o_9, t);
  b_10 = t;
  t = term_v_11;
  s_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_9), (ATerm) ATinsert(CheckATermList(p_9), i_37));
  t_9 = t;
  t = b_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(s_9, t_9, a_10, t);
  t = r_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm u_7 (ATerm z_75, ATerm a_76, ATerm t)
{
  ATerm i_10 = NULL,q_10 = NULL,r_10 = NULL,v_10 = NULL,w_10 = NULL,g_11 = NULL,k_11 = NULL;
  i_10 = t;
  t = (ATerm) ATempty;
  w_10 = t;
  t = SSL_mkterm(z_75, w_10);
  q_10 = t;
  t = (ATerm) ATempty;
  v_10 = t;
  t = SSL_mkterm(a_76, v_10);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
  g_11 = t;
  t = term_d_12;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_10, r_10), term_d_12);
  t = t_7(p_2, g_11, k_11, t);
  t = i_10;
  return(t);
}
static ATerm v_7 (ATerm f_103 (ATerm), ATerm f_26, ATerm g_26, ATerm t)
{
  static ATerm x_2 (ATerm t);
  static ATerm x_2 (ATerm t)
  {
    ATerm l_11 = NULL;
    static ATerm g_3 (ATerm t);
    static ATerm g_3 (ATerm t)
    {
      ATerm m_11 = NULL;
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), m_11);
      t = f_103(t);
      return(t);
    }
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = g_26;
    t = map_1_0(g_3, t);
    return(t);
  }
  t = f_26;
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(q_11, r_11, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm s_11 = NULL,x_11 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(g_12, h_12, t);
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(b_12, c_12, t);
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(s_11, x_11, t);
  return(t);
}
static ATerm w_7 (ATerm e_75, ATerm f_75, ATerm d_75, ATerm t)
{
  ATerm n_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_75, f_75);
  t = v_7(h_3, f_75, f_75, t);
  t = (ATerm) ATmakeAppl(sym__2, e_75, f_75);
  t = v_7(l_3, e_75, f_75, t);
  t = (ATerm) ATmakeAppl(sym__2, f_75, e_75);
  t = conc_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, d_75);
  return(t);
}
ATerm repeat_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t);
  static ATerm p_12 (ATerm t)
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_100(t);
        t = p_12(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = t_100(t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm u_12 = NULL,w_12 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL,b_1 = NULL;
  e_13 = t;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  u_12 = t;
  t = b_13;
  {
    static ATerm m_3 (ATerm t);
    static ATerm m_3 (ATerm t)
    {
      if((w_12 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(m_3, t);
  }
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_12, d_13);
  b_1 = t;
  t = SSLsetAnnotations(b_1, u_12);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm f_13 = NULL,b_4 = NULL,f_4 = NULL;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_13), term_u_13), term_t_13), term_q_13), term_p_13), term_j_13), term_i_13), term_h_13), term_g_13), term_c_13), term_a_13), term_z_12), term_x_12), term_v_12), term_s_12), term_r_12), term_q_12), term_o_12), term_n_12), term_m_12), term_k_12), term_i_12));
  t = member_0_0(t);
  t = SSL_explode_string(f_13);
  f_4 = t;
  t = (ATerm) ATinsert(CheckATermList(f_4), term_x_13);
  b_4 = t;
  t = SSL_implode_string(b_4);
  return(t);
}
ATerm escape_chars_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  static ATerm m_14 (ATerm t);
  static ATerm m_14 (ATerm t)
  {
    ATerm y_13 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,s_1 = NULL;
        t = v_129(t);
        o_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_13 = ATgetFirst((ATermList) t);
            m_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_13);
        k_13 = t;
        t = m_13;
        t = Cons_2_0(_id, m_14, t);
        n_13 = t;
        t = (ATerm) ATinsert(CheckATermList(n_13), l_13);
        s_1 = t;
        t = SSLsetAnnotations(s_1, k_13);
        LocalPopChoice(c_14);
      }
    else
      {
        t = y_13;
        {
          ATerm g_14 = NULL,k_14 = NULL,l_14 = NULL;
          l_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_14 = ATgetFirst((ATermList) t);
              k_14 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm j_4 = NULL,m_4 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(l_14);
                j_4 = t;
                t = k_14;
                t = m_14(t);
                m_4 = t;
                t = (ATerm) ATinsert(CheckATermList(m_4), g_14);
                u_1 = t;
                t = SSLsetAnnotations(u_1, j_4);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_14;
            }
        }
      }
    return(t);
  }
  t = m_14(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_5 = ATgetFirst((ATermList) t);
      w_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_5;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_e_14), term_d_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_d_14), term_d_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_f_14), term_d_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_h_14), term_d_14);
            }
        }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,w_20 = NULL,x_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      w_20 = ATgetArgument(t, 0);
      {
        ATerm z_20 = NULL,s_4 = NULL,b_5 = NULL;
        t = SSL_explode_string(w_20);
        {
          ATerm i_14 = t;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,r_5 = NULL;
              h_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(j_14) != AT_INT) || (ATgetInt((ATermInt) j_14) != 34)))
                    _fail(t);
                  r_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_5;
              t = last_0_0(t);
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              t = h_5;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_14;
            }
        }
        t = escape_chars_1_0(n_3, t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_5), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
        t = conc_0_0(t);
        s_4 = t;
        t = SSL_implode_string(s_4);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, z_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm q_6 = NULL;
            t = SSL_real_to_string(w_20);
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, q_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              w_20 = ATgetArgument(t, 0);
              {
                ATerm z_6 = NULL;
                t = SSL_int_to_string(w_20);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, z_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  w_20 = ATgetArgument(t, 0);
                  x_20 = ATgetArgument(t, 1);
                  {
                    ATerm p_7 = NULL;
                    t = x_20;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        p_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, w_20, p_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      w_20 = ATgetArgument(t, 0);
                      {
                        ATerm b_8 = NULL,d_8 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(u_20);
                        b_8 = t;
                        t = w_20;
                        t = AddLeadingPrime_0_0(t);
                        d_8 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_8);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, b_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          w_20 = ATgetArgument(t, 0);
                          x_20 = ATgetArgument(t, 1);
                          t_20 = ATgetArgument(t, 2);
                          {
                            ATerm u_9 = NULL,y_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(u_20);
                            u_9 = t;
                            t = w_20;
                            t = AddLeadingPrime_0_0(t);
                            y_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, y_9, x_20, t_20);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, u_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              w_20 = ATgetArgument(t, 0);
                              x_20 = ATgetArgument(t, 1);
                              t_20 = ATgetArgument(t, 2);
                              {
                                ATerm m_10 = NULL,s_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(u_20);
                                m_10 = t;
                                t = w_20;
                                t = AddLeadingPrime_0_0(t);
                                s_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, s_10, x_20, t_20);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, m_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  w_20 = ATgetArgument(t, 0);
                                  x_20 = ATgetArgument(t, 1);
                                  {
                                    ATerm d_11 = NULL,h_11 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(u_20);
                                    d_11 = t;
                                    t = w_20;
                                    t = AddLeadingPrime_0_0(t);
                                    h_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, h_11, x_20);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, d_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      w_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_11 = NULL,z_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(u_20);
                                        w_11 = t;
                                        t = w_20;
                                        t = AddLeadingPrime_0_0(t);
                                        z_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, w_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          w_20 = ATgetArgument(t, 0);
                                          {
                                            ATerm j_12 = NULL,l_12 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(u_20);
                                            j_12 = t;
                                            t = w_20;
                                            t = AddLeadingPrime_0_0(t);
                                            l_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, l_12);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, j_12);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              w_20 = ATgetArgument(t, 0);
                                              x_20 = ATgetArgument(t, 1);
                                              {
                                                ATerm t_12 = NULL,y_12 = NULL,e_3 = NULL;
                                                t = SSLgetAnnotations(u_20);
                                                t_12 = t;
                                                t = w_20;
                                                t = AddLeadingPrime_0_0(t);
                                                y_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_12, x_20);
                                                e_3 = t;
                                                t = SSLsetAnnotations(e_3, t_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm v_13 = NULL,z_13 = NULL,f_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  w_20 = ATgetArgument(t, 0);
                                                  x_20 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(u_20);
                                              v_13 = t;
                                              t = w_20;
                                              t = AddLeadingPrime_0_0(t);
                                              z_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, z_13, x_20);
                                              f_3 = t;
                                              t = SSLsetAnnotations(f_3, v_13);
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
ATerm at_end_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  static ATerm m_25 (ATerm t);
  static ATerm m_25 (ATerm t)
  {
    ATerm d_25 = NULL,k_25 = NULL,l_25 = NULL;
    l_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_25 = ATgetFirst((ATermList) t);
        k_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_14 = NULL,u_14 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(l_25);
          q_14 = t;
          t = k_25;
          t = m_25(t);
          u_14 = t;
          t = (ATerm) ATinsert(CheckATermList(u_14), d_25);
          x_3 = t;
          t = SSLsetAnnotations(x_3, q_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_25;
        t = c_104(t);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_23;
    }
  else
    {
      static ATerm o_3 (ATerm t);
      static ATerm o_3 (ATerm t)
      {
        t = not_null(z_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_23 = ATgetFirst((ATermList) t);
          if(((z_23 != NULL) && (z_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      t = at_end_1_0(o_3, t);
    }
  return(t);
}
static ATerm u_26 (ATerm t_25, ATerm t)
{
  ATerm u_25 = NULL;
  t = SSL_explode_term(t_25);
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,b_26 = NULL;
  b_26 = t;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
      {
        ATerm p_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_3 (ATerm t);
            static ATerm p_3 (ATerm t)
            {
              t = x_25;
              return(t);
            }
            t = w_25;
            t = at_end_1_0(p_3, t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = p_14;
            t = u_26(b_26, t);
          }
      }
    }
  else
    {
      t = u_26(b_26, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm e_27 = NULL,h_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_27;
    }
  else
    {
      t = h_27;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,a_28 = NULL,d_28 = NULL,e_28 = NULL,e_4 = NULL;
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  u_27 = t;
  t = SSL_explode_string(w_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, a_28);
  e_4 = t;
  t = SSLsetAnnotations(e_4, u_27);
  d_28 = t;
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
  t = d_28;
  return(t);
}
ATerm at_last_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm n_29 (ATerm t);
  static ATerm n_29 (ATerm t)
  {
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
    i_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_29 = ATgetFirst((ATermList) t);
        k_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(i_29);
          c_15 = t;
          t = k_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_29), j_29);
          t_4 = t;
          t = SSLsetAnnotations(t_4, c_15);
          t = n_104(t);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          {
            ATerm m_15 = NULL,p_15 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(i_29);
            m_15 = t;
            t = k_29;
            t = n_29(t);
            p_15 = t;
            t = (ATerm) ATinsert(CheckATermList(p_15), j_29);
            v_4 = t;
            t = SSLsetAnnotations(v_4, m_15);
          }
        }
    }
    return(t);
  }
  t = n_29(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,s_29 = NULL;
      static ATerm q_3 (ATerm t);
      static ATerm q_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_29 != NULL) && (r_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_29 = ATgetFirst((ATermList) t);
            {
              ATerm x_14 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATempty;
        return(t);
      }
      t = at_last_1_0(q_3, t);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_29, not_null(r_29));
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm y_29 = NULL,z_29 = NULL;
        static ATerm r_3 (ATerm t);
        static ATerm r_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((y_29 != NULL) && (y_29 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                y_29 = ATgetFirst((ATermList) t);
              {
                ATerm y_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        t = at_last_1_0(r_3, t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_29, not_null(y_29));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm k_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,s_30 = NULL,t_30 = NULL,w_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym_Op_2))
    {
      k_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
      t = n_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_30 = ATgetFirst((ATermList) t);
          p_30 = (ATerm) ATgetNext((ATermList) t);
          t = p_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_30 = ATgetFirst((ATermList) t);
              t_30 = (ATerm) ATgetNext((ATermList) t);
              t = t_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_30;
                  if(match_string(t, "Cons"))
                    {
                      ATerm z_14 = t;
                      int a_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_31 = NULL;
                          t = s_30;
                          t = implode_cons_0_0(t);
                          a_31 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_31), o_30);
                          LocalPopChoice(a_15);
                        }
                      else
                        {
                          t = z_14;
                          t = (ATerm) ATinsert(ATempty, w_30);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, w_30);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, w_30);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, w_30);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, w_30);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, w_30);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm k_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,t_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
      t = q_34;
      if(match_string(t, "Cons"))
        {
          ATerm v_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL;
          t = t_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_15 = ATgetFirst((ATermList) t);
              k_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_15 = ATgetFirst((ATermList) t);
              n_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              y_15 = ATgetArgument(t, 0);
              z_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_15;
          if(match_cons(t, sym_Op_2))
            {
              v_15 = ATgetArgument(t, 0);
              w_15 = ATgetArgument(t, 1);
              t = w_15;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = v_15;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, y_15);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, y_15, z_15);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, y_15, z_15);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, y_15, z_15);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = t_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_e_15;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          q_34 = ATgetArgument(t, 0);
          t_34 = ATgetArgument(t, 1);
          o_34 = ATgetArgument(t, 2);
          t = o_34;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, q_34, t_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              q_34 = ATgetArgument(t, 0);
              t_34 = ATgetArgument(t, 1);
              o_34 = ATgetArgument(t, 2);
              t = o_34;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, q_34, t_34);
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  q_34 = ATgetArgument(t, 0);
                  t_34 = ATgetArgument(t, 1);
                  o_34 = ATgetArgument(t, 2);
                  {
                    ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                    t = q_34;
                    {
                      ATerm f_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm i_18 = NULL;
                          i_18 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_e_14, i_18);
                          t = is_quoted_0_0(t);
                          t = i_18;
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_15;
                        }
                    }
                    t = SSL_explode_string(q_34);
                    f_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_18), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                    t = conc_0_0(t);
                    g_18 = t;
                    t = SSL_implode_string(g_18);
                    e_18 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, e_18, t_34, o_34);
                  }
                }
              else
                {
                  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL;
                  if(match_cons(t, sym_Prim_2))
                    {
                      q_34 = ATgetArgument(t, 0);
                      t_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_34;
                  {
                    ATerm g_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm l_19 = NULL;
                        l_19 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_e_14, l_19);
                        t = is_quoted_0_0(t);
                        t = l_19;
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_15;
                      }
                  }
                  t = SSL_explode_string(q_34);
                  b_19 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_19), term_e_14), (ATerm) ATinsert(ATempty, term_e_14));
                  t = conc_0_0(t);
                  c_19 = t;
                  t = SSL_implode_string(c_19);
                  z_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, z_18, t_34);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t);
  static ATerm s_3 (ATerm t)
  {
    t = topdown_1_0(b_130, t);
    return(t);
  }
  t = b_130(t);
  t = SRTS_all(s_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = repeat_2_0(Ensugar_0_0, _id, t);
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,d_38 = NULL,f_38 = NULL;
  u_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_37 = ATgetFirst((ATermList) t);
      f_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_37;
  if(match_cons(t, sym__2))
    {
      a_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_38;
  if(match_cons(t, sym_Some_1))
    {
      t_37 = ATgetArgument(t, 0);
      t = t_37;
      if(match_string(t, "left"))
        {
          t = u_37;
          t = w_7(v_37, d_38, f_38, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = u_37;
              t = l_7(v_37, d_38, f_38, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = u_37;
              t = k_7(v_37, d_38, f_38, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = u_37;
      t = j_7(v_37, d_38, f_38, t);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(z_3, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, b_39);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm z_35 = NULL,g_36 = NULL;
  g_36 = t;
  {
    ATerm l_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_19 = NULL;
        t = SSL_explode_term(g_36);
        if(match_cons(t, sym__2))
          {
            ATerm o_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_15 = ATgetArgument(t, 1);
              if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
                {
                  x_19 = ATgetFirst((ATermList) q_15);
                  {
                    ATerm r_15 = (ATerm) ATgetNext((ATermList) q_15);
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
        t = x_19;
        LocalPopChoice(n_15);
      }
    else
      {
        t = l_15;
        t = g_36;
      }
  }
  t = topdown_1_0(t_3, t);
  {
    static ATerm u_3 (ATerm t);
    static ATerm u_3 (ATerm t)
    {
      ATerm m_36 = NULL,n_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL;
      v_36 = t;
      if(match_cons(t, sym_Seq_2))
        {
          m_36 = ATgetArgument(t, 0);
          n_36 = ATgetArgument(t, 1);
          t = n_36;
          if(match_cons(t, sym_Seq_2))
            {
              s_36 = ATgetArgument(t, 0);
              u_36 = ATgetArgument(t, 1);
              {
                ATerm s_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_37 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, m_36, s_36);
                    t = u_3(t);
                    f_37 = t;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_37, u_36);
                    t = u_3(t);
                    LocalPopChoice(t_15);
                  }
                else
                  {
                    t = s_15;
                    t = v_36;
                  }
              }
            }
          else
            {
              t = v_36;
            }
        }
      else
        {
          t = v_36;
        }
      return(t);
    }
    t = bottomup_1_0(u_3, t);
  }
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, term_d_16), term_c_16))), (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATinsert(ATempty, term_a_16))));
  t = repeat_2_0(v_3, _id, t);
  t = z_35;
  t = bottomup_1_0(y_3, t);
  return(t);
}
static ATerm i_8 (ATerm e_25, ATerm f_25, ATerm t)
{
  ATerm g_39 = NULL;
  t = SSL_fputc(e_25, f_25);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_39);
  return(t);
}
static ATerm j_8 (ATerm k_59, ATerm l_59, ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_write_term_to_stream_text(k_59, l_59);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_39);
  return(t);
}
static ATerm l_8 (ATerm o_117 (ATerm), ATerm x_525, ATerm q_59, ATerm t)
{
  ATerm k_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_525, term_e_16);
  t = p_8(t);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, q_59);
  t = o_117(t);
  t = fclose_0_0(t);
  t = q_59;
  return(t);
}
static ATerm k_8 (ATerm g_59, ATerm h_59, ATerm t)
{
  ATerm l_39 = NULL;
  t = SSL_write_term_to_stream_baf(g_59, h_59);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_39);
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
  ATerm h_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym_Stream_1))
        {
          h_21 = ATgetArgument(f_16, 0);
        }
      else
        _fail(t);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(h_21, l_21, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if(match_cons(g_16, sym_Stream_1))
        {
          h_22 = ATgetArgument(g_16, 0);
        }
      else
        _fail(t);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(h_22, j_22, t);
  e_22 = t;
  t = term_i_16;
  f_22 = t;
  t = e_22;
  if(match_cons(t, sym_Stream_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, e_22);
  t = i_8(f_22, g_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL,c_40 = NULL,d_40 = NULL,h_40 = NULL,k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL,o_41 = NULL,p_41 = NULL,z_4 = NULL,y_4 = NULL;
  w_39 = t;
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  k_40 = t;
  t = l_40;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_4 (ATerm t);
        static ATerm a_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_39 != NULL) && (t_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_4, t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = term_n_16;
        t_39 = t;
      }
  }
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, n_40);
  y_4 = t;
  t = SSLsetAnnotations(y_4, k_40);
  t = w_39;
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, (ATerm) ATmakeAppl(sym__2, not_null(t_39), d_40));
  z_4 = t;
  t = SSLsetAnnotations(z_4, x_39);
  h_40 = t;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL,r_20 = NULL,v_20 = NULL,a_21 = NULL,c_21 = NULL,a_5 = NULL;
        t = SSLgetAnnotations(h_40);
        f_20 = t;
        t = o_41;
        t = fetch_1_0(c_4, t);
        r_20 = t;
        t = p_41;
        if(match_cons(t, sym__2))
          {
            a_21 = ATgetArgument(t, 0);
            c_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8(d_4, a_21, c_21, t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, v_20);
        a_5 = t;
        t = SSLsetAnnotations(a_5, f_20);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm y_21 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(h_40);
          y_21 = t;
          t = p_41;
          if(match_cons(t, sym__2))
            {
              c_22 = ATgetArgument(t, 0);
              d_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_8(g_4, c_22, d_22, t);
          b_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_41, b_22);
          c_5 = t;
          t = SSLsetAnnotations(c_5, y_21);
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
ATerm apply_strategy_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  w_41 = t;
  t = dtime_0_0(t);
  t = w_41;
  t = o_98(t);
  v_41 = t;
  t = dtime_0_0(t);
  s_41 = t;
  t = v_41;
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_41), (ATerm) ATmakeAppl(sym_Runtime_1, s_41)), u_41);
  return(t);
}
static ATerm k_42 (ATerm e_42, ATerm t)
{
  t = SSL_fclose(e_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  i_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_42 = ATgetArgument(t, 0);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_42);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = k_42(i_42, t);
          }
      }
    }
  else
    {
      t = k_42(i_42, t);
    }
  return(t);
}
static ATerm m_8 (ATerm m_59, ATerm t)
{
  t = SSL_read_term_from_stream(m_59);
  return(t);
}
static ATerm n_8 (ATerm u_74, ATerm v_74, ATerm t)
{
  t = SSL_strcat(u_74, v_74);
  return(t);
}
static ATerm o_8 (ATerm g_25, ATerm h_25, ATerm t)
{
  ATerm l_42 = NULL;
  t = SSL_fopen(g_25, h_25);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_42 = NULL;
  t = SSL_stdin_stream();
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_stdout_stream();
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_stderr_stream();
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_42);
  return(t);
}
static ATerm f_44 (ATerm u_42, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_explode_term(u_42);
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
          {
            v_42 = ATgetFirst((ATermList) v_16);
            {
              ATerm w_16 = (ATerm) ATgetNext((ATermList) v_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_44 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,q_43 = NULL,r_13 = NULL;
  t = SSLgetAnnotations(a_43);
  d_43 = t;
  t = y_42;
  if(match_cons(t, sym_Path_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_43, z_42);
  r_13 = t;
  t = SSLsetAnnotations(r_13, d_43);
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(b_43, c_43, t);
  return(t);
}
static ATerm h_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,s_13 = NULL;
  t = SSLgetAnnotations(u_43);
  x_43 = t;
  t = SSL_is_string(s_43);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, t_43);
  s_13 = t;
  t = SSLsetAnnotations(s_13, x_43);
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(v_43, w_43, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_44(c_44, t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_44(d_44, e_44, c_44, t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  t = h_44(d_44, e_44, c_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_44(c_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,q_44 = NULL;
  q_44 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_44, term_d_17);
        t = p_8(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm u_22 = NULL,v_22 = NULL;
          t = term_e_17;
          v_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_17, q_44);
          t = n_8(v_22, q_44, t);
          u_22 = t;
          t = SSL_perror(u_22);
          _fail(t);
        }
      }
  }
  k_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_8(l_44, t);
  j_44 = t;
  t = k_44;
  t = fclose_0_0(t);
  t = j_44;
  return(t);
}
ATerm fetch_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  static ATerm p_45 (ATerm t);
  static ATerm p_45 (ATerm t)
  {
    ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
    m_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_45 = ATgetFirst((ATermList) t);
        o_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_23 = NULL,d_23 = NULL,a_14 = NULL;
          t = SSLgetAnnotations(m_45);
          a_23 = t;
          t = n_45;
          t = v_103(t);
          d_23 = t;
          t = (ATerm) ATinsert(CheckATermList(o_45), d_23);
          a_14 = t;
          t = SSLsetAnnotations(a_14, a_23);
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
          {
            ATerm o_23 = NULL,r_23 = NULL,b_14 = NULL;
            t = SSLgetAnnotations(m_45);
            o_23 = t;
            t = o_45;
            t = p_45(t);
            r_23 = t;
            t = (ATerm) ATinsert(CheckATermList(r_23), n_45);
            b_14 = t;
            t = SSLsetAnnotations(b_14, o_23);
          }
        }
    }
    return(t);
  }
  t = p_45(t);
  return(t);
}
static ATerm u_8 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm s_45 = NULL;
  t = lookup_table_0_1(f_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(g_40, s_45, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_127 (ATerm), ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
        t = term_j_17;
        y_45 = t;
        t = term_k_17;
        z_45 = t;
        t = term_l_17;
        t = u_8(y_45, z_45, t);
        x_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_45, term_m_17);
        t = geq_0_0(t);
        t = v_45;
        t = w_127(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = v_45;
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_46 = NULL;
  c_46 = t;
  if(match_string(t, "-k"))
    {
      t = c_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_46;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  t = SSL_string_to_int(d_46);
  e_46 = t;
  t = term_n_17;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, e_46);
  t = x_8(f_46, e_46, t);
  t = d_46;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  if(match_string(t, "-S"))
    {
      t = h_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_46;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  t = term_k_17;
  i_46 = t;
  t = term_p_17;
  j_46 = t;
  t = term_q_17;
  t = x_8(i_46, j_46, t);
  t = term_r_17;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  t = SSL_string_to_int(k_46);
  l_46 = t;
  t = term_k_17;
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, l_46);
  t = x_8(m_46, l_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_46);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  t = term_u_17;
  n_46 = t;
  t = term_b_9;
  o_46 = t;
  t = term_v_17;
  t = x_8(n_46, o_46, t);
  t = term_w_17;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, o_4, t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, q_4, r_4, t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = Option_3_0(u_4, w_4, x_4, t);
          }
      }
    }
  return(t);
}
static ATerm x_8 (ATerm o_67, ATerm p_67, ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = term_j_17;
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_17, o_67, p_67);
  t = lookup_table_0_1(p_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(o_67, p_67, q_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_17, o_67, p_67);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
      t = term_b_9;
      t = g_0(t);
      w_46 = t;
      t = term_c_18;
      x_46 = t;
      t = term_d_18;
      y_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, w_46);
      t = v_8(x_46, y_46, w_46, t);
      _fail(t);
    }
  else
    {
      ATerm b_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_46 = ATgetFirst((ATermList) t);
          v_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      t = d_0(t);
      t = term_b_9;
      t = f_0(t);
      b_47 = t;
      t = (ATerm) ATinsert(CheckATermList(v_46), b_47);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  if(match_string(t, "-o"))
    {
      t = d_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_47;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  e_47 = t;
  t = term_h_18;
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, e_47);
  t = x_8(f_47, e_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_47);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, i_5, t);
  return(t);
}
static ATerm v_8 (ATerm m_38, ATerm n_38, ATerm l_38, ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            ATerm n_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
        t = u_8(m_38, n_38, t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATempty;
      }
  }
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_38, n_38, (ATerm) ATinsert(CheckATermList(i_47), l_38));
  t = lookup_table_0_1(m_38, t);
  l_47 = t;
  t = (ATerm) ATinsert(CheckATermList(i_47), l_38);
  j_47 = t;
  t = l_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(n_38, j_47, k_47, t);
  t = h_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
      t = term_b_9;
      t = q_0(t);
      w_47 = t;
      t = term_c_18;
      x_47 = t;
      t = term_d_18;
      y_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_18, term_d_18, w_47);
      t = v_8(x_47, y_47, w_47, t);
      _fail(t);
    }
  else
    {
      ATerm c_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_47 = ATgetFirst((ATermList) t);
          t_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_47 = ATgetFirst((ATermList) t);
          v_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_47;
      t = o_0(t);
      t = u_47;
      t = p_0(t);
      c_48 = t;
      t = (ATerm) ATinsert(CheckATermList(v_47), c_48);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "-i"))
    {
      t = e_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  f_48 = t;
  t = term_o_18;
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, f_48);
  t = x_8(g_48, f_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_48);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, u_5, d_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  t = whoami_0_0(t);
  h_48 = t;
  t = term_e_9;
  j_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_18), h_48);
  k_48 = t;
  t = SSL_printnl(j_48, k_48);
  t = term_w_9;
  i_48 = t;
  t = SSL_exit(i_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  t = term_j_17;
  l_48 = t;
  t = term_r_18;
  m_48 = t;
  t = term_s_18;
  t = u_8(l_48, m_48, t);
  return(t);
}
static ATerm q_8 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_35, v_35);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = SSL_addr(u_35, v_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_48;
      t = z_110(t);
    }
  else
    {
      ATerm t_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_48 = ATgetFirst((ATermList) t);
          q_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_48;
      t = foldr_2_0(z_110, a_111, t);
      t_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_48, t_48);
      t = a_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_17;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(h_24, i_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_48 = NULL,c_24 = NULL,e_24 = NULL;
  t = times_0_0(t);
  e_24 = t;
  t = SSL_explode_term(e_24);
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_24;
  t = foldr_2_0(e_6, h_6, t);
  w_48 = t;
  t = SSL_TicksToSeconds(w_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_49;
        if((i_49 != t))
          {
            _fail(t);
          }
        t = h_49;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        {
          ATerm y_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_49, j_49);
              LocalPopChoice(a_19);
            }
          else
            {
              t = y_18;
              t = SSL_gtr(i_49, j_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
        t = term_j_17;
        q_49 = t;
        t = term_k_17;
        r_49 = t;
        t = term_l_17;
        t = u_8(q_49, r_49, t);
        p_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_49, term_w_9);
        t = geq_0_0(t);
        t = n_49;
        t = v_127(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = n_49;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,w_49 = NULL,x_49 = NULL;
  t = run_time_0_0(t);
  t_49 = t;
  t = term_b_9;
  t = whoami_0_0(t);
  u_49 = t;
  t = term_e_9;
  w_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), t_49), term_f_19), u_49);
  x_49 = t;
  t = SSL_printnl(w_49, x_49);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), t_49), term_f_19), u_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_17;
  y_49 = t;
  t = SSL_exit(y_49);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  j_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_50 = ATgetArgument(t, 0);
          {
            ATerm z_24 = NULL,o_14 = NULL;
            t = SSLgetAnnotations(j_50);
            z_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_50);
            o_14 = t;
            t = SSLsetAnnotations(o_14, z_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL,c_50 = NULL;
      t = term_j_17;
      b_50 = t;
      t = term_j_19;
      c_50 = t;
      t = term_k_19;
      t = u_8(b_50, c_50, t);
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = fetch_1_0(k_6, t);
    }
  t = m_99(t);
  return(t);
}
static ATerm y_8 (ATerm e_43, ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_hashtable_put(g_43, e_43, f_43);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_50);
  return(t);
}
static ATerm z_8 (ATerm h_43, ATerm i_43, ATerm t)
{
  t = SSL_hashtable_get(i_43, h_43);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_39, ATerm t)
{
  ATerm u_50 = NULL;
  t = table_hashtable_0_0(t);
  u_50 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL;
        t = u_50;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_8(y_39, r_25, t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm c_26 = NULL;
          t = y_39;
          t = table_create_0_0(t);
          t = u_50;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(y_39, c_26, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm x_50 = NULL;
  t = SSL_hashtable_create(m_43, n_43);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,c_51 = NULL,d_51 = NULL;
  y_50 = t;
  t = term_o_19;
  c_51 = t;
  t = term_p_19;
  d_51 = t;
  t = y_50;
  t = new_hashtable_0_2(c_51, d_51, t);
  z_50 = t;
  t = y_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(y_50, z_50, a_51, t);
  t = y_50;
  return(t);
}
static ATerm s_8 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_hashtable_remove(k_43, j_43);
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_51);
  return(t);
}
static ATerm t_8 (ATerm o_43, ATerm t)
{
  ATerm f_51 = NULL;
  t = SSL_hashtable_destroy(o_43);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_51 = NULL;
  t = SSL_table_hashtable();
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  h_51 = t;
  t = table_hashtable_0_0(t);
  i_51 = t;
  t = lookup_table_0_1(h_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(k_51, t);
  t = i_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(h_51, j_51, t);
  t = h_51;
  return(t);
}
ATerm map_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  static ATerm z_51 (ATerm t);
  static ATerm z_51 (ATerm t)
  {
    ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
    w_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_51;
      }
    else
      {
        ATerm j_26 = NULL,n_26 = NULL,o_26 = NULL,b_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_51 = ATgetFirst((ATermList) t);
            y_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_51);
        j_26 = t;
        t = x_51;
        t = l_103(t);
        n_26 = t;
        t = y_51;
        t = z_51(t);
        o_26 = t;
        t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
        b_16 = t;
        t = SSLsetAnnotations(b_16, j_26);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_52 = ATgetFirst((ATermList) t);
      d_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_52 = NULL,i_52 = NULL;
        static ATerm l_6 (ATerm t);
        static ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_52)), not_null(i_52));
          return(t);
        }
        t = d_52;
        t = l_0(t);
        if(((h_52 != NULL) && (h_52 != t)))
          _fail(t);
        else
          h_52 = t;
        t = c_52;
        t = j_0(t);
        if(((i_52 != NULL) && (i_52 != t)))
          _fail(t);
        else
          i_52 = t;
        t = d_52;
        t = reverse_acc_2_0(j_0, l_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,h_16 = NULL;
  q_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_52);
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_52);
  h_16 = t;
  t = SSLsetAnnotations(h_16, o_52);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_52), term_q_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_52 = NULL,n_52 = NULL;
      t = term_j_17;
      m_52 = t;
      t = term_r_18;
      n_52 = t;
      t = term_s_18;
      t = u_8(m_52, n_52, t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      t = fetch_1_0(o_6, t);
    }
  t = term_t_19;
  t = echo_0_0(t);
  t = term_c_18;
  k_52 = t;
  t = term_d_18;
  l_52 = t;
  t = term_u_19;
  t = u_8(k_52, l_52, t);
  t = reverse_acc_2_0(_id, p_6, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_19 = ATgetFirst((ATermList) t);
                ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_52;
          }
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATinsert(ATempty, u_52);
      }
  }
  v_52 = t;
  t = term_n_16;
  w_52 = t;
  t = SSL_printnl(w_52, v_52);
  t = u_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_j_17;
  a_53 = t;
  t = term_r_18;
  b_53 = t;
  t = term_s_18;
  t = u_8(a_53, b_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_a_20;
  c_53 = t;
  t = term_b_9;
  d_53 = t;
  t = term_b_20;
  t = x_8(c_53, d_53, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
  t = term_a_20;
  g_53 = t;
  t = term_b_9;
  h_53 = t;
  t = term_b_20;
  t = x_8(g_53, h_53, t);
  t = term_d_20;
  e_53 = t;
  t = term_b_9;
  f_53 = t;
  t = term_e_20;
  t = x_8(e_53, f_53, t);
  t = term_g_20;
  return(t);
}
static ATerm b_7 (ATerm t)
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
      t = Option_3_0(t_6, u_6, v_6, t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      t = Option_3_0(y_6, a_7, b_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,j_16 = NULL;
  n_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_53 = ATgetFirst((ATermList) t);
      k_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_53);
  i_53 = t;
  t = j_53;
  t = x_85(t);
  l_53 = t;
  t = k_53;
  t = y_85(t);
  m_53 = t;
  t = (ATerm) ATinsert(CheckATermList(m_53), l_53);
  j_16 = t;
  t = SSLsetAnnotations(j_16, i_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,x_53 = NULL,y_53 = NULL,m_16 = NULL;
  s_53 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_20;
        t = v_119(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
      }
  }
  t = s_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_53 = ATgetFirst((ATermList) t);
      v_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_53);
  t_53 = t;
  t = term_r_18;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, u_53);
  t = x_8(y_53, u_53, t);
  t = v_53;
  {
    static ATerm i_54 (ATerm t);
    static ATerm i_54 (ATerm t)
    {
      ATerm n_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_54 = NULL;
              b_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_54;
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = v_119(t);
              t = Cons_2_0(_id, i_54, t);
            }
          LocalPopChoice(o_20);
        }
      else
        {
          t = n_20;
          {
            ATerm e_54 = NULL,f_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_54 = ATgetFirst((ATermList) t);
                f_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_54), (ATerm) ATmakeAppl(sym_Undefined_1, e_54));
          }
        }
      return(t);
    }
    t = i_54(t);
  }
  x_53 = t;
  t = (ATerm) ATinsert(CheckATermList(x_53), (ATerm) ATmakeAppl(sym_Program_1, u_53));
  m_16 = t;
  t = SSLsetAnnotations(m_16, t_53);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  if(match_string(t, "--help"))
    {
      t = v_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_54;
        }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_j_19;
  w_54 = t;
  t = term_b_9;
  x_54 = t;
  t = term_s_20;
  t = x_8(w_54, x_54, t);
  t = term_y_20;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  p_54 = t;
  t = term_c_18;
  q_54 = t;
  t = term_d_21;
  t = lookup_table_0_1(q_54, t);
  u_54 = t;
  t = term_d_18;
  r_54 = t;
  t = (ATerm) ATempty;
  s_54 = t;
  t = u_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(r_54, s_54, t_54, t);
  t = p_54;
  {
    static ATerm c_7 (ATerm t);
    static ATerm c_7 (ATerm t)
    {
      ATerm e_21 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_119(t);
          LocalPopChoice(f_21);
        }
      else
        {
          t = e_21;
          {
            ATerm g_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, e_7, h_7, t);
                LocalPopChoice(i_21);
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
    t = parse_options_p__1_0(c_7, t);
  }
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL;
        i_55 = t;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_26 = NULL;
              t = i_55;
              {
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_26 = NULL,z_26 = NULL;
                    t = term_j_17;
                    y_26 = t;
                    t = term_j_19;
                    z_26 = t;
                    t = term_k_19;
                    t = u_8(y_26, z_26, t);
                    LocalPopChoice(p_21);
                  }
                else
                  {
                    t = o_21;
                    t = fetch_1_0(o_7, t);
                  }
              }
              t = i_55;
              t = default_system_usage_0_0(t);
              t = term_p_17;
              x_26 = t;
              t = SSL_exit(x_26);
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              {
                ATerm f_27 = NULL,g_27 = NULL,i_27 = NULL;
                t = term_j_17;
                g_27 = t;
                t = term_a_20;
                i_27 = t;
                t = term_q_21;
                t = u_8(g_27, i_27, t);
                t = i_55;
                t = default_system_about_0_0(t);
                t = term_p_17;
                f_27 = t;
                t = SSL_exit(f_27);
              }
            }
        }
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
              static ATerm q_7 (ATerm t);
              static ATerm q_7 (ATerm t)
              {
                ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,o_16 = NULL;
                o_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_55);
                m_55 = t;
                t = n_55;
                if(((n_54 != NULL) && (n_54 != t)))
                  _fail(t);
                else
                  n_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_55);
                o_16 = t;
                t = SSLsetAnnotations(o_16, m_55);
                return(t);
              }
              t = fetch_1_0(q_7, t);
              t = term_e_9;
              k_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), term_t_21);
              l_55 = t;
              t = SSL_printnl(k_55, l_55);
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), term_t_21));
              t = default_system_usage_0_0(t);
              t = term_w_9;
              j_55 = t;
              t = SSL_exit(j_55);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
            }
        }
      }
  }
  o_54 = t;
  t = term_c_18;
  t = table_destroy_0_0(t);
  t = o_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = parse_options_1_0(o_99, t);
  t_55 = t;
  t = term_u_21;
  t = table_create_0_0(t);
  t = term_u_21;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_21, term_v_21, t_55);
  t = lookup_table_0_1(u_55, t);
  x_55 = t;
  t = term_v_21;
  v_55 = t;
  t = x_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(v_55, t_55, w_55, t);
  t = t_55;
  t = q_99(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_99, t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_99(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = if_verbose2_1_0(r_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  t = term_i_22;
  y_55 = t;
  t = term_b_9;
  z_55 = t;
  t = term_k_22;
  t = x_8(y_55, z_55, t);
  t = term_l_22;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  a_56 = t;
  t = term_j_17;
  e_56 = t;
  t = term_r_18;
  f_56 = t;
  t = term_s_18;
  t = u_8(e_56, f_56, t);
  b_56 = t;
  t = term_e_9;
  c_56 = t;
  t = (ATerm) ATinsert(ATempty, b_56);
  d_56 = t;
  t = SSL_printnl(c_56, d_56);
  t = a_56;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  static ATerm r_7 (ATerm t);
  static ATerm y_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_98(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              {
                ATerm r_22 = t;
                int s_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(s_22);
                  }
                else
                  {
                    t = r_22;
                    {
                      ATerm t_22 = t;
                      int w_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_8, c_8, g_8, t);
                          LocalPopChoice(w_22);
                        }
                      else
                        {
                          t = t_22;
                          {
                            ATerm x_22 = t;
                            int y_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_22);
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
  static ATerm y_7 (ATerm t)
  {
    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
    h_56 = t;
    {
      ATerm z_22 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_8 (ATerm t);
          static ATerm w_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_56 != NULL) && (g_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_8, t);
          LocalPopChoice(b_23);
        }
      else
        {
          t = z_22;
          t = term_c_23;
          g_56 = t;
        }
    }
    t = not_null(g_56);
    t = ReadFromFile_0_0(t);
    i_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_56, i_56);
    t = apply_strategy_1_0(x_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_7, z_98, x_7, y_7, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,r_16 = NULL;
  n_56 = t;
  if(match_cons(t, sym__2))
    {
      k_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_56);
  j_56 = t;
  t = l_56;
  t = Stratego_Ensugar_0_0(t);
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_56, m_56);
  r_16 = t;
  t = SSLsetAnnotations(r_16, j_56);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_9, _fail, default_usage_0_0, t);
  return(t);
}
