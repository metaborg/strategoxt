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
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm debug_1 (ATerm, ATerm q_50 (ATerm));
ATerm Var_1 (ATerm, ATerm r_42 (ATerm));
ATerm Assign_1 (ATerm, ATerm x_39 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm j_41 (ATerm));
ATerm Op_2 (ATerm, ATerm v_42 (ATerm), ATerm w_42 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm u_39 (ATerm));
ATerm Alt_3 (ATerm, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm));
ATerm Case_4 (ATerm, ATerm k_39 (ATerm), ATerm l_39 (ATerm), ATerm m_39 (ATerm), ATerm n_39 (ATerm));
ATerm Let_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm Prim_2 (ATerm, ATerm n_44 (ATerm), ATerm o_44 (ATerm));
ATerm Where_1 (ATerm, ATerm m_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm Build_1 (ATerm, ATerm h_44 (ATerm));
ATerm Thread_1 (ATerm, ATerm d_44 (ATerm));
ATerm All_1 (ATerm, ATerm c_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm a_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm Path_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm SVar_1 (ATerm, ATerm f_43 (ATerm));
ATerm Call_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm z_42 (ATerm), ATerm a_43 (ATerm));
ATerm Test_1 (ATerm, ATerm x_42 (ATerm));
ATerm Not_1 (ATerm, ATerm y_42 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm q_43 (ATerm), ATerm r_43 (ATerm), ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm), ATerm m_43 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_59 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm n_33 (ATerm), ATerm o_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_48 (ATerm));
ATerm map_1 (ATerm, ATerm y_58 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_48 (ATerm));
ATerm Program_1 (ATerm, ATerm w_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_34 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_48 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_49 (ATerm), ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_49 (ATerm), ATerm f_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm r_3;
  r_3 = t;
  {
    ATerm r_5 = NULL,t_5 = NULL;
    ATerm s_3;
    s_3 = t;
    {
      ATerm s_5 = NULL;
      t = q_50(t);
      {
        s_5 = t;
        if(((r_5 != NULL) && (r_5 != s_5)))
          _fail(s_5);
        else
          r_5 = s_5;
      }
    }
    t = s_3;
    {
      ATerm u_5 = NULL;
      u_5 = t;
      if(((t_5 != NULL) && (t_5 != u_5)))
        _fail(u_5);
      else
        t_5 = u_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_5)), not_null(r_5)));
        t = printnl_0(t);
      }
    }
  }
  t = r_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_42 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_Var_1))
    {
      b_6 = ATgetArgument(a_6, 0);
      {
        ATerm d_6 = NULL;
        t = not_null(b_6);
        {
          t = r_42(t);
          {
            d_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm x_39 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_Assign_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      {
        ATerm n_6 = NULL;
        t = not_null(l_6);
        {
          t = x_39(t);
          {
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(n_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm j_41 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym_BuildDefault_1))
    {
      v_6 = ATgetArgument(u_6, 0);
      {
        ATerm x_6 = NULL;
        t = not_null(v_6);
        {
          t = j_41(t);
          {
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(x_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm v_42 (ATerm), ATerm w_42 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_Op_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        ATerm k_7 = NULL;
        t = not_null(g_7);
        {
          ATerm m_7 = NULL;
          t = v_42(t);
          {
            k_7 = t;
            {
              t = not_null(h_7);
              {
                t = w_42(t);
                {
                  m_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(k_7), not_null(m_7));
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
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Str_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm t_3 = t;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL;
            t = not_null(x_7);
            {
              t = p_0(t);
              {
                z_7 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(z_7));
              }
            }
            PopChoice();
          }
        else
          {
            t = t_3;
            {
              ATerm c_8 = NULL;
              t = not_null(x_7);
              {
                t = p_0(t);
                {
                  c_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(c_8));
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
  ATerm j_8 = NULL;
  j_8 = t;
  t = SSL_is_real(not_null(j_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Real_1))
    {
      s_8 = ATgetArgument(r_8, 0);
      {
        ATerm u_3 = t;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = not_null(s_8);
            {
              t = o_0(t);
              {
                u_8 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(u_8));
              }
            }
            PopChoice();
          }
        else
          {
            t = u_3;
            {
              ATerm x_8 = NULL;
              t = not_null(s_8);
              {
                t = o_0(t);
                {
                  x_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(x_8));
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
  ATerm i_9 = NULL,j_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Int_1))
    {
      j_9 = ATgetArgument(i_9, 0);
      {
        ATerm v_3 = t;
        if((PushChoice() == 0))
          {
            ATerm l_9 = NULL;
            t = not_null(j_9);
            {
              t = n_0(t);
              {
                l_9 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(l_9));
              }
            }
            PopChoice();
          }
        else
          {
            t = v_3;
            {
              ATerm o_9 = NULL;
              t = not_null(j_9);
              {
                t = n_0(t);
                {
                  o_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(o_9));
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
  ATerm v_9 = NULL;
  v_9 = t;
  u_9 :
  if(!(match_cons(v_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm w_3 = t;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      PopChoice();
    }
  else
    {
      t = w_3;
      {
        ATerm x_3 = t;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            PopChoice();
          }
        else
          {
            t = x_3;
            {
              ATerm y_3 = t;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  PopChoice();
                }
              else
                {
                  t = y_3;
                  {
                    ATerm z_3 = t;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        PopChoice();
                      }
                    else
                      {
                        t = z_3;
                        {
                          ATerm a_4 = t;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              PopChoice();
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm b_4 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, a_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_4;
                                    {
                                      ATerm c_4 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_4;
                                          {
                                            ATerm b_0 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
                                              return(t);
                                            }
                                            t = debug_1(t, b_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Assign_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        ATerm d_4 = t;
        if((PushChoice() == 0))
          {
            ATerm j_10 = NULL;
            t = not_null(f_10);
            {
              ATerm l_10 = NULL;
              t = l_0(t);
              {
                j_10 = t;
                {
                  t = not_null(g_10);
                  {
                    t = m_0(t);
                    {
                      l_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(j_10), not_null(l_10));
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = d_4;
            {
              ATerm p_10 = NULL;
              t = not_null(f_10);
              {
                ATerm r_10 = NULL;
                t = l_0(t);
                {
                  p_10 = t;
                  {
                    t = not_null(g_10);
                    {
                      t = m_0(t);
                      {
                        r_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(p_10), not_null(r_10));
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
ATerm Continue_1 (ATerm t, ATerm u_39 (ATerm))
{
  ATerm c_11 = NULL,d_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym_Continue_1))
    {
      d_11 = ATgetArgument(c_11, 0);
      {
        ATerm f_11 = NULL;
        t = not_null(d_11);
        {
          t = u_39(t);
          {
            f_11 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(f_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Alt_3))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      r_11 = ATgetArgument(o_11, 2);
      {
        ATerm v_11 = NULL;
        t = not_null(p_11);
        {
          ATerm x_11 = NULL;
          t = r_39(t);
          {
            v_11 = t;
            {
              t = not_null(q_11);
              {
                ATerm z_11 = NULL;
                t = s_39(t);
                {
                  x_11 = t;
                  {
                    t = not_null(r_11);
                    {
                      t = t_39(t);
                      {
                        z_11 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(v_11), not_null(x_11), not_null(z_11));
                      }
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
ATerm Case_4 (ATerm t, ATerm k_39 (ATerm), ATerm l_39 (ATerm), ATerm m_39 (ATerm), ATerm n_39 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_Case_4))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      o_12 = ATgetArgument(l_12, 2);
      p_12 = ATgetArgument(l_12, 3);
      {
        ATerm u_12 = NULL;
        t = not_null(m_12);
        {
          ATerm w_12 = NULL;
          t = k_39(t);
          {
            u_12 = t;
            {
              t = not_null(n_12);
              {
                ATerm y_12 = NULL;
                t = l_39(t);
                {
                  w_12 = t;
                  {
                    t = not_null(o_12);
                    {
                      ATerm a_13 = NULL;
                      t = m_39(t);
                      {
                        y_12 = t;
                        {
                          t = not_null(p_12);
                          {
                            t = n_39(t);
                            {
                              a_13 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(u_12), not_null(w_12), not_null(y_12), not_null(a_13));
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Let_2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        ATerm q_13 = NULL;
        t = not_null(m_13);
        {
          ATerm s_13 = NULL;
          t = i_43(t);
          {
            q_13 = t;
            {
              t = not_null(n_13);
              {
                t = j_43(t);
                {
                  s_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_13), not_null(s_13));
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
ATerm Prim_2 (ATerm t, ATerm n_44 (ATerm), ATerm o_44 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  a_14 :
  if(match_cons(i_14, sym_Prim_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm n_14 = NULL;
        t = not_null(j_14);
        {
          ATerm p_14 = NULL;
          t = n_44(t);
          {
            n_14 = t;
            {
              t = not_null(k_14);
              {
                t = o_44(t);
                {
                  p_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_14), not_null(p_14));
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
ATerm Where_1 (ATerm t, ATerm m_44 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_Where_1))
    {
      b_15 = ATgetArgument(a_15, 0);
      {
        ATerm d_15 = NULL;
        t = not_null(b_15);
        {
          t = m_44(t);
          {
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_15));
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
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_is_int(not_null(i_15));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_Scope_2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm v_15 = NULL;
        t = not_null(r_15);
        {
          ATerm x_15 = NULL;
          t = k_44(t);
          {
            v_15 = t;
            {
              t = not_null(s_15);
              {
                t = l_44(t);
                {
                  x_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_15), not_null(x_15));
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
ATerm Build_1 (ATerm t, ATerm h_44 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  e_16 :
  if(match_cons(o_16, sym_Build_1))
    {
      p_16 = ATgetArgument(o_16, 0);
      {
        ATerm r_16 = NULL;
        t = not_null(p_16);
        {
          t = h_44(t);
          {
            r_16 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_16));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm d_44 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_Thread_1))
    {
      k_17 = ATgetArgument(j_17, 0);
      {
        ATerm m_17 = NULL;
        t = not_null(k_17);
        {
          t = d_44(t);
          {
            m_17 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(m_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_All_1))
    {
      u_17 = ATgetArgument(t_17, 0);
      {
        ATerm w_17 = NULL;
        t = not_null(u_17);
        {
          t = c_44(t);
          {
            w_17 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(w_17));
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
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Some_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm e_4 = t;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL;
            t = not_null(g_18);
            {
              t = k_0(t);
              {
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(k_18));
              }
            }
            PopChoice();
          }
        else
          {
            t = e_4;
            {
              ATerm n_18 = NULL;
              t = not_null(g_18);
              {
                t = k_0(t);
                {
                  n_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(n_18));
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
ATerm One_1 (ATerm t, ATerm a_44 (ATerm))
{
  ATerm c_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_One_1))
    {
      e_19 = ATgetArgument(c_19, 0);
      {
        ATerm g_19 = NULL;
        t = not_null(e_19);
        {
          t = a_44(t);
          {
            g_19 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(g_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Cong_2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      {
        ATerm t_19 = NULL;
        t = not_null(p_19);
        {
          ATerm v_19 = NULL;
          t = y_43(t);
          {
            t_19 = t;
            {
              t = not_null(q_19);
              {
                t = z_43(t);
                {
                  v_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(t_19), not_null(v_19));
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
ATerm Path_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_Path_2))
    {
      f_20 = ATgetArgument(e_20, 0);
      g_20 = ATgetArgument(e_20, 1);
      {
        ATerm j_20 = NULL;
        t = not_null(f_20);
        {
          ATerm l_20 = NULL;
          t = w_43(t);
          {
            j_20 = t;
            {
              t = not_null(g_20);
              {
                t = x_43(t);
                {
                  l_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(j_20), not_null(l_20));
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
ATerm Rec_2 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym_Rec_2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        ATerm z_20 = NULL;
        t = not_null(v_20);
        {
          ATerm b_21 = NULL;
          t = g_43(t);
          {
            z_20 = t;
            {
              t = not_null(w_20);
              {
                t = h_43(t);
                {
                  b_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(z_20), not_null(b_21));
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
ATerm SVar_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_SVar_1))
    {
      k_21 = ATgetArgument(j_21, 0);
      {
        ATerm p_21 = NULL;
        t = not_null(k_21);
        {
          t = f_43(t);
          {
            p_21 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(p_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym_Call_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      {
        ATerm c_22 = NULL;
        t = not_null(y_21);
        {
          ATerm e_22 = NULL;
          t = u_43(t);
          {
            c_22 = t;
            {
              t = not_null(z_21);
              {
                t = v_43(t);
                {
                  e_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(c_22), not_null(e_22));
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
ATerm LChoice_2 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_LChoice_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm s_22 = NULL;
        t = not_null(o_22);
        {
          ATerm u_22 = NULL;
          t = d_43(t);
          {
            s_22 = t;
            {
              t = not_null(p_22);
              {
                t = e_43(t);
                {
                  u_22 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_22), not_null(u_22));
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
ATerm Choice_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_Choice_2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      {
        ATerm i_23 = NULL;
        t = not_null(e_23);
        {
          ATerm k_23 = NULL;
          t = b_43(t);
          {
            i_23 = t;
            {
              t = not_null(f_23);
              {
                t = c_43(t);
                {
                  k_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_23), not_null(k_23));
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
ATerm Seq_2 (ATerm t, ATerm z_42 (ATerm), ATerm a_43 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_Seq_2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm y_23 = NULL;
        t = not_null(u_23);
        {
          ATerm a_24 = NULL;
          t = z_42(t);
          {
            y_23 = t;
            {
              t = not_null(v_23);
              {
                t = a_43(t);
                {
                  a_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_23), not_null(a_24));
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
ATerm Test_1 (ATerm t, ATerm x_42 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_Test_1))
    {
      j_24 = ATgetArgument(i_24, 0);
      {
        ATerm l_24 = NULL;
        t = not_null(j_24);
        {
          t = x_42(t);
          {
            l_24 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_24));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_Not_1))
    {
      t_24 = ATgetArgument(s_24, 0);
      {
        ATerm v_24 = NULL;
        t = not_null(t_24);
        {
          t = y_42(t);
          {
            v_24 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(v_24));
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
  ATerm a_25 = NULL;
  a_25 = t;
  z_24 :
  if(!(match_cons(a_25, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  b_25 :
  if(!(match_cons(c_25, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm f_4 = t;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = f_4;
      {
        ATerm g_4 = t;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = g_4;
            {
              ATerm h_4 = t;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  PopChoice();
                }
              else
                {
                  t = h_4;
                  {
                    ATerm i_4 = t;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        PopChoice();
                      }
                    else
                      {
                        t = i_4;
                        {
                          ATerm j_4 = t;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              PopChoice();
                            }
                          else
                            {
                              t = j_4;
                              {
                                ATerm k_4 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_4;
                                    {
                                      ATerm l_4 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_4;
                                          {
                                            ATerm m_4 = t;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = SVar_1(t, is_string_0);
                                                  return(t);
                                                }
                                                t = Call_2(t, c_0, Nil_0);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_4;
                                                {
                                                  ATerm n_4 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Rec_2(t, is_string_0, strategy_expression_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_4;
                                                      {
                                                        ATerm o_4 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Path_2(t, is_int_0, strategy_expression_0);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = o_4;
                                                            {
                                                              ATerm p_4 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Cong_2(t, is_string_0, q_0);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_4;
                                                                  {
                                                                    ATerm q_4 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = One_1(t, strategy_expression_0);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_4;
                                                                        {
                                                                          ATerm r_4 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Some_1(t, strategy_expression_0);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_4;
                                                                              {
                                                                                ATerm s_4 = t;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = All_1(t, strategy_expression_0);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_4;
                                                                                    {
                                                                                      ATerm t_4 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Thread_1(t, strategy_expression_0);
                                                                                          PopChoice();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_4;
                                                                                          {
                                                                                            ATerm u_4 = t;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Build_1(t, term_expression_0);
                                                                                                PopChoice();
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_4;
                                                                                                {
                                                                                                  ATerm v_4 = t;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm r_0 (ATerm t)
                                                                                                      {
                                                                                                        ATerm s_0 (ATerm t)
                                                                                                        {
                                                                                                          ATerm w_4 = t;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = is_string_0(t);
                                                                                                              PopChoice();
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = w_4;
                                                                                                              t = list_1(t, is_int_0);
                                                                                                            }
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = list_1(t, s_0);
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                      PopChoice();
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_4;
                                                                                                      {
                                                                                                        ATerm x_4 = t;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Where_1(t, strategy_expression_0);
                                                                                                            PopChoice();
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_4;
                                                                                                            {
                                                                                                              ATerm y_4 = t;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm t_0 (ATerm t)
                                                                                                                  {
                                                                                                                    t = list_1(t, term_expression_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Prim_2(t, is_string_0, t_0);
                                                                                                                  PopChoice();
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_4;
                                                                                                                  {
                                                                                                                    ATerm z_4 = t;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm u_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm v_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm a_5 = t;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                PopChoice();
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = a_5;
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
                                                                                                                        PopChoice();
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = z_4;
                                                                                                                        {
                                                                                                                          ATerm b_5 = t;
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
                                                                                                                              PopChoice();
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_5;
                                                                                                                              {
                                                                                                                                ATerm c_5 = t;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Continue_1(t, is_string_0);
                                                                                                                                    PopChoice();
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = c_5;
                                                                                                                                    {
                                                                                                                                      ATerm d_5 = t;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm a_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Assign_2(t, a_1, term_expression_0);
                                                                                                                                          PopChoice();
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = d_5;
                                                                                                                                          {
                                                                                                                                            ATerm e_5 = t;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm b_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Assign_1(t, b_1);
                                                                                                                                                PopChoice();
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = e_5;
                                                                                                                                                {
                                                                                                                                                  ATerm c_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
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
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_is_string(not_null(f_25));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  i_25 :
  if(!(match_cons(j_25, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm q_43 (ATerm), ATerm r_43 (ATerm), ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_SDef_4))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      t_25 = ATgetArgument(q_25, 2);
      u_25 = ATgetArgument(q_25, 3);
      {
        ATerm z_25 = NULL;
        t = not_null(r_25);
        {
          ATerm b_26 = NULL;
          t = q_43(t);
          {
            z_25 = t;
            {
              t = not_null(s_25);
              {
                ATerm d_26 = NULL;
                t = r_43(t);
                {
                  b_26 = t;
                  {
                    t = not_null(t_25);
                    {
                      ATerm f_26 = NULL;
                      t = s_43(t);
                      {
                        d_26 = t;
                        {
                          t = not_null(u_25);
                          {
                            t = t_43(t);
                            {
                              f_26 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(z_25), not_null(b_26), not_null(d_26), not_null(f_26));
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm), ATerm m_43 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_SDef_3))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      u_26 = ATgetArgument(r_26, 2);
      {
        ATerm y_26 = NULL;
        t = not_null(s_26);
        {
          ATerm a_27 = NULL;
          t = k_43(t);
          {
            y_26 = t;
            {
              t = not_null(t_26);
              {
                ATerm c_27 = NULL;
                t = l_43(t);
                {
                  a_27 = t;
                  {
                    t = not_null(u_26);
                    {
                      t = m_43(t);
                      {
                        c_27 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_26), not_null(a_27), not_null(c_27));
                      }
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
  ATerm f_5 = t;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      PopChoice();
    }
  else
    {
      t = f_5;
      {
        ATerm g_5 = t;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, d_1, is_string_0, Nil_0, strategy_expression_0);
            PopChoice();
          }
        else
          {
            t = g_5;
            {
              ATerm e_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
                return(t);
              }
              t = debug_1(t, e_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm i_27 (ATerm t)
  {
    ATerm h_5 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = h_5;
        t = Cons_2(t, a_59, i_27);
      }
    return(t);
  }
  t = i_27(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm i_5 = t;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      PopChoice();
    }
  else
    {
      t = i_5;
      {
        ATerm f_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, f_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_33 (ATerm), ATerm o_33 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym__2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      {
        ATerm s_27 = NULL;
        t = not_null(o_27);
        {
          ATerm u_27 = NULL;
          t = n_33(t);
          {
            s_27 = t;
            {
              t = not_null(p_27);
              {
                t = o_33(t);
                {
                  u_27 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(u_27));
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
  ATerm b_28 = NULL;
  ATerm j_5;
  j_5 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm c_28 = NULL,d_28 = NULL;
      c_28 = t;
      a_28 :
      if(match_cons(c_28, sym_Program_1))
        {
          d_28 = ATgetArgument(c_28, 0);
          if(((b_28 != NULL) && (b_28 != d_28)))
            _fail(d_28);
          else
            b_28 = d_28;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(b_28)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = j_5;
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
  ATerm k_28 = NULL,l_28 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm k_5 = t;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm m_28 = NULL;
            m_28 = t;
            f_28 :
            if(!(match_cons(m_28, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_1);
          PopChoice();
          _fail(t);
        }
      else
        t = k_5;
      return(t);
    }
    t = _2(t, i_1, _id);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm n_28 = NULL,o_28 = NULL;
          n_28 = t;
          h_28 :
          if(match_cons(n_28, sym_Runtime_1))
            {
              o_28 = ATgetArgument(n_28, 0);
              if(((l_28 != NULL) && (l_28 != o_28)))
                _fail(o_28);
              else
                l_28 = o_28;
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
            ATerm p_28 = NULL,q_28 = NULL;
            p_28 = t;
            j_28 :
            if(match_cons(p_28, sym_Program_1))
              {
                q_28 = ATgetArgument(p_28, 0);
                if(((k_28 != NULL) && (k_28 != q_28)))
                  _fail(q_28);
                else
                  k_28 = q_28;
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
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(l_28)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(k_28)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_1);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      t = SSL_WriteToTextFile(not_null(w_28), not_null(x_28));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym__2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      t = SSL_WriteToBinaryFile(not_null(e_29), not_null(f_29));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_29 = NULL;
  ATerm l_5;
  l_5 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm m_5 = t;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm o_29 = NULL,p_29 = NULL;
            o_29 = t;
            k_29 :
            if(match_cons(o_29, sym_Output_1))
              {
                p_29 = ATgetArgument(o_29, 0);
                if(((n_29 != NULL) && (n_29 != p_29)))
                  _fail(p_29);
                else
                  n_29 = p_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_1);
          PopChoice();
        }
      else
        {
          t = m_5;
          {
            ATerm q_29 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              q_29 = t;
              if(((n_29 != NULL) && (n_29 != q_29)))
                _fail(q_29);
              else
                n_29 = q_29;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_1, _id);
  }
  t = l_5;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(n_29);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm n_5 = t;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm r_29 = NULL;
              r_29 = t;
              m_29 :
              if(!(match_cons(r_29, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = n_5;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm x_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  ATerm o_5;
  o_5 = t;
  t = dtime_0(t);
  t = o_5;
  {
    t = v_49(t);
    {
      ATerm p_5;
      p_5 = t;
      {
        ATerm y_29 = NULL;
        t = dtime_0(t);
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
      }
      t = p_5;
      {
        z_29 = t;
        w_29 :
        if(match_cons(z_29, sym__2))
          {
            a_30 = ATgetArgument(z_29, 0);
            b_30 = ATgetArgument(z_29, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_30)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_29))), not_null(b_30));
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
  ATerm h_30 = NULL;
  h_30 = t;
  t = SSL_ReadFromFile(not_null(h_30));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm))
{
  ATerm m_30 = NULL,o_30 = NULL;
  ATerm q_5;
  q_5 = t;
  {
    ATerm n_30 = NULL;
    t = m_52(t);
    {
      n_30 = t;
      if(((m_30 != NULL) && (m_30 != n_30)))
        _fail(n_30);
      else
        m_30 = n_30;
    }
  }
  t = q_5;
  {
    ATerm p_30 = NULL;
    t = n_52(t);
    {
      p_30 = t;
      if(((o_30 != NULL) && (o_30 != p_30)))
        _fail(p_30);
      else
        o_30 = p_30;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(o_30));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_30 = NULL;
  ATerm v_5;
  v_5 = t;
  {
    ATerm w_5 = t;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm w_30 = NULL,x_30 = NULL;
          w_30 = t;
          t_30 :
          if(match_cons(w_30, sym_Input_1))
            {
              x_30 = ATgetArgument(w_30, 0);
              if(((v_30 != NULL) && (v_30 != x_30)))
                _fail(x_30);
              else
                v_30 = x_30;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_1);
        PopChoice();
      }
    else
      {
        t = w_5;
        {
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            y_30 = t;
            if(((v_30 != NULL) && (v_30 != y_30)))
              _fail(y_30);
            else
              v_30 = y_30;
          }
        }
      }
  }
  t = v_5;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(v_30);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  b_31 :
  if(!(match_cons(c_31, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_49 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm x_5 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = x_5;
        {
          ATerm y_5 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = y_5;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = u_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  t = SSL_table_create(not_null(e_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  {
    ATerm c_6;
    c_6 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(i_31));
          t = table_put_0(t);
        }
      }
    }
    t = c_6;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  q_31 = t;
  o_31 :
  if(match_string(q_31, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(q_31) == AT_LIST) && ((ATermList) q_31 != ATempty)))
        {
          r_31 = ATgetFirst((ATermList) q_31);
          s_31 = (ATerm) ATgetNext((ATermList) q_31);
          p_31 :
          if(((ATgetType(s_31) == AT_LIST) && ((ATermList) s_31 != ATempty)))
            {
              t_31 = ATgetFirst((ATermList) s_31);
              u_31 = (ATerm) ATgetNext((ATermList) s_31);
              {
                ATerm y_31 = NULL;
                ATerm e_6;
                e_6 = t;
                {
                  t = not_null(r_31);
                  t = h_0(t);
                }
                t = e_6;
                {
                  ATerm z_31 = NULL;
                  t = not_null(t_31);
                  {
                    t = i_0(t);
                    {
                      z_31 = t;
                      if(((y_31 != NULL) && (y_31 != z_31)))
                        _fail(z_31);
                      else
                        y_31 = z_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_31)), not_null(y_31));
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
  ATerm f_6 = t;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm q_32 = NULL;
        q_32 = t;
        d_32 :
        if(!(match_string(q_32, "-S")))
          {
            if(!(match_string(q_32, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      PopChoice();
    }
  else
    {
      t = f_6;
      {
        ATerm g_6 = t;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm r_32 = NULL;
              r_32 = t;
              e_32 :
              if(!(match_string(r_32, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, a_2, b_2, c_2);
            PopChoice();
          }
        else
          {
            t = g_6;
            {
              ATerm h_6 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm s_32 = NULL;
                    s_32 = t;
                    f_32 :
                    if(!(match_string(s_32, "-v")))
                      {
                        if(!(match_string(s_32, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  PopChoice();
                }
              else
                {
                  t = h_6;
                  {
                    ATerm i_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm v_32 = NULL;
                          v_32 = t;
                          g_32 :
                          if(!(match_string(v_32, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm w_32 = NULL;
                          ATerm x_32 = NULL;
                          x_32 = t;
                          if(((w_32 != NULL) && (w_32 != x_32)))
                            _fail(x_32);
                          else
                            w_32 = x_32;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_32));
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        PopChoice();
                      }
                    else
                      {
                        t = i_6;
                        {
                          ATerm m_6 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm y_32 = NULL;
                                y_32 = t;
                                i_32 :
                                if(!(match_string(y_32, "-i")))
                                  {
                                    if(!(match_string(y_32, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm z_32 = NULL;
                                ATerm a_33 = NULL;
                                a_33 = t;
                                if(((z_32 != NULL) && (z_32 != a_33)))
                                  _fail(a_33);
                                else
                                  z_32 = a_33;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_32));
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, l_2);
                              PopChoice();
                            }
                          else
                            {
                              t = m_6;
                              {
                                ATerm o_6 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm b_33 = NULL;
                                      b_33 = t;
                                      m_32 :
                                      if(!(match_string(b_33, "-o")))
                                        {
                                          if(!(match_string(b_33, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm c_33 = NULL;
                                      ATerm d_33 = NULL;
                                      d_33 = t;
                                      if(((c_33 != NULL) && (c_33 != d_33)))
                                        _fail(d_33);
                                      else
                                        c_33 = d_33;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_33));
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, m_2, n_2, o_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_6;
                                    {
                                      ATerm p_6 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm e_33 = NULL;
                                            e_33 = t;
                                            o_32 :
                                            if(!(match_string(e_33, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, p_2, q_2, r_2);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_6;
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              ATerm f_33 = NULL;
                                              f_33 = t;
                                              p_32 :
                                              if(!(match_string(f_33, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_destroy(not_null(k_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  t = SSL_exit(not_null(q_33));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = SSL_implode_string(not_null(u_33));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm x_33 (ATerm t)
  {
    ATerm q_6 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_33);
        PopChoice();
      }
    else
      {
        t = q_6;
        {
          t = Nil_0(t);
          t = m_59(t);
        }
      }
    return(t);
  }
  t = x_33(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_6;
      {
        ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
        a_34 = t;
        z_33 :
        if(((ATgetType(a_34) == AT_LIST) && ((ATermList) a_34 != ATempty)))
          {
            b_34 = ATgetFirst((ATermList) a_34);
            c_34 = (ATerm) ATgetNext((ATermList) a_34);
            {
              t = not_null(b_34);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(c_34);
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
  ATerm i_34 = NULL;
  i_34 = t;
  t = SSL_explode_string(not_null(i_34));
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
ATerm long_description_1 (ATerm t, ATerm b_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_58 (ATerm))
{
  ATerm l_34 (ATerm t)
  {
    ATerm s_6 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_6;
        t = Cons_2(t, y_58, l_34);
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  s_34 = t;
  p_34 :
  if(((ATgetType(s_34) == AT_LIST) && ((ATermList) s_34 != ATempty)))
    {
      q_34 = ATgetFirst((ATermList) s_34);
      r_34 = (ATerm) ATgetNext((ATermList) s_34);
      {
        t = not_null(r_34);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm v_34 = NULL;
            ATerm y_34 = NULL;
            t = g_0(t);
            {
              y_34 = t;
              if(((v_34 != NULL) && (v_34 != y_34)))
                _fail(y_34);
              else
                v_34 = y_34;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(v_34)), not_null(q_34));
            return(t);
          }
          t = reverse_1(t, w_2);
        }
      }
    }
  else
    {
      if(((ATermList) s_34 == ATempty))
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_34 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym_Program_1))
    {
      g_35 = ATgetArgument(f_35, 0);
      {
        ATerm i_35 = NULL;
        t = not_null(g_35);
        {
          t = w_34(t);
          {
            i_35 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_35));
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
  ATerm q_35 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm r_35 = NULL;
      r_35 = t;
      if(((q_35 != NULL) && (q_35 != r_35)))
        _fail(r_35);
      else
        q_35 = r_35;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm s_35 = NULL;
      ATerm t_35 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm b_3 (ATerm t)
        {
          t = not_null(q_35);
          return(t);
        }
        t = short_description_1(t, b_3);
        {
          t = concat_strings_0(t);
          {
            t_35 = t;
            if(((s_35 != NULL) && (s_35 != t_35)))
              _fail(t_35);
            else
              s_35 = t_35;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(s_35)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_3);
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
                ATerm c_3 (ATerm t)
                {
                  ATerm u_35 = NULL;
                  u_35 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm w_35 = NULL;
                    ATerm x_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(q_35);
                        return(t);
                      }
                      t = long_description_1(t, e_3);
                      {
                        t = concat_strings_0(t);
                        {
                          x_35 = t;
                          if(((w_35 != NULL) && (w_35 != x_35)))
                            _fail(x_35);
                          else
                            w_35 = x_35;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_35)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
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
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      {
        ATerm w_6;
        w_6 = t;
        t = SSL_printnl(not_null(f_36), not_null(g_36));
        t = w_6;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_34 (ATerm))
{
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_Undefined_1))
    {
      o_36 = ATgetArgument(n_36, 0);
      {
        ATerm q_36 = NULL;
        t = not_null(o_36);
        {
          t = x_34(t);
          {
            q_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_36));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm u_36 (ATerm t)
  {
    ATerm y_6 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_59, _id);
        PopChoice();
      }
    else
      {
        t = y_6;
        t = Cons_2(t, _id, u_36);
      }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_48 (ATerm))
{
  t = fetch_1(t, z_48);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  v_36 :
  if(!(match_cons(w_36, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm z_6 = t;
  if((PushChoice() == 0))
    {
      t = s_65(t);
      PopChoice();
    }
  else
    {
      t = z_6;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym__2))
    {
      a_37 = ATgetArgument(z_36, 0);
      b_37 = ATgetArgument(z_36, 1);
      t = SSL_table_get(not_null(a_37), not_null(b_37));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  i_37 = t;
  h_37 :
  if(match_cons(i_37, sym__3))
    {
      j_37 = ATgetArgument(i_37, 0);
      k_37 = ATgetArgument(i_37, 1);
      l_37 = ATgetArgument(i_37, 2);
      {
        ATerm a_7;
        a_7 = t;
        {
          ATerm p_37 = NULL;
          ATerm q_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_37), not_null(k_37));
          {
            ATerm b_7 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = b_7;
                t = (ATerm) ATempty;
              }
            {
              q_37 = t;
              if(((p_37 != NULL) && (p_37 != q_37)))
                _fail(q_37);
              else
                p_37 = q_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_37), not_null(k_37), (ATerm) ATinsert(CheckATermList(not_null(p_37)), not_null(l_37)));
            t = table_put_0(t);
          }
        }
        t = a_7;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_48 (ATerm))
{
  ATerm u_37 = NULL;
  ATerm v_37 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = f_48(t);
    {
      v_37 = t;
      if(((u_37 != NULL) && (u_37 != v_37)))
        _fail(v_37);
      else
        u_37 = v_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(u_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_string(b_38, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(b_38) == AT_LIST) && ((ATermList) b_38 != ATempty)))
        {
          c_38 = ATgetFirst((ATermList) b_38);
          d_38 = (ATerm) ATgetNext((ATermList) b_38);
          {
            ATerm g_38 = NULL;
            ATerm c_7;
            c_7 = t;
            {
              t = not_null(c_38);
              t = d_0(t);
            }
            t = c_7;
            {
              ATerm h_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  h_38 = t;
                  if(((g_38 != NULL) && (g_38 != h_38)))
                    _fail(h_38);
                  else
                    g_38 = h_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_38)), not_null(g_38));
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
    ATerm m_38 = NULL;
    m_38 = t;
    l_38 :
    if(!(match_string(m_38, "--help")))
      {
        if(!(match_string(m_38, "-h")))
          {
            if(!(match_string(m_38, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  o_38 :
  if(((ATgetType(p_38) == AT_LIST) && ((ATermList) p_38 != ATempty)))
    {
      q_38 = ATgetFirst((ATermList) p_38);
      r_38 = (ATerm) ATgetNext((ATermList) p_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_38)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(((ATgetType(z_38) == AT_LIST) && ((ATermList) z_38 != ATempty)))
    {
      a_39 = ATgetFirst((ATermList) z_38);
      b_39 = (ATerm) ATgetNext((ATermList) z_38);
      {
        ATerm e_39 = NULL;
        t = not_null(a_39);
        {
          ATerm g_39 = NULL;
          t = p_44(t);
          {
            e_39 = t;
            {
              t = not_null(b_39);
              {
                t = q_44(t);
                {
                  g_39 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_39)), not_null(e_39));
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
  ATerm q_39 = NULL;
  q_39 = t;
  p_39 :
  if(((ATermList) q_39 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = d_48(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = d_7;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm w_39 = NULL;
      w_39 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_39));
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm i_7 = t;
      if((PushChoice() == 0))
        {
          ATerm j_7 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = j_7;
              {
                t = d_48(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          PopChoice();
        }
      else
        {
          t = i_7;
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
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
    g_40 = t;
    c_40 :
    if(match_cons(g_40, sym__3))
      {
        h_40 = ATgetArgument(g_40, 0);
        i_40 = ATgetArgument(g_40, 1);
        j_40 = ATgetArgument(g_40, 2);
        {
          if(((d_40 != NULL) && (d_40 != h_40)))
            _fail(h_40);
          else
            d_40 = h_40;
          {
            if(((e_40 != NULL) && (e_40 != i_40)))
              _fail(i_40);
            else
              e_40 = i_40;
            {
              if(((f_40 != NULL) && (f_40 != j_40)))
                _fail(j_40);
              else
                f_40 = j_40;
              t = SSL_table_put(not_null(d_40), not_null(e_40), not_null(f_40));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = l_7;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_48 (ATerm))
{
  ATerm m_40 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = n_7;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm o_7 = t;
      if((PushChoice() == 0))
        {
          t = c_48(t);
          PopChoice();
        }
      else
        {
          t = o_7;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm p_7 = t;
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
            t = p_7;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm n_40 = NULL;
                  n_40 = t;
                  if(((m_40 != NULL) && (m_40 != n_40)))
                    _fail(n_40);
                  else
                    m_40 = n_40;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm q_7;
                q_7 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_40)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = q_7;
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
      t = try_1(t, m_3);
      {
        ATerm r_7;
        r_7 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = r_7;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_49 (ATerm), ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm s_7 = t;
    if((PushChoice() == 0))
      {
        t = k_49(t);
        PopChoice();
      }
    else
      {
        t = s_7;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      ATerm t_7 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, l_49);
          PopChoice();
        }
      else
        {
          t = t_7;
          {
            ATerm u_7 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, j_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = u_7;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  t = iowrap_3(t, e_49, f_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, b_49);
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
