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
ATerm term_i_16;
ATerm term_z_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_x_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_w_9;
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
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATinsert(ATempty, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATinsert(ATempty, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATinsert(ATempty, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATinsert(ATempty, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__3, term_p_14, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm g_51 (ATerm));
ATerm Continue_1 (ATerm, ATerm q_35 (ATerm));
ATerm Var_1 (ATerm, ATerm a_43 (ATerm));
ATerm Assign_1 (ATerm, ATerm t_35 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm u_35 (ATerm), ATerm v_35 (ATerm));
ATerm Alt_3 (ATerm, ATerm n_35 (ATerm), ATerm o_35 (ATerm), ATerm p_35 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm d_67 (ATerm));
ATerm Case_4 (ATerm, ATerm g_35 (ATerm), ATerm h_35 (ATerm), ATerm i_35 (ATerm), ATerm j_35 (ATerm));
ATerm Let_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm Prim_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm Where_1 (ATerm, ATerm a_45 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_44 (ATerm), ATerm z_44 (ATerm));
ATerm Build_1 (ATerm, ATerm v_44 (ATerm));
ATerm Op_2 (ATerm, ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm As_2 (ATerm, ATerm q_41 (ATerm), ATerm r_41 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm s_41 (ATerm));
ATerm Str_1 (ATerm, ATerm n_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_0 (ATerm));
ATerm Int_1 (ATerm, ATerm l_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm u_44 (ATerm));
ATerm Thread_1 (ATerm, ATerm r_44 (ATerm));
ATerm All_1 (ATerm, ATerm q_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm o_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm SVar_1 (ATerm, ATerm t_43 (ATerm));
ATerm Call_2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm));
ATerm GChoice_2 (ATerm, ATerm o_43 (ATerm), ATerm p_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm Test_1 (ATerm, ATerm g_43 (ATerm));
ATerm Not_1 (ATerm, ATerm h_43 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm), ATerm a_44 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm q_59 (ATerm));
ATerm Strategies_1 (ATerm, ATerm o_42 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_42 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm w_33 (ATerm), ATerm x_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_48 (ATerm));
ATerm map_1 (ATerm, ATerm o_59 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_48 (ATerm));
ATerm Program_1 (ATerm, ATerm z_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_48 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_49 (ATerm), ATerm v_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm g_51 (ATerm))
{
  ATerm h_4;
  h_4 = t;
  {
    ATerm j_6 = NULL,l_6 = NULL;
    ATerm i_4;
    i_4 = t;
    {
      ATerm k_6 = NULL;
      t = g_51(t);
      {
        k_6 = t;
        if(((j_6 != NULL) && (j_6 != k_6)))
          _fail(k_6);
        else
          j_6 = k_6;
      }
    }
    t = i_4;
    {
      ATerm m_6 = NULL;
      m_6 = t;
      if(((l_6 != NULL) && (l_6 != m_6)))
        _fail(m_6);
      else
        l_6 = m_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_6)), not_null(j_6)));
        t = printnl_0(t);
      }
    }
  }
  t = h_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm q_35 (ATerm))
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym_Continue_1))
    {
      t_6 = ATgetArgument(s_6, 0);
      {
        ATerm v_6 = NULL;
        t = not_null(t_6);
        {
          t = q_35(t);
          {
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(v_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Var_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm f_7 = NULL;
        t = not_null(d_7);
        {
          t = a_43(t);
          {
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm t_35 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_Assign_1))
    {
      n_7 = ATgetArgument(m_7, 0);
      {
        ATerm p_7 = NULL;
        t = not_null(n_7);
        {
          t = t_35(t);
          {
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(p_7));
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
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_Assign_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        ATerm b_5 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 = NULL;
            t = not_null(c_8);
            {
              ATerm i_8 = NULL;
              t = o_0(t);
              {
                g_8 = t;
                {
                  t = not_null(d_8);
                  {
                    t = p_0(t);
                    {
                      i_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(g_8), not_null(i_8));
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
              ATerm m_8 = NULL;
              t = not_null(c_8);
              {
                ATerm o_8 = NULL;
                t = o_0(t);
                {
                  m_8 = t;
                  {
                    t = not_null(d_8);
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
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm u_35 (ATerm), ATerm v_35 (ATerm))
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_Fun_2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        ATerm f_9 = NULL;
        t = not_null(b_9);
        {
          ATerm h_9 = NULL;
          t = u_35(t);
          {
            f_9 = t;
            {
              t = not_null(c_9);
              {
                t = v_35(t);
                {
                  h_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(f_9), not_null(h_9));
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
ATerm Alt_3 (ATerm t, ATerm n_35 (ATerm), ATerm o_35 (ATerm), ATerm p_35 (ATerm))
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_Alt_3))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      u_9 = ATgetArgument(r_9, 2);
      {
        ATerm y_9 = NULL;
        t = not_null(s_9);
        {
          ATerm a_10 = NULL;
          t = n_35(t);
          {
            y_9 = t;
            {
              t = not_null(t_9);
              {
                ATerm c_10 = NULL;
                t = o_35(t);
                {
                  a_10 = t;
                  {
                    t = not_null(u_9);
                    {
                      t = p_35(t);
                      {
                        c_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(y_9), not_null(a_10), not_null(c_10));
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
ATerm case_alternative_1 (ATerm t, ATerm d_67 (ATerm))
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
      t = Alt_3(t, q_0, r_0, d_67);
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
ATerm Case_4 (ATerm t, ATerm g_35 (ATerm), ATerm h_35 (ATerm), ATerm i_35 (ATerm), ATerm j_35 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Case_4))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      s_10 = ATgetArgument(o_10, 3);
      {
        ATerm x_10 = NULL;
        t = not_null(p_10);
        {
          ATerm z_10 = NULL;
          t = g_35(t);
          {
            x_10 = t;
            {
              t = not_null(q_10);
              {
                ATerm b_11 = NULL;
                t = h_35(t);
                {
                  z_10 = t;
                  {
                    t = not_null(r_10);
                    {
                      ATerm d_11 = NULL;
                      t = i_35(t);
                      {
                        b_11 = t;
                        {
                          t = not_null(s_10);
                          {
                            t = j_35(t);
                            {
                              d_11 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(x_10), not_null(z_10), not_null(b_11), not_null(d_11));
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
ATerm Let_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm t_11 = NULL;
        t = not_null(p_11);
        {
          ATerm v_11 = NULL;
          t = w_43(t);
          {
            t_11 = t;
            {
              t = not_null(q_11);
              {
                t = x_43(t);
                {
                  v_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_11), not_null(v_11));
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
ATerm Prim_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Prim_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm j_12 = NULL;
        t = not_null(f_12);
        {
          ATerm l_12 = NULL;
          t = b_45(t);
          {
            j_12 = t;
            {
              t = not_null(g_12);
              {
                t = c_45(t);
                {
                  l_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(j_12), not_null(l_12));
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
ATerm Where_1 (ATerm t, ATerm a_45 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_Where_1))
    {
      u_12 = ATgetArgument(t_12, 0);
      {
        ATerm w_12 = NULL;
        t = not_null(u_12);
        {
          t = a_45(t);
          {
            w_12 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(w_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm y_44 (ATerm), ATerm z_44 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_Scope_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        ATerm j_13 = NULL;
        t = not_null(f_13);
        {
          ATerm l_13 = NULL;
          t = y_44(t);
          {
            j_13 = t;
            {
              t = not_null(g_13);
              {
                t = z_44(t);
                {
                  l_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_13), not_null(l_13));
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
ATerm Build_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Build_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      {
        ATerm w_13 = NULL;
        t = not_null(u_13);
        {
          t = v_44(t);
          {
            w_13 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_Op_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm q_14 = NULL;
        t = not_null(f_14);
        {
          ATerm s_14 = NULL;
          t = e_43(t);
          {
            q_14 = t;
            {
              t = not_null(g_14);
              {
                t = f_43(t);
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
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm q_41 (ATerm), ATerm r_41 (ATerm))
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_As_2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm j_15 = NULL;
        t = not_null(f_15);
        {
          ATerm l_15 = NULL;
          t = q_41(t);
          {
            j_15 = t;
            {
              t = not_null(g_15);
              {
                t = r_41(t);
                {
                  l_15 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(j_15), not_null(l_15));
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
ATerm BuildDefault_1 (ATerm t, ATerm s_41 (ATerm))
{
  ATerm t_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym_BuildDefault_1))
    {
      v_15 = ATgetArgument(t_15, 0);
      {
        ATerm x_15 = NULL;
        t = not_null(v_15);
        {
          t = s_41(t);
          {
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(x_15));
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
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_Str_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = NULL;
            t = not_null(h_16);
            {
              t = n_0(t);
              {
                j_16 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(j_16));
              }
            }
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm m_16 = NULL;
              t = not_null(h_16);
              {
                t = n_0(t);
                {
                  m_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(m_16));
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
  ATerm n_17 = NULL;
  n_17 = t;
  t = SSL_is_real(not_null(n_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Real_1))
    {
      w_17 = ATgetArgument(v_17, 0);
      {
        ATerm o_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL;
            t = not_null(w_17);
            {
              t = m_0(t);
              {
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(y_17));
              }
            }
            LocalPopChoice(p_5);
          }
        else
          {
            t = o_5;
            {
              ATerm b_18 = NULL;
              t = not_null(w_17);
              {
                t = m_0(t);
                {
                  b_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_18));
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
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Int_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_18 = NULL;
            t = not_null(n_18);
            {
              t = l_0(t);
              {
                p_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(p_18));
              }
            }
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm u_18 = NULL;
              t = not_null(n_18);
              {
                t = l_0(t);
                {
                  u_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(u_18));
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
  ATerm h_19 = NULL;
  h_19 = t;
  g_19 :
  if(!(match_cons(h_19, sym_Wld_0)))
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
ATerm Match_1 (ATerm t, ATerm u_44 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Match_1))
    {
      o_19 = ATgetArgument(n_19, 0);
      {
        ATerm q_19 = NULL;
        t = not_null(o_19);
        {
          t = u_44(t);
          {
            q_19 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(q_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm r_44 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_Thread_1))
    {
      y_19 = ATgetArgument(x_19, 0);
      {
        ATerm a_20 = NULL;
        t = not_null(y_19);
        {
          t = r_44(t);
          {
            a_20 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(a_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm q_44 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_All_1))
    {
      i_20 = ATgetArgument(h_20, 0);
      {
        ATerm k_20 = NULL;
        t = not_null(i_20);
        {
          t = q_44(t);
          {
            k_20 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(k_20));
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
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_Some_1))
    {
      u_20 = ATgetArgument(t_20, 0);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_20 = NULL;
            t = not_null(u_20);
            {
              t = k_0(t);
              {
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(w_20));
              }
            }
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm z_20 = NULL;
              t = not_null(u_20);
              {
                t = k_0(t);
                {
                  z_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(z_20));
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
ATerm One_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm i_21 = NULL,j_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym_One_1))
    {
      j_21 = ATgetArgument(i_21, 0);
      {
        ATerm l_21 = NULL;
        t = not_null(j_21);
        {
          t = o_44(t);
          {
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(l_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  s_21 :
  if(match_cons(w_21, sym_Cong_2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm b_22 = NULL;
        t = not_null(x_21);
        {
          ATerm d_22 = NULL;
          t = m_44(t);
          {
            b_22 = t;
            {
              t = not_null(y_21);
              {
                t = n_44(t);
                {
                  d_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(b_22), not_null(d_22));
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
  ATerm j_22 = NULL;
  j_22 = t;
  t = SSL_is_int(not_null(j_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym_Path_2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      {
        ATerm v_22 = NULL;
        t = not_null(r_22);
        {
          ATerm x_22 = NULL;
          t = k_44(t);
          {
            v_22 = t;
            {
              t = not_null(s_22);
              {
                t = l_44(t);
                {
                  x_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(v_22), not_null(x_22));
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
ATerm Rec_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_Rec_2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm l_23 = NULL;
        t = not_null(h_23);
        {
          ATerm n_23 = NULL;
          t = u_43(t);
          {
            l_23 = t;
            {
              t = not_null(i_23);
              {
                t = v_43(t);
                {
                  n_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(l_23), not_null(n_23));
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
ATerm SVar_1 (ATerm t, ATerm t_43 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_SVar_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm y_23 = NULL;
        t = not_null(w_23);
        {
          t = t_43(t);
          {
            y_23 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(y_23));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Call_2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      {
        ATerm l_24 = NULL;
        t = not_null(h_24);
        {
          ATerm n_24 = NULL;
          t = i_44(t);
          {
            l_24 = t;
            {
              t = not_null(i_24);
              {
                t = j_44(t);
                {
                  n_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(l_24), not_null(n_24));
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
ATerm LGChoice_2 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_LGChoice_2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      {
        ATerm b_25 = NULL;
        t = not_null(x_24);
        {
          ATerm d_25 = NULL;
          t = q_43(t);
          {
            b_25 = t;
            {
              t = not_null(y_24);
              {
                t = r_43(t);
                {
                  d_25 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(b_25), not_null(d_25));
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
ATerm GChoice_2 (ATerm t, ATerm o_43 (ATerm), ATerm p_43 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym_GChoice_2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        ATerm r_25 = NULL;
        t = not_null(n_25);
        {
          ATerm t_25 = NULL;
          t = o_43(t);
          {
            r_25 = t;
            {
              t = not_null(o_25);
              {
                t = p_43(t);
                {
                  t_25 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(r_25), not_null(t_25));
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
ATerm LChoice_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_LChoice_2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      {
        ATerm h_26 = NULL;
        t = not_null(d_26);
        {
          ATerm j_26 = NULL;
          t = m_43(t);
          {
            h_26 = t;
            {
              t = not_null(e_26);
              {
                t = n_43(t);
                {
                  j_26 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_26), not_null(j_26));
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
ATerm Choice_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Choice_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm x_26 = NULL;
        t = not_null(t_26);
        {
          ATerm z_26 = NULL;
          t = k_43(t);
          {
            x_26 = t;
            {
              t = not_null(u_26);
              {
                t = l_43(t);
                {
                  z_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_26), not_null(z_26));
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
ATerm Seq_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Seq_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      {
        ATerm n_27 = NULL;
        t = not_null(j_27);
        {
          ATerm p_27 = NULL;
          t = i_43(t);
          {
            n_27 = t;
            {
              t = not_null(k_27);
              {
                t = j_43(t);
                {
                  p_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_27), not_null(p_27));
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
ATerm Test_1 (ATerm t, ATerm g_43 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Test_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm a_28 = NULL;
        t = not_null(y_27);
        {
          t = g_43(t);
          {
            a_28 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_28));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_Not_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm k_28 = NULL;
        t = not_null(i_28);
        {
          t = h_43(t);
          {
            k_28 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(k_28));
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
  ATerm p_28 = NULL;
  p_28 = t;
  o_28 :
  if(!(match_cons(p_28, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  q_28 :
  if(!(match_cons(r_28, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm u_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(w_6);
          }
        else
          {
            t = u_6;
            {
              ATerm x_6 = t;
              int y_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(y_6);
                }
              else
                {
                  t = x_6;
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        {
                          ATerm e_7 = t;
                          int g_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(g_7);
                            }
                          else
                            {
                              t = e_7;
                              {
                                ATerm h_7 = t;
                                int i_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(i_7);
                                  }
                                else
                                  {
                                    t = h_7;
                                    {
                                      ATerm j_7 = t;
                                      int k_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(k_7);
                                        }
                                      else
                                        {
                                          t = j_7;
                                          {
                                            ATerm o_7 = t;
                                            int q_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(q_7);
                                              }
                                            else
                                              {
                                                t = o_7;
                                                {
                                                  ATerm r_7 = t;
                                                  int s_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(s_7);
                                                    }
                                                  else
                                                    {
                                                      t = r_7;
                                                      {
                                                        ATerm t_7 = t;
                                                        int u_7 = stack_ptr;
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
                                                            LocalPopChoice(u_7);
                                                          }
                                                        else
                                                          {
                                                            t = t_7;
                                                            {
                                                              ATerm v_7 = t;
                                                              int w_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                  LocalPopChoice(w_7);
                                                                }
                                                              else
                                                                {
                                                                  t = v_7;
                                                                  {
                                                                    ATerm x_7 = t;
                                                                    int y_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Path_2(t, is_int_0, strategy_expression_0);
                                                                        LocalPopChoice(y_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_7;
                                                                        {
                                                                          ATerm z_7 = t;
                                                                          int e_8 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm b_1 (ATerm t)
                                                                              {
                                                                                t = list_1(t, strategy_expression_0);
                                                                                return(t);
                                                                              }
                                                                              t = Cong_2(t, is_string_0, b_1);
                                                                              LocalPopChoice(e_8);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_7;
                                                                              {
                                                                                ATerm f_8 = t;
                                                                                int h_8 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1(t, strategy_expression_0);
                                                                                    LocalPopChoice(h_8);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_8;
                                                                                    {
                                                                                      ATerm j_8 = t;
                                                                                      int k_8 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(k_8);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_8;
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
                                                                                                        int s_8 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1(t, match_term_exp_0);
                                                                                                            LocalPopChoice(s_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_8;
                                                                                                            {
                                                                                                              ATerm t_8 = t;
                                                                                                              int u_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(u_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_8;
                                                                                                                  {
                                                                                                                    ATerm v_8 = t;
                                                                                                                    int w_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm c_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, is_string_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, c_1, strategy_expression_0);
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
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(y_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_8;
                                                                                                                              {
                                                                                                                                ATerm d_9 = t;
                                                                                                                                int e_9 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm d_1 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, d_1);
                                                                                                                                    LocalPopChoice(e_9);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = d_9;
                                                                                                                                    {
                                                                                                                                      ATerm g_9 = t;
                                                                                                                                      int i_9 = stack_ptr;
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
                                                                                                                                          LocalPopChoice(i_9);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = g_9;
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
                                                                                                                                                  ATerm l_9 = t;
                                                                                                                                                  int m_9 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Assign_2(t, l_1, term_expression_0);
                                                                                                                                                      LocalPopChoice(m_9);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = l_9;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_9 = t;
                                                                                                                                                        int o_9 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm m_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_1(t, m_1);
                                                                                                                                                            LocalPopChoice(o_9);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = n_9;
                                                                                                                                                            {
                                                                                                                                                              ATerm p_9 = t;
                                                                                                                                                              int v_9 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Continue_1(t, is_string_0);
                                                                                                                                                                  LocalPopChoice(v_9);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = p_9;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm n_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_w_9;
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
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_is_string(not_null(u_28));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym_VarDec_2))
    {
      c_29 = ATgetArgument(b_29, 0);
      d_29 = ATgetArgument(b_29, 1);
      {
        ATerm g_29 = NULL;
        t = not_null(c_29);
        {
          ATerm i_29 = NULL;
          t = b_44(t);
          {
            g_29 = t;
            {
              t = not_null(d_29);
              {
                t = c_44(t);
                {
                  i_29 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_29), not_null(i_29));
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
ATerm SDef_3 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm), ATerm a_44 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_SDef_3))
    {
      t_29 = ATgetArgument(s_29, 0);
      u_29 = ATgetArgument(s_29, 1);
      v_29 = ATgetArgument(s_29, 2);
      {
        ATerm z_29 = NULL;
        t = not_null(t_29);
        {
          ATerm b_30 = NULL;
          t = y_43(t);
          {
            z_29 = t;
            {
              t = not_null(u_29);
              {
                ATerm d_30 = NULL;
                t = z_43(t);
                {
                  b_30 = t;
                  {
                    t = not_null(v_29);
                    {
                      t = a_44(t);
                      {
                        d_30 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_29), not_null(b_30), not_null(d_30));
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
  ATerm x_9 = t;
  int z_9 = stack_ptr;
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
      LocalPopChoice(z_9);
    }
  else
    {
      t = x_9;
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
ATerm list_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm j_30 (ATerm t)
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
        t = Cons_2(t, q_59, j_30);
      }
    return(t);
  }
  t = j_30(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Strategies_1))
    {
      o_30 = ATgetArgument(n_30, 0);
      {
        ATerm q_30 = NULL;
        t = not_null(o_30);
        {
          t = o_42(t);
          {
            q_30 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_30));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym_Specification_1))
    {
      y_30 = ATgetArgument(x_30, 0);
      {
        ATerm a_31 = NULL;
        t = not_null(y_30);
        {
          t = q_42(t);
          {
            a_31 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_31));
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
  int g_10 = stack_ptr;
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
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_h_10;
          return(t);
        }
        t = debug_1(t, v_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_33 (ATerm), ATerm x_33 (ATerm))
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym__2))
    {
      j_31 = ATgetArgument(i_31, 0);
      k_31 = ATgetArgument(i_31, 1);
      {
        ATerm n_31 = NULL;
        t = not_null(j_31);
        {
          ATerm p_31 = NULL;
          t = w_33(t);
          {
            n_31 = t;
            {
              t = not_null(k_31);
              {
                t = x_33(t);
                {
                  p_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(p_31));
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
  ATerm w_31 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_31 = NULL,y_31 = NULL;
      x_31 = t;
      v_31 :
      if(match_cons(x_31, sym_Program_1))
        {
          y_31 = ATgetArgument(x_31, 0);
          if(((w_31 != NULL) && (w_31 != y_31)))
            _fail(y_31);
          else
            w_31 = y_31;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(CheckATermList(term_l_10), not_null(w_31)), term_j_10));
      {
        t = printnl_0(t);
        {
          t = term_m_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_10;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_v_10;
  {
    t = printnl_0(t);
    {
      t = term_m_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      ATerm w_10 = t;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            ATerm h_32 = NULL;
            h_32 = t;
            a_32 :
            if(!(match_cons(h_32, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_1);
          PopChoice();
          _fail(t);
        }
      else
        t = w_10;
      return(t);
    }
    t = _2(t, y_1, _id);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm i_32 = NULL,j_32 = NULL;
          i_32 = t;
          c_32 :
          if(match_cons(i_32, sym_Runtime_1))
            {
              j_32 = ATgetArgument(i_32, 0);
              if(((g_32 != NULL) && (g_32 != j_32)))
                _fail(j_32);
              else
                g_32 = j_32;
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
            ATerm k_32 = NULL,l_32 = NULL;
            k_32 = t;
            e_32 :
            if(match_cons(k_32, sym_Program_1))
              {
                l_32 = ATgetArgument(k_32, 0);
                if(((f_32 != NULL) && (f_32 != l_32)))
                  _fail(l_32);
                else
                  f_32 = l_32;
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
          t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_c_11), not_null(g_32)), term_y_10), not_null(f_32)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, x_1);
  {
    t = term_e_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,u_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      u_32 = ATgetArgument(q_32, 1);
      t = SSL_WriteToTextFile(not_null(r_32), not_null(u_32));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_33 = NULL,d_33 = NULL,e_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      d_33 = ATgetArgument(a_33, 0);
      e_33 = ATgetArgument(a_33, 1);
      t = SSL_WriteToBinaryFile(not_null(d_33), not_null(e_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_33 = NULL;
  ATerm f_11;
  f_11 = t;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_2 (ATerm t)
          {
            ATerm n_33 = NULL,o_33 = NULL;
            n_33 = t;
            j_33 :
            if(match_cons(n_33, sym_Output_1))
              {
                o_33 = ATgetArgument(n_33, 0);
                if(((m_33 != NULL) && (m_33 != o_33)))
                  _fail(o_33);
                else
                  m_33 = o_33;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_2);
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          {
            ATerm p_33 = NULL;
            t = term_i_11;
            {
              p_33 = t;
              if(((m_33 != NULL) && (m_33 != p_33)))
                _fail(p_33);
              else
                m_33 = p_33;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_2, _id);
  }
  t = f_11;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm h_2 (ATerm t)
      {
        t = not_null(m_33);
        return(t);
      }
      t = split_2(t, h_2, _id);
      return(t);
    }
    t = _2(t, _id, g_2);
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm q_33 = NULL;
              q_33 = t;
              l_33 :
              if(!(match_cons(q_33, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, j_2);
            return(t);
          }
          t = _2(t, i_2, WriteToBinaryFile_0);
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_50 (ATerm))
{
  ATerm y_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  ATerm l_11;
  l_11 = t;
  t = dtime_0(t);
  t = l_11;
  {
    t = l_50(t);
    {
      ATerm m_11;
      m_11 = t;
      {
        ATerm z_33 = NULL;
        t = dtime_0(t);
        {
          z_33 = t;
          if(((y_33 != NULL) && (y_33 != z_33)))
            _fail(z_33);
          else
            y_33 = z_33;
        }
      }
      t = m_11;
      {
        a_34 = t;
        v_33 :
        if(match_cons(a_34, sym__2))
          {
            b_34 = ATgetArgument(a_34, 0);
            c_34 = ATgetArgument(a_34, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_34)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_33))), not_null(c_34));
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
  ATerm i_34 = NULL;
  i_34 = t;
  t = SSL_ReadFromFile(not_null(i_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm))
{
  ATerm n_34 = NULL,p_34 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm o_34 = NULL;
    t = c_53(t);
    {
      o_34 = t;
      if(((n_34 != NULL) && (n_34 != o_34)))
        _fail(o_34);
      else
        n_34 = o_34;
    }
  }
  t = r_11;
  {
    ATerm q_34 = NULL;
    t = d_53(t);
    {
      q_34 = t;
      if(((p_34 != NULL) && (p_34 != q_34)))
        _fail(q_34);
      else
        p_34 = q_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_34), not_null(p_34));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_34 = NULL;
  ATerm s_11;
  s_11 = t;
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm x_34 = NULL,y_34 = NULL;
          x_34 = t;
          u_34 :
          if(match_cons(x_34, sym_Input_1))
            {
              y_34 = ATgetArgument(x_34, 0);
              if(((w_34 != NULL) && (w_34 != y_34)))
                _fail(y_34);
              else
                w_34 = y_34;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_2);
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        {
          ATerm z_34 = NULL;
          t = term_x_11;
          {
            z_34 = t;
            if(((w_34 != NULL) && (w_34 != z_34)))
              _fail(z_34);
            else
              w_34 = z_34;
          }
        }
      }
  }
  t = s_11;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(w_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  c_35 :
  if(!(match_cons(d_35, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = k_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  t = SSL_table_create(not_null(f_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  {
    ATerm c_12;
    c_12 = t;
    {
      t = term_h_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, not_null(r_35));
          t = table_put_0(t);
        }
      }
    }
    t = c_12;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  e_36 = t;
  c_36 :
  if(match_string(e_36, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(e_36) == AT_LIST) && ((ATermList) e_36 != ATempty)))
        {
          f_36 = ATgetFirst((ATermList) e_36);
          g_36 = (ATerm) ATgetNext((ATermList) e_36);
          d_36 :
          if(((ATgetType(g_36) == AT_LIST) && ((ATermList) g_36 != ATempty)))
            {
              h_36 = ATgetFirst((ATermList) g_36);
              i_36 = (ATerm) ATgetNext((ATermList) g_36);
              {
                ATerm m_36 = NULL;
                ATerm k_12;
                k_12 = t;
                {
                  t = not_null(f_36);
                  t = h_0(t);
                }
                t = k_12;
                {
                  ATerm n_36 = NULL;
                  t = not_null(h_36);
                  {
                    t = i_0(t);
                    {
                      n_36 = t;
                      if(((m_36 != NULL) && (m_36 != n_36)))
                        _fail(n_36);
                      else
                        m_36 = n_36;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(m_36));
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm c_37 = NULL;
        c_37 = t;
        r_36 :
        if(!(match_string(c_37, "-S")))
          {
            if(!(match_string(c_37, "--silent")))
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
        t = term_p_12;
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm d_37 = NULL;
              d_37 = t;
              s_36 :
              if(!(match_string(d_37, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_v_12;
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_x_12;
              return(t);
            }
            t = Option_3(t, q_2, r_2, s_2);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm y_12 = t;
              int z_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm e_37 = NULL;
                    e_37 = t;
                    t_36 :
                    if(!(match_string(e_37, "-v")))
                      {
                        if(!(match_string(e_37, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = term_a_13;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_b_13;
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  LocalPopChoice(z_12);
                }
              else
                {
                  t = y_12;
                  {
                    ATerm c_13 = t;
                    int h_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm f_37 = NULL;
                          f_37 = t;
                          u_36 :
                          if(!(match_string(f_37, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
                        {
                          ATerm g_37 = NULL;
                          ATerm h_37 = NULL;
                          h_37 = t;
                          if(((g_37 != NULL) && (g_37 != h_37)))
                            _fail(h_37);
                          else
                            g_37 = h_37;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_37));
                          return(t);
                        }
                        ATerm y_2 (ATerm t)
                        {
                          t = term_i_13;
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, x_2, y_2);
                        LocalPopChoice(h_13);
                      }
                    else
                      {
                        t = c_13;
                        {
                          ATerm k_13 = t;
                          int m_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_2 (ATerm t)
                              {
                                ATerm i_37 = NULL;
                                i_37 = t;
                                w_36 :
                                if(!(match_string(i_37, "-i")))
                                  {
                                    if(!(match_string(i_37, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                ATerm j_37 = NULL;
                                ATerm k_37 = NULL;
                                k_37 = t;
                                if(((j_37 != NULL) && (j_37 != k_37)))
                                  _fail(k_37);
                                else
                                  j_37 = k_37;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_37));
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = term_n_13;
                                return(t);
                              }
                              t = ArgOption_3(t, z_2, a_3, b_3);
                              LocalPopChoice(m_13);
                            }
                          else
                            {
                              t = k_13;
                              {
                                ATerm o_13 = t;
                                int p_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      ATerm l_37 = NULL;
                                      l_37 = t;
                                      y_36 :
                                      if(!(match_string(l_37, "-o")))
                                        {
                                          if(!(match_string(l_37, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm m_37 = NULL;
                                      ATerm n_37 = NULL;
                                      n_37 = t;
                                      if(((m_37 != NULL) && (m_37 != n_37)))
                                        _fail(n_37);
                                      else
                                        m_37 = n_37;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_37));
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = term_q_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_3, d_3, e_3);
                                    LocalPopChoice(p_13);
                                  }
                                else
                                  {
                                    t = o_13;
                                    {
                                      ATerm r_13 = t;
                                      int v_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_3 (ATerm t)
                                          {
                                            ATerm o_37 = NULL;
                                            o_37 = t;
                                            a_37 :
                                            if(!(match_string(o_37, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = term_x_13;
                                            return(t);
                                          }
                                          ATerm h_3 (ATerm t)
                                          {
                                            t = term_y_13;
                                            return(t);
                                          }
                                          t = Option_3(t, f_3, g_3, h_3);
                                          LocalPopChoice(v_13);
                                        }
                                      else
                                        {
                                          t = r_13;
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              ATerm p_37 = NULL;
                                              p_37 = t;
                                              b_37 :
                                              if(!(match_string(p_37, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = term_z_13;
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = term_a_14;
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
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_table_destroy(not_null(u_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  t = SSL_exit(not_null(y_37));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  t = SSL_implode_string(not_null(c_38));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm f_38 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_38);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          t = Nil_0(t);
          t = c_60(t);
        }
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
        i_38 = t;
        h_38 :
        if(((ATgetType(i_38) == AT_LIST) && ((ATermList) i_38 != ATempty)))
          {
            j_38 = ATgetFirst((ATermList) i_38);
            k_38 = (ATerm) ATgetNext((ATermList) i_38);
            {
              t = not_null(j_38);
              {
                ATerm l_3 (ATerm t)
                {
                  t = not_null(k_38);
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
  ATerm q_38 = NULL;
  q_38 = t;
  t = SSL_explode_string(not_null(q_38));
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
ATerm long_description_1 (ATerm t, ATerm r_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm t_38 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = Cons_2(t, o_59, t_38);
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  a_39 = t;
  x_38 :
  if(((ATgetType(a_39) == AT_LIST) && ((ATermList) a_39 != ATempty)))
    {
      y_38 = ATgetFirst((ATermList) a_39);
      z_38 = (ATerm) ATgetNext((ATermList) a_39);
      {
        t = not_null(z_38);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm d_39 = NULL;
            ATerm e_39 = NULL;
            t = g_0(t);
            {
              e_39 = t;
              if(((d_39 != NULL) && (d_39 != e_39)))
                _fail(e_39);
              else
                d_39 = e_39;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(y_38));
            return(t);
          }
          t = reverse_1(t, m_3);
        }
      }
    }
  else
    {
      if(((ATermList) a_39 == ATempty))
        {
          {
            t = term_l_14;
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
ATerm short_description_1 (ATerm t, ATerm q_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_35 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Program_1))
    {
      m_39 = ATgetArgument(l_39, 0);
      {
        ATerm o_39 = NULL;
        t = not_null(m_39);
        {
          t = z_35(t);
          {
            o_39 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_39));
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
  ATerm w_39 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm x_39 = NULL;
      x_39 = t;
      if(((w_39 != NULL) && (w_39 != x_39)))
        _fail(x_39);
      else
        w_39 = x_39;
      return(t);
    }
    t = Program_1(t, p_3);
    return(t);
  }
  t = option_defined_1(t, o_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_39 = NULL;
      ATerm z_39 = NULL;
      t = term_l_14;
      {
        ATerm r_3 (ATerm t)
        {
          t = not_null(w_39);
          return(t);
        }
        t = short_description_1(t, r_3);
        {
          t = concat_strings_0(t);
          {
            z_39 = t;
            if(((y_39 != NULL) && (y_39 != z_39)))
              _fail(z_39);
            else
              y_39 = z_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATempty, not_null(y_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = term_o_14;
      {
        t = printnl_0(t);
        {
          t = term_t_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm a_40 = NULL;
                  a_40 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_40)), term_u_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm c_40 = NULL;
                    ATerm d_40 = NULL;
                    t = term_l_14;
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(w_39);
                        return(t);
                      }
                      t = long_description_1(t, u_3);
                      {
                        t = concat_strings_0(t);
                        {
                          d_40 = t;
                          if(((c_40 != NULL) && (c_40 != d_40)))
                            _fail(d_40);
                          else
                            c_40 = d_40;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_40)), term_v_14));
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
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym__2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        ATerm w_14;
        w_14 = t;
        t = SSL_printnl(not_null(l_40), not_null(m_40));
        t = w_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_36 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_Undefined_1))
    {
      u_40 = ATgetArgument(t_40, 0);
      {
        ATerm w_40 = NULL;
        t = not_null(u_40);
        {
          t = a_36(t);
          {
            w_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_40));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm a_41 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_59, _id);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = Cons_2(t, _id, a_41);
      }
    return(t);
  }
  t = a_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_49 (ATerm))
{
  t = fetch_1(t, p_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  b_41 :
  if(!(match_cons(c_41, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_66(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym__2))
    {
      g_41 = ATgetArgument(f_41, 0);
      h_41 = ATgetArgument(f_41, 1);
      t = SSL_table_get(not_null(g_41), not_null(h_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,t_41 = NULL,u_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__3))
    {
      p_41 = ATgetArgument(o_41, 0);
      t_41 = ATgetArgument(o_41, 1);
      u_41 = ATgetArgument(o_41, 2);
      {
        ATerm b_15;
        b_15 = t;
        {
          ATerm y_41 = NULL;
          ATerm z_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_41), not_null(t_41));
          {
            ATerm c_15 = t;
            int h_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_15);
              }
            else
              {
                t = c_15;
                t = (ATerm) ATempty;
              }
            {
              z_41 = t;
              if(((y_41 != NULL) && (y_41 != z_41)))
                _fail(z_41);
              else
                y_41 = z_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_41), not_null(t_41), (ATerm) ATinsert(CheckATermList(not_null(y_41)), not_null(u_41)));
            t = table_put_0(t);
          }
        }
        t = b_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_48 (ATerm))
{
  ATerm d_42 = NULL;
  ATerm e_42 = NULL;
  t = term_l_14;
  {
    t = v_48(t);
    {
      e_42 = t;
      if(((d_42 != NULL) && (d_42 != e_42)))
        _fail(e_42);
      else
        d_42 = e_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_14, term_r_14, not_null(d_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_string(k_42, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(k_42) == AT_LIST) && ((ATermList) k_42 != ATempty)))
        {
          l_42 = ATgetFirst((ATermList) k_42);
          m_42 = (ATerm) ATgetNext((ATermList) k_42);
          {
            ATerm r_42 = NULL;
            ATerm i_15;
            i_15 = t;
            {
              t = not_null(l_42);
              t = a_0(t);
            }
            t = i_15;
            {
              ATerm s_42 = NULL;
              t = term_l_14;
              {
                t = d_0(t);
                {
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_42)), not_null(r_42));
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
    ATerm x_42 = NULL;
    x_42 = t;
    w_42 :
    if(!(match_string(x_42, "--help")))
      {
        if(!(match_string(x_42, "-h")))
          {
            if(!(match_string(x_42, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  z_42 :
  if(((ATgetType(b_43) == AT_LIST) && ((ATermList) b_43 != ATempty)))
    {
      c_43 = ATgetFirst((ATermList) b_43);
      d_43 = (ATerm) ATgetNext((ATermList) b_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_43)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL,w_44 = NULL;
  s_44 = t;
  p_44 :
  if(((ATgetType(s_44) == AT_LIST) && ((ATermList) s_44 != ATempty)))
    {
      t_44 = ATgetFirst((ATermList) s_44);
      w_44 = (ATerm) ATgetNext((ATermList) s_44);
      {
        ATerm e_45 = NULL;
        t = not_null(t_44);
        {
          ATerm i_45 = NULL;
          t = f_45(t);
          {
            e_45 = t;
            {
              t = not_null(w_44);
              {
                t = g_45(t);
                {
                  i_45 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_45)), not_null(e_45));
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
  ATerm o_45 = NULL;
  o_45 = t;
  n_45 :
  if(((ATermList) o_45 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_48 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = term_o_15;
      t = t_48(t);
      return(t);
    }
    t = try_1(t, y_3);
  }
  t = n_15;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm q_45 = NULL;
      q_45 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_45));
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = r_15;
              {
                t = t_48(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
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
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
    z_45 = t;
    v_45 :
    if(match_cons(z_45, sym__3))
      {
        a_46 = ATgetArgument(z_45, 0);
        b_46 = ATgetArgument(z_45, 1);
        c_46 = ATgetArgument(z_45, 2);
        {
          if(((w_45 != NULL) && (w_45 != a_46)))
            _fail(a_46);
          else
            w_45 = a_46;
          {
            if(((x_45 != NULL) && (x_45 != b_46)))
              _fail(b_46);
            else
              x_45 = b_46;
            {
              if(((y_45 != NULL) && (y_45 != c_46)))
                _fail(c_46);
              else
                y_45 = c_46;
              t = SSL_table_put(not_null(w_45), not_null(x_45), not_null(y_45));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = w_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm f_46 = NULL;
  ATerm y_15;
  y_15 = t;
  {
    t = term_z_15;
    t = table_put_0(t);
  }
  t = y_15;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_48(t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm g_46 = NULL;
                  g_46 = t;
                  if(((f_46 != NULL) && (f_46 != g_46)))
                    _fail(g_46);
                  else
                    f_46 = g_46;
                  return(t);
                }
                t = Undefined_1(t, e_4);
                return(t);
              }
              t = option_defined_1(t, d_4);
              {
                ATerm e_16;
                e_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_46)), term_i_16));
                  t = printnl_0(t);
                }
                t = e_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_10;
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
        ATerm k_16;
        k_16 = t;
        {
          t = term_p_14;
          t = table_destroy_0(t);
        }
        t = k_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm l_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_50(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = l_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_4);
  {
    t = store_options_0(t);
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, b_50);
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, z_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_49 (ATerm), ATerm v_49 (ATerm))
{
  t = iowrap_3(t, u_49, v_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, r_49);
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
