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
}
ATerm term_t_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_z_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_j_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Some_1, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_h_9);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_n_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_c_18);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_h_9);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_h_9);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_h_9);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_r_19);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_h_9);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm LeftAssoc_0_0 (ATerm t);
ATerm GreaterThan_0_0 (ATerm t);
static ATerm w_6 (ATerm s_36, ATerm t_36, ATerm t);
ATerm RightAssoc_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm Disambiguate_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_110 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm x_6 (ATerm d_59, ATerm e_59, ATerm c_59, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm y_6 (ATerm a_59, ATerm b_59, ATerm z_58, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm z_6 (ATerm x_58, ATerm y_58, ATerm w_58, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm a_7 (ATerm k_59, ATerm l_59, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm g_7 (ATerm f_59, ATerm g_59, ATerm t);
static ATerm h_7 (ATerm w_93 (ATerm), ATerm d_35, ATerm b_35, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm i_7 (ATerm p_59, ATerm q_59, ATerm t);
static ATerm j_7 (ATerm y_84 (ATerm), ATerm b_24, ATerm c_24, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm k_7 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t);
ATerm repeat_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t);
ATerm member_0_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_26 (ATerm v_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm is_quoted_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm g_86 (ATerm), ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_110 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
static ATerm w_7 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm x_7 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm z_7 (ATerm g_96 (ATerm), ATerm n_400, ATerm j_43, ATerm t);
static ATerm y_7 (ATerm z_42, ATerm a_43, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm a_41 (ATerm u_40, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_8 (ATerm f_43, ATerm t);
static ATerm b_8 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm c_8 (ATerm c_23, ATerm d_23, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_42 (ATerm k_41, ATerm t);
static ATerm m_42 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm t);
static ATerm n_42 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm t);
static ATerm d_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_85 (ATerm), ATerm t);
static ATerm g_8 (ATerm y_37, ATerm z_37, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_107 (ATerm), ATerm t);
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
static ATerm j_8 (ATerm h_51, ATerm i_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_8 (ATerm h_36, ATerm i_36, ATerm g_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_8 (ATerm p_33, ATerm q_33, ATerm t);
ATerm foldr_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_107 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm need_help_1_0 (ATerm k_81 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_98 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm parse_options_1_0 (ATerm m_98 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm iowrap_3_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
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
  t = term_h_9;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_i_9;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), f_0), term_m_9);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = term_o_9;
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
        ATerm p_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm q_9 = ATgetArgument(t, 1);
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
  t = term_u_9;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym__2, v_0, w_0));
  t = w_6(t_0, b_0, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_h_9;
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
        ATerm w_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      {
        ATerm x_9 = ATgetArgument(t, 1);
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
  t = term_z_9;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
  t = w_6(i_1, h_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm c_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_h_9;
  return(t);
}
static ATerm w_6 (ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm q_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
  t = g_8(s_36, t_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_1 = ATgetFirst((ATermList) t);
      {
        ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm h_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_2);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
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
  t = term_j_10;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, (ATerm) ATmakeAppl(sym__2, a_2, c_2));
  t = w_6(r_1, p_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_h_9;
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
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL,f_2 = NULL,i_2 = NULL;
        t = SSL_explode_term(d_5);
        if(match_cons(t, sym__2))
          {
            x_1 = ATgetArgument(t, 0);
            {
              ATerm o_10 = ATgetArgument(t, 1);
              if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
                {
                  z_1 = ATgetFirst((ATermList) o_10);
                  {
                    ATerm q_10 = (ATerm) ATgetNext((ATermList) o_10);
                    if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
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
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
          t = SSL_explode_term(d_5);
          if(match_cons(t, sym__2))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm r_10 = ATgetArgument(t, 1);
                if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
                  {
                    s_2 = ATgetFirst((ATermList) r_10);
                    r_2 = (ATerm) ATgetNext((ATermList) r_10);
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
            ATerm t_10 = t;
            int y_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, s_2);
                t = RightAssoc_0_0(t);
                t = s_2;
                t = o_0(t);
                LocalPopChoice(y_10);
              }
            else
              {
                t = t_10;
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
            ATerm a_11 = t;
            int b_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, d_5, w_2);
                t = LeftAssoc_0_0(t);
                t = w_2;
                t = o_0(t);
                LocalPopChoice(b_11);
              }
            else
              {
                t = a_11;
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
ATerm bottomup_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = bottomup_1_0(d_110, t);
    return(t);
  }
  t = SRTS_all(o_1, t);
  t = d_110(t);
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
  t = i_7(n_5, o_5, t);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(l_5, m_5, t);
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(j_5, k_5, t);
  return(t);
}
static ATerm x_6 (ATerm d_59, ATerm e_59, ATerm c_59, ATerm t)
{
  ATerm g_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_59, e_59);
  t = j_7(t_1, d_59, e_59, t);
  t = (ATerm) ATmakeAppl(sym__2, e_59, d_59);
  t = conc_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, c_59);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(u_5, v_5, t);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(s_5, t_5, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(c_6, e_6, t);
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(y_5, b_6, t);
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(w_5, x_5, t);
  return(t);
}
static ATerm y_6 (ATerm a_59, ATerm b_59, ATerm z_58, ATerm t)
{
  ATerm p_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_59, b_59);
  t = j_7(v_1, b_59, b_59, t);
  t = (ATerm) ATmakeAppl(sym__2, a_59, b_59);
  t = j_7(b_2, a_59, b_59, t);
  t = (ATerm) ATmakeAppl(sym__2, b_59, a_59);
  t = conc_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_5, z_58);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm j_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(j_6, n_6, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm v_6 = NULL,b_7 = NULL,m_7 = NULL,n_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(u_7, v_7, t);
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(m_7, n_7, t);
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(v_6, b_7, t);
  return(t);
}
static ATerm z_6 (ATerm x_58, ATerm y_58, ATerm w_58, ATerm t)
{
  ATerm f_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_58, y_58);
  t = j_7(j_2, y_58, y_58, t);
  t = (ATerm) ATmakeAppl(sym__2, x_58, y_58);
  t = j_7(k_2, x_58, y_58, t);
  t = (ATerm) ATmakeAppl(sym__2, y_58, x_58);
  t = conc_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_6, w_58);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
static ATerm a_7 (ATerm k_59, ATerm l_59, ATerm t)
{
  ATerm i_8 = NULL,m_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  i_8 = t;
  t = (ATerm) ATempty;
  q_8 = t;
  t = SSL_mkterm(k_59, q_8);
  m_8 = t;
  t = (ATerm) ATempty;
  p_8 = t;
  t = SSL_mkterm(l_59, p_8);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_8, n_8);
  r_8 = t;
  t = term_e_11;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_8, n_8), term_e_11);
  t = h_7(m_2, r_8, s_8, t);
  t = i_8;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm g_7 (ATerm f_59, ATerm g_59, ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  u_8 = t;
  t = (ATerm) ATempty;
  z_8 = t;
  t = SSL_mkterm(f_59, z_8);
  v_8 = t;
  t = (ATerm) ATempty;
  y_8 = t;
  t = SSL_mkterm(g_59, y_8);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
  a_9 = t;
  t = term_j_11;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_8, w_8), term_j_11);
  t = h_7(n_2, a_9, b_9, t);
  t = u_8;
  return(t);
}
static ATerm h_7 (ATerm w_93 (ATerm), ATerm d_35, ATerm b_35, ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,k_9 = NULL,l_9 = NULL,r_9 = NULL,s_9 = NULL;
  l_9 = t;
  t = w_93(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_9, d_35, b_35);
  t = h_8(c_9, d_35, b_35, t);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_p_11;
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, term_p_11);
        t = g_8(c_9, t_9, t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_9 = ATgetFirst((ATermList) t);
      k_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_11;
  r_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), (ATerm) ATinsert(CheckATermList(d_9), d_35));
  s_9 = t;
  t = SSL_table_put(c_9, r_9, s_9);
  t = l_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_z_9;
  return(t);
}
static ATerm i_7 (ATerm p_59, ATerm q_59, ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,f_10 = NULL,g_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  a_10 = t;
  t = (ATerm) ATempty;
  u_10 = t;
  t = SSL_mkterm(p_59, u_10);
  b_10 = t;
  t = (ATerm) ATempty;
  g_10 = t;
  t = SSL_mkterm(q_59, g_10);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_10, f_10);
  v_10 = t;
  t = term_r_11;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_10, f_10), term_r_11);
  t = h_7(p_2, v_10, w_10, t);
  t = a_10;
  return(t);
}
static ATerm j_7 (ATerm y_84 (ATerm), ATerm b_24, ATerm c_24, ATerm t)
{
  static ATerm x_2 (ATerm t)
  {
    ATerm x_10 = NULL;
    static ATerm g_3 (ATerm t)
    {
      ATerm z_10 = NULL;
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), z_10);
      t = y_84(t);
      return(t);
    }
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = c_24;
    t = map_1_0(g_3, t);
    return(t);
  }
  t = b_24;
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(g_11, h_11, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,w_11 = NULL,b_12 = NULL,d_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(d_12, i_12, t);
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(w_11, b_12, t);
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(l_11, m_11, t);
  return(t);
}
static ATerm k_7 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t)
{
  ATerm c_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_58, v_58);
  t = j_7(h_3, v_58, v_58, t);
  t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
  t = j_7(l_3, u_58, v_58, t);
  t = (ATerm) ATmakeAppl(sym__2, v_58, u_58);
  t = conc_0_0(t);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_11, t_58);
  return(t);
}
ATerm repeat_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  static ATerm k_12 (ATerm t)
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_82(t);
        t = k_12(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        t = q_82(t);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm member_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,b_1 = NULL;
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
    static ATerm m_3 (ATerm t)
    {
      if((m_12 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1_0(m_3, t);
  }
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_12, o_12);
  b_1 = t;
  t = SSLsetAnnotations(b_1, l_12);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm q_12 = NULL,b_4 = NULL,f_4 = NULL;
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), term_m_13), term_l_13), term_k_13), term_i_13), term_f_13), term_d_13), term_b_13), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_r_12), term_j_12), term_g_12), term_f_12), term_c_12), term_a_12), term_z_11), term_y_11), term_x_11));
  t = member_0_0(t);
  t = SSL_explode_string(q_12);
  f_4 = t;
  t = (ATerm) ATinsert(CheckATermList(f_4), term_p_13);
  b_4 = t;
  t = SSL_implode_string(b_4);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,e_13 = NULL,s_1 = NULL;
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_13 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_13 = ATgetFirst((ATermList) t);
              if(((ATgetType(u_13) != AT_INT) || (ATgetInt((ATermInt) u_13) != 34)))
                _fail(t);
              h_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_13), term_w_13), term_v_13);
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm j_13 = NULL,n_13 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_13 = ATgetFirst((ATermList) t);
                n_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_13;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(n_13), term_v_13), term_v_13);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_13), term_y_13), term_v_13);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_13), term_b_14), term_v_13);
                  }
              }
          }
        }
      e_13 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_12 = ATgetFirst((ATermList) t);
          z_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_13);
      x_12 = t;
      t = z_12;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      a_13 = t;
      t = (ATerm) ATinsert(CheckATermList(a_13), y_12);
      s_1 = t;
      t = SSLsetAnnotations(s_1, x_12);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm m_14 = NULL,n_14 = NULL,s_14 = NULL;
        s_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            n_14 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm j_4 = NULL,m_4 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(s_14);
              j_4 = t;
              t = n_14;
              t = escape_chars_0_0(t);
              m_4 = t;
              t = (ATerm) ATinsert(CheckATermList(m_4), m_14);
              u_1 = t;
              t = SSLsetAnnotations(u_1, j_4);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_14;
          }
      }
    }
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm k_20 = NULL,o_20 = NULL,q_20 = NULL,n_21 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Str_1))
    {
      q_20 = ATgetArgument(t, 0);
      {
        ATerm q_21 = NULL,s_4 = NULL,b_5 = NULL;
        t = SSL_explode_string(q_20);
        {
          ATerm c_14 = t;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,r_5 = NULL;
              h_5 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_14 = ATgetFirst((ATermList) t);
                  if(((ATgetType(e_14) != AT_INT) || (ATgetInt((ATermInt) e_14) != 34)))
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
              t = c_14;
            }
        }
        t = escape_chars_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_5), term_w_13), (ATerm) ATinsert(ATempty, term_w_13));
        t = conc_0_0(t);
        s_4 = t;
        t = SSL_implode_string(s_4);
        q_21 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, q_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm g_6 = NULL;
            t = SSL_real_to_string(q_20);
            g_6 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, g_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_20 = ATgetArgument(t, 0);
              {
                ATerm p_6 = NULL;
                t = SSL_int_to_string(q_20);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Anno_2))
                {
                  q_20 = ATgetArgument(t, 0);
                  n_21 = ATgetArgument(t, 1);
                  {
                    ATerm e_7 = NULL;
                    t = n_21;
                    t = Ensugar_0_0(t);
                    if(match_cons(t, sym_List_1))
                      {
                        e_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Anno_2, q_20, e_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      q_20 = ATgetArgument(t, 0);
                      {
                        ATerm r_7 = NULL,t_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(o_20);
                        r_7 = t;
                        t = q_20;
                        t = AddLeadingPrime_0_0(t);
                        t_7 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, r_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          q_20 = ATgetArgument(t, 0);
                          n_21 = ATgetArgument(t, 1);
                          k_20 = ATgetArgument(t, 2);
                          {
                            ATerm f_9 = NULL,j_9 = NULL,z_2 = NULL;
                            t = SSLgetAnnotations(o_20);
                            f_9 = t;
                            t = q_20;
                            t = AddLeadingPrime_0_0(t);
                            j_9 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, j_9, n_21, k_20);
                            z_2 = t;
                            t = SSLsetAnnotations(z_2, f_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              q_20 = ATgetArgument(t, 0);
                              n_21 = ATgetArgument(t, 1);
                              k_20 = ATgetArgument(t, 2);
                              {
                                ATerm y_9 = NULL,e_10 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(o_20);
                                y_9 = t;
                                t = q_20;
                                t = AddLeadingPrime_0_0(t);
                                e_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, e_10, n_21, k_20);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, y_9);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  q_20 = ATgetArgument(t, 0);
                                  n_21 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_10 = NULL,s_10 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(o_20);
                                    p_10 = t;
                                    t = q_20;
                                    t = AddLeadingPrime_0_0(t);
                                    s_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, s_10, n_21);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, p_10);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      q_20 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_11 = NULL,k_11 = NULL,c_3 = NULL;
                                        t = SSLgetAnnotations(o_20);
                                        i_11 = t;
                                        t = q_20;
                                        t = AddLeadingPrime_0_0(t);
                                        k_11 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_11);
                                        c_3 = t;
                                        t = SSLsetAnnotations(c_3, i_11);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          q_20 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_11 = NULL,u_11 = NULL,d_3 = NULL;
                                            t = SSLgetAnnotations(o_20);
                                            s_11 = t;
                                            t = q_20;
                                            t = AddLeadingPrime_0_0(t);
                                            u_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, u_11);
                                            d_3 = t;
                                            t = SSLsetAnnotations(d_3, s_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              q_20 = ATgetArgument(t, 0);
                                              n_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm e_12 = NULL,h_12 = NULL,e_3 = NULL;
                                                t = SSLgetAnnotations(o_20);
                                                e_12 = t;
                                                t = q_20;
                                                t = AddLeadingPrime_0_0(t);
                                                h_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_12, n_21);
                                                e_3 = t;
                                                t = SSLsetAnnotations(e_3, e_12);
                                              }
                                            }
                                          else
                                            {
                                              ATerm c_13 = NULL,g_13 = NULL,f_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  q_20 = ATgetArgument(t, 0);
                                                  n_21 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(o_20);
                                              c_13 = t;
                                              t = q_20;
                                              t = AddLeadingPrime_0_0(t);
                                              g_13 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, g_13, n_21);
                                              f_3 = t;
                                              t = SSLsetAnnotations(f_3, c_13);
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
ATerm at_end_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  static ATerm i_25 (ATerm t)
  {
    ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
    h_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_25 = ATgetFirst((ATermList) t);
        g_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_13 = NULL,d_14 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(h_25);
          x_13 = t;
          t = g_25;
          t = i_25(t);
          d_14 = t;
          t = (ATerm) ATinsert(CheckATermList(d_14), f_25);
          x_3 = t;
          t = SSLsetAnnotations(x_3, x_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_25;
        t = v_85(t);
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,u_23 = NULL;
  p_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_23;
    }
  else
    {
      static ATerm n_3 (ATerm t)
      {
        t = not_null(u_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          if(((u_23 != NULL) && (u_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      t = at_end_1_0(n_3, t);
    }
  return(t);
}
static ATerm t_26 (ATerm v_25, ATerm t)
{
  ATerm b_26 = NULL;
  t = SSL_explode_term(v_25);
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_26 = NULL,g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_3 (ATerm t)
            {
              t = g_26;
              return(t);
            }
            t = d_26;
            t = at_end_1_0(o_3, t);
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            t = t_26(h_26, t);
          }
      }
    }
  else
    {
      t = t_26(h_26, t);
    }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_27 = ATgetFirst((ATermList) t);
      c_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_27;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_27;
    }
  else
    {
      t = c_27;
      t = last_0_0(t);
    }
  return(t);
}
ATerm is_quoted_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,e_4 = NULL;
  a_28 = t;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_28);
  s_27 = t;
  t = SSL_explode_string(w_27);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_27, y_27);
  e_4 = t;
  t = SSLsetAnnotations(e_4, s_27);
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
ATerm at_last_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  static ATerm i_29 (ATerm t)
  {
    ATerm d_29 = NULL,g_29 = NULL,h_29 = NULL;
    d_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_29 = ATgetFirst((ATermList) t);
        h_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_14 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(d_29);
          r_14 = t;
          t = h_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(h_29), g_29);
          t_4 = t;
          t = SSLsetAnnotations(t_4, r_14);
          t = g_86(t);
          LocalPopChoice(l_14);
        }
      else
        {
          t = i_14;
          {
            ATerm g_15 = NULL,j_15 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(d_29);
            g_15 = t;
            t = h_29;
            t = i_29(t);
            j_15 = t;
            t = (ATerm) ATinsert(CheckATermList(j_15), g_29);
            v_4 = t;
            t = SSLsetAnnotations(v_4, g_15);
          }
        }
    }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm split_last_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_29 = NULL,q_29 = NULL;
      static ATerm p_3 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_29 != NULL) && (p_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_29 = ATgetFirst((ATermList) t);
            {
              ATerm q_14 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATempty;
        return(t);
      }
      t = at_last_1_0(p_3, t);
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, not_null(p_29));
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm r_29 = NULL,t_29 = NULL;
        static ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((r_29 != NULL) && (r_29 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                r_29 = ATgetFirst((ATermList) t);
              {
                ATerm t_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(t_14) != AT_LIST) || !(ATisEmpty(t_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        t = at_last_1_0(q_3, t);
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_29, not_null(r_29));
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm e_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
      t = g_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_30 = ATgetFirst((ATermList) t);
          i_30 = (ATerm) ATgetNext((ATermList) t);
          t = i_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_30 = ATgetFirst((ATermList) t);
              m_30 = (ATerm) ATgetNext((ATermList) t);
              t = m_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_30;
                  if(match_string(t, "Cons"))
                    {
                      ATerm u_14 = t;
                      int v_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_30 = NULL;
                          t = l_30;
                          t = implode_cons_0_0(t);
                          s_30 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_30), h_30);
                          LocalPopChoice(v_14);
                        }
                      else
                        {
                          t = u_14;
                          t = (ATerm) ATinsert(ATempty, n_30);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, n_30);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, n_30);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, n_30);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, n_30);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, n_30);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm j_34 = NULL,l_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
      t = q_34;
      if(match_string(t, "Cons"))
        {
          ATerm p_15 = NULL,q_15 = NULL,s_15 = NULL,t_15 = NULL;
          t = r_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_14 = ATgetFirst((ATermList) t);
              j_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_14 = ATgetFirst((ATermList) t);
              l_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              s_15 = ATgetArgument(t, 0);
              t_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_15;
          if(match_cons(t, sym_Op_2))
            {
              p_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              t = q_15;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_15;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, s_15);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, s_15, t_15);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, s_15, t_15);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, s_15, t_15);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = r_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_z_14;
        }
    }
  else
    {
      if(match_cons(t, sym_StratRule_3))
        {
          q_34 = ATgetArgument(t, 0);
          r_34 = ATgetArgument(t, 1);
          o_34 = ATgetArgument(t, 2);
          t = o_34;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, q_34, r_34);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              q_34 = ATgetArgument(t, 0);
              r_34 = ATgetArgument(t, 1);
              o_34 = ATgetArgument(t, 2);
              t = o_34;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, q_34, r_34);
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  q_34 = ATgetArgument(t, 0);
                  r_34 = ATgetArgument(t, 1);
                  o_34 = ATgetArgument(t, 2);
                  {
                    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
                    t = q_34;
                    {
                      ATerm a_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm r_17 = NULL;
                          r_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_w_13, r_17);
                          t = is_quoted_0_0(t);
                          t = r_17;
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = a_15;
                        }
                    }
                    t = SSL_explode_string(q_34);
                    o_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_17), term_w_13), (ATerm) ATinsert(ATempty, term_w_13));
                    t = conc_0_0(t);
                    p_17 = t;
                    t = SSL_implode_string(p_17);
                    n_17 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_17, r_34, o_34);
                  }
                }
              else
                {
                  ATerm k_18 = NULL,o_18 = NULL,q_18 = NULL;
                  if(match_cons(t, sym_Prim_2))
                    {
                      q_34 = ATgetArgument(t, 0);
                      r_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_34;
                  {
                    ATerm b_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm s_18 = NULL;
                        s_18 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_w_13, s_18);
                        t = is_quoted_0_0(t);
                        t = s_18;
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_15;
                      }
                  }
                  t = SSL_explode_string(q_34);
                  o_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_18), term_w_13), (ATerm) ATinsert(ATempty, term_w_13));
                  t = conc_0_0(t);
                  q_18 = t;
                  t = SSL_implode_string(q_18);
                  k_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, k_18, r_34);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    t = topdown_1_0(c_110, t);
    return(t);
  }
  t = c_110(t);
  t = SRTS_all(r_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = repeat_2_0(Ensugar_0_0, _id, t);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = EnsugarOnce_0_0(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      s_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_37;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_37;
  if(match_cons(t, sym_Some_1))
    {
      l_37 = ATgetArgument(t, 0);
      t = l_37;
      if(match_string(t, "left"))
        {
          t = m_37;
          t = k_7(n_37, r_37, s_37, t);
        }
      else
        {
          if(match_string(t, "right"))
            {
              t = m_37;
              t = z_6(n_37, r_37, s_37, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("non-assoc", 0, ATtrue)))
                _fail(t);
              t = m_37;
              t = y_6(n_37, r_37, s_37, t);
            }
        }
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = m_37;
      t = x_6(n_37, r_37, s_37, t);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Disambiguate_1_0(y_3, t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, i_38);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  ATerm c_36 = NULL,n_36 = NULL;
  n_36 = t;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL;
        t = SSL_explode_term(n_36);
        if(match_cons(t, sym__2))
          {
            ATerm k_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_15 = ATgetArgument(t, 1);
              if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
                {
                  k_19 = ATgetFirst((ATermList) l_15);
                  {
                    ATerm m_15 = (ATerm) ATgetNext((ATermList) l_15);
                    if(((ATgetType(m_15) != AT_LIST) || !(ATisEmpty(m_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_19;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = n_36;
      }
  }
  t = topdown_1_0(s_3, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm y_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
      d_37 = t;
      if(match_cons(t, sym_Seq_2))
        {
          y_36 = ATgetArgument(t, 0);
          a_37 = ATgetArgument(t, 1);
          t = a_37;
          if(match_cons(t, sym_Seq_2))
            {
              b_37 = ATgetArgument(t, 0);
              c_37 = ATgetArgument(t, 1);
              {
                ATerm n_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_37 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_36, b_37);
                    t = t_3(t);
                    h_37 = t;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_37, c_37);
                    t = t_3(t);
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = n_15;
                    t = d_37;
                  }
              }
            }
          else
            {
              t = d_37;
            }
        }
      else
        {
          t = d_37;
        }
      return(t);
    }
    t = bottomup_1_0(t_3, t);
  }
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, term_y_15), term_x_15))), (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATempty, term_v_15))));
  t = repeat_2_0(u_3, _id, t);
  t = c_36;
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm w_7 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm n_38 = NULL;
  t = SSL_fputc(a_23, b_23);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_38);
  return(t);
}
static ATerm x_7 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm o_38 = NULL;
  t = SSL_write_term_to_stream_text(d_43, e_43);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_38);
  return(t);
}
static ATerm z_7 (ATerm g_96 (ATerm), ATerm n_400, ATerm j_43, ATerm t)
{
  ATerm p_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_400, term_a_16);
  t = d_8(t);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, j_43);
  t = g_96(t);
  t = fclose_0_0(t);
  t = j_43;
  return(t);
}
static ATerm y_7 (ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_write_term_to_stream_baf(z_42, a_43);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_38);
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
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          t_20 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(t_20, u_20, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(match_cons(e_16, sym_Stream_1))
        {
          i_21 = ATgetArgument(e_16, 0);
        }
      else
        _fail(t);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(i_21, j_21, t);
  f_21 = t;
  t = term_g_16;
  g_21 = t;
  t = f_21;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, f_21);
  t = w_7(g_21, h_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,e_40 = NULL,f_40 = NULL,z_4 = NULL,y_4 = NULL;
  v_38 = t;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  b_39 = t;
  t = c_39;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_38 != NULL) && (u_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_38 = ATgetArgument(t, 0);
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
        u_38 = t;
      }
  }
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_39, d_39);
  y_4 = t;
  t = SSLsetAnnotations(y_4, b_39);
  t = v_38;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, (ATerm) ATmakeAppl(sym__2, not_null(u_38), y_38));
  z_4 = t;
  t = SSLsetAnnotations(z_4, w_38);
  a_39 = t;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,n_20 = NULL,p_20 = NULL,r_20 = NULL,s_20 = NULL,a_5 = NULL;
        t = SSLgetAnnotations(a_39);
        g_20 = t;
        t = e_40;
        t = fetch_1_0(a_4, t);
        n_20 = t;
        t = f_40;
        if(match_cons(t, sym__2))
          {
            r_20 = ATgetArgument(t, 0);
            s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_7(c_4, r_20, s_20, t);
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_20, p_20);
        a_5 = t;
        t = SSLsetAnnotations(a_5, g_20);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm z_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(a_39);
          z_20 = t;
          t = f_40;
          if(match_cons(t, sym__2))
            {
              d_21 = ATgetArgument(t, 0);
              e_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_7(d_4, d_21, e_21, t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_40, c_21);
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
ATerm apply_strategy_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  m_40 = t;
  t = dtime_0_0(t);
  t = m_40;
  t = m_80(t);
  l_40 = t;
  t = dtime_0_0(t);
  i_40 = t;
  t = l_40;
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_40), (ATerm) ATmakeAppl(sym_Runtime_1, i_40)), k_40);
  return(t);
}
static ATerm a_41 (ATerm u_40, ATerm t)
{
  t = SSL_fclose(u_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  y_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_40 = ATgetArgument(t, 0);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_40);
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = a_41(y_40, t);
          }
      }
    }
  else
    {
      t = a_41(y_40, t);
    }
  return(t);
}
static ATerm a_8 (ATerm f_43, ATerm t)
{
  t = SSL_read_term_from_stream(f_43);
  return(t);
}
static ATerm b_8 (ATerm n_58, ATerm o_58, ATerm t)
{
  t = SSL_strcat(n_58, o_58);
  return(t);
}
static ATerm c_8 (ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_fopen(c_23, d_23);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_41 = NULL;
  t = SSL_stdin_stream();
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_stdout_stream();
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_stderr_stream();
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_41);
  return(t);
}
static ATerm l_42 (ATerm k_41, ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_explode_term(k_41);
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_16 = ATgetArgument(t, 1);
        if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
          {
            l_41 = ATgetFirst((ATermList) q_16);
            {
              ATerm r_16 = (ATerm) ATgetNext((ATermList) q_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_42 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,w_41 = NULL,z_13 = NULL;
  t = SSLgetAnnotations(q_41);
  t_41 = t;
  t = o_41;
  if(match_cons(t, sym_Path_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_41, p_41);
  z_13 = t;
  t = SSLsetAnnotations(z_13, t_41);
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(r_41, s_41, t);
  return(t);
}
static ATerm n_42 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(a_42);
  d_42 = t;
  t = SSL_is_string(y_41);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_42, z_41);
  a_14 = t;
  t = SSLsetAnnotations(a_14, d_42);
  if(match_cons(t, sym__2))
    {
      b_42 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(b_42, c_42, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_42(i_42, t);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_42(j_42, k_42, i_42, t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  t = n_42(j_42, k_42, i_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_42(i_42, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,w_42 = NULL;
  w_42 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_42, term_y_16);
        t = d_8(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        {
          ATerm z_21 = NULL,a_22 = NULL;
          t = term_z_16;
          a_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_16, w_42);
          t = b_8(a_22, w_42, t);
          z_21 = t;
          t = SSL_perror(z_21);
          _fail(t);
        }
      }
  }
  q_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(r_42, t);
  p_42 = t;
  t = q_42;
  t = fclose_0_0(t);
  t = p_42;
  return(t);
}
ATerm fetch_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  static ATerm c_44 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
    z_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_44 = ATgetFirst((ATermList) t);
        b_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = NULL,i_22 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(z_43);
          f_22 = t;
          t = a_44;
          t = o_85(t);
          i_22 = t;
          t = (ATerm) ATinsert(CheckATermList(b_44), i_22);
          j_14 = t;
          t = SSLsetAnnotations(j_14, f_22);
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          {
            ATerm w_22 = NULL,e_23 = NULL,k_14 = NULL;
            t = SSLgetAnnotations(z_43);
            w_22 = t;
            t = b_44;
            t = c_44(t);
            e_23 = t;
            t = (ATerm) ATinsert(CheckATermList(e_23), a_44);
            k_14 = t;
            t = SSLsetAnnotations(k_14, w_22);
          }
        }
    }
    return(t);
  }
  t = c_44(t);
  return(t);
}
static ATerm g_8 (ATerm y_37, ATerm z_37, ATerm t)
{
  t = SSL_table_get(y_37, z_37);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
        t = term_e_17;
        o_44 = t;
        t = term_f_17;
        p_44 = t;
        t = term_g_17;
        t = g_8(o_44, p_44, t);
        n_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_44, term_h_17);
        t = geq_0_0(t);
        t = l_44;
        t = y_107(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = l_44;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  if(match_string(t, "-k"))
    {
      t = s_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_44;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,w_44 = NULL;
  t_44 = t;
  t = SSL_string_to_int(t_44);
  u_44 = t;
  t = term_i_17;
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, u_44);
  t = j_8(w_44, u_44, t);
  t = t_44;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  if(match_string(t, "-S"))
    {
      t = y_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_44;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  t = term_f_17;
  z_44 = t;
  t = term_k_17;
  a_45 = t;
  t = term_l_17;
  t = j_8(z_44, a_45, t);
  t = term_m_17;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_q_17;
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
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  t = SSL_string_to_int(b_45);
  c_45 = t;
  t = term_f_17;
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, c_45);
  t = j_8(d_45, c_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_45);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_s_17;
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
  ATerm e_45 = NULL,f_45 = NULL;
  t = term_t_17;
  e_45 = t;
  t = term_h_9;
  f_45 = t;
  t = term_u_17;
  t = j_8(e_45, f_45, t);
  t = term_v_17;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, n_4, t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_4, p_4, q_4, t);
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = Option_3_0(r_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm g_45 = NULL;
  t = term_e_17;
  g_45 = t;
  t = SSL_table_put(g_45, h_51, i_51);
  t = (ATerm) ATmakeAppl(sym__3, term_e_17, h_51, i_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
      t = term_h_9;
      t = e_0(t);
      l_45 = t;
      t = term_b_18;
      m_45 = t;
      t = term_c_18;
      n_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, l_45);
      t = h_8(m_45, n_45, l_45, t);
      _fail(t);
    }
  else
    {
      ATerm q_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_45 = ATgetFirst((ATermList) t);
          k_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_45;
      t = c_0(t);
      t = term_h_9;
      t = d_0(t);
      q_45 = t;
      t = (ATerm) ATinsert(CheckATermList(k_45), q_45);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  if(match_string(t, "-o"))
    {
      t = s_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_45;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  t = term_d_18;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, t_45);
  t = j_8(u_45, t_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_45);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, e_5, f_5, t);
  return(t);
}
static ATerm h_8 (ATerm h_36, ATerm i_36, ATerm g_36, ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            ATerm i_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
        t = g_8(h_36, i_36, t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = (ATerm) ATempty;
      }
  }
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), g_36);
  y_45 = t;
  t = SSL_table_put(h_36, i_36, y_45);
  t = w_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
      t = term_h_9;
      t = n_0(t);
      j_46 = t;
      t = term_b_18;
      k_46 = t;
      t = term_c_18;
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, j_46);
      t = h_8(k_46, l_46, j_46, t);
      _fail(t);
    }
  else
    {
      ATerm p_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_46 = ATgetFirst((ATermList) t);
          g_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_46 = ATgetFirst((ATermList) t);
          i_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_46;
      t = k_0(t);
      t = h_46;
      t = l_0(t);
      p_46 = t;
      t = (ATerm) ATinsert(CheckATermList(i_46), p_46);
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  if(match_string(t, "-i"))
    {
      t = r_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_46;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  t = term_j_18;
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, s_46);
  t = j_8(t_46, s_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_46);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, q_5, z_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_9;
  t = whoami_0_0(t);
  u_46 = t;
  t = term_i_9;
  w_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_18), u_46);
  x_46 = t;
  t = SSL_printnl(w_46, x_46);
  t = term_o_9;
  v_46 = t;
  t = SSL_exit(v_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  t = term_e_17;
  y_46 = t;
  t = term_n_18;
  z_46 = t;
  t = term_p_18;
  t = g_8(y_46, z_46, t);
  return(t);
}
static ATerm e_8 (ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_33, q_33);
      LocalPopChoice(t_18);
    }
  else
    {
      t = r_18;
      t = SSL_addr(p_33, q_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_47;
      t = k_92(t);
    }
  else
    {
      ATerm g_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_47 = ATgetFirst((ATermList) t);
          d_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_47;
      t = foldr_2_0(k_92, l_92, t);
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_47, g_47);
      t = l_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_k_17;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm v_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(v_23, z_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_47 = NULL,o_23 = NULL,r_23 = NULL;
  t = times_0_0(t);
  r_23 = t;
  t = SSL_explode_term(r_23);
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_23;
  t = foldr_2_0(a_6, d_6, t);
  j_47 = t;
  t = SSL_TicksToSeconds(j_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  if(match_cons(t, sym__2))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_47;
        if((v_47 != t))
          {
            _fail(t);
          }
        t = u_47;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATmakeAppl(sym__2, v_47, w_47);
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_47, w_47);
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              t = SSL_gtr(v_47, w_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_47, w_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
        t = term_e_17;
        d_48 = t;
        t = term_f_17;
        e_48 = t;
        t = term_g_17;
        t = g_8(d_48, e_48, t);
        c_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_48, term_o_9);
        t = geq_0_0(t);
        t = a_48;
        t = x_107(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = a_48;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,j_48 = NULL,k_48 = NULL;
  t = run_time_0_0(t);
  g_48 = t;
  t = term_h_9;
  t = whoami_0_0(t);
  h_48 = t;
  t = term_i_9;
  j_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), g_48), term_b_19), h_48);
  k_48 = t;
  t = SSL_printnl(j_48, k_48);
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), g_48), term_b_19), h_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_17;
  l_48 = t;
  t = SSL_exit(l_48);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  w_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_48 = ATgetArgument(t, 0);
          {
            ATerm n_24 = NULL,x_14 = NULL;
            t = SSLgetAnnotations(w_48);
            n_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_48);
            x_14 = t;
            t = SSLsetAnnotations(x_14, n_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_48 = NULL,p_48 = NULL;
      t = term_e_17;
      o_48 = t;
      t = term_f_19;
      p_48 = t;
      t = term_g_19;
      t = g_8(o_48, p_48, t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = fetch_1_0(i_6, t);
    }
  t = k_81(t);
  return(t);
}
ATerm map_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  static ATerm m_49 (ATerm t)
  {
    ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
    j_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_49;
      }
    else
      {
        ATerm d_25 = NULL,l_25 = NULL,m_25 = NULL,w_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_49 = ATgetFirst((ATermList) t);
            l_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_49);
        d_25 = t;
        t = k_49;
        t = e_85(t);
        l_25 = t;
        t = l_49;
        t = m_49(t);
        m_25 = t;
        t = (ATerm) ATinsert(CheckATermList(m_25), l_25);
        w_15 = t;
        t = SSLsetAnnotations(w_15, d_25);
      }
    return(t);
  }
  t = m_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_49 = ATgetFirst((ATermList) t);
      q_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_49 = NULL,v_49 = NULL;
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_49)), not_null(v_49));
          return(t);
        }
        t = q_49;
        t = i_0(t);
        if(((u_49 != NULL) && (u_49 != t)))
          _fail(t);
        else
          u_49 = t;
        t = p_49;
        t = g_0(t);
        if(((v_49 != NULL) && (v_49 != t)))
          _fail(t);
        else
          v_49 = t;
        t = q_49;
        t = reverse_acc_2_0(g_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,z_15 = NULL;
  d_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_50);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_50);
  z_15 = t;
  t = SSLsetAnnotations(z_15, b_50);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_50), term_h_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_49 = NULL,a_50 = NULL;
      t = term_e_17;
      z_49 = t;
      t = term_n_18;
      a_50 = t;
      t = term_p_18;
      t = g_8(z_49, a_50, t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = fetch_1_0(l_6, t);
    }
  t = term_l_19;
  t = echo_0_0(t);
  t = term_b_18;
  x_49 = t;
  t = term_c_18;
  y_49 = t;
  t = term_m_19;
  t = g_8(x_49, y_49, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_19 = ATgetFirst((ATermList) t);
                ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_50;
          }
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATinsert(ATempty, h_50);
      }
  }
  i_50 = t;
  t = term_k_16;
  j_50 = t;
  t = SSL_printnl(j_50, i_50);
  t = h_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  t = term_e_17;
  n_50 = t;
  t = term_n_18;
  o_50 = t;
  t = term_p_18;
  t = g_8(n_50, o_50, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  t = term_r_19;
  p_50 = t;
  t = term_h_9;
  q_50 = t;
  t = term_s_19;
  t = j_8(p_50, q_50, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  t = term_r_19;
  t_50 = t;
  t = term_h_9;
  u_50 = t;
  t = term_s_19;
  t = j_8(t_50, u_50, t);
  t = term_u_19;
  r_50 = t;
  t = term_h_9;
  s_50 = t;
  t = term_v_19;
  t = j_8(r_50, s_50, t);
  t = term_w_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, r_6, s_6, t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = Option_3_0(t_6, u_6, c_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_16 = NULL;
  a_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_50 = ATgetFirst((ATermList) t);
      x_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_51);
  v_50 = t;
  t = w_50;
  t = b_75(t);
  y_50 = t;
  t = x_50;
  t = c_75(t);
  z_50 = t;
  t = (ATerm) ATinsert(CheckATermList(z_50), y_50);
  b_16 = t;
  t = SSLsetAnnotations(b_16, v_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,j_51 = NULL,k_51 = NULL,m_51 = NULL,n_51 = NULL,d_16 = NULL;
  f_51 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_20;
        t = n_98(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
      }
  }
  t = f_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_51 = ATgetFirst((ATermList) t);
      k_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_51);
  g_51 = t;
  t = term_n_18;
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, j_51);
  t = j_8(n_51, j_51, t);
  t = k_51;
  {
    static ATerm x_51 (ATerm t)
    {
      ATerm d_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_51 = NULL;
              q_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_51;
              LocalPopChoice(h_20);
            }
          else
            {
              t = f_20;
              t = n_98(t);
              t = Cons_2_0(_id, x_51, t);
            }
          LocalPopChoice(e_20);
        }
      else
        {
          t = d_20;
          {
            ATerm t_51 = NULL,u_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_51 = ATgetFirst((ATermList) t);
                u_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_51), (ATerm) ATmakeAppl(sym_Undefined_1, t_51));
          }
        }
      return(t);
    }
    t = x_51(t);
  }
  m_51 = t;
  t = (ATerm) ATinsert(CheckATermList(m_51), (ATerm) ATmakeAppl(sym_Program_1, j_51));
  d_16 = t;
  t = SSLsetAnnotations(d_16, g_51);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm j_52 = NULL;
  j_52 = t;
  if(match_string(t, "--help"))
    {
      t = j_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_52;
        }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  t = term_f_19;
  k_52 = t;
  t = term_h_9;
  l_52 = t;
  t = term_i_20;
  t = j_8(k_52, l_52, t);
  t = term_j_20;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  e_52 = t;
  t = term_b_18;
  g_52 = t;
  t = term_c_18;
  h_52 = t;
  t = (ATerm) ATempty;
  i_52 = t;
  t = SSL_table_put(g_52, h_52, i_52);
  t = e_52;
  {
    static ATerm d_7 (ATerm t)
    {
      ATerm m_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_98(t);
          LocalPopChoice(v_20);
        }
      else
        {
          t = m_20;
          {
            ATerm w_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_7, l_7, o_7, t);
                LocalPopChoice(x_20);
              }
            else
              {
                t = w_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_7, t);
  }
  {
    ATerm y_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_52 = NULL;
        w_52 = t;
        {
          ATerm b_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_25 = NULL;
              t = w_52;
              {
                ATerm l_21 = t;
                int m_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_25 = NULL,w_25 = NULL;
                    t = term_e_17;
                    u_25 = t;
                    t = term_f_19;
                    w_25 = t;
                    t = term_g_19;
                    t = g_8(u_25, w_25, t);
                    LocalPopChoice(m_21);
                  }
                else
                  {
                    t = l_21;
                    t = fetch_1_0(p_7, t);
                  }
              }
              t = w_52;
              t = default_system_usage_0_0(t);
              t = term_k_17;
              t_25 = t;
              t = SSL_exit(t_25);
              LocalPopChoice(k_21);
            }
          else
            {
              t = b_21;
              {
                ATerm a_26 = NULL,e_26 = NULL,f_26 = NULL;
                t = term_e_17;
                e_26 = t;
                t = term_r_19;
                f_26 = t;
                t = term_o_21;
                t = g_8(e_26, f_26, t);
                t = w_52;
                t = default_system_about_0_0(t);
                t = term_k_17;
                a_26 = t;
                t = SSL_exit(a_26);
              }
            }
        }
        LocalPopChoice(a_21);
      }
    else
      {
        t = y_20;
        {
          ATerm p_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
              static ATerm q_7 (ATerm t)
              {
                ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,f_16 = NULL;
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
                if(((c_52 != NULL) && (c_52 != t)))
                  _fail(t);
                else
                  c_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_53);
                f_16 = t;
                t = SSLsetAnnotations(f_16, a_53);
                return(t);
              }
              t = fetch_1_0(q_7, t);
              t = term_i_9;
              y_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_52)), term_s_21);
              z_52 = t;
              t = SSL_printnl(y_52, z_52);
              t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_52)), term_s_21));
              t = default_system_usage_0_0(t);
              t = term_o_9;
              x_52 = t;
              t = SSL_exit(x_52);
              LocalPopChoice(r_21);
            }
          else
            {
              t = p_21;
            }
        }
      }
  }
  d_52 = t;
  t = term_b_18;
  f_52 = t;
  t = SSL_table_destroy(f_52);
  t = d_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  t = parse_options_1_0(m_81, t);
  h_53 = t;
  t = term_t_21;
  k_53 = t;
  t = SSL_table_create(k_53);
  t = term_t_21;
  i_53 = t;
  t = term_u_21;
  j_53 = t;
  t = SSL_table_put(i_53, j_53, h_53);
  t = h_53;
  t = o_81(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_81, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_81(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = if_verbose2_1_0(x_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  t = term_b_22;
  l_53 = t;
  t = term_h_9;
  m_53 = t;
  t = term_c_22;
  t = j_8(l_53, m_53, t);
  t = term_d_22;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  n_53 = t;
  t = term_e_17;
  r_53 = t;
  t = term_n_18;
  s_53 = t;
  t = term_p_18;
  t = g_8(r_53, s_53, t);
  o_53 = t;
  t = term_i_9;
  p_53 = t;
  t = (ATerm) ATinsert(ATempty, o_53);
  q_53 = t;
  t = SSL_printnl(p_53, q_53);
  t = n_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t)
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_80(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              {
                ATerm l_22 = t;
                int m_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_22);
                  }
                else
                  {
                    t = l_22;
                    {
                      ATerm n_22 = t;
                      int o_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_8, o_8, t_8, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(q_22);
                              }
                            else
                              {
                                t = p_22;
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
  static ATerm k_8 (ATerm t)
  {
    ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
    u_53 = t;
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_53 != NULL) && (t_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_9, t);
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          t = term_t_22;
          t_53 = t;
        }
    }
    t = not_null(t_53);
    t = ReadFromFile_0_0(t);
    v_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
    t = apply_strategy_1_0(v_80, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_7, x_80, f_8, k_8, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,h_16 = NULL;
  a_54 = t;
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_54);
  w_53 = t;
  t = y_53;
  t = Stratego_Ensugar_0_0(t);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_53, z_53);
  h_16 = t;
  t = SSLsetAnnotations(h_16, w_53);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_9, _fail, default_usage_0_0, t);
  return(t);
}
