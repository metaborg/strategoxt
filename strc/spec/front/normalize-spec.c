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
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_u_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_t_21;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Op_2, term_z_10, (ATerm) ATempty);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_15);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_18);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_22);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_e_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_z_27);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_e_27);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_e_27);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_e_27);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_e_27);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
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
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm split_dynamic_rules_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm e_90 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm t_119 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm k_6 (ATerm h_65, ATerm g_65, ATerm t);
ATerm repeat_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm v_96 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm p_6 (ATerm q_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm q_6 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm r_6 (ATerm l_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t);
ATerm genzip_4_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm w_6 (ATerm m_596, ATerm r_596, ATerm w_56, ATerm t);
ATerm while_not_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm b_40 (ATerm n_38, ATerm u_38, ATerm v_38, ATerm t);
static ATerm o_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm free_vars_3_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm b_89 (ATerm), ATerm t);
static ATerm a_7 (ATerm v_52, ATerm w_52, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm s_90 (ATerm), ATerm t);
static ATerm b_7 (ATerm z_107 (ATerm), ATerm x_42, ATerm v_42, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm c_7 (ATerm p_52, ATerm q_52, ATerm t);
ATerm end_scope_1_0 (ATerm w_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_107 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_96 (ATerm), ATerm t);
static ATerm v_46 (ATerm g_46, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_7 (ATerm s_20, ATerm o_20, ATerm t);
ATerm foldr_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm g_7 (ATerm o_38, ATerm p_38, ATerm t);
static ATerm h_7 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm j_7 (ATerm d_95 (ATerm), ATerm l_158, ATerm i_23, ATerm t);
static ATerm i_7 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm output_1_0 (ATerm a_113 (ATerm), ATerm t);
static ATerm x_56 (ATerm m_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_7 (ATerm g_23, ATerm t);
static ATerm l_7 (ATerm q_38, ATerm r_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_58 (ATerm r_57, ATerm t);
static ATerm c_59 (ATerm v_57, ATerm y_57, ATerm z_57, ATerm t);
static ATerm d_59 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm t);
static ATerm m_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_7 (ATerm k_47, ATerm l_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_7 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm j_41, ATerm k_41, ATerm t);
ATerm foldr_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_110 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm need_help_1_0 (ATerm r_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_95 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_7 (ATerm i_37, ATerm j_37, ATerm t);
ATerm debug_1_0 (ATerm b_95 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_95 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_7 (ATerm b_54, ATerm c_54, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_114 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm parse_options_1_0 (ATerm t_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,z_0 = NULL,c_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_1, e_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_1 = ATgetArgument(t, 0);
          t = c_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_0 = ATgetFirst((ATermList) t);
              w_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_0, (ATerm) ATmakeAppl(sym_LChoices_1, w_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_1 = ATgetArgument(t, 0);
              t = c_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_0 = ATgetFirst((ATermList) t);
                  w_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_0, (ATerm) ATmakeAppl(sym_Choices_1, w_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_1 = ATgetArgument(t, 0);
                  t = c_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_0 = ATgetFirst((ATermList) t);
                      w_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_0, (ATerm) ATmakeAppl(sym_Seqs_1, w_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      c_1 = ATgetArgument(t, 0);
                      e_1 = ATgetArgument(t, 1);
                      z_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_1, (ATerm) ATmakeAppl(sym_Op_2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, z_0), c_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          c_1 = ATgetArgument(t, 0);
                          e_1 = ATgetArgument(t, 1);
                          z_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_0)), c_1), (ATerm) ATmakeAppl(sym_Build_1, e_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              c_1 = ATgetArgument(t, 0);
                              e_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_1, (ATerm) ATmakeAppl(sym_Match_1, e_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  c_1 = ATgetArgument(t, 0);
                                  e_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_1), e_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      c_1 = ATgetArgument(t, 0);
                                      e_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_1), c_1);
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
ATerm topdown_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(a_89, t);
    return(t);
  }
  t = a_89(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm d_3 = NULL,i_3 = NULL,l_3 = NULL;
  d_3 = t;
  {
    ATerm k_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_10);
        t = d_3;
        {
          ATerm t_10 = t;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL,r_0 = NULL,u_0 = NULL;
              r_0 = t;
              if(match_cons(t, sym_Var_1))
                {
                  q_0 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_u_10;
              u_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_10, r_0);
              t = a_7(u_0, r_0, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm y_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_10;
            }
        }
        t = term_a_11;
      }
    else
      {
        t = k_10;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_11;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                i_3 = ATgetArgument(t, 0);
                {
                  ATerm u_3 = NULL;
                  t = i_3;
                  t = free_vars_3_0(s_0, t_0, tboundin_3_0, t);
                  t = map_1_0(j_1, t);
                  u_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_11, u_3);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    i_3 = ATgetArgument(t, 0);
                    l_3 = ATgetArgument(t, 1);
                    {
                      ATerm m_5 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, i_3, l_3);
                      t = free_vars_3_0(k_1, l_1, tboundin_3_0, t);
                      t = map_1_0(o_1, t);
                      m_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_c_11, m_5);
                    }
                  }
                else
                  {
                    ATerm y_0 = NULL,b_1 = NULL,d_1 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm g_11 = ATgetArgument(t, 0);
                        ATerm i_11 = ATgetArgument(t, 1);
                        ATerm t_11 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_x_11;
                    b_1 = t;
                    t = (ATerm) ATinsert(ATempty, term_y_11);
                    d_1 = t;
                    t = SSL_printnl(b_1, d_1);
                    t = term_a_12;
                    y_0 = t;
                    t = SSL_exit(y_0);
                    t = (ATerm) ATinsert(ATempty, term_y_11);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm w_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_3);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = d_12;
            {
              ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_3 = ATgetArgument(t, 0);
                  a_4 = ATgetArgument(t, 1);
                  b_4 = ATgetArgument(t, 2);
                  d_4 = ATgetArgument(t, 3);
                  t = b_4;
                  t = map_1_0(a_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_3 = ATgetArgument(t, 0);
                      a_4 = ATgetArgument(t, 1);
                      b_4 = ATgetArgument(t, 2);
                      d_4 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_4;
                  t = map_1_0(i_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_4 = NULL;
  ATerm i_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_4 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
      t = n_4;
    }
  else
    {
      t = i_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_4;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_5 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_5 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = b_5;
    }
  else
    {
      t = p_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_5;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_5);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_5);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm s_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = s_12;
      {
        ATerm w_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = w_12;
            {
              ATerm r_5 = NULL,s_5 = NULL,v_5 = NULL,w_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_5 = ATgetArgument(t, 0);
                  s_5 = ATgetArgument(t, 1);
                  v_5 = ATgetArgument(t, 2);
                  w_5 = ATgetArgument(t, 3);
                  t = v_5;
                  t = map_1_0(m_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_5 = ATgetArgument(t, 0);
                      s_5 = ATgetArgument(t, 1);
                      v_5 = ATgetArgument(t, 2);
                      w_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_5;
                  t = map_1_0(n_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_7 = ATgetArgument(t, 0);
          {
            ATerm f_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_13);
      t = p_7;
    }
  else
    {
      t = d_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_7;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm h_8 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_8 = ATgetArgument(t, 0);
          {
            ATerm i_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = h_8;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_8;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_8);
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
static ATerm p_1 (ATerm t)
{
  ATerm x_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_12);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_12 = ATgetArgument(t, 0);
                  a_13 = ATgetArgument(t, 1);
                  b_13 = ATgetArgument(t, 2);
                  c_13 = ATgetArgument(t, 3);
                  t = b_13;
                  t = map_1_0(r_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_12 = ATgetArgument(t, 0);
                      a_13 = ATgetArgument(t, 1);
                      b_13 = ATgetArgument(t, 2);
                      c_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_13;
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
  ATerm n_13 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_13 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = n_13;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_13;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_14 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = e_14;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_14;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_14);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm i_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_14);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm k_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_14 = ATgetArgument(t, 0);
                  r_14 = ATgetArgument(t, 1);
                  s_14 = ATgetArgument(t, 2);
                  t_14 = ATgetArgument(t, 3);
                  t = s_14;
                  t = map_1_0(w_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_14 = ATgetArgument(t, 0);
                      r_14 = ATgetArgument(t, 1);
                      s_14 = ATgetArgument(t, 2);
                      t_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_14;
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
  ATerm a_15 = NULL;
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_15 = ATgetArgument(t, 0);
          {
            ATerm d_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_14);
      t = a_15;
    }
  else
    {
      t = b_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_15;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_15 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_15 = ATgetArgument(t, 0);
          {
            ATerm j_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_14);
      t = q_15;
    }
  else
    {
      t = f_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_15;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm t_15 = NULL,f_1 = NULL,g_1 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_15);
  f_1 = t;
  t = term_u_10;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, (ATerm) ATmakeAppl(sym_Var_1, t_15));
  t = a_7(g_1, f_1, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_15);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm n_16 (ATerm m_11, ATerm n_11, ATerm o_11, ATerm p_11, ATerm q_11, ATerm r_11, ATerm s_11, ATerm t)
  {
    ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,t_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, q_11, term_p_14);
    {
      ATerm u_14 = t;
      if((PushChoice() == 0))
        {
          ATerm u_12 = NULL;
          if(match_cons(t, sym__2))
            {
              u_12 = ATgetArgument(t, 0);
              if((u_12 != ATgetArgument(t, 1)))
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
          t = u_14;
        }
    }
    t = new_0_0(t);
    e_12 = t;
    t = p_11;
    t = dummify_0_0(t);
    g_12 = t;
    {
      ATerm v_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_12;
          if((p_11 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, e_12);
          LocalPopChoice(w_14);
        }
      else
        {
          t = v_14;
          t = g_12;
        }
    }
    f_12 = t;
    t = g_12;
    t = free_vars_3_0(p_1, q_1, tboundin_3_0, t);
    t = map_1_0(t_1, t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
    t = free_vars_3_0(u_1, v_1, tboundin_3_0, t);
    t = filter_1_0(y_1, t);
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
    t = diff_0_0(t);
    l_12 = t;
    t = new_0_0(t);
    m_12 = t;
    t = m_11;
    t = o_0(t);
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_12, (ATerm) ATmakeAppl(sym_Op_2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_14, (ATerm) ATinsert(CheckATermList(l_12), (ATerm) ATmakeAppl(sym_Str_1, m_12)))), g_12)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_11, n_11, o_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_12), p_11), q_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_11)))), f_12), (ATerm) ATmakeAppl(sym_Op_2, term_y_14, (ATerm) ATinsert(CheckATermList(l_12), (ATerm) ATmakeAppl(sym_Str_1, m_12))))), r_11))));
    return(t);
  }
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  c_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
      f_16 = ATgetArgument(t, 2);
      g_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_16;
  if(match_cons(t, sym_Rule_3))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
      j_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_16;
  if(match_cons(t, sym_Op_2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      t = b_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_16;
          if(match_string(t, "Undefined"))
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL;
                  t = c_16;
                  t = new_0_0(t);
                  o_2 = t;
                  t = h_16;
                  t = dummify_0_0(t);
                  m_2 = t;
                  {
                    ATerm e_15 = t;
                    int f_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_2;
                        if((h_16 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_2);
                        LocalPopChoice(f_15);
                      }
                    else
                      {
                        t = e_15;
                        t = m_2;
                      }
                  }
                  p_2 = t;
                  t = d_16;
                  t = o_0(t);
                  q_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, q_2, (ATerm) ATmakeAppl(sym_Op_2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, term_p_14), m_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, d_16, e_16, f_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_2), h_16), term_p_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_16)))), p_2), term_p_14)), (ATerm) ATmakeAppl(sym_Seq_2, j_16, term_e_10)))));
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  t = n_16(d_16, e_16, f_16, h_16, i_16, j_16, c_16, t);
                }
            }
          else
            {
              t = n_16(d_16, e_16, f_16, h_16, i_16, j_16, c_16, t);
            }
        }
      else
        {
          t = a_16;
          t = n_16(d_16, e_16, f_16, h_16, i_16, j_16, c_16, t);
        }
    }
  else
    {
      t = n_16(d_16, e_16, f_16, h_16, i_16, j_16, c_16, t);
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
  ATerm a_17 = NULL;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_17))));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_15;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym__2))
        {
          d_17 = ATgetArgument(l_15, 0);
          e_17 = ATgetArgument(l_15, 1);
        }
      else
        _fail(t);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(match_cons(m_15, sym__2))
          {
            f_17 = ATgetArgument(m_15, 0);
            g_17 = ATgetArgument(m_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_17), d_17), (ATerm) ATinsert(CheckATermList(g_17), e_17));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_17))));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_15;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_17 = ATgetFirst((ATermList) t);
      n_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_15 = ATgetArgument(t, 0);
      if(match_cons(p_15, sym__2))
        {
          o_17 = ATgetArgument(p_15, 0);
          t_17 = ATgetArgument(p_15, 1);
        }
      else
        _fail(t);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(match_cons(r_15, sym__2))
          {
            u_17 = ATgetArgument(r_15, 0);
            v_17 = ATgetArgument(r_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_17), o_17), (ATerm) ATinsert(CheckATermList(v_17), t_17));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      u_16 = ATgetArgument(t, 0);
      t = u_16;
      t = map_1_0(z_1, t);
      t = genzip_4_0(b_2, c_2, d_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          u_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_16;
      t = map_1_0(e_2, t);
      t = genzip_4_0(g_2, h_2, i_2, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  static ATerm x_17 (ATerm t)
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        t = SRTS_one(x_17, t);
      }
    return(t);
  }
  t = x_17(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_18);
  m_18 = t;
  t = term_w_15;
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_18), term_w_15);
  t = b_7(r_2, m_18, n_18, t);
  t = l_18;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  static ATerm r_18 (ATerm t)
  {
    static ATerm j_2 (ATerm t)
    {
      ATerm x_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_119(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = x_15;
          {
            ATerm a_18 = NULL,b_18 = NULL,e_18 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                a_18 = ATgetArgument(t, 0);
                b_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_18, b_18);
            {
              static ATerm l_2 (ATerm t)
              {
                t = a_18;
                t = map_1_0(n_2, t);
                t = b_18;
                t = r_18(t);
                if(((e_18 != NULL) && (e_18 != t)))
                  _fail(t);
                else
                  e_18 = t;
                return(t);
              }
              t = scope_2_0(k_2, l_2, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_18, not_null(e_18));
          }
        }
      return(t);
    }
    t = oncetd_1_0(j_2, t);
    return(t);
  }
  t = r_18(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm n_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_19);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm k_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = k_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_19 = ATgetArgument(t, 0);
                  u_19 = ATgetArgument(t, 1);
                  v_19 = ATgetArgument(t, 2);
                  w_19 = ATgetArgument(t, 3);
                  t = v_19;
                  t = map_1_0(u_2, t);
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
                  t = map_1_0(v_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_20 = ATgetArgument(t, 0);
          {
            ATerm v_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = j_20;
    }
  else
    {
      t = s_16;
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
static ATerm v_2 (ATerm t)
{
  ATerm u_20 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_20 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = u_20;
    }
  else
    {
      t = w_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_20;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm e_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_22 = ATgetArgument(t, 0);
      t = e_22;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_22 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_22;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_22 = ATgetArgument(t, 0);
      t = s_22;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm h_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_22;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_22 = NULL;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      if((w_22 != ATgetArgument(t, 1)))
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
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  t = free_vars_3_0(s_2, t_2, tboundin_3_0, t);
  f_19 = t;
  t = i_19;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL;
        ATerm k_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm r_17 = ATgetArgument(t, 0);
                ATerm w_17 = ATgetArgument(t, 1);
                r_21 = ATgetArgument(t, 2);
                {
                  ATerm z_17 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_17);
            t = r_21;
            t = map_1_0(w_2, t);
          }
        else
          {
            t = k_17;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm c_18 = ATgetArgument(t, 0);
                ATerm d_18 = ATgetArgument(t, 1);
                r_21 = ATgetArgument(t, 2);
                {
                  ATerm f_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = r_21;
            t = map_1_0(z_2, t);
          }
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATempty;
      }
  }
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, h_19);
  t = p_6(a_3, f_19, h_19, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm v_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_23);
  x_23 = t;
  t = term_w_15;
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_23), term_w_15);
  t = b_7(f_3, x_23, y_23, t);
  t = v_23;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm k_6 (ATerm h_65, ATerm g_65, ATerm t)
{
  ATerm x_22 = NULL,d_23 = NULL,j_23 = NULL;
  static ATerm c_3 (ATerm t)
  {
    t = h_65;
    t = def_tvars_0_0(t);
    t = map_1_0(e_3, t);
    t = h_65;
    {
      static ATerm g_3 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((d_23 != NULL) && (d_23 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              d_23 = ATgetArgument(t, 0);
            if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, d_23);
        return(t);
      }
      t = split_dynamic_rule_1_0(g_3, t);
    }
    if(((j_23 != NULL) && (j_23 != t)))
      _fail(t);
    else
      j_23 = t;
    return(t);
  }
  t = scope_2_0(b_3, c_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_22)), not_null(j_23)), g_65);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t)
{
  static ATerm z_23 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_88(t);
        t = z_23(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = b_88(t);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm listtd_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  static ATerm u_24 (ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
    t = v_96(t);
    p_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        ATerm k_3 = NULL,p_3 = NULL,a_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_24 = ATgetFirst((ATermList) t);
            r_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_24);
        k_3 = t;
        t = r_24;
        t = u_24(t);
        p_3 = t;
        t = (ATerm) ATinsert(CheckATermList(p_3), q_24);
        a_0 = t;
        t = SSLsetAnnotations(a_0, k_3);
      }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm d_25 = NULL,f_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_25 = ATgetFirst((ATermList) t);
      f_25 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, f_25, n_25)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_25))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_25;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm i_4 = NULL,s_4 = NULL,t_4 = NULL,j_0 = NULL;
        t = SSLgetAnnotations(o_29);
        i_4 = t;
        t = p_29;
        t = n_119(t);
        s_4 = t;
        t = j_29;
        t = l_119(t);
        t_4 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_4, t_4);
        j_0 = t;
        t = SSLsetAnnotations(j_0, i_4);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_29 = ATgetArgument(t, 0);
          j_29 = ATgetArgument(t, 1);
          m_29 = ATgetArgument(t, 2);
          n_29 = ATgetArgument(t, 3);
          {
            ATerm t_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(o_29);
            t_5 = t;
            t = p_29;
            t = n_119(t);
            b_6 = t;
            t = j_29;
            t = n_119(t);
            c_6 = t;
            t = m_29;
            t = n_119(t);
            d_6 = t;
            t = n_29;
            t = l_119(t);
            e_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_6, c_6, d_6, e_6);
            x_0 = t;
            t = SSLsetAnnotations(x_0, t_5);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              p_29 = ATgetArgument(t, 0);
              j_29 = ATgetArgument(t, 1);
              m_29 = ATgetArgument(t, 2);
              n_29 = ATgetArgument(t, 3);
              {
                ATerm x_6 = NULL,d_8 = NULL,f_8 = NULL,g_8 = NULL,k_8 = NULL,h_1 = NULL;
                t = SSLgetAnnotations(o_29);
                x_6 = t;
                t = p_29;
                t = n_119(t);
                d_8 = t;
                t = j_29;
                t = n_119(t);
                f_8 = t;
                t = m_29;
                t = n_119(t);
                g_8 = t;
                t = n_29;
                t = l_119(t);
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, d_8, f_8, g_8, k_8);
                h_1 = t;
                t = SSLsetAnnotations(h_1, x_6);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_29 = ATgetArgument(t, 0);
                  {
                    ATerm w_8 = NULL,y_8 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(o_29);
                    w_8 = t;
                    t = p_29;
                    t = l_119(t);
                    y_8 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_8);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, w_8);
                  }
                }
              else
                {
                  ATerm e_9 = NULL,g_9 = NULL,y_2 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      p_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_29);
                  e_9 = t;
                  t = p_29;
                  t = l_119(t);
                  g_9 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, g_9);
                  y_2 = t;
                  t = SSLsetAnnotations(y_2, e_9);
                }
            }
        }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_30);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm k_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = k_18;
      {
        ATerm q_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = q_18;
            {
              ATerm w_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_30 = ATgetArgument(t, 0);
                  z_30 = ATgetArgument(t, 1);
                  a_31 = ATgetArgument(t, 2);
                  b_31 = ATgetArgument(t, 3);
                  t = a_31;
                  t = map_1_0(m_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_30 = ATgetArgument(t, 0);
                      z_30 = ATgetArgument(t, 1);
                      a_31 = ATgetArgument(t, 2);
                      b_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_31;
                  t = map_1_0(n_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm n_31 = NULL;
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_31 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_18);
      t = n_31;
    }
  else
    {
      t = u_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm c_32 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_32 = ATgetArgument(t, 0);
          {
            ATerm z_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = c_32;
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_32;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm g_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_32);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_32 = ATgetArgument(t, 0);
                  l_32 = ATgetArgument(t, 1);
                  m_32 = ATgetArgument(t, 2);
                  n_32 = ATgetArgument(t, 3);
                  t = m_32;
                  t = map_1_0(r_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_32 = ATgetArgument(t, 0);
                      l_32 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      n_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_32;
                  t = map_1_0(s_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm w_32 = NULL;
  ATerm j_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_32 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_19);
      t = w_32;
    }
  else
    {
      t = j_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_32;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm s_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_19);
      t = h_33;
    }
  else
    {
      t = q_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      s_30 = ATgetArgument(t, 0);
      t = s_30;
      t = free_vars_3_0(h_3, j_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_30;
      t = free_vars_3_0(o_3, q_3, tboundin_3_0, t);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm w_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_33);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_33 = ATgetArgument(t, 0);
                  z_33 = ATgetArgument(t, 1);
                  a_34 = ATgetArgument(t, 2);
                  b_34 = ATgetArgument(t, 3);
                  t = a_34;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_33 = ATgetArgument(t, 0);
                      z_33 = ATgetArgument(t, 1);
                      a_34 = ATgetArgument(t, 2);
                      b_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_34;
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
  ATerm i_34 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_34 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = i_34;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_34;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm r_34 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_34 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = r_34;
    }
  else
    {
      t = e_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_34;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_33 = NULL,t_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_33 = ATgetArgument(t, 0);
      t = t_33;
      if(match_cons(t, sym_Rule_3))
        {
          p_33 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
          {
            ATerm i_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_33;
      t = free_vars_3_0(t_3, v_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_33;
    }
  return(t);
}
static ATerm p_6 (ATerm q_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm q_35 (ATerm t)
  {
    ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
    l_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_35 = ATgetFirst((ATermList) t);
            n_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_35;
              {
                static ATerm c_4 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = q_6(q_99, c_4, m_35, n_35, t);
              }
              t = q_35(t);
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
              {
                ATerm n_9 = NULL,q_9 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(l_35);
                n_9 = t;
                t = n_35;
                t = q_35(t);
                q_9 = t;
                t = (ATerm) ATinsert(CheckATermList(q_9), m_35);
                r_8 = t;
                t = SSLsetAnnotations(r_8, n_9);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = q_35(t);
  return(t);
}
static ATerm q_6 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  t = u_99(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm w_35 = NULL;
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, w_35);
      t = t_99(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = a_29;
  return(t);
}
static ATerm r_6 (ATerm l_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t)
{
  static ATerm d_37 (ATerm t)
  {
    ATerm r_36 = NULL,t_36 = NULL,u_36 = NULL;
    r_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_36 = ATgetFirst((ATermList) t);
            u_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_36;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = u_28;
                  return(t);
                }
                t = q_6(l_99, f_4, t_36, u_36, t);
              }
              t = d_37(t);
              LocalPopChoice(p_20);
            }
          else
            {
              t = n_20;
              {
                ATerm y_9 = NULL,c_10 = NULL,g_10 = NULL;
                t = SSLgetAnnotations(r_36);
                y_9 = t;
                t = u_36;
                t = d_37(t);
                c_10 = t;
                t = (ATerm) ATinsert(CheckATermList(c_10), t_36);
                g_10 = t;
                t = SSLsetAnnotations(g_10, y_9);
              }
            }
        }
      }
    return(t);
  }
  t = v_28;
  t = d_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  static ATerm n_37 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,l_10 = NULL;
          t = q_97(t);
          m_37 = t;
          if(match_cons(t, sym__2))
            {
              g_37 = ATgetArgument(t, 0);
              h_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_37);
          f_37 = t;
          t = g_37;
          t = s_97(t);
          k_37 = t;
          t = h_37;
          t = n_37(t);
          l_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
          l_10 = t;
          t = SSLsetAnnotations(l_10, f_37);
          t = r_97(t);
        }
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) != AT_LIST) || !(ATisEmpty(v_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
        {
          u_37 = ATgetFirst((ATermList) w_20);
          v_37 = (ATerm) ATgetNext((ATermList) w_20);
        }
      else
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
          {
            w_37 = ATgetFirst((ATermList) y_20);
            x_37 = (ATerm) ATgetNext((ATermList) y_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_37, w_37), (ATerm) ATmakeAppl(sym__2, v_37, x_37));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_37), y_37);
  return(t);
}
static ATerm w_6 (ATerm m_596, ATerm r_596, ATerm w_56, ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  t = SSL_explode_term(r_596);
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_596);
  if(match_cons(t, sym__2))
    {
      if((p_37 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
  t = genzip_4_0(g_4, h_4, j_4, _id, t);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_37, w_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t)
{
  static ATerm b_38 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_88(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = s_88(t);
        t = b_38(t);
      }
    return(t);
  }
  t = b_38(t);
  return(t);
}
ATerm for_3_0 (ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t)
{
  t = u_88(t);
  t = while_not_2_0(v_88, w_88, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_38);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_10 = NULL;
  m_38 = t;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  j_38 = t;
  t = l_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_38, l_38);
  n_10 = t;
  t = SSLsetAnnotations(n_10, j_38);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_39 = ATgetFirst((ATermList) t);
      r_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_40(o_39, p_39, n_39, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_39), q_39), r_39);
          }
      }
    }
  else
    {
      t = b_40(o_39, p_39, n_39, t);
    }
  return(t);
}
static ATerm b_40 (ATerm n_38, ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm w_38 = NULL,b_39 = NULL,o_10 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = SSLgetAnnotations(v_38);
  w_38 = t;
  t = u_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      h_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_39;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_39;
        if((f_39 != t))
          {
            _fail(t);
          }
        t = h_39;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = u_38;
        t = w_6(f_39, g_39, h_39, t);
      }
  }
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_38, b_39);
  o_10 = t;
  t = SSLsetAnnotations(o_10, w_38);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      if((a_40 != ATgetArgument(t, 1)))
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
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
        v_39 = t;
        if(match_cons(t, sym__2))
          {
            w_39 = ATgetArgument(t, 0);
            x_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_39;
        t = r_6(o_4, w_39, x_39, t);
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
static ATerm u_4 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(v_4, q_10, r_10, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      if((s_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm j_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(y_4, j_11, u_11, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      if((v_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_40 (ATerm t)
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_117(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        {
          ATerm k_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_40 = NULL,e_40 = NULL,i_10 = NULL,j_10 = NULL;
              d_40 = t;
              t = g_117(t);
              e_40 = t;
              t = d_40;
              {
                static ATerm p_4 (ATerm t)
                {
                  ATerm g_40 = NULL;
                  t = p_40(t);
                  g_40 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_40, e_40);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_117(p_4, p_40, q_4, t);
              }
              j_10 = t;
              t = SSL_explode_term(j_10);
              if(match_cons(t, sym__2))
                {
                  ATerm n_21 = ATgetArgument(t, 0);
                  i_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_10;
              t = foldr_3_0(r_4, u_4, _id, t);
              LocalPopChoice(m_21);
            }
          else
            {
              t = k_21;
              {
                ATerm e_11 = NULL,f_11 = NULL;
                f_11 = t;
                t = SSL_explode_term(f_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_21 = ATgetArgument(t, 0);
                    e_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_11;
                t = foldr_3_0(w_4, x_4, p_40, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm z_4 (ATerm t)
  {
    t = bottomup_1_0(b_89, t);
    return(t);
  }
  t = SRTS_all(z_4, t);
  t = b_89(t);
  return(t);
}
static ATerm a_7 (ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm q_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
  t = r_7(v_52, w_52, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_40 = ATgetFirst((ATermList) t);
      {
        ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_40;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL;
        t = term_t_21;
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_21, e_41);
        t = a_7(l_13, e_41, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_21) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, f_41, (ATerm) ATempty);
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        {
          ATerm a_14 = NULL;
          t = term_t_21;
          a_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_21, e_41);
          t = a_7(a_14, e_41, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_21) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, f_41, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  static ATerm i_41 (ATerm t)
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_90(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        t = SRTS_all(i_41, t);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
static ATerm b_7 (ATerm z_107 (ATerm), ATerm x_42, ATerm v_42, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  t = z_107(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_41, x_42, v_42);
  t = s_7(l_41, x_42, v_42, t);
  {
    ATerm z_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_41 = NULL;
        t = term_c_22;
        r_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_41, term_c_22);
        t = r_7(l_41, r_41, t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = z_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_41 = ATgetFirst((ATermList) t);
      n_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  p_41 = t;
  t = (ATerm) ATinsert(CheckATermList(n_41), (ATerm) ATinsert(CheckATermList(m_41), x_42));
  q_41 = t;
  t = SSL_table_put(l_41, p_41, q_41);
  t = o_41;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm v_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      v_41 = ATgetArgument(t, 2);
      {
        ATerm c_42 = NULL,d_42 = NULL;
        t = y_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, x_41);
        c_42 = t;
        t = term_f_22;
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_41), term_f_22);
        t = b_7(a_5, c_42, d_42, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, x_41, (ATerm)ATempty, v_41);
      }
    }
  else
    {
      ATerm g_42 = NULL,h_42 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          x_41 = ATgetArgument(t, 0);
          y_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_41;
      if(match_cons(t, sym_ConstType_1))
        {
          z_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_41);
      g_42 = t;
      t = term_h_22;
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_41), term_h_22);
      t = b_7(c_5, g_42, h_42, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_41, (ATerm) ATmakeAppl(sym_ConstType_1, z_41));
    }
  return(t);
}
static ATerm c_7 (ATerm p_52, ATerm q_52, ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  m_42 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = r_7(p_52, q_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_22 = ATgetFirst((ATermList) t);
            l_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_22);
        t = SSL_table_put(p_52, q_52, l_42);
        t = (ATerm) ATmakeAppl(sym__3, p_52, q_52, l_42);
      }
    else
      {
        t = i_22;
        t = SSL_table_remove(p_52, q_52);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
      }
  }
  t = m_42;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  b_43 = t;
  t = w_107(t);
  a_43 = t;
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_43 = NULL;
        t = term_c_22;
        e_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_43, term_c_22);
        t = r_7(a_43, e_43, t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = l_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      n_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  c_43 = t;
  t = SSL_table_put(a_43, c_43, n_42);
  t = o_42;
  {
    static ATerm d_5 (ATerm t)
    {
      ATerm f_43 = NULL;
      f_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_43, f_43);
      t = c_7(a_43, f_43, t);
      return(t);
    }
    t = map_1_0(d_5, t);
  }
  t = b_43;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_87(t);
      t = x_87(t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = x_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  i_43 = t;
  t = v_107(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, term_c_22);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_22 = ATgetArgument(t, 0);
            ATerm u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_22;
        p_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_43, term_c_22);
        t = r_7(h_43, p_43, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = (ATerm) ATempty;
      }
  }
  j_43 = t;
  t = term_c_22;
  k_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), (ATerm) ATempty);
  l_43 = t;
  t = SSL_table_put(h_43, k_43, l_43);
  t = i_43;
  return(t);
}
ATerm scope_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  static ATerm e_5 (ATerm t)
  {
    t = end_scope_1_0(x_107, t);
    return(t);
  }
  t = begin_scope_1_0(x_107, t);
  t = restore_always_2_0(y_107, e_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,x_10 = NULL;
  x_43 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_43);
  u_43 = t;
  t = v_43;
  t = map_1_0(h_5, t);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_43);
  x_10 = t;
  t = SSLsetAnnotations(x_10, u_43);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  l_44 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      k_44 = ATgetArgument(t, 0);
      {
        ATerm v_22 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL,i_15 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(l_44);
            g_15 = t;
            t = k_44;
            t = map_1_0(j_5, t);
            i_15 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, i_15);
            v_10 = t;
            t = SSLsetAnnotations(v_10, g_15);
            LocalPopChoice(c_23);
          }
        else
          {
            t = v_22;
            t = l_44;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          k_44 = ATgetArgument(t, 0);
          {
            ATerm h_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_16 = NULL,p_16 = NULL,w_10 = NULL;
                t = SSLgetAnnotations(l_44);
                l_16 = t;
                t = k_44;
                t = map_1_0(k_5, t);
                p_16 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, p_16);
                w_10 = t;
                t = SSLsetAnnotations(w_10, l_16);
                LocalPopChoice(k_23);
              }
            else
              {
                t = h_23;
                t = l_44;
              }
          }
        }
      else
        {
          t = l_44;
        }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(f_5, g_5, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_44;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(u_44);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_44 = ATgetFirst((ATermList) t);
          if(((u_44 != NULL) && (u_44 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_44;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_45 = ATgetFirst((ATermList) t);
          l_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_17 = NULL,s_17 = NULL,y_17 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(j_45);
            p_17 = t;
            t = k_45;
            t = t_102(t);
            s_17 = t;
            t = l_45;
            t = filter_1_0(t_102, t);
            y_17 = t;
            t = (ATerm) ATinsert(CheckATermList(y_17), s_17);
            b_11 = t;
            t = SSLsetAnnotations(b_11, p_17);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = l_45;
            t = filter_1_0(t_102, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  static ATerm c_46 (ATerm t)
  {
    ATerm y_45 = NULL,a_46 = NULL,b_46 = NULL;
    b_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_45 = ATgetFirst((ATermList) t);
        a_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_18 = NULL,t_18 = NULL,d_11 = NULL;
          t = SSLgetAnnotations(b_46);
          p_18 = t;
          t = a_46;
          t = c_46(t);
          t_18 = t;
          t = (ATerm) ATinsert(CheckATermList(t_18), y_45);
          d_11 = t;
          t = SSLsetAnnotations(d_11, p_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_46;
        t = c_96(t);
      }
    return(t);
  }
  t = c_46(t);
  return(t);
}
static ATerm v_46 (ATerm g_46, ATerm t)
{
  ATerm h_46 = NULL;
  t = SSL_explode_term(g_46);
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_46 = NULL,p_46 = NULL,s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      p_46 = ATgetArgument(t, 1);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_5 (ATerm t)
            {
              t = p_46;
              return(t);
            }
            t = m_46;
            t = at_end_1_0(o_5, t);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = v_46(s_46, t);
          }
      }
    }
  else
    {
      t = v_46(s_46, t);
    }
  return(t);
}
static ATerm f_7 (ATerm s_20, ATerm o_20, ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  static ATerm p_5 (ATerm t)
  {
    ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
    b_47 = t;
    t = SSL_explode_term(b_47);
    if(match_cons(t, sym__2))
      {
        if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          w_46 = ATgetArgument(t, 0);
        {
          ATerm u_23 = ATgetArgument(t, 1);
          if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
            {
              y_46 = ATgetFirst((ATermList) u_23);
              {
                ATerm w_23 = (ATerm) ATgetNext((ATermList) u_23);
                if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_46, not_null(x_46));
    t = conc_0_0(t);
    z_46 = t;
    t = (ATerm) ATinsert(ATempty, z_46);
    a_47 = t;
    t = SSL_mkterm(w_46, a_47);
    return(t);
  }
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_46 = ATgetArgument(t, 0);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            if(((x_46 != NULL) && (x_46 != ATgetFirst((ATermList) a_24))))
              _fail(ATgetFirst((ATermList) a_24));
            else
              x_46 = ATgetFirst((ATermList) a_24);
            {
              ATerm c_24 = (ATerm) ATgetNext((ATermList) a_24);
              if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
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
  t = fetch_1_0(p_5, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,g_47 = NULL,h_47 = NULL;
  e_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_47;
      t = r_101(t);
    }
  else
    {
      ATerm m_47 = NULL,o_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_47 = ATgetFirst((ATermList) t);
          h_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_47;
      t = t_101(t);
      m_47 = t;
      t = h_47;
      t = foldr_3_0(r_101, s_101, t_101, t);
      o_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_47, o_47);
      t = s_101(t);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_24), term_f_24), term_e_24);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(c_48, d_48, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_Signature_1))
    {
      e_48 = ATgetArgument(t, 0);
      {
        ATerm i_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_48 = NULL;
            t = e_48;
            t = filter_1_0(y_5, t);
            t = concat_0_0(t);
            h_48 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, h_48);
            LocalPopChoice(k_24);
          }
        else
          {
            t = i_24;
            t = f_48;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          e_48 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, e_48);
        }
      else
        {
          t = f_48;
        }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_48 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_48;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,h_11 = NULL;
  b_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  y_47 = t;
  t = z_47;
  t = foldr_3_0(q_5, u_5, x_5, t);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_48);
  h_11 = t;
  t = SSLsetAnnotations(h_11, y_47);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = l_24;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  o_50 = t;
  if(match_cons(t, sym_LRule_1))
    {
      n_50 = ATgetArgument(t, 0);
      t = n_50;
      if(match_cons(t, sym_Rule_3))
        {
          g_50 = ATgetArgument(t, 0);
          h_50 = ATgetArgument(t, 1);
          m_50 = ATgetArgument(t, 2);
          {
            ATerm o_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_50 = NULL;
                t = g_50;
                t = free_vars_3_0(f_6, g_6, tboundin_3_0, t);
                u_50 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, u_50, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_50, h_50, m_50)));
                LocalPopChoice(s_24);
              }
            else
              {
                t = o_24;
                t = o_50;
              }
          }
        }
      else
        {
          t = o_50;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          n_50 = ATgetArgument(t, 0);
          {
            ATerm t_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_52 = NULL;
                t = n_50;
                t = free_vars_3_0(j_6, l_6, tboundin_3_0, t);
                z_52 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, z_52, n_50);
                LocalPopChoice(v_24);
              }
            else
              {
                t = t_24;
                t = o_50;
              }
          }
        }
      else
        {
          t = o_50;
        }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_50);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm x_50 = NULL,z_50 = NULL,b_51 = NULL,c_51 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_50 = ATgetArgument(t, 0);
                  z_50 = ATgetArgument(t, 1);
                  b_51 = ATgetArgument(t, 2);
                  c_51 = ATgetArgument(t, 3);
                  t = b_51;
                  t = map_1_0(h_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_50 = ATgetArgument(t, 0);
                      z_50 = ATgetArgument(t, 1);
                      b_51 = ATgetArgument(t, 2);
                      c_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_51;
                  t = map_1_0(i_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_51 = NULL;
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_51 = ATgetArgument(t, 0);
          {
            ATerm c_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = o_51;
    }
  else
    {
      t = a_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_51;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_52 = NULL;
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_52 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = m_52;
    }
  else
    {
      t = e_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_52;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm a_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_53);
  return(t);
}
static ATerm l_6 (ATerm t)
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
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_53 = ATgetArgument(t, 0);
                  d_53 = ATgetArgument(t, 1);
                  e_53 = ATgetArgument(t, 2);
                  f_53 = ATgetArgument(t, 3);
                  t = e_53;
                  t = map_1_0(m_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_53 = ATgetArgument(t, 0);
                      d_53 = ATgetArgument(t, 1);
                      e_53 = ATgetArgument(t, 2);
                      f_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_53;
                  t = map_1_0(n_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm p_53 = NULL;
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm q_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_25);
      t = p_53;
    }
  else
    {
      t = o_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_53;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm y_53 = NULL;
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_53 = ATgetArgument(t, 0);
          {
            ATerm t_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_25);
      t = y_53;
    }
  else
    {
      t = r_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = Cons_2_0(s_6, t_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_11 = NULL;
  j_54 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_54);
  g_54 = t;
  t = h_54;
  t = topdown_1_0(u_6, t);
  t = listtd_1_0(v_6, t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_54);
  k_11 = t;
  t = SSLsetAnnotations(k_11, g_54);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = repeat_2_0(y_6, _id, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_54 = ATgetFirst((ATermList) t);
      p_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_6(o_54, p_54, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm y_54 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, y_54)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL,r_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,z_11 = NULL,w_11 = NULL,l_11 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(z_5, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(a_6, t);
  b_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_50);
  q_49 = t;
  t = r_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_49 = ATgetFirst((ATermList) t);
      y_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_49);
  w_49 = t;
  t = y_49;
  t = Cons_2_0(_id, o_6, t);
  z_49 = t;
  t = (ATerm) ATinsert(CheckATermList(z_49), x_49);
  l_11 = t;
  t = SSLsetAnnotations(l_11, w_49);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_50);
  w_11 = t;
  t = SSLsetAnnotations(w_11, q_49);
  t = topdown_1_0(z_6, t);
  o_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_49);
  l_49 = t;
  t = m_49;
  t = fetch_1_0(d_7, t);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_49);
  z_11 = t;
  t = SSLsetAnnotations(z_11, l_49);
  return(t);
}
static ATerm g_7 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm b_55 = NULL;
  t = SSL_fputc(o_38, p_38);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_55);
  return(t);
}
static ATerm h_7 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm c_55 = NULL;
  t = SSL_write_term_to_stream_text(e_23, f_23);
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_55);
  return(t);
}
static ATerm j_7 (ATerm d_95 (ATerm), ATerm l_158, ATerm i_23, ATerm t)
{
  ATerm d_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_158, term_y_25);
  t = m_7(t);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, i_23);
  t = d_95(t);
  t = fclose_0_0(t);
  t = i_23;
  return(t);
}
static ATerm i_7 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm e_55 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_55);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm k_55 = NULL,o_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym_Stream_1))
        {
          k_55 = ATgetArgument(z_25, 0);
        }
      else
        _fail(t);
      o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(k_55, o_55, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm q_55 = NULL,t_55 = NULL,v_55 = NULL,z_55 = NULL,a_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(match_cons(a_26, sym_Stream_1))
        {
          z_55 = ATgetArgument(a_26, 0);
        }
      else
        _fail(t);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(z_55, a_56, t);
  q_55 = t;
  t = term_b_26;
  t_55 = t;
  t = q_55;
  if(match_cons(t, sym_Stream_1))
    {
      v_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, q_55);
  t = g_7(t_55, v_55, t);
  return(t);
}
ATerm output_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  t = a_113(t);
  j_55 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_26;
        t = get_config_0_0(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_f_26;
      }
  }
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_55, j_55);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_26;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, i_55, j_55);
        LocalPopChoice(h_26);
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm k_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(e_7, i_55, j_55, t);
      }
    else
      {
        t = g_26;
        if(match_cons(t, sym__2))
          {
            ATerm l_26 = ATgetArgument(t, 0);
            ATerm m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(o_7, i_55, j_55, t);
      }
  }
  return(t);
}
static ATerm x_56 (ATerm m_56, ATerm t)
{
  t = SSL_fclose(m_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_56 = NULL,r_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_56 = ATgetArgument(t, 0);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_56);
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = x_56(r_56, t);
          }
      }
    }
  else
    {
      t = x_56(r_56, t);
    }
  return(t);
}
static ATerm k_7 (ATerm g_23, ATerm t)
{
  t = SSL_read_term_from_stream(g_23);
  return(t);
}
static ATerm l_7 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm y_56 = NULL;
  t = SSL_fopen(q_38, r_38);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_56);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_57 = NULL;
  t = SSL_stdin_stream();
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_57 = NULL;
  t = SSL_stdout_stream();
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_stderr_stream();
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_57);
  return(t);
}
static ATerm z_58 (ATerm r_57, ATerm t)
{
  ATerm s_57 = NULL;
  t = SSL_explode_term(r_57);
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
          {
            s_57 = ATgetFirst((ATermList) q_26);
            {
              ATerm r_26 = (ATerm) ATgetNext((ATermList) q_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_59 (ATerm v_57, ATerm y_57, ATerm z_57, ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,h_58 = NULL,m_13 = NULL;
  t = SSLgetAnnotations(z_57);
  c_58 = t;
  t = v_57;
  if(match_cons(t, sym_Path_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_58, y_57);
  m_13 = t;
  t = SSLsetAnnotations(m_13, c_58);
  if(match_cons(t, sym__2))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(a_58, b_58, t);
  return(t);
}
static ATerm d_59 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,u_58 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(n_58);
  r_58 = t;
  t = SSL_is_string(l_58);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_58, m_58);
  l_14 = t;
  t = SSLsetAnnotations(l_14, r_58);
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(p_58, q_58, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym__2))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_58(w_58, t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            {
              ATerm u_26 = t;
              int v_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_59(x_58, y_58, w_58, t);
                  LocalPopChoice(v_26);
                }
              else
                {
                  t = u_26;
                  t = d_59(x_58, y_58, w_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_58(w_58, t);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_59 = NULL;
      h_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_59, term_z_26);
      t = m_7(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = debug_1_0(t_7, t);
      _fail(t);
    }
  f_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(g_59, t);
  e_59 = t;
  t = f_59;
  t = fclose_0_0(t);
  t = e_59;
  return(t);
}
ATerm input_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_27;
      t = get_config_0_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = term_d_27;
    }
  t = ReadFromFile_0_0(t);
  t = b_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
  j_59 = t;
  t = term_e_27;
  t = whoami_0_0(t);
  k_59 = t;
  t = term_x_11;
  m_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_27), k_59), term_f_27);
  n_59 = t;
  t = SSL_printnl(m_59, n_59);
  t = term_a_12;
  l_59 = t;
  t = SSL_exit(l_59);
  t = j_59;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  if(match_string(t, "-k"))
    {
      t = p_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_59;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm q_59 = NULL,s_59 = NULL,t_59 = NULL;
  q_59 = t;
  t = SSL_string_to_int(q_59);
  s_59 = t;
  t = term_h_27;
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, s_59);
  t = u_7(t_59, s_59, t);
  t = q_59;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_7, w_7, x_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm v_59 = NULL;
  v_59 = t;
  if(match_string(t, "-S"))
    {
      t = v_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_59;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL;
  t = term_j_27;
  w_59 = t;
  t = term_k_27;
  x_59 = t;
  t = term_l_27;
  t = u_7(w_59, x_59, t);
  t = term_m_27;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,c_60 = NULL;
  y_59 = t;
  t = SSL_string_to_int(y_59);
  z_59 = t;
  t = term_j_27;
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, z_59);
  t = u_7(c_60, z_59, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_59);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  t = term_p_27;
  d_60 = t;
  t = term_e_27;
  e_60 = t;
  t = term_q_27;
  t = u_7(d_60, e_60, t);
  t = term_r_27;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_7, z_7, a_8, t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_8, c_8, e_8, t);
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = Option_3_0(i_8, j_8, l_8, t);
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm f_60 = NULL;
  t = term_x_27;
  f_60 = t;
  t = SSL_table_put(f_60, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_x_27, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_60 = NULL,n_60 = NULL,p_60 = NULL;
      t = term_e_27;
      t = e_0(t);
      m_60 = t;
      t = term_y_27;
      n_60 = t;
      t = term_z_27;
      p_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_27, term_z_27, m_60);
      t = s_7(n_60, p_60, m_60, t);
      _fail(t);
    }
  else
    {
      ATerm t_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_60 = ATgetFirst((ATermList) t);
          k_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_60;
      t = c_0(t);
      t = term_e_27;
      t = d_0(t);
      t_60 = t;
      t = (ATerm) ATinsert(CheckATermList(k_60), t_60);
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "-o"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  c_61 = t;
  t = term_e_26;
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, c_61);
  t = u_7(d_61, c_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_61);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_8, o_8, p_8, t);
  return(t);
}
static ATerm s_7 (ATerm k_52, ATerm l_52, ATerm j_52, ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_28 = ATgetArgument(t, 0);
            ATerm e_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        t = r_7(k_52, l_52, t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
  }
  h_61 = t;
  t = (ATerm) ATinsert(CheckATermList(h_61), j_52);
  i_61 = t;
  t = SSL_table_put(k_52, l_52, i_61);
  t = g_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
      t = term_e_27;
      t = n_0(t);
      x_61 = t;
      t = term_y_27;
      y_61 = t;
      t = term_z_27;
      z_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_27, term_z_27, x_61);
      t = s_7(y_61, z_61, x_61, t);
      _fail(t);
    }
  else
    {
      ATerm p_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_61 = ATgetFirst((ATermList) t);
          t_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_61 = ATgetFirst((ATermList) t);
          v_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_61;
      t = k_0(t);
      t = u_61;
      t = l_0(t);
      p_62 = t;
      t = (ATerm) ATinsert(CheckATermList(v_61), p_62);
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  if(match_string(t, "-i"))
    {
      t = z_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_62;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  a_63 = t;
  t = term_c_27;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_27, a_63);
  t = u_7(b_63, a_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_63);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, s_8, t_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_27;
  t = whoami_0_0(t);
  e_63 = t;
  t = term_x_11;
  i_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_28), e_63);
  j_63 = t;
  t = SSL_printnl(i_63, j_63);
  t = term_a_12;
  h_63 = t;
  t = SSL_exit(h_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_41, k_41);
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = SSL_addr(j_41, k_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm o_63 = NULL,q_63 = NULL,s_63 = NULL;
  o_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_63;
      t = p_101(t);
    }
  else
    {
      ATerm z_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_63 = ATgetFirst((ATermList) t);
          s_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_63;
      t = foldr_2_0(p_101, q_101, t);
      z_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_63, z_63);
      t = q_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(l_19, m_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_64 = NULL,e_19 = NULL,g_19 = NULL;
  t = times_0_0(t);
  g_19 = t;
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  t = foldr_2_0(u_8, v_8, t);
  g_64 = t;
  t = SSL_TicksToSeconds(g_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  if(match_cons(t, sym__2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_64;
        if((u_64 != t))
          {
            _fail(t);
          }
        t = t_64;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_64, v_64);
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = SSL_gtr(u_64, v_64);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL;
        t = term_j_27;
        t = get_config_0_0(t);
        p_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_65, term_a_12);
        t = geq_0_0(t);
        t = n_65;
        t = b_110(t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = n_65;
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm t_65 = NULL,t_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = run_time_0_0(t);
  t_65 = t;
  t = term_e_27;
  t = whoami_0_0(t);
  t_66 = t;
  t = term_x_11;
  v_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_28), t_65), term_r_28), t_66);
  w_66 = t;
  t = SSL_printnl(v_66, w_66);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_28), t_65), term_r_28), t_66));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_27;
  x_66 = t;
  t = SSL_exit(x_66);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL;
  g_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_67 = ATgetArgument(t, 0);
          {
            ATerm x_20 = NULL,o_14 = NULL;
            t = SSLgetAnnotations(g_67);
            x_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_67);
            o_14 = t;
            t = SSLsetAnnotations(o_14, x_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm t_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_28;
      t = get_config_0_0(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = t_28;
      t = fetch_1_0(z_8, t);
    }
  t = r_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_67 = ATgetFirst((ATermList) t);
      k_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_67 = NULL,p_67 = NULL;
        static ATerm a_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_67)), not_null(p_67));
          return(t);
        }
        t = k_67;
        t = i_0(t);
        if(((o_67 != NULL) && (o_67 != t)))
          _fail(t);
        else
          o_67 = t;
        t = j_67;
        t = g_0(t);
        if(((p_67 != NULL) && (p_67 != t)))
          _fail(t);
        else
          p_67 = t;
        t = k_67;
        t = reverse_acc_2_0(g_0, a_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,q_14 = NULL;
  v_67 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_67);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_67);
  q_14 = t;
  t = SSLsetAnnotations(q_14, t_67);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm x_67 = NULL;
  x_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_67), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_28;
      t = get_config_0_0(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(b_9, t);
    }
  t = term_f_29;
  t = echo_0_0(t);
  t = term_y_27;
  r_67 = t;
  t = term_z_27;
  s_67 = t;
  t = term_g_29;
  t = r_7(r_67, s_67, t);
  t = reverse_acc_2_0(_id, c_9, t);
  t = map_1_0(d_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  static ATerm w_68 (ATerm t)
  {
    ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
    t_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_68 = ATgetFirst((ATermList) t);
        v_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL,l_21 = NULL,y_15 = NULL;
          t = SSLgetAnnotations(t_68);
          i_21 = t;
          t = u_68;
          t = w_95(t);
          l_21 = t;
          t = (ATerm) ATinsert(CheckATermList(v_68), l_21);
          y_15 = t;
          t = SSLsetAnnotations(y_15, i_21);
          LocalPopChoice(i_29);
        }
      else
        {
          t = h_29;
          {
            ATerm x_21 = NULL,a_22 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(t_68);
            x_21 = t;
            t = v_68;
            t = w_68(t);
            a_22 = t;
            t = (ATerm) ATinsert(CheckATermList(a_22), u_68);
            m_16 = t;
            t = SSLsetAnnotations(m_16, x_21);
          }
        }
    }
    return(t);
  }
  t = w_68(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  a_69 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_29 = ATgetFirst((ATermList) t);
                ATerm r_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_69;
          }
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATinsert(ATempty, a_69);
      }
  }
  b_69 = t;
  t = term_f_26;
  c_69 = t;
  t = SSL_printnl(c_69, b_69);
  t = a_69;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_7 (ATerm i_37, ATerm j_37, ATerm t)
{
  t = SSL_strcat(i_37, j_37);
  return(t);
}
ATerm debug_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
  g_69 = t;
  t = b_95(t);
  h_69 = t;
  t = term_x_11;
  i_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_69), h_69);
  j_69 = t;
  t = SSL_printnl(i_69, j_69);
  t = g_69;
  return(t);
}
ATerm map_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  static ATerm y_69 (ATerm t)
  {
    ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
    v_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_69;
      }
    else
      {
        ATerm m_22 = NULL,y_22 = NULL,z_22 = NULL,k_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_69 = ATgetFirst((ATermList) t);
            x_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_69);
        m_22 = t;
        t = w_69;
        t = m_95(t);
        y_22 = t;
        t = x_69;
        t = y_69(t);
        z_22 = t;
        t = (ATerm) ATinsert(CheckATermList(z_22), y_22);
        k_19 = t;
        t = SSLsetAnnotations(k_19, m_22);
      }
    return(t);
  }
  t = y_69(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_70 = NULL;
      g_70 = t;
      t = SSL_is_string(g_70);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_9, t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
              m_70 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_70 = ATgetArgument(t, 0);
                  t = n_70;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_70 = ATgetArgument(t, 0);
                      t = n_70;
                      {
                        ATerm z_29 = t;
                        int a_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(a_30);
                          }
                        else
                          {
                            t = z_29;
                            t = debug_1_0(h_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_70 = NULL,t_70 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_70 = ATgetArgument(t, 0);
                          o_70 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_70;
                      t = eval_config_0_0(t);
                      s_70 = t;
                      t = o_70;
                      t = eval_config_0_0(t);
                      t_70 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_70, t_70);
                      t = q_7(s_70, t_70, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm b_54, ATerm c_54, ATerm t)
{
  t = SSL_table_get(b_54, c_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  t = term_x_27;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, x_70);
  t = r_7(y_70, x_70, t);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_70 = NULL,a_71 = NULL;
        t = eval_config_0_0(t);
        z_70 = t;
        t = term_x_27;
        a_71 = t;
        t = SSL_table_put(a_71, x_70, z_70);
        t = z_70;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
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
  ATerm d_71 = NULL,e_71 = NULL;
  t = term_d_30;
  d_71 = t;
  t = term_e_27;
  e_71 = t;
  t = term_e_30;
  t = u_7(d_71, e_71, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
  t = term_d_30;
  h_71 = t;
  t = term_e_27;
  i_71 = t;
  t = term_e_30;
  t = u_7(h_71, i_71, t);
  t = term_g_30;
  f_71 = t;
  t = term_e_27;
  g_71 = t;
  t = term_h_30;
  t = u_7(f_71, g_71, t);
  t = term_i_30;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_9, j_9, k_9, t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      t = Option_3_0(l_9, m_9, o_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,d_24 = NULL;
  o_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_71 = ATgetFirst((ATermList) t);
      l_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_71);
  j_71 = t;
  t = k_71;
  t = k_74(t);
  m_71 = t;
  t = l_71;
  t = l_74(t);
  n_71 = t;
  t = (ATerm) ATinsert(CheckATermList(n_71), m_71);
  d_24 = t;
  t = SSLsetAnnotations(d_24, j_71);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,y_71 = NULL,z_71 = NULL,h_24 = NULL;
  t_71 = t;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_30;
        t = u_114(t);
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
      }
  }
  t = t_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_71 = ATgetFirst((ATermList) t);
      w_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_71);
  u_71 = t;
  t = term_h_28;
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, v_71);
  t = u_7(z_71, v_71, t);
  t = w_71;
  {
    static ATerm j_72 (ATerm t)
    {
      ATerm p_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_72 = NULL;
              c_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_72;
              LocalPopChoice(t_30);
            }
          else
            {
              t = r_30;
              t = u_114(t);
              t = Cons_2_0(_id, j_72, t);
            }
          LocalPopChoice(q_30);
        }
      else
        {
          t = p_30;
          {
            ATerm f_72 = NULL,g_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_72 = ATgetFirst((ATermList) t);
                g_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_72), (ATerm) ATmakeAppl(sym_Undefined_1, f_72));
          }
        }
      return(t);
    }
    t = j_72(t);
  }
  y_71 = t;
  t = (ATerm) ATinsert(CheckATermList(y_71), (ATerm) ATmakeAppl(sym_Program_1, v_71));
  h_24 = t;
  t = SSLsetAnnotations(h_24, u_71);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_72 = NULL;
  v_72 = t;
  if(match_string(t, "--help"))
    {
      t = v_72;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_72;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_72;
        }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL;
  t = term_z_28;
  w_72 = t;
  t = term_e_27;
  x_72 = t;
  t = term_v_30;
  t = u_7(w_72, x_72, t);
  t = term_x_30;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  q_72 = t;
  t = term_y_27;
  s_72 = t;
  t = term_z_27;
  t_72 = t;
  t = (ATerm) ATempty;
  u_72 = t;
  t = SSL_table_put(s_72, t_72, u_72);
  t = q_72;
  {
    static ATerm p_9 (ATerm t)
    {
      ATerm c_31 = t;
      int d_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_114(t);
          LocalPopChoice(d_31);
        }
      else
        {
          t = c_31;
          {
            ATerm e_31 = t;
            int f_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_9, s_9, t_9, t);
                LocalPopChoice(f_31);
              }
            else
              {
                t = e_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_9, t);
  }
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_73 = NULL;
        e_73 = t;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_24 = NULL;
              t = e_73;
              {
                ATerm k_31 = t;
                int l_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_31);
                  }
                else
                  {
                    t = k_31;
                    t = fetch_1_0(u_9, t);
                  }
              }
              t = e_73;
              t = default_system_usage_0_0(t);
              t = term_k_27;
              b_24 = t;
              t = SSL_exit(b_24);
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
              {
                ATerm j_24 = NULL;
                t = term_d_30;
                t = get_config_0_0(t);
                t = e_73;
                t = default_system_about_0_0(t);
                t = term_k_27;
                j_24 = t;
                t = SSL_exit(j_24);
              }
            }
        }
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm m_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
              static ATerm v_9 (ATerm t)
              {
                ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,m_24 = NULL;
                k_73 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_73 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_73);
                i_73 = t;
                t = j_73;
                if(((o_72 != NULL) && (o_72 != t)))
                  _fail(t);
                else
                  o_72 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_73);
                m_24 = t;
                t = SSLsetAnnotations(m_24, i_73);
                return(t);
              }
              t = fetch_1_0(v_9, t);
              t = term_x_11;
              g_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_72)), term_p_31);
              h_73 = t;
              t = SSL_printnl(g_73, h_73);
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_72)), term_p_31));
              t = default_system_usage_0_0(t);
              t = term_a_12;
              f_73 = t;
              t = SSL_exit(f_73);
              LocalPopChoice(o_31);
            }
          else
            {
              t = m_31;
            }
        }
      }
  }
  p_72 = t;
  t = term_y_27;
  r_72 = t;
  t = SSL_table_destroy(r_72);
  t = p_72;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  t = parse_options_1_0(t_112, t);
  p_73 = t;
  t = term_q_31;
  s_73 = t;
  t = SSL_table_create(s_73);
  t = term_q_31;
  q_73 = t;
  t = term_r_31;
  r_73 = t;
  t = SSL_table_put(q_73, r_73, p_73);
  t = p_73;
  t = v_112(t);
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_112, t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            {
              ATerm a_32 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_9, a_10, b_10, t);
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
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
static ATerm x_9 (ATerm t)
{
  t = input_1_0(d_10, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL;
  t = term_i_26;
  u_73 = t;
  t = term_e_27;
  v_73 = t;
  t = term_f_32;
  t = u_7(u_73, v_73, t);
  t = term_h_32;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_9, default_usage_0_0, _id, x_9, t);
  return(t);
}
