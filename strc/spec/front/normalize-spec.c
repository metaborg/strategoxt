#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_OpDecl_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Con_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
static void init_module_constructors (void)
{
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
}
ATerm term_s_32;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_z_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_w_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATempty);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Op_2, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_19);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_i_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_t_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_n_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_i_28);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_n_27);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_n_27);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_n_27);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_n_27);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm split_dynamic_rules_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_90 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm v_119 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm o_6 (ATerm j_65, ATerm i_65, ATerm t);
ATerm repeat_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm x_96 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_6 (ATerm s_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm u_6 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm v_6 (ATerm n_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t);
ATerm genzip_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm a_7 (ATerm t_597, ATerm y_597, ATerm y_56, ATerm t);
ATerm while_not_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm f_40 (ATerm x_38, ATerm y_38, ATerm b_39, ATerm t);
static ATerm n_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm free_vars_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm e_7 (ATerm x_52, ATerm y_52, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm u_90 (ATerm), ATerm t);
static ATerm f_7 (ATerm b_108 (ATerm), ATerm z_42, ATerm x_42, ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm g_7 (ATerm r_52, ATerm s_52, ATerm t);
ATerm end_scope_1_0 (ATerm y_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_107 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm e_96 (ATerm), ATerm t);
static ATerm z_46 (ATerm p_46, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_7 (ATerm s_20, ATerm o_20, ATerm t);
ATerm foldr_3_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm k_7 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm l_7 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm n_7 (ATerm f_95 (ATerm), ATerm n_158, ATerm i_23, ATerm t);
static ATerm m_7 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm d_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm output_1_0 (ATerm c_113 (ATerm), ATerm t);
static ATerm j_57 (ATerm t_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_7 (ATerm g_23, ATerm t);
static ATerm p_7 (ATerm r_38, ATerm s_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_59 (ATerm x_57, ATerm t);
static ATerm e_59 (ATerm d_58, ATerm e_58, ATerm g_58, ATerm t);
static ATerm f_59 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm t);
static ATerm q_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_7 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_7 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_7 (ATerm l_41, ATerm m_41, ATerm t);
ATerm foldr_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_110 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm need_help_1_0 (ATerm t_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_95 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_7 (ATerm i_37, ATerm j_37, ATerm t);
ATerm debug_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_95 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm v_7 (ATerm d_54, ATerm e_54, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_114 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm parse_options_1_0 (ATerm v_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_0 = NULL,v_0 = NULL,w_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_1, b_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_1 = ATgetArgument(t, 0);
          t = a_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_0 = ATgetFirst((ATermList) t);
              v_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_0, (ATerm) ATmakeAppl(sym_LChoices_1, v_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_1 = ATgetArgument(t, 0);
              t = a_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_0 = ATgetFirst((ATermList) t);
                  v_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_0, (ATerm) ATmakeAppl(sym_Choices_1, v_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_1 = ATgetArgument(t, 0);
                  t = a_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_0 = ATgetFirst((ATermList) t);
                      v_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_0, (ATerm) ATmakeAppl(sym_Seqs_1, v_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_1 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      w_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_1, (ATerm) ATmakeAppl(sym_Op_2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, w_0), a_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          a_1 = ATgetArgument(t, 0);
                          b_1 = ATgetArgument(t, 1);
                          w_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, w_0)), a_1), (ATerm) ATmakeAppl(sym_Build_1, b_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              a_1 = ATgetArgument(t, 0);
                              b_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_1, (ATerm) ATmakeAppl(sym_Match_1, b_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  a_1 = ATgetArgument(t, 0);
                                  b_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_1), b_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      a_1 = ATgetArgument(t, 0);
                                      b_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_1), a_1);
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
ATerm topdown_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(c_89, t);
    return(t);
  }
  t = c_89(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
  a_3 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_10);
        t = a_3;
        {
          ATerm s_10 = t;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL,s_0 = NULL,u_0 = NULL;
              q_0 = t;
              t = (ATerm) ATempty;
              s_0 = t;
              t = term_t_10;
              u_0 = t;
              t = term_u_10;
              t = e_7(u_0, s_0, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  if((q_0 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              t = q_0;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_10;
            }
        }
        t = term_y_10;
      }
    else
      {
        t = l_10;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_y_10;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                b_3 = ATgetArgument(t, 0);
                {
                  ATerm f_3 = NULL;
                  t = b_3;
                  t = free_vars_3_0(r_0, x_0, tboundin_3_0, t);
                  t = map_1_0(e_1, t);
                  f_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_10, f_3);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_3 = ATgetArgument(t, 0);
                    c_3 = ATgetArgument(t, 1);
                    {
                      ATerm d_5 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
                      t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
                      t = map_1_0(n_1, t);
                      d_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_z_10, d_5);
                    }
                  }
                else
                  {
                    ATerm z_0 = NULL,d_1 = NULL,f_1 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm b_11 = ATgetArgument(t, 0);
                        ATerm j_11 = ATgetArgument(t, 1);
                        ATerm k_11 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_n_11;
                    d_1 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_11);
                    f_1 = t;
                    t = SSL_printnl(d_1, f_1);
                    t = term_r_11;
                    z_0 = t;
                    t = SSL_exit(z_0);
                    t = (ATerm) ATinsert(ATempty, term_q_11);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm g_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_3);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm k_3 = NULL,m_3 = NULL,p_3 = NULL,q_3 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_3 = ATgetArgument(t, 0);
                  m_3 = ATgetArgument(t, 1);
                  p_3 = ATgetArgument(t, 2);
                  q_3 = ATgetArgument(t, 3);
                  t = p_3;
                  t = map_1_0(y_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_3 = ATgetArgument(t, 0);
                      m_3 = ATgetArgument(t, 1);
                      p_3 = ATgetArgument(t, 2);
                      q_3 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_3;
                  t = map_1_0(c_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm f_4 = NULL;
  ATerm z_11 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_4 = ATgetArgument(t, 0);
          {
            ATerm m_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_12);
      t = f_4;
    }
  else
    {
      t = z_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_4;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm s_4 = NULL;
  ATerm n_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_4 = ATgetArgument(t, 0);
          {
            ATerm a_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_12);
      t = s_4;
    }
  else
    {
      t = n_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_4;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_4);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_5 = ATgetArgument(t, 0);
                  j_5 = ATgetArgument(t, 1);
                  k_5 = ATgetArgument(t, 2);
                  m_5 = ATgetArgument(t, 3);
                  t = k_5;
                  t = map_1_0(k_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_5 = ATgetArgument(t, 0);
                      j_5 = ATgetArgument(t, 1);
                      k_5 = ATgetArgument(t, 2);
                      m_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_5;
                  t = map_1_0(m_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm f_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_5 = ATgetArgument(t, 0);
          {
            ATerm j_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = w_5;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_5;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_8 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = e_8;
    }
  else
    {
      t = k_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_8;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_8);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(p_0, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm o_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_12);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm q_12 = NULL,r_12 = NULL,y_12 = NULL,z_12 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_12 = ATgetArgument(t, 0);
                  r_12 = ATgetArgument(t, 1);
                  y_12 = ATgetArgument(t, 2);
                  z_12 = ATgetArgument(t, 3);
                  t = y_12;
                  t = map_1_0(r_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_12 = ATgetArgument(t, 0);
                      r_12 = ATgetArgument(t, 1);
                      y_12 = ATgetArgument(t, 2);
                      z_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_12;
                  t = map_1_0(s_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_13 = ATgetArgument(t, 0);
          {
            ATerm u_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_13);
      t = g_13;
    }
  else
    {
      t = r_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_13;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm v_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_13 = ATgetArgument(t, 0);
          {
            ATerm y_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = t_13;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_13;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_14);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            {
              ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_14 = ATgetArgument(t, 0);
                  j_14 = ATgetArgument(t, 1);
                  k_14 = ATgetArgument(t, 2);
                  l_14 = ATgetArgument(t, 3);
                  t = k_14;
                  t = map_1_0(w_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_14 = ATgetArgument(t, 0);
                      j_14 = ATgetArgument(t, 1);
                      k_14 = ATgetArgument(t, 2);
                      l_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_14;
                  t = map_1_0(x_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_14 = NULL;
  ATerm h_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_14 = ATgetArgument(t, 0);
          {
            ATerm n_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_14);
      t = y_14;
    }
  else
    {
      t = h_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_14;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm r_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_14);
      t = k_15;
    }
  else
    {
      t = o_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_15;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_15 = NULL,p_1 = NULL,a_0 = NULL,f_2 = NULL,g_2 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            w_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_15);
        p_1 = t;
        t = (ATerm) ATempty;
        f_2 = t;
        t = term_t_10;
        g_2 = t;
        t = term_u_10;
        t = e_7(g_2, f_2, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_14) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
            if((w_15 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, w_15);
        a_0 = t;
        t = SSLsetAnnotations(a_0, p_1);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        {
          ATerm i_2 = NULL,j_2 = NULL;
          t = (ATerm) ATempty;
          i_2 = t;
          t = term_t_10;
          j_2 = t;
          t = term_u_10;
          t = e_7(j_2, i_2, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
              if((r_15 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          t = r_15;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_15);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm o_16 (ATerm d_11, ATerm e_11, ATerm f_11, ATerm g_11, ATerm h_11, ATerm i_11, ATerm p_11, ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,c_12 = NULL,d_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, h_11, term_x_14);
    {
      ATerm z_14 = t;
      if((PushChoice() == 0))
        {
          ATerm l_12 = NULL;
          if(match_cons(t, sym__2))
            {
              l_12 = ATgetArgument(t, 0);
              if((l_12 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_14;
        }
    }
    t = new_0_0(t);
    u_11 = t;
    t = g_11;
    t = dummify_0_0(t);
    w_11 = t;
    {
      ATerm a_15 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_11;
          if((g_11 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, u_11);
          LocalPopChoice(b_15);
        }
      else
        {
          t = a_15;
          t = w_11;
        }
    }
    v_11 = t;
    t = w_11;
    t = free_vars_3_0(o_1, q_1, tboundin_3_0, t);
    t = map_1_0(t_1, t);
    d_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_11, i_11);
    t = free_vars_3_0(u_1, v_1, tboundin_3_0, t);
    t = filter_1_0(y_1, t);
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
    t = diff_0_0(t);
    i_12 = t;
    t = new_0_0(t);
    j_12 = t;
    t = d_11;
    t = o_0(t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, k_12, (ATerm) ATmakeAppl(sym_Op_2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_15, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym_Str_1, j_12)))), w_11)))), (ATerm) ATmakeAppl(sym_RDefT_4, d_11, e_11, f_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_11), g_11), h_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_11)))), v_11), (ATerm) ATmakeAppl(sym_Op_2, term_d_15, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym_Str_1, j_12))))), i_11))));
    return(t);
  }
  ATerm x_15 = NULL,y_15 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
      i_16 = ATgetArgument(t, 2);
      j_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_16;
  if(match_cons(t, sym_Rule_3))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      m_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_16;
  if(match_cons(t, sym_Op_2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      t = y_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_15;
          if(match_string(t, "Undefined"))
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
                  t = f_16;
                  t = new_0_0(t);
                  l_3 = t;
                  t = k_16;
                  t = dummify_0_0(t);
                  i_3 = t;
                  {
                    ATerm l_15 = t;
                    int n_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_3;
                        if((k_16 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_3);
                        LocalPopChoice(n_15);
                      }
                    else
                      {
                        t = l_15;
                        t = i_3;
                      }
                  }
                  n_3 = t;
                  t = g_16;
                  t = o_0(t);
                  o_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, o_3, (ATerm) ATmakeAppl(sym_Op_2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, term_x_14), i_3)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_16, h_16, i_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_3), k_16), term_x_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_16)))), n_3), term_x_14)), (ATerm) ATmakeAppl(sym_Seq_2, m_16, term_i_10)))));
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  t = o_16(g_16, h_16, i_16, k_16, l_16, m_16, f_16, t);
                }
            }
          else
            {
              t = o_16(g_16, h_16, i_16, k_16, l_16, m_16, f_16, t);
            }
        }
      else
        {
          t = x_15;
          t = o_16(g_16, h_16, i_16, k_16, l_16, m_16, f_16, t);
        }
    }
  else
    {
      t = o_16(g_16, h_16, i_16, k_16, l_16, m_16, f_16, t);
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = SplitDynamicRule_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_16))));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_15;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm a_17 = NULL,d_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_17 = ATgetFirst((ATermList) t);
      d_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_17, d_17);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(match_cons(v_15, sym__2))
        {
          e_17 = ATgetArgument(v_15, 0);
          f_17 = ATgetArgument(v_15, 1);
        }
      else
        _fail(t);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(match_cons(z_15, sym__2))
          {
            g_17 = ATgetArgument(z_15, 0);
            l_17 = ATgetArgument(z_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_17), e_17), (ATerm) ATinsert(CheckATermList(l_17), f_17));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_17))));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_15;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      q_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym__2))
        {
          r_17 = ATgetArgument(c_16, 0);
          s_17 = ATgetArgument(c_16, 1);
        }
      else
        _fail(t);
      {
        ATerm e_16 = ATgetArgument(t, 1);
        if(match_cons(e_16, sym__2))
          {
            w_17 = ATgetArgument(e_16, 0);
            x_17 = ATgetArgument(e_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_17), r_17), (ATerm) ATinsert(CheckATermList(x_17), s_17));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm x_16 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      x_16 = ATgetArgument(t, 0);
      t = x_16;
      t = map_1_0(z_1, t);
      t = genzip_4_0(b_2, c_2, d_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          x_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_16;
      t = map_1_0(e_2, t);
      t = genzip_4_0(m_2, n_2, o_2, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  static ATerm z_17 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_90(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = SRTS_one(z_17, t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  static ATerm l_18 (ATerm t)
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_119(t);
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
          {
            ATerm g_18 = NULL,h_18 = NULL,k_18 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                g_18 = ATgetArgument(t, 0);
                h_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_18, h_18);
            {
              static ATerm r_2 (ATerm t)
              {
                t = g_18;
                t = DeclareContextVars_0_0(t);
                t = h_18;
                t = l_18(t);
                if(((k_18 != NULL) && (k_18 != t)))
                  _fail(t);
                else
                  k_18 = t;
                return(t);
              }
              t = scope_2_0(q_2, r_2, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_18, not_null(k_18));
          }
        }
      return(t);
    }
    t = oncetd_1_0(p_2, t);
    return(t);
  }
  t = l_18(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm q_18 = NULL,s_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  x_18 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      w_18 = ATgetArgument(t, 0);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_18;
            q_18 = t;
            t = x_18;
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = x_18;
            q_18 = t;
            t = x_18;
          }
      }
    }
  else
    {
      t = x_18;
      q_18 = t;
      t = x_18;
    }
  t = (ATerm) ATempty;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, q_18);
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, q_18));
  t = f_7(t_2, s_18, v_18, t);
  t = x_18;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  t = map_1_0(s_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm r_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_19);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm y_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = y_16;
      {
        ATerm h_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_17);
          }
        else
          {
            t = h_17;
            {
              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_19 = ATgetArgument(t, 0);
                  u_19 = ATgetArgument(t, 1);
                  v_19 = ATgetArgument(t, 2);
                  w_19 = ATgetArgument(t, 3);
                  t = v_19;
                  t = map_1_0(w_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_19 = ATgetArgument(t, 0);
                      u_19 = ATgetArgument(t, 1);
                      v_19 = ATgetArgument(t, 2);
                      w_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_19;
                  t = map_1_0(x_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_20 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_17);
      t = j_20;
    }
  else
    {
      t = m_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_20;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm b_21 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_21 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_17);
      t = b_21;
    }
  else
    {
      t = u_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_21;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm d_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_22 = ATgetArgument(t, 0);
      t = d_22;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_22 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_22;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm v_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_22 = ATgetArgument(t, 0);
      t = v_22;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_22 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_22;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      if((k_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm def_tvars_0_0 (ATerm t)
{
  ATerm j_19 = NULL,p_19 = NULL,q_19 = NULL;
  q_19 = t;
  t = free_vars_3_0(u_2, v_2, tboundin_3_0, t);
  j_19 = t;
  t = q_19;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL;
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm i_18 = ATgetArgument(t, 0);
                ATerm j_18 = ATgetArgument(t, 1);
                v_21 = ATgetArgument(t, 2);
                {
                  ATerm m_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_18);
            t = v_21;
            t = map_1_0(y_2, t);
          }
        else
          {
            t = e_18;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm o_18 = ATgetArgument(t, 0);
                ATerm p_18 = ATgetArgument(t, 1);
                v_21 = ATgetArgument(t, 2);
                {
                  ATerm r_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = v_21;
            t = map_1_0(z_2, t);
          }
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = (ATerm) ATempty;
      }
  }
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_19, p_19);
  t = t_6(d_3, j_19, p_19, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm o_6 (ATerm j_65, ATerm i_65, ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = j_65;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = j_65;
    {
      static ATerm j_3 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_23 = ATgetArgument(t, 0);
            if(((l_23 != NULL) && (l_23 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_23);
        return(t);
      }
      t = split_dynamic_rule_1_0(j_3, t);
    }
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    return(t);
  }
  t = scope_2_0(e_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_23)), not_null(n_23)), i_65);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  static ATerm p_23 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_88(t);
        t = p_23(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = d_88(t);
      }
    return(t);
  }
  t = p_23(t);
  return(t);
}
ATerm listtd_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  static ATerm v_24 (ATerm t)
  {
    ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
    t = x_96(t);
    q_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_24;
      }
    else
      {
        ATerm p_4 = NULL,x_4 = NULL,j_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_24 = ATgetFirst((ATermList) t);
            s_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_24);
        p_4 = t;
        t = s_24;
        t = v_24(t);
        x_4 = t;
        t = (ATerm) ATinsert(CheckATermList(x_4), r_24);
        j_0 = t;
        t = SSLsetAnnotations(j_0, p_4);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,f_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      f_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_25 = ATgetFirst((ATermList) t);
      b_25 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, b_25, h_25)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_25))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_25;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,i_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_30 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
      {
        ATerm u_5 = NULL,b_6 = NULL,c_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(d_30);
        u_5 = t;
        t = i_30;
        t = p_119(t);
        b_6 = t;
        t = w_29;
        t = n_119(t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_6, c_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, u_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_30 = ATgetArgument(t, 0);
          w_29 = ATgetArgument(t, 1);
          b_30 = ATgetArgument(t, 2);
          c_30 = ATgetArgument(t, 3);
          {
            ATerm n_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(d_30);
            n_6 = t;
            t = i_30;
            t = p_119(t);
            w_6 = t;
            t = w_29;
            t = p_119(t);
            x_6 = t;
            t = b_30;
            t = p_119(t);
            y_6 = t;
            t = c_30;
            t = n_119(t);
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_6, x_6, y_6, z_6);
            j_1 = t;
            t = SSLsetAnnotations(j_1, n_6);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              i_30 = ATgetArgument(t, 0);
              w_29 = ATgetArgument(t, 1);
              b_30 = ATgetArgument(t, 2);
              c_30 = ATgetArgument(t, 3);
              {
                ATerm n_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(d_30);
                n_8 = t;
                t = i_30;
                t = p_119(t);
                s_8 = t;
                t = w_29;
                t = p_119(t);
                t_8 = t;
                t = b_30;
                t = p_119(t);
                u_8 = t;
                t = c_30;
                t = n_119(t);
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, s_8, t_8, u_8, v_8);
                l_1 = t;
                t = SSLsetAnnotations(l_1, n_8);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_30 = ATgetArgument(t, 0);
                  {
                    ATerm e_9 = NULL,g_9 = NULL,h_2 = NULL;
                    t = SSLgetAnnotations(d_30);
                    e_9 = t;
                    t = i_30;
                    t = n_119(t);
                    g_9 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_9);
                    h_2 = t;
                    t = SSLsetAnnotations(h_2, e_9);
                  }
                }
              else
                {
                  ATerm m_9 = NULL,o_9 = NULL,k_2 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      i_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_30);
                  m_9 = t;
                  t = i_30;
                  t = n_119(t);
                  o_9 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, o_9);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, m_9);
                }
            }
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm f_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_31);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm e_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = e_19;
            {
              ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_31 = ATgetArgument(t, 0);
                  k_31 = ATgetArgument(t, 1);
                  l_31 = ATgetArgument(t, 2);
                  m_31 = ATgetArgument(t, 3);
                  t = l_31;
                  t = map_1_0(t_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_31 = ATgetArgument(t, 0);
                      k_31 = ATgetArgument(t, 1);
                      l_31 = ATgetArgument(t, 2);
                      m_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_31;
                  t = map_1_0(u_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm h_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_19);
      t = x_31;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_32 = ATgetArgument(t, 0);
          {
            ATerm o_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_19);
      t = k_32;
    }
  else
    {
      t = m_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_32;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm o_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_32);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm s_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = s_19;
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            {
              ATerm q_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_32 = ATgetArgument(t, 0);
                  t_32 = ATgetArgument(t, 1);
                  u_32 = ATgetArgument(t, 2);
                  v_32 = ATgetArgument(t, 3);
                  t = u_32;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_32 = ATgetArgument(t, 0);
                      t_32 = ATgetArgument(t, 1);
                      u_32 = ATgetArgument(t, 2);
                      v_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_32;
                  t = map_1_0(y_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_33 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_33 = ATgetArgument(t, 0);
          {
            ATerm c_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_20);
      t = c_33;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_33;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_33 = NULL;
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_33 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = l_33;
    }
  else
    {
      t = d_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm d_31 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      d_31 = ATgetArgument(t, 0);
      t = d_31;
      t = free_vars_3_0(r_3, s_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_31;
      t = free_vars_3_0(v_3, w_3, tboundin_3_0, t);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm a_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_34);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            {
              ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_34 = ATgetArgument(t, 0);
                  d_34 = ATgetArgument(t, 1);
                  e_34 = ATgetArgument(t, 2);
                  f_34 = ATgetArgument(t, 3);
                  t = e_34;
                  t = map_1_0(b_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_34 = ATgetArgument(t, 0);
                      d_34 = ATgetArgument(t, 1);
                      e_34 = ATgetArgument(t, 2);
                      f_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_34;
                  t = map_1_0(c_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm q_34 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_34 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = q_34;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_34;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm b_35 = NULL;
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_35 = ATgetArgument(t, 0);
          {
            ATerm v_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_20);
      t = b_35;
    }
  else
    {
      t = t_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_33 = NULL,x_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_33 = ATgetArgument(t, 0);
      t = x_33;
      if(match_cons(t, sym_Rule_3))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm w_20 = ATgetArgument(t, 1);
          }
          {
            ATerm z_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_33;
      t = free_vars_3_0(z_3, a_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_33 = ATgetArgument(t, 0);
          {
            ATerm a_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_33;
    }
  return(t);
}
static ATerm t_6 (ATerm s_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm e_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_35 = ATgetFirst((ATermList) t);
            z_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_35;
              {
                static ATerm d_4 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = u_6(s_99, d_4, y_35, z_35, t);
              }
              t = e_36(t);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              {
                ATerm v_9 = NULL,z_9 = NULL,i_8 = NULL;
                t = SSLgetAnnotations(x_35);
                v_9 = t;
                t = z_35;
                t = e_36(t);
                z_9 = t;
                t = (ATerm) ATinsert(CheckATermList(z_9), y_35);
                i_8 = t;
                t = SSLsetAnnotations(i_8, v_9);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = e_36(t);
  return(t);
}
static ATerm u_6 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  t = w_99(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm l_36 = NULL;
      l_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, l_36);
      t = v_99(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = a_29;
  return(t);
}
static ATerm v_6 (ATerm n_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t)
{
  static ATerm h_37 (ATerm t)
  {
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
    c_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            e_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_37;
              {
                static ATerm g_4 (ATerm t)
                {
                  t = u_28;
                  return(t);
                }
                t = u_6(n_99, g_4, d_37, e_37, t);
              }
              t = h_37(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
                ATerm p_10 = NULL,w_10 = NULL,w_9 = NULL;
                t = SSLgetAnnotations(c_37);
                p_10 = t;
                t = e_37;
                t = h_37(t);
                w_10 = t;
                t = (ATerm) ATinsert(CheckATermList(w_10), d_37);
                w_9 = t;
                t = SSLsetAnnotations(w_9, p_10);
              }
            }
        }
      }
    return(t);
  }
  t = v_28;
  t = h_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  static ATerm r_37 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_97(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,d_10 = NULL;
          t = s_97(t);
          q_37 = t;
          if(match_cons(t, sym__2))
            {
              m_37 = ATgetArgument(t, 0);
              n_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_37);
          l_37 = t;
          t = m_37;
          t = u_97(t);
          o_37 = t;
          t = n_37;
          t = r_37(t);
          p_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
          d_10 = t;
          t = SSLsetAnnotations(d_10, l_37);
          t = t_97(t);
        }
      }
    return(t);
  }
  t = r_37(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
        {
          y_37 = ATgetFirst((ATermList) k_21);
          z_37 = (ATerm) ATgetNext((ATermList) k_21);
        }
      else
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            a_38 = ATgetFirst((ATermList) l_21);
            b_38 = (ATerm) ATgetNext((ATermList) l_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_37, a_38), (ATerm) ATmakeAppl(sym__2, z_37, b_38));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_38), c_38);
  return(t);
}
static ATerm a_7 (ATerm t_597, ATerm y_597, ATerm y_56, ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = SSL_explode_term(y_597);
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_597);
  if(match_cons(t, sym__2))
    {
      if((t_37 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  t = genzip_4_0(h_4, i_4, j_4, _id, t);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, y_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t)
{
  static ATerm f_38 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_88(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = u_88(t);
        t = f_38(t);
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
ATerm for_3_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t)
{
  t = w_88(t);
  t = while_not_2_0(x_88, y_88, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_38);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,v_38 = NULL,w_38 = NULL,f_10 = NULL;
  w_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  n_38 = t;
  t = v_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_38, v_38);
  f_10 = t;
  t = SSLsetAnnotations(f_10, n_38);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_40(s_39, t_39, r_39, t);
            LocalPopChoice(q_21);
          }
        else
          {
            t = o_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_39), u_39), v_39);
          }
      }
    }
  else
    {
      t = f_40(s_39, t_39, r_39, t);
    }
  return(t);
}
static ATerm f_40 (ATerm x_38, ATerm y_38, ATerm b_39, ATerm t)
{
  ATerm c_39 = NULL,f_39 = NULL,g_10 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  t = SSLgetAnnotations(b_39);
  c_39 = t;
  t = y_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_39;
  if(match_cons(t, sym__2))
    {
      j_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_39;
        if((j_39 != t))
          {
            _fail(t);
          }
        t = l_39;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = y_38;
        t = a_7(j_39, k_39, l_39, t);
      }
  }
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, f_39);
  g_10 = t;
  t = SSLsetAnnotations(g_10, c_39);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm e_40 = NULL;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      if((e_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
        z_39 = t;
        if(match_cons(t, sym__2))
          {
            a_40 = ATgetArgument(t, 0);
            b_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_39;
        t = v_6(n_4, a_40, b_40, t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(u_4, a_12, b_12, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      if((e_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(y_4, v_12, w_12, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      if((x_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm t_40 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_117(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_40 = NULL,i_40 = NULL,l_11 = NULL,m_11 = NULL;
              h_40 = t;
              t = i_117(t);
              i_40 = t;
              t = h_40;
              {
                static ATerm o_4 (ATerm t)
                {
                  ATerm k_40 = NULL;
                  t = t_40(t);
                  k_40 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_40, i_40);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_117(o_4, t_40, q_4, t);
              }
              m_11 = t;
              t = SSL_explode_term(m_11);
              if(match_cons(t, sym__2))
                {
                  ATerm a_22 = ATgetArgument(t, 0);
                  l_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_11;
              t = foldr_3_0(r_4, t_4, _id, t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm g_12 = NULL,h_12 = NULL;
                h_12 = t;
                t = SSL_explode_term(h_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_22 = ATgetArgument(t, 0);
                    g_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_12;
                t = foldr_3_0(v_4, w_4, t_40, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  static ATerm a_5 (ATerm t)
  {
    t = bottomup_1_0(d_89, t);
    return(t);
  }
  t = SRTS_all(a_5, t);
  t = d_89(t);
  return(t);
}
static ATerm e_7 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm u_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_52, y_52);
  t = v_7(x_52, y_52, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_40 = ATgetFirst((ATermList) t);
      {
        ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_40;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        t = term_i_22;
        e_14 = t;
        t = term_j_22;
        f_14 = t;
        t = term_k_22;
        t = e_7(f_14, e_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            if((h_41 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, h_41, (ATerm) ATempty);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm g_15 = NULL,h_15 = NULL;
          t = term_i_22;
          g_15 = t;
          t = term_j_22;
          h_15 = t;
          t = term_k_22;
          t = e_7(h_15, g_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm m_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              if((h_41 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, h_41, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  static ATerm k_41 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_90(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = SRTS_all(k_41, t);
      }
    return(t);
  }
  t = k_41(t);
  return(t);
}
static ATerm f_7 (ATerm b_108 (ATerm), ATerm z_42, ATerm x_42, ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  t = b_108(t);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_41, z_42, x_42);
  t = w_7(n_41, z_42, x_42, t);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL;
        t = term_r_22;
        t_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_41, term_r_22);
        t = v_7(n_41, t_41, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_41 = ATgetFirst((ATermList) t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_22;
  r_41 = t;
  t = (ATerm) ATinsert(CheckATermList(p_41), (ATerm) ATinsert(CheckATermList(o_41), z_42));
  s_41 = t;
  t = SSL_table_put(n_41, r_41, s_41);
  t = q_41;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm x_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      x_41 = ATgetArgument(t, 2);
      {
        ATerm e_42 = NULL,f_42 = NULL;
        t = a_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_i_22;
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_22, z_41);
        f_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATmakeAppl(sym_Defined_2, term_t_22, z_41));
        t = f_7(b_5, e_42, f_42, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_41, (ATerm)ATempty, x_41);
      }
    }
  else
    {
      ATerm i_42 = NULL,j_42 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          z_41 = ATgetArgument(t, 0);
          a_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_42;
      if(match_cons(t, sym_ConstType_1))
        {
          b_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_i_22;
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_22, z_41);
      j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATmakeAppl(sym_Defined_2, term_u_22, z_41));
      t = f_7(c_5, i_42, j_42, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_41, (ATerm) ATmakeAppl(sym_ConstType_1, b_42));
    }
  return(t);
}
static ATerm g_7 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL;
  o_42 = t;
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
        t = v_7(r_52, s_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_22 = ATgetFirst((ATermList) t);
            n_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = SSL_table_put(r_52, s_52, n_42);
        t = (ATerm) ATmakeAppl(sym__3, r_52, s_52, n_42);
      }
    else
      {
        t = w_22;
        t = SSL_table_remove(r_52, s_52);
        t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
      }
  }
  t = o_42;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  d_43 = t;
  t = y_107(t);
  c_43 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_43 = NULL;
        t = term_r_22;
        g_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_43, term_r_22);
        t = v_7(c_43, g_43, t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_22;
  e_43 = t;
  t = SSL_table_put(c_43, e_43, p_42);
  t = q_42;
  {
    static ATerm f_5 (ATerm t)
    {
      ATerm h_43 = NULL;
      h_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_43, h_43);
      t = g_7(c_43, h_43, t);
      return(t);
    }
    t = map_1_0(f_5, t);
  }
  t = d_43;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_87(t);
      t = z_87(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = h_23;
      t = z_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  k_43 = t;
  t = x_107(t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, term_r_22);
  {
    ATerm o_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_22;
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_43, term_r_22);
        t = v_7(j_43, r_43, t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATempty;
      }
  }
  l_43 = t;
  t = term_r_22;
  m_43 = t;
  t = (ATerm) ATinsert(CheckATermList(l_43), (ATerm) ATempty);
  n_43 = t;
  t = SSL_table_put(j_43, m_43, n_43);
  t = k_43;
  return(t);
}
ATerm scope_2_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  static ATerm g_5 (ATerm t)
  {
    t = end_scope_1_0(z_107, t);
    return(t);
  }
  t = begin_scope_1_0(z_107, t);
  t = restore_always_2_0(a_108, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,r_10 = NULL;
  z_43 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_43);
  w_43 = t;
  t = x_43;
  t = map_1_0(n_5, t);
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_43);
  r_10 = t;
  t = SSLsetAnnotations(r_10, w_43);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  n_44 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      m_44 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL,p_16 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(n_44);
            d_16 = t;
            t = m_44;
            t = map_1_0(o_5, t);
            p_16 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, p_16);
            o_10 = t;
            t = SSLsetAnnotations(o_10, d_16);
            LocalPopChoice(v_23);
          }
        else
          {
            t = t_23;
            t = n_44;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          m_44 = ATgetArgument(t, 0);
          {
            ATerm w_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_17 = NULL,k_17 = NULL,q_10 = NULL;
                t = SSLgetAnnotations(n_44);
                i_17 = t;
                t = m_44;
                t = map_1_0(p_5, t);
                k_17 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, k_17);
                q_10 = t;
                t = SSLsetAnnotations(q_10, i_17);
                LocalPopChoice(z_23);
              }
            else
              {
                t = w_23;
                t = n_44;
              }
          }
        }
      else
        {
          t = n_44;
        }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(h_5, l_5, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_44;
    }
  else
    {
      static ATerm q_5 (ATerm t)
      {
        t = not_null(w_44);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_44 = ATgetFirst((ATermList) t);
          if(((w_44 != NULL) && (w_44 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_44;
      t = at_end_1_0(q_5, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_18 = NULL,t_18 = NULL,u_18 = NULL,a_11 = NULL;
            t = SSLgetAnnotations(l_45);
            n_18 = t;
            t = m_45;
            t = v_102(t);
            t_18 = t;
            t = n_45;
            t = filter_1_0(v_102, t);
            u_18 = t;
            t = (ATerm) ATinsert(CheckATermList(u_18), t_18);
            a_11 = t;
            t = SSLsetAnnotations(a_11, n_18);
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = n_45;
            t = filter_1_0(v_102, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  static ATerm l_46 (ATerm t)
  {
    ATerm g_46 = NULL,j_46 = NULL,k_46 = NULL;
    k_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_46 = ATgetFirst((ATermList) t);
        j_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_19 = NULL,i_19 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(k_46);
          f_19 = t;
          t = j_46;
          t = l_46(t);
          i_19 = t;
          t = (ATerm) ATinsert(CheckATermList(i_19), g_46);
          c_11 = t;
          t = SSLsetAnnotations(c_11, f_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_46;
        t = e_96(t);
      }
    return(t);
  }
  t = l_46(t);
  return(t);
}
static ATerm z_46 (ATerm p_46, ATerm t)
{
  ATerm q_46 = NULL;
  t = SSL_explode_term(p_46);
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,v_46 = NULL;
  v_46 = t;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_5 (ATerm t)
            {
              t = t_46;
              return(t);
            }
            t = s_46;
            t = at_end_1_0(r_5, t);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = z_46(v_46, t);
          }
      }
    }
  else
    {
      t = z_46(v_46, t);
    }
  return(t);
}
static ATerm j_7 (ATerm s_20, ATerm o_20, ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  static ATerm s_5 (ATerm t)
  {
    ATerm d_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
    i_47 = t;
    t = SSL_explode_term(i_47);
    if(match_cons(t, sym__2))
      {
        if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_47 = ATgetArgument(t, 0);
        {
          ATerm k_24 = ATgetArgument(t, 1);
          if(((ATgetType(k_24) == AT_LIST) && !(ATisEmpty(k_24))))
            {
              d_47 = ATgetFirst((ATermList) k_24);
              {
                ATerm l_24 = (ATerm) ATgetNext((ATermList) k_24);
                if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, d_47, not_null(b_47));
    t = conc_0_0(t);
    g_47 = t;
    t = (ATerm) ATinsert(ATempty, g_47);
    h_47 = t;
    t = SSL_mkterm(a_47, h_47);
    return(t);
  }
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_47 = ATgetArgument(t, 0);
      {
        ATerm m_24 = ATgetArgument(t, 1);
        if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
          {
            if(((b_47 != NULL) && (b_47 != ATgetFirst((ATermList) m_24))))
              _fail(ATgetFirst((ATermList) m_24));
            else
              b_47 = ATgetFirst((ATermList) m_24);
            {
              ATerm n_24 = (ATerm) ATgetNext((ATermList) m_24);
              if(((ATgetType(n_24) != AT_LIST) || !(ATisEmpty(n_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_20;
  t = fetch_1_0(s_5, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,o_47 = NULL;
  k_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_47;
      t = t_101(t);
    }
  else
    {
      ATerm r_47 = NULL,s_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_47;
      t = v_101(t);
      r_47 = t;
      t = o_47;
      t = foldr_3_0(t_101, u_101, v_101, t);
      s_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
      t = u_101(t);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_24), term_p_24), term_o_24);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm g_48 = NULL,i_48 = NULL;
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(g_48, i_48, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm k_48 = NULL,m_48 = NULL;
  m_48 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_48 = ATgetArgument(t, 0);
      {
        ATerm u_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = NULL;
            t = k_48;
            t = filter_1_0(y_5, t);
            t = concat_0_0(t);
            p_48 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, p_48);
            LocalPopChoice(w_24);
          }
        else
          {
            t = u_24;
            t = m_48;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          k_48 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, k_48);
        }
      else
        {
          t = m_48;
        }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm q_48 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_48;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,o_11 = NULL;
  d_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_48);
  a_48 = t;
  t = b_48;
  t = foldr_3_0(t_5, v_5, x_5, t);
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_48);
  o_11 = t;
  t = SSLsetAnnotations(o_11, a_48);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_50 = NULL,q_50 = NULL,s_50 = NULL,t_50 = NULL,v_50 = NULL;
  v_50 = t;
  if(match_cons(t, sym_LRule_1))
    {
      t_50 = ATgetArgument(t, 0);
      t = t_50;
      if(match_cons(t, sym_Rule_3))
        {
          o_50 = ATgetArgument(t, 0);
          q_50 = ATgetArgument(t, 1);
          s_50 = ATgetArgument(t, 2);
          {
            ATerm z_24 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_51 = NULL;
                t = o_50;
                t = free_vars_3_0(d_6, e_6, tboundin_3_0, t);
                d_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_51, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_50, q_50, s_50)));
                LocalPopChoice(c_25);
              }
            else
              {
                t = z_24;
                t = v_50;
              }
          }
        }
      else
        {
          t = v_50;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          t_50 = ATgetArgument(t, 0);
          {
            ATerm e_25 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_53 = NULL;
                t = t_50;
                t = free_vars_3_0(h_6, i_6, tboundin_3_0, t);
                e_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, e_53, t_50);
                LocalPopChoice(g_25);
              }
            else
              {
                t = e_25;
                t = v_50;
              }
          }
        }
      else
        {
          t = v_50;
        }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm e_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_51);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm k_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = k_25;
            {
              ATerm g_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_51 = ATgetArgument(t, 0);
                  j_51 = ATgetArgument(t, 1);
                  k_51 = ATgetArgument(t, 2);
                  l_51 = ATgetArgument(t, 3);
                  t = k_51;
                  t = map_1_0(f_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_51 = ATgetArgument(t, 0);
                      j_51 = ATgetArgument(t, 1);
                      k_51 = ATgetArgument(t, 2);
                      l_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_51;
                  t = map_1_0(g_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm b_52 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_52 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = b_52;
    }
  else
    {
      t = n_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_52;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_52 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_52 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = t_52;
    }
  else
    {
      t = q_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_52;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm f_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_53);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_53 = ATgetArgument(t, 0);
                  i_53 = ATgetArgument(t, 1);
                  j_53 = ATgetArgument(t, 2);
                  k_53 = ATgetArgument(t, 3);
                  t = j_53;
                  t = map_1_0(j_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_53 = ATgetArgument(t, 0);
                      i_53 = ATgetArgument(t, 1);
                      j_53 = ATgetArgument(t, 2);
                      k_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_53;
                  t = map_1_0(k_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm r_53 = NULL;
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_53 = ATgetArgument(t, 0);
          {
            ATerm z_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_25);
      t = r_53;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_53;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_54 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_26);
      t = c_54;
    }
  else
    {
      t = a_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_54;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = Cons_2_0(m_6, p_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm p_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,s_12 = NULL;
  u_54 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_54);
  p_54 = t;
  t = s_54;
  t = topdown_1_0(q_6, t);
  t = listtd_1_0(r_6, t);
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_54);
  s_12 = t;
  t = SSLsetAnnotations(s_12, p_54);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = repeat_2_0(s_6, _id, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_55 = ATgetFirst((ATermList) t);
      b_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_6(a_55, b_55, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_55 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      m_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, m_55)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm s_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL,i_13 = NULL,u_12 = NULL,t_12 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(z_5, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(a_6, t);
  l_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_50);
  y_49 = t;
  t = d_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_50 = ATgetFirst((ATermList) t);
      g_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_50);
  e_50 = t;
  t = g_50;
  t = Cons_2_0(_id, l_6, t);
  h_50 = t;
  t = (ATerm) ATinsert(CheckATermList(h_50), f_50);
  t_12 = t;
  t = SSLsetAnnotations(t_12, e_50);
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_50);
  u_12 = t;
  t = SSLsetAnnotations(u_12, y_49);
  t = topdown_1_0(b_7, t);
  x_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  s_49 = t;
  t = v_49;
  t = fetch_1_0(c_7, t);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_49);
  i_13 = t;
  t = SSLsetAnnotations(i_13, s_49);
  return(t);
}
static ATerm k_7 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm q_55 = NULL;
  t = SSL_fputc(p_38, q_38);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_55);
  return(t);
}
static ATerm l_7 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm r_55 = NULL;
  t = SSL_write_term_to_stream_text(e_23, f_23);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_55);
  return(t);
}
static ATerm n_7 (ATerm f_95 (ATerm), ATerm n_158, ATerm i_23, ATerm t)
{
  ATerm s_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_158, term_h_26);
  t = q_7(t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, i_23);
  t = f_95(t);
  t = fclose_0_0(t);
  t = i_23;
  return(t);
}
static ATerm m_7 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm u_55 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_55);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(match_cons(i_26, sym_Stream_1))
        {
          a_56 = ATgetArgument(i_26, 0);
        }
      else
        _fail(t);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(a_56, b_56, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym_Stream_1))
        {
          f_56 = ATgetArgument(j_26, 0);
        }
      else
        _fail(t);
      i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(f_56, i_56, t);
  c_56 = t;
  t = term_k_26;
  d_56 = t;
  t = c_56;
  if(match_cons(t, sym_Stream_1))
    {
      e_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, c_56);
  t = k_7(d_56, e_56, t);
  return(t);
}
ATerm output_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,y_55 = NULL;
  t = c_113(t);
  y_55 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_26;
        t = get_config_0_0(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = term_o_26;
      }
  }
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_55, y_55);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_26;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, v_55, y_55);
        LocalPopChoice(q_26);
        if(match_cons(t, sym__2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_7(d_7, v_55, y_55, t);
      }
    else
      {
        t = p_26;
        if(match_cons(t, sym__2))
          {
            ATerm u_26 = ATgetArgument(t, 0);
            ATerm v_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_7(h_7, v_55, y_55, t);
      }
  }
  return(t);
}
static ATerm j_57 (ATerm t_56, ATerm t)
{
  t = SSL_fclose(t_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  d_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_57 = ATgetArgument(t, 0);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_57);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = j_57(d_57, t);
          }
      }
    }
  else
    {
      t = j_57(d_57, t);
    }
  return(t);
}
static ATerm o_7 (ATerm g_23, ATerm t)
{
  t = SSL_read_term_from_stream(g_23);
  return(t);
}
static ATerm p_7 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm k_57 = NULL;
  t = SSL_fopen(r_38, s_38);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_57 = NULL;
  t = SSL_stdin_stream();
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_57 = NULL;
  t = SSL_stdout_stream();
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_57 = NULL;
  t = SSL_stderr_stream();
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_57);
  return(t);
}
static ATerm d_59 (ATerm x_57, ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_explode_term(x_57);
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
          {
            y_57 = ATgetFirst((ATermList) z_26);
            {
              ATerm a_27 = (ATerm) ATgetNext((ATermList) z_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_59 (ATerm d_58, ATerm e_58, ATerm g_58, ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,m_58 = NULL,w_13 = NULL;
  t = SSLgetAnnotations(g_58);
  j_58 = t;
  t = d_58;
  if(match_cons(t, sym_Path_1))
    {
      m_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_58, e_58);
  w_13 = t;
  t = SSLsetAnnotations(w_13, j_58);
  if(match_cons(t, sym__2))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(h_58, i_58, t);
  return(t);
}
static ATerm f_59 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,y_58 = NULL,q_14 = NULL;
  t = SSLgetAnnotations(q_58);
  v_58 = t;
  t = SSL_is_string(o_58);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, p_58);
  q_14 = t;
  t = SSLsetAnnotations(q_14, v_58);
  if(match_cons(t, sym__2))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(t_58, u_58, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
  a_59 = t;
  if(match_cons(t, sym__2))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_59(a_59, t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm d_27 = t;
              int e_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_59(b_59, c_59, a_59, t);
                  LocalPopChoice(e_27);
                }
              else
                {
                  t = d_27;
                  t = f_59(b_59, c_59, a_59, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_59(a_59, t);
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,j_59 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_59 = NULL;
      k_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_59, term_i_27);
      t = q_7(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = debug_1_0(i_7, t);
      _fail(t);
    }
  h_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(j_59, t);
  g_59 = t;
  t = h_59;
  t = fclose_0_0(t);
  t = g_59;
  return(t);
}
ATerm input_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_27;
      t = get_config_0_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = term_m_27;
    }
  t = ReadFromFile_0_0(t);
  t = d_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  m_59 = t;
  t = term_n_27;
  t = whoami_0_0(t);
  n_59 = t;
  t = term_n_11;
  p_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), n_59), term_o_27);
  q_59 = t;
  t = SSL_printnl(p_59, q_59);
  t = term_r_11;
  o_59 = t;
  t = SSL_exit(o_59);
  t = m_59;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm u_59 = NULL;
  u_59 = t;
  if(match_string(t, "-k"))
    {
      t = u_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_59;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
  v_59 = t;
  t = SSL_string_to_int(v_59);
  w_59 = t;
  t = term_q_27;
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, w_59);
  t = y_7(x_59, w_59, t);
  t = v_59;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_7, t_7, x_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm a_60 = NULL;
  a_60 = t;
  if(match_string(t, "-S"))
    {
      t = a_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_60;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm b_60 = NULL,d_60 = NULL;
  t = term_s_27;
  b_60 = t;
  t = term_t_27;
  d_60 = t;
  t = term_u_27;
  t = y_7(b_60, d_60, t);
  t = term_v_27;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm e_60 = NULL,g_60 = NULL,h_60 = NULL;
  e_60 = t;
  t = SSL_string_to_int(e_60);
  g_60 = t;
  t = term_s_27;
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, g_60);
  t = y_7(h_60, g_60, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_60);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  t = term_y_27;
  j_60 = t;
  t = term_n_27;
  k_60 = t;
  t = term_z_27;
  t = y_7(j_60, k_60, t);
  t = term_a_28;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_7, a_8, b_8, t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_8, d_8, f_8, t);
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = Option_3_0(g_8, j_8, k_8, t);
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm l_60 = NULL;
  t = term_g_28;
  l_60 = t;
  t = SSL_table_put(l_60, m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__3, term_g_28, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
      t = term_n_27;
      t = e_0(t);
      x_60 = t;
      t = term_h_28;
      y_60 = t;
      t = term_i_28;
      z_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_i_28, x_60);
      t = w_7(y_60, z_60, x_60, t);
      _fail(t);
    }
  else
    {
      ATerm d_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_60 = ATgetFirst((ATermList) t);
          v_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_60;
      t = c_0(t);
      t = term_n_27;
      t = d_0(t);
      d_61 = t;
      t = (ATerm) ATinsert(CheckATermList(v_60), d_61);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  if(match_string(t, "-o"))
    {
      t = h_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_61;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL;
  i_61 = t;
  t = term_n_26;
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, i_61);
  t = y_7(j_61, i_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_61);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, o_8, t);
  return(t);
}
static ATerm w_7 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,o_61 = NULL;
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            ATerm n_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
        t = v_7(m_52, n_52, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATempty;
      }
  }
  m_61 = t;
  t = (ATerm) ATinsert(CheckATermList(m_61), l_52);
  o_61 = t;
  t = SSL_table_put(m_52, n_52, o_61);
  t = l_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_62 = NULL,q_62 = NULL,r_62 = NULL;
      t = term_n_27;
      t = n_0(t);
      b_62 = t;
      t = term_h_28;
      q_62 = t;
      t = term_i_28;
      r_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_i_28, b_62);
      t = w_7(q_62, r_62, b_62, t);
      _fail(t);
    }
  else
    {
      ATerm i_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_61 = ATgetFirst((ATermList) t);
          w_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_61 = ATgetFirst((ATermList) t);
          y_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_61;
      t = k_0(t);
      t = x_61;
      t = l_0(t);
      i_63 = t;
      t = (ATerm) ATinsert(CheckATermList(y_61), i_63);
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm o_63 = NULL;
  o_63 = t;
  if(match_string(t, "-i"))
    {
      t = o_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_63;
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  p_63 = t;
  t = term_l_27;
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, p_63);
  t = y_7(q_63, p_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_63);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_8, q_8, r_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,u_63 = NULL,v_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_27;
  t = whoami_0_0(t);
  r_63 = t;
  t = term_n_11;
  u_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_28), r_63);
  v_63 = t;
  t = SSL_printnl(u_63, v_63);
  t = term_r_11;
  s_63 = t;
  t = SSL_exit(s_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm r_7 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_41, m_41);
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = SSL_addr(l_41, m_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,h_64 = NULL;
  a_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_64;
      t = r_101(t);
    }
  else
    {
      ATerm m_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_64 = ATgetFirst((ATermList) t);
          h_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_64;
      t = foldr_2_0(r_101, s_101, t);
      m_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_64, m_64);
      t = s_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(x_20, y_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_64 = NULL,e_20 = NULL,q_20 = NULL;
  t = times_0_0(t);
  q_20 = t;
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_20;
  t = foldr_2_0(w_8, x_8, t);
  q_64 = t;
  t = SSL_TicksToSeconds(q_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  b_65 = t;
  if(match_cons(t, sym__2))
    {
      c_65 = ATgetArgument(t, 0);
      d_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_65;
        if((c_65 != t))
          {
            _fail(t);
          }
        t = b_65;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = (ATerm) ATmakeAppl(sym__2, c_65, d_65);
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_65, d_65);
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = SSL_gtr(c_65, d_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_65, d_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm r_65 = NULL;
  r_65 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_65 = NULL;
        t = term_s_27;
        t = get_config_0_0(t);
        v_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_65, term_r_11);
        t = geq_0_0(t);
        t = r_65;
        t = d_110(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = r_65;
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,y_66 = NULL,z_66 = NULL;
  t = run_time_0_0(t);
  v_66 = t;
  t = term_n_27;
  t = whoami_0_0(t);
  w_66 = t;
  t = term_n_11;
  y_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), v_66), term_g_29), w_66);
  z_66 = t;
  t = SSL_printnl(y_66, z_66);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_29), v_66), term_g_29), w_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_27;
  a_67 = t;
  t = SSL_exit(a_67);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  j_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_67 = ATgetArgument(t, 0);
          {
            ATerm p_21 = NULL,m_15 = NULL;
            t = SSLgetAnnotations(j_67);
            p_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_67);
            m_15 = t;
            t = SSLsetAnnotations(m_15, p_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_112 (ATerm), ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_29;
      t = get_config_0_0(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = fetch_1_0(z_8, t);
    }
  t = t_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_67 = ATgetFirst((ATermList) t);
      n_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_67 = NULL,u_67 = NULL;
        static ATerm a_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_67)), not_null(u_67));
          return(t);
        }
        t = n_67;
        t = i_0(t);
        if(((r_67 != NULL) && (r_67 != t)))
          _fail(t);
        else
          r_67 = t;
        t = m_67;
        t = g_0(t);
        if(((u_67 != NULL) && (u_67 != t)))
          _fail(t);
        else
          u_67 = t;
        t = n_67;
        t = reverse_acc_2_0(g_0, a_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,o_15 = NULL;
  a_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_67);
  o_15 = t;
  t = SSLsetAnnotations(o_15, y_67);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_68), term_l_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_28;
      t = get_config_0_0(t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = fetch_1_0(b_9, t);
    }
  t = term_o_29;
  t = echo_0_0(t);
  t = term_h_28;
  w_67 = t;
  t = term_i_28;
  x_67 = t;
  t = term_p_29;
  t = v_7(w_67, x_67, t);
  t = reverse_acc_2_0(_id, c_9, t);
  t = map_1_0(d_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  static ATerm z_68 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
    w_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_68 = ATgetFirst((ATermList) t);
        y_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_22 = NULL,h_22 = NULL,t_15 = NULL;
          t = SSLgetAnnotations(w_68);
          b_22 = t;
          t = x_68;
          t = y_95(t);
          h_22 = t;
          t = (ATerm) ATinsert(CheckATermList(y_68), h_22);
          t_15 = t;
          t = SSLsetAnnotations(t_15, b_22);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm s_22 = NULL,x_22 = NULL,u_15 = NULL;
            t = SSLgetAnnotations(w_68);
            s_22 = t;
            t = y_68;
            t = z_68(t);
            x_22 = t;
            t = (ATerm) ATinsert(CheckATermList(x_22), x_68);
            u_15 = t;
            t = SSLsetAnnotations(u_15, s_22);
          }
        }
    }
    return(t);
  }
  t = z_68(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
  d_69 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_29 = ATgetFirst((ATermList) t);
                ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_69;
          }
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = (ATerm) ATinsert(ATempty, d_69);
      }
  }
  e_69 = t;
  t = term_o_26;
  f_69 = t;
  t = SSL_printnl(f_69, e_69);
  t = d_69;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm i_37, ATerm j_37, ATerm t)
{
  t = SSL_strcat(i_37, j_37);
  return(t);
}
ATerm debug_1_0 (ATerm d_95 (ATerm), ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  j_69 = t;
  t = d_95(t);
  k_69 = t;
  t = term_n_11;
  l_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_69), k_69);
  m_69 = t;
  t = SSL_printnl(l_69, m_69);
  t = j_69;
  return(t);
}
ATerm map_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  static ATerm b_70 (ATerm t)
  {
    ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
    y_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_69;
      }
    else
      {
        ATerm u_23 = NULL,x_23 = NULL,y_23 = NULL,n_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_69 = ATgetFirst((ATermList) t);
            a_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_69);
        u_23 = t;
        t = z_69;
        t = o_95(t);
        x_23 = t;
        t = a_70;
        t = b_70(t);
        y_23 = t;
        t = (ATerm) ATinsert(CheckATermList(y_23), x_23);
        n_16 = t;
        t = SSLsetAnnotations(n_16, u_23);
      }
    return(t);
  }
  t = b_70(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_70 = NULL;
      j_70 = t;
      t = SSL_is_string(j_70);
      LocalPopChoice(e_30);
    }
  else
    {
      t = a_30;
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_9, t);
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
              p_70 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_70 = ATgetArgument(t, 0);
                  t = q_70;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_70 = ATgetArgument(t, 0);
                      t = q_70;
                      {
                        ATerm h_30 = t;
                        int j_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(j_30);
                          }
                        else
                          {
                            t = h_30;
                            t = debug_1_0(h_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_70 = NULL,w_70 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_70 = ATgetArgument(t, 0);
                          r_70 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_70;
                      t = eval_config_0_0(t);
                      v_70 = t;
                      t = r_70;
                      t = eval_config_0_0(t);
                      w_70 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_70, w_70);
                      t = u_7(v_70, w_70, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm d_54, ATerm e_54, ATerm t)
{
  t = SSL_table_get(d_54, e_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  a_71 = t;
  t = term_g_28;
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_28, a_71);
  t = v_7(b_71, a_71, t);
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_71 = NULL,d_71 = NULL;
        t = eval_config_0_0(t);
        c_71 = t;
        t = term_g_28;
        d_71 = t;
        t = SSL_table_put(d_71, a_71, c_71);
        t = c_71;
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
      }
  }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL;
  t = term_m_30;
  g_71 = t;
  t = term_n_27;
  h_71 = t;
  t = term_n_30;
  t = y_7(g_71, h_71, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_o_30;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL;
  t = term_m_30;
  k_71 = t;
  t = term_n_27;
  l_71 = t;
  t = term_n_30;
  t = y_7(k_71, l_71, t);
  t = term_p_30;
  i_71 = t;
  t = term_n_27;
  j_71 = t;
  t = term_q_30;
  t = y_7(i_71, j_71, t);
  t = term_r_30;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_9, j_9, k_9, t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = Option_3_0(l_9, n_9, p_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,b_17 = NULL;
  r_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_71 = ATgetFirst((ATermList) t);
      o_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_71);
  m_71 = t;
  t = n_71;
  t = m_74(t);
  p_71 = t;
  t = o_71;
  t = n_74(t);
  q_71 = t;
  t = (ATerm) ATinsert(CheckATermList(q_71), p_71);
  b_17 = t;
  t = SSLsetAnnotations(b_17, m_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,b_72 = NULL,c_72 = NULL,r_20 = NULL;
  w_71 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = w_114(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
      }
  }
  t = w_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_71 = ATgetFirst((ATermList) t);
      z_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_71);
  x_71 = t;
  t = term_q_28;
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, y_71);
  t = y_7(c_72, y_71, t);
  t = z_71;
  {
    static ATerm m_72 (ATerm t)
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_72 = NULL;
              f_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_72;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = w_114(t);
              t = Cons_2_0(_id, m_72, t);
            }
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          {
            ATerm i_72 = NULL,j_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_72 = ATgetFirst((ATermList) t);
                j_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_72), (ATerm) ATmakeAppl(sym_Undefined_1, i_72));
          }
        }
      return(t);
    }
    t = m_72(t);
  }
  b_72 = t;
  t = (ATerm) ATinsert(CheckATermList(b_72), (ATerm) ATmakeAppl(sym_Program_1, y_71));
  r_20 = t;
  t = SSLsetAnnotations(r_20, x_71);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  if(match_string(t, "--help"))
    {
      t = y_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_72;
        }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  t = term_k_29;
  z_72 = t;
  t = term_n_27;
  a_73 = t;
  t = term_c_31;
  t = y_7(z_72, a_73, t);
  t = term_e_31;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t_72 = t;
  t = term_h_28;
  v_72 = t;
  t = term_i_28;
  w_72 = t;
  t = (ATerm) ATempty;
  x_72 = t;
  t = SSL_table_put(v_72, w_72, x_72);
  t = t_72;
  {
    static ATerm q_9 (ATerm t)
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_114(t);
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_9, s_9, t_9, t);
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_9, t);
  }
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL;
        h_73 = t;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_25 = NULL;
              t = h_73;
              {
                ATerm t_31 = t;
                int u_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_31);
                  }
                else
                  {
                    t = t_31;
                    t = fetch_1_0(u_9, t);
                  }
              }
              t = h_73;
              t = default_system_usage_0_0(t);
              t = term_t_27;
              d_25 = t;
              t = SSL_exit(d_25);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              {
                ATerm l_25 = NULL;
                t = term_m_30;
                t = get_config_0_0(t);
                t = h_73;
                t = default_system_about_0_0(t);
                t = term_t_27;
                l_25 = t;
                t = SSL_exit(l_25);
              }
            }
        }
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
              static ATerm x_9 (ATerm t)
              {
                ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,b_24 = NULL;
                n_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_73);
                l_73 = t;
                t = m_73;
                if(((r_72 != NULL) && (r_72 != t)))
                  _fail(t);
                else
                  r_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_73);
                b_24 = t;
                t = SSLsetAnnotations(b_24, l_73);
                return(t);
              }
              t = fetch_1_0(x_9, t);
              t = term_n_11;
              j_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_72)), term_y_31);
              k_73 = t;
              t = SSL_printnl(j_73, k_73);
              t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_72)), term_y_31));
              t = default_system_usage_0_0(t);
              t = term_r_11;
              i_73 = t;
              t = SSL_exit(i_73);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
            }
        }
      }
  }
  s_72 = t;
  t = term_h_28;
  u_72 = t;
  t = SSL_table_destroy(u_72);
  t = s_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t = parse_options_1_0(v_112, t);
  s_73 = t;
  t = term_z_31;
  v_73 = t;
  t = SSL_table_create(v_73);
  t = term_z_31;
  t_73 = t;
  t = term_a_32;
  u_73 = t;
  t = SSL_table_put(t_73, u_73, s_73);
  t = s_73;
  t = x_112(t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_112, t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm j_32 = t;
              int l_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_10, c_10, e_10, t);
                  LocalPopChoice(l_32);
                }
              else
                {
                  t = j_32;
                  {
                    ATerm m_32 = t;
                    int n_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(n_32);
                      }
                    else
                      {
                        t = m_32;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = input_1_0(h_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  t = term_r_26;
  x_73 = t;
  t = term_n_27;
  y_73 = t;
  t = term_p_32;
  t = y_7(x_73, y_73, t);
  t = term_r_32;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_9, default_usage_0_0, _id, a_10, t);
  return(t);
}
