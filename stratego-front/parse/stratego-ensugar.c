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
Symbol sym_Hashtable_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
ATerm term_k_23;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_v_21;
ATerm term_k_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
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
ATerm term_f_17;
ATerm term_e_17;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_e_15;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_m_10;
ATerm term_e_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_w_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Some_1, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_w_8);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_w_18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_m_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_i_18);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_w_8);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_w_8);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_w_8);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_d_20);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_w_8);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
static ATerm i_7 (ATerm v_36, ATerm w_36, ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm Disambiguate_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm j_7 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm k_7 (ATerm q_60, ATerm r_60, ATerm p_60, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_7 (ATerm n_60, ATerm o_60, ATerm m_60, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm m_7 (ATerm a_61, ATerm b_61, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_7 (ATerm v_60, ATerm w_60, ATerm t);
static ATerm t_7 (ATerm x_95 (ATerm), ATerm g_35, ATerm e_35, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_7 (ATerm f_61, ATerm g_61, ATerm t);
static ATerm v_7 (ATerm r_86 (ATerm), ATerm e_24, ATerm f_24, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm w_7 (ATerm k_60, ATerm l_60, ATerm j_60, ATerm t);
ATerm repeat_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_27 (ATerm b_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
static ATerm i_8 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm j_8 (ATerm t_44, ATerm u_44, ATerm t);
static ATerm l_8 (ATerm i_98 (ATerm), ATerm a_421, ATerm z_44, ATerm t);
static ATerm k_8 (ATerm p_44, ATerm q_44, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm t);
static ATerm u_42 (ATerm o_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_8 (ATerm v_44, ATerm t);
static ATerm n_8 (ATerm d_60, ATerm e_60, ATerm t);
static ATerm o_8 (ATerm f_23, ATerm g_23, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_44 (ATerm e_43, ATerm t);
static ATerm g_44 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t);
static ATerm h_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t);
static ATerm p_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm t);
static ATerm u_8 (ATerm d_38, ATerm e_38, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_8 (ATerm x_52, ATerm y_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_8 (ATerm k_36, ATerm l_36, ATerm j_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_8 (ATerm s_33, ATerm t_33, ATerm t);
ATerm foldr_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm need_help_1_0 (ATerm d_83 (ATerm), ATerm t);
static ATerm y_8 (ATerm v_39, ATerm w_39, ATerm x_39, ATerm t);
static ATerm z_8 (ATerm y_39, ATerm z_39, ATerm t);
ATerm lookup_table_0_1 (ATerm w_37, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_40, ATerm e_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_8 (ATerm a_40, ATerm b_40, ATerm t);
static ATerm t_8 (ATerm f_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_100 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_100 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm iowrap_3_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
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
  t = term_w_8;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_a_9;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), f_0), term_e_9);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_u_9;
  p_0 = t;
  t = SSL_exit(p_0);
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
        ATerm v_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm w_9 = ATgetArgument(t, 1);
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
  t = term_x_9;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = i_7(t_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_w_8;
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
        ATerm z_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm c_10 = ATgetArgument(t, 1);
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
  t = term_e_10;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
  t = i_7(i_1, h_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_w_8;
  return(t);
}
static ATerm i_7 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm q_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
  t = u_8(v_36, w_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      {
        ATerm g_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm k_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_2);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm l_10 = ATgetArgument(t, 1);
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
  t = term_m_10;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, (ATerm) ATmakeAppl(sym__2, a_2, c_2));
  t = i_7(r_1, p_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_w_8;
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
          ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
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
ATerm Disambiguate_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm p_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL,f_2 = NULL,i_2 = NULL;
        t = SSL_explode_term(d_5);
        if(match_cons(t, sym__2))
          {
            x_1 = ATgetArgument(t, 0);
            {
              ATerm t_10 = ATgetArgument(t, 1);
              if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
                {
                  z_1 = ATgetFirst((ATermList) t_10);
                  {
                    ATerm x_10 = (ATerm) ATgetNext((ATermList) t_10);
                    if(((ATgetType(x_10) != AT_LIST) || !(ATisEmpty(x_10))))
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
        t = o_0(t);
        f_2 = t;
        t = (ATerm) ATinsert(ATempty, f_2);
        i_2 = t;
        t = SSL_mkterm(x_1, i_2);
        LocalPopChoice(s_10);
      }
    else
      {
        t = p_10;
        {
          ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
          t = SSL_explode_term(d_5);
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm y_10 = ATgetArgument(t, 1);
                if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
                  {
                    s_2 = ATgetFirst((ATermList) y_10);
                    r_2 = (ATerm) ATgetNext((ATermList) y_10);
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
            ATerm a_11 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = o_0(t);
                LocalPopChoice(b_11);
              }
            else
              {
                t = a_11;
              }
          }
          t_2 = t;
          t = u_2;
          {
            static ATerm n_1 (ATerm t)
            {
              ATerm w_3 = NULL;
              w_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_5, w_3);
              t = GreaterThan_0_0(t);
              t = w_3;
              t = o_0(t);
              return(t);
            }
            t = map_1_0(n_1, t);
          }
          v_2 = t;
          t = w_2;
          {
            ATerm c_11 = t;
            int d_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, w_2);
                t = LeftAssoc_0_0(t);
                t = w_2;
                t = o_0(t);
                LocalPopChoice(d_11);
              }
            else
              {
                t = c_11;
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
ATerm bottomup_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(f_112, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = f_112(t);
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
static ATerm j_7 (ATerm t_60, ATerm u_60, ATerm s_60, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  t = v_7(t_1, t_60, u_60, t);
  t = (ATerm) ATmakeAppl(sym__2, u_60, t_60);
  t = conc_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, s_60);
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
static ATerm k_7 (ATerm q_60, ATerm r_60, ATerm p_60, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_60, r_60);
  t = v_7(v_1, r_60, r_60, t);
  t = (ATerm) ATmakeAppl(sym__2, q_60, r_60);
  t = v_7(b_2, q_60, r_60, t);
  t = (ATerm) ATmakeAppl(sym__2, r_60, q_60);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, p_60);
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
static ATerm l_7 (ATerm n_60, ATerm o_60, ATerm m_60, ATerm t)
{
  ATerm i_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_60, o_60);
  t = v_7(j_2, o_60, o_60, t);
  t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
  t = v_7(k_2, n_60, o_60, t);
  t = (ATerm) ATmakeAppl(sym__2, o_60, n_60);
  t = conc_0_0(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, m_60);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
static ATerm m_7 (ATerm a_61, ATerm b_61, ATerm t)
{
  ATerm z_7 = NULL,e_8 = NULL,f_8 = NULL,h_8 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL;
  z_7 = t;
  t = (ATerm) ATempty;
  c_9 = t;
  t = SSL_mkterm(a_61, c_9);
  e_8 = t;
  t = (ATerm) ATempty;
  h_8 = t;
  t = SSL_mkterm(b_61, h_8);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, f_8);
  d_9 = t;
  t = term_f_11;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_8, f_8), term_f_11);
  t = t_7(m_2, d_9, f_9, t);
  t = z_7;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm s_7 (ATerm v_60, ATerm w_60, ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  g_9 = t;
  t = (ATerm) ATempty;
  k_9 = t;
  t = SSL_mkterm(v_60, k_9);
  h_9 = t;
  t = (ATerm) ATempty;
  j_9 = t;
  t = SSL_mkterm(w_60, j_9);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
  l_9 = t;
  t = term_o_11;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_9, i_9), term_o_11);
  t = t_7(n_2, l_9, m_9, t);
  t = g_9;
  return(t);
}
static ATerm t_7 (ATerm x_95 (ATerm), ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,a_10 = NULL,b_10 = NULL;
  r_9 = t;
  t = x_95(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_9, g_35, e_35);
  t = v_8(o_9, g_35, e_35, t);
  {
    ATerm p_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = term_u_11;
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, term_u_11);
        t = u_8(o_9, h_10, t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = p_11;
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
  t = (ATerm) ATmakeAppl(sym__3, o_9, term_u_11, (ATerm) ATinsert(CheckATermList(q_9), (ATerm) ATinsert(CheckATermList(p_9), g_35)));
  t = lookup_table_0_1(o_9, t);
  b_10 = t;
  t = term_u_11;
  s_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_9), (ATerm) ATinsert(CheckATermList(p_9), g_35));
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
  t = term_e_10;
  return(t);
}
static ATerm u_7 (ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm i_10 = NULL,q_10 = NULL,r_10 = NULL,v_10 = NULL,w_10 = NULL,g_11 = NULL,k_11 = NULL;
  i_10 = t;
  t = (ATerm) ATempty;
  w_10 = t;
  t = SSL_mkterm(f_61, w_10);
  q_10 = t;
  t = (ATerm) ATempty;
  v_10 = t;
  t = SSL_mkterm(g_61, v_10);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
  g_11 = t;
  t = term_w_11;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_10, r_10), term_w_11);
  t = t_7(p_2, g_11, k_11, t);
  t = i_10;
  return(t);
}
static ATerm v_7 (ATerm r_86 (ATerm), ATerm e_24, ATerm f_24, ATerm t)
{
  static ATerm x_2 (ATerm t)
  {
    ATerm l_11 = NULL;
    static ATerm g_3 (ATerm t)
    {
      ATerm m_11 = NULL;
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), m_11);
      t = r_86(t);
      return(t);
    }
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = f_24;
    t = map_1_0(g_3, t);
    return(t);
  }
  t = e_24;
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
static ATerm w_7 (ATerm k_60, ATerm l_60, ATerm j_60, ATerm t)
{
  ATerm n_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_60, l_60);
  t = v_7(h_3, l_60, l_60, t);
  t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
  t = v_7(l_3, k_60, l_60, t);
  t = (ATerm) ATmakeAppl(sym__2, l_60, k_60);
  t = conc_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, j_60);
  return(t);
}
ATerm repeat_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t)
  {
    ATerm z_11 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_84(t);
        t = p_12(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = z_11;
        t = j_84(t);
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
  t = (ATerm) ATmakeAppl(sym__2, f_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_13), term_l_13), term_k_13), term_j_13), term_i_13), term_g_13), term_c_13), term_a_13), term_y_12), term_x_12), term_v_12), term_t_12), term_s_12), term_r_12), term_q_12), term_n_12), term_m_12), term_k_12), term_j_12), term_i_12), term_f_12), term_e_12));
  t = member_0_0(t);
  t = SSL_explode_string(f_13);
  f_4 = t;
  t = (ATerm) ATinsert(CheckATermList(f_4), term_u_13);
  b_4 = t;
  t = SSL_implode_string(b_4);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,s_1 = NULL;
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_14 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_14) != AT_INT) || (ATgetInt((ATermInt) b_14) != 34)))
                _fail(t);
              r_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(r_13), term_d_14), term_c_14);
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm t_13 = NULL,x_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_13 = ATgetFirst((ATermList) t);
                x_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(x_13), term_c_14), term_c_14);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_13), term_f_14), term_c_14);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_13), term_g_14), term_c_14);
                  }
              }
          }
        }
      q_13 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_13 = ATgetFirst((ATermList) t);
          o_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_13);
      m_13 = t;
      t = o_13;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      p_13 = t;
      t = (ATerm) ATinsert(CheckATermList(p_13), n_13);
      s_1 = t;
      t = SSLsetAnnotations(s_1, m_13);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm z_14 = NULL,c_15 = NULL,d_15 = NULL;
        d_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_14 = ATgetFirst((ATermList) t);
            c_15 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm j_4 = NULL,m_4 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(d_15);
              j_4 = t;
              t = c_15;
              t = escape_chars_0_0(t);
              m_4 = t;
              t = (ATerm) ATinsert(CheckATermList(m_4), z_14);
              u_1 = t;
              t = SSLsetAnnotations(u_1, j_4);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_15;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,e_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym_Str_1))
    {
      c_22 = ATgetArgument(t, 0);
      {
        ATerm g_22 = NULL,s_4 = NULL,b_5 = NULL;
        t = SSL_explode_string(c_22);
        {
          ATerm h_14 = t;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,r_5 = NULL;
              h_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(i_14) != AT_INT) || (ATgetInt((ATermInt) i_14) != 34)))
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
              t = h_14;
            }
        }
        t = escape_chars_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_5), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
        t = conc_0_0(t);
        s_4 = t;
        t = SSL_implode_string(s_4);
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, g_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          c_22 = ATgetArgument(t, 0);
          {
            ATerm d_6 = NULL;
            t = SSL_real_to_string(c_22);
            d_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, d_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              c_22 = ATgetArgument(t, 0);
              {
                ATerm p_6 = NULL;
                t = SSL_int_to_string(c_22);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  c_22 = ATgetArgument(t, 0);
                  e_22 = ATgetArgument(t, 1);
                  {
                    ATerm a_7 = NULL;
                    t = e_22;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        a_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, c_22, a_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      c_22 = ATgetArgument(t, 0);
                      {
                        ATerm o_7 = NULL,q_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(b_22);
                        o_7 = t;
                        t = c_22;
                        t = AddLeadingPrime_0_0(t);
                        q_7 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, o_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          c_22 = ATgetArgument(t, 0);
                          e_22 = ATgetArgument(t, 1);
                          a_22 = ATgetArgument(t, 2);
                          {
                            ATerm g_8 = NULL,b_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(b_22);
                            g_8 = t;
                            t = c_22;
                            t = AddLeadingPrime_0_0(t);
                            b_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, b_9, e_22, a_22);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, g_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              c_22 = ATgetArgument(t, 0);
                              e_22 = ATgetArgument(t, 1);
                              a_22 = ATgetArgument(t, 2);
                              {
                                ATerm d_10 = NULL,j_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(b_22);
                                d_10 = t;
                                t = c_22;
                                t = AddLeadingPrime_0_0(t);
                                j_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, j_10, e_22, a_22);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, d_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  c_22 = ATgetArgument(t, 0);
                                  e_22 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_10 = NULL,z_10 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(b_22);
                                    u_10 = t;
                                    t = c_22;
                                    t = AddLeadingPrime_0_0(t);
                                    z_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, z_10, e_22);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, u_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      c_22 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_11 = NULL,j_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(b_22);
                                        h_11 = t;
                                        t = c_22;
                                        t = AddLeadingPrime_0_0(t);
                                        j_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, h_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          c_22 = ATgetArgument(t, 0);
                                          {
                                            ATerm y_11 = NULL,a_12 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(b_22);
                                            y_11 = t;
                                            t = c_22;
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
                                              c_22 = ATgetArgument(t, 0);
                                              e_22 = ATgetArgument(t, 1);
                                              {
                                                ATerm l_12 = NULL,o_12 = NULL,e_3 = NULL;
                                                t = SSLgetAnnotations(b_22);
                                                l_12 = t;
                                                t = c_22;
                                                t = AddLeadingPrime_0_0(t);
                                                o_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_12, e_22);
                                                e_3 = t;
                                                t = SSLsetAnnotations(e_3, l_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm z_12 = NULL,h_13 = NULL,f_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  c_22 = ATgetArgument(t, 0);
                                                  e_22 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(b_22);
                                              z_12 = t;
                                              t = c_22;
                                              t = AddLeadingPrime_0_0(t);
                                              h_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, h_13, e_22);
                                              f_3 = t;
                                              t = SSLsetAnnotations(f_3, z_12);
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
ATerm at_end_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  static ATerm x_25 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
    w_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_25 = ATgetFirst((ATermList) t);
        v_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_13 = NULL,e_14 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(w_25);
          y_13 = t;
          t = v_25;
          t = x_25(t);
          e_14 = t;
          t = (ATerm) ATinsert(CheckATermList(e_14), u_25);
          x_3 = t;
          t = SSLsetAnnotations(x_3, y_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_25;
        t = o_87(t);
      }
    return(t);
  }
  t = x_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_24;
    }
  else
    {
      static ATerm n_3 (ATerm t)
      {
        t = not_null(d_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          if(((d_24 != NULL) && (d_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_24;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
static ATerm b_27 (ATerm b_26, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_explode_term(b_26);
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,p_26 = NULL;
  p_26 = t;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      {
        ATerm k_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_3 (ATerm t)
            {
              t = m_26;
              return(t);
            }
            t = l_26;
            t = at_end_1_0(o_3, t);
            LocalPopChoice(n_14);
          }
        else
          {
            t = k_14;
            t = b_27(p_26, t);
          }
      }
    }
  else
    {
      t = b_27(p_26, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_27 = NULL,r_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_27;
    }
  else
    {
      t = r_27;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,d_28 = NULL,f_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,e_4 = NULL;
  l_28 = t;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  a_28 = t;
  t = SSL_explode_string(f_28);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, j_28);
  e_4 = t;
  t = SSLsetAnnotations(e_4, a_28);
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if((w_27 != ATgetFirst((ATermList) t)))
        {
          _fail(ATgetFirst((ATermList) t));
        }
      x_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_27;
  t = last_0_0(t);
  if((w_27 != t))
    {
      _fail(t);
    }
  t = k_28;
  return(t);
}
ATerm at_last_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm v_29 (ATerm t)
  {
    ATerm q_29 = NULL,t_29 = NULL,u_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_29 = ATgetFirst((ATermList) t);
        u_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(q_29);
          u_14 = t;
          t = u_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(u_29), t_29);
          t_4 = t;
          t = SSLsetAnnotations(t_4, u_14);
          t = z_87(t);
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          {
            ATerm m_15 = NULL,p_15 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(q_29);
            m_15 = t;
            t = u_29;
            t = v_29(t);
            p_15 = t;
            t = (ATerm) ATinsert(CheckATermList(p_15), t_29);
            v_4 = t;
            t = SSLsetAnnotations(v_4, m_15);
          }
        }
    }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_29 = NULL,b_30 = NULL;
      static ATerm p_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_29 != NULL) && (y_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_29 = ATgetFirst((ATermList) t);
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
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_30, not_null(y_29));
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm c_30 = NULL,d_30 = NULL;
        static ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((c_30 != NULL) && (c_30 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                c_30 = ATgetFirst((ATermList) t);
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
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, not_null(c_30));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      t = v_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_30 = ATgetFirst((ATermList) t);
          x_30 = (ATerm) ATgetNext((ATermList) t);
          t = x_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_30 = ATgetFirst((ATermList) t);
              z_30 = (ATerm) ATgetNext((ATermList) t);
              t = z_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_30;
                  if(match_string(t, "Cons"))
                    {
                      ATerm x_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_31 = NULL;
                          t = y_30;
                          t = implode_cons_0_0(t);
                          d_31 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_31), w_30);
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          t = (ATerm) ATinsert(ATempty, a_31);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, a_31);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, a_31);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, a_31);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, a_31);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, a_31);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm p_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
      t = u_34;
      if(match_string(t, "Cons"))
        {
          ATerm v_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL;
          t = v_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_15 = ATgetFirst((ATermList) t);
              p_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_15 = ATgetFirst((ATermList) t);
              r_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_34;
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
          t = v_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_e_15;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          u_34 = ATgetArgument(t, 0);
          v_34 = ATgetArgument(t, 1);
          s_34 = ATgetArgument(t, 2);
          t = s_34;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, u_34, v_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              u_34 = ATgetArgument(t, 0);
              v_34 = ATgetArgument(t, 1);
              s_34 = ATgetArgument(t, 2);
              t = s_34;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, u_34, v_34);
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  u_34 = ATgetArgument(t, 0);
                  v_34 = ATgetArgument(t, 1);
                  s_34 = ATgetArgument(t, 2);
                  {
                    ATerm j_17 = NULL,l_17 = NULL,w_17 = NULL;
                    t = u_34;
                    {
                      ATerm f_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_17 = NULL;
                          x_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_d_14, x_17);
                          t = is_quoted_0_0(t);
                          t = x_17;
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_15;
                        }
                    }
                    t = SSL_explode_string(u_34);
                    l_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_17), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                    t = conc_0_0(t);
                    w_17 = t;
                    t = SSL_implode_string(w_17);
                    j_17 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, j_17, v_34, s_34);
                  }
                }
              else
                {
                  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
                  if(match_cons(t, sym_Prim_2))
                    {
                      u_34 = ATgetArgument(t, 0);
                      v_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_34;
                  {
                    ATerm h_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm t_18 = NULL;
                        t_18 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_d_14, t_18);
                        t = is_quoted_0_0(t);
                        t = t_18;
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = h_15;
                      }
                  }
                  t = SSL_explode_string(u_34);
                  r_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_18), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                  t = conc_0_0(t);
                  s_18 = t;
                  t = SSL_implode_string(s_18);
                  q_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, q_18, v_34);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(e_112, t);
    return(t);
  }
  t = e_112(t);
  t = SRTS_all(r_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = repeat_2_0(Ensugar_0_0, _id, t);
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_38 = NULL,l_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_38 = ATgetFirst((ATermList) t);
      t_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_38;
  if(match_cons(t, sym__2))
    {
      r_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_38;
  if(match_cons(t, sym_Some_1))
    {
      j_38 = ATgetArgument(t, 0);
      t = j_38;
      if(match_string(t, "left"))
        {
          t = l_38;
          t = w_7(o_38, s_38, t_38, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = l_38;
              t = l_7(o_38, s_38, t_38, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = l_38;
              t = k_7(o_38, s_38, t_38, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = l_38;
      t = j_7(o_38, s_38, t_38, t);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(y_3, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, l_39);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm n_36 = NULL,b_37 = NULL;
  b_37 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL;
        t = SSL_explode_term(b_37);
        if(match_cons(t, sym__2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_15 = ATgetArgument(t, 1);
              if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
                {
                  b_19 = ATgetFirst((ATermList) r_15);
                  {
                    ATerm s_15 = (ATerm) ATgetNext((ATermList) r_15);
                    if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_19;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = b_37;
      }
  }
  t = topdown_1_0(s_3, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL;
      s_37 = t;
      if(match_cons(t, sym_Seq_2))
        {
          m_37 = ATgetArgument(t, 0);
          n_37 = ATgetArgument(t, 1);
          t = n_37;
          if(match_cons(t, sym_Seq_2))
            {
              o_37 = ATgetArgument(t, 0);
              r_37 = ATgetArgument(t, 1);
              {
                ATerm t_15 = t;
                int u_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, m_37, o_37);
                    t = t_3(t);
                    c_38 = t;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, c_38, r_37);
                    t = t_3(t);
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    t = s_37;
                  }
              }
            }
          else
            {
              t = s_37;
            }
        }
      else
        {
          t = s_37;
        }
      return(t);
    }
    t = bottomup_1_0(t_3, t);
  }
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, term_d_16), term_c_16))), (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATempty, term_b_16))));
  t = repeat_2_0(u_3, _id, t);
  t = n_36;
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm i_8 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_fputc(d_23, e_23);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_39);
  return(t);
}
static ATerm j_8 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm c_40 = NULL;
  t = SSL_write_term_to_stream_text(t_44, u_44);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_40);
  return(t);
}
static ATerm l_8 (ATerm i_98 (ATerm), ATerm a_421, ATerm z_44, ATerm t)
{
  ATerm i_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_421, term_e_16);
  t = p_8(t);
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_40, z_44);
  t = i_98(t);
  t = fclose_0_0(t);
  t = z_44;
  return(t);
}
static ATerm k_8 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_write_term_to_stream_baf(p_44, q_44);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_40);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm s_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym_Stream_1))
        {
          s_20 = ATgetArgument(f_16, 0);
        }
      else
        _fail(t);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(s_20, u_20, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if(match_cons(g_16, sym_Stream_1))
        {
          i_21 = ATgetArgument(g_16, 0);
        }
      else
        _fail(t);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(i_21, j_21, t);
  f_21 = t;
  t = term_h_16;
  g_21 = t;
  t = f_21;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, f_21);
  t = i_8(g_21, h_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,y_41 = NULL,z_41 = NULL,z_4 = NULL,y_4 = NULL;
  p_40 = t;
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  v_40 = t;
  t = w_40;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_40 != NULL) && (o_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_3, t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = term_k_16;
        o_40 = t;
      }
  }
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, x_40);
  y_4 = t;
  t = SSLsetAnnotations(y_4, v_40);
  t = p_40;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_40, (ATerm) ATmakeAppl(sym__2, not_null(o_40), s_40));
  z_4 = t;
  t = SSLsetAnnotations(z_4, q_40);
  u_40 = t;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,a_20 = NULL,f_20 = NULL,j_20 = NULL,q_20 = NULL,a_5 = NULL;
        t = SSLgetAnnotations(u_40);
        n_19 = t;
        t = y_41;
        t = fetch_1_0(a_4, t);
        a_20 = t;
        t = z_41;
        if(match_cons(t, sym__2))
          {
            j_20 = ATgetArgument(t, 0);
            q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8(c_4, j_20, q_20, t);
        f_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_20, f_20);
        a_5 = t;
        t = SSLsetAnnotations(a_5, n_19);
        LocalPopChoice(n_16);
      }
    else
      {
        t = l_16;
        {
          ATerm z_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(u_40);
          z_20 = t;
          t = z_41;
          if(match_cons(t, sym__2))
            {
              d_21 = ATgetArgument(t, 0);
              e_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_8(d_4, d_21, e_21, t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_41, c_21);
          c_5 = t;
          t = SSLsetAnnotations(c_5, z_20);
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
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  g_42 = t;
  t = dtime_0_0(t);
  t = g_42;
  t = f_82(t);
  f_42 = t;
  t = dtime_0_0(t);
  c_42 = t;
  t = f_42;
  if(match_cons(t, sym__2))
    {
      d_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_42), (ATerm) ATmakeAppl(sym_Runtime_1, c_42)), e_42);
  return(t);
}
static ATerm u_42 (ATerm o_42, ATerm t)
{
  t = SSL_fclose(o_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_42 = ATgetArgument(t, 0);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_42);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = u_42(s_42, t);
          }
      }
    }
  else
    {
      t = u_42(s_42, t);
    }
  return(t);
}
static ATerm m_8 (ATerm v_44, ATerm t)
{
  t = SSL_read_term_from_stream(v_44);
  return(t);
}
static ATerm n_8 (ATerm d_60, ATerm e_60, ATerm t)
{
  t = SSL_strcat(d_60, e_60);
  return(t);
}
static ATerm o_8 (ATerm f_23, ATerm g_23, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_fopen(f_23, g_23);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_stdin_stream();
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_stdout_stream();
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_42 = NULL;
  t = SSL_stderr_stream();
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_42);
  return(t);
}
static ATerm f_44 (ATerm e_43, ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
          {
            f_43 = ATgetFirst((ATermList) t_16);
            {
              ATerm v_16 = (ATerm) ATgetNext((ATermList) t_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_44 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,q_43 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(k_43);
  n_43 = t;
  t = i_43;
  if(match_cons(t, sym_Path_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_43, j_43);
  l_14 = t;
  t = SSLsetAnnotations(l_14, n_43);
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(l_43, m_43, t);
  return(t);
}
static ATerm h_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(u_43);
  x_43 = t;
  t = SSL_is_string(s_43);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, t_43);
  m_14 = t;
  t = SSLsetAnnotations(m_14, x_43);
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
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_44(c_44, t);
            LocalPopChoice(z_16);
          }
        else
          {
            t = x_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_44(d_44, e_44, c_44, t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
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
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,s_44 = NULL;
  s_44 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_44, term_e_17);
        t = p_8(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm w_21 = NULL,x_21 = NULL;
          t = term_f_17;
          x_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_17, s_44);
          t = n_8(x_21, s_44, t);
          w_21 = t;
          t = SSL_perror(w_21);
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
ATerm fetch_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  static ATerm b_46 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
    t_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_45 = ATgetFirst((ATermList) t);
        v_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_22 = NULL,q_22 = NULL,s_14 = NULL;
          t = SSLgetAnnotations(t_45);
          n_22 = t;
          t = u_45;
          t = h_87(t);
          q_22 = t;
          t = (ATerm) ATinsert(CheckATermList(v_45), q_22);
          s_14 = t;
          t = SSLsetAnnotations(s_14, n_22);
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          {
            ATerm a_23 = NULL,h_23 = NULL,t_14 = NULL;
            t = SSLgetAnnotations(t_45);
            a_23 = t;
            t = v_45;
            t = b_46(t);
            h_23 = t;
            t = (ATerm) ATinsert(CheckATermList(h_23), u_45);
            t_14 = t;
            t = SSLsetAnnotations(t_14, a_23);
          }
        }
    }
    return(t);
  }
  t = b_46(t);
  return(t);
}
static ATerm u_8 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm e_46 = NULL;
  t = lookup_table_0_1(d_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(e_38, e_46, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_46 = NULL,k_46 = NULL,m_46 = NULL;
        t = term_m_17;
        k_46 = t;
        t = term_n_17;
        m_46 = t;
        t = term_o_17;
        t = u_8(k_46, m_46, t);
        j_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_46, term_p_17);
        t = geq_0_0(t);
        t = h_46;
        t = a_110(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = i_17;
        t = h_46;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_string(t, "-k"))
    {
      t = p_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_46;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  t = SSL_string_to_int(q_46);
  r_46 = t;
  t = term_q_17;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, r_46);
  t = x_8(s_46, r_46, t);
  t = q_46;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  if(match_string(t, "-S"))
    {
      t = u_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_46;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  t = term_n_17;
  v_46 = t;
  t = term_s_17;
  w_46 = t;
  t = term_t_17;
  t = x_8(v_46, w_46, t);
  t = term_u_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_v_17;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  t = SSL_string_to_int(x_46);
  y_46 = t;
  t = term_n_17;
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, y_46);
  t = x_8(z_46, y_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  t = term_z_17;
  a_47 = t;
  t = term_w_8;
  b_47 = t;
  t = term_a_18;
  t = x_8(a_47, b_47, t);
  t = term_b_18;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, n_4, t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = Option_3_0(r_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm x_8 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_m_17;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, x_52, y_52);
  t = lookup_table_0_1(c_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(x_52, y_52, d_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, x_52, y_52);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
      t = term_w_8;
      t = e_0(t);
      j_47 = t;
      t = term_h_18;
      k_47 = t;
      t = term_i_18;
      l_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, j_47);
      t = v_8(k_47, l_47, j_47, t);
      _fail(t);
    }
  else
    {
      ATerm o_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_47;
      t = c_0(t);
      t = term_w_8;
      t = d_0(t);
      o_47 = t;
      t = (ATerm) ATinsert(CheckATermList(i_47), o_47);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  if(match_string(t, "-o"))
    {
      t = q_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_47;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  r_47 = t;
  t = term_j_18;
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, r_47);
  t = x_8(s_47, r_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_47);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, e_5, f_5, t);
  return(t);
}
static ATerm v_8 (ATerm k_36, ATerm l_36, ATerm j_36, ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = u_8(k_36, l_36, t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
  }
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, (ATerm) ATinsert(CheckATermList(v_47), j_36));
  t = lookup_table_0_1(k_36, t);
  y_47 = t;
  t = (ATerm) ATinsert(CheckATermList(v_47), j_36);
  w_47 = t;
  t = y_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(l_36, w_47, x_47, t);
  t = u_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
      t = term_w_8;
      t = n_0(t);
      j_48 = t;
      t = term_h_18;
      k_48 = t;
      t = term_i_18;
      l_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, j_48);
      t = v_8(k_48, l_48, j_48, t);
      _fail(t);
    }
  else
    {
      ATerm p_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_48 = ATgetFirst((ATermList) t);
          g_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_48 = ATgetFirst((ATermList) t);
          i_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_48;
      t = k_0(t);
      t = h_48;
      t = l_0(t);
      p_48 = t;
      t = (ATerm) ATinsert(CheckATermList(i_48), p_48);
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_string(t, "-i"))
    {
      t = r_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_48;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  s_48 = t;
  t = term_p_18;
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, s_48);
  t = x_8(t_48, s_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_48);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, q_5, u_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_8;
  t = whoami_0_0(t);
  u_48 = t;
  t = term_a_9;
  w_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_18), u_48);
  x_48 = t;
  t = SSL_printnl(w_48, x_48);
  t = term_u_9;
  v_48 = t;
  t = SSL_exit(v_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_m_17;
  y_48 = t;
  t = term_w_18;
  z_48 = t;
  t = term_x_18;
  t = u_8(y_48, z_48, t);
  return(t);
}
static ATerm q_8 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_33, t_33);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      t = SSL_addr(s_33, t_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_49;
      t = l_94(t);
    }
  else
    {
      ATerm g_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_49 = ATgetFirst((ATermList) t);
          d_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_49;
      t = foldr_2_0(l_94, m_94, t);
      g_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_49, g_49);
      t = m_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(u_23, y_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_49 = NULL,m_23 = NULL,o_23 = NULL;
  t = times_0_0(t);
  o_23 = t;
  t = SSL_explode_term(o_23);
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
  t = foldr_2_0(v_5, w_5, t);
  j_49 = t;
  t = SSL_TicksToSeconds(j_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_49;
        if((v_49 != t))
          {
            _fail(t);
          }
        t = u_49;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_49, w_49);
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              t = SSL_gtr(v_49, w_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
        t = term_m_17;
        d_50 = t;
        t = term_n_17;
        e_50 = t;
        t = term_o_17;
        t = u_8(d_50, e_50, t);
        c_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_50, term_u_9);
        t = geq_0_0(t);
        t = a_50;
        t = z_109(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = a_50;
      }
  }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,j_50 = NULL,k_50 = NULL;
  t = run_time_0_0(t);
  g_50 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  h_50 = t;
  t = term_a_9;
  j_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), g_50), term_i_19), h_50);
  k_50 = t;
  t = SSL_printnl(j_50, k_50);
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_19), g_50), term_i_19), h_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_17;
  l_50 = t;
  t = SSL_exit(l_50);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  w_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_50 = ATgetArgument(t, 0);
          {
            ATerm t_24 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(w_50);
            t_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_50);
            g_15 = t;
            t = SSLsetAnnotations(g_15, t_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_50 = NULL,p_50 = NULL;
      t = term_m_17;
      o_50 = t;
      t = term_m_19;
      p_50 = t;
      t = term_o_19;
      t = u_8(o_50, p_50, t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      t = fetch_1_0(h_6, t);
    }
  t = d_83(t);
  return(t);
}
static ATerm y_8 (ATerm v_39, ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm y_50 = NULL;
  t = SSL_hashtable_put(x_39, v_39, w_39);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_50);
  return(t);
}
static ATerm z_8 (ATerm y_39, ATerm z_39, ATerm t)
{
  t = SSL_hashtable_get(z_39, y_39);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_37, ATerm t)
{
  ATerm h_51 = NULL;
  t = table_hashtable_0_0(t);
  h_51 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        t = h_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_8(w_37, b_25, t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm g_25 = NULL;
          t = w_37;
          t = table_create_0_0(t);
          t = h_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(w_37, g_25, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm k_51 = NULL;
  t = SSL_hashtable_create(d_40, e_40);
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL;
  l_51 = t;
  t = term_r_19;
  p_51 = t;
  t = term_s_19;
  q_51 = t;
  t = l_51;
  t = new_hashtable_0_2(p_51, q_51, t);
  m_51 = t;
  t = l_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(l_51, m_51, n_51, t);
  t = l_51;
  return(t);
}
static ATerm s_8 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_hashtable_remove(b_40, a_40);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_51);
  return(t);
}
static ATerm t_8 (ATerm f_40, ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_hashtable_destroy(f_40);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_table_hashtable();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
  u_51 = t;
  t = table_hashtable_0_0(t);
  v_51 = t;
  t = lookup_table_0_1(u_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(x_51, t);
  t = v_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(u_51, w_51, t);
  t = u_51;
  return(t);
}
ATerm map_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  static ATerm m_52 (ATerm t)
  {
    ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
    j_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_52;
      }
    else
      {
        ATerm p_25 = NULL,z_25 = NULL,a_26 = NULL,m_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_52 = ATgetFirst((ATermList) t);
            l_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_52);
        p_25 = t;
        t = k_52;
        t = x_86(t);
        z_25 = t;
        t = l_52;
        t = m_52(t);
        a_26 = t;
        t = (ATerm) ATinsert(CheckATermList(a_26), z_25);
        m_16 = t;
        t = SSLsetAnnotations(m_16, p_25);
      }
    return(t);
  }
  t = m_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_52 = ATgetFirst((ATermList) t);
      q_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_52 = NULL,v_52 = NULL;
        static ATerm j_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_52)), not_null(v_52));
          return(t);
        }
        t = q_52;
        t = i_0(t);
        if(((u_52 != NULL) && (u_52 != t)))
          _fail(t);
        else
          u_52 = t;
        t = p_52;
        t = g_0(t);
        if(((v_52 != NULL) && (v_52 != t)))
          _fail(t);
        else
          v_52 = t;
        t = q_52;
        t = reverse_acc_2_0(g_0, j_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,o_16 = NULL;
  f_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_53);
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_53);
  o_16 = t;
  t = SSLsetAnnotations(o_16, d_53);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm h_53 = NULL;
  h_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_53), term_t_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_53 = NULL,c_53 = NULL;
      t = term_m_17;
      b_53 = t;
      t = term_w_18;
      c_53 = t;
      t = term_x_18;
      t = u_8(b_53, c_53, t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = fetch_1_0(k_6, t);
    }
  t = term_w_19;
  t = echo_0_0(t);
  t = term_h_18;
  z_52 = t;
  t = term_i_18;
  a_53 = t;
  t = term_x_19;
  t = u_8(z_52, a_53, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_20 = ATgetFirst((ATermList) t);
                ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_53;
          }
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = (ATerm) ATinsert(ATempty, j_53);
      }
  }
  k_53 = t;
  t = term_k_16;
  l_53 = t;
  t = SSL_printnl(l_53, k_53);
  t = j_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  t = term_m_17;
  p_53 = t;
  t = term_w_18;
  q_53 = t;
  t = term_x_18;
  t = u_8(p_53, q_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_d_20;
  r_53 = t;
  t = term_w_8;
  s_53 = t;
  t = term_e_20;
  t = x_8(r_53, s_53, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  t = term_d_20;
  v_53 = t;
  t = term_w_8;
  w_53 = t;
  t = term_e_20;
  t = x_8(v_53, w_53, t);
  t = term_h_20;
  t_53 = t;
  t = term_w_8;
  u_53 = t;
  t = term_i_20;
  t = x_8(t_53, u_53, t);
  t = term_k_20;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, s_6, t_6, t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = Option_3_0(u_6, v_6, y_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,r_16 = NULL;
  c_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_53 = ATgetFirst((ATermList) t);
      z_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_54);
  x_53 = t;
  t = y_53;
  t = u_76(t);
  a_54 = t;
  t = z_53;
  t = v_76(t);
  b_54 = t;
  t = (ATerm) ATinsert(CheckATermList(b_54), a_54);
  r_16 = t;
  t = SSLsetAnnotations(r_16, x_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,m_54 = NULL,n_54 = NULL,u_16 = NULL;
  h_54 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_20;
        t = p_100(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
      }
  }
  t = h_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_54 = ATgetFirst((ATermList) t);
      k_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_54);
  i_54 = t;
  t = term_w_18;
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, j_54);
  t = x_8(n_54, j_54, t);
  t = k_54;
  {
    static ATerm x_54 (ATerm t)
    {
      ATerm t_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_54 = NULL;
              q_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_54;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              t = p_100(t);
              t = Cons_2_0(_id, x_54, t);
            }
          LocalPopChoice(v_20);
        }
      else
        {
          t = t_20;
          {
            ATerm t_54 = NULL,u_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_54 = ATgetFirst((ATermList) t);
                u_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_54), (ATerm) ATmakeAppl(sym_Undefined_1, t_54));
          }
        }
      return(t);
    }
    t = x_54(t);
  }
  m_54 = t;
  t = (ATerm) ATinsert(CheckATermList(m_54), (ATerm) ATmakeAppl(sym_Program_1, j_54));
  u_16 = t;
  t = SSLsetAnnotations(u_16, i_54);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  if(match_string(t, "--help"))
    {
      t = k_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_55;
        }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_m_19;
  l_55 = t;
  t = term_w_8;
  m_55 = t;
  t = term_y_20;
  t = x_8(l_55, m_55, t);
  t = term_a_21;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
  e_55 = t;
  t = term_h_18;
  f_55 = t;
  t = term_k_21;
  t = lookup_table_0_1(f_55, t);
  j_55 = t;
  t = term_i_18;
  g_55 = t;
  t = (ATerm) ATempty;
  h_55 = t;
  t = j_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(g_55, h_55, i_55, t);
  t = e_55;
  {
    static ATerm z_6 (ATerm t)
    {
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_100(t);
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
                t = Option_3_0(b_7, c_7, d_7, t);
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
    t = parse_options_p__1_0(z_6, t);
  }
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = NULL;
        x_55 = t;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_26 = NULL;
              t = x_55;
              {
                ATerm t_21 = t;
                int u_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_26 = NULL,o_26 = NULL;
                    t = term_m_17;
                    n_26 = t;
                    t = term_m_19;
                    o_26 = t;
                    t = term_o_19;
                    t = u_8(n_26, o_26, t);
                    LocalPopChoice(u_21);
                  }
                else
                  {
                    t = t_21;
                    t = fetch_1_0(e_7, t);
                  }
              }
              t = x_55;
              t = default_system_usage_0_0(t);
              t = term_s_17;
              k_26 = t;
              t = SSL_exit(k_26);
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              {
                ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
                t = term_m_17;
                v_26 = t;
                t = term_d_20;
                w_26 = t;
                t = term_v_21;
                t = u_8(v_26, w_26, t);
                t = x_55;
                t = default_system_about_0_0(t);
                t = term_s_17;
                u_26 = t;
                t = SSL_exit(u_26);
              }
            }
        }
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
              static ATerm h_7 (ATerm t)
              {
                ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,w_16 = NULL;
                d_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_56);
                b_56 = t;
                t = c_56;
                if(((c_55 != NULL) && (c_55 != t)))
                  _fail(t);
                else
                  c_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_56);
                w_16 = t;
                t = SSLsetAnnotations(w_16, b_56);
                return(t);
              }
              t = fetch_1_0(h_7, t);
              t = term_a_9;
              z_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), term_d_22);
              a_56 = t;
              t = SSL_printnl(z_55, a_56);
              t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), term_d_22));
              t = default_system_usage_0_0(t);
              t = term_u_9;
              y_55 = t;
              t = SSL_exit(y_55);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
            }
        }
      }
  }
  d_55 = t;
  t = term_h_18;
  t = table_destroy_0_0(t);
  t = d_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  t = parse_options_1_0(f_83, t);
  i_56 = t;
  t = term_f_22;
  t = table_create_0_0(t);
  t = term_f_22;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, term_h_22, i_56);
  t = lookup_table_0_1(j_56, t);
  m_56 = t;
  t = term_h_22;
  k_56 = t;
  t = m_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(k_56, i_56, l_56, t);
  t = i_56;
  t = h_83(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_83, t);
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
              t = i_83(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = if_verbose2_1_0(c_8, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL;
  t = term_m_22;
  n_56 = t;
  t = term_w_8;
  o_56 = t;
  t = term_o_22;
  t = x_8(n_56, o_56, t);
  t = term_p_22;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  p_56 = t;
  t = term_m_17;
  t_56 = t;
  t = term_w_18;
  u_56 = t;
  t = term_x_18;
  t = u_8(t_56, u_56, t);
  q_56 = t;
  t = term_a_9;
  r_56 = t;
  t = (ATerm) ATinsert(ATempty, q_56);
  s_56 = t;
  t = SSL_printnl(r_56, s_56);
  t = p_56;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  static ATerm p_7 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_82(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(x_22);
                  }
                else
                  {
                    t = w_22;
                    {
                      ATerm y_22 = t;
                      int z_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_7, a_8, b_8, t);
                          LocalPopChoice(z_22);
                        }
                      else
                        {
                          t = y_22;
                          {
                            ATerm b_23 = t;
                            int c_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_23);
                              }
                            else
                              {
                                t = b_23;
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
  static ATerm x_7 (ATerm t)
  {
    ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
    w_56 = t;
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_56 != NULL) && (v_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_8, t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = term_k_23;
          v_56 = t;
        }
    }
    t = not_null(v_56);
    t = ReadFromFile_0_0(t);
    x_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
    t = apply_strategy_1_0(o_82, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(p_7, q_82, r_7, x_7, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,y_16 = NULL;
  c_57 = t;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  y_56 = t;
  t = a_57;
  t = Stratego_Ensugar_0_0(t);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, b_57);
  y_16 = t;
  t = SSLsetAnnotations(y_16, y_56);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_8, _fail, default_usage_0_0, t);
  return(t);
}
