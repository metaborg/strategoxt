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
Symbol sym_Anno_2;
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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_e_16;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_d_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_u_9;
ATerm term_j_6;
ATerm term_m_5;
ATerm term_b_5;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_p_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__3, term_o_14, term_p_14, (ATerm) ATempty);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm n_52 (ATerm));
ATerm Continue_1 (ATerm, ATerm o_36 (ATerm));
ATerm Var_1 (ATerm, ATerm c_44 (ATerm));
ATerm Assign_1 (ATerm, ATerm r_36 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm s_36 (ATerm), ATerm t_36 (ATerm));
ATerm Alt_3 (ATerm, ATerm l_36 (ATerm), ATerm m_36 (ATerm), ATerm n_36 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm u_68 (ATerm));
ATerm Case_4 (ATerm, ATerm e_36 (ATerm), ATerm f_36 (ATerm), ATerm g_36 (ATerm), ATerm h_36 (ATerm));
ATerm Let_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm Prim_2 (ATerm, ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm Where_1 (ATerm, ATerm f_46 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_46 (ATerm), ATerm e_46 (ATerm));
ATerm Build_1 (ATerm, ATerm a_46 (ATerm));
ATerm Op_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm As_2 (ATerm, ATerm q_42 (ATerm), ATerm r_42 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_42 (ATerm));
ATerm Str_1 (ATerm, ATerm o_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm n_0 (ATerm));
ATerm Int_1 (ATerm, ATerm m_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm z_45 (ATerm));
ATerm Thread_1 (ATerm, ATerm w_45 (ATerm));
ATerm All_1 (ATerm, ATerm v_45 (ATerm));
ATerm Some_1 (ATerm, ATerm l_0 (ATerm));
ATerm One_1 (ATerm, ATerm t_45 (ATerm));
ATerm Cong_2 (ATerm, ATerm r_45 (ATerm), ATerm s_45 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_44 (ATerm));
ATerm Call_2 (ATerm, ATerm n_45 (ATerm), ATerm o_45 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm));
ATerm GChoice_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm LChoice_2 (ATerm, ATerm o_44 (ATerm), ATerm p_44 (ATerm));
ATerm Choice_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm Seq_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm Test_1 (ATerm, ATerm i_44 (ATerm));
ATerm Not_1 (ATerm, ATerm j_44 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm g_45 (ATerm), ATerm h_45 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_45 (ATerm), ATerm e_45 (ATerm), ATerm f_45 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm e_61 (ATerm));
ATerm Strategies_1 (ATerm, ATerm q_43 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_43 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm u_34 (ATerm), ATerm v_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_51 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_49 (ATerm));
ATerm map_1 (ATerm, ATerm c_61 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_49 (ATerm));
ATerm Program_1 (ATerm, ATerm x_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_50 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_50 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_46 (ATerm), ATerm l_46 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_49 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_51 (ATerm), ATerm c_51 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_50 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm i_4;
  i_4 = t;
  {
    ATerm q_6 = NULL,s_6 = NULL;
    ATerm j_4;
    j_4 = t;
    {
      ATerm r_6 = NULL;
      t = n_52(t);
      {
        r_6 = t;
        if(((q_6 != NULL) && (q_6 != r_6)))
          _fail(r_6);
        else
          q_6 = r_6;
      }
    }
    t = j_4;
    {
      ATerm t_6 = NULL;
      t_6 = t;
      if(((s_6 != NULL) && (s_6 != t_6)))
        _fail(t_6);
      else
        s_6 = t_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_6)), not_null(q_6)));
        t = printnl_0(t);
      }
    }
  }
  t = i_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm o_36 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym_Continue_1))
    {
      a_7 = ATgetArgument(z_6, 0);
      {
        ATerm c_7 = NULL;
        t = not_null(a_7);
        {
          t = o_36(t);
          {
            c_7 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(c_7));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_Var_1))
    {
      k_7 = ATgetArgument(j_7, 0);
      {
        ATerm m_7 = NULL;
        t = not_null(k_7);
        {
          t = c_44(t);
          {
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_7));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm r_36 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Assign_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      {
        ATerm w_7 = NULL;
        t = not_null(u_7);
        {
          t = r_36(t);
          {
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(w_7));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(m_4);
    }
  else
    {
      t = l_4;
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm p_4 = t;
              int q_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(q_4);
                }
              else
                {
                  t = p_4;
                  {
                    ATerm r_4 = t;
                    int s_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(s_4);
                      }
                    else
                      {
                        t = r_4;
                        {
                          ATerm t_4 = t;
                          int u_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(u_4);
                            }
                          else
                            {
                              t = t_4;
                              {
                                ATerm v_4 = t;
                                int w_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(w_4);
                                  }
                                else
                                  {
                                    t = v_4;
                                    {
                                      ATerm x_4 = t;
                                      int y_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, a_0, term_expression_0);
                                          LocalPopChoice(y_4);
                                        }
                                      else
                                        {
                                          t = x_4;
                                          {
                                            ATerm z_4 = t;
                                            int a_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(a_5);
                                              }
                                            else
                                              {
                                                t = z_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_b_5;
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
ATerm Assign_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Assign_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      {
        ATerm c_5 = t;
        int d_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = not_null(j_8);
            {
              ATerm p_8 = NULL;
              t = p_0(t);
              {
                n_8 = t;
                {
                  t = not_null(k_8);
                  {
                    t = q_0(t);
                    {
                      p_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(n_8), not_null(p_8));
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_5);
          }
        else
          {
            t = c_5;
            {
              ATerm t_8 = NULL;
              t = not_null(j_8);
              {
                ATerm v_8 = NULL;
                t = p_0(t);
                {
                  t_8 = t;
                  {
                    t = not_null(k_8);
                    {
                      t = q_0(t);
                      {
                        v_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(t_8), not_null(v_8));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm s_36 (ATerm), ATerm t_36 (ATerm))
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Fun_2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        ATerm m_9 = NULL;
        t = not_null(i_9);
        {
          ATerm o_9 = NULL;
          t = s_36(t);
          {
            m_9 = t;
            {
              t = not_null(j_9);
              {
                t = t_36(t);
                {
                  o_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(m_9), not_null(o_9));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm l_36 (ATerm), ATerm m_36 (ATerm), ATerm n_36 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym_Alt_3))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      b_10 = ATgetArgument(y_9, 2);
      {
        ATerm f_10 = NULL;
        t = not_null(z_9);
        {
          ATerm h_10 = NULL;
          t = l_36(t);
          {
            f_10 = t;
            {
              t = not_null(a_10);
              {
                ATerm j_10 = NULL;
                t = m_36(t);
                {
                  h_10 = t;
                  {
                    t = not_null(b_10);
                    {
                      t = n_36(t);
                      {
                        j_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(f_10), not_null(h_10), not_null(j_10));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 (ATerm t)
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            LocalPopChoice(h_5);
          }
        else
          {
            t = g_5;
            {
              ATerm i_5 = t;
              int j_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = i_5;
                  {
                    ATerm k_5 = t;
                    int l_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        LocalPopChoice(l_5);
                      }
                    else
                      {
                        t = k_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, t_0);
        return(t);
      }
      t = Alt_3(t, r_0, s_0, u_68);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm u_0 (ATerm t)
        {
          t = term_m_5;
          return(t);
        }
        t = debug_1(t, u_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm e_36 (ATerm), ATerm f_36 (ATerm), ATerm g_36 (ATerm), ATerm h_36 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_Case_4))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      y_10 = ATgetArgument(v_10, 2);
      z_10 = ATgetArgument(v_10, 3);
      {
        ATerm e_11 = NULL;
        t = not_null(w_10);
        {
          ATerm g_11 = NULL;
          t = e_36(t);
          {
            e_11 = t;
            {
              t = not_null(x_10);
              {
                ATerm i_11 = NULL;
                t = f_36(t);
                {
                  g_11 = t;
                  {
                    t = not_null(y_10);
                    {
                      ATerm k_11 = NULL;
                      t = g_36(t);
                      {
                        i_11 = t;
                        {
                          t = not_null(z_10);
                          {
                            t = h_36(t);
                            {
                              k_11 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(e_11), not_null(g_11), not_null(i_11), not_null(k_11));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_Let_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm a_12 = NULL;
        t = not_null(w_11);
        {
          ATerm c_12 = NULL;
          t = b_45(t);
          {
            a_12 = t;
            {
              t = not_null(x_11);
              {
                t = c_45(t);
                {
                  c_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_12), not_null(c_12));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm g_46 (ATerm), ATerm h_46 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Prim_2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm q_12 = NULL;
        t = not_null(m_12);
        {
          ATerm s_12 = NULL;
          t = g_46(t);
          {
            q_12 = t;
            {
              t = not_null(n_12);
              {
                t = h_46(t);
                {
                  s_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_12), not_null(s_12));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Where_1 (ATerm t, ATerm f_46 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_Where_1))
    {
      b_13 = ATgetArgument(a_13, 0);
      {
        ATerm d_13 = NULL;
        t = not_null(b_13);
        {
          t = f_46(t);
          {
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_13));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_46 (ATerm), ATerm e_46 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Scope_2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm q_13 = NULL;
        t = not_null(m_13);
        {
          ATerm s_13 = NULL;
          t = d_46(t);
          {
            q_13 = t;
            {
              t = not_null(n_13);
              {
                t = e_46(t);
                {
                  s_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_13), not_null(s_13));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_46 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Build_1))
    {
      b_14 = ATgetArgument(a_14, 0);
      {
        ATerm d_14 = NULL;
        t = not_null(b_14);
        {
          t = a_46(t);
          {
            d_14 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_14));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_Op_2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      {
        ATerm q_14 = NULL;
        t = not_null(m_14);
        {
          ATerm s_14 = NULL;
          t = g_44(t);
          {
            q_14 = t;
            {
              t = not_null(n_14);
              {
                t = h_44(t);
                {
                  s_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_14), not_null(s_14));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm q_42 (ATerm), ATerm r_42 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_As_2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm n_15 = NULL;
        t = not_null(j_15);
        {
          ATerm s_15 = NULL;
          t = q_42(t);
          {
            n_15 = t;
            {
              t = not_null(k_15);
              {
                t = r_42(t);
                {
                  s_15 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(n_15), not_null(s_15));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm s_42 (ATerm))
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
          t = s_42(t);
          {
            d_16 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(d_16));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym_Str_1))
    {
      o_16 = ATgetArgument(n_16, 0);
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL;
            t = not_null(o_16);
            {
              t = o_0(t);
              {
                q_16 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(q_16));
              }
            }
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm t_16 = NULL;
              t = not_null(o_16);
              {
                t = o_0(t);
                {
                  t_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(t_16));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm a_17 = NULL;
  a_17 = t;
  t = SSL_is_real(not_null(a_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm u_17 = NULL,d_18 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_Real_1))
    {
      d_18 = ATgetArgument(u_17, 0);
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL;
            t = not_null(d_18);
            {
              t = n_0(t);
              {
                f_18 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(f_18));
              }
            }
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm i_18 = NULL;
              t = not_null(d_18);
              {
                t = n_0(t);
                {
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(i_18));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Int_1))
    {
      u_18 = ATgetArgument(t_18, 0);
      {
        ATerm r_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_18 = NULL;
            t = not_null(u_18);
            {
              t = m_0(t);
              {
                w_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(w_18));
              }
            }
            LocalPopChoice(s_5);
          }
        else
          {
            t = r_5;
            {
              ATerm z_18 = NULL;
              t = not_null(u_18);
              {
                t = m_0(t);
                {
                  z_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(z_18));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  f_19 :
  if(!(match_cons(i_19, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm x_5 = t;
              int y_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(y_5);
                }
              else
                {
                  t = x_5;
                  {
                    ATerm z_5 = t;
                    int a_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(a_6);
                      }
                    else
                      {
                        t = z_5;
                        {
                          ATerm b_6 = t;
                          int c_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(c_6);
                            }
                          else
                            {
                              t = b_6;
                              {
                                ATerm d_6 = t;
                                int e_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    LocalPopChoice(e_6);
                                  }
                                else
                                  {
                                    t = d_6;
                                    {
                                      ATerm f_6 = t;
                                      int g_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, v_0, match_term_exp_0);
                                          LocalPopChoice(g_6);
                                        }
                                      else
                                        {
                                          t = f_6;
                                          {
                                            ATerm h_6 = t;
                                            int i_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, w_0);
                                                LocalPopChoice(i_6);
                                              }
                                            else
                                              {
                                                t = h_6;
                                                {
                                                  ATerm x_0 (ATerm t)
                                                  {
                                                    t = term_j_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, x_0);
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
ATerm Match_1 (ATerm t, ATerm z_45 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  r_19 :
  if(match_cons(t_19, sym_Match_1))
    {
      u_19 = ATgetArgument(t_19, 0);
      {
        ATerm w_19 = NULL;
        t = not_null(u_19);
        {
          t = z_45(t);
          {
            w_19 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_19));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_Thread_1))
    {
      f_20 = ATgetArgument(e_20, 0);
      {
        ATerm h_20 = NULL;
        t = not_null(f_20);
        {
          t = w_45(t);
          {
            h_20 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(h_20));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_All_1))
    {
      p_20 = ATgetArgument(o_20, 0);
      {
        ATerm r_20 = NULL;
        t = not_null(p_20);
        {
          t = v_45(t);
          {
            r_20 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(r_20));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Some_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm k_6 = t;
        int l_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL;
            t = not_null(b_21);
            {
              t = l_0(t);
              {
                d_21 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(d_21));
              }
            }
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            {
              ATerm g_21 = NULL;
              t = not_null(b_21);
              {
                t = l_0(t);
                {
                  g_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(g_21));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm t_45 (ATerm))
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym_One_1))
    {
      q_21 = ATgetArgument(p_21, 0);
      {
        ATerm s_21 = NULL;
        t = not_null(q_21);
        {
          t = t_45(t);
          {
            s_21 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(s_21));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm r_45 (ATerm), ATerm s_45 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_Cong_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      {
        ATerm f_22 = NULL;
        t = not_null(b_22);
        {
          ATerm h_22 = NULL;
          t = r_45(t);
          {
            f_22 = t;
            {
              t = not_null(c_22);
              {
                t = s_45(t);
                {
                  h_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(f_22), not_null(h_22));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_is_int(not_null(q_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm p_45 (ATerm), ATerm q_45 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_Path_2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        ATerm c_23 = NULL;
        t = not_null(y_22);
        {
          ATerm e_23 = NULL;
          t = p_45(t);
          {
            c_23 = t;
            {
              t = not_null(z_22);
              {
                t = q_45(t);
                {
                  e_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(c_23), not_null(e_23));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Rec_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm s_23 = NULL;
        t = not_null(o_23);
        {
          ATerm u_23 = NULL;
          t = z_44(t);
          {
            s_23 = t;
            {
              t = not_null(p_23);
              {
                t = a_45(t);
                {
                  u_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(s_23), not_null(u_23));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_SVar_1))
    {
      d_24 = ATgetArgument(c_24, 0);
      {
        ATerm f_24 = NULL;
        t = not_null(d_24);
        {
          t = y_44(t);
          {
            f_24 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(f_24));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm n_45 (ATerm), ATerm o_45 (ATerm))
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Call_2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      {
        ATerm s_24 = NULL;
        t = not_null(o_24);
        {
          ATerm u_24 = NULL;
          t = n_45(t);
          {
            s_24 = t;
            {
              t = not_null(p_24);
              {
                t = o_45(t);
                {
                  u_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(s_24), not_null(u_24));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_LGChoice_2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      {
        ATerm i_25 = NULL;
        t = not_null(e_25);
        {
          ATerm k_25 = NULL;
          t = v_44(t);
          {
            i_25 = t;
            {
              t = not_null(f_25);
              {
                t = w_44(t);
                {
                  k_25 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(i_25), not_null(k_25));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GChoice_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym_GChoice_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm y_25 = NULL;
        t = not_null(u_25);
        {
          ATerm a_26 = NULL;
          t = t_44(t);
          {
            y_25 = t;
            {
              t = not_null(v_25);
              {
                t = u_44(t);
                {
                  a_26 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(y_25), not_null(a_26));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm q_44 (ATerm), ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_GuardedLChoice_3))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      n_26 = ATgetArgument(k_26, 2);
      {
        ATerm r_26 = NULL;
        t = not_null(l_26);
        {
          ATerm t_26 = NULL;
          t = q_44(t);
          {
            r_26 = t;
            {
              t = not_null(m_26);
              {
                ATerm v_26 = NULL;
                t = r_44(t);
                {
                  t_26 = t;
                  {
                    t = not_null(n_26);
                    {
                      t = s_44(t);
                      {
                        v_26 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(r_26), not_null(t_26), not_null(v_26));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm o_44 (ATerm), ATerm p_44 (ATerm))
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  e_27 :
  if(match_cons(f_27, sym_LChoice_2))
    {
      g_27 = ATgetArgument(f_27, 0);
      h_27 = ATgetArgument(f_27, 1);
      {
        ATerm k_27 = NULL;
        t = not_null(g_27);
        {
          ATerm m_27 = NULL;
          t = o_44(t);
          {
            k_27 = t;
            {
              t = not_null(h_27);
              {
                t = p_44(t);
                {
                  m_27 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_27), not_null(m_27));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Choice_2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm a_28 = NULL;
        t = not_null(w_27);
        {
          ATerm c_28 = NULL;
          t = m_44(t);
          {
            a_28 = t;
            {
              t = not_null(x_27);
              {
                t = n_44(t);
                {
                  c_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_28), not_null(c_28));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Seq_2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm q_28 = NULL;
        t = not_null(m_28);
        {
          ATerm s_28 = NULL;
          t = k_44(t);
          {
            q_28 = t;
            {
              t = not_null(n_28);
              {
                t = l_44(t);
                {
                  s_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_28), not_null(s_28));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Test_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym_Test_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      {
        ATerm d_29 = NULL;
        t = not_null(b_29);
        {
          t = i_44(t);
          {
            d_29 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_29));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Not_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm n_29 = NULL;
        t = not_null(l_29);
        {
          t = j_44(t);
          {
            n_29 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(n_29));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  r_29 :
  if(!(match_cons(s_29, sym_Fail_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t_29 :
  if(!(match_cons(u_29, sym_Id_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm u_6 = t;
              int v_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(v_6);
                }
              else
                {
                  t = u_6;
                  {
                    ATerm w_6 = t;
                    int x_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(x_6);
                      }
                    else
                      {
                        t = w_6;
                        {
                          ATerm b_7 = t;
                          int d_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(d_7);
                            }
                          else
                            {
                              t = b_7;
                              {
                                ATerm e_7 = t;
                                int f_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(f_7);
                                  }
                                else
                                  {
                                    t = e_7;
                                    {
                                      ATerm g_7 = t;
                                      int h_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(h_7);
                                        }
                                      else
                                        {
                                          t = g_7;
                                          {
                                            ATerm l_7 = t;
                                            int n_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(n_7);
                                              }
                                            else
                                              {
                                                t = l_7;
                                                {
                                                  ATerm o_7 = t;
                                                  int p_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(p_7);
                                                    }
                                                  else
                                                    {
                                                      t = o_7;
                                                      {
                                                        ATerm q_7 = t;
                                                        int r_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(r_7);
                                                          }
                                                        else
                                                          {
                                                            t = q_7;
                                                            {
                                                              ATerm v_7 = t;
                                                              int x_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm z_0 (ATerm t)
                                                                  {
                                                                    ATerm a_1 (ATerm t)
                                                                    {
                                                                      ATerm b_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, b_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, a_1);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, y_0, z_0);
                                                                  LocalPopChoice(x_7);
                                                                }
                                                              else
                                                                {
                                                                  t = v_7;
                                                                  {
                                                                    ATerm y_7 = t;
                                                                    int z_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(z_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_7;
                                                                        {
                                                                          ATerm a_8 = t;
                                                                          int b_8 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(b_8);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_8;
                                                                              {
                                                                                ATerm c_8 = t;
                                                                                int d_8 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm c_1 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, c_1);
                                                                                    LocalPopChoice(d_8);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_8;
                                                                                    {
                                                                                      ATerm e_8 = t;
                                                                                      int f_8 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(f_8);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_8;
                                                                                          {
                                                                                            ATerm g_8 = t;
                                                                                            int l_8 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(l_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_8;
                                                                                                {
                                                                                                  ATerm m_8 = t;
                                                                                                  int o_8 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(o_8);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_8;
                                                                                                      {
                                                                                                        ATerm q_8 = t;
                                                                                                        int r_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(r_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_8;
                                                                                                            {
                                                                                                              ATerm s_8 = t;
                                                                                                              int u_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  LocalPopChoice(u_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_8;
                                                                                                                  {
                                                                                                                    ATerm w_8 = t;
                                                                                                                    int x_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(x_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = w_8;
                                                                                                                        {
                                                                                                                          ATerm y_8 = t;
                                                                                                                          int z_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm d_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, d_1, strategy_expression_0);
                                                                                                                              LocalPopChoice(z_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_8;
                                                                                                                              {
                                                                                                                                ATerm a_9 = t;
                                                                                                                                int b_9 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(b_9);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = a_9;
                                                                                                                                    {
                                                                                                                                      ATerm c_9 = t;
                                                                                                                                      int d_9 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm e_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, e_1);
                                                                                                                                          LocalPopChoice(d_9);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = c_9;
                                                                                                                                          {
                                                                                                                                            ATerm e_9 = t;
                                                                                                                                            int f_9 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm f_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm g_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm h_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm i_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, i_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, h_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, g_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, f_1, strategy_expression_0);
                                                                                                                                                LocalPopChoice(f_9);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = e_9;
                                                                                                                                                {
                                                                                                                                                  ATerm k_9 = t;
                                                                                                                                                  int l_9 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm k_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm l_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, l_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, j_1, k_1, strategy_expression_0);
                                                                                                                                                      LocalPopChoice(l_9);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_9;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_9 = t;
                                                                                                                                                        int p_9 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm m_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, m_1, term_expression_0);
                                                                                                                                                            LocalPopChoice(p_9);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = n_9;
                                                                                                                                                            {
                                                                                                                                                              ATerm q_9 = t;
                                                                                                                                                              int r_9 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm n_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, n_1);
                                                                                                                                                                  LocalPopChoice(r_9);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = q_9;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm s_9 = t;
                                                                                                                                                                    int t_9 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        LocalPopChoice(t_9);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = s_9;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm o_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_u_9;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, o_1);
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
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_is_string(not_null(x_29));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm g_45 (ATerm), ATerm h_45 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_VarDec_2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm j_30 = NULL;
        t = not_null(f_30);
        {
          ATerm l_30 = NULL;
          t = g_45(t);
          {
            j_30 = t;
            {
              t = not_null(g_30);
              {
                t = h_45(t);
                {
                  l_30 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_30), not_null(l_30));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm d_45 (ATerm), ATerm e_45 (ATerm), ATerm f_45 (ATerm))
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym_SDef_3))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      y_30 = ATgetArgument(v_30, 2);
      {
        ATerm c_31 = NULL;
        t = not_null(w_30);
        {
          ATerm e_31 = NULL;
          t = d_45(t);
          {
            c_31 = t;
            {
              t = not_null(x_30);
              {
                ATerm g_31 = NULL;
                t = e_45(t);
                {
                  e_31 = t;
                  {
                    t = not_null(y_30);
                    {
                      t = f_45(t);
                      {
                        g_31 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_31), not_null(e_31), not_null(g_31));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, q_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, p_1, strategy_expression_0);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_c_10;
          return(t);
        }
        t = debug_1(t, r_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm m_31 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = Cons_2(t, e_61, m_31);
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_43 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Strategies_1))
    {
      r_31 = ATgetArgument(q_31, 0);
      {
        ATerm t_31 = NULL;
        t = not_null(r_31);
        {
          t = q_43(t);
          {
            t_31 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_31));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_43 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym_Specification_1))
    {
      b_32 = ATgetArgument(a_32, 0);
      {
        ATerm d_32 = NULL;
        t = not_null(b_32);
        {
          t = s_43(t);
          {
            d_32 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(d_32));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, v_1);
            return(t);
          }
          t = Cons_2(t, u_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, t_1);
        return(t);
      }
      t = Specification_1(t, s_1);
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_k_10;
          return(t);
        }
        t = debug_1(t, w_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm u_34 (ATerm), ATerm v_34 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym__2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      {
        ATerm q_32 = NULL;
        t = not_null(m_32);
        {
          ATerm s_32 = NULL;
          t = u_34(t);
          {
            q_32 = t;
            {
              t = not_null(n_32);
              {
                t = v_34(t);
                {
                  s_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_32), not_null(s_32));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm a_33 = NULL,b_33 = NULL;
      a_33 = t;
      y_32 :
      if(match_cons(a_33, sym_Program_1))
        {
          b_33 = ATgetArgument(a_33, 0);
          if(((z_32 != NULL) && (z_32 != b_33)))
            _fail(b_33);
          else
            z_32 = b_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, x_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_10), not_null(z_32)), term_m_10));
      {
        t = printnl_0(t);
        {
          t = term_o_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_10;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, term_p_10));
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
  ATerm i_33 = NULL,j_33 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm q_10 = t;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            ATerm k_33 = NULL;
            k_33 = t;
            d_33 :
            if(!(match_cons(k_33, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, a_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_10;
        }
      return(t);
    }
    t = _2(t, z_1, _id);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm l_33 = NULL,m_33 = NULL;
          l_33 = t;
          f_33 :
          if(match_cons(l_33, sym_Runtime_1))
            {
              m_33 = ATgetArgument(l_33, 0);
              if(((j_33 != NULL) && (j_33 != m_33)))
                _fail(m_33);
              else
                j_33 = m_33;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_2);
        return(t);
      }
      t = _2(t, b_2, _id);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm e_2 (ATerm t)
          {
            ATerm n_33 = NULL,o_33 = NULL;
            n_33 = t;
            h_33 :
            if(match_cons(n_33, sym_Program_1))
              {
                o_33 = ATgetArgument(n_33, 0);
                if(((i_33 != NULL) && (i_33 != o_33)))
                  _fail(o_33);
                else
                  i_33 = o_33;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_2);
          return(t);
        }
        t = _2(t, d_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_10), not_null(j_33)), term_r_10), not_null(i_33)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, y_1);
  {
    t = term_t_10;
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
    {
      _fail(t);
    }
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
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_34 = NULL;
  ATerm a_11;
  a_11 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm b_11 = t;
      int c_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 (ATerm t)
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
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_2);
          LocalPopChoice(c_11);
        }
      else
        {
          t = b_11;
          {
            ATerm t_34 = NULL;
            t = term_d_11;
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
    t = _2(t, f_2, _id);
  }
  t = a_11;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        t = not_null(q_34);
        return(t);
      }
      t = split_2(t, i_2, _id);
      return(t);
    }
    t = _2(t, _id, h_2);
    {
      ATerm f_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm w_34 = NULL;
              w_34 = t;
              p_34 :
              if(!(match_cons(w_34, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_2);
            return(t);
          }
          t = _2(t, j_2, WriteToBinaryFile_0);
          LocalPopChoice(h_11);
        }
      else
        {
          t = f_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_51 (ATerm))
{
  ATerm c_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  ATerm j_11;
  j_11 = t;
  t = dtime_0(t);
  t = j_11;
  {
    t = s_51(t);
    {
      ATerm l_11;
      l_11 = t;
      {
        ATerm d_35 = NULL;
        t = dtime_0(t);
        {
          d_35 = t;
          if(((c_35 != NULL) && (c_35 != d_35)))
            _fail(d_35);
          else
            c_35 = d_35;
        }
      }
      t = l_11;
      {
        e_35 = t;
        b_35 :
        if(match_cons(e_35, sym__2))
          {
            f_35 = ATgetArgument(e_35, 0);
            g_35 = ATgetArgument(e_35, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_35)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_35))), not_null(g_35));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_ReadFromFile(not_null(m_35));
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_54 (ATerm), ATerm l_54 (ATerm))
{
  ATerm r_35 = NULL,t_35 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm s_35 = NULL;
    t = k_54(t);
    {
      s_35 = t;
      if(((r_35 != NULL) && (r_35 != s_35)))
        _fail(s_35);
      else
        r_35 = s_35;
    }
  }
  t = m_11;
  {
    ATerm u_35 = NULL;
    t = l_54(t);
    {
      u_35 = t;
      if(((t_35 != NULL) && (t_35 != u_35)))
        _fail(u_35);
      else
        t_35 = u_35;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), not_null(t_35));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_36 = NULL;
  ATerm n_11;
  n_11 = t;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          ATerm b_36 = NULL,c_36 = NULL;
          b_36 = t;
          y_35 :
          if(match_cons(b_36, sym_Input_1))
            {
              c_36 = ATgetArgument(b_36, 0);
              if(((a_36 != NULL) && (a_36 != c_36)))
                _fail(c_36);
              else
                a_36 = c_36;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          ATerm d_36 = NULL;
          t = term_q_11;
          {
            d_36 = t;
            if(((a_36 != NULL) && (a_36 != d_36)))
              _fail(d_36);
            else
              a_36 = d_36;
          }
        }
      }
  }
  t = n_11;
  {
    ATerm m_2 (ATerm t)
    {
      t = not_null(a_36);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  k_36 :
  if(!(match_cons(p_36, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_51 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm t_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_11);
            }
          else
            {
              t = t_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_2);
  t = r_51(t);
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
  ATerm a_37 = NULL;
  a_37 = t;
  {
    ATerm z_11;
    z_11 = t;
    {
      t = term_b_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_d_12, not_null(a_37));
          t = table_put_0(t);
        }
      }
    }
    t = z_11;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  i_37 = t;
  g_37 :
  if(match_string(i_37, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(i_37) == AT_LIST) && ((ATermList) i_37 != ATempty)))
        {
          j_37 = ATgetFirst((ATermList) i_37);
          k_37 = (ATerm) ATgetNext((ATermList) i_37);
          h_37 :
          if(((ATgetType(k_37) == AT_LIST) && ((ATermList) k_37 != ATempty)))
            {
              l_37 = ATgetFirst((ATermList) k_37);
              m_37 = (ATerm) ATgetNext((ATermList) k_37);
              {
                ATerm q_37 = NULL;
                ATerm e_12;
                e_12 = t;
                {
                  t = not_null(j_37);
                  t = i_0(t);
                }
                t = e_12;
                {
                  ATerm r_37 = NULL;
                  t = not_null(l_37);
                  {
                    t = j_0(t);
                    {
                      r_37 = t;
                      if(((q_37 != NULL) && (q_37 != r_37)))
                        _fail(r_37);
                      else
                        q_37 = r_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(q_37));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm g_38 = NULL;
        g_38 = t;
        v_37 :
        if(!(match_string(g_38, "-S")))
          {
            if(!(match_string(g_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_h_12;
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_i_12;
        return(t);
      }
      t = Option_3(t, o_2, p_2, q_2);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm j_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm h_38 = NULL;
              h_38 = t;
              w_37 :
              if(!(match_string(h_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_p_12;
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_r_12;
              return(t);
            }
            t = Option_3(t, r_2, s_2, t_2);
            LocalPopChoice(o_12);
          }
        else
          {
            t = j_12;
            {
              ATerm t_12 = t;
              int u_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm i_38 = NULL;
                    i_38 = t;
                    x_37 :
                    if(!(match_string(i_38, "-v")))
                      {
                        if(!(match_string(i_38, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_v_12;
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    t = term_w_12;
                    return(t);
                  }
                  t = Option_3(t, u_2, v_2, w_2);
                  LocalPopChoice(u_12);
                }
              else
                {
                  t = t_12;
                  {
                    ATerm x_12 = t;
                    int y_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_2 (ATerm t)
                        {
                          ATerm j_38 = NULL;
                          j_38 = t;
                          y_37 :
                          if(!(match_string(j_38, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm y_2 (ATerm t)
                        {
                          ATerm k_38 = NULL;
                          ATerm l_38 = NULL;
                          l_38 = t;
                          if(((k_38 != NULL) && (k_38 != l_38)))
                            _fail(l_38);
                          else
                            k_38 = l_38;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_38));
                          return(t);
                        }
                        ATerm z_2 (ATerm t)
                        {
                          t = term_c_13;
                          return(t);
                        }
                        t = ArgOption_3(t, x_2, y_2, z_2);
                        LocalPopChoice(y_12);
                      }
                    else
                      {
                        t = x_12;
                        {
                          ATerm e_13 = t;
                          int f_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_3 (ATerm t)
                              {
                                ATerm m_38 = NULL;
                                m_38 = t;
                                a_38 :
                                if(!(match_string(m_38, "-i")))
                                  {
                                    if(!(match_string(m_38, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                ATerm n_38 = NULL;
                                ATerm o_38 = NULL;
                                o_38 = t;
                                if(((n_38 != NULL) && (n_38 != o_38)))
                                  _fail(o_38);
                                else
                                  n_38 = o_38;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_38));
                                return(t);
                              }
                              ATerm c_3 (ATerm t)
                              {
                                t = term_g_13;
                                return(t);
                              }
                              t = ArgOption_3(t, a_3, b_3, c_3);
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
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm p_38 = NULL;
                                      p_38 = t;
                                      c_38 :
                                      if(!(match_string(p_38, "-o")))
                                        {
                                          if(!(match_string(p_38, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      ATerm q_38 = NULL;
                                      ATerm r_38 = NULL;
                                      r_38 = t;
                                      if(((q_38 != NULL) && (q_38 != r_38)))
                                        _fail(r_38);
                                      else
                                        q_38 = r_38;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_38));
                                      return(t);
                                    }
                                    ATerm f_3 (ATerm t)
                                    {
                                      t = term_j_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_3, e_3, f_3);
                                    LocalPopChoice(i_13);
                                  }
                                else
                                  {
                                    t = h_13;
                                    {
                                      ATerm o_13 = t;
                                      int p_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_3 (ATerm t)
                                          {
                                            ATerm s_38 = NULL;
                                            s_38 = t;
                                            e_38 :
                                            if(!(match_string(s_38, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_3 (ATerm t)
                                          {
                                            t = term_r_13;
                                            return(t);
                                          }
                                          ATerm i_3 (ATerm t)
                                          {
                                            t = term_t_13;
                                            return(t);
                                          }
                                          t = Option_3(t, g_3, h_3, i_3);
                                          LocalPopChoice(p_13);
                                        }
                                      else
                                        {
                                          t = o_13;
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              ATerm t_38 = NULL;
                                              t_38 = t;
                                              f_38 :
                                              if(!(match_string(t_38, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = term_u_13;
                                              return(t);
                                            }
                                            ATerm l_3 (ATerm t)
                                            {
                                              t = term_v_13;
                                              return(t);
                                            }
                                            t = Option_3(t, j_3, k_3, l_3);
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
  ATerm y_38 = NULL;
  y_38 = t;
  t = SSL_table_destroy(not_null(y_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = SSL_exit(not_null(c_39));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_39 = NULL;
  g_39 = t;
  t = SSL_implode_string(not_null(g_39));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm j_39 (ATerm t)
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_39);
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        {
          t = Nil_0(t);
          t = q_61(t);
        }
      }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = y_13;
      {
        ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
        m_39 = t;
        l_39 :
        if(((ATgetType(m_39) == AT_LIST) && ((ATermList) m_39 != ATempty)))
          {
            n_39 = ATgetFirst((ATermList) m_39);
            o_39 = (ATerm) ATgetNext((ATermList) m_39);
            {
              t = not_null(n_39);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(o_39);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_3);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = SSL_explode_string(not_null(u_39));
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
ATerm long_description_1 (ATerm t, ATerm y_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm x_39 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = Cons_2(t, c_61, x_39);
      }
    return(t);
  }
  t = x_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  g_40 = t;
  d_40 :
  if(((ATgetType(g_40) == AT_LIST) && ((ATermList) g_40 != ATempty)))
    {
      e_40 = ATgetFirst((ATermList) g_40);
      f_40 = (ATerm) ATgetNext((ATermList) g_40);
      {
        ATerm j_40 = NULL;
        t = not_null(f_40);
        {
          ATerm g_14;
          g_14 = t;
          {
            ATerm k_40 = NULL,m_40 = NULL,o_40 = NULL;
            ATerm h_14;
            h_14 = t;
            {
              ATerm l_40 = NULL;
              t = h_0(t);
              {
                l_40 = t;
                if(((k_40 != NULL) && (k_40 != l_40)))
                  _fail(l_40);
                else
                  k_40 = l_40;
              }
            }
            t = h_14;
            {
              ATerm n_40 = NULL;
              t = not_null(e_40);
              {
                t = g_0(t);
                {
                  n_40 = t;
                  if(((m_40 != NULL) && (m_40 != n_40)))
                    _fail(n_40);
                  else
                    m_40 = n_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_40)), not_null(m_40));
                {
                  o_40 = t;
                  if(((j_40 != NULL) && (j_40 != o_40)))
                    _fail(o_40);
                  else
                    j_40 = o_40;
                }
              }
            }
          }
          t = g_14;
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(j_40);
              return(t);
            }
            t = reverse_acc_2(t, g_0, n_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_40 == ATempty))
        {
          {
            t = term_i_14;
            t = h_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_36 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_Program_1))
    {
      y_40 = ATgetArgument(x_40, 0);
      {
        ATerm a_41 = NULL;
        t = not_null(y_40);
        {
          t = x_36(t);
          {
            a_41 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_41));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_41 = NULL;
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      ATerm j_41 = NULL;
      j_41 = t;
      if(((i_41 != NULL) && (i_41 != j_41)))
        _fail(j_41);
      else
        i_41 = j_41;
      return(t);
    }
    t = Program_1(t, q_3);
    return(t);
  }
  t = option_defined_1(t, p_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm k_41 = NULL;
      ATerm l_41 = NULL;
      t = term_i_14;
      {
        ATerm s_3 (ATerm t)
        {
          t = not_null(i_41);
          return(t);
        }
        t = short_description_1(t, s_3);
        {
          t = concat_strings_0(t);
          {
            l_41 = t;
            if(((k_41 != NULL) && (k_41 != l_41)))
              _fail(l_41);
            else
              k_41 = l_41;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, not_null(k_41)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, term_j_14));
      {
        t = printnl_0(t);
        {
          t = term_r_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm m_41 = NULL;
                  m_41 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_41)), term_t_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm o_41 = NULL;
                    ATerm p_41 = NULL;
                    t = term_i_14;
                    {
                      ATerm v_3 (ATerm t)
                      {
                        t = not_null(i_41);
                        return(t);
                      }
                      t = long_description_1(t, v_3);
                      {
                        t = concat_strings_0(t);
                        {
                          p_41 = t;
                          if(((o_41 != NULL) && (o_41 != p_41)))
                            _fail(p_41);
                          else
                            o_41 = p_41;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_41)), term_u_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_3);
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
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        ATerm v_14;
        v_14 = t;
        t = SSL_printnl(not_null(x_41), not_null(y_41));
        t = v_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_36 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Undefined_1))
    {
      g_42 = ATgetArgument(f_42, 0);
      {
        ATerm i_42 = NULL;
        t = not_null(g_42);
        {
          t = y_36(t);
          {
            i_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_42));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm m_42 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_61, _id);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = Cons_2(t, _id, m_42);
      }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_50 (ATerm))
{
  t = fetch_1(t, w_50);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  n_42 :
  if(!(match_cons(o_42, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_68(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym__2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      t = SSL_table_get(not_null(v_42), not_null(w_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym__3))
    {
      e_43 = ATgetArgument(d_43, 0);
      f_43 = ATgetArgument(d_43, 1);
      g_43 = ATgetArgument(d_43, 2);
      {
        ATerm a_15;
        a_15 = t;
        {
          ATerm k_43 = NULL;
          ATerm l_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), not_null(f_43));
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                t = (ATerm) ATempty;
              }
            {
              l_43 = t;
              if(((k_43 != NULL) && (k_43 != l_43)))
                _fail(l_43);
              else
                k_43 = l_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_43), not_null(f_43), (ATerm) ATinsert(CheckATermList(not_null(k_43)), not_null(g_43)));
            t = table_put_0(t);
          }
        }
        t = a_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm p_43 = NULL;
  ATerm r_43 = NULL;
  t = term_i_14;
  {
    t = c_50(t);
    {
      r_43 = t;
      if(((p_43 != NULL) && (p_43 != r_43)))
        _fail(r_43);
      else
        p_43 = r_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_14, term_p_14, not_null(p_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
  y_43 = t;
  x_43 :
  if(match_string(y_43, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
        {
          z_43 = ATgetFirst((ATermList) y_43);
          a_44 = (ATerm) ATgetNext((ATermList) y_43);
          {
            ATerm e_44 = NULL;
            ATerm d_15;
            d_15 = t;
            {
              t = not_null(z_43);
              t = b_0(t);
            }
            t = d_15;
            {
              ATerm f_44 = NULL;
              t = term_i_14;
              {
                t = c_0(t);
                {
                  f_44 = t;
                  if(((e_44 != NULL) && (e_44 != f_44)))
                    _fail(f_44);
                  else
                    e_44 = f_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_44)), not_null(e_44));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm l_45 = NULL;
    l_45 = t;
    k_45 :
    if(!(match_string(l_45, "--help")))
      {
        if(!(match_string(l_45, "-h")))
          {
            if(!(match_string(l_45, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_f_15;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,b_46 = NULL;
  x_45 = t;
  u_45 :
  if(((ATgetType(x_45) == AT_LIST) && ((ATermList) x_45 != ATempty)))
    {
      y_45 = ATgetFirst((ATermList) x_45);
      b_46 = (ATerm) ATgetNext((ATermList) x_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_46)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_45)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_46 (ATerm), ATerm l_46 (ATerm))
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  p_46 :
  if(((ATgetType(q_46) == AT_LIST) && ((ATermList) q_46 != ATempty)))
    {
      r_46 = ATgetFirst((ATermList) q_46);
      s_46 = (ATerm) ATgetNext((ATermList) q_46);
      {
        ATerm v_46 = NULL;
        t = not_null(r_46);
        {
          ATerm x_46 = NULL;
          t = k_46(t);
          {
            v_46 = t;
            {
              t = not_null(s_46);
              {
                t = l_46(t);
                {
                  x_46 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_46)), not_null(v_46));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  c_47 :
  if(((ATermList) d_47 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm g_15;
  g_15 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_l_15;
      t = a_50(t);
      return(t);
    }
    t = try_1(t, z_3);
  }
  t = g_15;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm f_47 = NULL;
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_47));
      return(t);
    }
    ATerm b_4 (ATerm t)
    {
      ATerm m_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                t = a_50(t);
                t = Cons_2(t, _id, b_4);
              }
            }
          LocalPopChoice(o_15);
        }
      else
        {
          t = m_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_4, b_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  ATerm r_15;
  r_15 = t;
  {
    ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
    o_47 = t;
    k_47 :
    if(match_cons(o_47, sym__3))
      {
        p_47 = ATgetArgument(o_47, 0);
        q_47 = ATgetArgument(o_47, 1);
        r_47 = ATgetArgument(o_47, 2);
        {
          if(((l_47 != NULL) && (l_47 != p_47)))
            _fail(p_47);
          else
            l_47 = p_47;
          {
            if(((m_47 != NULL) && (m_47 != q_47)))
              _fail(q_47);
            else
              m_47 = q_47;
            {
              if(((n_47 != NULL) && (n_47 != r_47)))
                _fail(r_47);
              else
                n_47 = r_47;
              t = SSL_table_put(not_null(l_47), not_null(m_47), not_null(n_47));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_49 (ATerm))
{
  ATerm u_47 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    t = term_u_15;
    t = table_put_0(t);
  }
  t = t_15;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_49(t);
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_4);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm e_4 (ATerm t)
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm v_47 = NULL;
                  v_47 = t;
                  if(((u_47 != NULL) && (u_47 != v_47)))
                    _fail(v_47);
                  else
                    u_47 = v_47;
                  return(t);
                }
                t = Undefined_1(t, f_4);
                return(t);
              }
              t = option_defined_1(t, e_4);
              {
                ATerm c_16;
                c_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_47)), term_e_16));
                  t = printnl_0(t);
                }
                t = c_16;
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
      t = try_1(t, d_4);
      {
        ATerm f_16;
        f_16 = t;
        {
          t = term_o_14;
          t = table_destroy_0(t);
        }
        t = f_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm i_51 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_51(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_4);
  {
    t = store_options_0(t);
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_51);
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, g_51);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_51 (ATerm), ATerm c_51 (ATerm))
{
  t = iowrap_3(t, b_51, c_51, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_50 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    t = _2(t, _id, y_50);
    return(t);
  }
  t = iowrap_2(t, h_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
