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
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_d_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
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
ATerm term_n_27;
ATerm term_k_27;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_h_22;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Op_2, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Op_2, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_16);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_18);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_22);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_s_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_n_28);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_s_27);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_s_27);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_s_27);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_s_27);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm split_dynamic_rules_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_90 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm v_119 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm o_6 (ATerm j_65, ATerm i_65, ATerm t);
ATerm repeat_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm x_96 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_6 (ATerm s_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t);
static ATerm u_6 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t);
static ATerm v_6 (ATerm n_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t);
ATerm genzip_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm a_7 (ATerm t_597, ATerm y_597, ATerm y_56, ATerm t);
ATerm while_not_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_40 (ATerm n_39, ATerm o_39, ATerm p_39, ATerm t);
static ATerm p_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm free_vars_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm e_7 (ATerm x_52, ATerm y_52, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm u_90 (ATerm), ATerm t);
static ATerm f_7 (ATerm b_108 (ATerm), ATerm z_42, ATerm x_42, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm g_7 (ATerm r_52, ATerm s_52, ATerm t);
ATerm end_scope_1_0 (ATerm y_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_107 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm e_96 (ATerm), ATerm t);
static ATerm p_47 (ATerm f_47, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_7 (ATerm s_20, ATerm o_20, ATerm t);
ATerm foldr_3_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm k_7 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm l_7 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm n_7 (ATerm f_95 (ATerm), ATerm n_158, ATerm i_23, ATerm t);
static ATerm m_7 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm output_1_0 (ATerm c_113 (ATerm), ATerm t);
static ATerm t_57 (ATerm k_57, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_7 (ATerm g_23, ATerm t);
static ATerm p_7 (ATerm r_38, ATerm s_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_59 (ATerm l_58, ATerm t);
static ATerm u_59 (ATerm p_58, ATerm s_58, ATerm t_58, ATerm t);
static ATerm v_59 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_7 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_7 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_7 (ATerm l_41, ATerm m_41, ATerm t);
ATerm foldr_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_110 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm need_help_1_0 (ATerm t_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_95 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_7 (ATerm i_37, ATerm j_37, ATerm t);
ATerm debug_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_95 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm v_7 (ATerm d_54, ATerm e_54, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_114 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm parse_options_1_0 (ATerm v_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
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
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_1, c_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_1 = ATgetArgument(t, 0);
          t = b_1;
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
              t = term_i_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_1 = ATgetArgument(t, 0);
              t = b_1;
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
                  t = term_i_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_1 = ATgetArgument(t, 0);
                  t = b_1;
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
                      t = term_l_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      b_1 = ATgetArgument(t, 0);
                      c_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, c_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, x_0), b_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          b_1 = ATgetArgument(t, 0);
                          c_1 = ATgetArgument(t, 1);
                          x_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_0)), b_1), (ATerm) ATmakeAppl(sym_Build_1, c_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              b_1 = ATgetArgument(t, 0);
                              c_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_1, (ATerm) ATmakeAppl(sym_Match_1, c_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  b_1 = ATgetArgument(t, 0);
                                  c_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_1), c_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      b_1 = ATgetArgument(t, 0);
                                      c_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_1), b_1);
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
    ATerm o_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_10);
        t = a_3;
        {
          ATerm t_10 = t;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,a_0 = NULL,y_0 = NULL;
              s_0 = t;
              if(match_cons(t, sym_Var_1))
                {
                  r_0 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_0);
              q_0 = t;
              t = term_u_10;
              y_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_10, r_0);
              t = e_7(y_0, r_0, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm w_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_10) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, r_0);
              a_0 = t;
              t = SSLsetAnnotations(a_0, q_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_10;
            }
        }
        t = term_y_10;
      }
    else
      {
        t = o_10;
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
                  t = free_vars_3_0(t_0, u_0, tboundin_3_0, t);
                  t = map_1_0(e_1, t);
                  f_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_11, f_3);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_3 = ATgetArgument(t, 0);
                    c_3 = ATgetArgument(t, 1);
                    {
                      ATerm c_5 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
                      t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
                      t = map_1_0(m_1, t);
                      c_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_a_11, c_5);
                    }
                  }
                else
                  {
                    ATerm d_1 = NULL,f_1 = NULL,j_1 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm j_11 = ATgetArgument(t, 0);
                        ATerm k_11 = ATgetArgument(t, 1);
                        ATerm l_11 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_n_11;
                    f_1 = t;
                    t = (ATerm) ATinsert(ATempty, term_o_11);
                    j_1 = t;
                    t = SSL_printnl(f_1, j_1);
                    t = term_p_11;
                    d_1 = t;
                    t = SSL_exit(d_1);
                    t = (ATerm) ATinsert(ATempty, term_o_11);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
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
static ATerm u_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm s_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_11);
          }
        else
          {
            t = s_11;
            {
              ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL,y_3 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_3 = ATgetArgument(t, 0);
                  p_3 = ATgetArgument(t, 1);
                  q_3 = ATgetArgument(t, 2);
                  y_3 = ATgetArgument(t, 3);
                  t = q_3;
                  t = map_1_0(z_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_3 = ATgetArgument(t, 0);
                      p_3 = ATgetArgument(t, 1);
                      q_3 = ATgetArgument(t, 2);
                      y_3 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_3;
                  t = map_1_0(a_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_4 = NULL;
  ATerm x_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_4 = ATgetArgument(t, 0);
          {
            ATerm f_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_12);
      t = i_4;
    }
  else
    {
      t = x_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_4;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm t_4 = NULL;
  ATerm h_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_4 = ATgetArgument(t, 0);
          {
            ATerm m_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_12);
      t = t_4;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_4;
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
  ATerm d_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm o_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = o_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm f_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_5 = ATgetArgument(t, 0);
                  h_5 = ATgetArgument(t, 1);
                  j_5 = ATgetArgument(t, 2);
                  k_5 = ATgetArgument(t, 3);
                  t = j_5;
                  t = map_1_0(i_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_5 = ATgetArgument(t, 0);
                      h_5 = ATgetArgument(t, 1);
                      j_5 = ATgetArgument(t, 2);
                      k_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_5;
                  t = map_1_0(k_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm v_5 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_5 = ATgetArgument(t, 0);
          {
            ATerm d_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_13);
      t = v_5;
    }
  else
    {
      t = b_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_5;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm e_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_8 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = i_8;
    }
  else
    {
      t = e_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
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
static ATerm n_1 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_12);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm i_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = i_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_12 = ATgetArgument(t, 0);
                  q_12 = ATgetArgument(t, 1);
                  r_12 = ATgetArgument(t, 2);
                  s_12 = ATgetArgument(t, 3);
                  t = r_12;
                  t = map_1_0(q_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_12 = ATgetArgument(t, 0);
                      q_12 = ATgetArgument(t, 1);
                      r_12 = ATgetArgument(t, 2);
                      s_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_12;
                  t = map_1_0(r_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm t_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_13);
      t = f_13;
    }
  else
    {
      t = o_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_13;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_13 = NULL;
  ATerm u_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_13 = ATgetArgument(t, 0);
          {
            ATerm z_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = q_13;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_13;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_13);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_14);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm a_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = a_14;
      {
        ATerm d_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_14);
          }
        else
          {
            t = d_14;
            {
              ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_14 = ATgetArgument(t, 0);
                  i_14 = ATgetArgument(t, 1);
                  j_14 = ATgetArgument(t, 2);
                  k_14 = ATgetArgument(t, 3);
                  t = j_14;
                  t = map_1_0(v_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_14 = ATgetArgument(t, 0);
                      i_14 = ATgetArgument(t, 1);
                      j_14 = ATgetArgument(t, 2);
                      k_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_14;
                  t = map_1_0(w_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm g_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_14 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_14);
      t = x_14;
    }
  else
    {
      t = g_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_14;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm g_15 = NULL;
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_15 = ATgetArgument(t, 0);
          {
            ATerm p_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_14);
      t = g_15;
    }
  else
    {
      t = n_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_15;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,e_2 = NULL,j_0 = NULL,i_2 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            v_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_15);
        e_2 = t;
        t = term_u_10;
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, v_15);
        t = e_7(i_2, v_15, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_14) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, v_15);
        j_0 = t;
        t = SSLsetAnnotations(j_0, e_2);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm l_2 = NULL;
          t = term_u_10;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_10, q_15);
          t = e_7(l_2, q_15, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = q_15;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm n_16 (ATerm c_11, ATerm d_11, ATerm e_11, ATerm f_11, ATerm g_11, ATerm h_11, ATerm i_11, ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,y_11 = NULL,z_11 = NULL,d_12 = NULL,e_12 = NULL,j_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, g_11, term_v_14);
    {
      ATerm y_14 = t;
      if((PushChoice() == 0))
        {
          ATerm k_12 = NULL;
          if(match_cons(t, sym__2))
            {
              k_12 = ATgetArgument(t, 0);
              if((k_12 != ATgetArgument(t, 1)))
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
          t = y_14;
        }
    }
    t = new_0_0(t);
    t_11 = t;
    t = f_11;
    t = dummify_0_0(t);
    v_11 = t;
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_11;
          if((f_11 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, t_11);
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = v_11;
        }
    }
    u_11 = t;
    t = v_11;
    t = free_vars_3_0(n_1, p_1, tboundin_3_0, t);
    t = map_1_0(s_1, t);
    z_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
    t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
    t = filter_1_0(x_1, t);
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
    t = diff_0_0(t);
    d_12 = t;
    t = new_0_0(t);
    e_12 = t;
    t = c_11;
    t = o_0(t);
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, j_12, (ATerm) ATmakeAppl(sym_Op_2, term_b_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_15, (ATerm) ATinsert(CheckATermList(d_12), (ATerm) ATmakeAppl(sym_Str_1, e_12)))), v_11)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_11, d_11, e_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_11), f_11), g_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_11)))), u_11), (ATerm) ATmakeAppl(sym_Op_2, term_c_15, (ATerm) ATinsert(CheckATermList(d_12), (ATerm) ATmakeAppl(sym_Str_1, e_12))))), h_11))));
    return(t);
  }
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  y_15 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_15 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      h_16 = ATgetArgument(t, 2);
      i_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = i_16;
  if(match_cons(t, sym_Rule_3))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
      l_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_16;
  if(match_cons(t, sym_Op_2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      t = x_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_15;
          if(match_string(t, "Undefined"))
            {
              ATerm f_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
                  t = y_15;
                  t = new_0_0(t);
                  r_3 = t;
                  t = j_16;
                  t = dummify_0_0(t);
                  n_3 = t;
                  {
                    ATerm j_15 = t;
                    int k_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_3;
                        if((j_16 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, r_3);
                        LocalPopChoice(k_15);
                      }
                    else
                      {
                        t = j_15;
                        t = n_3;
                      }
                  }
                  s_3 = t;
                  t = z_15;
                  t = o_0(t);
                  t_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_3, (ATerm) ATmakeAppl(sym_Op_2, term_b_15, (ATerm) ATinsert(ATinsert(ATempty, term_v_14), n_3)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_15, g_16, h_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, r_3), j_16), term_v_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_15)))), s_3), term_v_14)), (ATerm) ATmakeAppl(sym_Seq_2, l_16, term_i_10)))));
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = f_15;
                  t = n_16(z_15, g_16, h_16, j_16, k_16, l_16, y_15, t);
                }
            }
          else
            {
              t = n_16(z_15, g_16, h_16, j_16, k_16, l_16, y_15, t);
            }
        }
      else
        {
          t = w_15;
          t = n_16(z_15, g_16, h_16, j_16, k_16, l_16, y_15, t);
        }
    }
  else
    {
      t = n_16(z_15, g_16, h_16, j_16, k_16, l_16, y_15, t);
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = SplitDynamicRule_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_16))));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_15;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_16, a_17);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_15 = ATgetArgument(t, 0);
      if(match_cons(o_15, sym__2))
        {
          b_17 = ATgetArgument(o_15, 0);
          e_17 = ATgetArgument(o_15, 1);
        }
      else
        _fail(t);
      {
        ATerm p_15 = ATgetArgument(t, 1);
        if(match_cons(p_15, sym__2))
          {
            f_17 = ATgetArgument(p_15, 0);
            g_17 = ATgetArgument(p_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_17), b_17), (ATerm) ATinsert(CheckATermList(g_17), e_17));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, n_17))));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_15;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_17 = ATgetFirst((ATermList) t);
      p_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, p_17);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(match_cons(u_15, sym__2))
        {
          q_17 = ATgetArgument(u_15, 0);
          r_17 = ATgetArgument(u_15, 1);
        }
      else
        _fail(t);
      {
        ATerm a_16 = ATgetArgument(t, 1);
        if(match_cons(a_16, sym__2))
          {
            s_17 = ATgetArgument(a_16, 0);
            t_17 = ATgetArgument(a_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_17), q_17), (ATerm) ATinsert(CheckATermList(t_17), r_17));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm w_16 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      w_16 = ATgetArgument(t, 0);
      t = w_16;
      t = map_1_0(y_1, t);
      t = genzip_4_0(a_2, b_2, c_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          w_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_16;
      t = map_1_0(d_2, t);
      t = genzip_4_0(g_2, h_2, k_2, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  static ATerm y_17 (ATerm t)
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_90(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = SRTS_one(y_17, t);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_18 = NULL,q_18 = NULL,v_18 = NULL,w_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      v_18 = ATgetArgument(t, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_18;
            l_18 = t;
            t = w_18;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = w_18;
            l_18 = t;
            t = w_18;
          }
      }
    }
  else
    {
      t = w_18;
      l_18 = t;
      t = w_18;
    }
  t = term_s_16;
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_18, term_s_16);
  t = f_7(t_2, l_18, q_18, t);
  t = w_18;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  static ATerm x_18 (ATerm t)
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm t_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_119(t);
          LocalPopChoice(v_16);
        }
      else
        {
          t = t_16;
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
                t = map_1_0(s_2, t);
                t = h_18;
                t = x_18(t);
                if(((k_18 != NULL) && (k_18 != t)))
                  _fail(t);
                else
                  k_18 = t;
                return(t);
              }
              t = scope_2_0(o_2, r_2, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_18, not_null(k_18));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_2, t);
    return(t);
  }
  t = x_18(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_19);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm x_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = x_16;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm v_19 = NULL,w_19 = NULL,z_19 = NULL,a_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_19 = ATgetArgument(t, 0);
                  w_19 = ATgetArgument(t, 1);
                  z_19 = ATgetArgument(t, 2);
                  a_20 = ATgetArgument(t, 3);
                  t = z_19;
                  t = map_1_0(w_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_19 = ATgetArgument(t, 0);
                      w_19 = ATgetArgument(t, 1);
                      z_19 = ATgetArgument(t, 2);
                      a_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_19;
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
  ATerm l_20 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_20 = ATgetArgument(t, 0);
          {
            ATerm l_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = l_20;
    }
  else
    {
      t = j_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_20;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm r_21 = NULL;
  ATerm m_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm w_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = r_21;
    }
  else
    {
      t = m_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_21;
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
            ATerm x_17 = ATgetArgument(t, 1);
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
            ATerm z_17 = ATgetArgument(t, 1);
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
  ATerm o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      if((o_23 != ATgetArgument(t, 1)))
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
  ATerm m_19 = NULL,o_19 = NULL,p_19 = NULL;
  p_19 = t;
  t = free_vars_3_0(u_2, v_2, tboundin_3_0, t);
  m_19 = t;
  t = p_19;
  {
    ATerm b_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm i_18 = ATgetArgument(t, 0);
                ATerm j_18 = ATgetArgument(t, 1);
                x_21 = ATgetArgument(t, 2);
                {
                  ATerm m_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_18);
            t = x_21;
            t = map_1_0(y_2, t);
          }
        else
          {
            t = e_18;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm n_18 = ATgetArgument(t, 0);
                ATerm o_18 = ATgetArgument(t, 1);
                x_21 = ATgetArgument(t, 2);
                {
                  ATerm p_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = x_21;
            t = map_1_0(z_2, t);
          }
        LocalPopChoice(d_18);
      }
    else
      {
        t = b_18;
        t = (ATerm) ATempty;
      }
  }
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, o_19);
  t = t_6(d_3, m_19, o_19, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL,g_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      g_24 = ATgetArgument(t, 0);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_24;
            d_24 = t;
            t = l_24;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = l_24;
            d_24 = t;
            t = l_24;
          }
      }
    }
  else
    {
      t = l_24;
      d_24 = t;
      t = l_24;
    }
  t = term_s_16;
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_24, term_s_16);
  t = f_7(j_3, d_24, f_24, t);
  t = l_24;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm o_6 (ATerm j_65, ATerm i_65, ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = j_65;
    t = def_tvars_0_0(t);
    t = map_1_0(i_3, t);
    t = j_65;
    {
      static ATerm k_3 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              a_24 = ATgetArgument(t, 0);
            if(((z_23 != NULL) && (z_23 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              z_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, a_24);
        return(t);
      }
      t = split_dynamic_rule_1_0(k_3, t);
    }
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    return(t);
  }
  t = scope_2_0(e_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_23)), not_null(b_24)), i_65);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  static ATerm n_24 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_88(t);
        t = n_24(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = d_88(t);
      }
    return(t);
  }
  t = n_24(t);
  return(t);
}
ATerm listtd_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  static ATerm k_25 (ATerm t)
  {
    ATerm e_25 = NULL,h_25 = NULL,j_25 = NULL;
    t = x_96(t);
    e_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_25;
      }
    else
      {
        ATerm y_4 = NULL,l_5 = NULL,l_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_25 = ATgetFirst((ATermList) t);
            j_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_25);
        y_4 = t;
        t = j_25;
        t = k_25(t);
        l_5 = t;
        t = (ATerm) ATinsert(CheckATermList(l_5), h_25);
        l_1 = t;
        t = SSLsetAnnotations(l_1, y_4);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm o_25 = NULL,r_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_25 = ATgetFirst((ATermList) t);
      r_25 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, r_25, v_25)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_25))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_25;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      {
        ATerm d_6 = NULL,h_6 = NULL,i_6 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(p_30);
        d_6 = t;
        t = q_30;
        t = p_119(t);
        h_6 = t;
        t = i_30;
        t = n_119(t);
        i_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_6, i_6);
        o_1 = t;
        t = SSLsetAnnotations(o_1, d_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_30 = ATgetArgument(t, 0);
          i_30 = ATgetArgument(t, 1);
          n_30 = ATgetArgument(t, 2);
          o_30 = ATgetArgument(t, 3);
          {
            ATerm x_6 = NULL,d_7 = NULL,h_7 = NULL,i_7 = NULL,s_7 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(p_30);
            x_6 = t;
            t = q_30;
            t = p_119(t);
            d_7 = t;
            t = i_30;
            t = p_119(t);
            h_7 = t;
            t = n_30;
            t = p_119(t);
            i_7 = t;
            t = o_30;
            t = n_119(t);
            s_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_7, h_7, i_7, s_7);
            j_2 = t;
            t = SSLsetAnnotations(j_2, x_6);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              q_30 = ATgetArgument(t, 0);
              i_30 = ATgetArgument(t, 1);
              n_30 = ATgetArgument(t, 2);
              o_30 = ATgetArgument(t, 3);
              {
                ATerm r_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,m_2 = NULL;
                t = SSLgetAnnotations(p_30);
                r_8 = t;
                t = q_30;
                t = p_119(t);
                w_8 = t;
                t = i_30;
                t = p_119(t);
                x_8 = t;
                t = n_30;
                t = p_119(t);
                y_8 = t;
                t = o_30;
                t = n_119(t);
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, w_8, x_8, y_8, z_8);
                m_2 = t;
                t = SSLsetAnnotations(m_2, r_8);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_30 = ATgetArgument(t, 0);
                  {
                    ATerm i_9 = NULL,k_9 = NULL,p_2 = NULL;
                    t = SSLgetAnnotations(p_30);
                    i_9 = t;
                    t = q_30;
                    t = n_119(t);
                    k_9 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_9);
                    p_2 = t;
                    t = SSLsetAnnotations(p_2, i_9);
                  }
                }
              else
                {
                  ATerm q_9 = NULL,s_9 = NULL,q_2 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      q_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_30);
                  q_9 = t;
                  t = q_30;
                  t = n_119(t);
                  s_9 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, s_9);
                  q_2 = t;
                  t = SSLsetAnnotations(q_2, q_9);
                }
            }
        }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm o_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_31);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm q_31 = NULL,s_31 = NULL,t_31 = NULL,y_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_31 = ATgetArgument(t, 0);
                  s_31 = ATgetArgument(t, 1);
                  t_31 = ATgetArgument(t, 2);
                  y_31 = ATgetArgument(t, 3);
                  t = t_31;
                  t = map_1_0(u_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_31 = ATgetArgument(t, 0);
                      s_31 = ATgetArgument(t, 1);
                      t_31 = ATgetArgument(t, 2);
                      y_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_31;
                  t = map_1_0(v_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_32 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = h_32;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_32;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_32 = NULL;
  ATerm l_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_32 = ATgetArgument(t, 0);
          {
            ATerm r_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_19);
      t = w_32;
    }
  else
    {
      t = l_19;
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
static ATerm w_3 (ATerm t)
{
  ATerm a_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_33);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_33 = ATgetArgument(t, 0);
                  f_33 = ATgetArgument(t, 1);
                  g_33 = ATgetArgument(t, 2);
                  h_33 = ATgetArgument(t, 3);
                  t = g_33;
                  t = map_1_0(z_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_33 = ATgetArgument(t, 0);
                      f_33 = ATgetArgument(t, 1);
                      g_33 = ATgetArgument(t, 2);
                      h_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_33;
                  t = map_1_0(a_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_33 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_33 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = q_33;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_33;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_33 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_33 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = z_33;
    }
  else
    {
      t = e_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm m_31 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      m_31 = ATgetArgument(t, 0);
      t = m_31;
      t = free_vars_3_0(l_3, o_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          m_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_31;
      t = free_vars_3_0(w_3, x_3, tboundin_3_0, t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_34);
  return(t);
}
static ATerm c_4 (ATerm t)
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
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_34 = ATgetArgument(t, 0);
                  r_34 = ATgetArgument(t, 1);
                  s_34 = ATgetArgument(t, 2);
                  t_34 = ATgetArgument(t, 3);
                  t = s_34;
                  t = map_1_0(d_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_34 = ATgetArgument(t, 0);
                      r_34 = ATgetArgument(t, 1);
                      s_34 = ATgetArgument(t, 2);
                      t_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_34;
                  t = map_1_0(e_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_35 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_35 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = a_35;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_35;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm n_35 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_35 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_20);
      t = n_35;
    }
  else
    {
      t = q_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_34 = ATgetArgument(t, 0);
      t = l_34;
      if(match_cons(t, sym_Rule_3))
        {
          h_34 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
          {
            ATerm y_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_34;
      t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_34 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_34;
    }
  return(t);
}
static ATerm t_6 (ATerm s_99 (ATerm), ATerm x_28, ATerm w_28, ATerm t)
{
  static ATerm k_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_36 = ATgetFirst((ATermList) t);
            h_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_36;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = w_28;
                  return(t);
                }
                t = u_6(s_99, f_4, e_36, h_36, t);
              }
              t = k_36(t);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              {
                ATerm b_10 = NULL,f_10 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(d_36);
                b_10 = t;
                t = h_36;
                t = k_36(t);
                f_10 = t;
                t = (ATerm) ATinsert(CheckATermList(f_10), e_36);
                m_8 = t;
                t = SSLsetAnnotations(m_8, b_10);
              }
            }
        }
      }
    return(t);
  }
  t = x_28;
  t = k_36(t);
  return(t);
}
static ATerm u_6 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm b_29, ATerm a_29, ATerm t)
{
  t = w_99(t);
  {
    static ATerm g_4 (ATerm t)
    {
      ATerm u_36 = NULL;
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, u_36);
      t = v_99(t);
      return(t);
    }
    t = fetch_1_0(g_4, t);
  }
  t = a_29;
  return(t);
}
static ATerm v_6 (ATerm n_99 (ATerm), ATerm v_28, ATerm u_28, ATerm t)
{
  static ATerm x_37 (ATerm t)
  {
    ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
    s_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_37 = ATgetFirst((ATermList) t);
            u_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_37;
              {
                static ATerm h_4 (ATerm t)
                {
                  t = u_28;
                  return(t);
                }
                t = u_6(n_99, h_4, t_37, u_37, t);
              }
              t = x_37(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
                ATerm z_10 = NULL,m_11 = NULL,z_9 = NULL;
                t = SSLgetAnnotations(s_37);
                z_10 = t;
                t = u_37;
                t = x_37(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), t_37);
                z_9 = t;
                t = SSLsetAnnotations(z_9, z_10);
              }
            }
        }
      }
    return(t);
  }
  t = v_28;
  t = x_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  static ATerm f_38 (ATerm t)
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
          ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,c_10 = NULL;
          t = s_97(t);
          e_38 = t;
          if(match_cons(t, sym__2))
            {
              a_38 = ATgetArgument(t, 0);
              b_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_38);
          z_37 = t;
          t = a_38;
          t = u_97(t);
          c_38 = t;
          t = b_38;
          t = f_38(t);
          d_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_38, d_38);
          c_10 = t;
          t = SSLsetAnnotations(c_10, z_37);
          t = t_97(t);
        }
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
static ATerm j_4 (ATerm t)
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
static ATerm k_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
        {
          m_38 = ATgetFirst((ATermList) k_21);
          n_38 = (ATerm) ATgetNext((ATermList) k_21);
        }
      else
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            o_38 = ATgetFirst((ATermList) l_21);
            v_38 = (ATerm) ATgetNext((ATermList) l_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_38, o_38), (ATerm) ATmakeAppl(sym__2, n_38, v_38));
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_38), w_38);
  return(t);
}
static ATerm a_7 (ATerm t_597, ATerm y_597, ATerm y_56, ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = SSL_explode_term(y_597);
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_597);
  if(match_cons(t, sym__2))
    {
      if((h_38 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  t = genzip_4_0(j_4, k_4, l_4, _id, t);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_38, y_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t)
{
  static ATerm b_39 (ATerm t)
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_88(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        t = u_88(t);
        t = b_39(t);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm for_3_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t)
{
  t = w_88(t);
  t = while_not_2_0(x_88, y_88, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_39);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,j_10 = NULL;
  m_39 = t;
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_39);
  j_39 = t;
  t = l_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_39, l_39);
  j_10 = t;
  t = SSLsetAnnotations(j_10, j_39);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_40(g_40, h_40, f_40, t);
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_40), i_40), j_40);
          }
      }
    }
  else
    {
      t = t_40(g_40, h_40, f_40, t);
    }
  return(t);
}
static ATerm t_40 (ATerm n_39, ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm q_39 = NULL,t_39 = NULL,k_10 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  t = SSLgetAnnotations(p_39);
  q_39 = t;
  t = o_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_39 = ATgetFirst((ATermList) t);
      z_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_39;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_39;
        if((x_39 != t))
          {
            _fail(t);
          }
        t = z_39;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = o_39;
        t = a_7(x_39, y_39, z_39, t);
      }
  }
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_39, t_39);
  k_10 = t;
  t = SSLsetAnnotations(k_10, q_39);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      if((s_40 != ATgetArgument(t, 1)))
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
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_4, n_4, o_4, t);
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
        n_40 = t;
        if(match_cons(t, sym__2))
          {
            o_40 = ATgetArgument(t, 0);
            p_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_40;
        t = v_6(p_4, o_40, p_40, t);
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(v_4, i_12, t_12, t);
  return(t);
}
static ATerm v_4 (ATerm t)
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
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_5, r_13, s_13, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      if((w_13 != ATgetArgument(t, 1)))
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
  static ATerm h_41 (ATerm t)
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_117(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_40 = NULL,w_40 = NULL,b_12 = NULL,c_12 = NULL;
              v_40 = t;
              t = i_117(t);
              w_40 = t;
              t = v_40;
              {
                static ATerm q_4 (ATerm t)
                {
                  ATerm y_40 = NULL;
                  t = h_41(t);
                  y_40 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_40, w_40);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_117(q_4, h_41, r_4, t);
              }
              c_12 = t;
              t = SSL_explode_term(c_12);
              if(match_cons(t, sym__2))
                {
                  ATerm b_22 = ATgetArgument(t, 0);
                  b_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_12;
              t = foldr_3_0(s_4, u_4, _id, t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm w_12 = NULL,x_12 = NULL;
                x_12 = t;
                t = SSL_explode_term(x_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_22 = ATgetArgument(t, 0);
                    w_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_12;
                t = foldr_3_0(w_4, x_4, h_41, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  static ATerm b_5 (ATerm t)
  {
    t = bottomup_1_0(d_89, t);
    return(t);
  }
  t = SRTS_all(b_5, t);
  t = d_89(t);
  return(t);
}
static ATerm e_7 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm i_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_52, y_52);
  t = v_7(x_52, y_52, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_41 = ATgetFirst((ATermList) t);
      {
        ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_41;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  y_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL;
        t = term_h_22;
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, y_41);
        t = e_7(w_14, y_41, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, z_41, (ATerm) ATempty);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm b_16 = NULL;
          t = term_h_22;
          b_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_22, y_41);
          t = e_7(b_16, y_41, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, z_41, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  static ATerm c_42 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_90(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = SRTS_all(c_42, t);
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
static ATerm f_7 (ATerm b_108 (ATerm), ATerm z_42, ATerm x_42, ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  t = b_108(t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_42, z_42, x_42);
  t = w_7(d_42, z_42, x_42, t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL;
        t = term_q_22;
        j_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_42, term_q_22);
        t = v_7(d_42, j_42, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_42 = ATgetFirst((ATermList) t);
      f_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_22;
  h_42 = t;
  t = (ATerm) ATinsert(CheckATermList(f_42), (ATerm) ATinsert(CheckATermList(e_42), z_42));
  i_42 = t;
  t = SSL_table_put(d_42, h_42, i_42);
  t = g_42;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm n_42 = NULL,p_42 = NULL,q_42 = NULL,c_43 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
      n_42 = ATgetArgument(t, 2);
      {
        ATerm g_43 = NULL,h_43 = NULL;
        t = q_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_42);
        g_43 = t;
        t = term_s_22;
        h_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_42), term_s_22);
        t = f_7(e_5, g_43, h_43, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, p_42, (ATerm)ATempty, n_42);
      }
    }
  else
    {
      ATerm k_43 = NULL,l_43 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          p_42 = ATgetArgument(t, 0);
          q_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_42;
      if(match_cons(t, sym_ConstType_1))
        {
          c_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_42);
      k_43 = t;
      t = term_u_22;
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_42), term_u_22);
      t = f_7(g_5, k_43, l_43, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_42, (ATerm) ATmakeAppl(sym_ConstType_1, c_43));
    }
  return(t);
}
static ATerm g_7 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  q_43 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
        t = v_7(r_52, s_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_22 = ATgetFirst((ATermList) t);
            p_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_22);
        t = SSL_table_put(r_52, s_52, p_43);
        t = (ATerm) ATmakeAppl(sym__3, r_52, s_52, p_43);
      }
    else
      {
        t = w_22;
        t = SSL_table_remove(r_52, s_52);
        t = (ATerm) ATmakeAppl(sym__2, r_52, s_52);
      }
  }
  t = q_43;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  u_43 = t;
  t = y_107(t);
  t_43 = t;
  {
    ATerm z_22 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_43 = NULL;
        t = term_q_22;
        w_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_43, term_q_22);
        t = v_7(t_43, w_43, t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      r_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_22;
  v_43 = t;
  t = SSL_table_put(t_43, v_43, r_43);
  t = s_43;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm x_43 = NULL;
      x_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_43, x_43);
      t = g_7(t_43, x_43, t);
      return(t);
    }
    t = map_1_0(i_5, t);
  }
  t = u_43;
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
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  a_44 = t;
  t = x_107(t);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_43, term_q_22);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_22;
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_43, term_q_22);
        t = v_7(z_43, h_44, t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
  }
  b_44 = t;
  t = term_q_22;
  c_44 = t;
  t = (ATerm) ATinsert(CheckATermList(b_44), (ATerm) ATempty);
  d_44 = t;
  t = SSL_table_put(z_43, c_44, d_44);
  t = a_44;
  return(t);
}
ATerm scope_2_0 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  static ATerm m_5 (ATerm t)
  {
    t = end_scope_1_0(z_107, t);
    return(t);
  }
  t = begin_scope_1_0(z_107, t);
  t = restore_always_2_0(a_108, m_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_10 = NULL;
  p_44 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_44);
  m_44 = t;
  t = n_44;
  t = map_1_0(p_5, t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_44);
  q_10 = t;
  t = SSLsetAnnotations(q_10, m_44);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  d_45 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      c_45 = ATgetArgument(t, 0);
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL,d_17 = NULL,n_10 = NULL;
            t = SSLgetAnnotations(d_45);
            u_16 = t;
            t = c_45;
            t = map_1_0(q_5, t);
            d_17 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, d_17);
            n_10 = t;
            t = SSLsetAnnotations(n_10, u_16);
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            t = d_45;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          c_45 = ATgetArgument(t, 0);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_18 = NULL,c_18 = NULL,p_10 = NULL;
                t = SSLgetAnnotations(d_45);
                a_18 = t;
                t = c_45;
                t = map_1_0(r_5, t);
                c_18 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, c_18);
                p_10 = t;
                t = SSLsetAnnotations(p_10, a_18);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = d_45;
              }
          }
        }
      else
        {
          t = d_45;
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm c_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = c_24;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(n_5, o_5, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_45;
    }
  else
    {
      static ATerm s_5 (ATerm t)
      {
        t = not_null(m_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_45 = ATgetFirst((ATermList) t);
          if(((m_45 != NULL) && (m_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_45;
      t = at_end_1_0(s_5, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_46 = ATgetFirst((ATermList) t);
          d_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_18 = NULL,b_19 = NULL,c_19 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(b_46);
            y_18 = t;
            t = c_46;
            t = v_102(t);
            b_19 = t;
            t = d_46;
            t = filter_1_0(v_102, t);
            c_19 = t;
            t = (ATerm) ATinsert(CheckATermList(c_19), b_19);
            v_10 = t;
            t = SSLsetAnnotations(v_10, y_18);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = d_46;
            t = filter_1_0(v_102, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  static ATerm v_46 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
    t_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_46 = ATgetFirst((ATermList) t);
        s_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_19 = NULL,q_19 = NULL,b_11 = NULL;
          t = SSLgetAnnotations(t_46);
          k_19 = t;
          t = s_46;
          t = v_46(t);
          q_19 = t;
          t = (ATerm) ATinsert(CheckATermList(q_19), r_46);
          b_11 = t;
          t = SSLsetAnnotations(b_11, k_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_46;
        t = e_96(t);
      }
    return(t);
  }
  t = v_46(t);
  return(t);
}
static ATerm p_47 (ATerm f_47, ATerm t)
{
  ATerm g_47 = NULL;
  t = SSL_explode_term(f_47);
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
      {
        ATerm k_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_5 (ATerm t)
            {
              t = j_47;
              return(t);
            }
            t = i_47;
            t = at_end_1_0(t_5, t);
            LocalPopChoice(m_24);
          }
        else
          {
            t = k_24;
            t = p_47(k_47, t);
          }
      }
    }
  else
    {
      t = p_47(k_47, t);
    }
  return(t);
}
static ATerm j_7 (ATerm s_20, ATerm o_20, ATerm t)
{
  ATerm q_47 = NULL,s_47 = NULL;
  static ATerm u_5 (ATerm t)
  {
    ATerm u_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
    c_48 = t;
    t = SSL_explode_term(c_48);
    if(match_cons(t, sym__2))
      {
        if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_47 = ATgetArgument(t, 0);
        {
          ATerm o_24 = ATgetArgument(t, 1);
          if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
            {
              u_47 = ATgetFirst((ATermList) o_24);
              {
                ATerm p_24 = (ATerm) ATgetNext((ATermList) o_24);
                if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_47, not_null(s_47));
    t = conc_0_0(t);
    a_48 = t;
    t = (ATerm) ATinsert(ATempty, a_48);
    b_48 = t;
    t = SSL_mkterm(q_47, b_48);
    return(t);
  }
  t = SSL_explode_term(s_20);
  if(match_cons(t, sym__2))
    {
      if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_47 = ATgetArgument(t, 0);
      {
        ATerm q_24 = ATgetArgument(t, 1);
        if(((ATgetType(q_24) == AT_LIST) && !(ATisEmpty(q_24))))
          {
            if(((s_47 != NULL) && (s_47 != ATgetFirst((ATermList) q_24))))
              _fail(ATgetFirst((ATermList) q_24));
            else
              s_47 = ATgetFirst((ATermList) q_24);
            {
              ATerm r_24 = (ATerm) ATgetNext((ATermList) q_24);
              if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
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
  t = fetch_1_0(u_5, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,i_48 = NULL,j_48 = NULL;
  f_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_48;
      t = t_101(t);
    }
  else
    {
      ATerm m_48 = NULL,n_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_48 = ATgetFirst((ATermList) t);
          j_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_48;
      t = v_101(t);
      m_48 = t;
      t = j_48;
      t = foldr_3_0(t_101, u_101, v_101, t);
      n_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
      t = u_101(t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_24), term_t_24), term_s_24);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  if(match_cons(t, sym__2))
    {
      u_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(u_48, v_48, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  x_48 = t;
  if(match_cons(t, sym_Signature_1))
    {
      w_48 = ATgetArgument(t, 0);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_48 = NULL;
            t = w_48;
            t = filter_1_0(z_5, t);
            t = concat_0_0(t);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, z_48);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = x_48;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          w_48 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, w_48);
        }
      else
        {
          t = x_48;
        }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm c_49 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_49;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,g_12 = NULL;
  t_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  q_48 = t;
  t = r_48;
  t = foldr_3_0(w_5, x_5, y_5, t);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_48);
  g_12 = t;
  t = SSLsetAnnotations(g_12, q_48);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  i_51 = t;
  if(match_cons(t, sym_LRule_1))
    {
      h_51 = ATgetArgument(t, 0);
      t = h_51;
      if(match_cons(t, sym_Rule_3))
        {
          c_51 = ATgetArgument(t, 0);
          d_51 = ATgetArgument(t, 1);
          g_51 = ATgetArgument(t, 2);
          {
            ATerm a_25 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_51 = NULL;
                t = c_51;
                t = free_vars_3_0(c_6, e_6, tboundin_3_0, t);
                o_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_51, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_51, d_51, g_51)));
                LocalPopChoice(b_25);
              }
            else
              {
                t = a_25;
                t = i_51;
              }
          }
        }
      else
        {
          t = i_51;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          h_51 = ATgetArgument(t, 0);
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_53 = NULL;
                t = h_51;
                t = free_vars_3_0(j_6, k_6, tboundin_3_0, t);
                r_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_53, h_51);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = i_51;
              }
          }
        }
      else
        {
          t = i_51;
        }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm q_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_51);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm f_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = f_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_52 = ATgetArgument(t, 0);
                  c_52 = ATgetArgument(t, 1);
                  d_52 = ATgetArgument(t, 2);
                  e_52 = ATgetArgument(t, 3);
                  t = d_52;
                  t = map_1_0(f_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_52 = ATgetArgument(t, 0);
                      c_52 = ATgetArgument(t, 1);
                      d_52 = ATgetArgument(t, 2);
                      e_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_52;
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
  ATerm u_52 = NULL;
  ATerm n_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_52 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_25);
      t = u_52;
    }
  else
    {
      t = n_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_52;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm l_53 = NULL;
  ATerm t_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_53 = ATgetArgument(t, 0);
          {
            ATerm x_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_25);
      t = l_53;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_53;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_53);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm w_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_53 = ATgetArgument(t, 0);
                  y_53 = ATgetArgument(t, 1);
                  z_53 = ATgetArgument(t, 2);
                  a_54 = ATgetArgument(t, 3);
                  t = z_53;
                  t = map_1_0(l_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_53 = ATgetArgument(t, 0);
                      y_53 = ATgetArgument(t, 1);
                      z_53 = ATgetArgument(t, 2);
                      a_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_53;
                  t = map_1_0(m_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm j_54 = NULL;
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_54 = ATgetArgument(t, 0);
          {
            ATerm e_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_26);
      t = j_54;
    }
  else
    {
      t = c_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_54;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm s_54 = NULL;
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_54 = ATgetArgument(t, 0);
          {
            ATerm h_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_26);
      t = s_54;
    }
  else
    {
      t = f_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_54;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = Cons_2_0(p_6, q_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,y_12 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_55);
  a_55 = t;
  t = b_55;
  t = topdown_1_0(r_6, t);
  t = listtd_1_0(s_6, t);
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_55);
  y_12 = t;
  t = SSLsetAnnotations(y_12, a_55);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = repeat_2_0(w_6, _id, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_55 = ATgetFirst((ATermList) t);
      o_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_6(n_55, o_55, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_55 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      v_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, v_55)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,y_50 = NULL,z_50 = NULL,x_13 = NULL,k_13 = NULL,j_13 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(a_6, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(b_6, t);
  z_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_50);
  m_50 = t;
  t = n_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_50 = ATgetFirst((ATermList) t);
      s_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_50);
  q_50 = t;
  t = s_50;
  t = Cons_2_0(_id, n_6, t);
  t_50 = t;
  t = (ATerm) ATinsert(CheckATermList(t_50), r_50);
  j_13 = t;
  t = SSLsetAnnotations(j_13, q_50);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_50);
  k_13 = t;
  t = SSLsetAnnotations(k_13, m_50);
  t = topdown_1_0(y_6, t);
  l_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_50);
  i_50 = t;
  t = j_50;
  t = fetch_1_0(z_6, t);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_50);
  x_13 = t;
  t = SSLsetAnnotations(x_13, i_50);
  return(t);
}
static ATerm k_7 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm w_55 = NULL;
  t = SSL_fputc(p_38, q_38);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_55);
  return(t);
}
static ATerm l_7 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_write_term_to_stream_text(e_23, f_23);
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_56);
  return(t);
}
static ATerm n_7 (ATerm f_95 (ATerm), ATerm n_158, ATerm i_23, ATerm t)
{
  ATerm c_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_158, term_m_26);
  t = q_7(t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_56, i_23);
  t = f_95(t);
  t = fclose_0_0(t);
  t = i_23;
  return(t);
}
static ATerm m_7 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm f_56 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_56);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if(match_cons(n_26, sym_Stream_1))
        {
          m_56 = ATgetArgument(n_26, 0);
        }
      else
        _fail(t);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(m_56, n_56, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,t_56 = NULL,u_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(match_cons(o_26, sym_Stream_1))
        {
          t_56 = ATgetArgument(o_26, 0);
        }
      else
        _fail(t);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(t_56, u_56, t);
  p_56 = t;
  t = term_p_26;
  q_56 = t;
  t = p_56;
  if(match_cons(t, sym_Stream_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_26, p_56);
  t = k_7(q_56, r_56, t);
  return(t);
}
ATerm output_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm h_56 = NULL,l_56 = NULL;
  t = c_113(t);
  l_56 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_26;
        t = get_config_0_0(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = term_t_26;
      }
  }
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_56, l_56);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_26;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, h_56, l_56);
        LocalPopChoice(v_26);
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm y_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_7(b_7, h_56, l_56, t);
      }
    else
      {
        t = u_26;
        if(match_cons(t, sym__2))
          {
            ATerm z_26 = ATgetArgument(t, 0);
            ATerm a_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_7(c_7, h_56, l_56, t);
      }
  }
  return(t);
}
static ATerm t_57 (ATerm k_57, ATerm t)
{
  t = SSL_fclose(k_57);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  q_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_57 = ATgetArgument(t, 0);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_57);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = t_57(q_57, t);
          }
      }
    }
  else
    {
      t = t_57(q_57, t);
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
  ATerm w_57 = NULL;
  t = SSL_fopen(r_38, s_38);
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  t = SSL_stdin_stream();
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_stdout_stream();
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_58 = NULL;
  t = SSL_stderr_stream();
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_58);
  return(t);
}
static ATerm t_59 (ATerm l_58, ATerm t)
{
  ATerm m_58 = NULL;
  t = SSL_explode_term(l_58);
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
          {
            m_58 = ATgetFirst((ATermList) e_27);
            {
              ATerm f_27 = (ATerm) ATgetNext((ATermList) e_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_59 (ATerm p_58, ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm u_58 = NULL,x_58 = NULL,y_58 = NULL,c_59 = NULL,e_14 = NULL;
  t = SSLgetAnnotations(t_58);
  y_58 = t;
  t = p_58;
  if(match_cons(t, sym_Path_1))
    {
      c_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_59, s_58);
  e_14 = t;
  t = SSLsetAnnotations(e_14, y_58);
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(u_58, x_58, t);
  return(t);
}
static ATerm v_59 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,o_59 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(g_59);
  j_59 = t;
  t = SSL_is_string(e_59);
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_59, f_59);
  h_15 = t;
  t = SSLsetAnnotations(h_15, j_59);
  if(match_cons(t, sym__2))
    {
      h_59 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(h_59, i_59, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
  q_59 = t;
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_59(q_59, t);
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_59(r_59, s_59, q_59, t);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  t = v_59(r_59, s_59, q_59, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_59(q_59, t);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_59 = NULL;
      z_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_59, term_n_27);
      t = q_7(t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = debug_1_0(t_7, t);
      _fail(t);
    }
  x_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(y_59, t);
  w_59 = t;
  t = x_59;
  t = fclose_0_0(t);
  t = w_59;
  return(t);
}
ATerm input_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_27;
      t = get_config_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      t = term_r_27;
    }
  t = ReadFromFile_0_0(t);
  t = d_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
  b_60 = t;
  t = term_s_27;
  t = whoami_0_0(t);
  c_60 = t;
  t = term_n_11;
  f_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_27), c_60), term_t_27);
  g_60 = t;
  t = SSL_printnl(f_60, g_60);
  t = term_p_11;
  e_60 = t;
  t = SSL_exit(e_60);
  t = b_60;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_60 = NULL;
  i_60 = t;
  if(match_string(t, "-k"))
    {
      t = i_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_60;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
  j_60 = t;
  t = SSL_string_to_int(j_60);
  k_60 = t;
  t = term_v_27;
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_27, k_60);
  t = y_7(l_60, k_60, t);
  t = j_60;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, z_7, a_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  if(match_string(t, "-S"))
    {
      t = p_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_60;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  t = term_x_27;
  q_60 = t;
  t = term_y_27;
  r_60 = t;
  t = term_z_27;
  t = y_7(q_60, r_60, t);
  t = term_a_28;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm s_60 = NULL,u_60 = NULL,v_60 = NULL;
  s_60 = t;
  t = SSL_string_to_int(s_60);
  u_60 = t;
  t = term_x_27;
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, u_60);
  t = y_7(v_60, u_60, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_60);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm w_60 = NULL,y_60 = NULL;
  t = term_d_28;
  w_60 = t;
  t = term_s_27;
  y_60 = t;
  t = term_e_28;
  t = y_7(w_60, y_60, t);
  t = term_f_28;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_8, c_8, d_8, t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_8, f_8, g_8, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = Option_3_0(h_8, j_8, k_8, t);
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm z_60 = NULL;
  t = term_l_28;
  z_60 = t;
  t = SSL_table_put(z_60, m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_28, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_61 = NULL,n_61 = NULL,o_61 = NULL;
      t = term_s_27;
      t = e_0(t);
      g_61 = t;
      t = term_m_28;
      n_61 = t;
      t = term_n_28;
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, g_61);
      t = w_7(n_61, o_61, g_61, t);
      _fail(t);
    }
  else
    {
      ATerm s_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_61 = ATgetFirst((ATermList) t);
          f_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_61;
      t = c_0(t);
      t = term_s_27;
      t = d_0(t);
      s_61 = t;
      t = (ATerm) ATinsert(CheckATermList(f_61), s_61);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm u_61 = NULL;
  u_61 = t;
  if(match_string(t, "-o"))
    {
      t = u_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_61;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm v_61 = NULL,x_61 = NULL;
  v_61 = t;
  t = term_s_26;
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_26, v_61);
  t = y_7(x_61, v_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_61);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
static ATerm w_7 (ATerm m_52, ATerm n_52, ATerm l_52, ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            ATerm s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
        t = v_7(m_52, n_52, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATempty;
      }
  }
  c_62 = t;
  t = (ATerm) ATinsert(CheckATermList(c_62), l_52);
  d_62 = t;
  t = SSL_table_put(m_52, n_52, d_62);
  t = b_62;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
      t = term_s_27;
      t = n_0(t);
      j_63 = t;
      t = term_m_28;
      k_63 = t;
      t = term_n_28;
      l_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, j_63);
      t = w_7(k_63, l_63, j_63, t);
      _fail(t);
    }
  else
    {
      ATerm s_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_63 = ATgetFirst((ATermList) t);
          g_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_63 = ATgetFirst((ATermList) t);
          i_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_63;
      t = k_0(t);
      t = h_63;
      t = l_0(t);
      s_63 = t;
      t = (ATerm) ATinsert(CheckATermList(i_63), s_63);
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  if(match_string(t, "-i"))
    {
      t = v_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_63;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL;
  y_63 = t;
  t = term_q_27;
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, y_63);
  t = y_7(z_63, y_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_63);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, s_8, t_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,h_64 = NULL,k_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_27;
  t = whoami_0_0(t);
  a_64 = t;
  t = term_n_11;
  h_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_28), a_64);
  k_64 = t;
  t = SSL_printnl(h_64, k_64);
  t = term_p_11;
  b_64 = t;
  t = SSL_exit(b_64);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm r_7 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_41, m_41);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = SSL_addr(l_41, m_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_64;
      t = r_101(t);
    }
  else
    {
      ATerm t_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_64 = ATgetFirst((ATermList) t);
          o_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_64;
      t = foldr_2_0(r_101, s_101, t);
      t_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_64, t_64);
      t = s_101(t);
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
  t = term_y_27;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(z_20, a_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_64 = NULL,u_20 = NULL,v_20 = NULL;
  t = times_0_0(t);
  v_20 = t;
  t = SSL_explode_term(v_20);
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_20;
  t = foldr_2_0(u_8, v_8, t);
  w_64 = t;
  t = SSL_TicksToSeconds(w_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_65 = NULL,v_66 = NULL,w_66 = NULL;
  v_65 = t;
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_66;
        if((v_66 != t))
          {
            _fail(t);
          }
        t = v_65;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_66, w_66);
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = SSL_gtr(v_66, w_66);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_67 = NULL;
        t = term_x_27;
        t = get_config_0_0(t);
        i_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_67, term_p_11);
        t = geq_0_0(t);
        t = b_67;
        t = d_110(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = b_67;
      }
  }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,n_67 = NULL,o_67 = NULL;
  t = run_time_0_0(t);
  k_67 = t;
  t = term_s_27;
  t = whoami_0_0(t);
  l_67 = t;
  t = term_n_11;
  n_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_29), k_67), term_l_29), l_67);
  o_67 = t;
  t = SSL_printnl(n_67, o_67);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_29), k_67), term_l_29), l_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_27;
  p_67 = t;
  t = SSL_exit(p_67);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  y_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_67 = ATgetArgument(t, 0);
          {
            ATerm n_21 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(y_67);
            n_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_67);
            t_15 = t;
            t = SSLsetAnnotations(t_15, n_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_112 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_29;
      t = get_config_0_0(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = fetch_1_0(b_9, t);
    }
  t = t_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_68 = ATgetFirst((ATermList) t);
      c_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_68 = NULL,h_68 = NULL;
        static ATerm c_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_68)), not_null(h_68));
          return(t);
        }
        t = c_68;
        t = i_0(t);
        if(((g_68 != NULL) && (g_68 != t)))
          _fail(t);
        else
          g_68 = t;
        t = b_68;
        t = g_0(t);
        if(((h_68 != NULL) && (h_68 != t)))
          _fail(t);
        else
          h_68 = t;
        t = c_68;
        t = reverse_acc_2_0(g_0, c_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,d_16 = NULL;
  n_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_68);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_68);
  d_16 = t;
  t = SSLsetAnnotations(d_16, l_68);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm p_68 = NULL;
  p_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_68), term_q_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL;
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_28;
      t = get_config_0_0(t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = fetch_1_0(d_9, t);
    }
  t = term_t_29;
  t = echo_0_0(t);
  t = term_m_28;
  j_68 = t;
  t = term_n_28;
  k_68 = t;
  t = term_u_29;
  t = v_7(j_68, k_68, t);
  t = reverse_acc_2_0(_id, e_9, t);
  t = map_1_0(f_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  static ATerm o_69 (ATerm t)
  {
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
    l_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_69 = ATgetFirst((ATermList) t);
        n_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_22 = NULL,n_22 = NULL,f_16 = NULL;
          t = SSLgetAnnotations(l_69);
          k_22 = t;
          t = m_69;
          t = y_95(t);
          n_22 = t;
          t = (ATerm) ATinsert(CheckATermList(n_69), n_22);
          f_16 = t;
          t = SSLsetAnnotations(f_16, k_22);
          LocalPopChoice(w_29);
        }
      else
        {
          t = v_29;
          {
            ATerm c_23 = NULL,k_23 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(l_69);
            c_23 = t;
            t = n_69;
            t = o_69(t);
            k_23 = t;
            t = (ATerm) ATinsert(CheckATermList(k_23), m_69);
            m_16 = t;
            t = SSLsetAnnotations(m_16, c_23);
          }
        }
    }
    return(t);
  }
  t = o_69(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  s_69 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_29 = ATgetFirst((ATermList) t);
                ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_69;
          }
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATinsert(ATempty, s_69);
      }
  }
  t_69 = t;
  t = term_t_26;
  u_69 = t;
  t = SSL_printnl(u_69, t_69);
  t = s_69;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_28;
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
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL;
  y_69 = t;
  t = d_95(t);
  z_69 = t;
  t = term_n_11;
  a_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_69), z_69);
  b_70 = t;
  t = SSL_printnl(a_70, b_70);
  t = y_69;
  return(t);
}
ATerm map_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  static ATerm q_70 (ATerm t)
  {
    ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
    n_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_70;
      }
    else
      {
        ATerm u_23 = NULL,x_23 = NULL,y_23 = NULL,q_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_70 = ATgetFirst((ATermList) t);
            p_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_70);
        u_23 = t;
        t = o_70;
        t = o_95(t);
        x_23 = t;
        t = p_70;
        t = q_70(t);
        y_23 = t;
        t = (ATerm) ATinsert(CheckATermList(y_23), x_23);
        q_16 = t;
        t = SSLsetAnnotations(q_16, u_23);
      }
    return(t);
  }
  t = q_70(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_70 = NULL;
      y_70 = t;
      t = SSL_is_string(y_70);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_9, t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
              e_71 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_71 = ATgetArgument(t, 0);
                  t = f_71;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_71 = ATgetArgument(t, 0);
                      t = f_71;
                      {
                        ATerm j_30 = t;
                        int k_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_30);
                          }
                        else
                          {
                            t = j_30;
                            t = debug_1_0(h_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_71 = NULL,l_71 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_71 = ATgetArgument(t, 0);
                          g_71 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_71;
                      t = eval_config_0_0(t);
                      k_71 = t;
                      t = g_71;
                      t = eval_config_0_0(t);
                      l_71 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_71, l_71);
                      t = u_7(k_71, l_71, t);
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
  ATerm p_71 = NULL,q_71 = NULL;
  p_71 = t;
  t = term_l_28;
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_28, p_71);
  t = v_7(q_71, p_71, t);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_71 = NULL,s_71 = NULL;
        t = eval_config_0_0(t);
        r_71 = t;
        t = term_l_28;
        s_71 = t;
        t = SSL_table_put(s_71, p_71, r_71);
        t = r_71;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
      }
  }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL;
  t = term_r_30;
  v_71 = t;
  t = term_s_27;
  w_71 = t;
  t = term_s_30;
  t = y_7(v_71, w_71, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_t_30;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
  t = term_r_30;
  z_71 = t;
  t = term_s_27;
  a_72 = t;
  t = term_s_30;
  t = y_7(z_71, a_72, t);
  t = term_u_30;
  x_71 = t;
  t = term_s_27;
  y_71 = t;
  t = term_v_30;
  t = y_7(x_71, y_71, t);
  t = term_w_30;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_9, l_9, m_9, t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = Option_3_0(n_9, o_9, p_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,v_17 = NULL;
  g_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_72 = ATgetFirst((ATermList) t);
      d_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_72);
  b_72 = t;
  t = c_72;
  t = m_74(t);
  e_72 = t;
  t = d_72;
  t = n_74(t);
  f_72 = t;
  t = (ATerm) ATinsert(CheckATermList(f_72), e_72);
  v_17 = t;
  t = SSLsetAnnotations(v_17, b_72);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,q_72 = NULL,r_72 = NULL,w_20 = NULL;
  l_72 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = w_114(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
  }
  t = l_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_72 = ATgetFirst((ATermList) t);
      o_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_72);
  m_72 = t;
  t = term_z_28;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, n_72);
  t = y_7(r_72, n_72, t);
  t = o_72;
  {
    static ATerm b_73 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_72 = NULL;
              u_72 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_72;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              t = w_114(t);
              t = Cons_2_0(_id, b_73, t);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm x_72 = NULL,y_72 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_72 = ATgetFirst((ATermList) t);
                y_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_72), (ATerm) ATmakeAppl(sym_Undefined_1, x_72));
          }
        }
      return(t);
    }
    t = b_73(t);
  }
  q_72 = t;
  t = (ATerm) ATinsert(CheckATermList(q_72), (ATerm) ATmakeAppl(sym_Program_1, n_72));
  w_20 = t;
  t = SSLsetAnnotations(w_20, m_72);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm n_73 = NULL;
  n_73 = t;
  if(match_string(t, "--help"))
    {
      t = n_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_73;
        }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  t = term_p_29;
  o_73 = t;
  t = term_s_27;
  p_73 = t;
  t = term_h_31;
  t = y_7(o_73, p_73, t);
  t = term_i_31;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  i_73 = t;
  t = term_m_28;
  k_73 = t;
  t = term_n_28;
  l_73 = t;
  t = (ATerm) ATempty;
  m_73 = t;
  t = SSL_table_put(k_73, l_73, m_73);
  t = i_73;
  {
    static ATerm r_9 (ATerm t)
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_114(t);
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          {
            ATerm n_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_9, u_9, v_9, t);
                LocalPopChoice(p_31);
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
    t = parse_options_p__1_0(r_9, t);
  }
  {
    ATerm r_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_73 = NULL;
        w_73 = t;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_25 = NULL;
              t = w_73;
              {
                ATerm x_31 = t;
                int z_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_31);
                  }
                else
                  {
                    t = x_31;
                    t = fetch_1_0(w_9, t);
                  }
              }
              t = w_73;
              t = default_system_usage_0_0(t);
              t = term_y_27;
              g_25 = t;
              t = SSL_exit(g_25);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              {
                ATerm p_25 = NULL;
                t = term_r_30;
                t = get_config_0_0(t);
                t = w_73;
                t = default_system_about_0_0(t);
                t = term_y_27;
                p_25 = t;
                t = SSL_exit(p_25);
              }
            }
        }
        LocalPopChoice(u_31);
      }
    else
      {
        t = r_31;
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
              static ATerm x_9 (ATerm t)
              {
                ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,v_24 = NULL;
                c_74 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_74 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_74);
                a_74 = t;
                t = b_74;
                if(((g_73 != NULL) && (g_73 != t)))
                  _fail(t);
                else
                  g_73 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_74);
                v_24 = t;
                t = SSLsetAnnotations(v_24, a_74);
                return(t);
              }
              t = fetch_1_0(x_9, t);
              t = term_n_11;
              y_73 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_73)), term_c_32);
              z_73 = t;
              t = SSL_printnl(y_73, z_73);
              t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_73)), term_c_32));
              t = default_system_usage_0_0(t);
              t = term_p_11;
              x_73 = t;
              t = SSL_exit(x_73);
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
            }
        }
      }
  }
  h_73 = t;
  t = term_m_28;
  j_73 = t;
  t = SSL_table_destroy(j_73);
  t = h_73;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  t = parse_options_1_0(v_112, t);
  h_74 = t;
  t = term_d_32;
  k_74 = t;
  t = SSL_table_create(k_74);
  t = term_d_32;
  i_74 = t;
  t = term_e_32;
  j_74 = t;
  t = SSL_table_put(i_74, j_74, h_74);
  t = h_74;
  t = x_112(t);
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_112, t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm m_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_32);
          }
        else
          {
            t = m_32;
            {
              ATerm o_32 = t;
              int p_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_10, e_10, g_10, t);
                  LocalPopChoice(p_32);
                }
              else
                {
                  t = o_32;
                  {
                    ATerm q_32 = t;
                    int r_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_32);
                      }
                    else
                      {
                        t = q_32;
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
static ATerm d_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL;
  t = term_w_26;
  o_74 = t;
  t = term_s_27;
  p_74 = t;
  t = term_s_32;
  t = y_7(o_74, p_74, t);
  t = term_t_32;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_u_32;
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
