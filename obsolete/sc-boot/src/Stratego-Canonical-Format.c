#include <stratego.h>
#include <stratego-lib.h>
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
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
    ATprotectSymbol(sym_Final_1);
  }
  {
    sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
    ATprotectSymbol(sym_Case_4);
  }
  {
    sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
    ATprotectSymbol(sym_Case_3);
  }
  {
    sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
    ATprotectSymbol(sym_Alt_3);
  }
  {
    sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
    ATprotectSymbol(sym_Continue_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
    ATprotectSymbol(sym_Assign_1);
  }
  {
    sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
    ATprotectSymbol(sym_Fun_2);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
    ATprotectSymbol(sym_Seqs_1);
  }
  {
    sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
    ATprotectSymbol(sym_Choices_1);
  }
  {
    sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
    ATprotectSymbol(sym_LChoices_1);
  }
  {
    sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
    ATprotectSymbol(sym_Lets_2);
  }
  {
    sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
    ATprotectSymbol(sym_ScopeDefault_1);
  }
  {
    sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
    ATprotectSymbol(sym_DynRuleScope_2);
  }
  {
    sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
    ATprotectSymbol(sym_MA_2);
  }
  {
    sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
    ATprotectSymbol(sym_AM_2);
  }
  {
    sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
    ATprotectSymbol(sym_BA_2);
  }
  {
    sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
    ATprotectSymbol(sym_BAM_3);
  }
  {
    sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
    ATprotectSymbol(sym_Con_3);
  }
  {
    sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
    ATprotectSymbol(sym_App_2);
  }
  {
    sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
    ATprotectSymbol(sym_RootApp_1);
  }
  {
    sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
    ATprotectSymbol(sym_InfixApp_3);
  }
  {
    sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
    ATprotectSymbol(sym_Explode_2);
  }
  {
    sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
    ATprotectSymbol(sym_ExplodeCong_2);
  }
  {
    sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
    ATprotectSymbol(sym_As_2);
  }
  {
    sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
    ATprotectSymbol(sym_BuildDefault_1);
  }
  {
    sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
    ATprotectSymbol(sym_Rule_3);
  }
  {
    sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
    ATprotectSymbol(sym_StratRule_3);
  }
  {
    sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
    ATprotectSymbol(sym_LRule_1);
  }
  {
    sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
    ATprotectSymbol(sym_SRule_1);
  }
  {
    sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
    ATprotectSymbol(sym_RDef_3);
  }
  {
    sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_DynamicRules_1);
  }
  {
    sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_OverrideDynamicRules_1);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
    ATprotectSymbol(sym_Overlay_3);
  }
  {
    sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
    ATprotectSymbol(sym_Signature_1);
  }
  {
    sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
    ATprotectSymbol(sym_Overlays_1);
  }
  {
    sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
    ATprotectSymbol(sym_Rules_1);
  }
  {
    sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
    ATprotectSymbol(sym_Strategies_1);
  }
  {
    sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
    ATprotectSymbol(sym_Imports_1);
  }
  {
    sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
    ATprotectSymbol(sym_Specification_1);
  }
  {
    sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
    ATprotectSymbol(sym_ConstType_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
    ATprotectSymbol(sym_Sort_2);
  }
  {
    sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
    ATprotectSymbol(sym_OpDecl_2);
  }
  {
    sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
    ATprotectSymbol(sym_Sorts_1);
  }
  {
    sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
    ATprotectSymbol(sym_Constructors_1);
  }
  {
    sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
    ATprotectSymbol(sym_NoKind_0);
  }
  {
    sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
    ATprotectSymbol(sym_Wld_0);
  }
  {
    sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
    ATprotectSymbol(sym_Var_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
    ATprotectSymbol(sym_Op_2);
  }
  {
    sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
    ATprotectSymbol(sym_Id_0);
  }
  {
    sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
    ATprotectSymbol(sym_Fail_0);
  }
  {
    sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
    ATprotectSymbol(sym_Test_1);
  }
  {
    sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
    ATprotectSymbol(sym_Not_1);
  }
  {
    sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
    ATprotectSymbol(sym_Seq_2);
  }
  {
    sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
    ATprotectSymbol(sym_Choice_2);
  }
  {
    sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
    ATprotectSymbol(sym_LChoice_2);
  }
  {
    sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
    ATprotectSymbol(sym_SVar_1);
  }
  {
    sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
    ATprotectSymbol(sym_Rec_2);
  }
  {
    sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
    ATprotectSymbol(sym_Let_2);
  }
  {
    sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
    ATprotectSymbol(sym_SDef_3);
  }
  {
    sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
    ATprotectSymbol(sym_VarDec_2);
  }
  {
    sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
    ATprotectSymbol(sym_DefaultVarDec_1);
  }
  {
    sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
    ATprotectSymbol(sym_SDef_4);
  }
  {
    sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
    ATprotectSymbol(sym_DontInline_0);
  }
  {
    sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
    ATprotectSymbol(sym_Call_2);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
    ATprotectSymbol(sym_Cong_2);
  }
  {
    sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
    ATprotectSymbol(sym_One_1);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
    ATprotectSymbol(sym_All_1);
  }
  {
    sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
    ATprotectSymbol(sym_Thread_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
    ATprotectSymbol(sym_Match_1);
  }
  {
    sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
    ATprotectSymbol(sym_Build_1);
  }
  {
    sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
    ATprotectSymbol(sym_MatchVar_1);
  }
  {
    sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
    ATprotectSymbol(sym_MatchFun_1);
  }
  {
    sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
    ATprotectSymbol(sym_Scope_2);
  }
  {
    sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
    ATprotectSymbol(sym_Where_1);
  }
  {
    sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
    ATprotectSymbol(sym_Prim_2);
  }
  {
    sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
    ATprotectSymbol(sym_MatchOp_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm debug_1 (ATerm, ATerm u_50 (ATerm));
ATerm Continue_1 (ATerm, ATerm j_35 (ATerm));
ATerm Var_1 (ATerm, ATerm t_42 (ATerm));
ATerm Assign_1 (ATerm, ATerm m_35 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Fun_2 (ATerm, ATerm n_35 (ATerm), ATerm o_35 (ATerm));
ATerm Alt_3 (ATerm, ATerm g_35 (ATerm), ATerm h_35 (ATerm), ATerm i_35 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm m_66 (ATerm));
ATerm Case_4 (ATerm, ATerm z_34 (ATerm), ATerm a_35 (ATerm), ATerm b_35 (ATerm), ATerm c_35 (ATerm));
ATerm Let_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm Where_1 (ATerm, ATerm o_44 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm Build_1 (ATerm, ATerm j_44 (ATerm));
ATerm Op_2 (ATerm, ATerm x_42 (ATerm), ATerm y_42 (ATerm));
ATerm As_2 (ATerm, ATerm j_41 (ATerm), ATerm k_41 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm l_41 (ATerm));
ATerm Str_1 (ATerm, ATerm n_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_0 (ATerm));
ATerm Int_1 (ATerm, ATerm l_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm i_44 (ATerm));
ATerm Thread_1 (ATerm, ATerm f_44 (ATerm));
ATerm All_1 (ATerm, ATerm e_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm c_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm SVar_1 (ATerm, ATerm h_43 (ATerm));
ATerm Call_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm f_43 (ATerm), ATerm g_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm Test_1 (ATerm, ATerm z_42 (ATerm));
ATerm Not_1 (ATerm, ATerm a_43 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm e_59 (ATerm));
ATerm Strategies_1 (ATerm, ATerm h_42 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_42 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm p_33 (ATerm), ATerm q_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_48 (ATerm));
ATerm map_1 (ATerm, ATerm c_59 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_48 (ATerm));
ATerm Program_1 (ATerm, ATerm s_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_48 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm u_50 (ATerm))
{
  ATerm h_4;
  h_4 = t;
  {
    ATerm b_6 = NULL,d_6 = NULL;
    ATerm i_4;
    i_4 = t;
    {
      ATerm c_6 = NULL;
      t = u_50(t);
      {
        c_6 = t;
        if(((b_6 != NULL) && (b_6 != c_6)))
          _fail(c_6);
        else
          b_6 = c_6;
      }
    }
    t = i_4;
    {
      ATerm e_6 = NULL;
      e_6 = t;
      if(((d_6 != NULL) && (d_6 != e_6)))
        _fail(e_6);
      else
        d_6 = e_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_6)), not_null(b_6)));
        t = printnl_0(t);
      }
    }
  }
  t = h_4;
  return(t);
}
ATerm Continue_1 (ATerm t, ATerm j_35 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_Continue_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      {
        ATerm n_6 = NULL;
        t = not_null(l_6);
        {
          t = j_35(t);
          {
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(n_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_42 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym_Var_1))
    {
      v_6 = ATgetArgument(u_6, 0);
      {
        ATerm x_6 = NULL;
        t = not_null(v_6);
        {
          t = t_42(t);
          {
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm m_35 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_Assign_1))
    {
      f_7 = ATgetArgument(e_7, 0);
      {
        ATerm h_7 = NULL;
        t = not_null(f_7);
        {
          t = m_35(t);
          {
            h_7 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(h_7));
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
  ATerm j_4 = t;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = j_4;
      {
        ATerm k_4 = t;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = k_4;
            {
              ATerm l_4 = t;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = l_4;
                  {
                    ATerm m_4 = t;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = m_4;
                        {
                          ATerm n_4 = t;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = n_4;
                              {
                                ATerm o_4 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_4;
                                    {
                                      ATerm p_4 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, a_0, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_4;
                                          {
                                            ATerm q_4 = t;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, b_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = q_4;
                                                {
                                                  ATerm c_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
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
      }
    }
  return(t);
}
ATerm Assign_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Assign_2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      {
        ATerm r_4 = t;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL;
            t = not_null(u_7);
            {
              ATerm a_8 = NULL;
              t = o_0(t);
              {
                y_7 = t;
                {
                  t = not_null(v_7);
                  {
                    t = p_0(t);
                    {
                      a_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(y_7), not_null(a_8));
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = r_4;
            {
              ATerm e_8 = NULL;
              t = not_null(u_7);
              {
                ATerm g_8 = NULL;
                t = o_0(t);
                {
                  e_8 = t;
                  {
                    t = not_null(v_7);
                    {
                      t = p_0(t);
                      {
                        g_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(e_8), not_null(g_8));
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
ATerm Fun_2 (ATerm t, ATerm n_35 (ATerm), ATerm o_35 (ATerm))
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_Fun_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        ATerm x_8 = NULL;
        t = not_null(t_8);
        {
          ATerm z_8 = NULL;
          t = n_35(t);
          {
            x_8 = t;
            {
              t = not_null(u_8);
              {
                t = o_35(t);
                {
                  z_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Fun_2, not_null(x_8), not_null(z_8));
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
ATerm Alt_3 (ATerm t, ATerm g_35 (ATerm), ATerm h_35 (ATerm), ATerm i_35 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_Alt_3))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      m_9 = ATgetArgument(j_9, 2);
      {
        ATerm q_9 = NULL;
        t = not_null(k_9);
        {
          ATerm s_9 = NULL;
          t = g_35(t);
          {
            q_9 = t;
            {
              t = not_null(l_9);
              {
                ATerm u_9 = NULL;
                t = h_35(t);
                {
                  s_9 = t;
                  {
                    t = not_null(m_9);
                    {
                      t = i_35(t);
                      {
                        u_9 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(q_9), not_null(s_9), not_null(u_9));
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm s_4 = t;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        ATerm t_4 = t;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
            PopChoice();
          }
        else
          {
            t = t_4;
            {
              ATerm u_4 = t;
              if((PushChoice() == 0))
                {
                  t = Str_1(t, is_string_0);
                  PopChoice();
                }
              else
                {
                  t = u_4;
                  {
                    ATerm v_4 = t;
                    if((PushChoice() == 0))
                      {
                        t = Int_1(t, is_int_0);
                        PopChoice();
                      }
                    else
                      {
                        t = v_4;
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
      t = Alt_3(t, q_0, r_0, m_66);
      PopChoice();
    }
  else
    {
      t = s_4;
      {
        ATerm t_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, t_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm z_34 (ATerm), ATerm a_35 (ATerm), ATerm b_35 (ATerm), ATerm c_35 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_Case_4))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      j_10 = ATgetArgument(g_10, 2);
      k_10 = ATgetArgument(g_10, 3);
      {
        ATerm p_10 = NULL;
        t = not_null(h_10);
        {
          ATerm r_10 = NULL;
          t = z_34(t);
          {
            p_10 = t;
            {
              t = not_null(i_10);
              {
                ATerm t_10 = NULL;
                t = a_35(t);
                {
                  r_10 = t;
                  {
                    t = not_null(j_10);
                    {
                      ATerm v_10 = NULL;
                      t = b_35(t);
                      {
                        t_10 = t;
                        {
                          t = not_null(k_10);
                          {
                            t = c_35(t);
                            {
                              v_10 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(p_10), not_null(r_10), not_null(t_10), not_null(v_10));
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym_Let_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      {
        ATerm l_11 = NULL;
        t = not_null(h_11);
        {
          ATerm n_11 = NULL;
          t = k_43(t);
          {
            l_11 = t;
            {
              t = not_null(i_11);
              {
                t = l_43(t);
                {
                  n_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_11), not_null(n_11));
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
ATerm Prim_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Prim_2))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      {
        ATerm b_12 = NULL;
        t = not_null(x_11);
        {
          ATerm d_12 = NULL;
          t = p_44(t);
          {
            b_12 = t;
            {
              t = not_null(y_11);
              {
                t = q_44(t);
                {
                  d_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(b_12), not_null(d_12));
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
ATerm Where_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Where_1))
    {
      m_12 = ATgetArgument(l_12, 0);
      {
        ATerm o_12 = NULL;
        t = not_null(m_12);
        {
          t = o_44(t);
          {
            o_12 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(o_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Scope_2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      {
        ATerm b_13 = NULL;
        t = not_null(x_12);
        {
          ATerm d_13 = NULL;
          t = m_44(t);
          {
            b_13 = t;
            {
              t = not_null(y_12);
              {
                t = n_44(t);
                {
                  d_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_13), not_null(d_13));
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
ATerm Build_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Build_1))
    {
      m_13 = ATgetArgument(l_13, 0);
      {
        ATerm o_13 = NULL;
        t = not_null(m_13);
        {
          t = j_44(t);
          {
            o_13 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_42 (ATerm), ATerm y_42 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_Op_2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      {
        ATerm b_14 = NULL;
        t = not_null(x_13);
        {
          ATerm k_14 = NULL;
          t = x_42(t);
          {
            b_14 = t;
            {
              t = not_null(y_13);
              {
                t = y_42(t);
                {
                  k_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(b_14), not_null(k_14));
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
ATerm As_2 (ATerm t, ATerm j_41 (ATerm), ATerm k_41 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  s_14 :
  if(match_cons(w_14, sym_As_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm b_15 = NULL;
        t = not_null(x_14);
        {
          ATerm d_15 = NULL;
          t = j_41(t);
          {
            b_15 = t;
            {
              t = not_null(y_14);
              {
                t = k_41(t);
                {
                  d_15 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(b_15), not_null(d_15));
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
ATerm BuildDefault_1 (ATerm t, ATerm l_41 (ATerm))
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  k_15 :
  if(match_cons(l_15, sym_BuildDefault_1))
    {
      m_15 = ATgetArgument(l_15, 0);
      {
        ATerm p_15 = NULL;
        t = not_null(m_15);
        {
          t = l_41(t);
          {
            p_15 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(p_15));
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
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_Str_1))
    {
      z_15 = ATgetArgument(y_15, 0);
      {
        ATerm w_4 = t;
        if((PushChoice() == 0))
          {
            ATerm b_16 = NULL;
            t = not_null(z_15);
            {
              t = n_0(t);
              {
                b_16 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_16));
              }
            }
            PopChoice();
          }
        else
          {
            t = w_4;
            {
              ATerm e_16 = NULL;
              t = not_null(z_15);
              {
                t = n_0(t);
                {
                  e_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(e_16));
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
  ATerm x_16 = NULL;
  x_16 = t;
  t = SSL_is_real(not_null(x_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Real_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm x_4 = t;
        if((PushChoice() == 0))
          {
            ATerm q_17 = NULL;
            t = not_null(o_17);
            {
              t = m_0(t);
              {
                q_17 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(q_17));
              }
            }
            PopChoice();
          }
        else
          {
            t = x_4;
            {
              ATerm t_17 = NULL;
              t = not_null(o_17);
              {
                t = m_0(t);
                {
                  t_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_17));
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
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_Int_1))
    {
      f_18 = ATgetArgument(e_18, 0);
      {
        ATerm y_4 = t;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL;
            t = not_null(f_18);
            {
              t = l_0(t);
              {
                h_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_18));
              }
            }
            PopChoice();
          }
        else
          {
            t = y_4;
            {
              ATerm m_18 = NULL;
              t = not_null(f_18);
              {
                t = l_0(t);
                {
                  m_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(m_18));
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
  ATerm z_18 = NULL;
  z_18 = t;
  y_18 :
  if(!(match_cons(z_18, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm z_4 = t;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = z_4;
      {
        ATerm a_5 = t;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = a_5;
            {
              ATerm b_5 = t;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = b_5;
                  {
                    ATerm c_5 = t;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = c_5;
                        {
                          ATerm d_5 = t;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = d_5;
                              {
                                ATerm e_5 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, match_term_exp_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = e_5;
                                    {
                                      ATerm f_5 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, u_0, match_term_exp_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = f_5;
                                          {
                                            ATerm g_5 = t;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, v_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = g_5;
                                                {
                                                  ATerm w_0 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
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
ATerm Match_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm e_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Match_1))
    {
      g_19 = ATgetArgument(e_19, 0);
      {
        ATerm i_19 = NULL;
        t = not_null(g_19);
        {
          t = i_44(t);
          {
            i_19 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Thread_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_19 = NULL;
        t = not_null(q_19);
        {
          t = f_44(t);
          {
            s_19 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(s_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_All_1))
    {
      a_20 = ATgetArgument(z_19, 0);
      {
        ATerm c_20 = NULL;
        t = not_null(a_20);
        {
          t = e_44(t);
          {
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(c_20));
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
  ATerm l_20 = NULL,m_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Some_1))
    {
      m_20 = ATgetArgument(l_20, 0);
      {
        ATerm h_5 = t;
        if((PushChoice() == 0))
          {
            ATerm o_20 = NULL;
            t = not_null(m_20);
            {
              t = k_0(t);
              {
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(o_20));
              }
            }
            PopChoice();
          }
        else
          {
            t = h_5;
            {
              ATerm r_20 = NULL;
              t = not_null(m_20);
              {
                t = k_0(t);
                {
                  r_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(r_20));
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
ATerm One_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_One_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm d_21 = NULL;
        t = not_null(b_21);
        {
          t = c_44(t);
          {
            d_21 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(d_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,q_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_Cong_2))
    {
      m_21 = ATgetArgument(l_21, 0);
      q_21 = ATgetArgument(l_21, 1);
      {
        ATerm t_21 = NULL;
        t = not_null(m_21);
        {
          ATerm v_21 = NULL;
          t = a_44(t);
          {
            t_21 = t;
            {
              t = not_null(q_21);
              {
                t = b_44(t);
                {
                  v_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(t_21), not_null(v_21));
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
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_is_int(not_null(b_22));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym_Path_2))
    {
      j_22 = ATgetArgument(i_22, 0);
      k_22 = ATgetArgument(i_22, 1);
      {
        ATerm n_22 = NULL;
        t = not_null(j_22);
        {
          ATerm p_22 = NULL;
          t = y_43(t);
          {
            n_22 = t;
            {
              t = not_null(k_22);
              {
                t = z_43(t);
                {
                  p_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(n_22), not_null(p_22));
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
ATerm Rec_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Rec_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL;
        t = not_null(z_22);
        {
          ATerm f_23 = NULL;
          t = i_43(t);
          {
            d_23 = t;
            {
              t = not_null(a_23);
              {
                t = j_43(t);
                {
                  f_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(d_23), not_null(f_23));
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
ATerm SVar_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_SVar_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm q_23 = NULL;
        t = not_null(o_23);
        {
          t = h_43(t);
          {
            q_23 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(q_23));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_Call_2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        ATerm d_24 = NULL;
        t = not_null(z_23);
        {
          ATerm f_24 = NULL;
          t = w_43(t);
          {
            d_24 = t;
            {
              t = not_null(a_24);
              {
                t = x_43(t);
                {
                  f_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(d_24), not_null(f_24));
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
ATerm LChoice_2 (ATerm t, ATerm f_43 (ATerm), ATerm g_43 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_LChoice_2))
    {
      p_24 = ATgetArgument(o_24, 0);
      q_24 = ATgetArgument(o_24, 1);
      {
        ATerm t_24 = NULL;
        t = not_null(p_24);
        {
          ATerm v_24 = NULL;
          t = f_43(t);
          {
            t_24 = t;
            {
              t = not_null(q_24);
              {
                t = g_43(t);
                {
                  v_24 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_24), not_null(v_24));
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
ATerm Choice_2 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Choice_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        ATerm j_25 = NULL;
        t = not_null(f_25);
        {
          ATerm l_25 = NULL;
          t = d_43(t);
          {
            j_25 = t;
            {
              t = not_null(g_25);
              {
                t = e_43(t);
                {
                  l_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_25), not_null(l_25));
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
ATerm Seq_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_Seq_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm z_25 = NULL;
        t = not_null(v_25);
        {
          ATerm b_26 = NULL;
          t = b_43(t);
          {
            z_25 = t;
            {
              t = not_null(w_25);
              {
                t = c_43(t);
                {
                  b_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_25), not_null(b_26));
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
ATerm Test_1 (ATerm t, ATerm z_42 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Test_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm m_26 = NULL;
        t = not_null(k_26);
        {
          t = z_42(t);
          {
            m_26 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_26));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Not_1))
    {
      u_26 = ATgetArgument(t_26, 0);
      {
        ATerm w_26 = NULL;
        t = not_null(u_26);
        {
          t = a_43(t);
          {
            w_26 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(w_26));
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
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(!(match_cons(b_27, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  c_27 :
  if(!(match_cons(d_27, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm i_5 = t;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = i_5;
      {
        ATerm j_5 = t;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = j_5;
            {
              ATerm k_5 = t;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = k_5;
                  {
                    ATerm l_5 = t;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = l_5;
                        {
                          ATerm m_5 = t;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = m_5;
                              {
                                ATerm n_5 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_5;
                                    {
                                      ATerm o_5 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_5;
                                          {
                                            ATerm p_5 = t;
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
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_5;
                                                {
                                                  ATerm q_5 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = q_5;
                                                      {
                                                        ATerm r_5 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = r_5;
                                                            {
                                                              ATerm s_5 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_1 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, b_1);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = s_5;
                                                                  {
                                                                    ATerm t_5 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_5;
                                                                        {
                                                                          ATerm u_5 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_5;
                                                                              {
                                                                                ATerm v_5 = t;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_5;
                                                                                    {
                                                                                      ATerm w_5 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_5;
                                                                                          {
                                                                                            ATerm x_5 = t;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Match_1(t, match_term_exp_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_5;
                                                                                                {
                                                                                                  ATerm y_5 = t;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Build_1(t, term_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_5;
                                                                                                      {
                                                                                                        ATerm z_5 = t;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm c_1 (ATerm t)
                                                                                                            {
                                                                                                              t = list_1(t, is_string_0);
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Scope_2(t, c_1, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = z_5;
                                                                                                            {
                                                                                                              ATerm a_6 = t;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Where_1(t, strategy_expression_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_6;
                                                                                                                  {
                                                                                                                    ATerm f_6 = t;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm d_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, term_expression_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Prim_2(t, is_string_0, d_1);
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = f_6;
                                                                                                                        {
                                                                                                                          ATerm g_6 = t;
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
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = g_6;
                                                                                                                              {
                                                                                                                                ATerm h_6 = t;
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
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = h_6;
                                                                                                                                    {
                                                                                                                                      ATerm i_6 = t;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm l_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, is_string_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, l_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_6;
                                                                                                                                          {
                                                                                                                                            ATerm m_6 = t;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm m_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, is_string_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, m_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = m_6;
                                                                                                                                                {
                                                                                                                                                  ATerm o_6 = t;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Continue_1(t, is_string_0);
                                                                                                                                                      PopChoice();
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = o_6;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
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
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_27 = NULL;
  g_27 = t;
  t = SSL_is_string(not_null(g_27));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym_VarDec_2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      {
        ATerm s_27 = NULL;
        t = not_null(o_27);
        {
          ATerm u_27 = NULL;
          t = p_43(t);
          {
            s_27 = t;
            {
              t = not_null(p_27);
              {
                t = q_43(t);
                {
                  u_27 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_27), not_null(u_27));
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
ATerm SDef_3 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_SDef_3))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      h_28 = ATgetArgument(e_28, 2);
      {
        ATerm l_28 = NULL;
        t = not_null(f_28);
        {
          ATerm n_28 = NULL;
          t = m_43(t);
          {
            l_28 = t;
            {
              t = not_null(g_28);
              {
                ATerm p_28 = NULL;
                t = n_43(t);
                {
                  n_28 = t;
                  {
                    t = not_null(h_28);
                    {
                      t = o_43(t);
                      {
                        p_28 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_28), not_null(n_28), not_null(p_28));
                      }
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
  ATerm p_6 = t;
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
      PopChoice();
    }
  else
    {
      t = p_6;
      {
        ATerm q_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, q_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm v_28 (ATerm t)
  {
    ATerm q_6 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = q_6;
        t = Cons_2(t, e_59, v_28);
      }
    return(t);
  }
  t = v_28(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_42 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Strategies_1))
    {
      a_29 = ATgetArgument(z_28, 0);
      {
        ATerm c_29 = NULL;
        t = not_null(a_29);
        {
          t = h_42(t);
          {
            c_29 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_42 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_Specification_1))
    {
      k_29 = ATgetArgument(j_29, 0);
      {
        ATerm m_29 = NULL;
        t = not_null(k_29);
        {
          t = j_42(t);
          {
            m_29 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_29));
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
  ATerm r_6 = t;
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
      PopChoice();
    }
  else
    {
      t = r_6;
      {
        ATerm v_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, v_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_33 (ATerm), ATerm q_33 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym__2))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      {
        ATerm z_29 = NULL;
        t = not_null(v_29);
        {
          ATerm b_30 = NULL;
          t = p_33(t);
          {
            z_29 = t;
            {
              t = not_null(w_29);
              {
                t = q_33(t);
                {
                  b_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(b_30));
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
  ATerm i_30 = NULL;
  ATerm s_6;
  s_6 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm j_30 = NULL,k_30 = NULL;
      j_30 = t;
      h_30 :
      if(match_cons(j_30, sym_Program_1))
        {
          k_30 = ATgetArgument(j_30, 0);
          if(((i_30 != NULL) && (i_30 != k_30)))
            _fail(k_30);
          else
            i_30 = k_30;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(i_30)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = s_6;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm y_1 (ATerm t)
    {
      ATerm w_6 = t;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            ATerm t_30 = NULL;
            t_30 = t;
            m_30 :
            if(!(match_cons(t_30, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_1);
          PopChoice();
          _fail(t);
        }
      else
        t = w_6;
      return(t);
    }
    t = _2(t, y_1, _id);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          ATerm u_30 = NULL,v_30 = NULL;
          u_30 = t;
          o_30 :
          if(match_cons(u_30, sym_Runtime_1))
            {
              v_30 = ATgetArgument(u_30, 0);
              if(((s_30 != NULL) && (s_30 != v_30)))
                _fail(v_30);
              else
                s_30 = v_30;
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
            ATerm w_30 = NULL,x_30 = NULL;
            w_30 = t;
            q_30 :
            if(match_cons(w_30, sym_Program_1))
              {
                x_30 = ATgetArgument(w_30, 0);
                if(((r_30 != NULL) && (r_30 != x_30)))
                  _fail(x_30);
                else
                  r_30 = x_30;
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
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(s_30)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(r_30)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, x_1);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__2))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      t = SSL_WriteToTextFile(not_null(d_31), not_null(e_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym__2))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      t = SSL_WriteToBinaryFile(not_null(l_31), not_null(m_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_31 = NULL;
  ATerm y_6;
  y_6 = t;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm z_6 = t;
      if((PushChoice() == 0))
        {
          ATerm f_2 (ATerm t)
          {
            ATerm v_31 = NULL,w_31 = NULL;
            v_31 = t;
            r_31 :
            if(match_cons(v_31, sym_Output_1))
              {
                w_31 = ATgetArgument(v_31, 0);
                if(((u_31 != NULL) && (u_31 != w_31)))
                  _fail(w_31);
                else
                  u_31 = w_31;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_2);
          PopChoice();
        }
      else
        {
          t = z_6;
          {
            ATerm x_31 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              x_31 = t;
              if(((u_31 != NULL) && (u_31 != x_31)))
                _fail(x_31);
              else
                u_31 = x_31;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_2, _id);
  }
  t = y_6;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm h_2 (ATerm t)
      {
        t = not_null(u_31);
        return(t);
      }
      t = split_2(t, h_2, _id);
      return(t);
    }
    t = _2(t, _id, g_2);
    {
      ATerm a_7 = t;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm y_31 = NULL;
              y_31 = t;
              t_31 :
              if(!(match_cons(y_31, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, j_2);
            return(t);
          }
          t = _2(t, i_2, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = a_7;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_49 (ATerm))
{
  ATerm e_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  ATerm b_7;
  b_7 = t;
  t = dtime_0(t);
  t = b_7;
  {
    t = z_49(t);
    {
      ATerm c_7;
      c_7 = t;
      {
        ATerm f_32 = NULL;
        t = dtime_0(t);
        {
          f_32 = t;
          if(((e_32 != NULL) && (e_32 != f_32)))
            _fail(f_32);
          else
            e_32 = f_32;
        }
      }
      t = c_7;
      {
        g_32 = t;
        d_32 :
        if(match_cons(g_32, sym__2))
          {
            h_32 = ATgetArgument(g_32, 0);
            i_32 = ATgetArgument(g_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_32))), not_null(i_32));
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
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_ReadFromFile(not_null(q_32));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm x_32 = NULL,z_32 = NULL;
  ATerm g_7;
  g_7 = t;
  {
    ATerm y_32 = NULL;
    t = q_52(t);
    {
      y_32 = t;
      if(((x_32 != NULL) && (x_32 != y_32)))
        _fail(y_32);
      else
        x_32 = y_32;
    }
  }
  t = g_7;
  {
    ATerm a_33 = NULL;
    t = r_52(t);
    {
      a_33 = t;
      if(((z_32 != NULL) && (z_32 != a_33)))
        _fail(a_33);
      else
        z_32 = a_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_32), not_null(z_32));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_33 = NULL;
  ATerm i_7;
  i_7 = t;
  {
    ATerm j_7 = t;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm h_33 = NULL,i_33 = NULL;
          h_33 = t;
          e_33 :
          if(match_cons(h_33, sym_Input_1))
            {
              i_33 = ATgetArgument(h_33, 0);
              if(((g_33 != NULL) && (g_33 != i_33)))
                _fail(i_33);
              else
                g_33 = i_33;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_2);
        PopChoice();
      }
    else
      {
        t = j_7;
        {
          ATerm j_33 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            j_33 = t;
            if(((g_33 != NULL) && (g_33 != j_33)))
              _fail(j_33);
            else
              g_33 = j_33;
          }
        }
      }
  }
  t = i_7;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(g_33);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  m_33 :
  if(!(match_cons(n_33, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm k_7 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = k_7;
        {
          ATerm l_7 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = l_7;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_2);
  t = y_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_table_create(not_null(r_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  {
    ATerm m_7;
    m_7 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(v_33));
          t = table_put_0(t);
        }
      }
    }
    t = m_7;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  d_34 = t;
  b_34 :
  if(match_string(d_34, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(d_34) == AT_LIST) && ((ATermList) d_34 != ATempty)))
        {
          e_34 = ATgetFirst((ATermList) d_34);
          f_34 = (ATerm) ATgetNext((ATermList) d_34);
          c_34 :
          if(((ATgetType(f_34) == AT_LIST) && ((ATermList) f_34 != ATempty)))
            {
              g_34 = ATgetFirst((ATermList) f_34);
              h_34 = (ATerm) ATgetNext((ATermList) f_34);
              {
                ATerm l_34 = NULL;
                ATerm n_7;
                n_7 = t;
                {
                  t = not_null(e_34);
                  t = h_0(t);
                }
                t = n_7;
                {
                  ATerm m_34 = NULL;
                  t = not_null(g_34);
                  {
                    t = i_0(t);
                    {
                      m_34 = t;
                      if(((l_34 != NULL) && (l_34 != m_34)))
                        _fail(m_34);
                      else
                        l_34 = m_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), not_null(l_34));
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
  ATerm o_7 = t;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm f_35 = NULL;
        f_35 = t;
        q_34 :
        if(!(match_string(f_35, "-S")))
          {
            if(!(match_string(f_35, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      PopChoice();
    }
  else
    {
      t = o_7;
      {
        ATerm p_7 = t;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm k_35 = NULL;
              k_35 = t;
              r_34 :
              if(!(match_string(k_35, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, q_2, r_2, s_2);
            PopChoice();
          }
        else
          {
            t = p_7;
            {
              ATerm q_7 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm l_35 = NULL;
                    l_35 = t;
                    s_34 :
                    if(!(match_string(l_35, "-v")))
                      {
                        if(!(match_string(l_35, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  PopChoice();
                }
              else
                {
                  t = q_7;
                  {
                    ATerm r_7 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm p_35 = NULL;
                          p_35 = t;
                          t_34 :
                          if(!(match_string(p_35, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_2 (ATerm t)
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
                        ATerm y_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, x_2, y_2);
                        PopChoice();
                      }
                    else
                      {
                        t = r_7;
                        {
                          ATerm w_7 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm z_2 (ATerm t)
                              {
                                ATerm u_35 = NULL;
                                u_35 = t;
                                v_34 :
                                if(!(match_string(u_35, "-i")))
                                  {
                                    if(!(match_string(u_35, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_3 (ATerm t)
                              {
                                ATerm v_35 = NULL;
                                ATerm w_35 = NULL;
                                w_35 = t;
                                if(((v_35 != NULL) && (v_35 != w_35)))
                                  _fail(w_35);
                                else
                                  v_35 = w_35;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_35));
                                return(t);
                              }
                              ATerm b_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, z_2, a_3, b_3);
                              PopChoice();
                            }
                          else
                            {
                              t = w_7;
                              {
                                ATerm x_7 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      ATerm x_35 = NULL;
                                      x_35 = t;
                                      x_34 :
                                      if(!(match_string(x_35, "-o")))
                                        {
                                          if(!(match_string(x_35, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm y_35 = NULL;
                                      ATerm z_35 = NULL;
                                      z_35 = t;
                                      if(((y_35 != NULL) && (y_35 != z_35)))
                                        _fail(z_35);
                                      else
                                        y_35 = z_35;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_35));
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_3, d_3, e_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_7;
                                    {
                                      ATerm z_7 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_3 (ATerm t)
                                          {
                                            ATerm a_36 = NULL;
                                            a_36 = t;
                                            d_35 :
                                            if(!(match_string(a_36, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm h_3 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, f_3, g_3, h_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_7;
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              ATerm b_36 = NULL;
                                              b_36 = t;
                                              e_35 :
                                              if(!(match_string(b_36, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm k_3 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
ATerm at_end_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm r_36 (ATerm t)
  {
    ATerm b_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_36);
        PopChoice();
      }
    else
      {
        t = b_8;
        {
          t = Nil_0(t);
          t = q_59(t);
        }
      }
    return(t);
  }
  t = r_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_8 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = c_8;
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
                ATerm l_3 (ATerm t)
                {
                  t = not_null(w_36);
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
ATerm long_description_1 (ATerm t, ATerm f_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm f_37 (ATerm t)
  {
    ATerm d_8 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = d_8;
        t = Cons_2(t, c_59, f_37);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  m_37 = t;
  j_37 :
  if(((ATgetType(m_37) == AT_LIST) && ((ATermList) m_37 != ATempty)))
    {
      k_37 = ATgetFirst((ATermList) m_37);
      l_37 = (ATerm) ATgetNext((ATermList) m_37);
      {
        t = not_null(l_37);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm p_37 = NULL;
            ATerm q_37 = NULL;
            t = g_0(t);
            {
              q_37 = t;
              if(((p_37 != NULL) && (p_37 != q_37)))
                _fail(q_37);
              else
                p_37 = q_37;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(p_37)), not_null(k_37));
            return(t);
          }
          t = reverse_1(t, m_3);
        }
      }
    }
  else
    {
      if(((ATermList) m_37 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
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
ATerm short_description_1 (ATerm t, ATerm e_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_35 (ATerm))
{
  ATerm x_37 = NULL,y_37 = NULL;
  x_37 = t;
  w_37 :
  if(match_cons(x_37, sym_Program_1))
    {
      y_37 = ATgetArgument(x_37, 0);
      {
        ATerm a_38 = NULL;
        t = not_null(y_37);
        {
          t = s_35(t);
          {
            a_38 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_38));
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
  ATerm i_38 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm j_38 = NULL;
      j_38 = t;
      if(((i_38 != NULL) && (i_38 != j_38)))
        _fail(j_38);
      else
        i_38 = j_38;
      return(t);
    }
    t = Program_1(t, p_3);
    return(t);
  }
  t = option_defined_1(t, o_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm k_38 = NULL;
      ATerm l_38 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm r_3 (ATerm t)
        {
          t = not_null(i_38);
          return(t);
        }
        t = short_description_1(t, r_3);
        {
          t = concat_strings_0(t);
          {
            l_38 = t;
            if(((k_38 != NULL) && (k_38 != l_38)))
              _fail(l_38);
            else
              k_38 = l_38;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(k_38)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm m_38 = NULL;
                  m_38 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_38)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm o_38 = NULL;
                    ATerm p_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(i_38);
                        return(t);
                      }
                      t = long_description_1(t, u_3);
                      {
                        t = concat_strings_0(t);
                        {
                          p_38 = t;
                          if(((o_38 != NULL) && (o_38 != p_38)))
                            _fail(p_38);
                          else
                            o_38 = p_38;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
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
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym__2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      {
        ATerm f_8;
        f_8 = t;
        t = SSL_printnl(not_null(x_38), not_null(y_38));
        t = f_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_35 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_Undefined_1))
    {
      g_39 = ATgetArgument(f_39, 0);
      {
        ATerm i_39 = NULL;
        t = not_null(g_39);
        {
          t = t_35(t);
          {
            i_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_39));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm m_39 (ATerm t)
  {
    ATerm h_8 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_59, _id);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = Cons_2(t, _id, m_39);
      }
    return(t);
  }
  t = m_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_49 (ATerm))
{
  t = fetch_1(t, d_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  n_39 :
  if(!(match_cons(o_39, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm i_8 = t;
  if((PushChoice() == 0))
    {
      t = w_65(t);
      PopChoice();
    }
  else
    {
      t = i_8;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym__2))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      t = SSL_table_get(not_null(s_39), not_null(t_39));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym__3))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      d_40 = ATgetArgument(a_40, 2);
      {
        ATerm j_8;
        j_8 = t;
        {
          ATerm h_40 = NULL;
          ATerm i_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_40), not_null(c_40));
          {
            ATerm k_8 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = k_8;
                t = (ATerm) ATempty;
              }
            {
              i_40 = t;
              if(((h_40 != NULL) && (h_40 != i_40)))
                _fail(i_40);
              else
                h_40 = i_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_40), not_null(c_40), (ATerm) ATinsert(CheckATermList(not_null(h_40)), not_null(d_40)));
            t = table_put_0(t);
          }
        }
        t = j_8;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_48 (ATerm))
{
  ATerm m_40 = NULL;
  ATerm n_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = j_48(t);
    {
      n_40 = t;
      if(((m_40 != NULL) && (m_40 != n_40)))
        _fail(n_40);
      else
        m_40 = n_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(m_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_string(t_40, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(t_40) == AT_LIST) && ((ATermList) t_40 != ATempty)))
        {
          u_40 = ATgetFirst((ATermList) t_40);
          v_40 = (ATerm) ATgetNext((ATermList) t_40);
          {
            ATerm y_40 = NULL;
            ATerm l_8;
            l_8 = t;
            {
              t = not_null(u_40);
              t = d_0(t);
            }
            t = l_8;
            {
              ATerm z_40 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  z_40 = t;
                  if(((y_40 != NULL) && (y_40 != z_40)))
                    _fail(z_40);
                  else
                    y_40 = z_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_40)), not_null(y_40));
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
    ATerm e_41 = NULL;
    e_41 = t;
    d_41 :
    if(!(match_string(e_41, "--help")))
      {
        if(!(match_string(e_41, "-h")))
          {
            if(!(match_string(e_41, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,m_41 = NULL;
  h_41 = t;
  g_41 :
  if(((ATgetType(h_41) == AT_LIST) && ((ATermList) h_41 != ATempty)))
    {
      i_41 = ATgetFirst((ATermList) h_41);
      m_41 = (ATerm) ATgetNext((ATermList) h_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_41)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm))
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t_41 :
  if(((ATgetType(u_41) == AT_LIST) && ((ATermList) u_41 != ATempty)))
    {
      v_41 = ATgetFirst((ATermList) u_41);
      w_41 = (ATerm) ATgetNext((ATermList) u_41);
      {
        ATerm z_41 = NULL;
        t = not_null(v_41);
        {
          ATerm b_42 = NULL;
          t = t_44(t);
          {
            z_41 = t;
            {
              t = not_null(w_41);
              {
                t = u_44(t);
                {
                  b_42 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_42)), not_null(z_41));
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
  ATerm i_42 = NULL;
  i_42 = t;
  g_42 :
  if(((ATermList) i_42 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm m_8;
  m_8 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = h_48(t);
      return(t);
    }
    t = try_1(t, y_3);
  }
  t = m_8;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm l_42 = NULL;
      l_42 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_42));
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm n_8 = t;
      if((PushChoice() == 0))
        {
          ATerm o_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = o_8;
              {
                t = h_48(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          PopChoice();
        }
      else
        {
          t = n_8;
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
  ATerm r_42 = NULL,s_42 = NULL,u_42 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm v_42 = NULL,w_42 = NULL,r_43 = NULL,s_43 = NULL;
    v_42 = t;
    q_42 :
    if(match_cons(v_42, sym__3))
      {
        w_42 = ATgetArgument(v_42, 0);
        r_43 = ATgetArgument(v_42, 1);
        s_43 = ATgetArgument(v_42, 2);
        {
          if(((r_42 != NULL) && (r_42 != w_42)))
            _fail(w_42);
          else
            r_42 = w_42;
          {
            if(((s_42 != NULL) && (s_42 != r_43)))
              _fail(r_43);
            else
              s_42 = r_43;
            {
              if(((u_42 != NULL) && (u_42 != s_43)))
                _fail(s_43);
              else
                u_42 = s_43;
              t = SSL_table_put(not_null(r_42), not_null(s_42), not_null(u_42));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = p_8;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm v_43 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = q_8;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm v_8 = t;
      if((PushChoice() == 0))
        {
          t = g_48(t);
          PopChoice();
        }
      else
        {
          t = v_8;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm w_8 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = w_8;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm d_44 = NULL;
                  d_44 = t;
                  if(((v_43 != NULL) && (v_43 != d_44)))
                    _fail(d_44);
                  else
                    v_43 = d_44;
                  return(t);
                }
                t = Undefined_1(t, e_4);
                return(t);
              }
              t = option_defined_1(t, d_4);
              {
                ATerm y_8;
                y_8 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_43)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = y_8;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
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
        ATerm a_9;
        a_9 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = a_9;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm b_9 = t;
    if((PushChoice() == 0))
      {
        t = o_49(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_4);
  {
    t = store_options_0(t);
    {
      ATerm c_9 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, p_49);
          PopChoice();
        }
      else
        {
          t = c_9;
          {
            ATerm d_9 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, n_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = d_9;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  t = iowrap_3(t, i_49, j_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, f_49);
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
