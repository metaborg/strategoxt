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
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_n_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
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
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
void init_constant_terms (void)
{
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Op_2, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Op_2, term_s_14, (ATerm) ATempty);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_16);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_17);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_20);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_e_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_x_26);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_x_26);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_x_26);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_x_26);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_x_26);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm a_4 (ATerm);
ATerm def_tvars_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm o_6 (ATerm x_62, ATerm w_62, ATerm);
ATerm repeat_1_0 (ATerm m_83 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm u_6 (ATerm f_94 (ATerm), ATerm c_26, ATerm b_26, ATerm);
ATerm v_6 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm g_26, ATerm f_26, ATerm);
ATerm w_6 (ATerm a_94 (ATerm), ATerm a_26, ATerm z_25, ATerm);
ATerm genzip_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm a_7 (ATerm d_574, ATerm i_574, ATerm w_53, ATerm);
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_42 (ATerm l_40, ATerm o_40, ATerm s_40, ATerm);
ATerm l_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm free_vars_3_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm e_7 (ATerm v_49, ATerm w_49, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm f_7 (ATerm f_101 (ATerm), ATerm j_38, ATerm h_38, ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm g_7 (ATerm p_49, ATerm q_49, ATerm);
ATerm end_scope_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm c_49 (ATerm p_48, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_7 (ATerm q_114, ATerm m_114, ATerm);
ATerm foldr_3_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm CombineSections_0_0 (ATerm);
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
ATerm h_8 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm k_7 (ATerm v_39, ATerm w_39, ATerm);
ATerm l_7 (ATerm j_43, ATerm k_43, ATerm);
ATerm n_7 (ATerm y_102 (ATerm), ATerm n_418, ATerm n_43, ATerm);
ATerm m_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm y_57 (ATerm m_57, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_7 (ATerm l_43, ATerm);
ATerm p_7 (ATerm x_39, ATerm y_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_61 (ATerm k_58, ATerm);
ATerm h_61 (ATerm r_58, ATerm s_58, ATerm t_58, ATerm);
ATerm j_61 (ATerm f_60, ATerm g_60, ATerm p_60, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_7 (ATerm m_44, ATerm n_44, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_7 (ATerm k_49, ATerm l_49, ATerm j_49, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_7 (ATerm v_36, ATerm w_36, ATerm);
ATerm foldr_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_9 (ATerm);
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm w_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_7 (ATerm l_34, ATerm m_34, ATerm);
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm u_7 (ATerm b_51, ATerm c_51, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm);
ATerm k_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
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
    ATerm b_11 = t;
    int c_11 = stack_ptr;
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
          ATerm d_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(r_0, t);
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = d_11;
            }
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), q_0);
          z_0 = t;
          t = SSLsetAnnotations(z_0, o_0);
        }
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_4, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11));
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_4 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_4, term_j_11);
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_5, term_j_11);
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
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11));
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11));
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_5 = NULL,x_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_5, term_j_11);
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
              t = term_n_11;
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
                  t = term_n_11;
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
                      t = term_o_11;
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
                            ATerm p_11 = t;
                            int q_11 = stack_ptr;
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
                                LocalPopChoice(q_11);
                              }
                            else
                              {
                                t = p_11;
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
                              t = (ATerm) ATmakeAppl(sym_App_2, p_3, (ATerm) ATmakeAppl(sym_Op_2, term_r_11, (ATerm) ATinsert(ATinsert(ATempty, g_3), o_3)));
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
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm u_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_11);
        t = r_9;
        {
          ATerm v_11 = t;
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
              t = term_x_11;
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, x_2);
              t = e_7(a_3, x_2, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm y_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_11) != ATmakeSymbol("l_0", 0, ATtrue)))
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
              t = v_11;
            }
          t = term_a_12;
        }
      }
    else
      {
        t = s_11;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_12;
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_12, d_10);
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_c_12, l_12);
                    }
                  }
                else
                  {
                    ATerm c_3 = NULL,h_3 = NULL,i_3 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm d_12 = ATgetArgument(t, 0);
                        ATerm e_12 = ATgetArgument(t, 1);
                        ATerm g_12 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_h_12;
                    h_3 = t;
                    t = (ATerm) ATinsert(ATempty, term_j_12);
                    i_3 = t;
                    t = SSL_printnl(h_3, i_3);
                    t = term_k_12;
                    c_3 = t;
                    t = SSL_exit(c_3);
                    t = (ATerm) ATinsert(ATempty, term_j_12);
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
  ATerm n_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = n_12;
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
  ATerm t_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_11 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_12);
      t = g_11;
    }
  else
    {
      t = t_12;
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
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_12 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_13);
      t = b_12;
    }
  else
    {
      t = z_12;
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
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
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
  ATerm e_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = f_13;
    }
  else
    {
      t = e_13;
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
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = w_13;
    }
  else
    {
      t = l_13;
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
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
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
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_18 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_13);
      t = h_18;
    }
  else
    {
      t = r_13;
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
  ATerm y_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm d_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_14);
      t = g_19;
    }
  else
    {
      t = y_13;
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
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
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
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_20 = ATgetArgument(t, 0);
          {
            ATerm n_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_14);
      t = d_20;
    }
  else
    {
      t = l_14;
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_20 = ATgetArgument(t, 0);
          {
            ATerm q_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_14);
      t = s_20;
    }
  else
    {
      t = o_14;
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
  t = term_x_11;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Var_1, a_21));
  t = e_7(k_3, j_3, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_14) != ATmakeSymbol("l_0", 0, ATtrue)))
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
    t = (ATerm) ATmakeAppl(sym__2, g_16, term_t_14);
    {
      ATerm w_14 = t;
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
          t = w_14;
        }
      t = new_0_0(t);
      t_16 = t;
      t = f_16;
      t = dummify_0_0(t);
      v_16 = t;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_16;
            if((f_16 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, t_16);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
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
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_17, (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_15, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, f_17)))), v_16)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_16, d_16, e_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_16), f_16), g_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_16)))), u_16), (ATerm) ATmakeAppl(sym_Op_2, term_a_15, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, f_17)))), h_16))));
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
              ATerm f_15 = t;
              int h_15 = stack_ptr;
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
                    ATerm i_15 = t;
                    int j_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_4;
                        if((v_21 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_4);
                        ;
                        LocalPopChoice(j_15);
                      }
                    else
                      {
                        t = i_15;
                        t = f_4;
                      }
                    u_4 = t;
                    t = k_21;
                    t = p_0(t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_4, (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, term_t_14), f_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_21, q_21, r_21, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_4), v_21), term_t_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_21)))), u_4), term_t_14), (ATerm) ATmakeAppl(sym_Seq_2, a_22, term_n_11)))));
                  }
                  ;
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = f_15;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_22))));
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_15;
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
      ATerm s_15 = ATgetArgument(t, 0);
      if(match_cons(s_15, sym__2))
        {
          v_22 = ATgetArgument(s_15, 0);
          w_22 = ATgetArgument(s_15, 1);
        }
      else
        _fail(t);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(match_cons(t_15, sym__2))
          {
            b_23 = ATgetArgument(t_15, 0);
            c_23 = ATgetArgument(t_15, 1);
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_23))));
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_15;
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
      ATerm w_15 = ATgetArgument(t, 0);
      if(match_cons(w_15, sym__2))
        {
          i_23 = ATgetArgument(w_15, 0);
          j_23 = ATgetArgument(w_15, 1);
        }
      else
        _fail(t);
      {
        ATerm x_15 = ATgetArgument(t, 1);
        if(match_cons(x_15, sym__2))
          {
            k_23 = ATgetArgument(x_15, 0);
            r_23 = ATgetArgument(x_15, 1);
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
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SRTS_one(w_23, t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_24);
  k_24 = t;
  t = term_b_16;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_24), term_b_16);
  t = f_7(t_3, k_24, l_24, t);
  t = j_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      ATerm j_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_112(t);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = j_16;
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
  if(match_cons(t, sym_Var_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_25);
  return(t);
}
ATerm v_3 (ATerm t)
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
        ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,s_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_25 = ATgetArgument(t, 0);
            t = m_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_25 = ATgetArgument(t, 0);
                n_25 = ATgetArgument(t, 1);
                o_25 = ATgetArgument(t, 2);
                s_25 = ATgetArgument(t, 3);
                t = o_25;
                t = map_1_0(w_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_25 = ATgetArgument(t, 0);
                    n_25 = ATgetArgument(t, 1);
                    o_25 = ATgetArgument(t, 2);
                    s_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_25;
                t = map_1_0(x_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm n_26 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_26 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = n_26;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_26;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm s_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_26 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = z_26;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm a_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_28 = ATgetArgument(t, 0);
      t = a_28;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_28 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_28;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm m_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_28 = ATgetArgument(t, 0);
      t = m_28;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_28 = ATgetArgument(t, 0);
          {
            ATerm a_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_28;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      b_29 = ATgetArgument(t, 0);
      if((b_29 != ATgetArgument(t, 1)))
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
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  j_25 = t;
  t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
  h_25 = t;
  t = j_25;
  {
    ATerm b_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm k_17 = ATgetArgument(t, 0);
                ATerm l_17 = ATgetArgument(t, 1);
                q_27 = ATgetArgument(t, 2);
                {
                  ATerm n_17 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_17);
            t = q_27;
            t = map_1_0(y_3, t);
          }
        else
          {
            t = i_17;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm p_17 = ATgetArgument(t, 0);
                ATerm u_17 = ATgetArgument(t, 1);
                q_27 = ATgetArgument(t, 2);
                {
                  ATerm v_17 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = q_27;
            t = map_1_0(z_3, t);
          }
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATempty;
      }
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
    t = u_6(a_4, h_25, i_25, t);
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,k_29 = NULL;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_29);
  h_29 = t;
  t = term_b_16;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_29), term_b_16);
  t = f_7(e_4, h_29, k_29, t);
  t = g_29;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm o_6 (ATerm x_62, ATerm w_62, ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  ATerm c_4 (ATerm t)
  {
    t = x_62;
    t = def_tvars_0_0(t);
    t = map_1_0(d_4, t);
    t = x_62;
    {
      ATerm g_4 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((d_29 != NULL) && (d_29 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              d_29 = ATgetArgument(t, 0);
            if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              c_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, d_29);
        return(t);
      }
      t = split_dynamic_rule_1_0(g_4, t);
      if(((e_29 != NULL) && (e_29 != t)))
        _fail(t);
      else
        e_29 = t;
    }
    return(t);
  }
  t = scope_2_0(b_4, c_4, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_29)), not_null(e_29)), w_62);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm p_29 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        t = p_29(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
      }
    return(t);
  }
  t = p_29(t);
  return(t);
}
ATerm listtd_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm d_30 (ATerm t)
  {
    ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
    t = k_91(t);
    a_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_30;
      }
    else
      {
        ATerm h_6 = NULL,n_6 = NULL,i_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_30 = ATgetFirst((ATermList) t);
            c_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_30);
        h_6 = t;
        t = c_30;
        t = d_30(t);
        n_6 = t;
        t = (ATerm) ATinsert(CheckATermList(n_6), b_30);
        i_1 = t;
        t = SSLsetAnnotations(i_1, h_6);
      }
    return(t);
  }
  t = d_30(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, i_30, l_30)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_30))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_30;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
      {
        ATerm b_7 = NULL,h_7 = NULL,i_7 = NULL,m_1 = NULL;
        t = SSLgetAnnotations(r_32);
        b_7 = t;
        t = s_32;
        t = t_112(t);
        h_7 = t;
        t = o_32;
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
          s_32 = ATgetArgument(t, 0);
          o_32 = ATgetArgument(t, 1);
          p_32 = ATgetArgument(t, 2);
          q_32 = ATgetArgument(t, 3);
          {
            ATerm f_8 = NULL,n_8 = NULL,q_8 = NULL,t_8 = NULL,u_8 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(r_32);
            f_8 = t;
            t = s_32;
            t = t_112(t);
            n_8 = t;
            t = o_32;
            t = t_112(t);
            q_8 = t;
            t = p_32;
            t = t_112(t);
            t_8 = t;
            t = q_32;
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
              s_32 = ATgetArgument(t, 0);
              o_32 = ATgetArgument(t, 1);
              p_32 = ATgetArgument(t, 2);
              q_32 = ATgetArgument(t, 3);
              {
                ATerm g_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,y_9 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(r_32);
                g_9 = t;
                t = s_32;
                t = t_112(t);
                s_9 = t;
                t = o_32;
                t = t_112(t);
                t_9 = t;
                t = p_32;
                t = t_112(t);
                x_9 = t;
                t = q_32;
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
                  s_32 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_32);
              l_10 = t;
              t = s_32;
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
ATerm h_4 (ATerm t)
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
ATerm i_4 (ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_33 = ATgetArgument(t, 0);
            t = c_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_33 = ATgetArgument(t, 0);
                d_33 = ATgetArgument(t, 1);
                e_33 = ATgetArgument(t, 2);
                f_33 = ATgetArgument(t, 3);
                t = e_33;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_33 = ATgetArgument(t, 0);
                    d_33 = ATgetArgument(t, 1);
                    e_33 = ATgetArgument(t, 2);
                    f_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_33;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm n_33 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_33 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = n_33;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_33;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm c_34 = NULL;
  ATerm g_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_34 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = c_34;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_34;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_35);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,i_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_35 = ATgetArgument(t, 0);
            t = d_35;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_35 = ATgetArgument(t, 0);
                e_35 = ATgetArgument(t, 1);
                f_35 = ATgetArgument(t, 2);
                i_35 = ATgetArgument(t, 3);
                t = f_35;
                t = map_1_0(t_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_35 = ATgetArgument(t, 0);
                    e_35 = ATgetArgument(t, 1);
                    f_35 = ATgetArgument(t, 2);
                    i_35 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_35;
                t = map_1_0(w_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm o_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_18);
      t = s_35;
    }
  else
    {
      t = m_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_35;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm d_36 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_36 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = d_36;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_36;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_34 = NULL,y_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_34 = ATgetArgument(t, 0);
      t = y_34;
      if(match_cons(t, sym_Rule_3))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
          {
            ATerm t_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_34;
      t = free_vars_3_0(l_4, n_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_34 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_34;
    }
  return(t);
}
ATerm u_6 (ATerm f_94 (ATerm), ATerm c_26, ATerm b_26, ATerm t)
{
  ATerm y_36 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
    r_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_36 = ATgetFirst((ATermList) t);
            t_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_36;
              {
                ATerm x_4 (ATerm t)
                {
                  t = b_26;
                  return(t);
                }
                t = v_6(f_94, x_4, s_36, t_36, t);
                t = y_36(t);
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm e_11 = NULL,m_11 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(r_36);
                e_11 = t;
                t = t_36;
                t = y_36(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), s_36);
                z_1 = t;
                t = SSLsetAnnotations(z_1, e_11);
              }
            }
        }
      }
    return(t);
  }
  t = c_26;
  t = y_36(t);
  return(t);
}
ATerm v_6 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm g_26, ATerm f_26, ATerm t)
{
  t = j_94(t);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm c_37 = NULL;
      c_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_26, c_37);
      t = i_94(t);
      return(t);
    }
    t = fetch_1_0(y_4, t);
    t = f_26;
  }
  return(t);
}
ATerm w_6 (ATerm a_94 (ATerm), ATerm a_26, ATerm z_25, ATerm t)
{
  ATerm w_37 (ATerm t)
  {
    ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
    n_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_37 = ATgetFirst((ATermList) t);
            p_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_37;
              {
                ATerm z_4 (ATerm t)
                {
                  t = z_25;
                  return(t);
                }
                t = v_6(a_94, z_4, o_37, p_37, t);
                t = w_37(t);
              }
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm w_11 = NULL,f_12 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(n_37);
                w_11 = t;
                t = p_37;
                t = w_37(t);
                f_12 = t;
                t = (ATerm) ATinsert(CheckATermList(f_12), o_37);
                c_2 = t;
                t = SSLsetAnnotations(c_2, w_11);
              }
            }
        }
      }
    return(t);
  }
  t = a_26;
  t = w_37(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
{
  ATerm s_38 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_92(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,e_2 = NULL;
          t = f_92(t);
          o_38 = t;
          if(match_cons(t, sym__2))
            {
              z_37 = ATgetArgument(t, 0);
              a_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_38);
          y_37 = t;
          t = z_37;
          t = h_92(t);
          m_38 = t;
          t = a_38;
          t = s_38(t);
          n_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
          e_2 = t;
          t = SSLsetAnnotations(e_2, y_37);
          t = g_92(t);
        }
      }
    return(t);
  }
  t = s_38(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
        _fail(t);
      {
        ATerm f_19 = ATgetArgument(t, 1);
        if(((ATgetType(f_19) != AT_LIST) || !(ATisEmpty(f_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
        {
          z_38 = ATgetFirst((ATermList) h_19);
          a_39 = (ATerm) ATgetNext((ATermList) h_19);
        }
      else
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            b_39 = ATgetFirst((ATermList) i_19);
            c_39 = (ATerm) ATgetNext((ATermList) i_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_38, b_39), (ATerm) ATmakeAppl(sym__2, a_39, c_39));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_39), d_39);
  return(t);
}
ATerm a_7 (ATerm d_574, ATerm i_574, ATerm w_53, ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = SSL_explode_term(i_574);
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_574);
  if(match_cons(t, sym__2))
    {
      if((u_38 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
  t = genzip_4_0(a_5, b_5, d_5, _id, t);
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, w_53);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm i_39 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = c_84(t);
        t = i_39(t);
      }
    return(t);
  }
  t = i_39(t);
  return(t);
}
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  t = e_84(t);
  t = while_not_2_0(f_84, g_84, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_40);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm e_40 = NULL,h_40 = NULL,i_40 = NULL,k_40 = NULL,i_2 = NULL;
  k_40 = t;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_40);
  e_40 = t;
  t = i_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_40, i_40);
  i_2 = t;
  t = SSLsetAnnotations(i_2, e_40);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm p_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  p_41 = t;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_41 = ATgetFirst((ATermList) t);
      z_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_42(w_41, x_41, p_41, t);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_41), y_41), z_41);
          }
      }
    }
  else
    {
      t = l_42(w_41, x_41, p_41, t);
    }
  return(t);
}
ATerm l_42 (ATerm l_40, ATerm o_40, ATerm s_40, ATerm t)
{
  ATerm v_40 = NULL,z_40 = NULL,n_2 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  t = SSLgetAnnotations(s_40);
  v_40 = t;
  t = o_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_41 = ATgetFirst((ATermList) t);
      j_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_41;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_41;
        if((h_41 != t))
          {
            _fail(t);
          }
        t = j_41;
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = o_40;
        t = a_7(h_41, i_41, j_41, t);
      }
    z_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_40, z_40);
    n_2 = t;
    t = SSLsetAnnotations(n_2, v_40);
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      if((k_42 != ATgetArgument(t, 1)))
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
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_5, j_5, k_5, t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
        d_42 = t;
        if(match_cons(t, sym__2))
          {
            e_42 = ATgetArgument(t, 0);
            f_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_42;
        t = w_6(l_5, e_42, f_42, t);
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(q_5, j_13, k_13, t);
  return(t);
}
ATerm q_5 (ATerm t)
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
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(y_5, e_14, f_14, t);
  return(t);
}
ATerm y_5 (ATerm t)
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
  ATerm z_42 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_111(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_42 = NULL,o_42 = NULL,u_12 = NULL,v_12 = NULL;
              n_42 = t;
              t = n_111(t);
              o_42 = t;
              t = n_42;
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm q_42 = NULL;
                  t = z_42(t);
                  q_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_42, o_42);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_111(m_5, z_42, n_5, t);
                v_12 = t;
                t = SSL_explode_term(v_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_20 = ATgetArgument(t, 0);
                    u_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_12;
                t = foldr_3_0(o_5, p_5, _id, t);
              }
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm t_13 = NULL,u_13 = NULL;
                u_13 = t;
                t = SSL_explode_term(u_13);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_20 = ATgetArgument(t, 0);
                    t_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_13;
                t = foldr_3_0(s_5, w_5, z_42, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    t = bottomup_1_0(l_84, t);
    return(t);
  }
  t = SRTS_all(z_5, t);
  t = l_84(t);
  return(t);
}
ATerm e_7 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm a_43 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
  t = u_7(v_49, w_49, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_43 = ATgetFirst((ATermList) t);
      {
        ATerm g_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_43;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL;
        t = term_j_20;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, v_43);
        t = e_7(u_14, v_43, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, w_43, (ATerm) ATempty);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm l_15 = NULL;
          t = term_j_20;
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_20, v_43);
          t = e_7(l_15, v_43, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, w_43, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm z_43 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = SRTS_all(z_43, t);
      }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm f_7 (ATerm f_101 (ATerm), ATerm j_38, ATerm h_38, ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  t = f_101(t);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_44, j_38, h_38);
  t = v_7(a_44, j_38, h_38, t);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_44 = NULL;
        t = term_q_20;
        g_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_44, term_q_20);
        t = u_7(a_44, g_44, t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_44 = ATgetFirst((ATermList) t);
        c_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_20;
    e_44 = t;
    t = (ATerm) ATinsert(CheckATermList(c_44), (ATerm) ATinsert(CheckATermList(b_44), j_38));
    f_44 = t;
    t = SSL_table_put(a_44, e_44, f_44);
    t = d_44;
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm k_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
      k_44 = ATgetArgument(t, 2);
      {
        ATerm t_44 = NULL,u_44 = NULL;
        t = p_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
        t_44 = t;
        t = term_t_20;
        u_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_44), term_t_20);
        t = f_7(a_6, t_44, u_44, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_44, (ATerm)ATempty, k_44);
      }
    }
  else
    {
      ATerm c_45 = NULL,d_45 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          o_44 = ATgetArgument(t, 0);
          p_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_44;
      if(match_cons(t, sym_ConstType_1))
        {
          q_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
      c_45 = t;
      t = term_v_20;
      d_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_44), term_v_20);
      t = f_7(b_6, c_45, d_45, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_44, (ATerm) ATmakeAppl(sym_ConstType_1, q_44));
    }
  return(t);
}
ATerm g_7 (ATerm p_49, ATerm q_49, ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  i_45 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
        t = u_7(p_49, q_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_21 = ATgetFirst((ATermList) t);
            h_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        t = SSL_table_put(p_49, q_49, h_45);
        t = (ATerm) ATmakeAppl(sym__3, p_49, q_49, h_45);
      }
    else
      {
        t = w_20;
        t = SSL_table_remove(p_49, q_49);
        t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
      }
    t = i_45;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  m_45 = t;
  t = c_101(t);
  l_45 = t;
  {
    ATerm d_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 = NULL;
        t = term_q_20;
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_45, term_q_20);
        t = u_7(l_45, o_45, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_45 = ATgetFirst((ATermList) t);
        j_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_20;
    n_45 = t;
    t = SSL_table_put(l_45, n_45, j_45);
    t = k_45;
    {
      ATerm c_6 (ATerm t)
      {
        ATerm p_45 = NULL;
        p_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_45, p_45);
        t = g_7(l_45, p_45, t);
        return(t);
      }
      t = map_1_0(c_6, t);
      t = m_45;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_83(t);
      t = g_83(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = h_21;
      t = g_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  s_45 = t;
  t = b_101(t);
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, term_q_20);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_21 = ATgetArgument(t, 0);
            ATerm p_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_20;
        z_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_45, term_q_20);
        t = u_7(r_45, z_45, t);
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATempty;
      }
    t_45 = t;
    t = term_q_20;
    u_45 = t;
    t = (ATerm) ATinsert(CheckATermList(t_45), (ATerm) ATempty);
    v_45 = t;
    t = SSL_table_put(r_45, u_45, v_45);
    t = s_45;
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    t = end_scope_1_0(d_101, t);
    return(t);
  }
  t = begin_scope_1_0(d_101, t);
  t = restore_always_2_0(e_101, d_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,b_3 = NULL;
  h_46 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_46);
  e_46 = t;
  t = f_46;
  t = map_1_0(g_6, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_46);
  b_3 = t;
  t = SSLsetAnnotations(b_3, e_46);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  v_46 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      u_46 = ATgetArgument(t, 0);
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL,n_16 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(v_46);
            l_16 = t;
            t = u_46;
            t = map_1_0(i_6, t);
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_16);
            t_2 = t;
            t = SSLsetAnnotations(t_2, l_16);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = v_46;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          u_46 = ATgetArgument(t, 0);
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,y_17 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(v_46);
                m_17 = t;
                t = u_46;
                t = map_1_0(j_6, t);
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, y_17);
                u_2 = t;
                t = SSLsetAnnotations(u_2, m_17);
                ;
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                t = v_46;
              }
          }
        }
      else
        {
          t = v_46;
        }
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(e_6, f_6, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_47;
    }
  else
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(e_47);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_47 = ATgetFirst((ATermList) t);
          if(((e_47 != NULL) && (e_47 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_47;
      t = at_end_1_0(k_6, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_47;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_47 = ATgetFirst((ATermList) t);
          v_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_18 = NULL,y_18 = NULL,z_18 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(t_47);
            v_18 = t;
            t = u_47;
            t = i_97(t);
            y_18 = t;
            t = v_47;
            t = filter_1_0(i_97, t);
            z_18 = t;
            t = (ATerm) ATinsert(CheckATermList(z_18), y_18);
            k_9 = t;
            t = SSLsetAnnotations(k_9, v_18);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = v_47;
            t = filter_1_0(i_97, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm l_48 (ATerm t)
  {
    ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
    k_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_48 = ATgetFirst((ATermList) t);
        j_48 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_19 = NULL,u_19 = NULL,m_9 = NULL;
          t = SSLgetAnnotations(k_48);
          n_19 = t;
          t = j_48;
          t = l_48(t);
          u_19 = t;
          t = (ATerm) ATinsert(CheckATermList(u_19), i_48);
          m_9 = t;
          t = SSLsetAnnotations(m_9, n_19);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_48;
        t = r_90(t);
      }
    return(t);
  }
  t = l_48(t);
  return(t);
}
ATerm c_49 (ATerm p_48, ATerm t)
{
  ATerm q_48 = NULL;
  t = SSL_explode_term(p_48);
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_48;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  z_48 = t;
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
      {
        ATerm j_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              t = y_48;
              return(t);
            }
            t = x_48;
            t = at_end_1_0(l_6, t);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = j_22;
            t = c_49(z_48, t);
          }
      }
    }
  else
    {
      t = c_49(z_48, t);
    }
  return(t);
}
ATerm j_7 (ATerm q_114, ATerm m_114, ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm f_49 = NULL,g_49 = NULL,i_49 = NULL,m_49 = NULL;
    m_49 = t;
    t = SSL_explode_term(m_49);
    if(match_cons(t, sym__2))
      {
        if(((d_49 != NULL) && (d_49 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_49 = ATgetArgument(t, 0);
        {
          ATerm m_22 = ATgetArgument(t, 1);
          if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
            {
              f_49 = ATgetFirst((ATermList) m_22);
              {
                ATerm n_22 = (ATerm) ATgetNext((ATermList) m_22);
                if(((ATgetType(n_22) != AT_LIST) || !(ATisEmpty(n_22))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_49, not_null(e_49));
    t = conc_0_0(t);
    g_49 = t;
    t = (ATerm) ATinsert(ATempty, g_49);
    i_49 = t;
    t = SSL_mkterm(d_49, i_49);
    return(t);
  }
  t = SSL_explode_term(q_114);
  if(match_cons(t, sym__2))
    {
      if(((d_49 != NULL) && (d_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_49 = ATgetArgument(t, 0);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
          {
            if(((e_49 != NULL) && (e_49 != ATgetFirst((ATermList) q_22))))
              _fail(ATgetFirst((ATermList) q_22));
            else
              e_49 = ATgetFirst((ATermList) q_22);
            {
              ATerm s_22 = (ATerm) ATgetNext((ATermList) q_22);
              if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
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
  t = fetch_1_0(m_6, t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_49;
      t = g_96(t);
    }
  else
    {
      ATerm y_49 = NULL,z_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_49 = ATgetFirst((ATermList) t);
          t_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      t = i_96(t);
      y_49 = t;
      t = t_49;
      t = foldr_3_0(g_96, h_96, i_96, t);
      z_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
      t = h_96(t);
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), term_y_22), term_x_22);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(g_50, h_50, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  j_50 = t;
  if(match_cons(t, sym_Signature_1))
    {
      i_50 = ATgetArgument(t, 0);
      {
        ATerm a_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_50 = NULL;
            t = i_50;
            t = filter_1_0(s_6, t);
            t = concat_0_0(t);
            l_50 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_50);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = a_23;
            t = j_50;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          i_50 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, i_50);
        }
      else
        {
          t = j_50;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm m_50 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_50;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,w_12 = NULL;
  f_50 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_50);
  c_50 = t;
  t = d_50;
  t = foldr_3_0(p_6, q_6, r_6, t);
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_50);
  w_12 = t;
  t = SSLsetAnnotations(w_12, c_50);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm e_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = e_23;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
  g_52 = t;
  if(match_cons(t, sym_LRule_1))
    {
      f_52 = ATgetArgument(t, 0);
      t = f_52;
      if(match_cons(t, sym_Rule_3))
        {
          c_52 = ATgetArgument(t, 0);
          d_52 = ATgetArgument(t, 1);
          e_52 = ATgetArgument(t, 2);
          {
            ATerm m_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_52 = NULL;
                t = c_52;
                t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
                k_52 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_52, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_52, d_52, e_52)));
                ;
                LocalPopChoice(o_23);
              }
            else
              {
                t = m_23;
                t = g_52;
              }
          }
        }
      else
        {
          t = g_52;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          f_52 = ATgetArgument(t, 0);
          {
            ATerm p_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_53 = NULL;
                t = f_52;
                t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
                x_53 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, x_53, f_52);
                ;
                LocalPopChoice(s_23);
              }
            else
              {
                t = p_23;
                t = g_52;
              }
          }
        }
      else
        {
          t = g_52;
        }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm l_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_52);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_52 = ATgetArgument(t, 0);
            t = p_52;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_52 = ATgetArgument(t, 0);
                q_52 = ATgetArgument(t, 1);
                r_52 = ATgetArgument(t, 2);
                s_52 = ATgetArgument(t, 3);
                t = r_52;
                t = map_1_0(c_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_52 = ATgetArgument(t, 0);
                    q_52 = ATgetArgument(t, 1);
                    r_52 = ATgetArgument(t, 2);
                    s_52 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_52;
                t = map_1_0(d_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm d_53 = NULL;
  ATerm v_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_53 = ATgetArgument(t, 0);
          {
            ATerm y_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_23);
      t = d_53;
    }
  else
    {
      t = v_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_53;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_53 = ATgetArgument(t, 0);
          {
            ATerm d_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_24);
      t = m_53;
    }
  else
    {
      t = b_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_53;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm y_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_53);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm e_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = e_24;
      {
        ATerm e_54 = NULL,g_54 = NULL,i_54 = NULL,k_54 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_54 = ATgetArgument(t, 0);
            t = e_54;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_54 = ATgetArgument(t, 0);
                g_54 = ATgetArgument(t, 1);
                i_54 = ATgetArgument(t, 2);
                k_54 = ATgetArgument(t, 3);
                t = i_54;
                t = map_1_0(w_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_54 = ATgetArgument(t, 0);
                    g_54 = ATgetArgument(t, 1);
                    i_54 = ATgetArgument(t, 2);
                    k_54 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_54;
                t = map_1_0(y_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm h_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_54 = ATgetArgument(t, 0);
          {
            ATerm q_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_24);
      t = w_54;
    }
  else
    {
      t = h_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_54;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm l_55 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_55 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_24);
      t = l_55;
    }
  else
    {
      t = r_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_55;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = Cons_2_0(a_8, b_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,i_13 = NULL;
  u_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_55);
  r_55 = t;
  t = s_55;
  t = topdown_1_0(c_8, t);
  t = listtd_1_0(d_8, t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_55);
  i_13 = t;
  t = SSLsetAnnotations(i_13, r_55);
  return(t);
}
ATerm b_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = repeat_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_56 = ATgetFirst((ATermList) t);
      e_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_6(d_56, e_56, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm h_56 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, h_56)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,s_51 = NULL,v_51 = NULL,b_14 = NULL,a_14 = NULL,v_13 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(t_6, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(x_6, t);
  v_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_51);
  l_51 = t;
  t = m_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_51 = ATgetFirst((ATermList) t);
      p_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_51);
  n_51 = t;
  t = p_51;
  t = Cons_2_0(_id, z_7, t);
  q_51 = t;
  t = (ATerm) ATinsert(CheckATermList(q_51), o_51);
  v_13 = t;
  t = SSLsetAnnotations(v_13, n_51);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_51);
  a_14 = t;
  t = SSLsetAnnotations(a_14, l_51);
  t = topdown_1_0(g_8, t);
  k_51 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_51);
  g_51 = t;
  t = h_51;
  t = fetch_1_0(h_8, t);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_51);
  b_14 = t;
  t = SSLsetAnnotations(b_14, g_51);
  return(t);
}
ATerm k_7 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm i_56 = NULL;
  t = SSL_fputc(v_39, w_39);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_56);
  return(t);
}
ATerm l_7 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm j_56 = NULL;
  t = SSL_write_term_to_stream_text(j_43, k_43);
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_56);
  return(t);
}
ATerm n_7 (ATerm y_102 (ATerm), ATerm n_418, ATerm n_43, ATerm t)
{
  ATerm k_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_418, term_y_24);
  t = open_stream_0_0(t);
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_56, n_43);
  t = y_102(t);
  t = fclose_0_0(t);
  t = n_43;
  return(t);
}
ATerm m_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm o_56 = NULL;
  t = SSL_write_term_to_stream_baf(f_43, g_43);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_56);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if(match_cons(z_24, sym_Stream_1))
        {
          t_56 = ATgetArgument(z_24, 0);
        }
      else
        _fail(t);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(t_56, u_56, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,e_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if(match_cons(a_25, sym_Stream_1))
        {
          z_56 = ATgetArgument(a_25, 0);
        }
      else
        _fail(t);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(z_56, e_57, t);
  w_56 = t;
  t = term_b_25;
  x_56 = t;
  t = w_56;
  if(match_cons(t, sym_Stream_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, w_56);
  t = k_7(x_56, y_56, t);
  return(t);
}
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  t = h_107(t);
  r_56 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_25;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = term_g_25;
      }
    q_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
    {
      ATerm l_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_25;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
          LocalPopChoice(p_25);
          if(match_cons(t, sym__2))
            {
              ATerm t_25 = ATgetArgument(t, 0);
              ATerm u_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_7(i_8, q_56, r_56, t);
        }
      else
        {
          t = l_25;
          if(match_cons(t, sym__2))
            {
              ATerm v_25 = ATgetArgument(t, 0);
              ATerm w_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_7(j_8, q_56, r_56, t);
        }
    }
  }
  return(t);
}
ATerm y_57 (ATerm m_57, ATerm t)
{
  t = SSL_fclose(m_57);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_57 = ATgetArgument(t, 0);
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_57);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = y_57(w_57, t);
          }
      }
    }
  else
    {
      t = y_57(w_57, t);
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
  ATerm z_57 = NULL;
  t = SSL_fopen(x_39, y_39);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_58 = NULL;
  t = SSL_stdin_stream();
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_58);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_58 = NULL;
  t = SSL_stdout_stream();
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_58);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_58 = NULL;
  t = SSL_stderr_stream();
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_58);
  return(t);
}
ATerm c_61 (ATerm k_58, ATerm t)
{
  ATerm n_58 = NULL;
  t = SSL_explode_term(k_58);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            n_58 = ATgetFirst((ATermList) e_26);
            {
              ATerm h_26 = (ATerm) ATgetNext((ATermList) e_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_61 (ATerm r_58, ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,z_58 = NULL,j_14 = NULL;
  t = SSLgetAnnotations(t_58);
  w_58 = t;
  t = r_58;
  if(match_cons(t, sym_Path_1))
    {
      z_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_58, s_58);
  j_14 = t;
  t = SSLsetAnnotations(j_14, w_58);
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(u_58, v_58, t);
  return(t);
}
ATerm j_61 (ATerm f_60, ATerm g_60, ATerm p_60, ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,x_60 = NULL,k_14 = NULL;
  t = SSLgetAnnotations(p_60);
  s_60 = t;
  t = SSL_is_string(f_60);
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_60, g_60);
  k_14 = t;
  t = SSLsetAnnotations(k_14, s_60);
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      r_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(q_60, r_60, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      ATerm j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  z_60 = t;
  if(match_cons(t, sym__2))
    {
      a_61 = ATgetArgument(t, 0);
      b_61 = ATgetArgument(t, 1);
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_61(z_60, t);
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm m_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_61(a_61, b_61, z_60, t);
                  ;
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = m_26;
                  t = j_61(a_61, b_61, z_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_61(z_60, t);
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_61 = NULL,n_61 = NULL,q_61 = NULL;
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_61 = NULL;
      r_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_61, term_s_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = debug_1_0(k_8, t);
      _fail(t);
    }
  n_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(q_61, t);
  k_61 = t;
  t = n_61;
  t = fclose_0_0(t);
  t = k_61;
  return(t);
}
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = term_w_26;
    }
  t = ReadFromFile_0_0(t);
  t = i_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  t_61 = t;
  t = term_x_26;
  t = whoami_0_0(t);
  u_61 = t;
  t = term_h_12;
  z_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_27), u_61), term_y_26);
  a_62 = t;
  t = SSL_printnl(z_61, a_62);
  t = term_k_12;
  y_61 = t;
  t = SSL_exit(y_61);
  t = t_61;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm c_62 = NULL;
  c_62 = t;
  if(match_string(t, "-k"))
    {
      t = c_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_62;
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,g_62 = NULL;
  d_62 = t;
  t = SSL_string_to_int(d_62);
  e_62 = t;
  t = term_b_27;
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, e_62);
  t = x_7(g_62, e_62, t);
  t = d_62;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, o_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  if(match_string(t, "-S"))
    {
      t = i_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_62;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = term_d_27;
  j_62 = t;
  t = term_e_27;
  k_62 = t;
  t = term_f_27;
  t = x_7(j_62, k_62, t);
  t = term_g_27;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm n_62 = NULL,p_62 = NULL,b_63 = NULL;
  n_62 = t;
  t = SSL_string_to_int(n_62);
  p_62 = t;
  t = term_d_27;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_27, p_62);
  t = x_7(b_63, p_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_62);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL;
  t = term_j_27;
  c_63 = t;
  t = term_x_26;
  d_63 = t;
  t = term_k_27;
  t = x_7(c_63, d_63, t);
  t = term_l_27;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_8, r_8, s_8, t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_8, w_8, x_8, t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = p_27;
            t = Option_3_0(y_8, z_8, a_9, t);
          }
      }
    }
  return(t);
}
ATerm x_7 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm e_63 = NULL;
  t = term_s_27;
  e_63 = t;
  t = SSL_table_put(e_63, m_44, n_44);
  t = (ATerm) ATmakeAppl(sym__3, term_s_27, m_44, n_44);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm j_63 = NULL,i_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_64 = NULL,k_64 = NULL,m_64 = NULL;
      t = term_x_26;
      t = f_0(t);
      j_64 = t;
      t = term_t_27;
      k_64 = t;
      t = term_u_27;
      m_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, j_64);
      t = v_7(k_64, m_64, j_64, t);
      _fail(t);
    }
  else
    {
      ATerm s_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_63 = ATgetFirst((ATermList) t);
          i_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_63;
      t = b_0(t);
      t = term_x_26;
      t = d_0(t);
      s_64 = t;
      t = (ATerm) ATinsert(CheckATermList(i_64), s_64);
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm v_64 = NULL;
  v_64 = t;
  if(match_string(t, "-o"))
    {
      t = v_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_64;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm y_64 = NULL,a_65 = NULL;
  y_64 = t;
  t = term_f_25;
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, y_64);
  t = x_7(a_65, y_64, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_64);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_9, c_9, d_9, t);
  return(t);
}
ATerm v_7 (ATerm k_49, ATerm l_49, ATerm j_49, ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            ATerm z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        t = u_7(k_49, l_49, t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
    d_65 = t;
    t = (ATerm) ATinsert(CheckATermList(d_65), j_49);
    e_65 = t;
    t = SSL_table_put(k_49, l_49, e_65);
    t = c_65;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,x_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
      t = term_x_26;
      t = n_0(t);
      y_65 = t;
      t = term_t_27;
      z_65 = t;
      t = term_u_27;
      a_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, y_65);
      t = v_7(z_65, a_66, y_65, t);
      _fail(t);
    }
  else
    {
      ATerm g_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_65 = ATgetFirst((ATermList) t);
          r_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_65 = ATgetFirst((ATermList) t);
          x_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_65;
      t = k_0(t);
      t = s_65;
      t = m_0(t);
      g_66 = t;
      t = (ATerm) ATinsert(CheckATermList(x_65), g_66);
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  if(match_string(t, "-i"))
    {
      t = i_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_66;
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm j_66 = NULL,m_66 = NULL;
  j_66 = t;
  t = term_v_26;
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, j_66);
  t = x_7(m_66, j_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_66);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, h_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,r_66 = NULL,s_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_26;
  t = whoami_0_0(t);
  n_66 = t;
  t = term_h_12;
  r_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_28), n_66);
  s_66 = t;
  t = SSL_printnl(r_66, s_66);
  t = term_k_12;
  o_66 = t;
  t = SSL_exit(o_66);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_7 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_36, w_36);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = SSL_addr(v_36, w_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  v_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_66;
      t = e_96(t);
    }
  else
    {
      ATerm a_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_66 = ATgetFirst((ATermList) t);
          x_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_66;
      t = foldr_2_0(e_96, f_96, t);
      a_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_66, a_67);
      t = f_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm j_9 (ATerm t)
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
  ATerm d_67 = NULL,y_20 = NULL,z_20 = NULL;
  t = times_0_0(t);
  z_20 = t;
  t = SSL_explode_term(z_20);
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_20;
  t = foldr_2_0(i_9, j_9, t);
  d_67 = t;
  t = SSL_TicksToSeconds(d_67);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  if(match_cons(t, sym__2))
    {
      r_67 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_67;
        if((r_67 != t))
          {
            _fail(t);
          }
        t = q_67;
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATmakeAppl(sym__2, r_67, s_67);
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_67, s_67);
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              t = SSL_gtr(r_67, s_67);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_67, s_67);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm w_67 = NULL;
  w_67 = t;
  {
    ATerm l_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_67 = NULL;
        t = term_d_27;
        t = get_config_0_0(t);
        z_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_67, term_k_12);
        t = geq_0_0(t);
        t = w_67;
        t = i_104(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = l_28;
        t = w_67;
      }
  }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,e_68 = NULL,f_68 = NULL;
  t = run_time_0_0(t);
  b_68 = t;
  t = term_x_26;
  t = whoami_0_0(t);
  c_68 = t;
  t = term_h_12;
  e_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_28), b_68), term_o_28), c_68);
  f_68 = t;
  t = SSL_printnl(e_68, f_68);
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_28), b_68), term_o_28), c_68));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_27;
  i_68 = t;
  t = SSL_exit(i_68);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL;
  t_68 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_68;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_68 = ATgetArgument(t, 0);
          {
            ATerm z_21 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(t_68);
            z_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_68);
            v_14 = t;
            t = SSLsetAnnotations(v_14, z_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_68;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = fetch_1_0(n_9, t);
    }
  t = y_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_69 = ATgetFirst((ATermList) t);
      b_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_69 = NULL,m_69 = NULL;
        ATerm o_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_69)), not_null(m_69));
          return(t);
        }
        t = b_69;
        t = i_0(t);
        if(((h_69 != NULL) && (h_69 != t)))
          _fail(t);
        else
          h_69 = t;
        t = a_69;
        t = g_0(t);
        if(((m_69 != NULL) && (m_69 != t)))
          _fail(t);
        else
          m_69 = t;
        t = b_69;
        t = reverse_acc_2_0(g_0, o_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_26;
      t = i_0(t);
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,b_15 = NULL;
  t_69 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_69);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_69);
  b_15 = t;
  t = SSLsetAnnotations(b_15, r_69);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm w_69 = NULL;
  w_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_69), term_t_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = fetch_1_0(p_9, t);
    }
  t = term_w_28;
  t = echo_0_0(t);
  t = term_t_27;
  o_69 = t;
  t = term_u_27;
  p_69 = t;
  t = term_x_28;
  t = u_7(o_69, p_69, t);
  t = reverse_acc_2_0(_id, q_9, t);
  t = map_1_0(w_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm a_71 (ATerm t)
  {
    ATerm t_70 = NULL,w_70 = NULL,z_70 = NULL;
    t_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_70 = ATgetFirst((ATermList) t);
        z_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_22 = NULL,p_22 = NULL,d_15 = NULL;
          t = SSLgetAnnotations(t_70);
          k_22 = t;
          t = w_70;
          t = l_90(t);
          p_22 = t;
          t = (ATerm) ATinsert(CheckATermList(z_70), p_22);
          d_15 = t;
          t = SSLsetAnnotations(d_15, k_22);
          ;
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
          {
            ATerm n_23 = NULL,q_23 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(t_70);
            n_23 = t;
            t = z_70;
            t = a_71(t);
            q_23 = t;
            t = (ATerm) ATinsert(CheckATermList(q_23), w_70);
            g_15 = t;
            t = SSLsetAnnotations(g_15, n_23);
          }
        }
    }
    return(t);
  }
  t = a_71(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_71 = NULL,m_71 = NULL,p_71 = NULL;
  j_71 = t;
  {
    ATerm a_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_29 = ATgetFirst((ATermList) t);
                ATerm j_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_71;
          }
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATinsert(ATempty, j_71);
      }
    m_71 = t;
    t = term_g_25;
    p_71 = t;
    t = SSL_printnl(p_71, m_71);
    t = j_71;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_28;
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
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,b_72 = NULL;
  v_71 = t;
  t = w_102(t);
  w_71 = t;
  t = term_h_12;
  x_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_71), w_71);
  b_72 = t;
  t = SSL_printnl(x_71, b_72);
  t = v_71;
  return(t);
}
ATerm map_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm t_72 (ATerm t)
  {
    ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
    q_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_72;
      }
    else
      {
        ATerm f_24 = NULL,o_24 = NULL,p_24 = NULL,k_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_72 = ATgetFirst((ATermList) t);
            s_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_72);
        f_24 = t;
        t = r_72;
        t = b_90(t);
        o_24 = t;
        t = s_72;
        t = t_72(t);
        p_24 = t;
        t = (ATerm) ATinsert(CheckATermList(p_24), o_24);
        k_15 = t;
        t = SSLsetAnnotations(k_15, f_24);
      }
    return(t);
  }
  t = t_72(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_73 = NULL;
      b_73 = t;
      t = SSL_is_string(b_73);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = o_29;
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_9, t);
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
              h_73 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_73 = ATgetArgument(t, 0);
                  t = i_73;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_73 = ATgetArgument(t, 0);
                      t = i_73;
                      {
                        ATerm t_29 = t;
                        int u_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_29);
                          }
                        else
                          {
                            t = t_29;
                            t = debug_1_0(a_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_73 = NULL,o_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_73 = ATgetArgument(t, 0);
                          j_73 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_73;
                      t = eval_config_0_0(t);
                      n_73 = t;
                      t = j_73;
                      t = eval_config_0_0(t);
                      o_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_73, o_73);
                      t = t_7(n_73, o_73, t);
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
  ATerm u_73 = NULL,v_73 = NULL;
  u_73 = t;
  t = term_s_27;
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, u_73);
  t = u_7(v_73, u_73, t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_73 = NULL,x_73 = NULL;
        t = eval_config_0_0(t);
        w_73 = t;
        t = term_s_27;
        x_73 = t;
        t = SSL_table_put(x_73, u_73, w_73);
        t = w_73;
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
      }
  }
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  t = term_x_29;
  a_74 = t;
  t = term_x_26;
  b_74 = t;
  t = term_y_29;
  t = x_7(a_74, b_74, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm g_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
  t = term_x_29;
  e_74 = t;
  t = term_x_26;
  f_74 = t;
  t = term_y_29;
  t = x_7(e_74, f_74, t);
  t = term_e_30;
  c_74 = t;
  t = term_x_26;
  d_74 = t;
  t = term_f_30;
  t = x_7(c_74, d_74, t);
  t = term_g_30;
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_10, c_10, f_10, t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = Option_3_0(g_10, h_10, i_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,n_15 = NULL;
  l_74 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_74 = ATgetFirst((ATermList) t);
      i_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_74);
  g_74 = t;
  t = h_74;
  t = y_68(t);
  j_74 = t;
  t = i_74;
  t = z_68(t);
  k_74 = t;
  t = (ATerm) ATinsert(CheckATermList(k_74), j_74);
  n_15 = t;
  t = SSLsetAnnotations(n_15, g_74);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,v_74 = NULL,w_74 = NULL,p_15 = NULL;
  q_74 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_30;
        t = b_109(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
      }
    t = q_74;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_74 = ATgetFirst((ATermList) t);
        t_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_74);
    r_74 = t;
    t = term_d_28;
    w_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_28, s_74);
    t = x_7(w_74, s_74, t);
    t = t_74;
    {
      ATerm g_75 (ATerm t)
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_74 = NULL;
                z_74 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_74;
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = t_30;
                t = b_109(t);
                t = Cons_2_0(_id, g_75, t);
              }
            ;
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
            {
              ATerm c_75 = NULL,d_75 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_75 = ATgetFirst((ATermList) t);
                  d_75 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_75), (ATerm) ATmakeAppl(sym_Undefined_1, c_75));
            }
          }
        return(t);
      }
      t = g_75(t);
      v_74 = t;
      t = (ATerm) ATinsert(CheckATermList(v_74), (ATerm) ATmakeAppl(sym_Program_1, s_74));
      p_15 = t;
      t = SSLsetAnnotations(p_15, r_74);
    }
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm s_75 = NULL;
  s_75 = t;
  if(match_string(t, "--help"))
    {
      t = s_75;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_75;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_75;
        }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL;
  t = term_s_28;
  t_75 = t;
  t = term_x_26;
  u_75 = t;
  t = term_v_30;
  t = x_7(t_75, u_75, t);
  t = term_w_30;
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm s_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL;
  n_75 = t;
  t = term_t_27;
  p_75 = t;
  t = term_u_27;
  q_75 = t;
  t = (ATerm) ATempty;
  r_75 = t;
  t = SSL_table_put(p_75, q_75, r_75);
  t = n_75;
  {
    ATerm j_10 (ATerm t)
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_109(t);
          ;
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          {
            ATerm a_31 = t;
            int b_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_10, q_10, r_10, t);
                ;
                LocalPopChoice(b_31);
              }
            else
              {
                t = a_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_10, t);
    {
      ATerm c_31 = t;
      int d_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_76 = NULL;
          b_76 = t;
          {
            ATerm e_31 = t;
            int f_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_25 = NULL;
                t = b_76;
                {
                  ATerm g_31 = t;
                  int h_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_31);
                    }
                  else
                    {
                      t = g_31;
                      t = fetch_1_0(s_10, t);
                    }
                  t = b_76;
                  t = default_system_usage_0_0(t);
                  t = term_e_27;
                  e_25 = t;
                  t = SSL_exit(e_25);
                }
                ;
                LocalPopChoice(f_31);
              }
            else
              {
                t = e_31;
                {
                  ATerm q_25 = NULL;
                  t = term_x_29;
                  t = get_config_0_0(t);
                  t = b_76;
                  t = default_system_about_0_0(t);
                  t = term_e_27;
                  q_25 = t;
                  t = SSL_exit(q_25);
                }
              }
          }
          ;
          LocalPopChoice(d_31);
        }
      else
        {
          t = c_31;
          {
            ATerm i_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL;
                ATerm u_10 (ATerm t)
                {
                  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,r_15 = NULL;
                  h_76 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_76);
                  f_76 = t;
                  t = g_76;
                  if(((l_75 != NULL) && (l_75 != t)))
                    _fail(t);
                  else
                    l_75 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_76);
                  r_15 = t;
                  t = SSLsetAnnotations(r_15, f_76);
                  return(t);
                }
                t = fetch_1_0(u_10, t);
                t = term_h_12;
                d_76 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_75)), term_k_31);
                e_76 = t;
                t = SSL_printnl(d_76, e_76);
                t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_75)), term_k_31));
                t = default_system_usage_0_0(t);
                t = term_k_12;
                c_76 = t;
                t = SSL_exit(c_76);
                ;
                LocalPopChoice(j_31);
              }
            else
              {
                t = i_31;
              }
          }
        }
      m_75 = t;
      t = term_t_27;
      o_75 = t;
      t = SSL_table_destroy(o_75);
      t = m_75;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  t = parse_options_1_0(a_107, t);
  m_76 = t;
  t = term_l_31;
  p_76 = t;
  t = SSL_table_create(p_76);
  t = term_l_31;
  n_76 = t;
  t = term_m_31;
  o_76 = t;
  t = SSL_table_put(n_76, o_76, m_76);
  t = m_76;
  t = c_107(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_107, t);
        ;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        {
          ATerm p_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_31);
            }
          else
            {
              t = p_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_10, y_10, z_10, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(y_31);
                      }
                    else
                      {
                        t = x_31;
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
ATerm w_10 (ATerm t)
{
  t = input_1_0(a_11, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  t = term_r_25;
  r_76 = t;
  t = term_x_26;
  s_76 = t;
  t = term_z_31;
  t = x_7(r_76, s_76, t);
  t = term_a_32;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_10, default_usage_0_0, _id, w_10, t);
  return(t);
}
