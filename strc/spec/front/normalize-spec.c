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
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Sort_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_e_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_z_19;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
void init_constant_terms (void)
{
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_f_11, (ATerm) ATempty);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Op_2, term_y_11, (ATerm) ATempty);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_15);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_17);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_20);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_w_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_p_26);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_27);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_p_26);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_w_29, term_p_26);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_p_26);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_p_26);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm map1_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm a_0 (ATerm);
ATerm h_0 (ATerm);
ATerm j_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm c_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm m_2 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm o_85 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm split_dynamic_rule_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm def_tvars_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm o_6 (ATerm x_62, ATerm w_62, ATerm);
ATerm repeat_1_0 (ATerm m_83 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm t_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm u_6 (ATerm f_94 (ATerm), ATerm c_26, ATerm b_26, ATerm);
ATerm v_6 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm g_26, ATerm f_26, ATerm);
ATerm w_6 (ATerm a_94 (ATerm), ATerm a_26, ATerm z_25, ATerm);
ATerm genzip_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm a_7 (ATerm d_574, ATerm i_574, ATerm w_53, ATerm);
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm j_5 (ATerm);
ATerm w_41 (ATerm h_39, ATerm i_39, ATerm j_39, ATerm);
ATerm k_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm free_vars_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm e_7 (ATerm v_49, ATerm w_49, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm f_7 (ATerm f_101 (ATerm), ATerm j_38, ATerm h_38, ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm g_7 (ATerm p_49, ATerm q_49, ATerm);
ATerm end_scope_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm k_48 (ATerm c_48, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_7 (ATerm q_114, ATerm m_114, ATerm);
ATerm foldr_3_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm k_7 (ATerm v_39, ATerm w_39, ATerm);
ATerm l_7 (ATerm j_43, ATerm k_43, ATerm);
ATerm n_7 (ATerm y_102 (ATerm), ATerm n_418, ATerm n_43, ATerm);
ATerm m_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm f_57 (ATerm u_56, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_7 (ATerm l_43, ATerm);
ATerm p_7 (ATerm x_39, ATerm y_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_60 (ATerm v_57, ATerm);
ATerm g_60 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm);
ATerm p_60 (ATerm n_58, ATerm o_58, ATerm q_58, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_7 (ATerm m_44, ATerm n_44, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_7 (ATerm k_49, ATerm l_49, ATerm j_49, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_7 (ATerm v_36, ATerm w_36, ATerm);
ATerm foldr_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_7 (ATerm l_34, ATerm m_34, ATerm);
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm z_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm u_7 (ATerm b_51, ATerm c_51, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm map1_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,x_0 = NULL,b_1 = NULL,z_0 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(j_2);
        u_0 = t;
        t = k_2;
        t = r_0(t);
        x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(l_2), x_0);
        y_0 = t;
        t = SSLsetAnnotations(y_0, u_0);
        b_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_0 = ATgetFirst((ATermList) t);
            s_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_1);
        o_0 = t;
        t = s_0;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(r_0, t);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
            }
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), q_0);
          z_0 = t;
          t = SSLsetAnnotations(z_0, o_0);
        }
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm s_1 = NULL,g_2 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(j_2);
          s_1 = t;
          t = l_2;
          t = map1_1_0(r_0, t);
          g_2 = t;
          t = (ATerm) ATinsert(CheckATermList(g_2), k_2);
          a_1 = t;
          t = SSLsetAnnotations(a_1, s_1);
        }
      }
  }
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm q_4 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_4, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_11), term_i_11));
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_4 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_4, term_i_11);
    }
  else
    {
      t = s_4;
    }
  return(t);
}
ATerm j_0 (ATerm t)
{
  ATerm g_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_5, term_i_11);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  i_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_5 = ATgetArgument(t, 0);
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_11), term_i_11));
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = i_5;
          }
      }
    }
  else
    {
      t = i_5;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm u_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_11), term_i_11));
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_5 = NULL,x_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_5, term_i_11);
    }
  else
    {
      t = x_5;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_3, p_3);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_3 = ATgetArgument(t, 0);
          t = o_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_3 = ATgetFirst((ATermList) t);
              e_3 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_3, (ATerm) ATmakeAppl(sym_LChoices_1, e_3));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_11;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_3 = ATgetArgument(t, 0);
              t = o_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_3 = ATgetFirst((ATermList) t);
                  e_3 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_3, (ATerm) ATmakeAppl(sym_Choices_1, e_3));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_11;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_3 = ATgetArgument(t, 0);
                  t = o_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_3 = ATgetFirst((ATermList) t);
                      e_3 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_3, (ATerm) ATmakeAppl(sym_Seqs_1, e_3));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_n_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_3 = ATgetArgument(t, 0);
                      p_3 = ATgetArgument(t, 1);
                      g_3 = ATgetArgument(t, 2);
                      f_3 = ATgetArgument(t, 3);
                      {
                        ATerm m_4 = NULL,p_4 = NULL;
                        t = p_3;
                        t = map1_1_0(a_0, t);
                        m_4 = t;
                        t = g_3;
                        t = map1_1_0(h_0, t);
                        p_4 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, o_3, m_4, p_4, f_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          o_3 = ATgetArgument(t, 0);
                          p_3 = ATgetArgument(t, 1);
                          g_3 = ATgetArgument(t, 2);
                          f_3 = ATgetArgument(t, 3);
                          {
                            ATerm o_11 = t;
                            int p_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_5 = NULL,e_5 = NULL;
                                t = g_3;
                                t = map1_1_0(j_0, t);
                                c_5 = t;
                                t = p_3;
                                t = map_1_0(v_0, t);
                                e_5 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_3, e_5, c_5, f_3);
                                ;
                                LocalPopChoice(p_11);
                              }
                            else
                              {
                                t = o_11;
                                {
                                  ATerm r_5 = NULL,t_5 = NULL;
                                  t = p_3;
                                  t = map1_1_0(w_0, t);
                                  r_5 = t;
                                  t = g_3;
                                  t = map_1_0(c_1, t);
                                  t_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_3, r_5, t_5, f_3);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              o_3 = ATgetArgument(t, 0);
                              p_3 = ATgetArgument(t, 1);
                              g_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, p_3, (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, g_3), o_3)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  o_3 = ATgetArgument(t, 0);
                                  p_3 = ATgetArgument(t, 1);
                                  g_3 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, g_3)), o_3), (ATerm) ATmakeAppl(sym_Build_1, p_3)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      o_3 = ATgetArgument(t, 0);
                                      p_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_3, (ATerm) ATmakeAppl(sym_Match_1, p_3));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          o_3 = ATgetArgument(t, 0);
                                          p_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_3), p_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              o_3 = ATgetArgument(t, 0);
                                              p_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_3), o_3);
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
ATerm topdown_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = topdown_1_0(k_84, t);
    return(t);
  }
  t = k_84(t);
  t = SRTS_all(d_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL;
  r_9 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_11);
        t = r_9;
        {
          ATerm u_11 = t;
          if((PushChoice() == 0))
            {
              ATerm w_2 = NULL,x_2 = NULL,a_3 = NULL;
              x_2 = t;
              if(match_cons(t, sym_Var_1))
                {
                  w_2 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_v_11;
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_11, x_2);
              t = e_7(a_3, x_2, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm x_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_11) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, w_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_11;
            }
          t = term_z_11;
        }
      }
    else
      {
        t = r_11;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_z_11;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                u_9 = ATgetArgument(t, 0);
                {
                  ATerm d_10 = NULL;
                  t = u_9;
                  t = free_vars_3_0(f_1, g_1, tboundin_3_0, t);
                  t = map_1_0(k_1, t);
                  d_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_12, d_10);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    u_9 = ATgetArgument(t, 0);
                    v_9 = ATgetArgument(t, 1);
                    {
                      ATerm l_12 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                      t = free_vars_3_0(l_1, n_1, tboundin_3_0, t);
                      t = map_1_0(r_1, t);
                      l_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_a_12, l_12);
                    }
                  }
                else
                  {
                    ATerm c_3 = NULL,h_3 = NULL,i_3 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm c_12 = ATgetArgument(t, 0);
                        ATerm d_12 = ATgetArgument(t, 1);
                        ATerm e_12 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_g_12;
                    h_3 = t;
                    t = (ATerm) ATinsert(ATempty, term_h_12);
                    i_3 = t;
                    t = SSL_printnl(h_3, i_3);
                    t = term_j_12;
                    c_3 = t;
                    t = SSL_exit(c_3);
                    t = (ATerm) ATinsert(ATempty, term_h_12);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm e_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_10);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm k_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = k_12;
      {
        ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_10 = ATgetArgument(t, 0);
            t = m_10;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_10 = ATgetArgument(t, 0);
                n_10 = ATgetArgument(t, 1);
                o_10 = ATgetArgument(t, 2);
                p_10 = ATgetArgument(t, 3);
                t = o_10;
                t = map_1_0(h_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_10 = ATgetArgument(t, 0);
                    n_10 = ATgetArgument(t, 1);
                    o_10 = ATgetArgument(t, 2);
                    p_10 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_10;
                t = map_1_0(j_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_11 = ATgetArgument(t, 0);
          {
            ATerm x_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = g_11;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_11;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_12 = NULL;
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_12 = ATgetArgument(t, 0);
          {
            ATerm a_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_12);
      t = b_12;
    }
  else
    {
      t = y_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_12;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm m_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_12);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_12 = ATgetArgument(t, 0);
            t = o_12;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_12 = ATgetArgument(t, 0);
                p_12 = ATgetArgument(t, 1);
                q_12 = ATgetArgument(t, 2);
                r_12 = ATgetArgument(t, 3);
                t = q_12;
                t = map_1_0(p_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_12 = ATgetArgument(t, 0);
                    p_12 = ATgetArgument(t, 1);
                    q_12 = ATgetArgument(t, 2);
                    r_12 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_12;
                t = map_1_0(q_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm g_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_13);
      t = f_13;
    }
  else
    {
      t = d_13;
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
ATerm q_1 (ATerm t)
{
  ATerm w_13 = NULL;
  ATerm h_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm m_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = w_13;
    }
  else
    {
      t = h_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_13;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(e_1, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm o_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_17);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_17 = ATgetArgument(t, 0);
            t = q_17;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_17 = ATgetArgument(t, 0);
                r_17 = ATgetArgument(t, 1);
                s_17 = ATgetArgument(t, 2);
                t_17 = ATgetArgument(t, 3);
                t = s_17;
                t = map_1_0(x_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_17 = ATgetArgument(t, 0);
                    r_17 = ATgetArgument(t, 1);
                    s_17 = ATgetArgument(t, 2);
                    t_17 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_17;
                t = map_1_0(y_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_18 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_18 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = h_18;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_18;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_13);
      t = g_19;
    }
  else
    {
      t = x_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm k_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_19);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm d_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = d_14;
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_19 = ATgetArgument(t, 0);
            t = o_19;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_19 = ATgetArgument(t, 0);
                p_19 = ATgetArgument(t, 1);
                q_19 = ATgetArgument(t, 2);
                r_19 = ATgetArgument(t, 3);
                t = q_19;
                t = map_1_0(f_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_19 = ATgetArgument(t, 0);
                    p_19 = ATgetArgument(t, 1);
                    q_19 = ATgetArgument(t, 2);
                    r_19 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_19;
                t = map_1_0(h_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm d_20 = NULL;
  ATerm i_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_20 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_14);
      t = d_20;
    }
  else
    {
      t = i_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm s_20 = NULL;
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_20 = ATgetArgument(t, 0);
          {
            ATerm p_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_14);
      t = s_20;
    }
  else
    {
      t = n_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm a_21 = NULL,j_3 = NULL,k_3 = NULL;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_21);
  j_3 = t;
  t = term_v_11;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATmakeAppl(sym_Var_1, a_21));
  t = e_7(k_3, j_3, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, a_21);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_22 (ATerm c_16, ATerm d_16, ATerm e_16, ATerm f_16, ATerm g_16, ATerm h_16, ATerm i_16, ATerm t)
  {
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,c_17 = NULL,d_17 = NULL,f_17 = NULL,g_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, g_16, term_s_14);
    {
      ATerm t_14 = t;
      if((PushChoice() == 0))
        {
          ATerm h_17 = NULL;
          if(match_cons(t, sym__2))
            {
              h_17 = ATgetArgument(t, 0);
              if((h_17 != ATgetArgument(t, 1)))
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
          t = t_14;
        }
      t = new_0_0(t);
      t_16 = t;
      t = f_16;
      t = dummify_0_0(t);
      v_16 = t;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_16;
            if((f_16 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, t_16);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = v_16;
          }
        u_16 = t;
        t = v_16;
        t = free_vars_3_0(v_1, w_1, tboundin_3_0, t);
        t = map_1_0(a_2, t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_16, h_16);
        t = free_vars_3_0(b_2, d_2, tboundin_3_0, t);
        t = filter_1_0(m_2, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, c_17);
        t = diff_0_0(t);
        d_17 = t;
        t = new_0_0(t);
        f_17 = t;
        t = c_16;
        t = p_0(t);
        g_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_17, (ATerm) ATmakeAppl(sym_Op_2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, f_17)))), v_16)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_16, d_16, e_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_16), f_16), g_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_16)))), u_16), (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, f_17)))), h_16))));
      }
    }
    return(t);
  }
  ATerm b_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,q_21 = NULL,r_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,a_22 = NULL;
  j_21 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      k_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      r_21 = ATgetArgument(t, 2);
      u_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_21;
  if(match_cons(t, sym_Rule_3))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      a_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_21;
  if(match_cons(t, sym_Op_2))
    {
      b_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
      t = i_21;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_21;
          if(match_string(t, "Undefined"))
            {
              ATerm e_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_4 = NULL,o_4 = NULL,u_4 = NULL,v_4 = NULL;
                  t = j_21;
                  t = new_0_0(t);
                  o_4 = t;
                  t = v_21;
                  t = dummify_0_0(t);
                  f_4 = t;
                  {
                    ATerm h_15 = t;
                    int i_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_4;
                        if((v_21 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_4);
                        ;
                        LocalPopChoice(i_15);
                      }
                    else
                      {
                        t = h_15;
                        t = f_4;
                      }
                    u_4 = t;
                    t = k_21;
                    t = p_0(t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_4, (ATerm) ATmakeAppl(sym_Op_2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, term_s_14), f_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_21, q_21, r_21, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_4), v_21), term_s_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_21)))), u_4), term_s_14), (ATerm) ATmakeAppl(sym_Seq_2, a_22, term_l_11)))));
                  }
                  ;
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = e_15;
                  t = d_22(k_21, q_21, r_21, v_21, w_21, a_22, j_21, t);
                }
            }
          else
            {
              t = d_22(k_21, q_21, r_21, v_21, w_21, a_22, j_21, t);
            }
        }
      else
        {
          t = b_21;
          t = d_22(k_21, q_21, r_21, v_21, w_21, a_22, j_21, t);
        }
    }
  else
    {
      t = d_22(k_21, q_21, r_21, v_21, w_21, a_22, j_21, t);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_22))));
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_15;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,b_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      if(match_cons(q_15, sym__2))
        {
          v_22 = ATgetArgument(q_15, 0);
          w_22 = ATgetArgument(q_15, 1);
        }
      else
        _fail(t);
      {
        ATerm s_15 = ATgetArgument(t, 1);
        if(match_cons(s_15, sym__2))
          {
            b_23 = ATgetArgument(s_15, 0);
            c_23 = ATgetArgument(s_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_23), v_22), (ATerm) ATinsert(CheckATermList(c_23), w_22));
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_23))));
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_15;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_23 = ATgetFirst((ATermList) t);
      h_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(match_cons(v_15, sym__2))
        {
          i_23 = ATgetArgument(v_15, 0);
          j_23 = ATgetArgument(v_15, 1);
        }
      else
        _fail(t);
      {
        ATerm w_15 = ATgetArgument(t, 1);
        if(match_cons(w_15, sym__2))
          {
            k_23 = ATgetArgument(w_15, 0);
            r_23 = ATgetArgument(w_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_23), i_23), (ATerm) ATinsert(CheckATermList(r_23), j_23));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      o_22 = ATgetArgument(t, 0);
      t = o_22;
      t = map_1_0(o_2, t);
      t = genzip_4_0(q_2, r_2, s_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          o_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_22;
      t = map_1_0(v_2, t);
      t = genzip_4_0(z_2, l_3, m_3, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm w_23 (ATerm t)
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = SRTS_one(w_23, t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_24);
  k_24 = t;
  t = term_a_16;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_24), term_a_16);
  t = f_7(t_3, k_24, l_24, t);
  t = j_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      ATerm b_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_112(t);
          ;
          LocalPopChoice(j_16);
        }
      else
        {
          t = b_16;
          {
            ATerm z_23 = NULL,a_24 = NULL,i_24 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                z_23 = ATgetArgument(t, 0);
                a_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_23, a_24);
            {
              ATerm r_3 (ATerm t)
              {
                t = z_23;
                t = map_1_0(s_3, t);
                t = a_24;
                t = m_24(t);
                if(((i_24 != NULL) && (i_24 != t)))
                  _fail(t);
                else
                  i_24 = t;
                return(t);
              }
              t = scope_2_0(q_3, r_3, t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_23, not_null(i_24));
            }
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_3, t);
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm k_25 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_25 = ATgetArgument(t, 0);
      t = k_25;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_25 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_25;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm o_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_25);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm m_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = m_16;
      {
        ATerm t_25 = NULL,v_25 = NULL,e_26 = NULL,j_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_25 = ATgetArgument(t, 0);
            t = t_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_25 = ATgetArgument(t, 0);
                v_25 = ATgetArgument(t, 1);
                e_26 = ATgetArgument(t, 2);
                j_26 = ATgetArgument(t, 3);
                t = e_26;
                t = map_1_0(x_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_25 = ATgetArgument(t, 0);
                    v_25 = ATgetArgument(t, 1);
                    e_26 = ATgetArgument(t, 2);
                    j_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_26;
                t = map_1_0(y_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = t_26;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm k_27 = NULL;
  ATerm s_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_27 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = k_27;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_27;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      if((s_27 != ATgetArgument(t, 1)))
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
  ATerm b_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  h_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      ATerm a_17 = ATgetArgument(t, 1);
      i_25 = ATgetArgument(t, 2);
      {
        ATerm b_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = i_25;
  t = map_1_0(u_3, t);
  b_25 = t;
  t = h_25;
  t = free_vars_3_0(v_3, w_3, tboundin_3_0, t);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_25, g_25);
  t = u_6(z_3, b_25, g_25, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,k_28 = NULL;
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_28);
  d_28 = t;
  t = term_a_16;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_28), term_a_16);
  t = f_7(d_4, d_28, k_28, t);
  t = c_28;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm o_6 (ATerm x_62, ATerm w_62, ATerm t)
{
  ATerm w_27 = NULL,z_27 = NULL,a_28 = NULL;
  ATerm b_4 (ATerm t)
  {
    t = x_62;
    t = def_tvars_0_0(t);
    t = map_1_0(c_4, t);
    t = x_62;
    {
      ATerm e_4 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              z_27 = ATgetArgument(t, 0);
            if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              w_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, z_27);
        return(t);
      }
      t = split_dynamic_rule_1_0(e_4, t);
      if(((a_28 != NULL) && (a_28 != t)))
        _fail(t);
      else
        a_28 = t;
    }
    return(t);
  }
  t = scope_2_0(a_4, b_4, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_27)), not_null(a_28)), w_62);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm u_28 (ATerm t)
  {
    ATerm e_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        t = u_28(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = e_17;
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm listtd_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm q_29 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
    t = k_91(t);
    n_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_29;
      }
    else
      {
        ATerm h_6 = NULL,n_6 = NULL,i_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_29 = ATgetFirst((ATermList) t);
            p_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_29);
        h_6 = t;
        t = p_29;
        t = q_29(t);
        n_6 = t;
        t = (ATerm) ATinsert(CheckATermList(n_6), o_29);
        i_1 = t;
        t = SSLsetAnnotations(i_1, h_6);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_29 = ATgetFirst((ATermList) t);
      v_29 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, v_29, y_29)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_29))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_29;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
      {
        ATerm b_7 = NULL,h_7 = NULL,i_7 = NULL,m_1 = NULL;
        t = SSLgetAnnotations(e_32);
        b_7 = t;
        t = f_32;
        t = t_112(t);
        h_7 = t;
        t = b_32;
        t = r_112(t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_7, i_7);
        m_1 = t;
        t = SSLsetAnnotations(m_1, b_7);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_32 = ATgetArgument(t, 0);
          b_32 = ATgetArgument(t, 1);
          c_32 = ATgetArgument(t, 2);
          d_32 = ATgetArgument(t, 3);
          {
            ATerm f_8 = NULL,n_8 = NULL,q_8 = NULL,t_8 = NULL,u_8 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(e_32);
            f_8 = t;
            t = f_32;
            t = t_112(t);
            n_8 = t;
            t = b_32;
            t = t_112(t);
            q_8 = t;
            t = c_32;
            t = t_112(t);
            t_8 = t;
            t = d_32;
            t = r_112(t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_8, q_8, t_8, u_8);
            o_1 = t;
            t = SSLsetAnnotations(o_1, f_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              f_32 = ATgetArgument(t, 0);
              b_32 = ATgetArgument(t, 1);
              c_32 = ATgetArgument(t, 2);
              d_32 = ATgetArgument(t, 3);
              {
                ATerm g_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,y_9 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(e_32);
                g_9 = t;
                t = f_32;
                t = t_112(t);
                s_9 = t;
                t = b_32;
                t = t_112(t);
                t_9 = t;
                t = c_32;
                t = t_112(t);
                x_9 = t;
                t = d_32;
                t = r_112(t);
                y_9 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, s_9, t_9, x_9, y_9);
                t_1 = t;
                t = SSLsetAnnotations(t_1, g_9);
              }
            }
          else
            {
              ATerm l_10 = NULL,t_10 = NULL,u_1 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_32 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_32);
              l_10 = t;
              t = f_32;
              t = r_112(t);
              t_10 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_10);
              u_1 = t;
              t = SSLsetAnnotations(u_1, l_10);
            }
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm n_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_32);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      {
        ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_32 = ATgetArgument(t, 0);
            t = p_32;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_32 = ATgetArgument(t, 0);
                q_32 = ATgetArgument(t, 1);
                r_32 = ATgetArgument(t, 2);
                s_32 = ATgetArgument(t, 3);
                t = r_32;
                t = map_1_0(i_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_32 = ATgetArgument(t, 0);
                    q_32 = ATgetArgument(t, 1);
                    r_32 = ATgetArgument(t, 2);
                    s_32 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_32;
                t = map_1_0(j_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm a_33 = NULL;
  ATerm p_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_33 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = a_33;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_33;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm j_33 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_33 = ATgetArgument(t, 0);
          {
            ATerm z_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = j_33;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_33;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm e_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_34);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_34 = ATgetArgument(t, 0);
            t = g_34;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_34 = ATgetArgument(t, 0);
                h_34 = ATgetArgument(t, 1);
                i_34 = ATgetArgument(t, 2);
                j_34 = ATgetArgument(t, 3);
                t = i_34;
                t = map_1_0(n_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_34 = ATgetArgument(t, 0);
                    h_34 = ATgetArgument(t, 1);
                    i_34 = ATgetArgument(t, 2);
                    j_34 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_34;
                t = map_1_0(t_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_35 = NULL;
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_35 = ATgetArgument(t, 0);
          {
            ATerm e_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_18);
      t = b_35;
    }
  else
    {
      t = c_18;
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
ATerm t_4 (ATerm t)
{
  ATerm o_35 = NULL;
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_35 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_18);
      t = o_35;
    }
  else
    {
      t = f_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_33 = NULL,b_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_34 = ATgetArgument(t, 0);
      t = b_34;
      if(match_cons(t, sym_Rule_3))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
          {
            ATerm k_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_33;
      t = free_vars_3_0(k_4, l_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_34;
    }
  return(t);
}
ATerm u_6 (ATerm f_94 (ATerm), ATerm c_26, ATerm b_26, ATerm t)
{
  ATerm j_36 (ATerm t)
  {
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
    e_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_36 = ATgetFirst((ATermList) t);
            g_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_36;
              {
                ATerm w_4 (ATerm t)
                {
                  t = b_26;
                  return(t);
                }
                t = v_6(f_94, w_4, f_36, g_36, t);
                t = j_36(t);
              }
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              {
                ATerm e_11 = NULL,m_11 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(e_36);
                e_11 = t;
                t = g_36;
                t = j_36(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), f_36);
                z_1 = t;
                t = SSLsetAnnotations(z_1, e_11);
              }
            }
        }
      }
    return(t);
  }
  t = c_26;
  t = j_36(t);
  return(t);
}
ATerm v_6 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm g_26, ATerm f_26, ATerm t)
{
  t = j_94(t);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm n_36 = NULL;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_26, n_36);
      t = i_94(t);
      return(t);
    }
    t = fetch_1_0(x_4, t);
    t = f_26;
  }
  return(t);
}
ATerm w_6 (ATerm a_94 (ATerm), ATerm a_26, ATerm z_25, ATerm t)
{
  ATerm f_37 (ATerm t)
  {
    ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
    a_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_37 = ATgetFirst((ATermList) t);
            c_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_37;
              {
                ATerm y_4 (ATerm t)
                {
                  t = z_25;
                  return(t);
                }
                t = v_6(a_94, y_4, b_37, c_37, t);
                t = f_37(t);
              }
              ;
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
              {
                ATerm w_11 = NULL,f_12 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(a_37);
                w_11 = t;
                t = c_37;
                t = f_37(t);
                f_12 = t;
                t = (ATerm) ATinsert(CheckATermList(f_12), b_37);
                c_2 = t;
                t = SSLsetAnnotations(c_2, w_11);
              }
            }
        }
      }
    return(t);
  }
  t = a_26;
  t = f_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
{
  ATerm n_37 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_92(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,e_2 = NULL;
          t = f_92(t);
          m_37 = t;
          if(match_cons(t, sym__2))
            {
              i_37 = ATgetArgument(t, 0);
              j_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_37);
          h_37 = t;
          t = i_37;
          t = h_92(t);
          k_37 = t;
          t = j_37;
          t = n_37(t);
          l_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
          e_2 = t;
          t = SSLsetAnnotations(e_2, h_37);
          t = g_92(t);
        }
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) != AT_LIST) || !(ATisEmpty(s_18))))
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) != AT_LIST) || !(ATisEmpty(t_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
        {
          y_37 = ATgetFirst((ATermList) u_18);
          z_37 = (ATerm) ATgetNext((ATermList) u_18);
        }
      else
        _fail(t);
      {
        ATerm w_18 = ATgetArgument(t, 1);
        if(((ATgetType(w_18) == AT_LIST) && !(ATisEmpty(w_18))))
          {
            a_38 = ATgetFirst((ATermList) w_18);
            m_38 = (ATerm) ATgetNext((ATermList) w_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_37, a_38), (ATerm) ATmakeAppl(sym__2, z_37, m_38));
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_38), n_38);
  return(t);
}
ATerm a_7 (ATerm d_574, ATerm i_574, ATerm w_53, ATerm t)
{
  ATerm p_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = SSL_explode_term(i_574);
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_574);
  if(match_cons(t, sym__2))
    {
      if((p_37 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
  t = genzip_4_0(z_4, a_5, b_5, _id, t);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, w_53);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm t_38 (ATerm t)
  {
    ATerm x_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = x_18;
        t = c_84(t);
        t = t_38(t);
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  t = e_84(t);
  t = while_not_2_0(f_84, g_84, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_39);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,g_39 = NULL,i_2 = NULL;
  g_39 = t;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_39);
  b_39 = t;
  t = d_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  i_2 = t;
  t = SSLsetAnnotations(i_2, b_39);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,g_41 = NULL;
  y_40 = t;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_41 = ATgetFirst((ATermList) t);
      g_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_41(z_40, a_41, y_40, t);
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_40), b_41), g_41);
          }
      }
    }
  else
    {
      t = w_41(z_40, a_41, y_40, t);
    }
  return(t);
}
ATerm w_41 (ATerm h_39, ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm q_39 = NULL,t_39 = NULL,n_2 = NULL,e_40 = NULL,h_40 = NULL,i_40 = NULL,k_40 = NULL;
  t = SSLgetAnnotations(j_39);
  q_39 = t;
  t = i_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_40 = ATgetFirst((ATermList) t);
      k_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_40;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_40;
        if((h_40 != t))
          {
            _fail(t);
          }
        t = k_40;
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = i_39;
        t = a_7(h_40, i_40, k_40, t);
      }
    t_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_39, t_39);
    n_2 = t;
    t = SSLsetAnnotations(n_2, q_39);
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      if((p_41 != ATgetArgument(t, 1)))
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
  ATerm f_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_5, f_5, j_5, t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = f_19;
      {
        ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
        k_41 = t;
        if(match_cons(t, sym__2))
          {
            l_41 = ATgetArgument(t, 0);
            m_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_41;
        t = w_6(k_5, l_41, m_41, t);
      }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(p_5, j_13, k_13, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      if((n_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(w_5, e_14, f_14, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      if((g_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_42 (ATerm t)
  {
    ATerm i_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_111(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = i_19;
        {
          ATerm m_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_41 = NULL,z_41 = NULL,u_12 = NULL,v_12 = NULL;
              y_41 = t;
              t = n_111(t);
              z_41 = t;
              t = y_41;
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm b_42 = NULL;
                  t = m_42(t);
                  b_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_42, z_41);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_111(l_5, m_42, m_5, t);
                v_12 = t;
                t = SSL_explode_term(v_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_19 = ATgetArgument(t, 0);
                    u_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_12;
                t = foldr_3_0(n_5, o_5, _id, t);
              }
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = m_19;
              {
                ATerm t_13 = NULL,u_13 = NULL;
                u_13 = t;
                t = SSL_explode_term(u_13);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_19 = ATgetArgument(t, 0);
                    t_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_13;
                t = foldr_3_0(q_5, s_5, m_42, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = bottomup_1_0(l_84, t);
    return(t);
  }
  t = SRTS_all(y_5, t);
  t = l_84(t);
  return(t);
}
ATerm e_7 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm n_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
  t = u_7(v_49, w_49, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_42 = ATgetFirst((ATermList) t);
      {
        ATerm w_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_42;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  b_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL;
        t = term_z_19;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_19, b_43);
        t = e_7(u_14, b_43, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_20) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, c_43, (ATerm) ATempty);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        {
          ATerm l_15 = NULL;
          t = term_z_19;
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_19, b_43);
          t = e_7(l_15, b_43, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm b_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, c_43, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm h_43 (ATerm t)
  {
    ATerm c_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = c_20;
        t = SRTS_all(h_43, t);
      }
    return(t);
  }
  t = h_43(t);
  return(t);
}
ATerm f_7 (ATerm f_101 (ATerm), ATerm j_38, ATerm h_38, ATerm t)
{
  ATerm i_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  q_43 = t;
  t = f_101(t);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_43, j_38, h_38);
  t = v_7(i_43, j_38, h_38, t);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_43 = NULL;
        t = term_h_20;
        t_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_43, term_h_20);
        t = u_7(i_43, t_43, t);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_43 = ATgetFirst((ATermList) t);
        p_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_20;
    r_43 = t;
    t = (ATerm) ATinsert(CheckATermList(p_43), (ATerm) ATinsert(CheckATermList(o_43), j_38));
    s_43 = t;
    t = SSL_table_put(i_43, r_43, s_43);
    t = q_43;
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm x_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
      x_43 = ATgetArgument(t, 2);
      {
        ATerm e_44 = NULL,f_44 = NULL;
        t = a_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_43);
        e_44 = t;
        t = term_j_20;
        f_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_43), term_j_20);
        t = f_7(z_5, e_44, f_44, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_43, (ATerm)ATempty, x_43);
      }
    }
  else
    {
      ATerm i_44 = NULL,j_44 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          z_43 = ATgetArgument(t, 0);
          a_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_44;
      if(match_cons(t, sym_ConstType_1))
        {
          b_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_43);
      i_44 = t;
      t = term_l_20;
      j_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_43), term_l_20);
      t = f_7(a_6, i_44, j_44, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_43, (ATerm) ATmakeAppl(sym_ConstType_1, b_44));
    }
  return(t);
}
ATerm g_7 (ATerm p_49, ATerm q_49, ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  q_44 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
        t = u_7(p_49, q_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_20 = ATgetFirst((ATermList) t);
            p_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_20);
        t = SSL_table_put(p_49, q_49, p_44);
        t = (ATerm) ATmakeAppl(sym__3, p_49, q_49, p_44);
      }
    else
      {
        t = m_20;
        t = SSL_table_remove(p_49, q_49);
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
      }
    t = q_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,a_45 = NULL;
  u_44 = t;
  t = c_101(t);
  t_44 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_45 = NULL;
        t = term_h_20;
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_44, term_h_20);
        t = u_7(t_44, b_45, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_44 = ATgetFirst((ATermList) t);
        r_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_20;
    a_45 = t;
    t = SSL_table_put(t_44, a_45, r_44);
    t = s_44;
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_45 = NULL;
        c_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_44, c_45);
        t = g_7(t_44, c_45, t);
        return(t);
      }
      t = map_1_0(b_6, t);
      t = u_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm r_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_83(t);
      t = g_83(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = r_20;
      t = g_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  f_45 = t;
  t = b_101(t);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_45, term_h_20);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_20;
        m_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_45, term_h_20);
        t = u_7(e_45, m_45, t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
    g_45 = t;
    t = term_h_20;
    h_45 = t;
    t = (ATerm) ATinsert(CheckATermList(g_45), (ATerm) ATempty);
    i_45 = t;
    t = SSL_table_put(e_45, h_45, i_45);
    t = f_45;
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    t = end_scope_1_0(d_101, t);
    return(t);
  }
  t = begin_scope_1_0(d_101, t);
  t = restore_always_2_0(e_101, c_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,b_3 = NULL;
  u_45 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_45);
  r_45 = t;
  t = s_45;
  t = map_1_0(f_6, t);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_45);
  b_3 = t;
  t = SSLsetAnnotations(b_3, r_45);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      h_46 = ATgetArgument(t, 0);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL,n_16 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(i_46);
            l_16 = t;
            t = h_46;
            t = map_1_0(g_6, t);
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_16);
            t_2 = t;
            t = SSLsetAnnotations(t_2, l_16);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = i_46;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          h_46 = ATgetArgument(t, 0);
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,y_17 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(i_46);
                m_17 = t;
                t = h_46;
                t = map_1_0(i_6, t);
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, y_17);
                u_2 = t;
                t = SSLsetAnnotations(u_2, m_17);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = i_46;
              }
          }
        }
      else
        {
          t = i_46;
        }
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(d_6, e_6, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_46;
    }
  else
    {
      ATerm j_6 (ATerm t)
      {
        t = not_null(r_46);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_46 = ATgetFirst((ATermList) t);
          if(((r_46 != NULL) && (r_46 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_46;
      t = at_end_1_0(j_6, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_47;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_18 = NULL,y_18 = NULL,z_18 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(g_47);
            v_18 = t;
            t = h_47;
            t = i_97(t);
            y_18 = t;
            t = i_47;
            t = filter_1_0(i_97, t);
            z_18 = t;
            t = (ATerm) ATinsert(CheckATermList(z_18), y_18);
            k_9 = t;
            t = SSLsetAnnotations(k_9, v_18);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = p_21;
            t = i_47;
            t = filter_1_0(i_97, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm y_47 (ATerm t)
  {
    ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
    x_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_47 = ATgetFirst((ATermList) t);
        w_47 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_19 = NULL,u_19 = NULL,m_9 = NULL;
          t = SSLgetAnnotations(x_47);
          n_19 = t;
          t = w_47;
          t = y_47(t);
          u_19 = t;
          t = (ATerm) ATinsert(CheckATermList(u_19), v_47);
          m_9 = t;
          t = SSLsetAnnotations(m_9, n_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_47;
        t = r_90(t);
      }
    return(t);
  }
  t = y_47(t);
  return(t);
}
ATerm k_48 (ATerm c_48, ATerm t)
{
  ATerm d_48 = NULL;
  t = SSL_explode_term(c_48);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_48;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  h_48 = t;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              t = g_48;
              return(t);
            }
            t = f_48;
            t = at_end_1_0(k_6, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = k_48(h_48, t);
          }
      }
    }
  else
    {
      t = k_48(h_48, t);
    }
  return(t);
}
ATerm j_7 (ATerm q_114, ATerm m_114, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  ATerm l_6 (ATerm t)
  {
    ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
    q_48 = t;
    t = SSL_explode_term(q_48);
    if(match_cons(t, sym__2))
      {
        if(((l_48 != NULL) && (l_48 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_48 = ATgetArgument(t, 0);
        {
          ATerm b_22 = ATgetArgument(t, 1);
          if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
            {
              n_48 = ATgetFirst((ATermList) b_22);
              {
                ATerm c_22 = (ATerm) ATgetNext((ATermList) b_22);
                if(((ATgetType(c_22) != AT_LIST) || !(ATisEmpty(c_22))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_48, not_null(m_48));
    t = conc_0_0(t);
    o_48 = t;
    t = (ATerm) ATinsert(ATempty, o_48);
    p_48 = t;
    t = SSL_mkterm(l_48, p_48);
    return(t);
  }
  t = SSL_explode_term(q_114);
  if(match_cons(t, sym__2))
    {
      if(((l_48 != NULL) && (l_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_48 = ATgetArgument(t, 0);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
          {
            if(((m_48 != NULL) && (m_48 != ATgetFirst((ATermList) e_22))))
              _fail(ATgetFirst((ATermList) e_22));
            else
              m_48 = ATgetFirst((ATermList) e_22);
            {
              ATerm f_22 = (ATerm) ATgetNext((ATermList) e_22);
              if(((ATgetType(f_22) != AT_LIST) || !(ATisEmpty(f_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_114;
  t = fetch_1_0(l_6, t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_48;
      t = g_96(t);
    }
  else
    {
      ATerm c_49 = NULL,d_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_48 = ATgetFirst((ATermList) t);
          z_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_48;
      t = i_96(t);
      c_49 = t;
      t = z_48;
      t = foldr_3_0(g_96, h_96, i_96, t);
      d_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_49, d_49);
      t = h_96(t);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), term_h_22), term_g_22);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(r_49, s_49, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  u_49 = t;
  if(match_cons(t, sym_Signature_1))
    {
      t_49 = ATgetArgument(t, 0);
      {
        ATerm j_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_49 = NULL;
            t = t_49;
            t = filter_1_0(r_6, t);
            t = concat_0_0(t);
            y_49 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, y_49);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = j_22;
            t = u_49;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          t_49 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, t_49);
        }
      else
        {
          t = u_49;
        }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm z_49 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_49;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL,m_49 = NULL,n_49 = NULL,w_12 = NULL;
  n_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_49);
  g_49 = t;
  t = i_49;
  t = foldr_3_0(m_6, p_6, q_6, t);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_49);
  w_12 = t;
  t = SSLsetAnnotations(w_12, g_49);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm h_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  m_51 = t;
  if(match_cons(t, sym_LRule_1))
    {
      l_51 = ATgetArgument(t, 0);
      t = l_51;
      if(match_cons(t, sym_Rule_3))
        {
          h_51 = ATgetArgument(t, 0);
          j_51 = ATgetArgument(t, 1);
          k_51 = ATgetArgument(t, 2);
          {
            ATerm q_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_51 = NULL;
                t = h_51;
                t = free_vars_3_0(x_6, y_6, tboundin_3_0, t);
                q_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, q_51, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_51, j_51, k_51)));
                ;
                LocalPopChoice(s_22);
              }
            else
              {
                t = q_22;
                t = m_51;
              }
          }
        }
      else
        {
          t = m_51;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          l_51 = ATgetArgument(t, 0);
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_53 = NULL;
                t = l_51;
                t = free_vars_3_0(d_7, r_7, tboundin_3_0, t);
                f_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, f_53, l_51);
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                t = m_51;
              }
          }
        }
      else
        {
          t = m_51;
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm s_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_51);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm y_51 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_51 = ATgetArgument(t, 0);
            t = y_51;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_51 = ATgetArgument(t, 0);
                b_52 = ATgetArgument(t, 1);
                c_52 = ATgetArgument(t, 2);
                d_52 = ATgetArgument(t, 3);
                t = c_52;
                t = map_1_0(z_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_51 = ATgetArgument(t, 0);
                    b_52 = ATgetArgument(t, 1);
                    c_52 = ATgetArgument(t, 2);
                    d_52 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_52;
                t = map_1_0(c_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm l_52 = NULL;
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_52 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_23);
      t = l_52;
    }
  else
    {
      t = d_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_52;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm z_52 = NULL;
  ATerm m_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_52 = ATgetArgument(t, 0);
          {
            ATerm p_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_23);
      t = z_52;
    }
  else
    {
      t = m_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_52;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm g_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_53);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_53 = ATgetArgument(t, 0);
            t = i_53;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_53 = ATgetArgument(t, 0);
                j_53 = ATgetArgument(t, 1);
                k_53 = ATgetArgument(t, 2);
                l_53 = ATgetArgument(t, 3);
                t = k_53;
                t = map_1_0(s_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_53 = ATgetArgument(t, 0);
                    j_53 = ATgetArgument(t, 1);
                    k_53 = ATgetArgument(t, 2);
                    l_53 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_53;
                t = map_1_0(w_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm y_53 = NULL;
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_53 = ATgetArgument(t, 0);
          {
            ATerm x_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_23);
      t = y_53;
    }
  else
    {
      t = u_23;
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
ATerm w_7 (ATerm t)
{
  ATerm r_54 = NULL;
  ATerm y_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_54 = ATgetArgument(t, 0);
          {
            ATerm c_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_24);
      t = r_54;
    }
  else
    {
      t = y_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_54;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = Cons_2_0(z_7, a_8, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm y_54 = NULL,a_55 = NULL,b_55 = NULL,d_55 = NULL,i_13 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_55);
  y_54 = t;
  t = a_55;
  t = topdown_1_0(b_8, t);
  t = listtd_1_0(c_8, t);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_55);
  i_13 = t;
  t = SSLsetAnnotations(i_13, y_54);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = repeat_1_0(d_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm g_55 = NULL,l_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_55 = ATgetFirst((ATermList) t);
      l_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_6(g_55, l_55, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm o_55 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      o_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, o_55)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,d_51 = NULL,e_51 = NULL,b_14 = NULL,a_14 = NULL,v_13 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(s_6, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(t_6, t);
  e_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  v_50 = t;
  t = w_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_50 = ATgetFirst((ATermList) t);
      z_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_50);
  x_50 = t;
  t = z_50;
  t = Cons_2_0(_id, y_7, t);
  a_51 = t;
  t = (ATerm) ATinsert(CheckATermList(a_51), y_50);
  v_13 = t;
  t = SSLsetAnnotations(v_13, x_50);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_51);
  a_14 = t;
  t = SSLsetAnnotations(a_14, v_50);
  t = topdown_1_0(e_8, t);
  u_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_50);
  r_50 = t;
  t = s_50;
  t = fetch_1_0(g_8, t);
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_50);
  b_14 = t;
  t = SSLsetAnnotations(b_14, r_50);
  return(t);
}
ATerm k_7 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm p_55 = NULL;
  t = SSL_fputc(v_39, w_39);
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_55);
  return(t);
}
ATerm l_7 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm q_55 = NULL;
  t = SSL_write_term_to_stream_text(j_43, k_43);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_55);
  return(t);
}
ATerm n_7 (ATerm y_102 (ATerm), ATerm n_418, ATerm n_43, ATerm t)
{
  ATerm r_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_418, term_n_24);
  t = open_stream_0_0(t);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_55, n_43);
  t = y_102(t);
  t = fclose_0_0(t);
  t = n_43;
  return(t);
}
ATerm m_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm s_55 = NULL;
  t = SSL_write_term_to_stream_baf(f_43, g_43);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_55);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(match_cons(q_24, sym_Stream_1))
        {
          b_56 = ATgetArgument(q_24, 0);
        }
      else
        _fail(t);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(b_56, c_56, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(match_cons(r_24, sym_Stream_1))
        {
          g_56 = ATgetArgument(r_24, 0);
        }
      else
        _fail(t);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(g_56, h_56, t);
  d_56 = t;
  t = term_s_24;
  e_56 = t;
  t = d_56;
  if(match_cons(t, sym_Stream_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_24, d_56);
  t = k_7(e_56, f_56, t);
  return(t);
}
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  t = h_107(t);
  u_55 = t;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = term_w_24;
      }
    t_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_24;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
          LocalPopChoice(y_24);
          if(match_cons(t, sym__2))
            {
              ATerm a_25 = ATgetArgument(t, 0);
              ATerm c_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_7(h_8, t_55, u_55, t);
        }
      else
        {
          t = x_24;
          if(match_cons(t, sym__2))
            {
              ATerm d_25 = ATgetArgument(t, 0);
              ATerm e_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_7(i_8, t_55, u_55, t);
        }
    }
  }
  return(t);
}
ATerm f_57 (ATerm u_56, ATerm t)
{
  t = SSL_fclose(u_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  z_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_56 = ATgetArgument(t, 0);
      {
        ATerm j_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_56);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = j_25;
            t = f_57(z_56, t);
          }
      }
    }
  else
    {
      t = f_57(z_56, t);
    }
  return(t);
}
ATerm o_7 (ATerm l_43, ATerm t)
{
  t = SSL_read_term_from_stream(l_43);
  return(t);
}
ATerm p_7 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_fopen(x_39, y_39);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  t = SSL_stdin_stream();
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_57 = NULL;
  t = SSL_stdout_stream();
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_57 = NULL;
  t = SSL_stderr_stream();
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_57);
  return(t);
}
ATerm f_60 (ATerm v_57, ATerm t)
{
  ATerm w_57 = NULL;
  t = SSL_explode_term(v_57);
  if(match_cons(t, sym__2))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_25 = ATgetArgument(t, 1);
        if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
          {
            w_57 = ATgetFirst((ATermList) n_25);
            {
              ATerm p_25 = (ATerm) ATgetNext((ATermList) n_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_60 (ATerm z_57, ATerm a_58, ATerm b_58, ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,g_58 = NULL,j_58 = NULL,j_14 = NULL;
  t = SSLgetAnnotations(b_58);
  g_58 = t;
  t = z_57;
  if(match_cons(t, sym_Path_1))
    {
      j_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_58, a_58);
  j_14 = t;
  t = SSLsetAnnotations(j_14, g_58);
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(c_58, d_58, t);
  return(t);
}
ATerm p_60 (ATerm n_58, ATerm o_58, ATerm q_58, ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,w_58 = NULL,k_14 = NULL;
  t = SSLgetAnnotations(q_58);
  t_58 = t;
  t = SSL_is_string(n_58);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, o_58);
  k_14 = t;
  t = SSLsetAnnotations(k_14, t_58);
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(r_58, s_58, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      ATerm r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_58 = t;
  if(match_cons(t, sym__2))
    {
      z_58 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_60(y_58, t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = s_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_60(z_58, a_59, y_58, t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  t = p_60(z_58, a_59, y_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_60(y_58, t);
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_60 = NULL;
      t_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_60, term_k_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = debug_1_0(j_8, t);
      _fail(t);
    }
  r_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(s_60, t);
  q_60 = t;
  t = r_60;
  t = fclose_0_0(t);
  t = q_60;
  return(t);
}
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = term_o_26;
    }
  t = ReadFromFile_0_0(t);
  t = i_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  x_60 = t;
  t = term_p_26;
  t = whoami_0_0(t);
  y_60 = t;
  t = term_g_12;
  a_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), y_60), term_q_26);
  b_61 = t;
  t = SSL_printnl(a_61, b_61);
  t = term_j_12;
  z_60 = t;
  t = SSL_exit(z_60);
  t = x_60;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  if(match_string(t, "-k"))
    {
      t = h_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_61;
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,n_61 = NULL;
  j_61 = t;
  t = SSL_string_to_int(j_61);
  k_61 = t;
  t = term_s_26;
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_26, k_61);
  t = x_7(n_61, k_61, t);
  t = j_61;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_8, l_8, m_8, t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm r_61 = NULL;
  r_61 = t;
  if(match_string(t, "-S"))
    {
      t = r_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_61;
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t = term_v_26;
  s_61 = t;
  t = term_w_26;
  t_61 = t;
  t = term_x_26;
  t = x_7(s_61, t_61, t);
  t = term_y_26;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm u_61 = NULL,y_61 = NULL,z_61 = NULL;
  u_61 = t;
  t = SSL_string_to_int(u_61);
  y_61 = t;
  t = term_v_26;
  z_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, y_61);
  t = x_7(z_61, y_61, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_61);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  t = term_b_27;
  a_62 = t;
  t = term_p_26;
  b_62 = t;
  t = term_c_27;
  t = x_7(a_62, b_62, t);
  t = term_d_27;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, p_8, r_8, t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_8, v_8, w_8, t);
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = Option_3_0(x_8, y_8, z_8, t);
          }
      }
    }
  return(t);
}
ATerm x_7 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm c_62 = NULL;
  t = term_j_27;
  c_62 = t;
  t = SSL_table_put(c_62, m_44, n_44);
  t = (ATerm) ATmakeAppl(sym__3, term_j_27, m_44, n_44);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
      t = term_p_26;
      t = f_0(t);
      i_62 = t;
      t = term_l_27;
      j_62 = t;
      t = term_m_27;
      k_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, i_62);
      t = v_7(j_62, k_62, i_62, t);
      _fail(t);
    }
  else
    {
      ATerm b_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_62 = ATgetFirst((ATermList) t);
          h_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_62;
      t = b_0(t);
      t = term_p_26;
      t = d_0(t);
      b_63 = t;
      t = (ATerm) ATinsert(CheckATermList(h_62), b_63);
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm d_63 = NULL;
  d_63 = t;
  if(match_string(t, "-o"))
    {
      t = d_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_63;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  e_63 = t;
  t = term_v_24;
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, e_63);
  t = x_7(f_63, e_63, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_63);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_9, b_9, c_9, t);
  return(t);
}
ATerm v_7 (ATerm k_49, ATerm l_49, ATerm j_49, ATerm t)
{
  ATerm j_63 = NULL,i_64 = NULL,j_64 = NULL;
  j_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_27 = ATgetArgument(t, 0);
            ATerm r_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        t = u_7(k_49, l_49, t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    i_64 = t;
    t = (ATerm) ATinsert(CheckATermList(i_64), j_49);
    j_64 = t;
    t = SSL_table_put(k_49, l_49, j_64);
    t = j_63;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_64 = NULL,y_64 = NULL,a_65 = NULL,b_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
      t = term_p_26;
      t = n_0(t);
      c_65 = t;
      t = term_l_27;
      d_65 = t;
      t = term_m_27;
      e_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, c_65);
      t = v_7(d_65, e_65, c_65, t);
      _fail(t);
    }
  else
    {
      ATerm k_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_64 = ATgetFirst((ATermList) t);
          y_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_65 = ATgetFirst((ATermList) t);
          b_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_64;
      t = k_0(t);
      t = a_65;
      t = m_0(t);
      k_65 = t;
      t = (ATerm) ATinsert(CheckATermList(b_65), k_65);
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  if(match_string(t, "-i"))
    {
      t = n_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_65;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  q_65 = t;
  t = term_n_26;
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, q_65);
  t = x_7(r_65, q_65, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_65);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_9, e_9, f_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_26;
  t = whoami_0_0(t);
  s_65 = t;
  t = term_g_12;
  y_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_27), s_65);
  z_65 = t;
  t = SSL_printnl(y_65, z_65);
  t = term_j_12;
  x_65 = t;
  t = SSL_exit(x_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_7 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_36, w_36);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = SSL_addr(v_36, w_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm b_66 = NULL,e_66 = NULL,f_66 = NULL;
  b_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_66;
      t = e_96(t);
    }
  else
    {
      ATerm i_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_66 = ATgetFirst((ATermList) t);
          f_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_66;
      t = foldr_2_0(e_96, f_96, t);
      i_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_66, i_66);
      t = f_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(e_21, f_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_66 = NULL,y_20 = NULL,z_20 = NULL;
  t = times_0_0(t);
  z_20 = t;
  t = SSL_explode_term(z_20);
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_20;
  t = foldr_2_0(h_9, i_9, t);
  n_66 = t;
  t = SSL_TicksToSeconds(n_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym__2))
    {
      c_67 = ATgetArgument(t, 0);
      d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_67;
        if((c_67 != t))
          {
            _fail(t);
          }
        t = b_67;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_67, d_67);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = SSL_gtr(c_67, d_67);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm j_67 = NULL;
  j_67 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_67 = NULL;
        t = term_v_26;
        t = get_config_0_0(t);
        l_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_67, term_j_12);
        t = geq_0_0(t);
        t = j_67;
        t = i_104(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = j_67;
      }
  }
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,q_67 = NULL,r_67 = NULL;
  t = run_time_0_0(t);
  n_67 = t;
  t = term_p_26;
  t = whoami_0_0(t);
  o_67 = t;
  t = term_g_12;
  q_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_28), n_67), term_l_28), o_67);
  r_67 = t;
  t = SSL_printnl(q_67, r_67);
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_28), n_67), term_l_28), o_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_26;
  s_67 = t;
  t = SSL_exit(s_67);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  c_68 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_68;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_68 = ATgetArgument(t, 0);
          {
            ATerm z_21 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(c_68);
            z_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_68);
            v_14 = t;
            t = SSLsetAnnotations(v_14, z_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_68;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      t = fetch_1_0(l_9, t);
    }
  t = y_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_68 = NULL,i_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_68 = ATgetFirst((ATermList) t);
      i_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_68 = NULL,o_68 = NULL;
        ATerm n_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_68)), not_null(o_68));
          return(t);
        }
        t = i_68;
        t = i_0(t);
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        t = f_68;
        t = g_0(t);
        if(((o_68 != NULL) && (o_68 != t)))
          _fail(t);
        else
          o_68 = t;
        t = i_68;
        t = reverse_acc_2_0(g_0, n_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_26;
      t = i_0(t);
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm t_68 = NULL,v_68 = NULL,w_68 = NULL,b_15 = NULL;
  w_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_68);
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_68);
  b_15 = t;
  t = SSLsetAnnotations(b_15, t_68);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm b_69 = NULL;
  b_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_69), term_q_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_68 = NULL,s_68 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = fetch_1_0(o_9, t);
    }
  t = term_t_28;
  t = echo_0_0(t);
  t = term_l_27;
  q_68 = t;
  t = term_m_27;
  s_68 = t;
  t = term_v_28;
  t = u_7(q_68, s_68, t);
  t = reverse_acc_2_0(_id, p_9, t);
  t = map_1_0(q_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm j_70 (ATerm t)
  {
    ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
    f_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_70 = ATgetFirst((ATermList) t);
        h_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_22 = NULL,p_22 = NULL,d_15 = NULL;
          t = SSLgetAnnotations(f_70);
          k_22 = t;
          t = g_70;
          t = l_90(t);
          p_22 = t;
          t = (ATerm) ATinsert(CheckATermList(h_70), p_22);
          d_15 = t;
          t = SSLsetAnnotations(d_15, k_22);
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm n_23 = NULL,q_23 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(f_70);
            n_23 = t;
            t = h_70;
            t = j_70(t);
            q_23 = t;
            t = (ATerm) ATinsert(CheckATermList(q_23), g_70);
            g_15 = t;
            t = SSLsetAnnotations(g_15, n_23);
          }
        }
    }
    return(t);
  }
  t = j_70(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_70;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_29 = ATgetFirst((ATermList) t);
                ATerm b_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_70;
          }
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = (ATerm) ATinsert(ATempty, n_70);
      }
    o_70 = t;
    t = term_w_24;
    p_70 = t;
    t = SSL_printnl(p_70, o_70);
    t = n_70;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_7 (ATerm l_34, ATerm m_34, ATerm t)
{
  t = SSL_strcat(l_34, m_34);
  return(t);
}
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm t_70 = NULL,w_70 = NULL,z_70 = NULL,a_71 = NULL;
  t_70 = t;
  t = w_102(t);
  w_70 = t;
  t = term_g_12;
  z_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_70), w_70);
  a_71 = t;
  t = SSL_printnl(z_70, a_71);
  t = t_70;
  return(t);
}
ATerm map_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm g_72 (ATerm t)
  {
    ATerm x_71 = NULL,b_72 = NULL,f_72 = NULL;
    x_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_71;
      }
    else
      {
        ATerm f_24 = NULL,o_24 = NULL,p_24 = NULL,k_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_72 = ATgetFirst((ATermList) t);
            f_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_71);
        f_24 = t;
        t = b_72;
        t = b_90(t);
        o_24 = t;
        t = f_72;
        t = g_72(t);
        p_24 = t;
        t = (ATerm) ATinsert(CheckATermList(p_24), o_24);
        k_15 = t;
        t = SSLsetAnnotations(k_15, f_24);
      }
    return(t);
  }
  t = g_72(t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_72 = NULL;
      o_72 = t;
      t = SSL_is_string(o_72);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_9, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
              u_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_72 = ATgetArgument(t, 0);
                  t = v_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_72 = ATgetArgument(t, 0);
                      t = v_72;
                      {
                        ATerm j_29 = t;
                        int k_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_29);
                          }
                        else
                          {
                            t = j_29;
                            t = debug_1_0(z_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_73 = NULL,b_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_72 = ATgetArgument(t, 0);
                          w_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_72;
                      t = eval_config_0_0(t);
                      a_73 = t;
                      t = w_72;
                      t = eval_config_0_0(t);
                      b_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_73, b_73);
                      t = t_7(a_73, b_73, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_7 (ATerm b_51, ATerm c_51, ATerm t)
{
  t = SSL_table_get(b_51, c_51);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  f_73 = t;
  t = term_j_27;
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, f_73);
  t = u_7(g_73, f_73, t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL,i_73 = NULL;
        t = eval_config_0_0(t);
        h_73 = t;
        t = term_j_27;
        i_73 = t;
        t = SSL_table_put(i_73, f_73, h_73);
        t = h_73;
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
  }
  return(t);
}
ATerm a_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = term_r_29;
  l_73 = t;
  t = term_p_26;
  m_73 = t;
  t = term_s_29;
  t = x_7(l_73, m_73, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,r_73 = NULL,s_73 = NULL;
  t = term_r_29;
  r_73 = t;
  t = term_p_26;
  s_73 = t;
  t = term_s_29;
  t = x_7(r_73, s_73, t);
  t = term_w_29;
  n_73 = t;
  t = term_p_26;
  o_73 = t;
  t = term_z_29;
  t = x_7(n_73, o_73, t);
  t = term_a_30;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_10, b_10, c_10, t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      t = Option_3_0(f_10, g_10, h_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,n_15 = NULL;
  y_73 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_73 = ATgetFirst((ATermList) t);
      v_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_73);
  t_73 = t;
  t = u_73;
  t = y_68(t);
  w_73 = t;
  t = v_73;
  t = z_68(t);
  x_73 = t;
  t = (ATerm) ATinsert(CheckATermList(x_73), w_73);
  n_15 = t;
  t = SSLsetAnnotations(n_15, t_73);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,i_74 = NULL,j_74 = NULL,p_15 = NULL;
  d_74 = t;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_30;
        t = b_109(t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
      }
    t = d_74;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_74 = ATgetFirst((ATermList) t);
        g_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_74);
    e_74 = t;
    t = term_v_27;
    j_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_27, f_74);
    t = x_7(j_74, f_74, t);
    t = g_74;
    {
      ATerm t_74 (ATerm t)
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_74 = NULL;
                m_74 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_74;
                ;
                LocalPopChoice(k_30);
              }
            else
              {
                t = j_30;
                t = b_109(t);
                t = Cons_2_0(_id, t_74, t);
              }
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm p_74 = NULL,q_74 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_74 = ATgetFirst((ATermList) t);
                  q_74 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_74), (ATerm) ATmakeAppl(sym_Undefined_1, p_74));
            }
          }
        return(t);
      }
      t = t_74(t);
      i_74 = t;
      t = (ATerm) ATinsert(CheckATermList(i_74), (ATerm) ATmakeAppl(sym_Program_1, f_74));
      p_15 = t;
      t = SSLsetAnnotations(p_15, e_74);
    }
  }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm f_75 = NULL;
  f_75 = t;
  if(match_string(t, "--help"))
    {
      t = f_75;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_75;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_75;
        }
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL;
  t = term_p_28;
  g_75 = t;
  t = term_p_26;
  h_75 = t;
  t = term_l_30;
  t = x_7(g_75, h_75, t);
  t = term_m_30;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm r_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
  a_75 = t;
  t = term_l_27;
  c_75 = t;
  t = term_m_27;
  d_75 = t;
  t = (ATerm) ATempty;
  e_75 = t;
  t = SSL_table_put(c_75, d_75, e_75);
  t = a_75;
  {
    ATerm i_10 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_109(t);
          ;
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm q_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_10, k_10, q_10, t);
                ;
                LocalPopChoice(r_30);
              }
            else
              {
                t = q_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_10, t);
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_75 = NULL;
          o_75 = t;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_25 = NULL;
                t = o_75;
                {
                  ATerm w_30 = t;
                  int x_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_30);
                    }
                  else
                    {
                      t = w_30;
                      t = fetch_1_0(r_10, t);
                    }
                  t = o_75;
                  t = default_system_usage_0_0(t);
                  t = term_w_26;
                  f_25 = t;
                  t = SSL_exit(f_25);
                }
                ;
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                {
                  ATerm u_25 = NULL;
                  t = term_r_29;
                  t = get_config_0_0(t);
                  t = o_75;
                  t = default_system_about_0_0(t);
                  t = term_w_26;
                  u_25 = t;
                  t = SSL_exit(u_25);
                }
              }
          }
          ;
          LocalPopChoice(t_30);
        }
      else
        {
          t = s_30;
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
                ATerm s_10 (ATerm t)
                {
                  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,r_15 = NULL;
                  u_75 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_75);
                  s_75 = t;
                  t = t_75;
                  if(((y_74 != NULL) && (y_74 != t)))
                    _fail(t);
                  else
                    y_74 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_75);
                  r_15 = t;
                  t = SSLsetAnnotations(r_15, s_75);
                  return(t);
                }
                t = fetch_1_0(s_10, t);
                t = term_g_12;
                q_75 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_74)), term_a_31);
                r_75 = t;
                t = SSL_printnl(q_75, r_75);
                t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_74)), term_a_31));
                t = default_system_usage_0_0(t);
                t = term_j_12;
                p_75 = t;
                t = SSL_exit(p_75);
                ;
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
              }
          }
        }
      z_74 = t;
      t = term_l_27;
      b_75 = t;
      t = SSL_table_destroy(b_75);
      t = z_74;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL;
  t = parse_options_1_0(a_107, t);
  z_75 = t;
  t = term_b_31;
  c_76 = t;
  t = SSL_table_create(c_76);
  t = term_b_31;
  a_76 = t;
  t = term_c_31;
  b_76 = t;
  t = SSL_table_put(a_76, b_76, z_75);
  t = z_75;
  t = c_107(t);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_107, t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm l_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_10, x_10, y_10, t);
                  ;
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                  {
                    ATerm n_31 = t;
                    int o_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_31);
                      }
                    else
                      {
                        t = n_31;
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
ATerm v_10 (ATerm t)
{
  t = input_1_0(z_10, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  t = term_z_24;
  e_76 = t;
  t = term_p_26;
  f_76 = t;
  t = term_p_31;
  t = x_7(e_76, f_76, t);
  t = term_q_31;
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_10, default_usage_0_0, _id, v_10, t);
  return(t);
}
