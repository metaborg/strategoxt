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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_d_14;
ATerm term_t_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_p_7;
ATerm term_o_4;
ATerm term_t_3;
void init_constant_terms (void)
{
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATinsert(ATempty, term_i_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATinsert(ATempty, term_p_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_t_3, term_r_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATinsert(ATempty, term_v_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATinsert(ATempty, term_a_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_t_3, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_k_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__3, term_i_12, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm l_51 (ATerm));
ATerm Var_1 (ATerm, ATerm e_43 (ATerm));
ATerm Assign_1 (ATerm, ATerm k_40 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm w_41 (ATerm));
ATerm Op_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm h_40 (ATerm));
ATerm Alt_3 (ATerm, ATerm e_40 (ATerm), ATerm f_40 (ATerm), ATerm g_40 (ATerm));
ATerm Case_4 (ATerm, ATerm x_39 (ATerm), ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm));
ATerm Let_2 (ATerm, ATerm d_44 (ATerm), ATerm e_44 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_45 (ATerm), ATerm j_45 (ATerm));
ATerm Where_1 (ATerm, ATerm h_45 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm));
ATerm Build_1 (ATerm, ATerm c_45 (ATerm));
ATerm Thread_1 (ATerm, ATerm y_44 (ATerm));
ATerm All_1 (ATerm, ATerm x_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm v_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm Path_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_44 (ATerm), ATerm c_44 (ATerm));
ATerm SVar_1 (ATerm, ATerm a_44 (ATerm));
ATerm Call_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm GChoice_2 (ATerm, ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm), ATerm u_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm o_43 (ATerm), ATerm p_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm Test_1 (ATerm, ATerm k_43 (ATerm));
ATerm Not_1 (ATerm, ATerm l_43 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm l_44 (ATerm), ATerm m_44 (ATerm), ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_44 (ATerm), ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm y_59 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm a_34 (ATerm), ATerm b_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_48 (ATerm));
ATerm map_1 (ATerm, ATerm w_59 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_48 (ATerm));
ATerm Program_1 (ATerm, ATerm j_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_49 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_45 (ATerm), ATerm l_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm), ATerm g_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm l_51 (ATerm))
{
  ATerm r_3;
  r_3 = t;
  {
    ATerm f_6 = NULL,h_6 = NULL;
    ATerm s_3;
    s_3 = t;
    {
      ATerm g_6 = NULL;
      t = l_51(t);
      {
        g_6 = t;
        if(((f_6 != NULL) && (f_6 != g_6)))
          _fail(g_6);
        else
          f_6 = g_6;
      }
    }
    t = s_3;
    {
      ATerm i_6 = NULL;
      i_6 = t;
      if(((h_6 != NULL) && (h_6 != i_6)))
        _fail(i_6);
      else
        h_6 = i_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_6)), not_null(f_6)));
        t = printnl_0(t);
      }
    }
  }
  t = r_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm o_6 = NULL,p_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_Var_1))
    {
      p_6 = ATgetArgument(o_6, 0);
      {
        ATerm r_6 = NULL;
        t = not_null(p_6);
        {
          t = e_43(t);
          {
            r_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm k_40 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_Assign_1))
    {
      z_6 = ATgetArgument(y_6, 0);
      {
        ATerm b_7 = NULL;
        t = not_null(z_6);
        {
          t = k_40(t);
          {
            b_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(b_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm w_41 (ATerm))
{
  ATerm i_7 = NULL,j_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_BuildDefault_1))
    {
      j_7 = ATgetArgument(i_7, 0);
      {
        ATerm l_7 = NULL;
        t = not_null(j_7);
        {
          t = w_41(t);
          {
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(l_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Op_2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      {
        ATerm y_7 = NULL;
        t = not_null(u_7);
        {
          ATerm a_8 = NULL;
          t = i_43(t);
          {
            y_7 = t;
            {
              t = not_null(v_7);
              {
                t = j_43(t);
                {
                  a_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_7), not_null(a_8));
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm k_8 = NULL,l_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_Str_1))
    {
      l_8 = ATgetArgument(k_8, 0);
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = not_null(l_8);
            {
              t = p_0(t);
              {
                n_8 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(n_8));
              }
            }
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm q_8 = NULL;
              t = not_null(l_8);
              {
                t = p_0(t);
                {
                  q_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(q_8));
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
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_is_real(not_null(x_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_Real_1))
    {
      g_9 = ATgetArgument(f_9, 0);
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 = NULL;
            t = not_null(g_9);
            {
              t = o_0(t);
              {
                i_9 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(i_9));
              }
            }
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm l_9 = NULL;
              t = not_null(g_9);
              {
                t = o_0(t);
                {
                  l_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(l_9));
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_Int_1))
    {
      x_9 = ATgetArgument(w_9, 0);
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_9 = NULL;
            t = not_null(x_9);
            {
              t = n_0(t);
              {
                z_9 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(z_9));
              }
            }
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm c_10 = NULL;
              t = not_null(x_9);
              {
                t = n_0(t);
                {
                  c_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(c_10));
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
  ATerm j_10 = NULL;
  j_10 = t;
  i_10 :
  if(!(match_cons(j_10, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm e_4 = t;
              int f_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(f_4);
                }
              else
                {
                  t = e_4;
                  {
                    ATerm g_4 = t;
                    int h_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(h_4);
                      }
                    else
                      {
                        t = g_4;
                        {
                          ATerm i_4 = t;
                          int j_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(j_4);
                            }
                          else
                            {
                              t = i_4;
                              {
                                ATerm k_4 = t;
                                int l_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, b_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(n_4);
                                        }
                                      else
                                        {
                                          t = m_4;
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = term_o_4;
                                              return(t);
                                            }
                                            t = debug_1(t, c_0);
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
ATerm Assign_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_Assign_2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL;
            t = not_null(t_10);
            {
              ATerm z_10 = NULL;
              t = l_0(t);
              {
                x_10 = t;
                {
                  t = not_null(u_10);
                  {
                    t = m_0(t);
                    {
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(x_10), not_null(z_10));
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm d_11 = NULL;
              t = not_null(t_10);
              {
                ATerm f_11 = NULL;
                t = l_0(t);
                {
                  d_11 = t;
                  {
                    t = not_null(u_10);
                    {
                      t = m_0(t);
                      {
                        f_11 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(d_11), not_null(f_11));
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
ATerm Continue_1 (ATerm t, ATerm h_40 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_Continue_1))
    {
      r_11 = ATgetArgument(q_11, 0);
      {
        ATerm t_11 = NULL;
        t = not_null(r_11);
        {
          t = h_40(t);
          {
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(t_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm e_40 (ATerm), ATerm f_40 (ATerm), ATerm g_40 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Alt_3))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      f_12 = ATgetArgument(c_12, 2);
      {
        ATerm j_12 = NULL;
        t = not_null(d_12);
        {
          ATerm l_12 = NULL;
          t = e_40(t);
          {
            j_12 = t;
            {
              t = not_null(e_12);
              {
                ATerm n_12 = NULL;
                t = f_40(t);
                {
                  l_12 = t;
                  {
                    t = not_null(f_12);
                    {
                      t = g_40(t);
                      {
                        n_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(j_12), not_null(l_12), not_null(n_12));
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
ATerm Case_4 (ATerm t, ATerm x_39 (ATerm), ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_Case_4))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      c_13 = ATgetArgument(z_12, 2);
      d_13 = ATgetArgument(z_12, 3);
      {
        ATerm i_13 = NULL;
        t = not_null(a_13);
        {
          ATerm k_13 = NULL;
          t = x_39(t);
          {
            i_13 = t;
            {
              t = not_null(b_13);
              {
                ATerm m_13 = NULL;
                t = y_39(t);
                {
                  k_13 = t;
                  {
                    t = not_null(c_13);
                    {
                      ATerm o_13 = NULL;
                      t = z_39(t);
                      {
                        m_13 = t;
                        {
                          t = not_null(d_13);
                          {
                            t = a_40(t);
                            {
                              o_13 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(i_13), not_null(k_13), not_null(m_13), not_null(o_13));
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
ATerm Let_2 (ATerm t, ATerm d_44 (ATerm), ATerm e_44 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Let_2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      {
        ATerm e_14 = NULL;
        t = not_null(a_14);
        {
          ATerm g_14 = NULL;
          t = d_44(t);
          {
            e_14 = t;
            {
              t = not_null(b_14);
              {
                t = e_44(t);
                {
                  g_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_14), not_null(g_14));
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
ATerm Prim_2 (ATerm t, ATerm i_45 (ATerm), ATerm j_45 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_Prim_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm e_15 = NULL;
        t = not_null(x_14);
        {
          ATerm g_15 = NULL;
          t = i_45(t);
          {
            e_15 = t;
            {
              t = not_null(y_14);
              {
                t = j_45(t);
                {
                  g_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_15), not_null(g_15));
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
ATerm Where_1 (ATerm t, ATerm h_45 (ATerm))
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym_Where_1))
    {
      p_15 = ATgetArgument(o_15, 0);
      {
        ATerm r_15 = NULL;
        t = not_null(p_15);
        {
          t = h_45(t);
          {
            r_15 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(r_15));
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
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_is_int(not_null(x_15));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_Scope_2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm j_16 = NULL;
        t = not_null(f_16);
        {
          ATerm l_16 = NULL;
          t = f_45(t);
          {
            j_16 = t;
            {
              t = not_null(g_16);
              {
                t = g_45(t);
                {
                  l_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_16), not_null(l_16));
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
ATerm Build_1 (ATerm t, ATerm c_45 (ATerm))
{
  ATerm f_17 = NULL,o_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_Build_1))
    {
      o_17 = ATgetArgument(f_17, 0);
      {
        ATerm q_17 = NULL;
        t = not_null(o_17);
        {
          t = c_45(t);
          {
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_Thread_1))
    {
      y_17 = ATgetArgument(x_17, 0);
      {
        ATerm a_18 = NULL;
        t = not_null(y_17);
        {
          t = y_44(t);
          {
            a_18 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(a_18));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm x_44 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_All_1))
    {
      i_18 = ATgetArgument(h_18, 0);
      {
        ATerm k_18 = NULL;
        t = not_null(i_18);
        {
          t = x_44(t);
          {
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(k_18));
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
  ATerm v_18 = NULL,w_18 = NULL;
  v_18 = t;
  u_18 :
  if(match_cons(v_18, sym_Some_1))
    {
      w_18 = ATgetArgument(v_18, 0);
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_19 = NULL;
            t = not_null(w_18);
            {
              t = k_0(t);
              {
                e_19 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(e_19));
              }
            }
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm h_19 = NULL;
              t = not_null(w_18);
              {
                t = k_0(t);
                {
                  h_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(h_19));
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
ATerm One_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_One_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm u_19 = NULL;
        t = not_null(s_19);
        {
          t = v_44(t);
          {
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(u_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_Cong_2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      {
        ATerm h_20 = NULL;
        t = not_null(d_20);
        {
          ATerm j_20 = NULL;
          t = t_44(t);
          {
            h_20 = t;
            {
              t = not_null(e_20);
              {
                t = u_44(t);
                {
                  j_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_20), not_null(j_20));
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
ATerm Path_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Path_2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL;
        t = not_null(t_20);
        {
          ATerm z_20 = NULL;
          t = r_44(t);
          {
            x_20 = t;
            {
              t = not_null(u_20);
              {
                t = s_44(t);
                {
                  z_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(x_20), not_null(z_20));
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
ATerm Rec_2 (ATerm t, ATerm b_44 (ATerm), ATerm c_44 (ATerm))
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym_Rec_2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      {
        ATerm n_21 = NULL;
        t = not_null(j_21);
        {
          ATerm p_21 = NULL;
          t = b_44(t);
          {
            n_21 = t;
            {
              t = not_null(k_21);
              {
                t = c_44(t);
                {
                  p_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(n_21), not_null(p_21));
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
ATerm SVar_1 (ATerm t, ATerm a_44 (ATerm))
{
  ATerm a_22 = NULL,b_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_SVar_1))
    {
      b_22 = ATgetArgument(a_22, 0);
      {
        ATerm d_22 = NULL;
        t = not_null(b_22);
        {
          t = a_44(t);
          {
            d_22 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(d_22));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Call_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      n_22 = ATgetArgument(l_22, 1);
      {
        ATerm q_22 = NULL;
        t = not_null(m_22);
        {
          ATerm s_22 = NULL;
          t = p_44(t);
          {
            q_22 = t;
            {
              t = not_null(n_22);
              {
                t = q_44(t);
                {
                  s_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_22), not_null(s_22));
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
ATerm LGChoice_2 (ATerm t, ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_LGChoice_2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm g_23 = NULL;
        t = not_null(c_23);
        {
          ATerm i_23 = NULL;
          t = x_43(t);
          {
            g_23 = t;
            {
              t = not_null(d_23);
              {
                t = y_43(t);
                {
                  i_23 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(g_23), not_null(i_23));
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
ATerm GChoice_2 (ATerm t, ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_GChoice_2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      {
        ATerm w_23 = NULL;
        t = not_null(s_23);
        {
          ATerm y_23 = NULL;
          t = v_43(t);
          {
            w_23 = t;
            {
              t = not_null(t_23);
              {
                t = w_43(t);
                {
                  y_23 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(w_23), not_null(y_23));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm), ATerm u_43 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_GuardedLChoice_3))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      l_24 = ATgetArgument(i_24, 2);
      {
        ATerm p_24 = NULL;
        t = not_null(j_24);
        {
          ATerm r_24 = NULL;
          t = s_43(t);
          {
            p_24 = t;
            {
              t = not_null(k_24);
              {
                ATerm t_24 = NULL;
                t = t_43(t);
                {
                  r_24 = t;
                  {
                    t = not_null(l_24);
                    {
                      t = u_43(t);
                      {
                        t_24 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(p_24), not_null(r_24), not_null(t_24));
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
ATerm LChoice_2 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_LChoice_2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      {
        ATerm i_25 = NULL;
        t = not_null(e_25);
        {
          ATerm k_25 = NULL;
          t = q_43(t);
          {
            i_25 = t;
            {
              t = not_null(f_25);
              {
                t = r_43(t);
                {
                  k_25 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_25), not_null(k_25));
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
ATerm Choice_2 (ATerm t, ATerm o_43 (ATerm), ATerm p_43 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym_Choice_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm y_25 = NULL;
        t = not_null(u_25);
        {
          ATerm a_26 = NULL;
          t = o_43(t);
          {
            y_25 = t;
            {
              t = not_null(v_25);
              {
                t = p_43(t);
                {
                  a_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_25), not_null(a_26));
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
ATerm Seq_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Seq_2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm o_26 = NULL;
        t = not_null(k_26);
        {
          ATerm q_26 = NULL;
          t = m_43(t);
          {
            o_26 = t;
            {
              t = not_null(l_26);
              {
                t = n_43(t);
                {
                  q_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_26), not_null(q_26));
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
ATerm Test_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym_Test_1))
    {
      z_26 = ATgetArgument(y_26, 0);
      {
        ATerm b_27 = NULL;
        t = not_null(z_26);
        {
          t = k_43(t);
          {
            b_27 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(b_27));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm l_43 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Not_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm l_27 = NULL;
        t = not_null(j_27);
        {
          t = l_43(t);
          {
            l_27 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(l_27));
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
  ATerm q_27 = NULL;
  q_27 = t;
  p_27 :
  if(!(match_cons(q_27, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  r_27 :
  if(!(match_cons(s_27, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(a_5);
                      }
                    else
                      {
                        t = z_4;
                        {
                          ATerm b_5 = t;
                          int c_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(c_5);
                            }
                          else
                            {
                              t = b_5;
                              {
                                ATerm d_5 = t;
                                int e_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(e_5);
                                  }
                                else
                                  {
                                    t = d_5;
                                    {
                                      ATerm f_5 = t;
                                      int g_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(k_5);
                                                    }
                                                  else
                                                    {
                                                      t = j_5;
                                                      {
                                                        ATerm l_5 = t;
                                                        int m_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(m_5);
                                                          }
                                                        else
                                                          {
                                                            t = l_5;
                                                            {
                                                              ATerm n_5 = t;
                                                              int o_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
                                                                  LocalPopChoice(o_5);
                                                                }
                                                              else
                                                                {
                                                                  t = n_5;
                                                                  {
                                                                    ATerm p_5 = t;
                                                                    int q_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(q_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_5;
                                                                        {
                                                                          ATerm r_5 = t;
                                                                          int s_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(s_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_5;
                                                                              {
                                                                                ATerm t_5 = t;
                                                                                int u_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(e_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = d_6;
                                                                                                                  {
                                                                                                                    ATerm j_6 = t;
                                                                                                                    int k_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm r_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm l_6 = t;
                                                                                                                            int m_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(m_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = l_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, s_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(k_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_6;
                                                                                                                        {
                                                                                                                          ATerm q_6 = t;
                                                                                                                          int s_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(s_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_6;
                                                                                                                              {
                                                                                                                                ATerm t_6 = t;
                                                                                                                                int u_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm t_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, t_0);
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
                                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm v_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm a_7 = t;
                                                                                                                                              int c_7 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(c_7);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = a_7;
                                                                                                                                                  {
                                                                                                                                                    ATerm w_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      t = list_1(t, _id);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_4(t, w_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, v_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, u_0, strategy_expression_0);
                                                                                                                                          LocalPopChoice(w_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = v_6;
                                                                                                                                          {
                                                                                                                                            ATerm d_7 = t;
                                                                                                                                            int e_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm x_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm y_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm z_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, z_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Case_4(t, is_string_0, x_0, y_0, strategy_expression_0);
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm a_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, a_1, term_expression_0);
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
                                                                                                                                                                  ATerm b_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, b_1);
                                                                                                                                                                  LocalPopChoice(o_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = n_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm c_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_p_7;
                                                                                                                                                                      return(t);
                                                                                                                                                                    }
                                                                                                                                                                    t = debug_1(t, c_1);
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
  ATerm v_27 = NULL;
  v_27 = t;
  t = SSL_is_string(not_null(v_27));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  y_27 :
  if(!(match_cons(z_27, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm l_44 (ATerm), ATerm m_44 (ATerm), ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_SDef_4))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      k_28 = ATgetArgument(g_28, 3);
      {
        ATerm p_28 = NULL;
        t = not_null(h_28);
        {
          ATerm r_28 = NULL;
          t = l_44(t);
          {
            p_28 = t;
            {
              t = not_null(i_28);
              {
                ATerm t_28 = NULL;
                t = m_44(t);
                {
                  r_28 = t;
                  {
                    t = not_null(j_28);
                    {
                      ATerm v_28 = NULL;
                      t = n_44(t);
                      {
                        t_28 = t;
                        {
                          t = not_null(k_28);
                          {
                            t = o_44(t);
                            {
                              v_28 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(p_28), not_null(r_28), not_null(t_28), not_null(v_28));
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
ATerm SDef_3 (ATerm t, ATerm f_44 (ATerm), ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym_SDef_3))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      k_29 = ATgetArgument(h_29, 2);
      {
        ATerm o_29 = NULL;
        t = not_null(i_29);
        {
          ATerm q_29 = NULL;
          t = f_44(t);
          {
            o_29 = t;
            {
              t = not_null(j_29);
              {
                ATerm s_29 = NULL;
                t = g_44(t);
                {
                  q_29 = t;
                  {
                    t = not_null(k_29);
                    {
                      t = h_44(t);
                      {
                        s_29 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_29), not_null(q_29), not_null(s_29));
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
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, d_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_z_7;
                return(t);
              }
              t = debug_1(t, e_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm y_29 (ATerm t)
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        t = Cons_2(t, y_59, y_29);
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_f_8;
          return(t);
        }
        t = debug_1(t, f_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_34 (ATerm), ATerm b_34 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym__2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm i_30 = NULL;
        t = not_null(e_30);
        {
          ATerm k_30 = NULL;
          t = a_34(t);
          {
            i_30 = t;
            {
              t = not_null(f_30);
              {
                t = b_34(t);
                {
                  k_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(k_30));
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
  ATerm r_30 = NULL;
  ATerm g_8;
  g_8 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm s_30 = NULL,t_30 = NULL;
      s_30 = t;
      q_30 :
      if(match_cons(s_30, sym_Program_1))
        {
          t_30 = ATgetArgument(s_30, 0);
          if(((r_30 != NULL) && (r_30 != t_30)))
            _fail(t_30);
          else
            r_30 = t_30;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(CheckATermList(term_m_8), not_null(r_30)), term_h_8));
      {
        t = printnl_0(t);
        {
          t = term_o_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_s_8;
  {
    t = printnl_0(t);
    {
      t = term_o_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm t_8 = t;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm c_31 = NULL;
            c_31 = t;
            v_30 :
            if(!(match_cons(c_31, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_1);
          PopChoice();
          _fail(t);
        }
      else
        t = t_8;
      return(t);
    }
    t = _2(t, i_1, _id);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm d_31 = NULL,e_31 = NULL;
          d_31 = t;
          x_30 :
          if(match_cons(d_31, sym_Runtime_1))
            {
              e_31 = ATgetArgument(d_31, 0);
              if(((b_31 != NULL) && (b_31 != e_31)))
                _fail(e_31);
              else
                b_31 = e_31;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_1);
        return(t);
      }
      t = _2(t, k_1, _id);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm f_31 = NULL,g_31 = NULL;
            f_31 = t;
            z_30 :
            if(match_cons(f_31, sym_Program_1))
              {
                g_31 = ATgetArgument(f_31, 0);
                if(((a_31 != NULL) && (a_31 != g_31)))
                  _fail(g_31);
                else
                  a_31 = g_31;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          return(t);
        }
        t = _2(t, m_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_w_8), not_null(b_31)), term_u_8), not_null(a_31)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_1);
  {
    t = term_y_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      t = SSL_WriteToTextFile(not_null(m_31), not_null(n_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym__2))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      t = SSL_WriteToBinaryFile(not_null(u_31), not_null(v_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_32 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm e_32 = NULL,f_32 = NULL;
            e_32 = t;
            a_32 :
            if(match_cons(e_32, sym_Output_1))
              {
                f_32 = ATgetArgument(e_32, 0);
                if(((d_32 != NULL) && (d_32 != f_32)))
                  _fail(f_32);
                else
                  d_32 = f_32;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_1);
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm g_32 = NULL;
            t = term_c_9;
            {
              g_32 = t;
              if(((d_32 != NULL) && (d_32 != g_32)))
                _fail(g_32);
              else
                d_32 = g_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_1, _id);
  }
  t = z_8;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(d_32);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm d_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm h_32 = NULL;
              h_32 = t;
              c_32 :
              if(!(match_cons(h_32, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          LocalPopChoice(h_9);
        }
      else
        {
          t = d_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm n_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  ATerm j_9;
  j_9 = t;
  t = dtime_0(t);
  t = j_9;
  {
    t = q_50(t);
    {
      ATerm k_9;
      k_9 = t;
      {
        ATerm o_32 = NULL;
        t = dtime_0(t);
        {
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
        }
      }
      t = k_9;
      {
        p_32 = t;
        m_32 :
        if(match_cons(p_32, sym__2))
          {
            q_32 = ATgetArgument(p_32, 0);
            r_32 = ATgetArgument(p_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_32))), not_null(r_32));
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
  ATerm z_32 = NULL;
  z_32 = t;
  t = SSL_ReadFromFile(not_null(z_32));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm e_33 = NULL,i_33 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm h_33 = NULL;
    t = h_53(t);
    {
      h_33 = t;
      if(((e_33 != NULL) && (e_33 != h_33)))
        _fail(h_33);
      else
        e_33 = h_33;
    }
  }
  t = m_9;
  {
    ATerm j_33 = NULL;
    t = i_53(t);
    {
      j_33 = t;
      if(((i_33 != NULL) && (i_33 != j_33)))
        _fail(j_33);
      else
        i_33 = j_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(i_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_33 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm q_33 = NULL,r_33 = NULL;
          q_33 = t;
          n_33 :
          if(match_cons(q_33, sym_Input_1))
            {
              r_33 = ATgetArgument(q_33, 0);
              if(((p_33 != NULL) && (p_33 != r_33)))
                _fail(r_33);
              else
                p_33 = r_33;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_1);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm s_33 = NULL;
          t = term_q_9;
          {
            s_33 = t;
            if(((p_33 != NULL) && (p_33 != s_33)))
              _fail(s_33);
            else
              p_33 = s_33;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(p_33);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  v_33 :
  if(!(match_cons(w_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_50 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = p_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  t = SSL_table_create(not_null(y_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  {
    ATerm y_9;
    y_9 = t;
    {
      t = term_a_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, not_null(e_34));
          t = table_put_0(t);
        }
      }
    }
    t = y_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  k_34 :
  if(match_string(m_34, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(m_34) == AT_LIST) && ((ATermList) m_34 != ATempty)))
        {
          n_34 = ATgetFirst((ATermList) m_34);
          o_34 = (ATerm) ATgetNext((ATermList) m_34);
          l_34 :
          if(((ATgetType(o_34) == AT_LIST) && ((ATermList) o_34 != ATempty)))
            {
              p_34 = ATgetFirst((ATermList) o_34);
              q_34 = (ATerm) ATgetNext((ATermList) o_34);
              {
                ATerm u_34 = NULL;
                ATerm d_10;
                d_10 = t;
                {
                  t = not_null(n_34);
                  t = h_0(t);
                }
                t = d_10;
                {
                  ATerm v_34 = NULL;
                  t = not_null(p_34);
                  {
                    t = i_0(t);
                    {
                      v_34 = t;
                      if(((u_34 != NULL) && (u_34 != v_34)))
                        _fail(v_34);
                      else
                        u_34 = v_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_34)), not_null(u_34));
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm m_35 = NULL;
        m_35 = t;
        z_34 :
        if(!(match_string(m_35, "-S")))
          {
            if(!(match_string(m_35, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_h_10;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm n_35 = NULL;
              n_35 = t;
              a_35 :
              if(!(match_string(n_35, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_m_10;
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_n_10;
              return(t);
            }
            t = Option_3(t, a_2, b_2, c_2);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm o_35 = NULL;
                    o_35 = t;
                    b_35 :
                    if(!(match_string(o_35, "-v")))
                      {
                        if(!(match_string(o_35, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_q_10;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_v_10;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  {
                    ATerm w_10 = t;
                    int y_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm p_35 = NULL;
                          p_35 = t;
                          c_35 :
                          if(!(match_string(p_35, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm q_35 = NULL;
                          ATerm r_35 = NULL;
                          r_35 = t;
                          if(((q_35 != NULL) && (q_35 != r_35)))
                            _fail(r_35);
                          else
                            q_35 = r_35;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_35));
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_a_11;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        LocalPopChoice(y_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm b_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm s_35 = NULL;
                                s_35 = t;
                                e_35 :
                                if(!(match_string(s_35, "-i")))
                                  {
                                    if(!(match_string(s_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm t_35 = NULL;
                                ATerm u_35 = NULL;
                                u_35 = t;
                                if(((t_35 != NULL) && (t_35 != u_35)))
                                  _fail(u_35);
                                else
                                  t_35 = u_35;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_35));
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_e_11;
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, l_2);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = b_11;
                              {
                                ATerm g_11 = t;
                                int h_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm v_35 = NULL;
                                      v_35 = t;
                                      g_35 :
                                      if(!(match_string(v_35, "-o")))
                                        {
                                          if(!(match_string(v_35, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm w_35 = NULL;
                                      ATerm x_35 = NULL;
                                      x_35 = t;
                                      if(((w_35 != NULL) && (w_35 != x_35)))
                                        _fail(x_35);
                                      else
                                        w_35 = x_35;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_35));
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_i_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, m_2, n_2, o_2);
                                    LocalPopChoice(h_11);
                                  }
                                else
                                  {
                                    t = g_11;
                                    {
                                      ATerm j_11 = t;
                                      int k_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm y_35 = NULL;
                                            y_35 = t;
                                            i_35 :
                                            if(!(match_string(y_35, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_l_11;
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_m_11;
                                            return(t);
                                          }
                                          t = Option_3(t, p_2, q_2, r_2);
                                          LocalPopChoice(k_11);
                                        }
                                      else
                                        {
                                          t = j_11;
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              ATerm z_35 = NULL;
                                              z_35 = t;
                                              l_35 :
                                              if(!(match_string(z_35, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = term_n_11;
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_o_11;
                                              return(t);
                                            }
                                            t = Option_3(t, s_2, t_2, u_2);
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
  ATerm e_36 = NULL;
  e_36 = t;
  t = SSL_table_destroy(not_null(e_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  t = SSL_exit(not_null(i_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_implode_string(not_null(m_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm p_36 (ATerm t)
  {
    ATerm s_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_36);
        LocalPopChoice(u_11);
      }
    else
      {
        t = s_11;
        {
          t = Nil_0(t);
          t = k_60(t);
        }
      }
    return(t);
  }
  t = p_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
        s_36 = t;
        r_36 :
        if(((ATgetType(s_36) == AT_LIST) && ((ATermList) s_36 != ATempty)))
          {
            t_36 = ATgetFirst((ATermList) s_36);
            u_36 = (ATerm) ATgetNext((ATermList) s_36);
            {
              t = not_null(t_36);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(u_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_explode_string(not_null(a_37));
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
ATerm long_description_1 (ATerm t, ATerm w_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm d_37 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = Cons_2(t, w_59, d_37);
      }
    return(t);
  }
  t = d_37(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  h_37 :
  if(((ATgetType(k_37) == AT_LIST) && ((ATermList) k_37 != ATempty)))
    {
      i_37 = ATgetFirst((ATermList) k_37);
      j_37 = (ATerm) ATgetNext((ATermList) k_37);
      {
        t = not_null(j_37);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm n_37 = NULL;
            ATerm o_37 = NULL;
            t = g_0(t);
            {
              o_37 = t;
              if(((n_37 != NULL) && (n_37 != o_37)))
                _fail(o_37);
              else
                n_37 = o_37;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), not_null(i_37));
            return(t);
          }
          t = reverse_1(t, w_2);
        }
      }
    }
  else
    {
      if(((ATermList) k_37 == ATempty))
        {
          {
            t = term_z_11;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_35 (ATerm))
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_Program_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      {
        ATerm y_37 = NULL;
        t = not_null(w_37);
        {
          t = j_35(t);
          {
            y_37 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_37));
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
  ATerm g_38 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm h_38 = NULL;
      h_38 = t;
      if(((g_38 != NULL) && (g_38 != h_38)))
        _fail(h_38);
      else
        g_38 = h_38;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm i_38 = NULL;
      ATerm j_38 = NULL;
      t = term_z_11;
      {
        ATerm b_3 (ATerm t)
        {
          t = not_null(g_38);
          return(t);
        }
        t = short_description_1(t, b_3);
        {
          t = concat_strings_0(t);
          {
            j_38 = t;
            if(((i_38 != NULL) && (i_38 != j_38)))
              _fail(j_38);
            else
              i_38 = j_38;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATempty, not_null(i_38)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_3);
    {
      t = term_h_12;
      {
        t = printnl_0(t);
        {
          t = term_m_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm k_38 = NULL;
                  k_38 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_o_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm m_38 = NULL;
                    ATerm n_38 = NULL;
                    t = term_z_11;
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(g_38);
                        return(t);
                      }
                      t = long_description_1(t, e_3);
                      {
                        t = concat_strings_0(t);
                        {
                          n_38 = t;
                          if(((m_38 != NULL) && (m_38 != n_38)))
                            _fail(n_38);
                          else
                            m_38 = n_38;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_38)), term_p_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_3);
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
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym__2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      {
        ATerm q_12;
        q_12 = t;
        t = SSL_printnl(not_null(v_38), not_null(w_38));
        t = q_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_35 (ATerm))
{
  ATerm d_39 = NULL,e_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_Undefined_1))
    {
      e_39 = ATgetArgument(d_39, 0);
      {
        ATerm g_39 = NULL;
        t = not_null(e_39);
        {
          t = k_35(t);
          {
            g_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_39));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm k_39 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_60, _id);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2(t, _id, k_39);
      }
    return(t);
  }
  t = k_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_49 (ATerm))
{
  t = fetch_1(t, u_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  l_39 :
  if(!(match_cons(m_39, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_66(t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_cons(p_39, sym__2))
    {
      q_39 = ATgetArgument(p_39, 0);
      r_39 = ATgetArgument(p_39, 1);
      t = SSL_table_get(not_null(q_39), not_null(r_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,i_40 = NULL,j_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym__3))
    {
      d_40 = ATgetArgument(c_40, 0);
      i_40 = ATgetArgument(c_40, 1);
      j_40 = ATgetArgument(c_40, 2);
      {
        ATerm v_12;
        v_12 = t;
        {
          ATerm o_40 = NULL;
          ATerm p_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_40), not_null(i_40));
          {
            ATerm w_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_12);
              }
            else
              {
                t = w_12;
                t = (ATerm) ATempty;
              }
            {
              p_40 = t;
              if(((o_40 != NULL) && (o_40 != p_40)))
                _fail(p_40);
              else
                o_40 = p_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_40), not_null(i_40), (ATerm) ATinsert(CheckATermList(not_null(o_40)), not_null(j_40)));
            t = table_put_0(t);
          }
        }
        t = v_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_49 (ATerm))
{
  ATerm t_40 = NULL;
  ATerm u_40 = NULL;
  t = term_z_11;
  {
    t = a_49(t);
    {
      u_40 = t;
      if(((t_40 != NULL) && (t_40 != u_40)))
        _fail(u_40);
      else
        t_40 = u_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_k_12, not_null(t_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_string(a_41, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(a_41) == AT_LIST) && ((ATermList) a_41 != ATempty)))
        {
          b_41 = ATgetFirst((ATermList) a_41);
          c_41 = (ATerm) ATgetNext((ATermList) a_41);
          {
            ATerm f_41 = NULL;
            ATerm e_13;
            e_13 = t;
            {
              t = not_null(b_41);
              t = a_0(t);
            }
            t = e_13;
            {
              ATerm g_41 = NULL;
              t = term_z_11;
              {
                t = d_0(t);
                {
                  g_41 = t;
                  if(((f_41 != NULL) && (f_41 != g_41)))
                    _fail(g_41);
                  else
                    f_41 = g_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_41)), not_null(f_41));
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
  ATerm f_3 (ATerm t)
  {
    ATerm l_41 = NULL;
    l_41 = t;
    k_41 :
    if(!(match_string(l_41, "--help")))
      {
        if(!(match_string(l_41, "-h")))
          {
            if(!(match_string(l_41, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = Option_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(((ATgetType(o_41) == AT_LIST) && ((ATermList) o_41 != ATempty)))
    {
      p_41 = ATgetFirst((ATermList) o_41);
      q_41 = (ATerm) ATgetNext((ATermList) o_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_41)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_45 (ATerm), ATerm l_45 (ATerm))
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(((ATgetType(z_41) == AT_LIST) && ((ATermList) z_41 != ATempty)))
    {
      a_42 = ATgetFirst((ATermList) z_41);
      b_42 = (ATerm) ATgetNext((ATermList) z_41);
      {
        ATerm e_42 = NULL;
        t = not_null(a_42);
        {
          ATerm g_42 = NULL;
          t = k_45(t);
          {
            e_42 = t;
            {
              t = not_null(b_42);
              {
                t = l_45(t);
                {
                  g_42 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_42)), not_null(e_42));
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
  ATerm m_42 = NULL;
  m_42 = t;
  l_42 :
  if(((ATermList) m_42 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_48 (ATerm))
{
  ATerm h_13;
  h_13 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = term_j_13;
      t = y_48(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = h_13;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm o_42 = NULL;
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_42));
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm l_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                t = y_48(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(n_13);
        }
      else
        {
          t = l_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_3, k_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
    x_42 = t;
    t_42 :
    if(match_cons(x_42, sym__3))
      {
        y_42 = ATgetArgument(x_42, 0);
        z_42 = ATgetArgument(x_42, 1);
        a_43 = ATgetArgument(x_42, 2);
        {
          if(((u_42 != NULL) && (u_42 != y_42)))
            _fail(y_42);
          else
            u_42 = y_42;
          {
            if(((v_42 != NULL) && (v_42 != z_42)))
              _fail(z_42);
            else
              v_42 = z_42;
            {
              if(((w_42 != NULL) && (w_42 != a_43)))
                _fail(a_43);
              else
                w_42 = a_43;
              t = SSL_table_put(not_null(u_42), not_null(v_42), not_null(w_42));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = r_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_48 (ATerm))
{
  ATerm d_43 = NULL;
  ATerm s_13;
  s_13 = t;
  {
    t = term_t_13;
    t = table_put_0(t);
  }
  t = s_13;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_48(t);
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm f_43 = NULL;
                  f_43 = t;
                  if(((d_43 != NULL) && (d_43 != f_43)))
                    _fail(f_43);
                  else
                    d_43 = f_43;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm c_14;
                c_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_43)), term_d_14));
                  t = printnl_0(t);
                }
                t = c_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_3);
      {
        ATerm f_14;
        f_14 = t;
        {
          t = term_i_12;
          t = table_destroy_0(t);
        }
        t = f_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm), ATerm g_50 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_50(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      ATerm j_14 = t;
      int k_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, g_50);
          LocalPopChoice(k_14);
        }
      else
        {
          t = j_14;
          {
            ATerm l_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, e_50);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm))
{
  t = iowrap_3(t, z_49, a_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_49 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, w_49);
    return(t);
  }
  t = iowrap_2(t, q_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
