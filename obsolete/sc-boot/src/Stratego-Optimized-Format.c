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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_w_13;
ATerm term_q_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_q_7;
ATerm term_p_4;
ATerm term_u_3;
void init_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_b_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__3, term_a_12, term_b_12, (ATerm) ATempty);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm j_52 (ATerm));
ATerm Var_1 (ATerm, ATerm a_44 (ATerm));
ATerm Assign_1 (ATerm, ATerm e_41 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm q_42 (ATerm));
ATerm Op_2 (ATerm, ATerm e_44 (ATerm), ATerm f_44 (ATerm));
ATerm Str_1 (ATerm, ATerm q_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm p_0 (ATerm));
ATerm Int_1 (ATerm, ATerm o_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm b_41 (ATerm));
ATerm Alt_3 (ATerm, ATerm y_40 (ATerm), ATerm z_40 (ATerm), ATerm a_41 (ATerm));
ATerm Case_4 (ATerm, ATerm r_40 (ATerm), ATerm s_40 (ATerm), ATerm t_40 (ATerm), ATerm u_40 (ATerm));
ATerm Let_2 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm Where_1 (ATerm, ATerm d_46 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm));
ATerm Build_1 (ATerm, ATerm y_45 (ATerm));
ATerm Thread_1 (ATerm, ATerm u_45 (ATerm));
ATerm All_1 (ATerm, ATerm t_45 (ATerm));
ATerm Some_1 (ATerm, ATerm l_0 (ATerm));
ATerm One_1 (ATerm, ATerm r_45 (ATerm));
ATerm Cong_2 (ATerm, ATerm p_45 (ATerm), ATerm q_45 (ATerm));
ATerm Path_2 (ATerm, ATerm n_45 (ATerm), ATerm o_45 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_44 (ATerm), ATerm y_44 (ATerm));
ATerm SVar_1 (ATerm, ATerm w_44 (ATerm));
ATerm Call_2 (ATerm, ATerm l_45 (ATerm), ATerm m_45 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm GChoice_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm o_44 (ATerm), ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm Test_1 (ATerm, ATerm g_44 (ATerm));
ATerm Not_1 (ATerm, ATerm h_44 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm), ATerm k_45 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_61 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm s_34 (ATerm), ATerm t_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_51 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_49 (ATerm));
ATerm map_1 (ATerm, ATerm y_60 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_49 (ATerm));
ATerm Program_1 (ATerm, ATerm b_36 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_36 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_50 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_49 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_49 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_51 (ATerm), ATerm d_51 (ATerm), ATerm e_51 (ATerm));
ATerm iowrap_2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm u_50 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm j_52 (ATerm))
{
  ATerm s_3;
  s_3 = t;
  {
    ATerm g_6 = NULL,i_6 = NULL;
    ATerm t_3;
    t_3 = t;
    {
      ATerm h_6 = NULL;
      t = j_52(t);
      {
        h_6 = t;
        if(((g_6 != NULL) && (g_6 != h_6)))
          _fail(h_6);
        else
          g_6 = h_6;
      }
    }
    t = t_3;
    {
      ATerm j_6 = NULL;
      j_6 = t;
      if(((i_6 != NULL) && (i_6 != j_6)))
        _fail(j_6);
      else
        i_6 = j_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_6)), not_null(g_6)));
        t = printnl_0(t);
      }
    }
  }
  t = s_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_44 (ATerm))
{
  ATerm p_6 = NULL,q_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_Var_1))
    {
      q_6 = ATgetArgument(p_6, 0);
      {
        ATerm s_6 = NULL;
        t = not_null(q_6);
        {
          t = a_44(t);
          {
            s_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_6));
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
ATerm Assign_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym_Assign_1))
    {
      a_7 = ATgetArgument(z_6, 0);
      {
        ATerm c_7 = NULL;
        t = not_null(a_7);
        {
          t = e_41(t);
          {
            c_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(c_7));
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
ATerm BuildDefault_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_BuildDefault_1))
    {
      k_7 = ATgetArgument(j_7, 0);
      {
        ATerm m_7 = NULL;
        t = not_null(k_7);
        {
          t = q_42(t);
          {
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(m_7));
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
ATerm Op_2 (ATerm t, ATerm e_44 (ATerm), ATerm f_44 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_Op_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        ATerm z_7 = NULL;
        t = not_null(v_7);
        {
          ATerm b_8 = NULL;
          t = e_44(t);
          {
            z_7 = t;
            {
              t = not_null(w_7);
              {
                t = f_44(t);
                {
                  b_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_7), not_null(b_8));
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
ATerm Str_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_Str_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL;
            t = not_null(m_8);
            {
              t = q_0(t);
              {
                o_8 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(o_8));
              }
            }
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
            {
              ATerm r_8 = NULL;
              t = not_null(m_8);
              {
                t = q_0(t);
                {
                  r_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(r_8));
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
  ATerm y_8 = NULL;
  y_8 = t;
  t = SSL_is_real(not_null(y_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Real_1))
    {
      h_9 = ATgetArgument(g_9, 0);
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL;
            t = not_null(h_9);
            {
              t = p_0(t);
              {
                j_9 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(j_9));
              }
            }
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            {
              ATerm m_9 = NULL;
              t = not_null(h_9);
              {
                t = p_0(t);
                {
                  m_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(m_9));
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
ATerm Int_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym_Int_1))
    {
      y_9 = ATgetArgument(x_9, 0);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = NULL;
            t = not_null(y_9);
            {
              t = o_0(t);
              {
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(a_10));
              }
            }
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm d_10 = NULL;
              t = not_null(y_9);
              {
                t = o_0(t);
                {
                  d_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(d_10));
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
  ATerm k_10 = NULL;
  k_10 = t;
  j_10 :
  if(!(match_cons(k_10, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm b_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(c_4);
    }
  else
    {
      t = b_4;
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
            {
              ATerm f_4 = t;
              int g_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(g_4);
                }
              else
                {
                  t = f_4;
                  {
                    ATerm h_4 = t;
                    int i_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(i_4);
                      }
                    else
                      {
                        t = h_4;
                        {
                          ATerm j_4 = t;
                          int k_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(k_4);
                            }
                          else
                            {
                              t = j_4;
                              {
                                ATerm l_4 = t;
                                int m_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, a_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(o_4);
                                        }
                                      else
                                        {
                                          t = n_4;
                                          {
                                            ATerm d_0 (ATerm t)
                                            {
                                              t = term_p_4;
                                              return(t);
                                            }
                                            t = debug_1(t, d_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym_Assign_2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_10 = NULL;
            t = not_null(u_10);
            {
              ATerm a_11 = NULL;
              t = m_0(t);
              {
                y_10 = t;
                {
                  t = not_null(v_10);
                  {
                    t = n_0(t);
                    {
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(y_10), not_null(a_11));
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm e_11 = NULL;
              t = not_null(u_10);
              {
                ATerm g_11 = NULL;
                t = m_0(t);
                {
                  e_11 = t;
                  {
                    t = not_null(v_10);
                    {
                      t = n_0(t);
                      {
                        g_11 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(e_11), not_null(g_11));
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
ATerm Continue_1 (ATerm t, ATerm b_41 (ATerm))
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_Continue_1))
    {
      s_11 = ATgetArgument(r_11, 0);
      {
        ATerm u_11 = NULL;
        t = not_null(s_11);
        {
          t = b_41(t);
          {
            u_11 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(u_11));
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
ATerm Alt_3 (ATerm t, ATerm y_40 (ATerm), ATerm z_40 (ATerm), ATerm a_41 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Alt_3))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      g_12 = ATgetArgument(d_12, 2);
      {
        ATerm k_12 = NULL;
        t = not_null(e_12);
        {
          ATerm m_12 = NULL;
          t = y_40(t);
          {
            k_12 = t;
            {
              t = not_null(f_12);
              {
                ATerm o_12 = NULL;
                t = z_40(t);
                {
                  m_12 = t;
                  {
                    t = not_null(g_12);
                    {
                      t = a_41(t);
                      {
                        o_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(k_12), not_null(m_12), not_null(o_12));
                      }
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
ATerm Case_4 (ATerm t, ATerm r_40 (ATerm), ATerm s_40 (ATerm), ATerm t_40 (ATerm), ATerm u_40 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_Case_4))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      d_13 = ATgetArgument(a_13, 2);
      e_13 = ATgetArgument(a_13, 3);
      {
        ATerm j_13 = NULL;
        t = not_null(b_13);
        {
          ATerm l_13 = NULL;
          t = r_40(t);
          {
            j_13 = t;
            {
              t = not_null(c_13);
              {
                ATerm n_13 = NULL;
                t = s_40(t);
                {
                  l_13 = t;
                  {
                    t = not_null(d_13);
                    {
                      ATerm p_13 = NULL;
                      t = t_40(t);
                      {
                        n_13 = t;
                        {
                          t = not_null(e_13);
                          {
                            t = u_40(t);
                            {
                              p_13 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(j_13), not_null(l_13), not_null(n_13), not_null(p_13));
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm))
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Let_2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      {
        ATerm f_14 = NULL;
        t = not_null(b_14);
        {
          ATerm h_14 = NULL;
          t = z_44(t);
          {
            f_14 = t;
            {
              t = not_null(c_14);
              {
                t = a_45(t);
                {
                  h_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_14), not_null(h_14));
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
ATerm Prim_2 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Prim_2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      {
        ATerm c_15 = NULL;
        t = not_null(r_14);
        {
          ATerm e_15 = NULL;
          t = e_46(t);
          {
            c_15 = t;
            {
              t = not_null(s_14);
              {
                t = f_46(t);
                {
                  e_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(c_15), not_null(e_15));
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
ATerm Where_1 (ATerm t, ATerm d_46 (ATerm))
{
  ATerm m_15 = NULL,q_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_Where_1))
    {
      q_15 = ATgetArgument(m_15, 0);
      {
        ATerm s_15 = NULL;
        t = not_null(q_15);
        {
          t = d_46(t);
          {
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_15));
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
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_is_int(not_null(x_15));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_Scope_2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm k_16 = NULL;
        t = not_null(f_16);
        {
          ATerm m_16 = NULL;
          t = b_46(t);
          {
            k_16 = t;
            {
              t = not_null(g_16);
              {
                t = c_46(t);
                {
                  m_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_16), not_null(m_16));
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
ATerm Build_1 (ATerm t, ATerm y_45 (ATerm))
{
  ATerm u_16 = NULL,v_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym_Build_1))
    {
      v_16 = ATgetArgument(u_16, 0);
      {
        ATerm x_16 = NULL;
        t = not_null(v_16);
        {
          t = y_45(t);
          {
            x_16 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_16));
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
ATerm Thread_1 (ATerm t, ATerm u_45 (ATerm))
{
  ATerm n_17 = NULL,r_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Thread_1))
    {
      r_17 = ATgetArgument(n_17, 0);
      {
        ATerm b_18 = NULL;
        t = not_null(r_17);
        {
          t = u_45(t);
          {
            b_18 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(b_18));
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
ATerm All_1 (ATerm t, ATerm t_45 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_All_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      {
        ATerm l_18 = NULL;
        t = not_null(j_18);
        {
          t = t_45(t);
          {
            l_18 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(l_18));
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
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Some_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      {
        ATerm s_4 = t;
        int t_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_18 = NULL;
            t = not_null(v_18);
            {
              t = l_0(t);
              {
                x_18 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(x_18));
              }
            }
            LocalPopChoice(t_4);
          }
        else
          {
            t = s_4;
            {
              ATerm a_19 = NULL;
              t = not_null(v_18);
              {
                t = l_0(t);
                {
                  a_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(a_19));
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
ATerm One_1 (ATerm t, ATerm r_45 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  p_19 :
  if(match_cons(r_19, sym_One_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm u_19 = NULL;
        t = not_null(s_19);
        {
          t = r_45(t);
          {
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(u_19));
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
ATerm Cong_2 (ATerm t, ATerm p_45 (ATerm), ATerm q_45 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_Cong_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      {
        ATerm i_20 = NULL;
        t = not_null(e_20);
        {
          ATerm k_20 = NULL;
          t = p_45(t);
          {
            i_20 = t;
            {
              t = not_null(f_20);
              {
                t = q_45(t);
                {
                  k_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(i_20), not_null(k_20));
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
ATerm Path_2 (ATerm t, ATerm n_45 (ATerm), ATerm o_45 (ATerm))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_Path_2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        t = not_null(u_20);
        {
          ATerm a_21 = NULL;
          t = n_45(t);
          {
            y_20 = t;
            {
              t = not_null(v_20);
              {
                t = o_45(t);
                {
                  a_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(y_20), not_null(a_21));
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
ATerm Rec_2 (ATerm t, ATerm x_44 (ATerm), ATerm y_44 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Rec_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm o_21 = NULL;
        t = not_null(k_21);
        {
          ATerm q_21 = NULL;
          t = x_44(t);
          {
            o_21 = t;
            {
              t = not_null(l_21);
              {
                t = y_44(t);
                {
                  q_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(o_21), not_null(q_21));
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
ATerm SVar_1 (ATerm t, ATerm w_44 (ATerm))
{
  ATerm y_21 = NULL,z_21 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym_SVar_1))
    {
      z_21 = ATgetArgument(y_21, 0);
      {
        ATerm b_22 = NULL;
        t = not_null(z_21);
        {
          t = w_44(t);
          {
            b_22 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(b_22));
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
ATerm Call_2 (ATerm t, ATerm l_45 (ATerm), ATerm m_45 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL,o_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Call_2))
    {
      k_22 = ATgetArgument(j_22, 0);
      o_22 = ATgetArgument(j_22, 1);
      {
        ATerm r_22 = NULL;
        t = not_null(k_22);
        {
          ATerm t_22 = NULL;
          t = l_45(t);
          {
            r_22 = t;
            {
              t = not_null(o_22);
              {
                t = m_45(t);
                {
                  t_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(r_22), not_null(t_22));
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
ATerm LGChoice_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_LGChoice_2))
    {
      d_23 = ATgetArgument(c_23, 0);
      e_23 = ATgetArgument(c_23, 1);
      {
        ATerm h_23 = NULL;
        t = not_null(d_23);
        {
          ATerm j_23 = NULL;
          t = t_44(t);
          {
            h_23 = t;
            {
              t = not_null(e_23);
              {
                t = u_44(t);
                {
                  j_23 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(h_23), not_null(j_23));
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
ATerm GChoice_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_GChoice_2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      {
        ATerm x_23 = NULL;
        t = not_null(t_23);
        {
          ATerm z_23 = NULL;
          t = r_44(t);
          {
            x_23 = t;
            {
              t = not_null(u_23);
              {
                t = s_44(t);
                {
                  z_23 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(x_23), not_null(z_23));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm o_44 (ATerm), ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym_GuardedLChoice_3))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      m_24 = ATgetArgument(j_24, 2);
      {
        ATerm q_24 = NULL;
        t = not_null(k_24);
        {
          ATerm s_24 = NULL;
          t = o_44(t);
          {
            q_24 = t;
            {
              t = not_null(l_24);
              {
                ATerm u_24 = NULL;
                t = p_44(t);
                {
                  s_24 = t;
                  {
                    t = not_null(m_24);
                    {
                      t = q_44(t);
                      {
                        u_24 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(q_24), not_null(s_24), not_null(u_24));
                      }
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
ATerm LChoice_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_LChoice_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        ATerm j_25 = NULL;
        t = not_null(f_25);
        {
          ATerm l_25 = NULL;
          t = m_44(t);
          {
            j_25 = t;
            {
              t = not_null(g_25);
              {
                t = n_44(t);
                {
                  l_25 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_25), not_null(l_25));
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
ATerm Choice_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_Choice_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm z_25 = NULL;
        t = not_null(v_25);
        {
          ATerm b_26 = NULL;
          t = k_44(t);
          {
            z_25 = t;
            {
              t = not_null(w_25);
              {
                t = l_44(t);
                {
                  b_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_25), not_null(b_26));
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
ATerm Seq_2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Seq_2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm p_26 = NULL;
        t = not_null(l_26);
        {
          ATerm r_26 = NULL;
          t = i_44(t);
          {
            p_26 = t;
            {
              t = not_null(m_26);
              {
                t = j_44(t);
                {
                  r_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_26), not_null(r_26));
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
ATerm Test_1 (ATerm t, ATerm g_44 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_Test_1))
    {
      a_27 = ATgetArgument(z_26, 0);
      {
        ATerm c_27 = NULL;
        t = not_null(a_27);
        {
          t = g_44(t);
          {
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(c_27));
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
ATerm Not_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_Not_1))
    {
      k_27 = ATgetArgument(j_27, 0);
      {
        ATerm m_27 = NULL;
        t = not_null(k_27);
        {
          t = h_44(t);
          {
            m_27 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(m_27));
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
  ATerm r_27 = NULL;
  r_27 = t;
  q_27 :
  if(!(match_cons(r_27, sym_Fail_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  s_27 :
  if(!(match_cons(t_27, sym_Id_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(z_4);
                }
              else
                {
                  t = y_4;
                  {
                    ATerm a_5 = t;
                    int b_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(b_5);
                      }
                    else
                      {
                        t = a_5;
                        {
                          ATerm c_5 = t;
                          int d_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(d_5);
                            }
                          else
                            {
                              t = c_5;
                              {
                                ATerm e_5 = t;
                                int f_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(f_5);
                                  }
                                else
                                  {
                                    t = e_5;
                                    {
                                      ATerm g_5 = t;
                                      int h_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(l_5);
                                                    }
                                                  else
                                                    {
                                                      t = k_5;
                                                      {
                                                        ATerm m_5 = t;
                                                        int n_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(n_5);
                                                          }
                                                        else
                                                          {
                                                            t = m_5;
                                                            {
                                                              ATerm o_5 = t;
                                                              int p_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
                                                                  LocalPopChoice(p_5);
                                                                }
                                                              else
                                                                {
                                                                  t = o_5;
                                                                  {
                                                                    ATerm q_5 = t;
                                                                    int r_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(r_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_5;
                                                                        {
                                                                          ATerm s_5 = t;
                                                                          int t_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm r_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, r_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(f_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_6;
                                                                                                                  {
                                                                                                                    ATerm k_6 = t;
                                                                                                                    int l_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm s_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm t_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm m_6 = t;
                                                                                                                            int n_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                LocalPopChoice(n_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = m_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, t_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, s_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(l_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = k_6;
                                                                                                                        {
                                                                                                                          ATerm r_6 = t;
                                                                                                                          int t_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(t_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_6;
                                                                                                                              {
                                                                                                                                ATerm u_6 = t;
                                                                                                                                int v_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm u_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, u_0);
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
                                                                                                                                          ATerm v_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm w_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm b_7 = t;
                                                                                                                                              int d_7 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  LocalPopChoice(d_7);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_7;
                                                                                                                                                  {
                                                                                                                                                    ATerm x_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      t = list_1(t, _id);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_4(t, x_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, w_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, v_0, strategy_expression_0);
                                                                                                                                          LocalPopChoice(x_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_6;
                                                                                                                                          {
                                                                                                                                            ATerm e_7 = t;
                                                                                                                                            int f_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm y_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm z_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm a_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, a_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Case_4(t, is_string_0, y_0, z_0, strategy_expression_0);
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm b_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, b_1, term_expression_0);
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
                                                                                                                                                                  ATerm c_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, c_1);
                                                                                                                                                                  LocalPopChoice(p_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = o_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm d_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_q_7;
                                                                                                                                                                      return(t);
                                                                                                                                                                    }
                                                                                                                                                                    t = debug_1(t, d_1);
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_is_string(not_null(w_27));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  z_27 :
  if(!(match_cons(a_28, sym_DontInline_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm), ATerm k_45 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_SDef_4))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      k_28 = ATgetArgument(h_28, 2);
      l_28 = ATgetArgument(h_28, 3);
      {
        ATerm q_28 = NULL;
        t = not_null(i_28);
        {
          ATerm s_28 = NULL;
          t = h_45(t);
          {
            q_28 = t;
            {
              t = not_null(j_28);
              {
                ATerm u_28 = NULL;
                t = i_45(t);
                {
                  s_28 = t;
                  {
                    t = not_null(k_28);
                    {
                      ATerm w_28 = NULL;
                      t = j_45(t);
                      {
                        u_28 = t;
                        {
                          t = not_null(l_28);
                          {
                            t = k_45(t);
                            {
                              w_28 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(q_28), not_null(s_28), not_null(u_28), not_null(w_28));
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm), ATerm d_45 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym_SDef_3))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      l_29 = ATgetArgument(i_29, 2);
      {
        ATerm p_29 = NULL;
        t = not_null(j_29);
        {
          ATerm r_29 = NULL;
          t = b_45(t);
          {
            p_29 = t;
            {
              t = not_null(k_29);
              {
                ATerm t_29 = NULL;
                t = c_45(t);
                {
                  r_29 = t;
                  {
                    t = not_null(l_29);
                    {
                      t = d_45(t);
                      {
                        t_29 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_29), not_null(r_29), not_null(t_29));
                      }
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
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, e_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            {
              ATerm f_1 (ATerm t)
              {
                t = term_a_8;
                return(t);
              }
              t = debug_1(t, f_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = Cons_2(t, a_61, z_29);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_g_8;
          return(t);
        }
        t = debug_1(t, g_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_34 (ATerm), ATerm t_34 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym__2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm j_30 = NULL;
        t = not_null(f_30);
        {
          ATerm l_30 = NULL;
          t = s_34(t);
          {
            j_30 = t;
            {
              t = not_null(g_30);
              {
                t = t_34(t);
                {
                  l_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), not_null(l_30));
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
  ATerm s_30 = NULL;
  ATerm h_8;
  h_8 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm t_30 = NULL,u_30 = NULL;
      t_30 = t;
      r_30 :
      if(match_cons(t_30, sym_Program_1))
        {
          u_30 = ATgetArgument(t_30, 0);
          if(((s_30 != NULL) && (s_30 != u_30)))
            _fail(u_30);
          else
            s_30 = u_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(s_30)), term_i_8));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, term_p_8));
  {
    t = printnl_0(t);
    {
      t = term_n_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      ATerm q_8 = t;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            ATerm d_31 = NULL;
            d_31 = t;
            w_30 :
            if(!(match_cons(d_31, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_8;
        }
      return(t);
    }
    t = _2(t, j_1, _id);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm e_31 = NULL,f_31 = NULL;
          e_31 = t;
          y_30 :
          if(match_cons(e_31, sym_Runtime_1))
            {
              f_31 = ATgetArgument(e_31, 0);
              if(((c_31 != NULL) && (c_31 != f_31)))
                _fail(f_31);
              else
                c_31 = f_31;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_1);
        return(t);
      }
      t = _2(t, l_1, _id);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            ATerm g_31 = NULL,h_31 = NULL;
            g_31 = t;
            a_31 :
            if(match_cons(g_31, sym_Program_1))
              {
                h_31 = ATgetArgument(g_31, 0);
                if(((b_31 != NULL) && (b_31 != h_31)))
                  _fail(h_31);
                else
                  b_31 = h_31;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_1);
          return(t);
        }
        t = _2(t, n_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_8), not_null(c_31)), term_s_8), not_null(b_31)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_1);
  {
    t = term_u_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  l_31 :
  if(match_cons(m_31, sym__2))
    {
      n_31 = ATgetArgument(m_31, 0);
      o_31 = ATgetArgument(m_31, 1);
      t = SSL_WriteToTextFile(not_null(n_31), not_null(o_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      t = SSL_WriteToBinaryFile(not_null(v_31), not_null(w_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_32 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm f_32 = NULL,g_32 = NULL;
            f_32 = t;
            b_32 :
            if(match_cons(f_32, sym_Output_1))
              {
                g_32 = ATgetArgument(f_32, 0);
                if(((e_32 != NULL) && (e_32 != g_32)))
                  _fail(g_32);
                else
                  e_32 = g_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_1);
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm h_32 = NULL;
            t = term_z_8;
            {
              h_32 = t;
              if(((e_32 != NULL) && (e_32 != h_32)))
                _fail(h_32);
              else
                e_32 = h_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_1, _id);
  }
  t = v_8;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(e_32);
        return(t);
      }
      t = split_2(t, s_1, _id);
      return(t);
    }
    t = _2(t, _id, r_1);
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              ATerm i_32 = NULL;
              i_32 = t;
              d_32 :
              if(!(match_cons(i_32, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_1);
            return(t);
          }
          t = _2(t, t_1, WriteToBinaryFile_0);
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_51 (ATerm))
{
  ATerm o_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  ATerm c_9;
  c_9 = t;
  t = dtime_0(t);
  t = c_9;
  {
    t = o_51(t);
    {
      ATerm d_9;
      d_9 = t;
      {
        ATerm p_32 = NULL;
        t = dtime_0(t);
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
      }
      t = d_9;
      {
        q_32 = t;
        n_32 :
        if(match_cons(q_32, sym__2))
          {
            r_32 = ATgetArgument(q_32, 0);
            s_32 = ATgetArgument(q_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_32))), not_null(s_32));
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
  ATerm y_32 = NULL;
  y_32 = t;
  t = SSL_ReadFromFile(not_null(y_32));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm d_33 = NULL,f_33 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm e_33 = NULL;
    t = g_54(t);
    {
      e_33 = t;
      if(((d_33 != NULL) && (d_33 != e_33)))
        _fail(e_33);
      else
        d_33 = e_33;
    }
  }
  t = e_9;
  {
    ATerm g_33 = NULL;
    t = h_54(t);
    {
      g_33 = t;
      if(((f_33 != NULL) && (f_33 != g_33)))
        _fail(g_33);
      else
        f_33 = g_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), not_null(f_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_33 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm q_33 = NULL,r_33 = NULL;
          q_33 = t;
          k_33 :
          if(match_cons(q_33, sym_Input_1))
            {
              r_33 = ATgetArgument(q_33, 0);
              if(((m_33 != NULL) && (m_33 != r_33)))
                _fail(r_33);
              else
                m_33 = r_33;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_1);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm s_33 = NULL;
          t = term_n_9;
          {
            s_33 = t;
            if(((m_33 != NULL) && (m_33 != s_33)))
              _fail(s_33);
            else
              m_33 = s_33;
          }
        }
      }
  }
  t = i_9;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(m_33);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  v_33 :
  if(!(match_cons(w_33, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_51 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_1);
  t = n_51(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  t = SSL_table_create(not_null(a_34));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  {
    ATerm s_9;
    s_9 = t;
    {
      t = term_t_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_9, term_u_9, not_null(e_34));
          t = table_put_0(t);
        }
      }
    }
    t = s_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  k_34 :
  if(match_string(m_34, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
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
                ATerm w_34 = NULL;
                ATerm v_9;
                v_9 = t;
                {
                  t = not_null(n_34);
                  t = i_0(t);
                }
                t = v_9;
                {
                  ATerm x_34 = NULL;
                  t = not_null(p_34);
                  {
                    t = j_0(t);
                    {
                      x_34 = t;
                      if(((w_34 != NULL) && (w_34 != x_34)))
                        _fail(x_34);
                      else
                        w_34 = x_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_34)), not_null(w_34));
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
  ATerm z_9 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm m_35 = NULL;
        m_35 = t;
        b_35 :
        if(!(match_string(m_35, "-S")))
          {
            if(!(match_string(m_35, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_c_10;
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_e_10;
        return(t);
      }
      t = Option_3(t, y_1, z_1, a_2);
      LocalPopChoice(b_10);
    }
  else
    {
      t = z_9;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm n_35 = NULL;
              n_35 = t;
              c_35 :
              if(!(match_string(n_35, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_h_10;
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = term_i_10;
              return(t);
            }
            t = Option_3(t, b_2, c_2, d_2);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm l_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm o_35 = NULL;
                    o_35 = t;
                    d_35 :
                    if(!(match_string(o_35, "-v")))
                      {
                        if(!(match_string(o_35, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_n_10;
                    return(t);
                  }
                  ATerm g_2 (ATerm t)
                  {
                    t = term_o_10;
                    return(t);
                  }
                  t = Option_3(t, e_2, f_2, g_2);
                  LocalPopChoice(m_10);
                }
              else
                {
                  t = l_10;
                  {
                    ATerm p_10 = t;
                    int q_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_2 (ATerm t)
                        {
                          ATerm p_35 = NULL;
                          p_35 = t;
                          e_35 :
                          if(!(match_string(p_35, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
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
                        ATerm j_2 (ATerm t)
                        {
                          t = term_r_10;
                          return(t);
                        }
                        t = ArgOption_3(t, h_2, i_2, j_2);
                        LocalPopChoice(q_10);
                      }
                    else
                      {
                        t = p_10;
                        {
                          ATerm w_10 = t;
                          int x_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_2 (ATerm t)
                              {
                                ATerm s_35 = NULL;
                                s_35 = t;
                                g_35 :
                                if(!(match_string(s_35, "-i")))
                                  {
                                    if(!(match_string(s_35, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
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
                              ATerm m_2 (ATerm t)
                              {
                                t = term_z_10;
                                return(t);
                              }
                              t = ArgOption_3(t, k_2, l_2, m_2);
                              LocalPopChoice(x_10);
                            }
                          else
                            {
                              t = w_10;
                              {
                                ATerm b_11 = t;
                                int c_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm v_35 = NULL;
                                      v_35 = t;
                                      i_35 :
                                      if(!(match_string(v_35, "-o")))
                                        {
                                          if(!(match_string(v_35, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
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
                                    ATerm p_2 (ATerm t)
                                    {
                                      t = term_d_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, n_2, o_2, p_2);
                                    LocalPopChoice(c_11);
                                  }
                                else
                                  {
                                    t = b_11;
                                    {
                                      ATerm f_11 = t;
                                      int h_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_2 (ATerm t)
                                          {
                                            ATerm y_35 = NULL;
                                            y_35 = t;
                                            k_35 :
                                            if(!(match_string(y_35, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_i_11;
                                            return(t);
                                          }
                                          ATerm s_2 (ATerm t)
                                          {
                                            t = term_j_11;
                                            return(t);
                                          }
                                          t = Option_3(t, q_2, r_2, s_2);
                                          LocalPopChoice(h_11);
                                        }
                                      else
                                        {
                                          t = f_11;
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              ATerm z_35 = NULL;
                                              z_35 = t;
                                              l_35 :
                                              if(!(match_string(z_35, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_k_11;
                                              return(t);
                                            }
                                            ATerm v_2 (ATerm t)
                                            {
                                              t = term_l_11;
                                              return(t);
                                            }
                                            t = Option_3(t, t_2, u_2, v_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_36 = NULL;
  g_36 = t;
  t = SSL_table_destroy(not_null(g_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_exit(not_null(k_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = SSL_implode_string(not_null(o_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm r_36 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_36);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          t = Nil_0(t);
          t = m_61(t);
        }
      }
    return(t);
  }
  t = r_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
        u_36 = t;
        t_36 :
        if(((ATgetType(u_36) == AT_LIST) && ((ATermList) u_36 != ATempty)))
          {
            v_36 = ATgetFirst((ATermList) u_36);
            w_36 = (ATerm) ATgetNext((ATermList) u_36);
            {
              t = not_null(v_36);
              {
                ATerm w_2 (ATerm t)
                {
                  t = not_null(w_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_2);
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
  ATerm c_37 = NULL;
  c_37 = t;
  t = SSL_explode_string(not_null(c_37));
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
ATerm long_description_1 (ATerm t, ATerm u_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        t = Cons_2(t, y_60, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  o_37 = t;
  l_37 :
  if(((ATgetType(o_37) == AT_LIST) && ((ATermList) o_37 != ATempty)))
    {
      m_37 = ATgetFirst((ATermList) o_37);
      n_37 = (ATerm) ATgetNext((ATermList) o_37);
      {
        ATerm r_37 = NULL;
        t = not_null(n_37);
        {
          ATerm w_11;
          w_11 = t;
          {
            ATerm s_37 = NULL,u_37 = NULL,w_37 = NULL;
            ATerm x_11;
            x_11 = t;
            {
              ATerm t_37 = NULL;
              t = h_0(t);
              {
                t_37 = t;
                if(((s_37 != NULL) && (s_37 != t_37)))
                  _fail(t_37);
                else
                  s_37 = t_37;
              }
            }
            t = x_11;
            {
              ATerm v_37 = NULL;
              t = not_null(m_37);
              {
                t = g_0(t);
                {
                  v_37 = t;
                  if(((u_37 != NULL) && (u_37 != v_37)))
                    _fail(v_37);
                  else
                    u_37 = v_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_37)), not_null(u_37));
                {
                  w_37 = t;
                  if(((r_37 != NULL) && (r_37 != w_37)))
                    _fail(w_37);
                  else
                    r_37 = w_37;
                }
              }
            }
          }
          t = w_11;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(r_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_37 == ATempty))
        {
          {
            t = term_y_11;
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
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_36 (ATerm))
{
  ATerm f_38 = NULL,g_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Program_1))
    {
      g_38 = ATgetArgument(f_38, 0);
      {
        ATerm i_38 = NULL;
        t = not_null(g_38);
        {
          t = b_36(t);
          {
            i_38 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_38));
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
  ATerm q_38 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm r_38 = NULL;
      r_38 = t;
      if(((q_38 != NULL) && (q_38 != r_38)))
        _fail(r_38);
      else
        q_38 = r_38;
      return(t);
    }
    t = Program_1(t, a_3);
    return(t);
  }
  t = option_defined_1(t, z_2);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm s_38 = NULL;
      ATerm t_38 = NULL;
      t = term_y_11;
      {
        ATerm c_3 (ATerm t)
        {
          t = not_null(q_38);
          return(t);
        }
        t = short_description_1(t, c_3);
        {
          t = concat_strings_0(t);
          {
            t_38 = t;
            if(((s_38 != NULL) && (s_38 != t_38)))
              _fail(t_38);
            else
              s_38 = t_38;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, not_null(s_38)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, term_z_11));
      {
        t = printnl_0(t);
        {
          t = term_h_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm u_38 = NULL;
                  u_38 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_38)), term_i_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm w_38 = NULL;
                    ATerm x_38 = NULL;
                    t = term_y_11;
                    {
                      ATerm f_3 (ATerm t)
                      {
                        t = not_null(q_38);
                        return(t);
                      }
                      t = long_description_1(t, f_3);
                      {
                        t = concat_strings_0(t);
                        {
                          x_38 = t;
                          if(((w_38 != NULL) && (w_38 != x_38)))
                            _fail(x_38);
                          else
                            w_38 = x_38;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_38)), term_j_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_3);
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
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm l_12;
        l_12 = t;
        t = SSL_printnl(not_null(f_39), not_null(g_39));
        t = l_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_36 (ATerm))
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Undefined_1))
    {
      o_39 = ATgetArgument(n_39, 0);
      {
        ATerm q_39 = NULL;
        t = not_null(o_39);
        {
          t = c_36(t);
          {
            q_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_39));
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
ATerm fetch_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm u_39 (ATerm t)
  {
    ATerm n_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_61, _id);
        LocalPopChoice(p_12);
      }
    else
      {
        t = n_12;
        t = Cons_2(t, _id, u_39);
      }
    return(t);
  }
  t = u_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_50 (ATerm))
{
  t = fetch_1(t, s_50);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  v_39 :
  if(!(match_cons(w_39, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_68(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      t = SSL_table_get(not_null(a_40), not_null(b_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__3))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      l_40 = ATgetArgument(i_40, 2);
      {
        ATerm s_12;
        s_12 = t;
        {
          ATerm p_40 = NULL;
          ATerm q_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(k_40));
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                t = (ATerm) ATempty;
              }
            {
              q_40 = t;
              if(((p_40 != NULL) && (p_40 != q_40)))
                _fail(q_40);
              else
                p_40 = q_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(k_40), (ATerm) ATinsert(CheckATermList(not_null(p_40)), not_null(l_40)));
            t = table_put_0(t);
          }
        }
        t = s_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm c_41 = NULL;
  ATerm d_41 = NULL;
  t = term_y_11;
  {
    t = y_49(t);
    {
      d_41 = t;
      if(((c_41 != NULL) && (c_41 != d_41)))
        _fail(d_41);
      else
        c_41 = d_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_12, term_b_12, not_null(c_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_string(k_41, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(k_41) == AT_LIST) && ((ATermList) k_41 != ATempty)))
        {
          l_41 = ATgetFirst((ATermList) k_41);
          m_41 = (ATerm) ATgetNext((ATermList) k_41);
          {
            ATerm p_41 = NULL;
            ATerm v_12;
            v_12 = t;
            {
              t = not_null(l_41);
              t = b_0(t);
            }
            t = v_12;
            {
              ATerm q_41 = NULL;
              t = term_y_11;
              {
                t = c_0(t);
                {
                  q_41 = t;
                  if(((p_41 != NULL) && (p_41 != q_41)))
                    _fail(q_41);
                  else
                    p_41 = q_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(p_41));
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
  ATerm g_3 (ATerm t)
  {
    ATerm v_41 = NULL;
    v_41 = t;
    u_41 :
    if(!(match_string(v_41, "--help")))
      {
        if(!(match_string(v_41, "-h")))
          {
            if(!(match_string(v_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_x_12;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(((ATgetType(y_41) == AT_LIST) && ((ATermList) y_41 != ATempty)))
    {
      z_41 = ATgetFirst((ATermList) y_41);
      a_42 = (ATerm) ATgetNext((ATermList) y_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_46 (ATerm), ATerm h_46 (ATerm))
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && ((ATermList) i_42 != ATempty)))
    {
      j_42 = ATgetFirst((ATermList) i_42);
      k_42 = (ATerm) ATgetNext((ATermList) i_42);
      {
        ATerm n_42 = NULL;
        t = not_null(j_42);
        {
          ATerm p_42 = NULL;
          t = g_46(t);
          {
            n_42 = t;
            {
              t = not_null(k_42);
              {
                t = h_46(t);
                {
                  p_42 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_42)), not_null(n_42));
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
  ATerm w_42 = NULL;
  w_42 = t;
  v_42 :
  if(((ATermList) w_42 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm w_49 (ATerm))
{
  ATerm y_12;
  y_12 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_f_13;
      t = w_49(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = y_12;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm y_42 = NULL;
      y_42 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_42));
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_13);
            }
          else
            {
              t = i_13;
              {
                t = w_49(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
    h_43 = t;
    d_43 :
    if(match_cons(h_43, sym__3))
      {
        i_43 = ATgetArgument(h_43, 0);
        j_43 = ATgetArgument(h_43, 1);
        k_43 = ATgetArgument(h_43, 2);
        {
          if(((e_43 != NULL) && (e_43 != i_43)))
            _fail(i_43);
          else
            e_43 = i_43;
          {
            if(((f_43 != NULL) && (f_43 != j_43)))
              _fail(j_43);
            else
              f_43 = j_43;
            {
              if(((g_43 != NULL) && (g_43 != k_43)))
                _fail(k_43);
              else
                g_43 = k_43;
              t = SSL_table_put(not_null(e_43), not_null(f_43), not_null(g_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm n_43 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    t = term_q_13;
    t = table_put_0(t);
  }
  t = o_13;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_49(t);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_u_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm o_43 = NULL;
                  o_43 = t;
                  if(((n_43 != NULL) && (n_43 != o_43)))
                    _fail(o_43);
                  else
                    n_43 = o_43;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm v_13;
                v_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_43)), term_w_13));
                  t = printnl_0(t);
                }
                t = v_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_3);
      {
        ATerm x_13;
        x_13 = t;
        {
          t = term_a_12;
          t = table_destroy_0(t);
        }
        t = x_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_51 (ATerm), ATerm d_51 (ATerm), ATerm e_51 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm y_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_51(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = y_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_3);
  {
    t = store_options_0(t);
    {
      ATerm e_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, e_51);
          LocalPopChoice(g_14);
        }
      else
        {
          t = e_14;
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, c_51);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  t = iowrap_3(t, x_50, y_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm u_50 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = _2(t, _id, u_50);
    return(t);
  }
  t = iowrap_2(t, r_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
