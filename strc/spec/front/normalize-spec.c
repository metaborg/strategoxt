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
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_u_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_b_25;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
void init_constant_terms (void)
{
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_11, (ATerm) ATempty);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Op_2, term_v_11, (ATerm) ATempty);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Op_2, term_p_14, (ATerm) ATempty);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_15);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_16);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_20);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_b_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_c_27);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_b_26);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_b_26);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_b_26);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_b_26);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm h_0 (ATerm);
ATerm j_0 (ATerm);
ATerm p_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm c_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm n_2 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
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
ATerm oncetd_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm split_dynamic_rule_1_0 (ATerm o_128 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm m_6 (ATerm m_78, ATerm l_78, ATerm);
ATerm repeat_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm z_106 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm s_6 (ATerm u_109 (ATerm), ATerm o_42, ATerm n_42, ATerm);
ATerm t_6 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm s_42, ATerm r_42, ATerm);
ATerm u_6 (ATerm p_109 (ATerm), ATerm m_42, ATerm l_42, ATerm);
ATerm genzip_4_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm y_6 (ATerm t_608, ATerm y_608, ATerm q_69, ATerm);
ATerm while_not_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm c_40 (ATerm c_38, ATerm d_38, ATerm g_38, ATerm);
ATerm i_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm free_vars_3_0 (ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm d_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm c_7 (ATerm p_65, ATerm q_65, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm d_7 (ATerm u_116 (ATerm), ATerm d_54, ATerm b_54, ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm e_7 (ATerm j_65, ATerm k_65, ATerm);
ATerm end_scope_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_116 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm l_46 (ATerm d_46, ATerm);
ATerm conc_0_0 (ATerm);
ATerm h_7 (ATerm g_149, ATerm c_149, ATerm);
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm f_7 (ATerm);
ATerm q_7 (ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm i_7 (ATerm p_55, ATerm q_55, ATerm);
ATerm j_7 (ATerm d_59, ATerm e_59, ATerm);
ATerm l_7 (ATerm n_118 (ATerm), ATerm d_453, ATerm h_59, ATerm);
ATerm k_7 (ATerm z_58, ATerm a_59, ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm output_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm i_55 (ATerm w_54, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_7 (ATerm f_59, ATerm);
ATerm n_7 (ATerm r_55, ATerm s_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_57 (ATerm c_56, ATerm);
ATerm o_57 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm);
ATerm p_57 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_7 (ATerm g_60, ATerm h_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_7 (ATerm e_65, ATerm f_65, ATerm d_65, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_7 (ATerm p_52, ATerm q_52, ATerm);
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_9 (ATerm);
ATerm need_help_1_0 (ATerm n_122 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_7 (ATerm f_50, ATerm g_50, ATerm);
ATerm debug_1_0 (ATerm l_118 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_7 (ATerm v_66, ATerm w_66, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_124 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm parse_options_1_0 (ATerm p_124 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm map1_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL;
  i_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,x_0 = NULL,b_1 = NULL,z_0 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(i_2);
        u_0 = t;
        t = j_2;
        t = o_0(t);
        x_0 = t;
        t = (ATerm) ATinsert(CheckATermList(l_2), x_0);
        y_0 = t;
        t = SSLsetAnnotations(y_0, u_0);
        b_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_0 = ATgetFirst((ATermList) t);
            s_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_1);
        q_0 = t;
        t = s_0;
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(o_0, t);
              ;
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
            }
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), r_0);
          z_0 = t;
          t = SSLsetAnnotations(z_0, q_0);
        }
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        {
          ATerm y_1 = NULL,k_2 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(i_2);
          y_1 = t;
          t = l_2;
          t = map1_1_0(o_0, t);
          k_2 = t;
          t = (ATerm) ATinsert(CheckATermList(k_2), j_2);
          a_1 = t;
          t = SSLsetAnnotations(a_1, y_1);
        }
      }
  }
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm p_4 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_4, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_11), term_e_11));
  return(t);
}
ATerm j_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_4 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_4, term_e_11);
    }
  else
    {
      t = r_4;
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm f_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_5, term_e_11);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  h_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_5 = ATgetArgument(t, 0);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, g_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_11), term_e_11));
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = h_5;
          }
      }
    }
  else
    {
      t = h_5;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_11), term_e_11));
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_5, term_e_11);
    }
  else
    {
      t = w_5;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,j_3 = NULL,n_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      n_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, n_3, v_3);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          n_3 = ATgetArgument(t, 0);
          t = n_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_3 = ATgetFirst((ATermList) t);
              d_3 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_3, (ATerm) ATmakeAppl(sym_LChoices_1, d_3));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_11;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              n_3 = ATgetArgument(t, 0);
              t = n_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_3 = ATgetFirst((ATermList) t);
                  d_3 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_3, (ATerm) ATmakeAppl(sym_Choices_1, d_3));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_11;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  n_3 = ATgetArgument(t, 0);
                  t = n_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_3 = ATgetFirst((ATermList) t);
                      d_3 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_3, (ATerm) ATmakeAppl(sym_Seqs_1, d_3));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      j_3 = ATgetArgument(t, 2);
                      e_3 = ATgetArgument(t, 3);
                      {
                        ATerm l_4 = NULL,o_4 = NULL;
                        t = v_3;
                        t = map1_1_0(h_0, t);
                        l_4 = t;
                        t = j_3;
                        t = map1_1_0(j_0, t);
                        o_4 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, n_3, l_4, o_4, e_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          n_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          j_3 = ATgetArgument(t, 2);
                          e_3 = ATgetArgument(t, 3);
                          {
                            ATerm m_11 = t;
                            int n_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_5 = NULL,e_5 = NULL;
                                t = j_3;
                                t = map1_1_0(p_0, t);
                                b_5 = t;
                                t = v_3;
                                t = map_1_0(v_0, t);
                                e_5 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_3, e_5, b_5, e_3);
                                ;
                                LocalPopChoice(n_11);
                              }
                            else
                              {
                                t = m_11;
                                {
                                  ATerm q_5 = NULL,s_5 = NULL;
                                  t = v_3;
                                  t = map1_1_0(w_0, t);
                                  q_5 = t;
                                  t = j_3;
                                  t = map_1_0(c_1, t);
                                  s_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_3, q_5, s_5, e_3);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              n_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              j_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, v_3, (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, j_3), n_3)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  n_3 = ATgetArgument(t, 0);
                                  v_3 = ATgetArgument(t, 1);
                                  j_3 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_3)), n_3), (ATerm) ATmakeAppl(sym_Build_1, v_3)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      n_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_3, (ATerm) ATmakeAppl(sym_Match_1, v_3));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          n_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_3), v_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              n_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_3), n_3);
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
ATerm topdown_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = topdown_1_0(z_99, t);
    return(t);
  }
  t = z_99(t);
  t = SRTS_all(d_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_11);
        t = s_9;
        {
          ATerm s_11 = t;
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
              t = term_t_11;
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_11, x_2);
              t = c_7(a_3, x_2, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm u_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_11) != ATmakeSymbol("m_0", 0, ATtrue)))
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
              t = s_11;
            }
          t = term_w_11;
        }
      }
    else
      {
        t = p_11;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_w_11;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                t_9 = ATgetArgument(t, 0);
                {
                  ATerm c_10 = NULL;
                  t = t_9;
                  t = free_vars_3_0(f_1, g_1, tboundin_3_0, t);
                  t = map_1_0(k_1, t);
                  c_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_11, c_10);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    t_9 = ATgetArgument(t, 0);
                    u_9 = ATgetArgument(t, 1);
                    {
                      ATerm k_12 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, t_9, u_9);
                      t = free_vars_3_0(l_1, n_1, tboundin_3_0, t);
                      t = map_1_0(q_1, t);
                      k_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_y_11, k_12);
                    }
                  }
                else
                  {
                    ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm z_11 = ATgetArgument(t, 0);
                        ATerm b_12 = ATgetArgument(t, 1);
                        ATerm c_12 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_d_12;
                    g_3 = t;
                    t = (ATerm) ATinsert(ATempty, term_f_12);
                    h_3 = t;
                    t = SSL_printnl(g_3, h_3);
                    t = term_g_12;
                    f_3 = t;
                    t = SSL_exit(f_3);
                    t = (ATerm) ATinsert(ATempty, term_f_12);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm d_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_10);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_10 = ATgetArgument(t, 0);
            t = l_10;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_10 = ATgetArgument(t, 0);
                m_10 = ATgetArgument(t, 1);
                n_10 = ATgetArgument(t, 2);
                o_10 = ATgetArgument(t, 3);
                t = n_10;
                t = map_1_0(h_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_10 = ATgetArgument(t, 0);
                    m_10 = ATgetArgument(t, 1);
                    n_10 = ATgetArgument(t, 2);
                    o_10 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_10;
                t = map_1_0(j_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm m_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_11 = ATgetArgument(t, 0);
          {
            ATerm r_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_12);
      t = f_11;
    }
  else
    {
      t = m_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_11;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm s_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_12 = ATgetArgument(t, 0);
          {
            ATerm y_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_12);
      t = a_12;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_12;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm l_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_12);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,w_12 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_12 = ATgetArgument(t, 0);
            t = n_12;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_12 = ATgetArgument(t, 0);
                o_12 = ATgetArgument(t, 1);
                p_12 = ATgetArgument(t, 2);
                w_12 = ATgetArgument(t, 3);
                t = p_12;
                t = map_1_0(o_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_12 = ATgetArgument(t, 0);
                    o_12 = ATgetArgument(t, 1);
                    p_12 = ATgetArgument(t, 2);
                    w_12 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_12;
                t = map_1_0(p_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_13 = ATgetArgument(t, 0);
          {
            ATerm d_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_13);
      t = e_13;
    }
  else
    {
      t = b_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_13;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm v_13 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_13 = ATgetArgument(t, 0);
          {
            ATerm j_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = v_13;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_13;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_13);
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
ATerm u_1 (ATerm t)
{
  ATerm n_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_17);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm k_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = k_13;
      {
        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_17 = ATgetArgument(t, 0);
            t = p_17;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_17 = ATgetArgument(t, 0);
                q_17 = ATgetArgument(t, 1);
                r_17 = ATgetArgument(t, 2);
                s_17 = ATgetArgument(t, 3);
                t = r_17;
                t = map_1_0(w_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_17 = ATgetArgument(t, 0);
                    q_17 = ATgetArgument(t, 1);
                    r_17 = ATgetArgument(t, 2);
                    s_17 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_17;
                t = map_1_0(x_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_18 = ATgetArgument(t, 0);
          {
            ATerm p_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_13);
      t = g_18;
    }
  else
    {
      t = n_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_18;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm r_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_18 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = u_18;
    }
  else
    {
      t = r_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_18;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_19);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm c_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_19);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm x_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = x_13;
      {
        ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_19 = ATgetArgument(t, 0);
            t = e_19;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_19 = ATgetArgument(t, 0);
                f_19 = ATgetArgument(t, 1);
                g_19 = ATgetArgument(t, 2);
                h_19 = ATgetArgument(t, 3);
                t = g_19;
                t = map_1_0(e_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_19 = ATgetArgument(t, 0);
                    f_19 = ATgetArgument(t, 1);
                    g_19 = ATgetArgument(t, 2);
                    h_19 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_19;
                t = map_1_0(g_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm d_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = w_19;
    }
  else
    {
      t = d_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_19;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_20 = ATgetArgument(t, 0);
          {
            ATerm n_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_14);
      t = g_20;
    }
  else
    {
      t = l_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_20;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm j_20 = NULL,i_3 = NULL,k_3 = NULL;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
  i_3 = t;
  t = term_t_11;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATmakeAppl(sym_Var_1, j_20));
  t = c_7(k_3, i_3, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_21 (ATerm b_16, ATerm c_16, ATerm d_16, ATerm e_16, ATerm f_16, ATerm g_16, ATerm n_16, ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,a_17 = NULL,b_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, f_16, term_q_14);
    {
      ATerm r_14 = t;
      if((PushChoice() == 0))
        {
          ATerm g_17 = NULL;
          if(match_cons(t, sym__2))
            {
              g_17 = ATgetArgument(t, 0);
              if((g_17 != ATgetArgument(t, 1)))
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
          t = r_14;
        }
      t = new_0_0(t);
      s_16 = t;
      t = e_16;
      t = dummify_0_0(t);
      u_16 = t;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_16;
            if((e_16 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, s_16);
            ;
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = u_16;
          }
        t_16 = t;
        t = u_16;
        t = free_vars_3_0(u_1, v_1, tboundin_3_0, t);
        t = map_1_0(a_2, t);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_16, g_16);
        t = free_vars_3_0(c_2, d_2, tboundin_3_0, t);
        t = filter_1_0(n_2, t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
        t = diff_0_0(t);
        d_17 = t;
        t = new_0_0(t);
        e_17 = t;
        t = b_16;
        t = n_0(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, f_17, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_14, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, e_17)))), u_16)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_16, c_16, d_16, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_16), e_16), f_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_16)))), t_16), (ATerm) ATmakeAppl(sym_Op_2, term_x_14, (ATerm) ATinsert(CheckATermList(d_17), (ATerm) ATmakeAppl(sym_Str_1, e_17)))), g_16))));
      }
    }
    return(t);
  }
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,w_20 = NULL,x_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL,e_21 = NULL,i_21 = NULL;
  s_20 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
      z_20 = ATgetArgument(t, 2);
      b_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = b_21;
  if(match_cons(t, sym_Rule_3))
    {
      c_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
      i_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_21;
  if(match_cons(t, sym_Op_2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
      t = r_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_20;
          if(match_string(t, "Undefined"))
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL;
                  t = s_20;
                  t = new_0_0(t);
                  s_4 = t;
                  t = c_21;
                  t = dummify_0_0(t);
                  j_4 = t;
                  {
                    ATerm d_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_4;
                        if((c_21 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, s_4);
                        ;
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = d_15;
                        t = j_4;
                      }
                    t_4 = t;
                    t = w_20;
                    t = n_0(t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_4, (ATerm) ATmakeAppl(sym_Op_2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, term_q_14), j_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_20, x_20, z_20, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_4), c_21), term_q_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_20)))), t_4), term_q_14), (ATerm) ATmakeAppl(sym_Seq_2, i_21, term_j_11)))));
                  }
                  ;
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  t = n_21(w_20, x_20, z_20, c_21, e_21, i_21, s_20, t);
                }
            }
          else
            {
              t = n_21(w_20, x_20, z_20, c_21, e_21, i_21, s_20, t);
            }
        }
      else
        {
          t = q_20;
          t = n_21(w_20, x_20, z_20, c_21, e_21, i_21, s_20, t);
        }
    }
  else
    {
      t = n_21(w_20, x_20, z_20, c_21, e_21, i_21, s_20, t);
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
  ATerm z_21 = NULL;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_21))));
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(match_cons(m_15, sym__2))
        {
          c_22 = ATgetArgument(m_15, 0);
          d_22 = ATgetArgument(m_15, 1);
        }
      else
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(match_cons(o_15, sym__2))
          {
            e_22 = ATgetArgument(o_15, 0);
            f_22 = ATgetArgument(o_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_22), c_22), (ATerm) ATinsert(CheckATermList(f_22), d_22));
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = SplitDynamicRule_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_22))));
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_15;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_22 = ATgetFirst((ATermList) t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      if(match_cons(t_15, sym__2))
        {
          r_22 = ATgetArgument(t_15, 0);
          s_22 = ATgetArgument(t_15, 1);
        }
      else
        _fail(t);
      {
        ATerm u_15 = ATgetArgument(t, 1);
        if(match_cons(u_15, sym__2))
          {
            t_22 = ATgetArgument(u_15, 0);
            u_22 = ATgetArgument(u_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_22), r_22), (ATerm) ATinsert(CheckATermList(u_22), s_22));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      x_21 = ATgetArgument(t, 0);
      t = x_21;
      t = map_1_0(o_2, t);
      t = genzip_4_0(q_2, r_2, s_2, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          x_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_21;
      t = map_1_0(v_2, t);
      t = genzip_4_0(z_2, l_3, m_3, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_101(t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = SRTS_one(w_22, t);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_23 = NULL,v_23 = NULL,x_23 = NULL;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_23);
  v_23 = t;
  t = term_y_15;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_23), term_y_15);
  t = d_7(s_3, v_23, x_23, t);
  t = r_23;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm b_24 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_128(t);
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          {
            ATerm e_23 = NULL,f_23 = NULL,m_23 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                e_23 = ATgetArgument(t, 0);
                f_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, e_23, f_23);
            {
              ATerm q_3 (ATerm t)
              {
                t = e_23;
                t = map_1_0(r_3, t);
                t = f_23;
                t = b_24(t);
                if(((m_23 != NULL) && (m_23 != t)))
                  _fail(t);
                else
                  m_23 = t;
                return(t);
              }
              t = scope_2_0(p_3, q_3, t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, e_23, not_null(m_23));
            }
          }
        }
      return(t);
    }
    t = oncetd_1_0(o_3, t);
    return(t);
  }
  t = b_24(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm o_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_24);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm q_24 = NULL,u_24 = NULL,v_24 = NULL,x_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_24 = ATgetArgument(t, 0);
            t = q_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_24 = ATgetArgument(t, 0);
                u_24 = ATgetArgument(t, 1);
                v_24 = ATgetArgument(t, 2);
                x_24 = ATgetArgument(t, 3);
                t = v_24;
                t = map_1_0(y_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_24 = ATgetArgument(t, 0);
                    u_24 = ATgetArgument(t, 1);
                    v_24 = ATgetArgument(t, 2);
                    x_24 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_24;
                t = map_1_0(z_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm k_25 = NULL;
  ATerm j_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_25 = ATgetArgument(t, 0);
          {
            ATerm o_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_16);
      t = k_25;
    }
  else
    {
      t = j_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_25;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm y_25 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_25 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = y_25;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_25;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm c_26 = NULL,h_26 = NULL,j_26 = NULL;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_26);
  h_26 = t;
  t = term_y_15;
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_26), term_y_15);
  t = d_7(b_4, h_26, j_26, t);
  t = c_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm m_6 (ATerm m_78, ATerm l_78, ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  ATerm u_3 (ATerm t)
  {
    t = m_78;
    t = free_vars_3_0(w_3, x_3, tboundin_3_0, t);
    t = map_1_0(a_4, t);
    t = m_78;
    {
      ATerm c_4 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              l_24 = ATgetArgument(t, 0);
            if(((k_24 != NULL) && (k_24 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, l_24);
        return(t);
      }
      t = split_dynamic_rule_1_0(c_4, t);
      if(((m_24 != NULL) && (m_24 != t)))
        _fail(t);
      else
        m_24 = t;
    }
    return(t);
  }
  t = scope_2_0(t_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_24)), not_null(m_24)), l_78);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm s_26 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_99(t);
        t = s_26(t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm listtd_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm x_27 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
    t = z_106(t);
    u_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_27;
      }
    else
      {
        ATerm g_6 = NULL,n_6 = NULL,i_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_27 = ATgetFirst((ATermList) t);
            w_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_27);
        g_6 = t;
        t = w_27;
        t = x_27(t);
        n_6 = t;
        t = (ATerm) ATinsert(CheckATermList(n_6), v_27);
        i_1 = t;
        t = SSLsetAnnotations(i_1, g_6);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,h_28 = NULL,i_28 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      f_28 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, f_28, i_28)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_28))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_28;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
      {
        ATerm a_7 = NULL,g_7 = NULL,p_7 = NULL,m_1 = NULL;
        t = SSLgetAnnotations(o_30);
        a_7 = t;
        t = p_30;
        t = i_128(t);
        g_7 = t;
        t = l_30;
        t = g_128(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_7, p_7);
        m_1 = t;
        t = SSLsetAnnotations(m_1, a_7);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_30 = ATgetArgument(t, 0);
          l_30 = ATgetArgument(t, 1);
          m_30 = ATgetArgument(t, 2);
          n_30 = ATgetArgument(t, 3);
          {
            ATerm e_8 = NULL,o_8 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(o_30);
            e_8 = t;
            t = p_30;
            t = i_128(t);
            o_8 = t;
            t = l_30;
            t = i_128(t);
            r_8 = t;
            t = m_30;
            t = i_128(t);
            s_8 = t;
            t = n_30;
            t = g_128(t);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_8, r_8, s_8, u_8);
            r_1 = t;
            t = SSLsetAnnotations(r_1, e_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              p_30 = ATgetArgument(t, 0);
              l_30 = ATgetArgument(t, 1);
              m_30 = ATgetArgument(t, 2);
              n_30 = ATgetArgument(t, 3);
              {
                ATerm g_9 = NULL,r_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,s_1 = NULL;
                t = SSLgetAnnotations(o_30);
                g_9 = t;
                t = p_30;
                t = i_128(t);
                r_9 = t;
                t = l_30;
                t = i_128(t);
                v_9 = t;
                t = m_30;
                t = i_128(t);
                w_9 = t;
                t = n_30;
                t = g_128(t);
                x_9 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_9, v_9, w_9, x_9);
                s_1 = t;
                t = SSLsetAnnotations(s_1, g_9);
              }
            }
          else
            {
              ATerm q_10 = NULL,s_10 = NULL,t_1 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_30);
              q_10 = t;
              t = p_30;
              t = g_128(t);
              s_10 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_10);
              t_1 = t;
              t = SSLsetAnnotations(t_1, q_10);
            }
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm x_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_30);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm z_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = z_16;
      {
        ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_30 = ATgetArgument(t, 0);
            t = z_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_30 = ATgetArgument(t, 0);
                a_31 = ATgetArgument(t, 1);
                b_31 = ATgetArgument(t, 2);
                c_31 = ATgetArgument(t, 3);
                t = b_31;
                t = map_1_0(f_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_30 = ATgetArgument(t, 0);
                    a_31 = ATgetArgument(t, 1);
                    b_31 = ATgetArgument(t, 2);
                    c_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_31;
                t = map_1_0(g_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm m_31 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_31 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_17);
      t = m_31;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_31;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm z_31 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_31 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_17);
      t = z_31;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_31;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(d_4, e_4, tboundin_3_0, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_32);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm o_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = o_17;
      {
        ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_33 = ATgetArgument(t, 0);
            t = a_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_33 = ATgetArgument(t, 0);
                b_33 = ATgetArgument(t, 1);
                c_33 = ATgetArgument(t, 2);
                d_33 = ATgetArgument(t, 3);
                t = c_33;
                t = map_1_0(k_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_33 = ATgetArgument(t, 0);
                    b_33 = ATgetArgument(t, 1);
                    c_33 = ATgetArgument(t, 2);
                    d_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_33;
                t = map_1_0(m_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm n_33 = NULL;
  ATerm u_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_33 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_17);
      t = n_33;
    }
  else
    {
      t = u_17;
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
ATerm m_4 (ATerm t)
{
  ATerm w_33 = NULL;
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = w_33;
    }
  else
    {
      t = z_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_32 = NULL,r_32 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_32 = ATgetArgument(t, 0);
      t = r_32;
      if(match_cons(t, sym_Rule_3))
        {
          n_32 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
          {
            ATerm d_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_32;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_32 = ATgetArgument(t, 0);
          {
            ATerm e_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_32;
    }
  return(t);
}
ATerm s_6 (ATerm u_109 (ATerm), ATerm o_42, ATerm n_42, ATerm t)
{
  ATerm p_34 (ATerm t)
  {
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
    k_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_34 = ATgetFirst((ATermList) t);
            m_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_34;
              {
                ATerm n_4 (ATerm t)
                {
                  t = n_42;
                  return(t);
                }
                t = t_6(u_109, n_4, l_34, m_34, t);
                t = p_34(t);
              }
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = f_18;
              {
                ATerm i_11 = NULL,l_11 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(k_34);
                i_11 = t;
                t = m_34;
                t = p_34(t);
                l_11 = t;
                t = (ATerm) ATinsert(CheckATermList(l_11), l_34);
                z_1 = t;
                t = SSLsetAnnotations(z_1, i_11);
              }
            }
        }
      }
    return(t);
  }
  t = o_42;
  t = p_34(t);
  return(t);
}
ATerm t_6 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm s_42, ATerm r_42, ATerm t)
{
  t = y_109(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm t_34 = NULL;
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_42, t_34);
      t = x_109(t);
      return(t);
    }
    t = fetch_1_0(u_4, t);
    t = r_42;
  }
  return(t);
}
ATerm u_6 (ATerm p_109 (ATerm), ATerm m_42, ATerm l_42, ATerm t)
{
  ATerm y_35 (ATerm t)
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
    t_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_35 = ATgetFirst((ATermList) t);
            v_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_35;
              {
                ATerm w_4 (ATerm t)
                {
                  t = l_42;
                  return(t);
                }
                t = t_6(p_109, w_4, u_35, v_35, t);
                t = y_35(t);
              }
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm x_11 = NULL,e_12 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(t_35);
                x_11 = t;
                t = v_35;
                t = y_35(t);
                e_12 = t;
                t = (ATerm) ATinsert(CheckATermList(e_12), u_35);
                b_2 = t;
                t = SSLsetAnnotations(b_2, x_11);
              }
            }
        }
      }
    return(t);
  }
  t = m_42;
  t = y_35(t);
  return(t);
}
ATerm genzip_4_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  ATerm i_36 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_107(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,h_36 = NULL,f_2 = NULL;
          t = u_107(t);
          h_36 = t;
          if(match_cons(t, sym__2))
            {
              b_36 = ATgetArgument(t, 0);
              c_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_36);
          a_36 = t;
          t = b_36;
          t = w_107(t);
          d_36 = t;
          t = c_36;
          t = i_36(t);
          e_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
          f_2 = t;
          t = SSLsetAnnotations(f_2, a_36);
          t = v_107(t);
        }
      }
    return(t);
  }
  t = i_36(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(((ATgetType(o_18) == AT_LIST) && !(ATisEmpty(o_18))))
        {
          p_36 = ATgetFirst((ATermList) o_18);
          q_36 = (ATerm) ATgetNext((ATermList) o_18);
        }
      else
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
          {
            r_36 = ATgetFirst((ATermList) p_18);
            s_36 = (ATerm) ATgetNext((ATermList) p_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_36, r_36), (ATerm) ATmakeAppl(sym__2, q_36, s_36));
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_36), v_36);
  return(t);
}
ATerm y_6 (ATerm t_608, ATerm y_608, ATerm q_69, ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  t = SSL_explode_term(y_608);
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_608);
  if(match_cons(t, sym__2))
    {
      if((k_36 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
  t = genzip_4_0(x_4, y_4, z_4, _id, t);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, q_69);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  ATerm y_36 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_99(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = r_99(t);
        t = y_36(t);
      }
    return(t);
  }
  t = y_36(t);
  return(t);
}
ATerm for_3_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  t = t_99(t);
  t = while_not_2_0(u_99, v_99, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_37);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,y_37 = NULL,z_37 = NULL,h_2 = NULL;
  z_37 = t;
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_37);
  v_37 = t;
  t = y_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_37, y_37);
  h_2 = t;
  t = SSLsetAnnotations(h_2, v_37);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  g_39 = t;
  if(match_cons(t, sym__2))
    {
      h_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_39 = ATgetFirst((ATermList) t);
      q_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_40(h_39, o_39, g_39, t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_39), p_39), q_39);
          }
      }
    }
  else
    {
      t = c_40(h_39, o_39, g_39, t);
    }
  return(t);
}
ATerm c_40 (ATerm c_38, ATerm d_38, ATerm g_38, ATerm t)
{
  ATerm k_38 = NULL,q_38 = NULL,m_2 = NULL,t_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  t = SSLgetAnnotations(g_38);
  k_38 = t;
  t = d_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_38 = ATgetFirst((ATermList) t);
      a_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_38;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_38;
        if((y_38 != t))
          {
            _fail(t);
          }
        t = a_39;
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = d_38;
        t = y_6(y_38, z_38, a_39, t);
      }
    q_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_38, q_38);
    m_2 = t;
    t = SSLsetAnnotations(m_2, k_38);
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm b_40 = NULL;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      if((b_40 != ATgetArgument(t, 1)))
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
  ATerm x_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_5, c_5, d_5, t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = x_18;
      {
        ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
        u_39 = t;
        if(match_cons(t, sym__2))
          {
            v_39 = ATgetArgument(t, 0);
            w_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_39;
        t = u_6(i_5, v_39, w_39, t);
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm i_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(n_5, i_13, l_13, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      if((q_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(r_5, e_14, f_14, t);
  return(t);
}
ATerm r_5 (ATerm t)
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
ATerm free_vars_3_0 (ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm d_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_40 (ATerm t)
  {
    ATerm a_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_127(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = a_19;
        {
          ATerm i_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_40 = NULL,f_40 = NULL,t_12 = NULL,u_12 = NULL;
              e_40 = t;
              t = c_127(t);
              f_40 = t;
              t = e_40;
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm h_40 = NULL;
                  t = q_40(t);
                  h_40 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_40, f_40);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_127(j_5, q_40, k_5, t);
                if(((u_12 != NULL) && (u_12 != t)))
                  _fail(t);
                else
                  u_12 = t;
                t = SSL_explode_term(u_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_19 = ATgetArgument(t, 0);
                    if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_12;
                t = foldr_3_0(l_5, m_5, _id, t);
              }
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = i_19;
              {
                ATerm s_13 = NULL,t_13 = NULL;
                t_13 = t;
                t = SSL_explode_term(t_13);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_19 = ATgetArgument(t, 0);
                    s_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_13;
                t = foldr_3_0(o_5, p_5, q_40, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_40(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    t = bottomup_1_0(a_100, t);
    return(t);
  }
  t = SRTS_all(u_5, t);
  t = a_100(t);
  return(t);
}
ATerm c_7 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm r_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_65, q_65);
  t = s_7(p_65, q_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_40 = ATgetFirst((ATermList) t);
      {
        ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_40;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL;
        t = term_r_19;
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_19, f_41);
        t = c_7(u_14, f_41, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, g_41, (ATerm) ATempty);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm k_15 = NULL;
          t = term_r_19;
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_19, f_41);
          t = c_7(k_15, f_41, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, g_41, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm j_41 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_101(t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = SRTS_all(j_41, t);
      }
    return(t);
  }
  t = j_41(t);
  return(t);
}
ATerm d_7 (ATerm u_116 (ATerm), ATerm d_54, ATerm b_54, ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  t = u_116(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_41, d_54, b_54);
  t = t_7(k_41, d_54, b_54, t);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL;
        t = term_z_19;
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_41, term_z_19);
        t = s_7(k_41, q_41, t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_41 = ATgetFirst((ATermList) t);
        m_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_19;
    o_41 = t;
    t = (ATerm) ATinsert(CheckATermList(m_41), (ATerm) ATinsert(CheckATermList(l_41), d_54));
    p_41 = t;
    t = SSL_table_put(k_41, o_41, p_41);
    t = n_41;
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm u_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
      u_41 = ATgetArgument(t, 2);
      {
        ATerm b_42 = NULL,c_42 = NULL;
        t = x_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
        b_42 = t;
        t = term_b_20;
        c_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_41), term_b_20);
        t = d_7(x_5, b_42, c_42, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, w_41, (ATerm)ATempty, u_41);
      }
    }
  else
    {
      ATerm f_42 = NULL,g_42 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          w_41 = ATgetArgument(t, 0);
          x_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_41;
      if(match_cons(t, sym_ConstType_1))
        {
          y_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
      f_42 = t;
      t = term_d_20;
      g_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_41), term_d_20);
      t = d_7(y_5, f_42, g_42, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_41, (ATerm) ATmakeAppl(sym_ConstType_1, y_41));
    }
  return(t);
}
ATerm e_7 (ATerm j_65, ATerm k_65, ATerm t)
{
  ATerm k_42 = NULL,p_42 = NULL;
  p_42 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
        t = s_7(j_65, k_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_20 = ATgetFirst((ATermList) t);
            k_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_20);
        t = SSL_table_put(j_65, k_65, k_42);
        t = (ATerm) ATmakeAppl(sym__3, j_65, k_65, k_42);
      }
    else
      {
        t = e_20;
        t = SSL_table_remove(j_65, k_65);
        t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
      }
    t = p_42;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm q_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  w_42 = t;
  t = r_116(t);
  v_42 = t;
  {
    ATerm i_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_42 = NULL;
        t = term_z_19;
        y_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_42, term_z_19);
        t = s_7(v_42, y_42, t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_42 = ATgetFirst((ATermList) t);
        q_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_19;
    x_42 = t;
    t = SSL_table_put(v_42, x_42, q_42);
    t = u_42;
    {
      ATerm z_5 (ATerm t)
      {
        ATerm z_42 = NULL;
        z_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_42, z_42);
        t = e_7(v_42, z_42, t);
        return(t);
      }
      t = map_1_0(z_5, t);
      t = w_42;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_98(t);
      t = v_98(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = v_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  c_43 = t;
  t = q_116(t);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, term_z_19);
  {
    ATerm p_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_19;
        j_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_43, term_z_19);
        t = s_7(b_43, j_43, t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATempty;
      }
    d_43 = t;
    t = term_z_19;
    e_43 = t;
    t = (ATerm) ATinsert(CheckATermList(d_43), (ATerm) ATempty);
    f_43 = t;
    t = SSL_table_put(b_43, e_43, f_43);
    t = c_43;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = end_scope_1_0(s_116, t);
    return(t);
  }
  t = begin_scope_1_0(s_116, t);
  t = restore_always_2_0(t_116, a_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,b_3 = NULL;
  v_43 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_43);
  s_43 = t;
  t = t_43;
  t = map_1_0(d_6, t);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_43);
  b_3 = t;
  t = SSLsetAnnotations(b_3, s_43);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  j_44 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      i_44 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL,m_16 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(j_44);
            k_16 = t;
            t = i_44;
            t = map_1_0(e_6, t);
            m_16 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_16);
            t_2 = t;
            t = SSLsetAnnotations(t_2, k_16);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = y_20;
            t = j_44;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm d_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_17 = NULL,x_17 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(j_44);
                v_17 = t;
                t = i_44;
                t = map_1_0(f_6, t);
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, x_17);
                u_2 = t;
                t = SSLsetAnnotations(u_2, v_17);
                ;
                LocalPopChoice(f_21);
              }
            else
              {
                t = d_21;
                t = j_44;
              }
          }
        }
      else
        {
          t = j_44;
        }
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm f_6 (ATerm t)
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
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(b_6, c_6, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_44;
    }
  else
    {
      ATerm h_6 (ATerm t)
      {
        t = not_null(s_44);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_44 != NULL) && (r_44 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_44 = ATgetFirst((ATermList) t);
          if(((s_44 != NULL) && (s_44 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_44;
      t = at_end_1_0(h_6, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_45 = ATgetFirst((ATermList) t);
          j_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_18 = NULL,j_19 = NULL,k_19 = NULL,j_9 = NULL;
            t = SSLgetAnnotations(h_45);
            y_18 = t;
            t = i_45;
            t = x_112(t);
            j_19 = t;
            t = j_45;
            t = filter_1_0(x_112, t);
            k_19 = t;
            t = (ATerm) ATinsert(CheckATermList(k_19), j_19);
            j_9 = t;
            t = SSLsetAnnotations(j_9, y_18);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = o_21;
            t = j_45;
            t = filter_1_0(x_112, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm z_45 (ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
    y_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_45 = ATgetFirst((ATermList) t);
        x_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_20 = NULL,o_20 = NULL,l_9 = NULL;
          t = SSLgetAnnotations(y_45);
          l_20 = t;
          t = x_45;
          t = z_45(t);
          o_20 = t;
          t = (ATerm) ATinsert(CheckATermList(o_20), w_45);
          l_9 = t;
          t = SSLsetAnnotations(l_9, l_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_45;
        t = g_106(t);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm l_46 (ATerm d_46, ATerm t)
{
  ATerm e_46 = NULL;
  t = SSL_explode_term(d_46);
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              t = h_46;
              return(t);
            }
            t = g_46;
            t = at_end_1_0(i_6, t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            t = l_46(i_46, t);
          }
      }
    }
  else
    {
      t = l_46(i_46, t);
    }
  return(t);
}
ATerm h_7 (ATerm g_149, ATerm c_149, ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  ATerm j_6 (ATerm t)
  {
    ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
    r_46 = t;
    t = SSL_explode_term(r_46);
    if(match_cons(t, sym__2))
      {
        if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_46 = ATgetArgument(t, 0);
        {
          ATerm v_21 = ATgetArgument(t, 1);
          if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
            {
              o_46 = ATgetFirst((ATermList) v_21);
              {
                ATerm w_21 = (ATerm) ATgetNext((ATermList) v_21);
                if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_46, not_null(n_46));
    t = conc_0_0(t);
    p_46 = t;
    t = (ATerm) ATinsert(ATempty, p_46);
    q_46 = t;
    t = SSL_mkterm(m_46, q_46);
    return(t);
  }
  t = SSL_explode_term(g_149);
  if(match_cons(t, sym__2))
    {
      if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_46 = ATgetArgument(t, 0);
      {
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
          {
            if(((n_46 != NULL) && (n_46 != ATgetFirst((ATermList) y_21))))
              _fail(ATgetFirst((ATermList) y_21));
            else
              n_46 = ATgetFirst((ATermList) y_21);
            {
              ATerm g_22 = (ATerm) ATgetNext((ATermList) y_21);
              if(((ATgetType(g_22) != AT_LIST) || !(ATisEmpty(g_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_149;
  t = fetch_1_0(j_6, t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_46;
      t = v_111(t);
    }
  else
    {
      ATerm y_46 = NULL,z_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_46 = ATgetFirst((ATermList) t);
          v_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_46;
      t = x_111(t);
      y_46 = t;
      t = v_46;
      t = foldr_3_0(v_111, w_111, x_111, t);
      z_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_46, z_46);
      t = w_111(t);
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_22), term_i_22), term_h_22);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(g_47, h_47, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  j_47 = t;
  if(match_cons(t, sym_Signature_1))
    {
      i_47 = ATgetArgument(t, 0);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_47 = NULL;
            t = i_47;
            t = filter_1_0(p_6, t);
            t = concat_0_0(t);
            l_47 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_47);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = j_47;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          i_47 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, i_47);
        }
      else
        {
          t = j_47;
        }
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm m_47 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_47;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,v_12 = NULL;
  f_47 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_47);
  c_47 = t;
  t = d_47;
  t = foldr_3_0(k_6, l_6, o_6, t);
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_47);
  v_12 = t;
  t = SSLsetAnnotations(v_12, c_47);
  return(t);
}
ATerm q_6 (ATerm t)
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
ATerm r_6 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym_LRule_1))
    {
      d_49 = ATgetArgument(t, 0);
      t = d_49;
      if(match_cons(t, sym_Rule_3))
        {
          a_49 = ATgetArgument(t, 0);
          b_49 = ATgetArgument(t, 1);
          c_49 = ATgetArgument(t, 2);
          {
            ATerm v_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_49 = NULL;
                t = a_49;
                t = free_vars_3_0(v_6, w_6, tboundin_3_0, t);
                i_49 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, i_49, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, a_49, b_49, c_49)));
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = v_22;
                t = e_49;
              }
          }
        }
      else
        {
          t = e_49;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          d_49 = ATgetArgument(t, 0);
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_50 = NULL;
                t = d_49;
                t = free_vars_3_0(b_7, f_7, tboundin_3_0, t);
                y_50 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, y_50, d_49);
                ;
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = e_49;
              }
          }
        }
      else
        {
          t = e_49;
        }
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm j_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_49);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_49 = ATgetArgument(t, 0);
            t = n_49;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_49 = ATgetArgument(t, 0);
                o_49 = ATgetArgument(t, 1);
                p_49 = ATgetArgument(t, 2);
                q_49 = ATgetArgument(t, 3);
                t = p_49;
                t = map_1_0(x_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_49 = ATgetArgument(t, 0);
                    o_49 = ATgetArgument(t, 1);
                    p_49 = ATgetArgument(t, 2);
                    q_49 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_49;
                t = map_1_0(z_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm b_50 = NULL;
  ATerm d_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm h_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_23);
      t = b_50;
    }
  else
    {
      t = d_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_50;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_50 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = o_50;
    }
  else
    {
      t = j_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_50;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm a_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_51);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm n_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = n_23;
      {
        ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,j_51 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_51 = ATgetArgument(t, 0);
            t = d_51;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_51 = ATgetArgument(t, 0);
                e_51 = ATgetArgument(t, 1);
                f_51 = ATgetArgument(t, 2);
                j_51 = ATgetArgument(t, 3);
                t = f_51;
                t = map_1_0(q_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_51 = ATgetArgument(t, 0);
                    e_51 = ATgetArgument(t, 1);
                    f_51 = ATgetArgument(t, 2);
                    j_51 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_51;
                t = map_1_0(u_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm t_51 = NULL;
  ATerm q_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_51 = ATgetArgument(t, 0);
          {
            ATerm t_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_23);
      t = t_51;
    }
  else
    {
      t = q_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_51;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm h_52 = NULL;
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_52 = ATgetArgument(t, 0);
          {
            ATerm y_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_23);
      t = h_52;
    }
  else
    {
      t = u_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_52;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = Cons_2_0(x_7, y_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm n_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,h_13 = NULL;
  y_52 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_52);
  n_52 = t;
  t = w_52;
  t = topdown_1_0(z_7, t);
  t = listtd_1_0(a_8, t);
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_52);
  h_13 = t;
  t = SSLsetAnnotations(h_13, n_52);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = repeat_1_0(b_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_53 = ATgetFirst((ATermList) t);
      c_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_6(b_53, c_53, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_53 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      f_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, f_53)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,q_48 = NULL,t_48 = NULL,b_14 = NULL,a_14 = NULL,z_13 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(q_6, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(r_6, t);
  t_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  j_48 = t;
  t = k_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_48 = ATgetFirst((ATermList) t);
      n_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_48);
  l_48 = t;
  t = n_48;
  t = Cons_2_0(_id, w_7, t);
  o_48 = t;
  t = (ATerm) ATinsert(CheckATermList(o_48), m_48);
  z_13 = t;
  t = SSLsetAnnotations(z_13, l_48);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_48);
  a_14 = t;
  t = SSLsetAnnotations(a_14, j_48);
  t = topdown_1_0(c_8, t);
  i_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_48);
  e_48 = t;
  t = f_48;
  t = fetch_1_0(d_8, t);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_48);
  b_14 = t;
  t = SSLsetAnnotations(b_14, e_48);
  return(t);
}
ATerm i_7 (ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm j_53 = NULL;
  t = SSL_fputc(p_55, q_55);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_53);
  return(t);
}
ATerm j_7 (ATerm d_59, ATerm e_59, ATerm t)
{
  ATerm l_53 = NULL;
  t = SSL_write_term_to_stream_text(d_59, e_59);
  l_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_53);
  return(t);
}
ATerm l_7 (ATerm n_118 (ATerm), ATerm d_453, ATerm h_59, ATerm t)
{
  ATerm m_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_453, term_g_24);
  t = open_stream_0_0(t);
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, h_59);
  t = n_118(t);
  t = fclose_0_0(t);
  t = h_59;
  return(t);
}
ATerm k_7 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm o_53 = NULL;
  t = SSL_write_term_to_stream_baf(z_58, a_59);
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_53);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm r_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if(match_cons(h_24, sym_Stream_1))
        {
          r_53 = ATgetArgument(h_24, 0);
        }
      else
        _fail(t);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(r_53, t_53, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm u_53 = NULL,g_54 = NULL,h_54 = NULL,n_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      if(match_cons(i_24, sym_Stream_1))
        {
          n_54 = ATgetArgument(i_24, 0);
        }
      else
        _fail(t);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(n_54, o_54, t);
  u_53 = t;
  t = term_j_24;
  g_54 = t;
  t = u_53;
  if(match_cons(t, sym_Stream_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, u_53);
  t = i_7(g_54, h_54, t);
  return(t);
}
ATerm output_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  t = w_122(t);
  q_53 = t;
  {
    ATerm n_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_24;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = n_24;
        t = term_t_24;
      }
    p_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_53, q_53);
    {
      ATerm w_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_25;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, p_53, q_53);
          LocalPopChoice(a_25);
          if(match_cons(t, sym__2))
            {
              ATerm c_25 = ATgetArgument(t, 0);
              ATerm d_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_7(f_8, p_53, q_53, t);
        }
      else
        {
          t = w_24;
          if(match_cons(t, sym__2))
            {
              ATerm e_25 = ATgetArgument(t, 0);
              ATerm f_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_7(g_8, p_53, q_53, t);
        }
    }
  }
  return(t);
}
ATerm i_55 (ATerm w_54, ATerm t)
{
  t = SSL_fclose(w_54);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  g_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_55 = ATgetArgument(t, 0);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_55);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = i_55(g_55, t);
          }
      }
    }
  else
    {
      t = i_55(g_55, t);
    }
  return(t);
}
ATerm m_7 (ATerm f_59, ATerm t)
{
  t = SSL_read_term_from_stream(f_59);
  return(t);
}
ATerm n_7 (ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm j_55 = NULL;
  t = SSL_fopen(r_55, s_55);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_stdin_stream();
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  t = SSL_stdout_stream();
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_55 = NULL;
  t = SSL_stderr_stream();
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_55);
  return(t);
}
ATerm n_57 (ATerm c_56, ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_explode_term(c_56);
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
          {
            d_56 = ATgetFirst((ATermList) j_25);
            {
              ATerm l_25 = (ATerm) ATgetNext((ATermList) j_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_56;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_56;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_56;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_56;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_57 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,p_56 = NULL,j_14 = NULL;
  t = SSLgetAnnotations(j_56);
  m_56 = t;
  t = h_56;
  if(match_cons(t, sym_Path_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_56, i_56);
  j_14 = t;
  t = SSLsetAnnotations(j_14, m_56);
  if(match_cons(t, sym__2))
    {
      k_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(k_56, l_56, t);
  return(t);
}
ATerm p_57 (ATerm r_56, ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,y_56 = NULL,b_57 = NULL,k_14 = NULL;
  t = SSLgetAnnotations(t_56);
  y_56 = t;
  t = SSL_is_string(r_56);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_57, s_56);
  k_14 = t;
  t = SSLsetAnnotations(k_14, y_56);
  if(match_cons(t, sym__2))
    {
      u_56 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(u_56, v_56, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_57 = NULL,j_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      ATerm n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_57(d_57, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm q_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_57(j_57, m_57, d_57, t);
                  ;
                  LocalPopChoice(r_25);
                }
              else
                {
                  t = q_25;
                  t = p_57(j_57, m_57, d_57, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_57(d_57, t);
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_57 = NULL;
      z_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_57, term_v_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = debug_1_0(h_8, t);
      _fail(t);
    }
  u_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(v_57, t);
  t_57 = t;
  t = u_57;
  t = fclose_0_0(t);
  t = t_57;
  return(t);
}
ATerm input_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      t = term_a_26;
    }
  t = ReadFromFile_0_0(t);
  t = x_122(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_58 = NULL,g_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  e_58 = t;
  t = term_b_26;
  t = whoami_0_0(t);
  g_58 = t;
  t = term_d_12;
  l_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), g_58), term_d_26);
  m_58 = t;
  t = SSL_printnl(l_58, m_58);
  t = term_g_12;
  k_58 = t;
  t = SSL_exit(k_58);
  t = e_58;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  if(match_string(t, "-k"))
    {
      t = p_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_58;
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm s_58 = NULL,u_58 = NULL,v_58 = NULL;
  s_58 = t;
  t = SSL_string_to_int(s_58);
  u_58 = t;
  t = term_f_26;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, u_58);
  t = v_7(v_58, u_58, t);
  t = s_58;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_8, j_8, k_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  if(match_string(t, "-S"))
    {
      t = x_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_58;
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm y_58 = NULL,b_59 = NULL;
  t = term_i_26;
  y_58 = t;
  t = term_l_26;
  b_59 = t;
  t = term_m_26;
  t = v_7(y_58, b_59, t);
  t = term_n_26;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm c_59 = NULL,i_59 = NULL,l_59 = NULL;
  c_59 = t;
  t = SSL_string_to_int(c_59);
  i_59 = t;
  t = term_i_26;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, i_59);
  t = v_7(l_59, i_59, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_59);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  t = term_r_26;
  m_59 = t;
  t = term_b_26;
  n_59 = t;
  t = term_t_26;
  t = v_7(m_59, n_59, t);
  t = term_u_26;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_8, m_8, n_8, t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_8, q_8, t_8, t);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = Option_3_0(v_8, w_8, x_8, t);
          }
      }
    }
  return(t);
}
ATerm v_7 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm p_59 = NULL;
  t = term_a_27;
  p_59 = t;
  t = SSL_table_put(p_59, g_60, h_60);
  t = (ATerm) ATmakeAppl(sym__3, term_a_27, g_60, h_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
      t = term_b_26;
      t = d_0(t);
      a_60 = t;
      t = term_b_27;
      b_60 = t;
      t = term_c_27;
      c_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, a_60);
      t = t_7(b_60, c_60, a_60, t);
      _fail(t);
    }
  else
    {
      ATerm j_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_59 = ATgetFirst((ATermList) t);
          v_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_59;
      t = a_0(t);
      t = term_b_26;
      t = c_0(t);
      j_60 = t;
      t = (ATerm) ATinsert(CheckATermList(v_59), j_60);
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm l_60 = NULL;
  l_60 = t;
  if(match_string(t, "-o"))
    {
      t = l_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_60;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL;
  m_60 = t;
  t = term_r_24;
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, m_60);
  t = v_7(n_60, m_60, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_60);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_8, z_8, a_9, t);
  return(t);
}
ATerm t_7 (ATerm e_65, ATerm f_65, ATerm d_65, ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            ATerm h_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
        t = s_7(e_65, f_65, t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
    x_60 = t;
    t = (ATerm) ATinsert(CheckATermList(x_60), d_65);
    y_60 = t;
    t = SSL_table_put(e_65, f_65, y_60);
    t = w_60;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
      t = term_b_26;
      t = l_0(t);
      m_61 = t;
      t = term_b_27;
      n_61 = t;
      t = term_c_27;
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, m_61);
      t = t_7(n_61, o_61, m_61, t);
      _fail(t);
    }
  else
    {
      ATerm u_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_61 = ATgetFirst((ATermList) t);
          j_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_61 = ATgetFirst((ATermList) t);
          l_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_61;
      t = i_0(t);
      t = k_61;
      t = k_0(t);
      u_61 = t;
      t = (ATerm) ATinsert(CheckATermList(l_61), u_61);
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm w_61 = NULL;
  w_61 = t;
  if(match_string(t, "-i"))
    {
      t = w_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_61;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  x_61 = t;
  t = term_z_25;
  y_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_25, x_61);
  t = v_7(y_61, x_61, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_61);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_9, c_9, d_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_26;
  t = whoami_0_0(t);
  z_61 = t;
  t = term_d_12;
  b_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_27), z_61);
  c_62 = t;
  t = SSL_printnl(b_62, c_62);
  t = term_g_12;
  a_62 = t;
  t = SSL_exit(a_62);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_7 (ATerm p_52, ATerm q_52, ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_52, q_52);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = SSL_addr(p_52, q_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_62;
      t = t_111(t);
    }
  else
    {
      ATerm j_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_62 = ATgetFirst((ATermList) t);
          g_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_62;
      t = foldr_2_0(t_111, u_111, t);
      j_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_62, j_62);
      t = u_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(p_21, q_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_62 = NULL,j_21 = NULL,k_21 = NULL;
  t = times_0_0(t);
  k_21 = t;
  t = SSL_explode_term(k_21);
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  t = foldr_2_0(e_9, f_9, t);
  n_62 = t;
  t = SSL_TicksToSeconds(n_62);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  if(match_cons(t, sym__2))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_63;
        if((c_63 != t))
          {
            _fail(t);
          }
        t = b_63;
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_63, d_63);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              t = SSL_gtr(c_63, d_63);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm j_63 = NULL;
  j_63 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_63 = NULL;
        t = term_i_26;
        t = get_config_0_0(t);
        m_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_63, term_g_12);
        t = geq_0_0(t);
        t = j_63;
        t = x_119(t);
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = j_63;
      }
  }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,x_63 = NULL,z_63 = NULL;
  t = run_time_0_0(t);
  u_63 = t;
  t = term_b_26;
  t = whoami_0_0(t);
  v_63 = t;
  t = term_d_12;
  x_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), u_63), term_y_27), v_63);
  z_63 = t;
  t = SSL_printnl(x_63, z_63);
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), u_63), term_y_27), v_63));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_26;
  a_64 = t;
  t = SSL_exit(a_64);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm l_64 = NULL,r_64 = NULL;
  r_64 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_64;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_64 = ATgetArgument(t, 0);
          {
            ATerm x_22 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(r_64);
            x_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_64);
            v_14 = t;
            t = SSLsetAnnotations(v_14, x_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_64;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      t = fetch_1_0(i_9, t);
    }
  t = n_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_64 = ATgetFirst((ATermList) t);
      w_64 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_65 = NULL,c_65 = NULL;
        ATerm k_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_65)), not_null(c_65));
          return(t);
        }
        t = w_64;
        t = g_0(t);
        if(((a_65 != NULL) && (a_65 != t)))
          _fail(t);
        else
          a_65 = t;
        t = v_64;
        t = e_0(t);
        if(((c_65 != NULL) && (c_65 != t)))
          _fail(t);
        else
          c_65 = t;
        t = w_64;
        t = reverse_acc_2_0(e_0, k_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_26;
      t = g_0(t);
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,a_15 = NULL;
  o_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_65);
  a_15 = t;
  t = SSLsetAnnotations(a_15, m_65);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_65), term_d_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_65 = NULL,l_65 = NULL;
  ATerm g_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = g_28;
      t = fetch_1_0(m_9, t);
    }
  t = term_k_28;
  t = echo_0_0(t);
  t = term_b_27;
  h_65 = t;
  t = term_c_27;
  l_65 = t;
  t = term_l_28;
  t = s_7(h_65, l_65, t);
  t = reverse_acc_2_0(_id, n_9, t);
  t = map_1_0(o_9, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm m_67 (ATerm t)
  {
    ATerm d_67 = NULL,e_67 = NULL,i_67 = NULL;
    d_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_67 = ATgetFirst((ATermList) t);
        i_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_23 = NULL,o_23 = NULL,e_15 = NULL;
          t = SSLgetAnnotations(d_67);
          i_23 = t;
          t = e_67;
          t = a_106(t);
          o_23 = t;
          t = (ATerm) ATinsert(CheckATermList(i_67), o_23);
          e_15 = t;
          t = SSLsetAnnotations(e_15, i_23);
          ;
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          {
            ATerm z_23 = NULL,d_24 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(d_67);
            z_23 = t;
            t = i_67;
            t = m_67(t);
            d_24 = t;
            t = (ATerm) ATinsert(CheckATermList(d_24), e_67);
            f_15 = t;
            t = SSLsetAnnotations(f_15, z_23);
          }
        }
    }
    return(t);
  }
  t = m_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_67;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_28 = ATgetFirst((ATermList) t);
                ATerm r_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_67;
          }
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATinsert(ATempty, q_67);
      }
    r_67 = t;
    t = term_t_24;
    s_67 = t;
    t = SSL_printnl(s_67, r_67);
    t = q_67;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_7 (ATerm f_50, ATerm g_50, ATerm t)
{
  t = SSL_strcat(f_50, g_50);
  return(t);
}
ATerm debug_1_0 (ATerm l_118 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  w_67 = t;
  t = l_118(t);
  x_67 = t;
  t = term_d_12;
  y_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_67), x_67);
  z_67 = t;
  t = SSL_printnl(y_67, z_67);
  t = w_67;
  return(t);
}
ATerm map_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm o_68 (ATerm t)
  {
    ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
    l_68 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_68;
      }
    else
      {
        ATerm s_24 = NULL,y_24 = NULL,z_24 = NULL,l_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_68 = ATgetFirst((ATermList) t);
            n_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_68);
        s_24 = t;
        t = m_68;
        t = q_105(t);
        y_24 = t;
        t = n_68;
        t = o_68(t);
        z_24 = t;
        t = (ATerm) ATinsert(CheckATermList(z_24), y_24);
        l_15 = t;
        t = SSLsetAnnotations(l_15, s_24);
      }
    return(t);
  }
  t = o_68(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_68 = NULL;
      y_68 = t;
      t = SSL_is_string(y_68);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_9, t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
              e_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_69 = ATgetArgument(t, 0);
                  t = f_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_69 = ATgetArgument(t, 0);
                      t = f_69;
                      {
                        ATerm z_28 = t;
                        int a_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_29);
                          }
                        else
                          {
                            t = z_28;
                            t = debug_1_0(q_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_69 = NULL,m_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_69 = ATgetArgument(t, 0);
                          g_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_69;
                      t = eval_config_0_0(t);
                      l_69 = t;
                      t = g_69;
                      t = eval_config_0_0(t);
                      m_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_69, m_69);
                      t = r_7(l_69, m_69, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm v_66, ATerm w_66, ATerm t)
{
  t = SSL_table_get(v_66, w_66);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL;
  v_69 = t;
  t = term_a_27;
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, v_69);
  t = s_7(w_69, v_69, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_69 = NULL,y_69 = NULL;
        t = eval_config_0_0(t);
        x_69 = t;
        t = term_a_27;
        y_69 = t;
        t = SSL_table_put(y_69, v_69, x_69);
        t = x_69;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
      }
  }
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  t = term_d_29;
  b_70 = t;
  t = term_b_26;
  c_70 = t;
  t = term_e_29;
  t = v_7(b_70, c_70, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm b_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  t = term_d_29;
  f_70 = t;
  t = term_b_26;
  g_70 = t;
  t = term_e_29;
  t = v_7(f_70, g_70, t);
  t = term_g_29;
  d_70 = t;
  t = term_b_26;
  e_70 = t;
  t = term_h_29;
  t = v_7(d_70, e_70, t);
  t = term_i_29;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, z_9, a_10, t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = Option_3_0(b_10, e_10, f_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_15 = NULL;
  m_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_70 = ATgetFirst((ATermList) t);
      j_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_70);
  h_70 = t;
  t = i_70;
  t = n_84(t);
  k_70 = t;
  t = j_70;
  t = o_84(t);
  l_70 = t;
  t = (ATerm) ATinsert(CheckATermList(l_70), k_70);
  n_15 = t;
  t = SSLsetAnnotations(n_15, h_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,w_70 = NULL,x_70 = NULL,p_15 = NULL;
  r_70 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_29;
        t = q_124(t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
    t = r_70;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_70 = ATgetFirst((ATermList) t);
        u_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_70);
    s_70 = t;
    t = term_k_27;
    x_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_27, t_70);
    t = v_7(x_70, t_70, t);
    t = u_70;
    {
      ATerm h_71 (ATerm t)
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 = t;
            int s_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_71 = NULL;
                a_71 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_71;
                ;
                LocalPopChoice(s_29);
              }
            else
              {
                t = r_29;
                t = q_124(t);
                t = Cons_2_0(_id, h_71, t);
              }
            ;
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm d_71 = NULL,e_71 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_71 = ATgetFirst((ATermList) t);
                  e_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_71), (ATerm) ATmakeAppl(sym_Undefined_1, d_71));
            }
          }
        return(t);
      }
      t = h_71(t);
      if(((w_70 != NULL) && (w_70 != t)))
        _fail(t);
      else
        w_70 = t;
      t = (ATerm) ATinsert(CheckATermList(w_70), (ATerm) ATmakeAppl(sym_Program_1, t_70));
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = SSLsetAnnotations(p_15, s_70);
    }
  }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm t_71 = NULL;
  t_71 = t;
  if(match_string(t, "--help"))
    {
      t = t_71;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_71;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_71;
        }
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  t = term_c_28;
  u_71 = t;
  t = term_b_26;
  v_71 = t;
  t = term_t_29;
  t = v_7(u_71, v_71, t);
  t = term_u_29;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm k_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  o_71 = t;
  t = term_b_27;
  q_71 = t;
  t = term_c_27;
  r_71 = t;
  t = (ATerm) ATempty;
  s_71 = t;
  t = SSL_table_put(q_71, r_71, s_71);
  t = o_71;
  {
    ATerm g_10 (ATerm t)
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_124(t);
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm y_29 = t;
            int z_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_10, i_10, j_10, t);
                ;
                LocalPopChoice(z_29);
              }
            else
              {
                t = y_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_10, t);
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_72 = NULL;
          c_72 = t;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_26 = NULL;
                t = c_72;
                {
                  ATerm e_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_30);
                    }
                  else
                    {
                      t = e_30;
                      t = fetch_1_0(k_10, t);
                    }
                  t = c_72;
                  t = default_system_usage_0_0(t);
                  t = term_l_26;
                  k_26 = t;
                  t = SSL_exit(k_26);
                }
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                {
                  ATerm o_26 = NULL;
                  t = term_d_29;
                  t = get_config_0_0(t);
                  t = c_72;
                  t = default_system_about_0_0(t);
                  t = term_l_26;
                  o_26 = t;
                  t = SSL_exit(o_26);
                }
              }
          }
          ;
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
                ATerm p_10 (ATerm t)
                {
                  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,r_15 = NULL;
                  i_72 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_72);
                  g_72 = t;
                  t = h_72;
                  if(((m_71 != NULL) && (m_71 != t)))
                    _fail(t);
                  else
                    m_71 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_72);
                  r_15 = t;
                  t = SSLsetAnnotations(r_15, g_72);
                  return(t);
                }
                t = fetch_1_0(p_10, t);
                t = term_d_12;
                if(((e_72 != NULL) && (e_72 != t)))
                  _fail(t);
                else
                  e_72 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_71)), term_i_30);
                if(((f_72 != NULL) && (f_72 != t)))
                  _fail(t);
                else
                  f_72 = t;
                t = SSL_printnl(e_72, f_72);
                t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_71)), term_i_30));
                t = default_system_usage_0_0(t);
                t = term_g_12;
                if(((d_72 != NULL) && (d_72 != t)))
                  _fail(t);
                else
                  d_72 = t;
                t = SSL_exit(d_72);
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
              }
          }
        }
      if(((n_71 != NULL) && (n_71 != t)))
        _fail(t);
      else
        n_71 = t;
      t = term_b_27;
      if(((p_71 != NULL) && (p_71 != t)))
        _fail(t);
      else
        p_71 = t;
      t = SSL_table_destroy(p_71);
      t = n_71;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  t = parse_options_1_0(p_122, t);
  n_72 = t;
  t = term_j_30;
  q_72 = t;
  t = SSL_table_create(q_72);
  t = term_j_30;
  o_72 = t;
  t = term_k_30;
  p_72 = t;
  t = SSL_table_put(o_72, p_72, n_72);
  t = n_72;
  t = r_122(t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_122, t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_122(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = w_30;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_10, v_10, w_10, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
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
ATerm t_10 (ATerm t)
{
  t = input_1_0(x_10, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_b_25;
  s_72 = t;
  t = term_b_26;
  t_72 = t;
  t = term_h_31;
  t = v_7(s_72, t_72, t);
  t = term_i_31;
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_10, default_usage_0_0, _id, t_10, t);
  return(t);
}
