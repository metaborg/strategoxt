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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_t_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
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
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_e_22;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_m_16;
ATerm term_d_16;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
void init_constant_terms (void)
{
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Op_2, term_t_10, (ATerm) ATempty);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Op_2, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_16);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_18);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_22);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_o_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_j_28);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_o_27);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_o_27);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_o_27);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_o_27);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm HL_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm h_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm split_dynamic_rule_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm def_tvars_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm l_6 (ATerm p_62, ATerm o_62, ATerm);
ATerm repeat_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm j_91 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm z_3 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm q_6 (ATerm e_94 (ATerm), ATerm k_26, ATerm j_26, ATerm);
ATerm r_6 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm o_26, ATerm n_26, ATerm);
ATerm s_6 (ATerm z_93 (ATerm), ATerm i_26, ATerm h_26, ATerm);
ATerm genzip_4_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm x_6 (ATerm u_579, ATerm z_579, ATerm i_54, ATerm);
ATerm while_not_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm x_40 (ATerm f_39, ATerm g_39, ATerm h_39, ATerm);
ATerm o_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm free_vars_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm b_7 (ATerm h_50, ATerm i_50, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm c_7 (ATerm k_101 (ATerm), ATerm x_39, ATerm v_39, ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm d_7 (ATerm b_50, ATerm c_50, ATerm);
ATerm end_scope_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm scope_2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm h_97 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm r_47 (ATerm j_47, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_7 (ATerm i_114, ATerm e_114, ATerm);
ATerm foldr_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm t_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm p_7 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm h_7 (ATerm w_35, ATerm x_35, ATerm);
ATerm i_7 (ATerm v_43, ATerm w_43, ATerm);
ATerm k_7 (ATerm x_102 (ATerm), ATerm e_424, ATerm z_43, ATerm);
ATerm j_7 (ATerm r_43, ATerm s_43, ATerm);
ATerm q_7 (ATerm);
ATerm u_7 (ATerm);
ATerm output_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm q_57 (ATerm h_57, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_7 (ATerm x_43, ATerm);
ATerm m_7 (ATerm y_35, ATerm z_35, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_60 (ATerm i_58, ATerm);
ATerm l_60 (ATerm m_58, ATerm p_58, ATerm q_58, ATerm);
ATerm m_60 (ATerm b_59, ATerm c_59, ATerm d_59, ATerm);
ATerm n_7 (ATerm);
ATerm w_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_7 (ATerm y_44, ATerm z_44, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_7 (ATerm w_49, ATerm x_49, ATerm v_49, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_7 (ATerm j_38, ATerm k_38, ATerm);
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_8 (ATerm);
ATerm y_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_7 (ATerm q_34, ATerm r_34, ATerm);
ATerm debug_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_7 (ATerm n_51, ATerm o_51, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,z_0 = NULL,b_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_1, d_1);
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
              t = term_g_10;
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
                  t = term_g_10;
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
                      t = term_h_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      b_1 = ATgetArgument(t, 0);
                      d_1 = ATgetArgument(t, 1);
                      z_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_1, (ATerm) ATmakeAppl(sym_Op_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, z_0), b_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          b_1 = ATgetArgument(t, 0);
                          d_1 = ATgetArgument(t, 1);
                          z_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_0)), b_1), (ATerm) ATmakeAppl(sym_Build_1, d_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              b_1 = ATgetArgument(t, 0);
                              d_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_1, (ATerm) ATmakeAppl(sym_Match_1, d_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  b_1 = ATgetArgument(t, 0);
                                  d_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_1), d_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      b_1 = ATgetArgument(t, 0);
                                      d_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_1), b_1);
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
ATerm topdown_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = topdown_1_0(j_84, t);
    return(t);
  }
  t = j_84(t);
  t = SRTS_all(c_0, t);
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_10);
        t = b_3;
        {
          ATerm p_10 = t;
          if((PushChoice() == 0))
            {
              ATerm j_0 = NULL,o_0 = NULL,u_0 = NULL;
              o_0 = t;
              j_0 = t;
              t = term_q_10;
              u_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_10, o_0);
              t = b_7(u_0, o_0, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm r_10 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_10) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = j_0;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_10;
            }
          t = term_u_10;
        }
      }
    else
      {
        t = k_10;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_u_10;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                c_3 = ATgetArgument(t, 0);
                {
                  ATerm j_3 = NULL;
                  t = c_3;
                  t = free_vars_3_0(q_0, t_0, tboundin_3_0, t);
                  t = map_1_0(f_1, t);
                  j_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_10, j_3);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_3 = ATgetArgument(t, 0);
                    d_3 = ATgetArgument(t, 1);
                    {
                      ATerm g_5 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
                      t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
                      t = map_1_0(m_1, t);
                      g_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_y_10, g_5);
                    }
                  }
                else
                  {
                    ATerm y_0 = NULL,c_1 = NULL,e_1 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm z_10 = ATgetArgument(t, 0);
                        ATerm a_11 = ATgetArgument(t, 1);
                        ATerm c_11 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_e_11;
                    c_1 = t;
                    t = (ATerm) ATinsert(ATempty, term_f_11);
                    e_1 = t;
                    t = SSL_printnl(c_1, e_1);
                    t = term_g_11;
                    y_0 = t;
                    t = SSL_exit(y_0);
                    t = (ATerm) ATinsert(ATempty, term_f_11);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm m_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_3);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm k_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = k_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm s_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_3 = ATgetArgument(t, 0);
                  v_3 = ATgetArgument(t, 1);
                  x_3 = ATgetArgument(t, 2);
                  y_3 = ATgetArgument(t, 3);
                  t = x_3;
                  t = map_1_0(x_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      x_3 = ATgetArgument(t, 2);
                      y_3 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_3;
                  t = map_1_0(a_1, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm i_4 = NULL;
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_4 = ATgetArgument(t, 0);
          {
            ATerm g_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_12);
      t = i_4;
    }
  else
    {
      t = y_11;
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
ATerm a_1 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm h_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = y_4;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_4;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_5);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm h_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_5);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm x_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = x_12;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_5 = ATgetArgument(t, 0);
                  m_5 = ATgetArgument(t, 1);
                  n_5 = ATgetArgument(t, 2);
                  o_5 = ATgetArgument(t, 3);
                  t = n_5;
                  t = map_1_0(j_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_5 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                      n_5 = ATgetArgument(t, 2);
                      o_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_5;
                  t = map_1_0(l_1, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm y_6 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_6 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = y_6;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_6;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm f_8 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_8 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = f_8;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_8;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_8);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(h_0, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm w_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_12);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_12 = ATgetArgument(t, 0);
                  z_12 = ATgetArgument(t, 1);
                  a_13 = ATgetArgument(t, 2);
                  b_13 = ATgetArgument(t, 3);
                  t = a_13;
                  t = map_1_0(q_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_12 = ATgetArgument(t, 0);
                      z_12 = ATgetArgument(t, 1);
                      a_13 = ATgetArgument(t, 2);
                      b_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_13;
                  t = map_1_0(r_1, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm k_13 = NULL;
  ATerm q_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_13 = ATgetArgument(t, 0);
          {
            ATerm u_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_13);
      t = k_13;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_13;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_14 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_13);
      t = e_14;
    }
  else
    {
      t = v_13;
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
ATerm s_1 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_14);
  return(t);
}
ATerm t_1 (ATerm t)
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
ATerm u_1 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm k_14 = NULL,l_14 = NULL,s_14 = NULL,t_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_14 = ATgetArgument(t, 0);
                  l_14 = ATgetArgument(t, 1);
                  s_14 = ATgetArgument(t, 2);
                  t_14 = ATgetArgument(t, 3);
                  t = s_14;
                  t = map_1_0(v_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_14 = ATgetArgument(t, 0);
                      l_14 = ATgetArgument(t, 1);
                      s_14 = ATgetArgument(t, 2);
                      t_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_14;
                  t = map_1_0(w_1, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_15 = ATgetArgument(t, 0);
          {
            ATerm f_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_14);
      t = a_15;
    }
  else
    {
      t = c_14;
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
ATerm w_1 (ATerm t)
{
  ATerm q_15 = NULL;
  ATerm g_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_15 = ATgetArgument(t, 0);
          {
            ATerm n_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_14);
      t = q_15;
    }
  else
    {
      t = g_14;
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
ATerm x_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,y_1 = NULL,a_0 = NULL,h_2 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            e_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_15);
        y_1 = t;
        t = term_q_10;
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_10, e_16);
        t = b_7(h_2, e_16, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, e_16);
        a_0 = t;
        t = SSLsetAnnotations(a_0, y_1);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm k_2 = NULL;
          t = term_q_10;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_10, t_15);
          t = b_7(k_2, t_15, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_14) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = t_15;
        }
      }
    t = (ATerm) ATmakeAppl(sym_Var_1, t_15);
  }
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm l_11, ATerm m_11, ATerm n_11, ATerm o_11, ATerm p_11, ATerm q_11, ATerm r_11, ATerm t)
  {
    ATerm z_11 = NULL,e_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, p_11, term_v_14);
    {
      ATerm w_14 = t;
      if((PushChoice() == 0))
        {
          ATerm n_12 = NULL;
          if(match_cons(t, sym__2))
            {
              n_12 = ATgetArgument(t, 0);
              if((n_12 != ATgetArgument(t, 1)))
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
          t = w_14;
        }
      t = new_0_0(t);
      z_11 = t;
      t = o_11;
      t = dummify_0_0(t);
      f_12 = t;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_12;
            if((o_11 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, z_11);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = f_12;
          }
        e_12 = t;
        t = f_12;
        t = free_vars_3_0(o_1, p_1, tboundin_3_0, t);
        t = map_1_0(s_1, t);
        j_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
        t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
        t = filter_1_0(x_1, t);
        i_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
        t = diff_0_0(t);
        k_12 = t;
        t = new_0_0(t);
        l_12 = t;
        t = l_11;
        t = s_0(t);
        m_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_12, (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_15, (ATerm) ATinsert(CheckATermList(k_12), (ATerm) ATmakeAppl(sym_Str_1, l_12)))), f_12)))), (ATerm) ATmakeAppl(sym_RDefT_4, l_11, m_11, n_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_11), o_11), p_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_11)))), e_12), (ATerm) ATmakeAppl(sym_Op_2, term_b_15, (ATerm) ATinsert(CheckATermList(k_12), (ATerm) ATmakeAppl(sym_Str_1, l_12))))), q_11))));
      }
    }
    return(t);
  }
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      k_16 = ATgetArgument(t, 2);
      o_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_16;
  if(match_cons(t, sym_Rule_3))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      r_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_16;
  if(match_cons(t, sym_Op_2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      t = g_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_16;
          if(match_string(t, "Undefined"))
            {
              ATerm e_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_3 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL;
                  t = h_16;
                  t = new_0_0(t);
                  k_3 = t;
                  t = p_16;
                  t = dummify_0_0(t);
                  g_3 = t;
                  {
                    ATerm g_15 = t;
                    int i_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_3;
                        if((p_16 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
                        ;
                        LocalPopChoice(i_15);
                      }
                    else
                      {
                        t = g_15;
                        t = g_3;
                      }
                    l_3 = t;
                    t = i_16;
                    t = s_0(t);
                    o_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, o_3, (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, term_v_14), g_3)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_16, j_16, k_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_3), p_16), term_v_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_16)))), l_3), term_v_14)), (ATerm) ATmakeAppl(sym_Seq_2, r_16, term_g_10)))));
                  }
                  ;
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = e_15;
                  t = t_16(i_16, j_16, k_16, p_16, q_16, r_16, h_16, t);
                }
            }
          else
            {
              t = t_16(i_16, j_16, k_16, p_16, q_16, r_16, h_16, t);
            }
        }
      else
        {
          t = f_16;
          t = t_16(i_16, j_16, k_16, p_16, q_16, r_16, h_16, t);
        }
    }
  else
    {
      t = t_16(i_16, j_16, k_16, p_16, q_16, r_16, h_16, t);
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = SplitDynamicRule_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_17))));
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_15;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_17, j_17);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(match_cons(n_15, sym__2))
        {
          k_17 = ATgetArgument(n_15, 0);
          l_17 = ATgetArgument(n_15, 1);
        }
      else
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(match_cons(o_15, sym__2))
          {
            m_17 = ATgetArgument(o_15, 0);
            q_17 = ATgetArgument(o_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_17), k_17), (ATerm) ATinsert(CheckATermList(q_17), l_17));
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm t_17 = NULL;
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_17))));
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_15;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_17 = ATgetFirst((ATermList) t);
      z_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_17, z_17);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if(match_cons(s_15, sym__2))
        {
          a_18 = ATgetArgument(s_15, 0);
          b_18 = ATgetArgument(s_15, 1);
        }
      else
        _fail(t);
      {
        ATerm v_15 = ATgetArgument(t, 1);
        if(match_cons(v_15, sym__2))
          {
            c_18 = ATgetArgument(v_15, 0);
            d_18 = ATgetArgument(v_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_18), a_18), (ATerm) ATinsert(CheckATermList(d_18), b_18));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      f_17 = ATgetArgument(t, 0);
      t = f_17;
      t = map_1_0(z_1, t);
      t = genzip_4_0(b_2, c_2, d_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          f_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_17;
      t = map_1_0(e_2, t);
      t = genzip_4_0(g_2, j_2, m_2, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SRTS_one(f_18, t);
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm z_18 = NULL,p_19 = NULL,s_19 = NULL,t_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_19;
            z_18 = t;
            t = t_19;
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            t = t_19;
            z_18 = t;
            t = t_19;
          }
      }
    }
  else
    {
      t = t_19;
      z_18 = t;
      t = t_19;
    }
  t = term_m_16;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, term_m_16);
  t = c_7(r_2, z_18, p_19, t);
  t = t_19;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm u_19 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm s_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_112(t);
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = s_16;
          {
            ATerm m_18 = NULL,n_18 = NULL,w_18 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                m_18 = ATgetArgument(t, 0);
                n_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, m_18, n_18);
            {
              ATerm p_2 (ATerm t)
              {
                t = m_18;
                t = map_1_0(q_2, t);
                t = n_18;
                t = u_19(t);
                if(((w_18 != NULL) && (w_18 != t)))
                  _fail(t);
                else
                  w_18 = t;
                return(t);
              }
              t = scope_2_0(o_2, p_2, t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_18, not_null(w_18));
            }
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_2, t);
    return(t);
  }
  t = u_19(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_20);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_20 = ATgetArgument(t, 0);
                  t_20 = ATgetArgument(t, 1);
                  u_20 = ATgetArgument(t, 2);
                  v_20 = ATgetArgument(t, 3);
                  t = u_20;
                  t = map_1_0(u_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_20 = ATgetArgument(t, 0);
                      t_20 = ATgetArgument(t, 1);
                      u_20 = ATgetArgument(t, 2);
                      v_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_20;
                  t = map_1_0(v_2, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm n_21 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm c_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = n_21;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm b_22 = NULL;
  ATerm d_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_17);
      t = b_22;
    }
  else
    {
      t = d_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_23 = ATgetArgument(t, 0);
      t = f_23;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_23;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm l_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_23 = ATgetArgument(t, 0);
      t = l_23;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_23 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      if((s_23 != ATgetArgument(t, 1)))
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
  ATerm j_20 = NULL,k_20 = NULL,p_20 = NULL;
  p_20 = t;
  t = free_vars_3_0(s_2, t_2, tboundin_3_0, t);
  j_20 = t;
  t = p_20;
  {
    ATerm s_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm x_17 = ATgetArgument(t, 0);
                ATerm e_18 = ATgetArgument(t, 1);
                s_22 = ATgetArgument(t, 2);
                {
                  ATerm h_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_17);
            t = s_22;
            t = map_1_0(w_2, t);
          }
        else
          {
            t = v_17;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm i_18 = ATgetArgument(t, 0);
                ATerm j_18 = ATgetArgument(t, 1);
                s_22 = ATgetArgument(t, 2);
                {
                  ATerm l_18 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = s_22;
            t = map_1_0(x_2, t);
          }
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATempty;
      }
    k_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_20, k_20);
    t = q_6(y_2, j_20, k_20, t);
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      h_24 = ATgetArgument(t, 0);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_24;
            e_24 = t;
            t = i_24;
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            t = i_24;
            e_24 = t;
            t = i_24;
          }
      }
    }
  else
    {
      t = i_24;
      e_24 = t;
      t = i_24;
    }
  t = term_m_16;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, term_m_16);
  t = c_7(h_3, e_24, g_24, t);
  t = i_24;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm l_6 (ATerm p_62, ATerm o_62, ATerm t)
{
  ATerm z_23 = NULL,b_24 = NULL,c_24 = NULL;
  ATerm e_3 (ATerm t)
  {
    t = p_62;
    t = def_tvars_0_0(t);
    t = map_1_0(f_3, t);
    t = p_62;
    {
      ATerm i_3 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              b_24 = ATgetArgument(t, 0);
            if(((z_23 != NULL) && (z_23 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              z_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, b_24);
        return(t);
      }
      t = split_dynamic_rule_1_0(i_3, t);
      if(((c_24 != NULL) && (c_24 != t)))
        _fail(t);
      else
        c_24 = t;
    }
    return(t);
  }
  t = scope_2_0(z_2, e_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_23)), not_null(c_24)), o_62);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm l_24 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        t = l_24(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = k_83(t);
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm listtd_1_0 (ATerm j_91 (ATerm), ATerm t)
{
  ATerm n_25 (ATerm t)
  {
    ATerm e_25 = NULL,g_25 = NULL,k_25 = NULL;
    t = j_91(t);
    e_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_25;
      }
    else
      {
        ATerm s_4 = NULL,v_4 = NULL,e_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_25 = ATgetFirst((ATermList) t);
            k_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_25);
        s_4 = t;
        t = k_25;
        t = n_25(t);
        v_4 = t;
        t = (ATerm) ATinsert(CheckATermList(v_4), g_25);
        e_0 = t;
        t = SSLsetAnnotations(e_0, s_4);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm r_25 = NULL,y_25 = NULL,a_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      a_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, y_25, l_26)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_25))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_26;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,m_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_30 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
      {
        ATerm u_5 = NULL,z_5 = NULL,a_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(f_30);
        u_5 = t;
        t = m_30;
        t = s_112(t);
        z_5 = t;
        t = c_30;
        t = q_112(t);
        a_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_5, a_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, u_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_30 = ATgetArgument(t, 0);
          c_30 = ATgetArgument(t, 1);
          d_30 = ATgetArgument(t, 2);
          e_30 = ATgetArgument(t, 3);
          {
            ATerm m_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,z_6 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(f_30);
            m_6 = t;
            t = m_30;
            t = s_112(t);
            u_6 = t;
            t = c_30;
            t = s_112(t);
            v_6 = t;
            t = d_30;
            t = s_112(t);
            w_6 = t;
            t = e_30;
            t = q_112(t);
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_6, v_6, w_6, z_6);
            k_1 = t;
            t = SSLsetAnnotations(k_1, m_6);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_30 = ATgetArgument(t, 0);
              c_30 = ATgetArgument(t, 1);
              d_30 = ATgetArgument(t, 2);
              e_30 = ATgetArgument(t, 3);
              {
                ATerm o_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(f_30);
                o_8 = t;
                t = m_30;
                t = s_112(t);
                u_8 = t;
                t = c_30;
                t = s_112(t);
                v_8 = t;
                t = d_30;
                t = s_112(t);
                w_8 = t;
                t = e_30;
                t = q_112(t);
                x_8 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_8, v_8, w_8, x_8);
                n_1 = t;
                t = SSLsetAnnotations(n_1, o_8);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_30 = ATgetArgument(t, 0);
                  {
                    ATerm g_9 = NULL,i_9 = NULL,i_2 = NULL;
                    t = SSLgetAnnotations(f_30);
                    g_9 = t;
                    t = m_30;
                    t = q_112(t);
                    i_9 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_9);
                    i_2 = t;
                    t = SSLsetAnnotations(i_2, g_9);
                  }
                }
              else
                {
                  ATerm o_9 = NULL,q_9 = NULL,l_2 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      m_30 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_30);
                  o_9 = t;
                  t = m_30;
                  t = q_112(t);
                  q_9 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_9);
                  l_2 = t;
                  t = SSLsetAnnotations(l_2, o_9);
                }
            }
        }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm j_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_31);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_31 = ATgetArgument(t, 0);
                  m_31 = ATgetArgument(t, 1);
                  n_31 = ATgetArgument(t, 2);
                  o_31 = ATgetArgument(t, 3);
                  t = n_31;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_31 = ATgetArgument(t, 0);
                      m_31 = ATgetArgument(t, 1);
                      n_31 = ATgetArgument(t, 2);
                      o_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_31;
                  t = map_1_0(r_3, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_32 = NULL;
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_32 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_19);
      t = b_32;
    }
  else
    {
      t = c_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_32;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_32 = NULL;
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_32 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = o_32;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_32;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm s_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_32);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm u_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_32 = ATgetArgument(t, 0);
                  x_32 = ATgetArgument(t, 1);
                  y_32 = ATgetArgument(t, 2);
                  z_32 = ATgetArgument(t, 3);
                  t = y_32;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_32 = ATgetArgument(t, 0);
                      x_32 = ATgetArgument(t, 1);
                      y_32 = ATgetArgument(t, 2);
                      z_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_32;
                  t = map_1_0(z_3, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm g_33 = NULL;
  ATerm o_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_33 = ATgetArgument(t, 0);
          {
            ATerm r_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_19);
      t = g_33;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_33;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm p_33 = NULL;
  ATerm v_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_33 = ATgetArgument(t, 0);
          {
            ATerm c_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = p_33;
    }
  else
    {
      t = v_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_31 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      h_31 = ATgetArgument(t, 0);
      t = h_31;
      t = free_vars_3_0(n_3, p_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
      t = free_vars_3_0(t_3, u_3, tboundin_3_0, t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
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
ATerm b_4 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_34 = ATgetArgument(t, 0);
                  h_34 = ATgetArgument(t, 1);
                  i_34 = ATgetArgument(t, 2);
                  j_34 = ATgetArgument(t, 3);
                  t = i_34;
                  t = map_1_0(c_4, t);
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
                  t = map_1_0(d_4, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_34 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_34 = ATgetArgument(t, 0);
          {
            ATerm l_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_20);
      t = w_34;
    }
  else
    {
      t = h_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_34;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm h_35 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm o_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = h_35;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm x_33 = NULL,b_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_34 = ATgetArgument(t, 0);
      t = b_34;
      if(match_cons(t, sym_Rule_3))
        {
          x_33 = ATgetArgument(t, 0);
          {
            ATerm r_20 = ATgetArgument(t, 1);
          }
          {
            ATerm w_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_33;
      t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_34;
    }
  return(t);
}
ATerm q_6 (ATerm e_94 (ATerm), ATerm k_26, ATerm j_26, ATerm t)
{
  ATerm q_36 (ATerm t)
  {
    ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
    l_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_36 = ATgetFirst((ATermList) t);
            n_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_36;
              {
                ATerm e_4 (ATerm t)
                {
                  t = j_26;
                  return(t);
                }
                t = r_6(e_94, e_4, m_36, n_36, t);
                t = q_36(t);
              }
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = y_20;
              {
                ATerm x_9 = NULL,a_10 = NULL,a_3 = NULL;
                t = SSLgetAnnotations(l_36);
                x_9 = t;
                t = n_36;
                t = q_36(t);
                a_10 = t;
                t = (ATerm) ATinsert(CheckATermList(a_10), m_36);
                a_3 = t;
                t = SSLsetAnnotations(a_3, x_9);
              }
            }
        }
      }
    return(t);
  }
  t = k_26;
  t = q_36(t);
  return(t);
}
ATerm r_6 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm o_26, ATerm n_26, ATerm t)
{
  t = i_94(t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm z_36 = NULL;
      z_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, z_36);
      t = h_94(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
    t = n_26;
  }
  return(t);
}
ATerm s_6 (ATerm z_93 (ATerm), ATerm i_26, ATerm h_26, ATerm t)
{
  ATerm v_37 (ATerm t)
  {
    ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
    q_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_37 = ATgetFirst((ATermList) t);
            s_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_37;
              {
                ATerm g_4 (ATerm t)
                {
                  t = h_26;
                  return(t);
                }
                t = r_6(z_93, g_4, r_37, s_37, t);
                t = v_37(t);
              }
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm m_10 = NULL,s_10 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(q_37);
                m_10 = t;
                t = s_37;
                t = v_37(t);
                s_10 = t;
                t = (ATerm) ATinsert(CheckATermList(s_10), r_37);
                p_8 = t;
                t = SSLsetAnnotations(p_8, m_10);
              }
            }
        }
      }
    return(t);
  }
  t = i_26;
  t = v_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm d_38 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_92(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_10 = NULL;
          t = e_92(t);
          c_38 = t;
          if(match_cons(t, sym__2))
            {
              y_37 = ATgetArgument(t, 0);
              z_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_38);
          x_37 = t;
          t = y_37;
          t = g_92(t);
          a_38 = t;
          t = z_37;
          t = d_38(t);
          b_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
          d_10 = t;
          t = SSLsetAnnotations(d_10, x_37);
          t = f_92(t);
        }
      }
    return(t);
  }
  t = d_38(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
        {
          m_38 = ATgetFirst((ATermList) i_21);
          n_38 = (ATerm) ATgetNext((ATermList) i_21);
        }
      else
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
          {
            o_38 = ATgetFirst((ATermList) j_21);
            p_38 = (ATerm) ATgetNext((ATermList) j_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_38, o_38), (ATerm) ATmakeAppl(sym__2, n_38, p_38));
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_38), q_38);
  return(t);
}
ATerm x_6 (ATerm u_579, ATerm z_579, ATerm i_54, ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  t = SSL_explode_term(z_579);
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_579);
  if(match_cons(t, sym__2))
    {
      if((f_38 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_38, h_38);
  t = genzip_4_0(h_4, j_4, k_4, _id, t);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, i_54);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm t_38 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = b_84(t);
        t = t_38(t);
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm for_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  t = d_84(t);
  t = while_not_2_0(e_84, f_84, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_39);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,j_10 = NULL;
  e_39 = t;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_39);
  b_39 = t;
  t = d_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  j_10 = t;
  t = SSLsetAnnotations(j_10, b_39);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  j_40 = t;
  if(match_cons(t, sym__2))
    {
      k_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_40 = ATgetFirst((ATermList) t);
      n_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_40(k_40, l_40, j_40, t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = m_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_40), m_40), n_40);
          }
      }
    }
  else
    {
      t = x_40(k_40, l_40, j_40, t);
    }
  return(t);
}
ATerm x_40 (ATerm f_39, ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm i_39 = NULL,l_39 = NULL,n_10 = NULL,o_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  t = SSLgetAnnotations(h_39);
  i_39 = t;
  t = g_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_39 = ATgetFirst((ATermList) t);
      c_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_39;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_40;
        if((a_40 != t))
          {
            _fail(t);
          }
        t = c_40;
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = g_39;
        t = x_6(a_40, b_40, c_40, t);
      }
    l_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_39, l_39);
    n_10 = t;
    t = SSLsetAnnotations(n_10, i_39);
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      if((w_40 != ATgetArgument(t, 1)))
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
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_4, m_4, n_4, t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
        r_40 = t;
        if(match_cons(t, sym__2))
          {
            s_40 = ATgetArgument(t, 0);
            t_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_40;
        t = s_6(o_4, s_40, t_40, t);
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(u_4, w_11, x_11, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      if((a_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(z_4, r_12, s_12, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      if((t_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_41 (ATerm t)
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_111(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_40 = NULL,a_41 = NULL,h_11 = NULL,i_11 = NULL;
              z_40 = t;
              t = m_111(t);
              a_41 = t;
              t = z_40;
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm c_41 = NULL;
                  t = l_41(t);
                  c_41 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_41, a_41);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_111(p_4, l_41, q_4, t);
                i_11 = t;
                t = SSL_explode_term(i_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_21 = ATgetArgument(t, 0);
                    h_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_11;
                t = foldr_3_0(r_4, t_4, _id, t);
              }
              ;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              {
                ATerm c_12 = NULL,d_12 = NULL;
                d_12 = t;
                t = SSL_explode_term(d_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_21 = ATgetArgument(t, 0);
                    c_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_12;
                t = foldr_3_0(w_4, x_4, l_41, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = bottomup_1_0(k_84, t);
    return(t);
  }
  t = SRTS_all(a_5, t);
  t = k_84(t);
  return(t);
}
ATerm b_7 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm m_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
  t = s_7(h_50, i_50, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_41 = ATgetFirst((ATermList) t);
      {
        ATerm a_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_41;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL;
        t = term_e_22;
        m_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, a_42);
        t = b_7(m_14, a_42, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_22) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, b_42, (ATerm) ATempty);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm h_15 = NULL;
          t = term_e_22;
          h_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_22, a_42);
          t = b_7(h_15, a_42, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, b_42, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm e_42 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_86(t);
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = SRTS_all(e_42, t);
      }
    return(t);
  }
  t = e_42(t);
  return(t);
}
ATerm c_7 (ATerm k_101 (ATerm), ATerm x_39, ATerm v_39, ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  t = k_101(t);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_42, x_39, v_39);
  t = t_7(f_42, x_39, v_39, t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_42 = NULL;
        t = term_n_22;
        l_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_42, term_n_22);
        t = s_7(f_42, l_42, t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_42 = ATgetFirst((ATermList) t);
        h_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_22;
    j_42 = t;
    t = (ATerm) ATinsert(CheckATermList(h_42), (ATerm) ATinsert(CheckATermList(g_42), x_39));
    k_42 = t;
    t = SSL_table_put(f_42, j_42, k_42);
    t = i_42;
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm p_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
      p_42 = ATgetArgument(t, 2);
      {
        ATerm w_42 = NULL,x_42 = NULL;
        t = s_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
        w_42 = t;
        t = term_p_22;
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_42), term_p_22);
        t = c_7(c_5, w_42, x_42, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, r_42, (ATerm)ATempty, p_42);
      }
    }
  else
    {
      ATerm a_43 = NULL,b_43 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          r_42 = ATgetArgument(t, 0);
          s_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_42;
      if(match_cons(t, sym_ConstType_1))
        {
          t_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
      a_43 = t;
      t = term_r_22;
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_42), term_r_22);
      t = c_7(d_5, a_43, b_43, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_42, (ATerm) ATmakeAppl(sym_ConstType_1, t_42));
    }
  return(t);
}
ATerm d_7 (ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL;
  g_43 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_50, c_50);
        t = s_7(b_50, c_50, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_22 = ATgetFirst((ATermList) t);
            f_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_22);
        t = SSL_table_put(b_50, c_50, f_43);
        t = (ATerm) ATmakeAppl(sym__3, b_50, c_50, f_43);
      }
    else
      {
        t = t_22;
        t = SSL_table_remove(b_50, c_50);
        t = (ATerm) ATmakeAppl(sym__2, b_50, c_50);
      }
    t = g_43;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  k_43 = t;
  t = h_101(t);
  j_43 = t;
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_43 = NULL;
        t = term_n_22;
        m_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_43, term_n_22);
        t = s_7(j_43, m_43, t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_43 = ATgetFirst((ATermList) t);
        h_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_22;
    l_43 = t;
    t = SSL_table_put(j_43, l_43, h_43);
    t = i_43;
    {
      ATerm e_5 (ATerm t)
      {
        ATerm n_43 = NULL;
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_43, n_43);
        t = d_7(j_43, n_43, t);
        return(t);
      }
      t = map_1_0(e_5, t);
      t = k_43;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_83(t);
      t = g_83(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      t = g_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,t_43 = NULL,u_43 = NULL,a_44 = NULL;
  q_43 = t;
  t = g_101(t);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_43, term_n_22);
  {
    ATerm b_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            ATerm h_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_22;
        e_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_43, term_n_22);
        t = s_7(p_43, e_44, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = b_23;
        t = (ATerm) ATempty;
      }
    t_43 = t;
    t = term_n_22;
    u_43 = t;
    t = (ATerm) ATinsert(CheckATermList(t_43), (ATerm) ATempty);
    a_44 = t;
    t = SSL_table_put(p_43, u_43, a_44);
    t = q_43;
  }
  return(t);
}
ATerm scope_2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = end_scope_1_0(i_101, t);
    return(t);
  }
  t = begin_scope_1_0(i_101, t);
  t = restore_always_2_0(j_101, f_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,x_10 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  j_44 = t;
  t = k_44;
  t = map_1_0(l_5, t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_44);
  x_10 = t;
  t = SSLsetAnnotations(x_10, j_44);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  c_45 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_45 = ATgetArgument(t, 0);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL,n_16 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(c_45);
            l_16 = t;
            t = b_45;
            t = map_1_0(p_5, t);
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_16);
            v_10 = t;
            t = SSLsetAnnotations(v_10, l_16);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = c_45;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          b_45 = ATgetArgument(t, 0);
          {
            ATerm k_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_17 = NULL,o_17 = NULL,w_10 = NULL;
                t = SSLgetAnnotations(c_45);
                e_17 = t;
                t = b_45;
                t = map_1_0(q_5, t);
                o_17 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, o_17);
                w_10 = t;
                t = SSLsetAnnotations(w_10, e_17);
                ;
                LocalPopChoice(m_23);
              }
            else
              {
                t = k_23;
                t = c_45;
              }
          }
        }
      else
        {
          t = c_45;
        }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(i_5, j_5, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_45;
    }
  else
    {
      ATerm r_5 (ATerm t)
      {
        t = not_null(q_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_45 = ATgetFirst((ATermList) t);
          if(((q_45 != NULL) && (q_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = at_end_1_0(r_5, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_46;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_46 = ATgetFirst((ATermList) t);
          h_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL,s_18 = NULL,t_18 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(f_46);
            k_18 = t;
            t = g_46;
            t = h_97(t);
            s_18 = t;
            t = h_46;
            t = filter_1_0(h_97, t);
            t_18 = t;
            t = (ATerm) ATinsert(CheckATermList(t_18), s_18);
            b_11 = t;
            t = SSLsetAnnotations(b_11, k_18);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = r_23;
            t = h_46;
            t = filter_1_0(h_97, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm z_46 (ATerm t)
  {
    ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
    x_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_46 = ATgetFirst((ATermList) t);
        w_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_19 = NULL,h_19 = NULL,d_11 = NULL;
          t = SSLgetAnnotations(x_46);
          e_19 = t;
          t = w_46;
          t = z_46(t);
          h_19 = t;
          t = (ATerm) ATinsert(CheckATermList(h_19), v_46);
          d_11 = t;
          t = SSLsetAnnotations(d_11, e_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_46;
        t = q_90(t);
      }
    return(t);
  }
  t = z_46(t);
  return(t);
}
ATerm r_47 (ATerm j_47, ATerm t)
{
  ATerm k_47 = NULL;
  t = SSL_explode_term(j_47);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  o_47 = t;
  if(match_cons(t, sym__2))
    {
      m_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              t = n_47;
              return(t);
            }
            t = m_47;
            t = at_end_1_0(s_5, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = r_47(o_47, t);
          }
      }
    }
  else
    {
      t = r_47(o_47, t);
    }
  return(t);
}
ATerm g_7 (ATerm i_114, ATerm e_114, ATerm t)
{
  ATerm s_47 = NULL,u_47 = NULL;
  ATerm t_5 (ATerm t)
  {
    ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
    z_47 = t;
    t = SSL_explode_term(z_47);
    if(match_cons(t, sym__2))
      {
        if(((s_47 != NULL) && (s_47 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_47 = ATgetArgument(t, 0);
        {
          ATerm x_23 = ATgetArgument(t, 1);
          if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
            {
              w_47 = ATgetFirst((ATermList) x_23);
              {
                ATerm y_23 = (ATerm) ATgetNext((ATermList) x_23);
                if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_47, not_null(u_47));
    t = conc_0_0(t);
    x_47 = t;
    t = (ATerm) ATinsert(ATempty, x_47);
    y_47 = t;
    t = SSL_mkterm(s_47, y_47);
    return(t);
  }
  t = SSL_explode_term(i_114);
  if(match_cons(t, sym__2))
    {
      if(((s_47 != NULL) && (s_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_47 = ATgetArgument(t, 0);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            if(((u_47 != NULL) && (u_47 != ATgetFirst((ATermList) a_24))))
              _fail(ATgetFirst((ATermList) a_24));
            else
              u_47 = ATgetFirst((ATermList) a_24);
            {
              ATerm d_24 = (ATerm) ATgetNext((ATermList) a_24);
              if(((ATgetType(d_24) != AT_LIST) || !(ATisEmpty(d_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_114;
  t = fetch_1_0(t_5, t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,f_48 = NULL,g_48 = NULL;
  c_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_48;
      t = f_96(t);
    }
  else
    {
      ATerm j_48 = NULL,k_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_48 = ATgetFirst((ATermList) t);
          g_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_48;
      t = h_96(t);
      j_48 = t;
      t = g_48;
      t = foldr_3_0(f_96, g_96, h_96, t);
      k_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
      t = g_96(t);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), term_j_24), term_f_24);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(r_48, s_48, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  u_48 = t;
  if(match_cons(t, sym_Signature_1))
    {
      t_48 = ATgetArgument(t, 0);
      {
        ATerm m_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_48 = NULL;
            t = t_48;
            t = filter_1_0(y_5, t);
            t = concat_0_0(t);
            y_48 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, y_48);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = m_24;
            t = u_48;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          t_48 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, t_48);
        }
      else
        {
          t = u_48;
        }
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_49;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,j_11 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  n_48 = t;
  t = o_48;
  t = foldr_3_0(v_5, w_5, x_5, t);
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_48);
  j_11 = t;
  t = SSLsetAnnotations(j_11, n_48);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm m_51 = NULL,p_51 = NULL,q_51 = NULL,s_51 = NULL,t_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym_LRule_1))
    {
      s_51 = ATgetArgument(t, 0);
      t = s_51;
      if(match_cons(t, sym_Rule_3))
        {
          m_51 = ATgetArgument(t, 0);
          p_51 = ATgetArgument(t, 1);
          q_51 = ATgetArgument(t, 2);
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_51 = NULL;
                t = m_51;
                t = free_vars_3_0(d_6, e_6, tboundin_3_0, t);
                x_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, x_51, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_51, p_51, q_51)));
                ;
                LocalPopChoice(s_24);
              }
            else
              {
                t = r_24;
                t = t_51;
              }
          }
        }
      else
        {
          t = t_51;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          s_51 = ATgetArgument(t, 0);
          {
            ATerm t_24 = t;
            int u_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_53 = NULL;
                t = s_51;
                t = free_vars_3_0(h_6, i_6, tboundin_3_0, t);
                o_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_53, s_51);
                ;
                LocalPopChoice(u_24);
              }
            else
              {
                t = t_24;
                t = t_51;
              }
          }
        }
      else
        {
          t = t_51;
        }
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm y_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_51);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm v_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = v_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm a_52 = NULL,b_52 = NULL,f_52 = NULL,h_52 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_52 = ATgetArgument(t, 0);
                  b_52 = ATgetArgument(t, 1);
                  f_52 = ATgetArgument(t, 2);
                  h_52 = ATgetArgument(t, 3);
                  t = f_52;
                  t = map_1_0(f_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_52 = ATgetArgument(t, 0);
                      b_52 = ATgetArgument(t, 1);
                      f_52 = ATgetArgument(t, 2);
                      h_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_52;
                  t = map_1_0(g_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm t_52 = NULL;
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_52 = ATgetArgument(t, 0);
          {
            ATerm c_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = t_52;
    }
  else
    {
      t = a_25;
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
ATerm g_6 (ATerm t)
{
  ATerm i_53 = NULL;
  ATerm d_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_53 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_25);
      t = i_53;
    }
  else
    {
      t = d_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_53;
    }
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm p_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_53);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_53 = ATgetArgument(t, 0);
                  u_53 = ATgetArgument(t, 1);
                  v_53 = ATgetArgument(t, 2);
                  w_53 = ATgetArgument(t, 3);
                  t = v_53;
                  t = map_1_0(j_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_53 = ATgetArgument(t, 0);
                      u_53 = ATgetArgument(t, 1);
                      v_53 = ATgetArgument(t, 2);
                      w_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_53;
                  t = map_1_0(k_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm k_54 = NULL;
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_54 = ATgetArgument(t, 0);
          {
            ATerm q_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_25);
      t = k_54;
    }
  else
    {
      t = o_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_54;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_54 = ATgetArgument(t, 0);
          {
            ATerm u_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_25);
      t = v_54;
    }
  else
    {
      t = s_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_54;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = Cons_2_0(o_6, p_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,v_11 = NULL;
  e_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  b_55 = t;
  t = c_55;
  t = topdown_1_0(t_6, t);
  t = listtd_1_0(a_7, t);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_55);
  v_11 = t;
  t = SSLsetAnnotations(v_11, b_55);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = repeat_2_0(e_7, _id, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_55 = ATgetFirst((ATermList) t);
      k_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_6(j_55, k_55, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
ATerm p_7 (ATerm t)
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
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,i_51 = NULL,j_51 = NULL,q_12 = NULL,p_12 = NULL,o_12 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(b_6, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(c_6, t);
  j_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  x_50 = t;
  t = y_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_51 = ATgetFirst((ATermList) t);
      b_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_50);
  z_50 = t;
  t = b_51;
  t = Cons_2_0(_id, n_6, t);
  c_51 = t;
  t = (ATerm) ATinsert(CheckATermList(c_51), a_51);
  o_12 = t;
  t = SSLsetAnnotations(o_12, z_50);
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_51);
  p_12 = t;
  t = SSLsetAnnotations(p_12, x_50);
  t = topdown_1_0(f_7, t);
  w_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_50);
  t_50 = t;
  t = u_50;
  t = fetch_1_0(p_7, t);
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_50);
  q_12 = t;
  t = SSLsetAnnotations(q_12, t_50);
  return(t);
}
ATerm h_7 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm w_55 = NULL;
  t = SSL_fputc(w_35, x_35);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_55);
  return(t);
}
ATerm i_7 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_write_term_to_stream_text(v_43, w_43);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_55);
  return(t);
}
ATerm k_7 (ATerm x_102 (ATerm), ATerm e_424, ATerm z_43, ATerm t)
{
  ATerm y_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_424, term_b_26);
  t = n_7(t);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_55, z_43);
  t = x_102(t);
  t = fclose_0_0(t);
  t = z_43;
  return(t);
}
ATerm j_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm c_56 = NULL;
  t = SSL_write_term_to_stream_baf(r_43, s_43);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_56);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm i_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(match_cons(c_26, sym_Stream_1))
        {
          i_56 = ATgetArgument(c_26, 0);
        }
      else
        _fail(t);
      k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(i_56, k_56, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm n_56 = NULL,p_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym_Stream_1))
        {
          u_56 = ATgetArgument(d_26, 0);
        }
      else
        _fail(t);
      v_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(u_56, v_56, t);
  n_56 = t;
  t = term_e_26;
  p_56 = t;
  t = n_56;
  if(match_cons(t, sym_Stream_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, n_56);
  t = h_7(p_56, t_56, t);
  return(t);
}
ATerm output_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  t = g_107(t);
  e_56 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_26;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = term_p_26;
      }
    d_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_26;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
          LocalPopChoice(r_26);
          if(match_cons(t, sym__2))
            {
              ATerm t_26 = ATgetArgument(t, 0);
              ATerm u_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7(q_7, d_56, e_56, t);
        }
      else
        {
          t = q_26;
          if(match_cons(t, sym__2))
            {
              ATerm v_26 = ATgetArgument(t, 0);
              ATerm w_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7(u_7, d_56, e_56, t);
        }
    }
  }
  return(t);
}
ATerm q_57 (ATerm h_57, ATerm t)
{
  t = SSL_fclose(h_57);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  n_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_57 = ATgetArgument(t, 0);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_57);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            t = q_57(n_57, t);
          }
      }
    }
  else
    {
      t = q_57(n_57, t);
    }
  return(t);
}
ATerm l_7 (ATerm x_43, ATerm t)
{
  t = SSL_read_term_from_stream(x_43);
  return(t);
}
ATerm m_7 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm t_57 = NULL;
  t = SSL_fopen(y_35, z_35);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_57 = NULL;
  t = SSL_stdin_stream();
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_57 = NULL;
  t = SSL_stdout_stream();
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_58 = NULL;
  t = SSL_stderr_stream();
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_58);
  return(t);
}
ATerm k_60 (ATerm i_58, ATerm t)
{
  ATerm j_58 = NULL;
  t = SSL_explode_term(i_58);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
          {
            j_58 = ATgetFirst((ATermList) a_27);
            {
              ATerm b_27 = (ATerm) ATgetNext((ATermList) a_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_60 (ATerm m_58, ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm r_58 = NULL,u_58 = NULL,v_58 = NULL,z_58 = NULL,r_13 = NULL;
  t = SSLgetAnnotations(q_58);
  v_58 = t;
  t = m_58;
  if(match_cons(t, sym_Path_1))
    {
      z_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_58, p_58);
  r_13 = t;
  t = SSLsetAnnotations(r_13, v_58);
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(r_58, u_58, t);
  return(t);
}
ATerm m_60 (ATerm b_59, ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,x_59 = NULL,s_13 = NULL;
  t = SSLgetAnnotations(d_59);
  g_59 = t;
  t = SSL_is_string(b_59);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_59, c_59);
  s_13 = t;
  t = SSLsetAnnotations(s_13, g_59);
  if(match_cons(t, sym__2))
    {
      e_59 = ATgetArgument(t, 0);
      f_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(e_59, f_59, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  h_60 = t;
  if(match_cons(t, sym__2))
    {
      i_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_60(h_60, t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_60(i_60, j_60, h_60, t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  t = m_60(i_60, j_60, h_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_60(h_60, t);
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_60 = NULL;
      q_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_60, term_j_27);
      t = n_7(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = debug_1_0(w_7, t);
      _fail(t);
    }
  o_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(p_60, t);
  n_60 = t;
  t = o_60;
  t = fclose_0_0(t);
  t = n_60;
  return(t);
}
ATerm input_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = term_n_27;
    }
  t = ReadFromFile_0_0(t);
  t = h_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  s_60 = t;
  t = term_o_27;
  t = whoami_0_0(t);
  t_60 = t;
  t = term_e_11;
  w_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_27), t_60), term_p_27);
  x_60 = t;
  t = SSL_printnl(w_60, x_60);
  t = term_g_11;
  v_60 = t;
  t = SSL_exit(v_60);
  t = s_60;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  if(match_string(t, "-k"))
    {
      t = a_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_61;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm b_61 = NULL,d_61 = NULL,e_61 = NULL;
  b_61 = t;
  t = SSL_string_to_int(b_61);
  d_61 = t;
  t = term_r_27;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_27, d_61);
  t = v_7(e_61, d_61, t);
  t = b_61;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  if(match_string(t, "-S"))
    {
      t = g_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_61;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm h_61 = NULL,m_61 = NULL;
  t = term_t_27;
  h_61 = t;
  t = term_u_27;
  m_61 = t;
  t = term_v_27;
  t = v_7(h_61, m_61, t);
  t = term_w_27;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  t = SSL_string_to_int(n_61);
  o_61 = t;
  t = term_t_27;
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, o_61);
  t = v_7(p_61, o_61, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_61);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL;
  t = term_z_27;
  q_61 = t;
  t = term_o_27;
  r_61 = t;
  t = term_a_28;
  t = v_7(q_61, r_61, t);
  t = term_b_28;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_8, b_8, c_8, t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_8, e_8, g_8, t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            t = Option_3_0(h_8, j_8, k_8, t);
          }
      }
    }
  return(t);
}
ATerm v_7 (ATerm y_44, ATerm z_44, ATerm t)
{
  ATerm s_61 = NULL;
  t = term_h_28;
  s_61 = t;
  t = SSL_table_put(s_61, y_44, z_44);
  t = (ATerm) ATmakeAppl(sym__3, term_h_28, y_44, z_44);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
      t = term_o_27;
      t = i_0(t);
      y_61 = t;
      t = term_i_28;
      z_61 = t;
      t = term_j_28;
      a_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_28, term_j_28, y_61);
      t = t_7(z_61, a_62, y_61, t);
      _fail(t);
    }
  else
    {
      ATerm d_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_61 = ATgetFirst((ATermList) t);
          x_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_61;
      t = d_0(t);
      t = term_o_27;
      t = g_0(t);
      d_62 = t;
      t = (ATerm) ATinsert(CheckATermList(x_61), d_62);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm g_62 = NULL;
  g_62 = t;
  if(match_string(t, "-o"))
    {
      t = g_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_62;
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  i_62 = t;
  t = term_m_26;
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, i_62);
  t = v_7(j_62, i_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_62);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
ATerm t_7 (ATerm w_49, ATerm x_49, ATerm v_49, ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_49, x_49);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            ATerm o_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_49, x_49);
        t = s_7(w_49, x_49, t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
    v_62 = t;
    t = (ATerm) ATinsert(CheckATermList(v_62), v_49);
    w_62 = t;
    t = SSL_table_put(w_49, x_49, w_62);
    t = u_62;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,m_64 = NULL,n_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_64 = NULL,p_64 = NULL,r_64 = NULL;
      t = term_o_27;
      t = r_0(t);
      o_64 = t;
      t = term_i_28;
      p_64 = t;
      t = term_j_28;
      r_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_28, term_j_28, o_64);
      t = t_7(p_64, r_64, o_64, t);
      _fail(t);
    }
  else
    {
      ATerm w_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_64 = ATgetFirst((ATermList) t);
          f_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_64 = ATgetFirst((ATermList) t);
          n_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_64;
      t = n_0(t);
      t = m_64;
      t = p_0(t);
      w_64 = t;
      t = (ATerm) ATinsert(CheckATermList(n_64), w_64);
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm a_65 = NULL;
  a_65 = t;
  if(match_string(t, "-i"))
    {
      t = a_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_65;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL;
  b_65 = t;
  t = term_m_27;
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_27, b_65);
  t = v_7(c_65, b_65, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_65);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, r_8, s_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_27;
  t = whoami_0_0(t);
  d_65 = t;
  t = term_e_11;
  f_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_28), d_65);
  g_65 = t;
  t = SSL_printnl(f_65, g_65);
  t = term_g_11;
  e_65 = t;
  t = SSL_exit(e_65);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_7 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_38, k_38);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      t = SSL_addr(j_38, k_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
  j_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_65;
      t = d_96(t);
    }
  else
    {
      ATerm o_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_65 = ATgetFirst((ATermList) t);
          l_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_65;
      t = foldr_2_0(d_96, e_96, t);
      o_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_65, o_65);
      t = e_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(a_20, b_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_65 = NULL,w_19 = NULL,x_19 = NULL;
  t = times_0_0(t);
  x_19 = t;
  t = SSL_explode_term(x_19);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  t = foldr_2_0(t_8, y_8, t);
  r_65 = t;
  t = SSL_TicksToSeconds(r_65);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  p_66 = t;
  if(match_cons(t, sym__2))
    {
      q_66 = ATgetArgument(t, 0);
      r_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_66;
        if((q_66 != t))
          {
            _fail(t);
          }
        t = p_66;
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_66, r_66);
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              t = SSL_gtr(q_66, r_66);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm a_67 = NULL;
  a_67 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_67 = NULL;
        t = term_t_27;
        t = get_config_0_0(t);
        f_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_67, term_g_11);
        t = geq_0_0(t);
        t = a_67;
        t = h_104(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = a_67;
      }
  }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,k_67 = NULL,l_67 = NULL;
  t = run_time_0_0(t);
  h_67 = t;
  t = term_o_27;
  t = whoami_0_0(t);
  i_67 = t;
  t = term_e_11;
  k_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_29), h_67), term_b_29), i_67);
  l_67 = t;
  t = SSL_printnl(k_67, l_67);
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_29), h_67), term_b_29), i_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_27;
  m_67 = t;
  t = SSL_exit(m_67);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  v_67 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_67;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_67 = ATgetArgument(t, 0);
          {
            ATerm z_20 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(v_67);
            z_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_67);
            j_15 = t;
            t = SSLsetAnnotations(j_15, z_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_67;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(a_9, t);
    }
  t = x_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_67 = ATgetFirst((ATermList) t);
      z_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_68 = NULL,e_68 = NULL;
        ATerm b_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_68)), not_null(e_68));
          return(t);
        }
        t = z_67;
        t = l_0(t);
        if(((d_68 != NULL) && (d_68 != t)))
          _fail(t);
        else
          d_68 = t;
        t = y_67;
        t = k_0(t);
        if(((e_68 != NULL) && (e_68 != t)))
          _fail(t);
        else
          e_68 = t;
        t = z_67;
        t = reverse_acc_2_0(k_0, b_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_27;
      t = l_0(t);
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm i_68 = NULL,l_68 = NULL,m_68 = NULL,u_15 = NULL;
  m_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_68);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_68);
  u_15 = t;
  t = SSLsetAnnotations(u_15, i_68);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm o_68 = NULL;
  o_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_68), term_g_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      t = fetch_1_0(c_9, t);
    }
  t = term_j_29;
  t = echo_0_0(t);
  t = term_i_28;
  g_68 = t;
  t = term_j_28;
  h_68 = t;
  t = term_k_29;
  t = s_7(g_68, h_68, t);
  t = reverse_acc_2_0(_id, d_9, t);
  t = map_1_0(e_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm n_69 (ATerm t)
  {
    ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
    k_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_69 = ATgetFirst((ATermList) t);
        m_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL,u_21 = NULL,w_15 = NULL;
          t = SSLgetAnnotations(k_69);
          h_21 = t;
          t = l_69;
          t = k_90(t);
          u_21 = t;
          t = (ATerm) ATinsert(CheckATermList(m_69), u_21);
          w_15 = t;
          t = SSLsetAnnotations(w_15, h_21);
          ;
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          {
            ATerm h_22 = NULL,m_22 = NULL,x_15 = NULL;
            t = SSLgetAnnotations(k_69);
            h_22 = t;
            t = m_69;
            t = n_69(t);
            m_22 = t;
            t = (ATerm) ATinsert(CheckATermList(m_22), l_69);
            x_15 = t;
            t = SSLsetAnnotations(x_15, h_22);
          }
        }
    }
    return(t);
  }
  t = n_69(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_29 = ATgetFirst((ATermList) t);
                ATerm q_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_69;
          }
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATinsert(ATempty, r_69);
      }
    s_69 = t;
    t = term_p_26;
    t_69 = t;
    t = SSL_printnl(t_69, s_69);
    t = r_69;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_7 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_strcat(q_34, r_34);
  return(t);
}
ATerm debug_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  x_69 = t;
  t = v_102(t);
  y_69 = t;
  t = term_e_11;
  z_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_69), y_69);
  a_70 = t;
  t = SSL_printnl(z_69, a_70);
  t = x_69;
  return(t);
}
ATerm map_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm p_70 (ATerm t)
  {
    ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
    m_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_70;
      }
    else
      {
        ATerm x_22 = NULL,c_23 = NULL,d_23 = NULL,c_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_70 = ATgetFirst((ATermList) t);
            o_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_70);
        x_22 = t;
        t = n_70;
        t = a_90(t);
        c_23 = t;
        t = o_70;
        t = p_70(t);
        d_23 = t;
        t = (ATerm) ATinsert(CheckATermList(d_23), c_23);
        c_16 = t;
        t = SSLsetAnnotations(c_16, x_22);
      }
    return(t);
  }
  t = p_70(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_70 = NULL;
      x_70 = t;
      t = SSL_is_string(x_70);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_9, t);
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
              d_71 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_71 = ATgetArgument(t, 0);
                  t = e_71;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_71 = ATgetArgument(t, 0);
                      t = e_71;
                      {
                        ATerm y_29 = t;
                        int z_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = y_29;
                            t = debug_1_0(h_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_71 = NULL,k_71 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_71 = ATgetArgument(t, 0);
                          f_71 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_71;
                      t = eval_config_0_0(t);
                      j_71 = t;
                      t = f_71;
                      t = eval_config_0_0(t);
                      k_71 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_71, k_71);
                      t = r_7(j_71, k_71, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm n_51, ATerm o_51, ATerm t)
{
  t = SSL_table_get(n_51, o_51);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  o_71 = t;
  t = term_h_28;
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, o_71);
  t = s_7(p_71, o_71, t);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_71 = NULL,r_71 = NULL;
        t = eval_config_0_0(t);
        q_71 = t;
        t = term_h_28;
        r_71 = t;
        t = SSL_table_put(r_71, o_71, q_71);
        t = q_71;
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
      }
  }
  return(t);
}
ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  t = term_g_30;
  u_71 = t;
  t = term_o_27;
  v_71 = t;
  t = term_h_30;
  t = v_7(u_71, v_71, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  t = term_g_30;
  y_71 = t;
  t = term_o_27;
  z_71 = t;
  t = term_h_30;
  t = v_7(y_71, z_71, t);
  t = term_j_30;
  w_71 = t;
  t = term_o_27;
  x_71 = t;
  t = term_k_30;
  t = v_7(w_71, x_71, t);
  t = term_l_30;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_9, k_9, l_9, t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = Option_3_0(m_9, n_9, p_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,u_16 = NULL;
  f_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_72 = ATgetFirst((ATermList) t);
      c_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_72);
  a_72 = t;
  t = b_72;
  t = q_68(t);
  d_72 = t;
  t = c_72;
  t = r_68(t);
  e_72 = t;
  t = (ATerm) ATinsert(CheckATermList(e_72), d_72);
  u_16 = t;
  t = SSLsetAnnotations(u_16, a_72);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,p_72 = NULL,q_72 = NULL,g_18 = NULL;
  k_72 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_30;
        t = a_109(t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
      }
    t = k_72;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_72 = ATgetFirst((ATermList) t);
        n_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_72);
    l_72 = t;
    t = term_r_28;
    q_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_28, m_72);
    t = v_7(q_72, m_72, t);
    t = n_72;
    {
      ATerm a_73 (ATerm t)
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_72 = NULL;
                t_72 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_72;
                ;
                LocalPopChoice(w_30);
              }
            else
              {
                t = v_30;
                t = a_109(t);
                t = Cons_2_0(_id, a_73, t);
              }
            ;
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm w_72 = NULL,x_72 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_72 = ATgetFirst((ATermList) t);
                  x_72 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_72), (ATerm) ATmakeAppl(sym_Undefined_1, w_72));
            }
          }
        return(t);
      }
      t = a_73(t);
      p_72 = t;
      t = (ATerm) ATinsert(CheckATermList(p_72), (ATerm) ATmakeAppl(sym_Program_1, m_72));
      g_18 = t;
      t = SSLsetAnnotations(g_18, l_72);
    }
  }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm m_73 = NULL;
  m_73 = t;
  if(match_string(t, "--help"))
    {
      t = m_73;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_73;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_73;
        }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL;
  t = term_f_29;
  n_73 = t;
  t = term_o_27;
  o_73 = t;
  t = term_x_30;
  t = v_7(n_73, o_73, t);
  t = term_y_30;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm v_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  h_73 = t;
  t = term_i_28;
  j_73 = t;
  t = term_j_28;
  k_73 = t;
  t = (ATerm) ATempty;
  l_73 = t;
  t = SSL_table_put(j_73, k_73, l_73);
  t = h_73;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_108(t);
          ;
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_9, t_9, u_9, t);
                ;
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_9, t);
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_73 = NULL;
          v_73 = t;
          {
            ATerm g_31 = t;
            int i_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_24 = NULL;
                t = v_73;
                {
                  ATerm k_31 = t;
                  int p_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_31);
                    }
                  else
                    {
                      t = k_31;
                      t = fetch_1_0(v_9, t);
                    }
                  t = v_73;
                  t = default_system_usage_0_0(t);
                  t = term_u_27;
                  n_24 = t;
                  t = SSL_exit(n_24);
                }
                ;
                LocalPopChoice(i_31);
              }
            else
              {
                t = g_31;
                {
                  ATerm w_24 = NULL;
                  t = term_g_30;
                  t = get_config_0_0(t);
                  t = v_73;
                  t = default_system_about_0_0(t);
                  t = term_u_27;
                  w_24 = t;
                  t = SSL_exit(w_24);
                }
              }
          }
          ;
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          {
            ATerm q_31 = t;
            int r_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
                ATerm w_9 (ATerm t)
                {
                  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,z_19 = NULL;
                  b_74 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_74);
                  z_73 = t;
                  t = a_74;
                  if(((f_73 != NULL) && (f_73 != t)))
                    _fail(t);
                  else
                    f_73 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_74);
                  z_19 = t;
                  t = SSLsetAnnotations(z_19, z_73);
                  return(t);
                }
                t = fetch_1_0(w_9, t);
                t = term_e_11;
                x_73 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_73)), term_s_31);
                y_73 = t;
                t = SSL_printnl(x_73, y_73);
                t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_73)), term_s_31));
                t = default_system_usage_0_0(t);
                t = term_g_11;
                w_73 = t;
                t = SSL_exit(w_73);
                ;
                LocalPopChoice(r_31);
              }
            else
              {
                t = q_31;
              }
          }
        }
      g_73 = t;
      t = term_i_28;
      i_73 = t;
      t = SSL_table_destroy(i_73);
      t = g_73;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  t = parse_options_1_0(z_106, t);
  g_74 = t;
  t = term_t_31;
  j_74 = t;
  t = SSL_table_create(j_74);
  t = term_t_31;
  h_74 = t;
  t = term_u_31;
  i_74 = t;
  t = SSL_table_put(h_74, i_74, g_74);
  t = g_74;
  t = b_107(t);
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_107, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            {
              ATerm e_32 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_10, c_10, e_10, t);
                  ;
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = e_32;
                  {
                    ATerm g_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = g_32;
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
ATerm z_9 (ATerm t)
{
  t = input_1_0(f_10, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL;
  t = term_s_26;
  l_74 = t;
  t = term_o_27;
  m_74 = t;
  t = term_i_32;
  t = v_7(l_74, m_74, t);
  t = term_j_32;
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_9, default_usage_0_0, _id, z_9, t);
  return(t);
}
