#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_MatchOp_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
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
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_16;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_x_11;
ATerm term_k_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_i_6;
ATerm term_l_5;
ATerm term_a_5;
ATerm term_j_4;
void init_constant_terms (void)
{
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATinsert(ATempty, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATinsert(ATempty, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_q_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATinsert(ATempty, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATinsert(ATempty, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm p_51 (ATerm));
ATerm Continue_1 (ATerm, ATerm w_35 (ATerm));
ATerm Var_1 (ATerm, ATerm g_43 (ATerm));
ATerm Assign_1 (ATerm, ATerm z_35 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm a_36 (ATerm), ATerm b_36 (ATerm));
ATerm Alt_3 (ATerm, ATerm t_35 (ATerm), ATerm u_35 (ATerm), ATerm v_35 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm p_67 (ATerm));
ATerm Case_4 (ATerm, ATerm m_35 (ATerm), ATerm n_35 (ATerm), ATerm o_35 (ATerm), ATerm p_35 (ATerm));
ATerm Let_2 (ATerm, ATerm f_44 (ATerm), ATerm g_44 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_45 (ATerm), ATerm l_45 (ATerm));
ATerm Where_1 (ATerm, ATerm j_45 (ATerm));
ATerm Scope_2 (ATerm, ATerm h_45 (ATerm), ATerm i_45 (ATerm));
ATerm Build_1 (ATerm, ATerm e_45 (ATerm));
ATerm Op_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm As_2 (ATerm, ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm y_41 (ATerm));
ATerm Str_1 (ATerm, ATerm n_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_0 (ATerm));
ATerm Int_1 (ATerm, ATerm l_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm d_45 (ATerm));
ATerm Thread_1 (ATerm, ATerm a_45 (ATerm));
ATerm All_1 (ATerm, ATerm z_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm x_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm d_44 (ATerm), ATerm e_44 (ATerm));
ATerm SVar_1 (ATerm, ATerm c_44 (ATerm));
ATerm Call_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm z_43 (ATerm), ATerm a_44 (ATerm));
ATerm GChoice_2 (ATerm, ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm o_43 (ATerm), ATerm p_43 (ATerm));
ATerm Test_1 (ATerm, ATerm m_43 (ATerm));
ATerm Not_1 (ATerm, ATerm n_43 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_60 (ATerm));
ATerm Strategies_1 (ATerm, ATerm u_42 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_42 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm c_34 (ATerm), ATerm d_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_53 (ATerm), ATerm m_53 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_49 (ATerm));
ATerm map_1 (ATerm, ATerm a_60 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_48 (ATerm));
ATerm Program_1 (ATerm, ATerm f_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_49 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_45 (ATerm), ATerm p_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_49 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_50 (ATerm), ATerm e_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_50 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm p_51 (ATerm))
{
  ATerm h_4;
  h_4 = t;
  {
    ATerm p_6 = NULL,r_6 = NULL;
    ATerm i_4;
    i_4 = t;
    {
      ATerm q_6 = NULL;
      t = p_51(t);
      {
        q_6 = t;
        if(((p_6 != NULL) && (p_6 != q_6)))
          _fail(q_6);
        else
          p_6 = q_6;
      }
    }
    t = i_4;
    {
      ATerm s_6 = NULL;
      s_6 = t;
      if(((r_6 != NULL) && (r_6 != s_6)))
        _fail(s_6);
      else
        r_6 = s_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_6)), not_null(p_6)));
        t = printnl_0(t);
      }
    }
  }
  t = h_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm w_35 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_Continue_1))
    {
      z_6 = ATgetArgument(y_6, 0);
      {
        ATerm b_7 = NULL;
        t = not_null(z_6);
        {
          t = w_35(t);
          {
            b_7 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(b_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm i_7 = NULL,j_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_Var_1))
    {
      j_7 = ATgetArgument(i_7, 0);
      {
        ATerm l_7 = NULL;
        t = not_null(j_7);
        {
          t = g_43(t);
          {
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm z_35 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Assign_1))
    {
      t_7 = ATgetArgument(s_7, 0);
      {
        ATerm v_7 = NULL;
        t = not_null(t_7);
        {
          t = z_35(t);
          {
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(v_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(l_4);
    }
  else
    {
      t = k_4;
      {
        ATerm m_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            {
              ATerm o_4 = t;
              int p_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(p_4);
                }
              else
                {
                  t = o_4;
                  {
                    ATerm q_4 = t;
                    int r_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(r_4);
                      }
                    else
                      {
                        t = q_4;
                        {
                          ATerm s_4 = t;
                          int t_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(t_4);
                            }
                          else
                            {
                              t = s_4;
                              {
                                ATerm u_4 = t;
                                int v_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(v_4);
                                  }
                                else
                                  {
                                    t = u_4;
                                    {
                                      ATerm w_4 = t;
                                      int x_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          LocalPopChoice(x_4);
                                        }
                                      else
                                        {
                                          t = w_4;
                                          {
                                            ATerm y_4 = t;
                                            int z_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(z_4);
                                              }
                                            else
                                              {
                                                t = y_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_a_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, e_0);
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm Assign_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_Assign_2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm b_5 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_8 = NULL;
            t = not_null(i_8);
            {
              ATerm o_8 = NULL;
              t = o_0(t);
              {
                m_8 = t;
                {
                  t = not_null(j_8);
                  {
                    t = p_0(t);
                    {
                      o_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(m_8), not_null(o_8));
                    }
                  }
                }
              }
            }
            LocalPopChoice(c_5);
          }
        else
          {
            t = b_5;
            {
              ATerm s_8 = NULL;
              t = not_null(i_8);
              {
                ATerm u_8 = NULL;
                t = o_0(t);
                {
                  s_8 = t;
                  {
                    t = not_null(j_8);
                    {
                      t = p_0(t);
                      {
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(s_8), not_null(u_8));
                      }
                    }
                  }
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm a_36 (ATerm), ATerm b_36 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Fun_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      {
        ATerm l_9 = NULL;
        t = not_null(h_9);
        {
          ATerm n_9 = NULL;
          t = a_36(t);
          {
            l_9 = t;
            {
              t = not_null(i_9);
              {
                t = b_36(t);
                {
                  n_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(l_9), not_null(n_9));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm t_35 (ATerm), ATerm u_35 (ATerm), ATerm v_35 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym_Alt_3))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      a_10 = ATgetArgument(x_9, 2);
      {
        ATerm e_10 = NULL;
        t = not_null(y_9);
        {
          ATerm g_10 = NULL;
          t = t_35(t);
          {
            e_10 = t;
            {
              t = not_null(z_9);
              {
                ATerm i_10 = NULL;
                t = u_35(t);
                {
                  g_10 = t;
                  {
                    t = not_null(a_10);
                    {
                      t = v_35(t);
                      {
                        i_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(e_10), not_null(g_10), not_null(i_10));
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
  else
    _fail(t);
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm d_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            {
              ATerm h_5 = t;
              int i_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(i_5);
                }
              else
                {
                  t = h_5;
                  {
                    ATerm j_5 = t;
                    int k_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(k_5);
                      }
                    else
                      {
                        t = j_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, s_0);
        return(t);
      }
      t = Alt_3(t, q_0, r_0, p_67);
      LocalPopChoice(e_5);
    }
  else
    {
      t = d_5;
      {
        ATerm t_0 (ATerm t)
        {
          t = term_l_5;
          return(t);
        }
        t = debug_1(t, t_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm m_35 (ATerm), ATerm n_35 (ATerm), ATerm o_35 (ATerm), ATerm p_35 (ATerm))
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_Case_4))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      x_10 = ATgetArgument(u_10, 2);
      y_10 = ATgetArgument(u_10, 3);
      {
        ATerm d_11 = NULL;
        t = not_null(v_10);
        {
          ATerm f_11 = NULL;
          t = m_35(t);
          {
            d_11 = t;
            {
              t = not_null(w_10);
              {
                ATerm h_11 = NULL;
                t = n_35(t);
                {
                  f_11 = t;
                  {
                    t = not_null(x_10);
                    {
                      ATerm j_11 = NULL;
                      t = o_35(t);
                      {
                        h_11 = t;
                        {
                          t = not_null(y_10);
                          {
                            t = p_35(t);
                            {
                              j_11 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(d_11), not_null(f_11), not_null(h_11), not_null(j_11));
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
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm f_44 (ATerm), ATerm g_44 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_Let_2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        ATerm z_11 = NULL;
        t = not_null(v_11);
        {
          ATerm b_12 = NULL;
          t = f_44(t);
          {
            z_11 = t;
            {
              t = not_null(w_11);
              {
                t = g_44(t);
                {
                  b_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_11), not_null(b_12));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm k_45 (ATerm), ATerm l_45 (ATerm))
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Prim_2))
    {
      l_12 = ATgetArgument(k_12, 0);
      m_12 = ATgetArgument(k_12, 1);
      {
        ATerm p_12 = NULL;
        t = not_null(l_12);
        {
          ATerm r_12 = NULL;
          t = k_45(t);
          {
            p_12 = t;
            {
              t = not_null(m_12);
              {
                t = l_45(t);
                {
                  r_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_12), not_null(r_12));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm j_45 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_Where_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      {
        ATerm c_13 = NULL;
        t = not_null(a_13);
        {
          t = j_45(t);
          {
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(c_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm h_45 (ATerm), ATerm i_45 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Scope_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm p_13 = NULL;
        t = not_null(l_13);
        {
          ATerm r_13 = NULL;
          t = h_45(t);
          {
            p_13 = t;
            {
              t = not_null(m_13);
              {
                t = i_45(t);
                {
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_13), not_null(r_13));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm e_45 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Build_1))
    {
      a_14 = ATgetArgument(z_13, 0);
      {
        ATerm c_14 = NULL;
        t = not_null(a_14);
        {
          t = e_45(t);
          {
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_14));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,t_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Op_2))
    {
      l_14 = ATgetArgument(k_14, 0);
      t_14 = ATgetArgument(k_14, 1);
      {
        ATerm w_14 = NULL;
        t = not_null(l_14);
        {
          ATerm y_14 = NULL;
          t = k_43(t);
          {
            w_14 = t;
            {
              t = not_null(t_14);
              {
                t = l_43(t);
                {
                  y_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(w_14), not_null(y_14));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_As_2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      {
        ATerm p_15 = NULL;
        t = not_null(l_15);
        {
          ATerm r_15 = NULL;
          t = w_41(t);
          {
            p_15 = t;
            {
              t = not_null(m_15);
              {
                t = x_41(t);
                {
                  r_15 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(p_15), not_null(r_15));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm y_41 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_BuildDefault_1))
    {
      b_16 = ATgetArgument(a_16, 0);
      {
        ATerm d_16 = NULL;
        t = not_null(b_16);
        {
          t = y_41(t);
          {
            d_16 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(d_16));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_Str_1))
    {
      n_16 = ATgetArgument(m_16, 0);
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL;
            t = not_null(n_16);
            {
              t = n_0(t);
              {
                p_16 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(p_16));
              }
            }
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm b_17 = NULL;
              t = not_null(n_16);
              {
                t = n_0(t);
                {
                  b_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_17));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t_17 = t;
  t = SSL_is_real(not_null(t_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_Real_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      {
        ATerm o_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_18 = NULL;
            t = not_null(c_18);
            {
              t = m_0(t);
              {
                e_18 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(e_18));
              }
            }
            LocalPopChoice(p_5);
          }
        else
          {
            t = o_5;
            {
              ATerm h_18 = NULL;
              t = not_null(c_18);
              {
                t = m_0(t);
                {
                  h_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(h_18));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm s_18 = NULL,v_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_Int_1))
    {
      v_18 = ATgetArgument(s_18, 0);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_18 = NULL;
            t = not_null(v_18);
            {
              t = l_0(t);
              {
                x_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(x_18));
              }
            }
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm g_19 = NULL;
              t = not_null(v_18);
              {
                t = l_0(t);
                {
                  g_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(g_19));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  m_19 :
  if(!(match_cons(n_19, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
              ATerm w_5 = t;
              int x_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(x_5);
                }
              else
                {
                  t = w_5;
                  {
                    ATerm y_5 = t;
                    int z_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(z_5);
                      }
                    else
                      {
                        t = y_5;
                        {
                          ATerm a_6 = t;
                          int b_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(b_6);
                            }
                          else
                            {
                              t = a_6;
                              {
                                ATerm c_6 = t;
                                int d_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    LocalPopChoice(d_6);
                                  }
                                else
                                  {
                                    t = c_6;
                                    {
                                      ATerm e_6 = t;
                                      int f_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, u_0, match_term_exp_0);
                                          LocalPopChoice(f_6);
                                        }
                                      else
                                        {
                                          t = e_6;
                                          {
                                            ATerm g_6 = t;
                                            int h_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, v_0);
                                                LocalPopChoice(h_6);
                                              }
                                            else
                                              {
                                                t = g_6;
                                                {
                                                  ATerm w_0 (ATerm t)
                                                  {
                                                    t = term_i_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, w_0);
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm d_45 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_cons(t_19, sym_Match_1))
    {
      u_19 = ATgetArgument(t_19, 0);
      {
        ATerm w_19 = NULL;
        t = not_null(u_19);
        {
          t = d_45(t);
          {
            w_19 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_Thread_1))
    {
      e_20 = ATgetArgument(d_20, 0);
      {
        ATerm g_20 = NULL;
        t = not_null(e_20);
        {
          t = a_45(t);
          {
            g_20 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(g_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm z_44 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_All_1))
    {
      o_20 = ATgetArgument(n_20, 0);
      {
        ATerm q_20 = NULL;
        t = not_null(o_20);
        {
          t = z_44(t);
          {
            q_20 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(q_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Some_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_21 = NULL;
            t = not_null(a_21);
            {
              t = k_0(t);
              {
                c_21 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(c_21));
              }
            }
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            {
              ATerm f_21 = NULL;
              t = not_null(a_21);
              {
                t = k_0(t);
                {
                  f_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(f_21));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm x_44 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_One_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm r_21 = NULL;
        t = not_null(p_21);
        {
          t = x_44(t);
          {
            r_21 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(r_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Cong_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm h_22 = NULL;
        t = not_null(d_22);
        {
          ATerm j_22 = NULL;
          t = v_44(t);
          {
            h_22 = t;
            {
              t = not_null(e_22);
              {
                t = w_44(t);
                {
                  j_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_22), not_null(j_22));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  t = SSL_is_int(not_null(p_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_Path_2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      {
        ATerm b_23 = NULL;
        t = not_null(x_22);
        {
          ATerm d_23 = NULL;
          t = t_44(t);
          {
            b_23 = t;
            {
              t = not_null(y_22);
              {
                t = u_44(t);
                {
                  d_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(b_23), not_null(d_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm d_44 (ATerm), ATerm e_44 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_Rec_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        ATerm r_23 = NULL;
        t = not_null(n_23);
        {
          ATerm t_23 = NULL;
          t = d_44(t);
          {
            r_23 = t;
            {
              t = not_null(o_23);
              {
                t = e_44(t);
                {
                  t_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(r_23), not_null(t_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_SVar_1))
    {
      c_24 = ATgetArgument(b_24, 0);
      {
        ATerm e_24 = NULL;
        t = not_null(c_24);
        {
          t = c_44(t);
          {
            e_24 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(e_24));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Call_2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      {
        ATerm r_24 = NULL;
        t = not_null(n_24);
        {
          ATerm t_24 = NULL;
          t = r_44(t);
          {
            r_24 = t;
            {
              t = not_null(o_24);
              {
                t = s_44(t);
                {
                  t_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(r_24), not_null(t_24));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm z_43 (ATerm), ATerm a_44 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym_LGChoice_2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        ATerm h_25 = NULL;
        t = not_null(d_25);
        {
          ATerm j_25 = NULL;
          t = z_43(t);
          {
            h_25 = t;
            {
              t = not_null(e_25);
              {
                t = a_44(t);
                {
                  j_25 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(h_25), not_null(j_25));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm GChoice_2 (ATerm t, ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_GChoice_2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      {
        ATerm x_25 = NULL;
        t = not_null(t_25);
        {
          ATerm z_25 = NULL;
          t = x_43(t);
          {
            x_25 = t;
            {
              t = not_null(u_25);
              {
                t = y_43(t);
                {
                  z_25 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(x_25), not_null(z_25));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_GuardedLChoice_3))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      m_26 = ATgetArgument(j_26, 2);
      {
        ATerm q_26 = NULL;
        t = not_null(k_26);
        {
          ATerm s_26 = NULL;
          t = u_43(t);
          {
            q_26 = t;
            {
              t = not_null(l_26);
              {
                ATerm u_26 = NULL;
                t = v_43(t);
                {
                  s_26 = t;
                  {
                    t = not_null(m_26);
                    {
                      t = w_43(t);
                      {
                        u_26 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(q_26), not_null(s_26), not_null(u_26));
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
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_LChoice_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm j_27 = NULL;
        t = not_null(f_27);
        {
          ATerm l_27 = NULL;
          t = s_43(t);
          {
            j_27 = t;
            {
              t = not_null(g_27);
              {
                t = t_43(t);
                {
                  l_27 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_27), not_null(l_27));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm))
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym_Choice_2))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      {
        ATerm z_27 = NULL;
        t = not_null(v_27);
        {
          ATerm b_28 = NULL;
          t = q_43(t);
          {
            z_27 = t;
            {
              t = not_null(w_27);
              {
                t = r_43(t);
                {
                  b_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_27), not_null(b_28));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm o_43 (ATerm), ATerm p_43 (ATerm))
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_Seq_2))
    {
      l_28 = ATgetArgument(k_28, 0);
      m_28 = ATgetArgument(k_28, 1);
      {
        ATerm p_28 = NULL;
        t = not_null(l_28);
        {
          ATerm r_28 = NULL;
          t = o_43(t);
          {
            p_28 = t;
            {
              t = not_null(m_28);
              {
                t = p_43(t);
                {
                  r_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_28), not_null(r_28));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm m_43 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Test_1))
    {
      a_29 = ATgetArgument(z_28, 0);
      {
        ATerm c_29 = NULL;
        t = not_null(a_29);
        {
          t = m_43(t);
          {
            c_29 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm n_43 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_Not_1))
    {
      k_29 = ATgetArgument(j_29, 0);
      {
        ATerm m_29 = NULL;
        t = not_null(k_29);
        {
          t = n_43(t);
          {
            m_29 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(m_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  q_29 :
  if(!(match_cons(r_29, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  s_29 :
  if(!(match_cons(t_29, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm t_6 = t;
              int u_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(u_6);
                }
              else
                {
                  t = t_6;
                  {
                    ATerm v_6 = t;
                    int w_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(w_6);
                      }
                    else
                      {
                        t = v_6;
                        {
                          ATerm a_7 = t;
                          int c_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(c_7);
                            }
                          else
                            {
                              t = a_7;
                              {
                                ATerm d_7 = t;
                                int e_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(e_7);
                                  }
                                else
                                  {
                                    t = d_7;
                                    {
                                      ATerm f_7 = t;
                                      int g_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(g_7);
                                        }
                                      else
                                        {
                                          t = f_7;
                                          {
                                            ATerm k_7 = t;
                                            int m_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(m_7);
                                              }
                                            else
                                              {
                                                t = k_7;
                                                {
                                                  ATerm n_7 = t;
                                                  int o_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(o_7);
                                                    }
                                                  else
                                                    {
                                                      t = n_7;
                                                      {
                                                        ATerm p_7 = t;
                                                        int q_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(q_7);
                                                          }
                                                        else
                                                          {
                                                            t = p_7;
                                                            {
                                                              ATerm u_7 = t;
                                                              int w_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    ATerm z_0 (ATerm t)
                                                                    {
                                                                      ATerm a_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, a_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, z_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, x_0, y_0);
                                                                  LocalPopChoice(w_7);
                                                                }
                                                              else
                                                                {
                                                                  t = u_7;
                                                                  {
                                                                    ATerm x_7 = t;
                                                                    int y_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(y_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_7;
                                                                        {
                                                                          ATerm z_7 = t;
                                                                          int a_8 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(a_8);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_7;
                                                                              {
                                                                                ATerm b_8 = t;
                                                                                int c_8 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm b_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, b_1);
                                                                                    LocalPopChoice(c_8);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_8;
                                                                                    {
                                                                                      ATerm d_8 = t;
                                                                                      int e_8 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(e_8);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_8;
                                                                                          {
                                                                                            ATerm f_8 = t;
                                                                                            int k_8 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(k_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_8;
                                                                                                {
                                                                                                  ATerm l_8 = t;
                                                                                                  int n_8 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(n_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_8;
                                                                                                      {
                                                                                                        ATerm p_8 = t;
                                                                                                        int q_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(q_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_8;
                                                                                                            {
                                                                                                              ATerm r_8 = t;
                                                                                                              int t_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  LocalPopChoice(t_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_8;
                                                                                                                  {
                                                                                                                    ATerm v_8 = t;
                                                                                                                    int w_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(w_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = v_8;
                                                                                                                        {
                                                                                                                          ATerm x_8 = t;
                                                                                                                          int y_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm c_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, c_1, strategy_expression_0);
                                                                                                                              LocalPopChoice(y_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_8;
                                                                                                                              {
                                                                                                                                ATerm z_8 = t;
                                                                                                                                int a_9 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(a_9);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = z_8;
                                                                                                                                    {
                                                                                                                                      ATerm b_9 = t;
                                                                                                                                      int c_9 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm d_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, d_1);
                                                                                                                                          LocalPopChoice(c_9);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_9;
                                                                                                                                          {
                                                                                                                                            ATerm d_9 = t;
                                                                                                                                            int e_9 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm e_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm f_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm g_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm h_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, h_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, g_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, f_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, e_1, strategy_expression_0);
                                                                                                                                                LocalPopChoice(e_9);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = d_9;
                                                                                                                                                {
                                                                                                                                                  ATerm j_9 = t;
                                                                                                                                                  int k_9 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm i_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm k_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, k_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, i_1, j_1, strategy_expression_0);
                                                                                                                                                      LocalPopChoice(k_9);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_9;
                                                                                                                                                      {
                                                                                                                                                        ATerm m_9 = t;
                                                                                                                                                        int o_9 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm l_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, l_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(o_9);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = m_9;
                                                                                                                                                            {
                                                                                                                                                              ATerm p_9 = t;
                                                                                                                                                              int q_9 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm m_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, m_1);
                                                                                                                                                                  LocalPopChoice(q_9);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = p_9;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm r_9 = t;
                                                                                                                                                                    int s_9 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(s_9);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = r_9;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm n_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_t_9;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, n_1);
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
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_is_string(not_null(w_29));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_VarDec_2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm i_30 = NULL;
        t = not_null(e_30);
        {
          ATerm k_30 = NULL;
          t = k_44(t);
          {
            i_30 = t;
            {
              t = not_null(f_30);
              {
                t = l_44(t);
                {
                  k_30 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_30), not_null(k_30));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym_SDef_3))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      x_30 = ATgetArgument(u_30, 2);
      {
        ATerm b_31 = NULL;
        t = not_null(v_30);
        {
          ATerm d_31 = NULL;
          t = h_44(t);
          {
            b_31 = t;
            {
              t = not_null(w_30);
              {
                ATerm f_31 = NULL;
                t = i_44(t);
                {
                  d_31 = t;
                  {
                    t = not_null(x_30);
                    {
                      t = j_44(t);
                      {
                        f_31 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_31), not_null(d_31), not_null(f_31));
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
  else
    _fail(t);
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, p_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, o_1, strategy_expression_0);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = debug_1(t, q_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm l_31 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = Cons_2(t, c_60, l_31);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_42 (ATerm))
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym_Strategies_1))
    {
      q_31 = ATgetArgument(p_31, 0);
      {
        ATerm s_31 = NULL;
        t = not_null(q_31);
        {
          t = u_42(t);
          {
            s_31 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_31));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm w_42 (ATerm))
{
  ATerm z_31 = NULL,a_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_Specification_1))
    {
      a_32 = ATgetArgument(z_31, 0);
      {
        ATerm c_32 = NULL;
        t = not_null(a_32);
        {
          t = w_42(t);
          {
            c_32 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(c_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, u_1);
            return(t);
          }
          t = Cons_2(t, t_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, s_1);
        return(t);
      }
      t = Specification_1(t, r_1);
      LocalPopChoice(h_10);
    }
  else
    {
      t = f_10;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_j_10;
          return(t);
        }
        t = debug_1(t, v_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_34 (ATerm), ATerm d_34 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym__2))
    {
      l_32 = ATgetArgument(k_32, 0);
      m_32 = ATgetArgument(k_32, 1);
      {
        ATerm p_32 = NULL;
        t = not_null(l_32);
        {
          ATerm r_32 = NULL;
          t = c_34(t);
          {
            p_32 = t;
            {
              t = not_null(m_32);
              {
                t = d_34(t);
                {
                  r_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_32), not_null(r_32));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_33 = NULL;
  ATerm k_10;
  k_10 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm b_33 = NULL,c_33 = NULL;
      b_33 = t;
      x_32 :
      if(match_cons(b_33, sym_Program_1))
        {
          c_33 = ATgetArgument(b_33, 0);
          if(((a_33 != NULL) && (a_33 != c_33)))
            _fail(c_33);
          else
            a_33 = c_33;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(CheckATermList(term_n_10), not_null(a_33)), term_l_10));
      {
        t = printnl_0(t);
        {
          t = term_o_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_10;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_r_10;
  {
    t = printnl_0(t);
    {
      t = term_o_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      ATerm s_10 = t;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            ATerm n_33 = NULL;
            n_33 = t;
            e_33 :
            if(!(match_cons(n_33, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_1);
          PopChoice();
          _fail(t);
        }
      else
        t = s_10;
      return(t);
    }
    t = _2(t, y_1, _id);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm o_33 = NULL,p_33 = NULL;
          o_33 = t;
          g_33 :
          if(match_cons(o_33, sym_Runtime_1))
            {
              p_33 = ATgetArgument(o_33, 0);
              if(((m_33 != NULL) && (m_33 != p_33)))
                _fail(p_33);
              else
                m_33 = p_33;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_2);
        return(t);
      }
      t = _2(t, a_2, _id);
      {
        ATerm c_2 (ATerm t)
        {
          ATerm d_2 (ATerm t)
          {
            ATerm q_33 = NULL,r_33 = NULL;
            q_33 = t;
            k_33 :
            if(match_cons(q_33, sym_Program_1))
              {
                r_33 = ATgetArgument(q_33, 0);
                if(((l_33 != NULL) && (l_33 != r_33)))
                  _fail(r_33);
                else
                  l_33 = r_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_2);
          return(t);
        }
        t = _2(t, c_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_b_11), not_null(m_33)), term_z_10), not_null(l_33)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, x_1);
  {
    t = term_c_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      t = SSL_WriteToTextFile(not_null(x_33), not_null(y_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      t = SSL_WriteToBinaryFile(not_null(h_34), not_null(i_34));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_34 = NULL;
  ATerm e_11;
  e_11 = t;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm g_11 = t;
      int i_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_2 (ATerm t)
          {
            ATerm r_34 = NULL,s_34 = NULL;
            r_34 = t;
            n_34 :
            if(match_cons(r_34, sym_Output_1))
              {
                s_34 = ATgetArgument(r_34, 0);
                if(((q_34 != NULL) && (q_34 != s_34)))
                  _fail(s_34);
                else
                  q_34 = s_34;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_2);
          LocalPopChoice(i_11);
        }
      else
        {
          t = g_11;
          {
            ATerm t_34 = NULL;
            t = term_k_11;
            {
              t_34 = t;
              if(((q_34 != NULL) && (q_34 != t_34)))
                _fail(t_34);
              else
                q_34 = t_34;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_2, _id);
  }
  t = e_11;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm h_2 (ATerm t)
      {
        t = not_null(q_34);
        return(t);
      }
      t = split_2(t, h_2, _id);
      return(t);
    }
    t = _2(t, _id, g_2);
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm u_34 = NULL;
              u_34 = t;
              p_34 :
              if(!(match_cons(u_34, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, j_2);
            return(t);
          }
          t = _2(t, i_2, WriteToBinaryFile_0);
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm u_50 (ATerm))
{
  ATerm a_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  ATerm n_11;
  n_11 = t;
  t = dtime_0(t);
  t = n_11;
  {
    t = u_50(t);
    {
      ATerm o_11;
      o_11 = t;
      {
        ATerm b_35 = NULL;
        t = dtime_0(t);
        {
          b_35 = t;
          if(((a_35 != NULL) && (a_35 != b_35)))
            _fail(b_35);
          else
            a_35 = b_35;
        }
      }
      t = o_11;
      {
        c_35 = t;
        z_34 :
        if(match_cons(c_35, sym__2))
          {
            d_35 = ATgetArgument(c_35, 0);
            e_35 = ATgetArgument(c_35, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_35)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_35))), not_null(e_35));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = SSL_ReadFromFile(not_null(k_35));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_53 (ATerm), ATerm m_53 (ATerm))
{
  ATerm x_35 = NULL,c_36 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm y_35 = NULL;
    t = l_53(t);
    {
      y_35 = t;
      if(((x_35 != NULL) && (x_35 != y_35)))
        _fail(y_35);
      else
        x_35 = y_35;
    }
  }
  t = p_11;
  {
    ATerm d_36 = NULL;
    t = m_53(t);
    {
      d_36 = t;
      if(((c_36 != NULL) && (c_36 != d_36)))
        _fail(d_36);
      else
        c_36 = d_36;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), not_null(c_36));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_36 = NULL;
  ATerm q_11;
  q_11 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm m_36 = NULL,n_36 = NULL;
          m_36 = t;
          j_36 :
          if(match_cons(m_36, sym_Input_1))
            {
              n_36 = ATgetArgument(m_36, 0);
              if(((l_36 != NULL) && (l_36 != n_36)))
                _fail(n_36);
              else
                l_36 = n_36;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_2);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm o_36 = NULL;
          t = term_x_11;
          {
            o_36 = t;
            if(((l_36 != NULL) && (l_36 != o_36)))
              _fail(o_36);
            else
              l_36 = o_36;
          }
        }
      }
  }
  t = q_11;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(l_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  r_36 :
  if(!(match_cons(s_36, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_50 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm y_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = y_11;
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = t_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_table_create(not_null(u_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm e_12;
    e_12 = t;
    {
      t = term_f_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, not_null(y_36));
          t = table_put_0(t);
        }
      }
    }
    t = e_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  g_37 = t;
  e_37 :
  if(match_string(g_37, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(g_37) == AT_LIST) && ((ATermList) g_37 != ATempty)))
        {
          h_37 = ATgetFirst((ATermList) g_37);
          i_37 = (ATerm) ATgetNext((ATermList) g_37);
          f_37 :
          if(((ATgetType(i_37) == AT_LIST) && ((ATermList) i_37 != ATempty)))
            {
              j_37 = ATgetFirst((ATermList) i_37);
              k_37 = (ATerm) ATgetNext((ATermList) i_37);
              {
                ATerm o_37 = NULL;
                ATerm h_12;
                h_12 = t;
                {
                  t = not_null(h_37);
                  t = h_0(t);
                }
                t = h_12;
                {
                  ATerm p_37 = NULL;
                  t = not_null(j_37);
                  {
                    t = i_0(t);
                    {
                      p_37 = t;
                      if(((o_37 != NULL) && (o_37 != p_37)))
                        _fail(p_37);
                      else
                        o_37 = p_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_37)), not_null(o_37));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm e_38 = NULL;
        e_38 = t;
        t_37 :
        if(!(match_string(e_38, "-S")))
          {
            if(!(match_string(e_38, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_o_12;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_q_12;
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      LocalPopChoice(n_12);
    }
  else
    {
      t = i_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm f_38 = NULL;
              f_38 = t;
              u_37 :
              if(!(match_string(f_38, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_u_12;
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_v_12;
              return(t);
            }
            t = Option_3(t, q_2, r_2, s_2);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm g_38 = NULL;
                    g_38 = t;
                    v_37 :
                    if(!(match_string(g_38, "-v")))
                      {
                        if(!(match_string(g_38, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = term_b_13;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_d_13;
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  {
                    ATerm e_13 = t;
                    int f_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm h_38 = NULL;
                          h_38 = t;
                          w_37 :
                          if(!(match_string(h_38, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          ATerm i_38 = NULL;
                          ATerm j_38 = NULL;
                          j_38 = t;
                          if(((i_38 != NULL) && (i_38 != j_38)))
                            _fail(j_38);
                          else
                            i_38 = j_38;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(i_38));
                          return(t);
                        }
                        ATerm y_2 (ATerm t)
                        {
                          t = term_g_13;
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, x_2, y_2);
                        LocalPopChoice(f_13);
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm h_13 = t;
                          int i_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_2 (ATerm t)
                              {
                                ATerm k_38 = NULL;
                                k_38 = t;
                                y_37 :
                                if(!(match_string(k_38, "-i")))
                                  {
                                    if(!(match_string(k_38, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                ATerm l_38 = NULL;
                                ATerm m_38 = NULL;
                                m_38 = t;
                                if(((l_38 != NULL) && (l_38 != m_38)))
                                  _fail(m_38);
                                else
                                  l_38 = m_38;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_38));
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = term_n_13;
                                return(t);
                              }
                              t = ArgOption_3(t, z_2, a_3, b_3);
                              LocalPopChoice(i_13);
                            }
                          else
                            {
                              t = h_13;
                              {
                                ATerm o_13 = t;
                                int q_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      ATerm n_38 = NULL;
                                      n_38 = t;
                                      a_38 :
                                      if(!(match_string(n_38, "-o")))
                                        {
                                          if(!(match_string(n_38, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm o_38 = NULL;
                                      ATerm p_38 = NULL;
                                      p_38 = t;
                                      if(((o_38 != NULL) && (o_38 != p_38)))
                                        _fail(p_38);
                                      else
                                        o_38 = p_38;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_38));
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = term_s_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_3, d_3, e_3);
                                    LocalPopChoice(q_13);
                                  }
                                else
                                  {
                                    t = o_13;
                                    {
                                      ATerm t_13 = t;
                                      int u_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_3 (ATerm t)
                                          {
                                            ATerm q_38 = NULL;
                                            q_38 = t;
                                            c_38 :
                                            if(!(match_string(q_38, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = term_v_13;
                                            return(t);
                                          }
                                          ATerm h_3 (ATerm t)
                                          {
                                            t = term_w_13;
                                            return(t);
                                          }
                                          t = Option_3(t, f_3, g_3, h_3);
                                          LocalPopChoice(u_13);
                                        }
                                      else
                                        {
                                          t = t_13;
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              ATerm r_38 = NULL;
                                              r_38 = t;
                                              d_38 :
                                              if(!(match_string(r_38, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = term_x_13;
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = term_b_14;
                                              return(t);
                                            }
                                            t = Option_3(t, i_3, j_3, k_3);
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
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  t = SSL_table_destroy(not_null(w_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_exit(not_null(a_39));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_implode_string(not_null(e_39));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_60 (ATerm))
{
  ATerm h_39 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_39);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          t = Nil_0(t);
          t = o_60(t);
        }
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
        k_39 = t;
        j_39 :
        if(((ATgetType(k_39) == AT_LIST) && ((ATermList) k_39 != ATempty)))
          {
            l_39 = ATgetFirst((ATermList) k_39);
            m_39 = (ATerm) ATgetNext((ATermList) k_39);
            {
              t = not_null(l_39);
              {
                ATerm l_3 (ATerm t)
                {
                  t = not_null(m_39);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_3);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  t = SSL_explode_string(not_null(s_39));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm v_39 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = Cons_2(t, a_60, v_39);
      }
    return(t);
  }
  t = v_39(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  c_40 = t;
  z_39 :
  if(((ATgetType(c_40) == AT_LIST) && ((ATermList) c_40 != ATempty)))
    {
      a_40 = ATgetFirst((ATermList) c_40);
      b_40 = (ATerm) ATgetNext((ATermList) c_40);
      {
        t = not_null(b_40);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm f_40 = NULL;
            ATerm g_40 = NULL;
            t = g_0(t);
            {
              g_40 = t;
              if(((f_40 != NULL) && (f_40 != g_40)))
                _fail(g_40);
              else
                f_40 = g_40;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(f_40)), not_null(a_40));
            return(t);
          }
          t = reverse_1(t, m_3);
        }
      }
    }
  else
    {
      if(((ATermList) c_40 == ATempty))
        {
          {
            t = term_m_14;
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, n_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_36 (ATerm))
{
  ATerm n_40 = NULL,o_40 = NULL;
  n_40 = t;
  m_40 :
  if(match_cons(n_40, sym_Program_1))
    {
      o_40 = ATgetArgument(n_40, 0);
      {
        ATerm q_40 = NULL;
        t = not_null(o_40);
        {
          t = f_36(t);
          {
            q_40 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_40));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm y_40 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm z_40 = NULL;
      z_40 = t;
      if(((y_40 != NULL) && (y_40 != z_40)))
        _fail(z_40);
      else
        y_40 = z_40;
      return(t);
    }
    t = Program_1(t, p_3);
    return(t);
  }
  t = option_defined_1(t, o_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm a_41 = NULL;
      ATerm b_41 = NULL;
      t = term_m_14;
      {
        ATerm r_3 (ATerm t)
        {
          t = not_null(y_40);
          return(t);
        }
        t = short_description_1(t, r_3);
        {
          t = concat_strings_0(t);
          {
            b_41 = t;
            if(((a_41 != NULL) && (a_41 != b_41)))
              _fail(b_41);
            else
              a_41 = b_41;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATempty, not_null(a_41)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = term_p_14;
      {
        t = printnl_0(t);
        {
          t = term_s_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm c_41 = NULL;
                  c_41 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_41)), term_u_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm e_41 = NULL;
                    ATerm f_41 = NULL;
                    t = term_m_14;
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(y_40);
                        return(t);
                      }
                      t = long_description_1(t, u_3);
                      {
                        t = concat_strings_0(t);
                        {
                          f_41 = t;
                          if(((e_41 != NULL) && (e_41 != f_41)))
                            _fail(f_41);
                          else
                            e_41 = f_41;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_41)), term_v_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_3);
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
ATerm printnl_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym__2))
    {
      n_41 = ATgetArgument(m_41, 0);
      o_41 = ATgetArgument(m_41, 1);
      {
        ATerm x_14;
        x_14 = t;
        t = SSL_printnl(not_null(n_41), not_null(o_41));
        t = x_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_36 (ATerm))
{
  ATerm v_41 = NULL,z_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Undefined_1))
    {
      z_41 = ATgetArgument(v_41, 0);
      {
        ATerm b_42 = NULL;
        t = not_null(z_41);
        {
          t = g_36(t);
          {
            b_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_42));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm f_42 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_60, _id);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = Cons_2(t, _id, f_42);
      }
    return(t);
  }
  t = f_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_49 (ATerm))
{
  t = fetch_1(t, y_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  g_42 :
  if(!(match_cons(h_42, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_66(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym__2))
    {
      l_42 = ATgetArgument(k_42, 0);
      m_42 = ATgetArgument(k_42, 1);
      t = SSL_table_get(not_null(l_42), not_null(m_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_42 = NULL,v_42 = NULL,x_42 = NULL,y_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym__3))
    {
      v_42 = ATgetArgument(t_42, 0);
      x_42 = ATgetArgument(t_42, 1);
      y_42 = ATgetArgument(t_42, 2);
      {
        ATerm d_15;
        d_15 = t;
        {
          ATerm c_43 = NULL;
          ATerm d_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(x_42));
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
                t = (ATerm) ATempty;
              }
            {
              d_43 = t;
              if(((c_43 != NULL) && (c_43 != d_43)))
                _fail(d_43);
              else
                c_43 = d_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_42), not_null(x_42), (ATerm) ATinsert(CheckATermList(not_null(c_43)), not_null(y_42)));
            t = table_put_0(t);
          }
        }
        t = d_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_49 (ATerm))
{
  ATerm i_43 = NULL;
  ATerm j_43 = NULL;
  t = term_m_14;
  {
    t = e_49(t);
    {
      j_43 = t;
      if(((i_43 != NULL) && (i_43 != j_43)))
        _fail(j_43);
      else
        i_43 = j_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, not_null(i_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm q_44 = NULL,y_44 = NULL,b_45 = NULL;
  q_44 = t;
  p_44 :
  if(match_string(q_44, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(q_44) == AT_LIST) && ((ATermList) q_44 != ATempty)))
        {
          y_44 = ATgetFirst((ATermList) q_44);
          b_45 = (ATerm) ATgetNext((ATermList) q_44);
          {
            ATerm g_45 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              t = not_null(y_44);
              t = a_0(t);
            }
            t = g_15;
            {
              ATerm m_45 = NULL;
              t = term_m_14;
              {
                t = d_0(t);
                {
                  m_45 = t;
                  if(((g_45 != NULL) && (g_45 != m_45)))
                    _fail(m_45);
                  else
                    g_45 = m_45;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_45)), not_null(g_45));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm t_45 = NULL;
    t_45 = t;
    s_45 :
    if(!(match_string(t_45, "--help")))
      {
        if(!(match_string(t_45, "-h")))
          {
            if(!(match_string(t_45, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_h_15;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_i_15;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  v_45 :
  if(((ATgetType(w_45) == AT_LIST) && ((ATermList) w_45 != ATempty)))
    {
      x_45 = ATgetFirst((ATermList) w_45);
      y_45 = (ATerm) ATgetNext((ATermList) w_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_45)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_45)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_45 (ATerm), ATerm p_45 (ATerm))
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(((ATgetType(g_46) == AT_LIST) && ((ATermList) g_46 != ATempty)))
    {
      h_46 = ATgetFirst((ATermList) g_46);
      i_46 = (ATerm) ATgetNext((ATermList) g_46);
      {
        ATerm l_46 = NULL;
        t = not_null(h_46);
        {
          ATerm n_46 = NULL;
          t = o_45(t);
          {
            l_46 = t;
            {
              t = not_null(i_46);
              {
                t = p_45(t);
                {
                  n_46 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_46)), not_null(l_46));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  s_46 :
  if(((ATermList) t_46 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = term_o_15;
      t = c_49(t);
      return(t);
    }
    t = try_1(t, y_3);
  }
  t = n_15;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm v_46 = NULL;
      v_46 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_46));
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm q_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              {
                t = c_49(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          LocalPopChoice(s_15);
        }
      else
        {
          t = q_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_3, a_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  ATerm v_15;
  v_15 = t;
  {
    ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
    e_47 = t;
    a_47 :
    if(match_cons(e_47, sym__3))
      {
        f_47 = ATgetArgument(e_47, 0);
        g_47 = ATgetArgument(e_47, 1);
        h_47 = ATgetArgument(e_47, 2);
        {
          if(((b_47 != NULL) && (b_47 != f_47)))
            _fail(f_47);
          else
            b_47 = f_47;
          {
            if(((c_47 != NULL) && (c_47 != g_47)))
              _fail(g_47);
            else
              c_47 = g_47;
            {
              if(((d_47 != NULL) && (d_47 != h_47)))
                _fail(h_47);
              else
                d_47 = h_47;
              t = SSL_table_put(not_null(b_47), not_null(c_47), not_null(d_47));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = v_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm k_47 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    t = term_x_15;
    t = table_put_0(t);
  }
  t = w_15;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm y_15 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_49(t);
          LocalPopChoice(c_16);
        }
      else
        {
          t = y_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_c_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm l_47 = NULL;
                  l_47 = t;
                  if(((k_47 != NULL) && (k_47 != l_47)))
                    _fail(l_47);
                  else
                    k_47 = l_47;
                  return(t);
                }
                t = Undefined_1(t, e_4);
                return(t);
              }
              t = option_defined_1(t, d_4);
              {
                ATerm g_16;
                g_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_47)), term_h_16));
                  t = printnl_0(t);
                }
                t = g_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_4);
      {
        ATerm i_16;
        i_16 = t;
        {
          t = term_q_14;
          t = table_destroy_0(t);
        }
        t = i_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_50(t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_4);
  {
    t = store_options_0(t);
    {
      ATerm o_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, k_50);
          LocalPopChoice(q_16);
        }
      else
        {
          t = o_16;
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, i_50);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_50 (ATerm), ATerm e_50 (ATerm))
{
  t = iowrap_3(t, d_50, e_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, a_50);
    return(t);
  }
  t = iowrap_2(t, g_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
