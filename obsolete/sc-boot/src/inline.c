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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm h_65 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_79 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm e_83 (ATerm));
ATerm Rec_2 (ATerm, ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm Let_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_83 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm r_58 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm for_3 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm HdMember_1 (ATerm, ATerm l_72 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm e_59 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm a_70 (ATerm), ATerm b_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm u_69 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm c_69 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm h_69 (ATerm));
ATerm rename_4 (ATerm, ATerm i_70 (ATerm, ATerm (ATerm)), ATerm j_70 (ATerm), ATerm k_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_70 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_65 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_65 (ATerm));
ATerm scope_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_65 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_61 (ATerm));
ATerm debug_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm crush_3 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm));
ATerm Choice_2 (ATerm, ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm Cong_2 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm));
ATerm Match_1 (ATerm, ATerm t_60 (ATerm));
ATerm Seq_2 (ATerm, ATerm m_59 (ATerm), ATerm n_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_60 (ATerm), ATerm y_60 (ATerm));
ATerm Build_1 (ATerm, ATerm u_60 (ATerm));
ATerm SVar_1 (ATerm, ATerm s_59 (ATerm));
ATerm Call_2 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_80 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm));
ATerm zip_1 (ATerm, ATerm p_76 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm repeat_1 (ATerm, ATerm i_66 (ATerm));
ATerm downup_1 (ATerm, ATerm i_79 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm b_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_59 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm a_50 (ATerm), ATerm b_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_63 (ATerm));
ATerm map_1 (ATerm, ATerm s_74 (ATerm));
ATerm reverse_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_63 (ATerm));
ATerm Program_1 (ATerm, ATerm d_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_63 (ATerm));
ATerm Option_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_61 (ATerm), ATerm d_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_64 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(d_3));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm j_3 = NULL;
  ATerm l_3 = NULL;
  j_3 = t;
  {
    ATerm m_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = h_65(t);
      {
        m_3 = t;
        if(((l_3 != NULL) && (l_3 != m_3)))
          _fail(m_3);
        else
          l_3 = m_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(j_3));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  v_3 = t;
  t_3 :
  if(match_cons(v_3, sym_Call_2))
    {
      w_3 = ATgetArgument(v_3, 0);
      y_3 = ATgetArgument(v_3, 1);
      u_3 :
      if(match_cons(w_3, sym_SVar_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            ATerm b_4 = NULL;
            ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_3));
            {
              ATerm a_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, a_0);
              {
                c_4 = t;
                r_3 :
                if(match_cons(c_4, sym_Defined_2))
                  {
                    d_4 = ATgetArgument(c_4, 0);
                    e_4 = ATgetArgument(c_4, 1);
                    s_3 :
                    if(match_string(d_4, "g_0"))
                      {
                        if(((b_4 != NULL) && (b_4 != e_4)))
                          _fail(e_4);
                        else
                          b_4 = e_4;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_4)), not_null(y_3));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  o_4 = t;
  l_4 :
  if(match_cons(o_4, sym_Call_2))
    {
      p_4 = ATgetArgument(o_4, 0);
      r_4 = ATgetArgument(o_4, 1);
      m_4 :
      if(match_cons(p_4, sym_SVar_1))
        {
          q_4 = ATgetArgument(p_4, 0);
          n_4 :
          if(((ATermList) r_4 == ATempty))
            {
              {
                ATerm t_4 = NULL;
                ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_4));
                {
                  ATerm b_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                    return(t);
                  }
                  t = rewrite_1(t, b_0);
                  {
                    u_4 = t;
                    j_4 :
                    if(match_cons(u_4, sym_Defined_2))
                      {
                        v_4 = ATgetArgument(u_4, 0);
                        w_4 = ATgetArgument(u_4, 1);
                        k_4 :
                        if(match_string(v_4, "f_0"))
                          {
                            if(((t_4 != NULL) && (t_4 != w_4)))
                              _fail(w_4);
                            else
                              t_4 = w_4;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                {
                  t = not_null(t_4);
                  t = strename_0(t);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = e_79(t);
    t = _all(t, z_4);
    return(t);
  }
  t = z_4(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  p_5 = t;
  c_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      x_5 = ATgetArgument(p_5, 1);
      d_5 :
      if(match_cons(q_5, sym_VarDec_2))
        {
          r_5 = ATgetArgument(q_5, 0);
          s_5 = ATgetArgument(q_5, 1);
          e_5 :
          if(match_cons(s_5, sym_FunType_2))
            {
              t_5 = ATgetArgument(s_5, 0);
              w_5 = ATgetArgument(s_5, 1);
              f_5 :
              if(((ATgetType(t_5) == AT_LIST) && ((ATermList) t_5 != ATempty)))
                {
                  u_5 = ATgetFirst((ATermList) t_5);
                  v_5 = (ATerm) ATgetNext((ATermList) t_5);
                  g_5 :
                  if(((ATgetType(v_5) == AT_LIST) && ((ATermList) v_5 != ATempty)))
                    {
                      k_5 = ATgetFirst((ATermList) v_5);
                      l_5 = (ATerm) ATgetNext((ATermList) v_5);
                      h_5 :
                      if(match_cons(x_5, sym_Call_2))
                        {
                          m_5 = ATgetArgument(x_5, 0);
                          o_5 = ATgetArgument(x_5, 1);
                          i_5 :
                          if(match_cons(m_5, sym_SVar_1))
                            {
                              n_5 = ATgetArgument(m_5, 0);
                              j_5 :
                              if(((ATermList) o_5 == ATempty))
                                {
                                  {
                                    ATerm h_10;
                                    h_10 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_5)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue)), not_null(n_5)));
                                      {
                                        ATerm c_0 (ATerm t)
                                        {
                                          t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                          return(t);
                                        }
                                        t = assert_1(t, c_0);
                                      }
                                    }
                                    t = h_10;
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(((ATermList) v_5 == ATempty))
                        {
                          {
                            ATerm i_10;
                            i_10 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_5)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue)), not_null(x_5)));
                              {
                                ATerm o_0 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, o_0);
                              }
                            }
                            t = i_10;
                          }
                        }
                      else
                        _fail(t);
                    }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
      j_6 = t;
      f_6 :
      if(match_cons(j_6, sym__3))
        {
          k_6 = ATgetArgument(j_6, 0);
          l_6 = ATgetArgument(j_6, 1);
          m_6 = ATgetArgument(j_6, 2);
          {
            if(((g_6 != NULL) && (g_6 != k_6)))
              _fail(k_6);
            else
              g_6 = k_6;
            {
              if(((h_6 != NULL) && (h_6 != l_6)))
                _fail(l_6);
              else
                h_6 = l_6;
              {
                if(((i_6 != NULL) && (i_6 != m_6)))
                  _fail(m_6);
                else
                  i_6 = m_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(h_6));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(i_6);
                      {
                        ATerm t_0 (ATerm t)
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm n_10 = t;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = n_10;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, u_0);
                          return(t);
                        }
                        t = topdown_1(t, t_0);
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
    t = scope_2(t, r_0, s_0);
    return(t);
  }
  t = scope_2(t, p_0, q_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(((ATgetType(q_6) == AT_LIST) && ((ATermList) q_6 != ATempty)))
    {
      r_6 = ATgetFirst((ATermList) q_6);
      s_6 = (ATerm) ATgetNext((ATermList) q_6);
      t = not_null(r_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm o_10 = t;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        t = split_2(t, _id, e_83);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
            c_7 = t;
            x_6 :
            if(match_cons(c_7, sym__2))
              {
                d_7 = ATgetArgument(c_7, 0);
                h_7 = ATgetArgument(c_7, 1);
                y_6 :
                if(match_cons(d_7, sym_SDef_3))
                  {
                    e_7 = ATgetArgument(d_7, 0);
                    f_7 = ATgetArgument(d_7, 1);
                    g_7 = ATgetArgument(d_7, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_7), not_null(f_7), not_null(g_7));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, w_0);
        }
        return(t);
      }
      t = Let_2(t, v_0, _id);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm p_10 = t;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = split_2(t, _id, e_83);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
                  l_7 = t;
                  a_7 :
                  if(match_cons(l_7, sym__2))
                    {
                      m_7 = ATgetArgument(l_7, 0);
                      p_7 = ATgetArgument(l_7, 1);
                      b_7 :
                      if(match_cons(m_7, sym_VarDec_2))
                        {
                          n_7 = ATgetArgument(m_7, 0);
                          o_7 = ATgetArgument(m_7, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_7), not_null(o_7));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, y_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, x_0, _id);
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm z_0 (ATerm t)
              {
                t = e_83(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, z_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Rec_2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        ATerm e_8 = NULL;
        t = not_null(a_8);
        {
          ATerm g_8 = NULL;
          t = t_59(t);
          {
            e_8 = t;
            {
              t = not_null(b_8);
              {
                t = u_59(t);
                {
                  g_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(e_8), not_null(g_8));
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
ATerm Let_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_Let_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      {
        ATerm u_8 = NULL;
        t = not_null(q_8);
        {
          ATerm w_8 = NULL;
          t = v_59(t);
          {
            u_8 = t;
            {
              t = not_null(r_8);
              {
                t = w_59(t);
                {
                  w_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_8), not_null(w_8));
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
ATerm sboundin_3 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm q_10 = t;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_83, f_83);
      PopChoice();
    }
  else
    {
      t = q_10;
      {
        ATerm r_10 = t;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_83, h_83, f_83);
            PopChoice();
          }
        else
          {
            t = r_10;
            t = Rec_2(t, h_83, f_83);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Rec_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_SDef_3))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      q_9 = ATgetArgument(n_9, 2);
      {
        t = not_null(p_9);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
            u_9 = t;
            l_9 :
            if(match_cons(u_9, sym_VarDec_2))
              {
                v_9 = ATgetArgument(u_9, 0);
                w_9 = ATgetArgument(u_9, 1);
                t = not_null(v_9);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Let_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        t = not_null(f_10);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
            j_10 = t;
            c_10 :
            if(match_cons(j_10, sym_SDef_3))
              {
                k_10 = ATgetArgument(j_10, 0);
                l_10 = ATgetArgument(j_10, 1);
                m_10 = ATgetArgument(j_10, 2);
                t = not_null(k_10);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, b_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm s_10 = t;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        {
          ATerm t_10 = t;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = t_10;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, c_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_83 (ATerm))
{
  t = Scope_2(t, a_83, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_DynamicRules_1))
    {
      w_10 = ATgetArgument(v_10, 0);
      {
        ATerm y_10 = NULL;
        t = not_null(w_10);
        {
          t = r_58(t);
          {
            y_10 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(y_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm x_10 = t;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_83, b_83);
      PopChoice();
    }
  else
    {
      t = x_10;
      t = DynamicRules_1(t, b_83);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_DynamicRules_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        t = not_null(f_11);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Var_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      {
        t = not_null(r_11);
        {
          ATerm y_11 (ATerm t)
          {
            ATerm z_10 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_11);
                PopChoice();
              }
            else
              {
                t = z_10;
                {
                  ATerm a_11 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(s_11);
                        return(t);
                      }
                      t = HdMember_1(t, d_1);
                      t = y_11(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_11;
                      t = Cons_2(t, _id, y_11);
                    }
                }
              }
            return(t);
          }
          t = y_11(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  h_12 = t;
  f_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      g_12 :
      if(((ATgetType(j_12) == AT_LIST) && ((ATermList) j_12 != ATempty)))
        {
          k_12 = ATgetFirst((ATermList) j_12);
          l_12 = (ATerm) ATgetNext((ATermList) j_12);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_12)), not_null(k_12)), not_null(l_12));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  a_13 = t;
  y_12 :
  if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
    {
      b_13 = ATgetFirst((ATermList) a_13);
      e_13 = (ATerm) ATgetNext((ATermList) a_13);
      z_12 :
      if(match_cons(b_13, sym__2))
        {
          c_13 = ATgetArgument(b_13, 0);
          d_13 = ATgetArgument(b_13, 1);
          {
            ATerm i_13 = NULL,j_13 = NULL,p_13 = NULL,v_13 = NULL;
            ATerm b_11;
            b_11 = t;
            {
              ATerm k_13 = NULL;
              ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
              t = not_null(d_13);
              {
                k_13 = t;
                {
                  t = SSL_explode_term(not_null(k_13));
                  {
                    m_13 = t;
                    t_12 :
                    if(match_cons(m_13, sym__2))
                      {
                        n_13 = ATgetArgument(m_13, 0);
                        o_13 = ATgetArgument(m_13, 1);
                        {
                          if(((i_13 != NULL) && (i_13 != n_13)))
                            _fail(n_13);
                          else
                            i_13 = n_13;
                          if(((j_13 != NULL) && (j_13 != o_13)))
                            _fail(o_13);
                          else
                            j_13 = o_13;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = b_11;
            {
              ATerm c_11;
              c_11 = t;
              {
                ATerm q_13 = NULL;
                ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
                t = not_null(c_13);
                {
                  q_13 = t;
                  {
                    t = SSL_explode_term(not_null(q_13));
                    {
                      s_13 = t;
                      w_12 :
                      if(match_cons(s_13, sym__2))
                        {
                          t_13 = ATgetArgument(s_13, 0);
                          u_13 = ATgetArgument(s_13, 1);
                          {
                            if(((i_13 != NULL) && (i_13 != t_13)))
                              _fail(t_13);
                            else
                              i_13 = t_13;
                            if(((p_13 != NULL) && (p_13 != u_13)))
                              _fail(u_13);
                            else
                              p_13 = u_13;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = c_11;
              {
                ATerm w_13 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(j_13));
                {
                  t = zip_1(t, _id);
                  {
                    w_13 = t;
                    if(((v_13 != NULL) && (v_13 != w_13)))
                      _fail(w_13);
                    else
                      v_13 = w_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), not_null(e_13));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  h_15 :
  if(((ATgetType(j_15) == AT_LIST) && ((ATermList) j_15 != ATempty)))
    {
      k_15 = ATgetFirst((ATermList) j_15);
      n_15 = (ATerm) ATgetNext((ATermList) j_15);
      i_15 :
      if(match_cons(k_15, sym__2))
        {
          l_15 = ATgetArgument(k_15, 0);
          m_15 = ATgetArgument(k_15, 1);
          {
            ATerm p_15 = NULL;
            if(((l_15 != NULL) && (l_15 != m_15)))
              _fail(m_15);
            else
              l_15 = m_15;
            {
              if(((p_15 != NULL) && (p_15 != n_15)))
                _fail(n_15);
              else
                p_15 = n_15;
              t = not_null(p_15);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm g_11 = t;
    if((PushChoice() == 0))
      {
        t = w_66(t);
        PopChoice();
      }
    else
      {
        t = g_11;
        {
          t = x_66(t);
          t = r_15(t);
        }
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  t = z_66(t);
  t = while_not_2(t, a_67, b_67);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && ((ATermList) v_15 != ATempty)))
    {
      w_15 = ATgetFirst((ATermList) v_15);
      x_15 = (ATerm) ATgetNext((ATermList) v_15);
      {
        t = l_72(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm a_16 = NULL;
            a_16 = t;
            if(((w_15 != NULL) && (w_15 != a_16)))
              _fail(a_16);
            else
              w_15 = a_16;
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(x_15);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm h_11 = t;
  if((PushChoice() == 0))
    {
      ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
      g_16 = t;
      e_16 :
      if(match_cons(g_16, sym__2))
        {
          h_16 = ATgetArgument(g_16, 0);
          i_16 = ATgetArgument(g_16, 1);
          {
            t = not_null(h_16);
            {
              ATerm o_16 (ATerm t)
              {
                ATerm i_11 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_11;
                    {
                      ATerm m_11 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm f_1 (ATerm t)
                          {
                            t = not_null(i_16);
                            return(t);
                          }
                          t = HdMember_1(t, f_1);
                          t = o_16(t);
                          PopChoice();
                        }
                      else
                        {
                          t = m_11;
                          t = Cons_2(t, _id, o_16);
                        }
                    }
                  }
                return(t);
              }
              t = o_16(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = h_11;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm l_16 = NULL;
          l_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_16));
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          ATerm n_11 = t;
          if((PushChoice() == 0))
            {
              ATerm j_1 (ATerm t)
              {
                ATerm o_11 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = o_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_1);
              PopChoice();
            }
          else
            {
              t = n_11;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_1, h_1, i_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_16 (ATerm t)
  {
    ATerm t_11 = t;
    if((PushChoice() == 0))
      {
        t = h_68(t);
        PopChoice();
      }
    else
      {
        t = t_11;
        {
          ATerm u_11 = t;
          if((PushChoice() == 0))
            {
              ATerm r_16 = NULL;
              ATerm v_11;
              v_11 = t;
              {
                ATerm s_16 = NULL;
                t = i_68(t);
                {
                  s_16 = t;
                  if(((r_16 != NULL) && (r_16 != s_16)))
                    _fail(s_16);
                  else
                    r_16 = s_16;
                }
              }
              t = v_11;
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = not_null(r_16);
                    return(t);
                  }
                  t = split_2(t, t_16, m_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm l_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_68(t, k_1, t_16, l_1);
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = u_11;
              {
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_1, union_0, t_16);
              }
            }
        }
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm w_11 = t;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = w_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  x_16 :
  if(match_cons(c_17, sym_LRule_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      y_16 :
      if(match_cons(d_17, sym_Rule_3))
        {
          z_16 = ATgetArgument(d_17, 0);
          a_17 = ATgetArgument(d_17, 1);
          b_17 = ATgetArgument(d_17, 2);
          {
            t = not_null(z_16);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(c_17, sym_Scope_2))
        {
          d_17 = ATgetArgument(c_17, 0);
          e_17 = ATgetArgument(c_17, 1);
          t = not_null(d_17);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Var_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      {
        ATerm s_17 = NULL;
        t = not_null(q_17);
        {
          t = e_59(t);
          {
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm a_70 (ATerm), ATerm b_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym__3))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      d_18 = ATgetArgument(a_18, 2);
      {
        t = not_null(b_18);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm h_18 = NULL;
            h_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(d_18));
              t = a_70(t);
            }
            return(t);
          }
          ATerm r_1 (ATerm t)
          {
            ATerm j_18 = NULL;
            j_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(c_18));
              t = a_70(t);
            }
            return(t);
          }
          t = b_70(t, q_1, r_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm, ATerm (ATerm)))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,j_19 = NULL;
        ATerm x_11;
        x_11 = t;
        {
          ATerm e_19 = NULL;
          t = not_null(x_18);
          {
            ATerm f_19 = NULL;
            t = g_70(t);
            {
              e_19 = t;
              {
                if(((b_19 != NULL) && (b_19 != e_19)))
                  _fail(e_19);
                else
                  b_19 = e_19;
                {
                  ATerm g_19 = NULL,i_19 = NULL;
                  t = map_1(t, new_0);
                  {
                    f_19 = t;
                    {
                      if(((c_19 != NULL) && (c_19 != f_19)))
                        _fail(f_19);
                      else
                        c_19 = f_19;
                      {
                        ATerm h_19 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(c_19));
                        {
                          t = zip_1(t, _id);
                          {
                            h_19 = t;
                            if(((g_19 != NULL) && (g_19 != h_19)))
                              _fail(h_19);
                            else
                              g_19 = h_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_19), not_null(y_18));
                          {
                            t = conc_0(t);
                            {
                              i_19 = t;
                              if(((d_19 != NULL) && (d_19 != i_19)))
                                _fail(i_19);
                              else
                                d_19 = i_19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_11;
        {
          ATerm k_19 = NULL;
          t = not_null(x_18);
          {
            ATerm s_1 (ATerm t)
            {
              t = not_null(c_19);
              return(t);
            }
            t = h_70(t, s_1);
            {
              k_19 = t;
              if(((j_19 != NULL) && (j_19 != k_19)))
                _fail(k_19);
              else
                j_19 = k_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_19), not_null(y_18), not_null(d_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym__2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      t_19 :
      if(((ATgetType(w_19) == AT_LIST) && ((ATermList) w_19 != ATempty)))
        {
          x_19 = ATgetFirst((ATermList) w_19);
          y_19 = (ATerm) ATgetNext((ATermList) w_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(y_19));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  g_20 = t;
  d_20 :
  if(match_cons(g_20, sym__2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      e_20 :
      if(((ATgetType(i_20) == AT_LIST) && ((ATermList) i_20 != ATempty)))
        {
          j_20 = ATgetFirst((ATermList) i_20);
          m_20 = (ATerm) ATgetNext((ATermList) i_20);
          f_20 :
          if(match_cons(j_20, sym__2))
            {
              k_20 = ATgetArgument(j_20, 0);
              l_20 = ATgetArgument(j_20, 1);
              {
                ATerm o_20 = NULL;
                if(((h_20 != NULL) && (h_20 != k_20)))
                  _fail(k_20);
                else
                  h_20 = k_20;
                {
                  if(((o_20 != NULL) && (o_20 != l_20)))
                    _fail(l_20);
                  else
                    o_20 = l_20;
                  t = not_null(o_20);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm z_11 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm u_69 (ATerm, ATerm (ATerm)))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        t = not_null(u_20);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = not_null(v_20);
              return(t);
            }
            t = split_2(t, _id, u_1);
            t = lookup_0(t);
            return(t);
          }
          t = u_69(t, t_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        t = not_null(d_21);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm h_21 = NULL;
            h_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(e_21));
              t = c_69(t);
            }
            return(t);
          }
          t = _all(t, v_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm l_21 (ATerm t)
  {
    ATerm a_12 = t;
    if((PushChoice() == 0))
      {
        t = h_69(t);
        PopChoice();
      }
    else
      {
        t = a_12;
        t = all_dist_1(t, l_21);
      }
    return(t);
  }
  t = l_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm i_70 (ATerm, ATerm (ATerm)), ATerm j_70 (ATerm), ATerm k_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_70 (ATerm, ATerm (ATerm)))
{
  ATerm n_21 = NULL;
  n_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), (ATerm) ATempty);
    {
      ATerm q_21 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm b_12 = t;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, i_70);
              PopChoice();
            }
          else
            {
              t = b_12;
              {
                t = RnBinding_2(t, j_70, l_70);
                t = DistBinding_2(t, q_21, k_70);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, w_1);
        return(t);
      }
      t = q_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_21 (ATerm t, ATerm a_22 (ATerm))
  {
    t = Scope_2(t, a_22, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_21);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  ATerm e_25 (ATerm t)
  {
    ATerm t_23 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm x_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, x_1);
      {
        t_23 = t;
        t_22 :
        if(match_cons(t_23, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym__0);
    return(t);
  }
  ATerm f_25 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm y_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, y_1);
      {
        z_23 = t;
        z_22 :
        if(match_cons(z_23, sym_Defined_3))
          {
            a_24 = ATgetArgument(z_23, 0);
            b_24 = ATgetArgument(z_23, 1);
            c_24 = ATgetArgument(z_23, 2);
            a_23 :
            if(match_string(a_24, "e_0"))
              {
                ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                if(((v_23 != NULL) && (v_23 != b_24)))
                  _fail(b_24);
                else
                  v_23 = b_24;
                {
                  if(((q_23 != NULL) && (q_23 != c_24)))
                    _fail(c_24);
                  else
                    q_23 = c_24;
                  {
                    t = not_null(v_23);
                    {
                      t = strename_0(t);
                      {
                        d_24 = t;
                        x_22 :
                        if(match_cons(d_24, sym_SDef_3))
                          {
                            e_24 = ATgetArgument(d_24, 0);
                            f_24 = ATgetArgument(d_24, 1);
                            i_24 = ATgetArgument(d_24, 2);
                            y_22 :
                            if(((ATgetType(f_24) == AT_LIST) && ((ATermList) f_24 != ATempty)))
                              {
                                g_24 = ATgetFirst((ATermList) f_24);
                                h_24 = (ATerm) ATgetNext((ATermList) f_24);
                                {
                                  ATerm j_24 = NULL;
                                  if(((q_23 != NULL) && (q_23 != e_24)))
                                    _fail(e_24);
                                  else
                                    q_23 = e_24;
                                  {
                                    if(((w_23 != NULL) && (w_23 != f_24)))
                                      _fail(f_24);
                                    else
                                      w_23 = f_24;
                                    {
                                      if(((x_23 != NULL) && (x_23 != i_24)))
                                        _fail(i_24);
                                      else
                                        x_23 = i_24;
                                      {
                                        t = new_0(t);
                                        {
                                          j_24 = t;
                                          {
                                            if(((y_23 != NULL) && (y_23 != j_24)))
                                              _fail(j_24);
                                            else
                                              y_23 = j_24;
                                            {
                                              ATerm c_12;
                                              c_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_23)), (ATerm) ATmakeAppl(sym_Undefined_0));
                                                {
                                                  ATerm z_1 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = assert_1(t, z_1);
                                                }
                                              }
                                              t = c_12;
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
                          }
                        else
                          _fail(t);
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_23), not_null(w_23), not_null(x_23))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_23)), (ATerm) ATempty));
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    ATerm l_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm a_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        l_24 = t;
        c_23 :
        if(match_cons(l_24, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym__0);
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
    ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm b_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        s_24 = t;
        h_23 :
        if(match_cons(s_24, sym_Defined_3))
          {
            t_24 = ATgetArgument(s_24, 0);
            u_24 = ATgetArgument(s_24, 1);
            v_24 = ATgetArgument(s_24, 2);
            i_23 :
            if(match_string(t_24, "d_0"))
              {
                ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
                if(((o_24 != NULL) && (o_24 != u_24)))
                  _fail(u_24);
                else
                  o_24 = u_24;
                {
                  if(((q_23 != NULL) && (q_23 != v_24)))
                    _fail(v_24);
                  else
                    q_23 = v_24;
                  {
                    t = not_null(o_24);
                    {
                      t = strename_0(t);
                      {
                        w_24 = t;
                        g_23 :
                        if(match_cons(w_24, sym_SDef_3))
                          {
                            x_24 = ATgetArgument(w_24, 0);
                            y_24 = ATgetArgument(w_24, 1);
                            z_24 = ATgetArgument(w_24, 2);
                            {
                              ATerm a_25 = NULL;
                              if(((q_23 != NULL) && (q_23 != x_24)))
                                _fail(x_24);
                              else
                                q_23 = x_24;
                              {
                                if(((p_24 != NULL) && (p_24 != y_24)))
                                  _fail(y_24);
                                else
                                  p_24 = y_24;
                                {
                                  if(((q_24 != NULL) && (q_24 != z_24)))
                                    _fail(z_24);
                                  else
                                    q_24 = z_24;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(p_24), not_null(r_23), not_null(q_24));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        a_25 = t;
                                        {
                                          if(((r_24 != NULL) && (r_24 != a_25)))
                                            _fail(a_25);
                                          else
                                            r_24 = a_25;
                                          {
                                            ATerm d_12;
                                            d_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_23)), (ATerm) ATmakeAppl(sym_Undefined_0));
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = d_12;
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
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(r_24);
    return(t);
  }
  ATerm r_25 (ATerm t)
  {
    ATerm d_25 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm d_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        d_25 = t;
        k_23 :
        if(match_cons(d_25, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym__0);
    return(t);
  }
  o_23 = t;
  l_23 :
  if(match_cons(o_23, sym_Call_2))
    {
      p_23 = ATgetArgument(o_23, 0);
      r_23 = ATgetArgument(o_23, 1);
      m_23 :
      if(match_cons(p_23, sym_SVar_1))
        {
          q_23 = ATgetArgument(p_23, 0);
          n_23 :
          if(((ATermList) r_23 == ATempty))
            {
              {
                ATerm e_12 = t;
                if((PushChoice() == 0))
                  {
                    t = e_25(t);
                    PopChoice();
                  }
                else
                  {
                    t = e_12;
                    {
                      ATerm m_12 = t;
                      if((PushChoice() == 0))
                        {
                          t = f_25(t);
                          PopChoice();
                        }
                      else
                        {
                          t = m_12;
                          {
                            ATerm n_12 = t;
                            if((PushChoice() == 0))
                              {
                                t = g_25(t);
                                PopChoice();
                              }
                            else
                              {
                                t = n_12;
                                {
                                  ATerm o_12 = t;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_25(t);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = o_12;
                                      t = r_25(t);
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
              ATerm p_12 = t;
              if((PushChoice() == 0))
                {
                  t = e_25(t);
                  PopChoice();
                }
              else
                {
                  t = p_12;
                  {
                    ATerm q_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = g_25(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_12;
                        {
                          ATerm r_12 = t;
                          if((PushChoice() == 0))
                            {
                              t = h_25(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_12;
                              t = r_25(t);
                            }
                        }
                      }
                  }
                }
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_SDef_3))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      y_26 = ATgetArgument(v_26, 2);
      {
        ATerm s_12;
        s_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_26)), (ATerm) ATmakeAppl(sym_Undefined_0));
          {
            ATerm e_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, e_2);
          }
        }
        t = s_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(((ATgetType(d_27) == AT_LIST) && ((ATermList) d_27 != ATempty)))
    {
      e_27 = ATgetFirst((ATermList) d_27);
      f_27 = (ATerm) ATgetNext((ATermList) d_27);
      t = not_null(f_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym__2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      {
        ATerm u_12;
        u_12 = t;
        {
          ATerm d_28 = NULL;
          ATerm e_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), not_null(v_27));
          {
            ATerm v_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                PopChoice();
              }
            else
              {
                t = v_12;
                t = (ATerm) ATempty;
              }
            {
              e_28 = t;
              if(((d_28 != NULL) && (d_28 != e_28)))
                _fail(e_28);
              else
                d_28 = e_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_27), not_null(v_27), not_null(d_28));
            t = table_put_0(t);
          }
        }
        t = u_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm q_28 = NULL;
    ATerm r_28 = NULL,t_28 = NULL,u_28 = NULL;
    t = c_65(t);
    {
      q_28 = t;
      {
        if(((o_28 != NULL) && (o_28 != q_28)))
          _fail(q_28);
        else
          o_28 = q_28;
        {
          ATerm f_13 = t;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATmakeAppl(sym_Scopes_0));
              t = table_get_0(t);
              PopChoice();
            }
          else
            {
              t = f_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_28 = t;
            m_28 :
            if(((ATgetType(r_28) == AT_LIST) && ((ATermList) r_28 != ATempty)))
              {
                t_28 = ATgetFirst((ATermList) r_28);
                u_28 = (ATerm) ATgetNext((ATermList) r_28);
                {
                  if(((p_28 != NULL) && (p_28 != t_28)))
                    _fail(t_28);
                  else
                    p_28 = t_28;
                  {
                    if(((n_28 != NULL) && (n_28 != u_28)))
                      _fail(u_28);
                    else
                      n_28 = u_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_28), (ATerm)ATmakeAppl(sym_Scopes_0), not_null(n_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(p_28);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm v_28 = NULL;
                              v_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), not_null(v_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
  }
  t = x_12;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm g_13 = t;
  if((PushChoice() == 0))
    {
      t = c_79(t);
      t = d_79(t);
      PopChoice();
    }
  else
    {
      t = g_13;
      {
        t = d_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm c_29 = NULL;
  ATerm h_13;
  h_13 = t;
  {
    ATerm d_29 = NULL;
    ATerm e_29 = NULL;
    t = b_65(t);
    {
      d_29 = t;
      {
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
        {
          ATerm f_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATmakeAppl(sym_Scopes_0));
          {
            ATerm l_13 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = l_13;
                t = (ATerm) ATempty;
              }
            {
              f_29 = t;
              if(((e_29 != NULL) && (e_29 != f_29)))
                _fail(f_29);
              else
                e_29 = f_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_29), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(e_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  t = begin_scope_1(t, d_65);
  {
    ATerm g_2 (ATerm t)
    {
      t = end_scope_1(t, d_65);
      return(t);
    }
    t = restore_always_2(t, e_65, g_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm r_13 = t;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = r_13;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, h_2, i_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm x_29 = NULL,b_30 = NULL,c_30 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym__2))
    {
      b_30 = ATgetArgument(x_29, 0);
      c_30 = ATgetArgument(x_29, 1);
      {
        ATerm x_30 = NULL,z_30 = NULL,a_31 = NULL;
        ATerm x_13;
        x_13 = t;
        {
          ATerm b_31 = NULL;
          ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
          t = f_65(t);
          {
            b_31 = t;
            {
              if(((x_30 != NULL) && (x_30 != b_31)))
                _fail(b_31);
              else
                x_30 = b_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_30), not_null(b_30), not_null(c_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_30), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_31 = t;
                      v_29 :
                      if(((ATgetType(c_31) == AT_LIST) && ((ATermList) c_31 != ATempty)))
                        {
                          d_31 = ATgetFirst((ATermList) c_31);
                          e_31 = (ATerm) ATgetNext((ATermList) c_31);
                          {
                            if(((z_30 != NULL) && (z_30 != d_31)))
                              _fail(d_31);
                            else
                              z_30 = d_31;
                            {
                              if(((a_31 != NULL) && (a_31 != e_31)))
                                _fail(e_31);
                              else
                                a_31 = e_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_30), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(a_31)), (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(b_30))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = x_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_SDef_3))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      n_31 = ATgetArgument(k_31, 2);
      {
        ATerm z_13;
        z_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_31)), (ATerm) ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue)), not_null(k_31), not_null(l_31)));
          {
            ATerm j_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, j_2);
          }
        }
        t = z_13;
        {
          ATerm a_14;
          a_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_31)), (ATerm) ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue)), not_null(k_31), not_null(l_31)));
            {
              ATerm k_2 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
          t = a_14;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      {
        ATerm b_14;
        b_14 = t;
        {
          ATerm c_14 = t;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_31), not_null(x_31));
              PopChoice();
            }
          else
            {
              t = c_14;
              t = SSL_gtr(not_null(w_31), not_null(x_31));
            }
        }
        t = b_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm d_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = d_14;
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm e_14;
  e_14 = t;
  {
    ATerm d_32 = NULL,f_32 = NULL;
    ATerm f_14;
    f_14 = t;
    {
      ATerm e_32 = NULL;
      t = j_61(t);
      {
        e_32 = t;
        if(((d_32 != NULL) && (d_32 != e_32)))
          _fail(e_32);
        else
          d_32 = e_32;
      }
    }
    t = f_14;
    {
      ATerm g_32 = NULL;
      g_32 = t;
      if(((f_32 != NULL) && (f_32 != g_32)))
        _fail(g_32);
      else
        f_32 = g_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), not_null(d_32)));
        t = printnl_0(t);
      }
    }
  }
  t = e_14;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm g_14;
  g_14 = t;
  {
    ATerm k_32 = NULL;
    ATerm l_32 = NULL;
    l_32 = t;
    if(((k_32 != NULL) && (k_32 != l_32)))
      _fail(l_32);
    else
      k_32 = l_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(k_32)));
      t = printnl_0(t);
    }
  }
  t = g_14;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,t_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym__2))
    {
      q_32 = ATgetArgument(p_32, 0);
      t_32 = ATgetArgument(p_32, 1);
      {
        ATerm h_14 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_32), not_null(t_32));
            PopChoice();
          }
        else
          {
            t = h_14;
            t = SSL_addr(not_null(q_32), not_null(t_32));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm i_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_71(t);
      PopChoice();
    }
  else
    {
      t = i_14;
      {
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
        b_33 = t;
        a_33 :
        if(((ATgetType(b_33) == AT_LIST) && ((ATermList) b_33 != ATempty)))
          {
            c_33 = ATgetFirst((ATermList) b_33);
            d_33 = (ATerm) ATgetNext((ATermList) b_33);
            {
              ATerm g_33 = NULL,i_33 = NULL;
              ATerm j_14;
              j_14 = t;
              {
                ATerm h_33 = NULL;
                t = not_null(c_33);
                {
                  t = l_71(t);
                  {
                    h_33 = t;
                    if(((g_33 != NULL) && (g_33 != h_33)))
                      _fail(h_33);
                    else
                      g_33 = h_33;
                  }
                }
              }
              t = j_14;
              {
                ATerm j_33 = NULL;
                t = not_null(d_33);
                {
                  t = foldr_3(t, j_71, k_71, l_71);
                  {
                    j_33 = t;
                    if(((i_33 != NULL) && (i_33 != j_33)))
                      _fail(j_33);
                    else
                      i_33 = j_33;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(i_33));
                  t = k_71(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm v_33 = NULL;
  r_33 = t;
  {
    ATerm w_33 = NULL;
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
    t = not_null(r_33);
    {
      w_33 = t;
      {
        t = SSL_explode_term(not_null(w_33));
        {
          y_33 = t;
          q_33 :
          if(match_cons(y_33, sym__2))
            {
              z_33 = ATgetArgument(y_33, 0);
              a_34 = ATgetArgument(y_33, 1);
              if(((v_33 != NULL) && (v_33 != a_34)))
                _fail(a_34);
              else
                v_33 = a_34;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(v_33);
      t = foldr_3(t, w_72, x_72, y_72);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm k_14 = t;
  if((PushChoice() == 0))
    {
      ATerm e_34 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = (ATerm) ATmakeInt(1);
          return(t);
        }
        t = crush_3(t, l_2, add_0, e_34);
        return(t);
      }
      t = e_34(t);
      PopChoice();
    }
  else
    {
      t = k_14;
      {
        ATerm m_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("in: ", 0, ATtrue));
          return(t);
        }
        t = debug_1(t, m_2);
        {
          ATerm n_2 (ATerm t)
          {
            t = (ATerm) ATmakeInt(1);
            return(t);
          }
          ATerm o_2 (ATerm t)
          {
            t = debug_0(t);
            {
              t = add_0(t);
              t = debug_0(t);
            }
            return(t);
          }
          t = crush_3(t, n_2, o_2, term_size_0);
          {
            ATerm p_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("out: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, p_2);
          }
        }
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_LChoice_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      {
        ATerm o_34 = NULL;
        t = not_null(k_34);
        {
          ATerm q_34 = NULL;
          t = q_59(t);
          {
            o_34 = t;
            {
              t = not_null(l_34);
              {
                t = r_59(t);
                {
                  q_34 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_34), not_null(q_34));
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
ATerm Choice_2 (ATerm t, ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Choice_2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      {
        ATerm e_35 = NULL;
        t = not_null(a_35);
        {
          ATerm g_35 = NULL;
          t = o_59(t);
          {
            e_35 = t;
            {
              t = not_null(b_35);
              {
                t = p_59(t);
                {
                  g_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_35), not_null(g_35));
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
ATerm Cong_2 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Cong_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm u_35 = NULL;
        t = not_null(q_35);
        {
          ATerm w_35 = NULL;
          t = l_60(t);
          {
            u_35 = t;
            {
              t = not_null(r_35);
              {
                t = m_60(t);
                {
                  w_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(u_35), not_null(w_35));
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
ATerm Match_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Match_1))
    {
      f_36 = ATgetArgument(e_36, 0);
      {
        ATerm h_36 = NULL;
        t = not_null(f_36);
        {
          t = t_60(t);
          {
            h_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_36));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm m_59 (ATerm), ATerm n_59 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_Seq_2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm u_36 = NULL;
        t = not_null(q_36);
        {
          ATerm w_36 = NULL;
          t = m_59(t);
          {
            u_36 = t;
            {
              t = not_null(r_36);
              {
                t = n_59(t);
                {
                  w_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_36), not_null(w_36));
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
ATerm Scope_2 (ATerm t, ATerm x_60 (ATerm), ATerm y_60 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Scope_2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm l_37 = NULL;
        t = not_null(g_37);
        {
          ATerm q_37 = NULL;
          t = x_60(t);
          {
            l_37 = t;
            {
              t = not_null(h_37);
              {
                t = y_60(t);
                {
                  q_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_37), not_null(q_37));
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
ATerm Build_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_Build_1))
    {
      z_37 = ATgetArgument(y_37, 0);
      {
        ATerm d_38 = NULL;
        t = not_null(z_37);
        {
          t = u_60(t);
          {
            d_38 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm k_38 = NULL,l_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_SVar_1))
    {
      l_38 = ATgetArgument(k_38, 0);
      {
        ATerm y_38 = NULL;
        t = not_null(l_38);
        {
          t = s_59(t);
          {
            y_38 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(y_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Call_2))
    {
      h_39 = ATgetArgument(g_39, 0);
      i_39 = ATgetArgument(g_39, 1);
      {
        ATerm l_39 = NULL;
        t = not_null(h_39);
        {
          ATerm n_39 = NULL;
          t = h_60(t);
          {
            l_39 = t;
            {
              t = not_null(i_39);
              {
                t = i_60(t);
                {
                  n_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(l_39), not_null(n_39));
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
ATerm Fail_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  u_39 :
  if(!(match_cons(v_39, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  w_39 :
  if(!(match_cons(x_39, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm y_39 (ATerm t)
  {
    ATerm l_14 = t;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        PopChoice();
      }
    else
      {
        t = l_14;
        {
          ATerm m_14 = t;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              PopChoice();
            }
          else
            {
              t = m_14;
              {
                ATerm n_14 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    PopChoice();
                  }
                else
                  {
                    t = n_14;
                    {
                      ATerm o_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          PopChoice();
                        }
                      else
                        {
                          t = o_14;
                          {
                            ATerm p_14 = t;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                PopChoice();
                              }
                            else
                              {
                                t = p_14;
                                {
                                  ATerm q_14 = t;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = q_14;
                                      {
                                        ATerm r_14 = t;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = r_14;
                                            {
                                              ATerm s_14 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = s_14;
                                                  {
                                                    ATerm t_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = t_14;
                                                        {
                                                          ATerm u_14 = t;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = u_14;
                                                              {
                                                                ATerm v_14 = t;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, y_39, y_39);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_14;
                                                                    t = LChoice_2(t, y_39, y_39);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = y_39(t);
  {
    ATerm w_14;
    w_14 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = w_14;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm x_14 = t;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        PopChoice();
      }
    else
      {
        t = x_14;
        t = _one(t, z_39);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_SDef_3))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      i_40 = ATgetArgument(f_40, 2);
      {
        ATerm q_40 = NULL;
        t = not_null(g_40);
        {
          ATerm s_40 = NULL;
          t = x_59(t);
          {
            q_40 = t;
            {
              t = not_null(h_40);
              {
                ATerm u_40 = NULL;
                t = y_59(t);
                {
                  s_40 = t;
                  {
                    t = not_null(i_40);
                    {
                      t = z_59(t);
                      {
                        u_40 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_40), not_null(s_40), not_null(u_40));
                      }
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
ATerm inlineable_0 (ATerm t)
{
  ATerm m_41 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm p_41 = NULL;
    ATerm y_14 = t;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL;
        o_41 = t;
        c_41 :
        if(!(match_string(o_41, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = y_14;
    {
      p_41 = t;
      if(((m_41 != NULL) && (m_41 != p_41)))
        _fail(p_41);
      else
        m_41 = p_41;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm z_14;
    z_14 = t;
    {
      ATerm a_15 = t;
      if((PushChoice() == 0))
        {
          ATerm f_3 (ATerm t)
          {
            ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
            q_41 = t;
            j_41 :
            if(match_cons(q_41, sym_Call_2))
              {
                r_41 = ATgetArgument(q_41, 0);
                t_41 = ATgetArgument(q_41, 1);
                k_41 :
                if(match_cons(r_41, sym_SVar_1))
                  {
                    s_41 = ATgetArgument(r_41, 0);
                    l_41 :
                    if(((ATermList) t_41 == ATempty))
                      {
                        if(((m_41 != NULL) && (m_41 != s_41)))
                          _fail(s_41);
                        else
                          m_41 = s_41;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, f_3);
          PopChoice();
          _fail(t);
        }
      else
        t = a_15;
    }
    t = z_14;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, e_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym__2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        t = not_null(z_41);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(a_42);
            return(t);
          }
          t = at_end_1(t, g_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(h_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,c_43 = NULL;
  u_42 = t;
  r_42 :
  if(match_cons(u_42, sym__2))
    {
      v_42 = ATgetArgument(u_42, 0);
      y_42 = ATgetArgument(u_42, 1);
      s_42 :
      if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
        {
          w_42 = ATgetFirst((ATermList) v_42);
          x_42 = (ATerm) ATgetNext((ATermList) v_42);
          t_42 :
          if(((ATgetType(y_42) == AT_LIST) && ((ATermList) y_42 != ATempty)))
            {
              z_42 = ATgetFirst((ATermList) y_42);
              c_43 = (ATerm) ATgetNext((ATermList) y_42);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_42), not_null(z_42)), (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(c_43)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  n_43 :
  if(match_cons(u_43, sym__2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      o_43 :
      if(((ATermList) v_43 == ATempty))
        {
          t_43 :
          if(((ATermList) w_43 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm y_43 (ATerm t)
  {
    ATerm b_15 = t;
    if((PushChoice() == 0))
      {
        t = k_76(t);
        PopChoice();
      }
    else
      {
        t = b_15;
        {
          t = l_76(t);
          {
            t = _2(t, n_76, y_43);
            t = m_76(t);
          }
        }
      }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_Cong_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,s_45 = NULL;
        ATerm c_15;
        c_15 = t;
        {
          ATerm z_44 = NULL;
          t = not_null(r_44);
          {
            ATerm c_45 = NULL;
            t = map_1(t, new_0);
            {
              z_44 = t;
              {
                if(((w_44 != NULL) && (w_44 != z_44)))
                  _fail(z_44);
                else
                  w_44 = z_44;
                {
                  t = not_null(w_44);
                  {
                    ATerm d_45 = NULL;
                    ATerm h_3 (ATerm t)
                    {
                      ATerm a_45 = NULL;
                      ATerm b_45 = NULL;
                      b_45 = t;
                      if(((a_45 != NULL) && (a_45 != b_45)))
                        _fail(b_45);
                      else
                        a_45 = b_45;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_45));
                      return(t);
                    }
                    t = map_1(t, h_3);
                    {
                      c_45 = t;
                      {
                        if(((u_44 != NULL) && (u_44 != c_45)))
                          _fail(c_45);
                        else
                          u_44 = c_45;
                        {
                          t = not_null(r_44);
                          {
                            ATerm g_45 = NULL;
                            t = map_1(t, new_0);
                            {
                              d_45 = t;
                              {
                                if(((x_44 != NULL) && (x_44 != d_45)))
                                  _fail(d_45);
                                else
                                  x_44 = d_45;
                                {
                                  t = not_null(x_44);
                                  {
                                    ATerm h_45 = NULL,r_45 = NULL;
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm e_45 = NULL;
                                      ATerm f_45 = NULL;
                                      f_45 = t;
                                      if(((e_45 != NULL) && (e_45 != f_45)))
                                        _fail(f_45);
                                      else
                                        e_45 = f_45;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_45));
                                      return(t);
                                    }
                                    t = map_1(t, i_3);
                                    {
                                      g_45 = t;
                                      {
                                        if(((v_44 != NULL) && (v_44 != g_45)))
                                          _fail(g_45);
                                        else
                                          v_44 = g_45;
                                        {
                                          ATerm i_45 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              i_45 = t;
                                              if(((h_45 != NULL) && (h_45 != i_45)))
                                                _fail(i_45);
                                              else
                                                h_45 = i_45;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_45), not_null(r_44));
                                            {
                                              ATerm k_3 (ATerm t)
                                              {
                                                ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
                                                j_45 = t;
                                                k_44 :
                                                if(match_cons(j_45, sym__2))
                                                  {
                                                    k_45 = ATgetArgument(j_45, 0);
                                                    n_45 = ATgetArgument(j_45, 1);
                                                    l_44 :
                                                    if(match_cons(k_45, sym__2))
                                                      {
                                                        l_45 = ATgetArgument(k_45, 0);
                                                        m_45 = ATgetArgument(k_45, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_45)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, k_3);
                                              {
                                                r_45 = t;
                                                if(((y_44 != NULL) && (y_44 != r_45)))
                                                  _fail(r_45);
                                                else
                                                  y_44 = r_45;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = c_15;
        {
          ATerm t_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
          {
            t = conc_0(t);
            {
              t_45 = t;
              if(((s_45 != NULL) && (s_45 != t_45)))
                _fail(t_45);
              else
                s_45 = t_45;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_44), not_null(u_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_44)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_44), not_null(v_44))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_Cong_2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      {
        ATerm q_46 = NULL;
        ATerm u_46 = NULL;
        t = not_null(n_46);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm r_46 = NULL,s_46 = NULL;
            s_46 = t;
            i_46 :
            if(match_cons(s_46, sym_Match_1))
              {
                r_46 = ATgetArgument(s_46, 0);
                t = not_null(r_46);
              }
            else
              {
                if(match_cons(s_46, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_3);
          {
            u_46 = t;
            if(((q_46 != NULL) && (q_46 != u_46)))
              _fail(u_46);
            else
              q_46 = u_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(m_46), not_null(q_46)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  a_47 :
  if(match_cons(c_47, sym_Scope_2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      b_47 :
      if(((ATermList) d_47 == ATempty))
        {
          t = not_null(e_47);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,z_49 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  o_47 :
  if(match_cons(f_50, sym_Where_1))
    {
      g_50 = ATgetArgument(f_50, 0);
      p_47 :
      if(match_cons(g_50, sym_Seq_2))
        {
          e_50 = ATgetArgument(g_50, 0);
          t_48 = ATgetArgument(g_50, 1);
          q_47 :
          if(match_cons(e_50, sym_Where_1))
            {
              s_48 = ATgetArgument(e_50, 0);
              r_47 :
              if(match_cons(t_48, sym_Seq_2))
                {
                  z_49 = ATgetArgument(t_48, 0);
                  d_50 = ATgetArgument(t_48, 1);
                  s_47 :
                  if(match_cons(z_49, sym_Build_1))
                    {
                      c_50 = ATgetArgument(z_49, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_50)), not_null(d_50))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(g_50, sym_Where_1))
            {
              e_50 = ATgetArgument(g_50, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_50));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(f_50, sym_Test_1))
        {
          g_50 = ATgetArgument(f_50, 0);
          t_47 :
          if(match_cons(g_50, sym_Test_1))
            {
              e_50 = ATgetArgument(g_50, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_50));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_50, sym_Not_1))
            {
              g_50 = ATgetArgument(f_50, 0);
              r_48 :
              if(match_cons(g_50, sym_Not_1))
                {
                  e_50 = ATgetArgument(g_50, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_50));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(f_50, sym_LChoice_2))
                {
                  g_50 = ATgetArgument(f_50, 0);
                  h_50 = ATgetArgument(f_50, 1);
                  {
                    if(((g_50 != NULL) && (g_50 != h_50)))
                      _fail(h_50);
                    else
                      g_50 = h_50;
                    t = not_null(g_50);
                  }
                }
              else
                {
                  if(match_cons(f_50, sym_Choice_2))
                    {
                      g_50 = ATgetArgument(f_50, 0);
                      h_50 = ATgetArgument(f_50, 1);
                      {
                        if(((g_50 != NULL) && (g_50 != h_50)))
                          _fail(h_50);
                        else
                          g_50 = h_50;
                        t = not_null(g_50);
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  d_51 = t;
  z_50 :
  if(match_cons(d_51, sym_LChoice_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      h_51 = ATgetArgument(d_51, 1);
      a_51 :
      if(match_cons(e_51, sym_LChoice_2))
        {
          f_51 = ATgetArgument(e_51, 0);
          g_51 = ATgetArgument(e_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_51), not_null(h_51)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_51, sym_Seq_2))
        {
          e_51 = ATgetArgument(d_51, 0);
          h_51 = ATgetArgument(d_51, 1);
          b_51 :
          if(match_cons(e_51, sym_Seq_2))
            {
              f_51 = ATgetArgument(e_51, 0);
              g_51 = ATgetArgument(e_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_51), not_null(h_51)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(d_51, sym_Choice_2))
            {
              e_51 = ATgetArgument(d_51, 0);
              h_51 = ATgetArgument(d_51, 1);
              c_51 :
              if(match_cons(e_51, sym_Choice_2))
                {
                  f_51 = ATgetArgument(e_51, 0);
                  g_51 = ATgetArgument(e_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_51), not_null(h_51)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  q_52 = t;
  i_52 :
  if(match_cons(q_52, sym_InfixApp_3))
    {
      r_52 = ATgetArgument(q_52, 0);
      n_52 = ATgetArgument(q_52, 1);
      m_52 = ATgetArgument(q_52, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_52), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), not_null(r_52))));
    }
  else
    {
      if(match_cons(q_52, sym_BAM_3))
        {
          r_52 = ATgetArgument(q_52, 0);
          n_52 = ATgetArgument(q_52, 1);
          m_52 = ATgetArgument(q_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(m_52))), not_null(r_52)), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_52))));
        }
      else
        {
          if(match_cons(q_52, sym_AM_2))
            {
              r_52 = ATgetArgument(q_52, 0);
              n_52 = ATgetArgument(q_52, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_52)));
            }
          else
            {
              if(match_cons(q_52, sym_MA_2))
                {
                  r_52 = ATgetArgument(q_52, 0);
                  n_52 = ATgetArgument(q_52, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_52)), not_null(n_52));
                }
              else
                {
                  if(match_cons(q_52, sym_BA_2))
                    {
                      r_52 = ATgetArgument(q_52, 0);
                      n_52 = ATgetArgument(q_52, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_52)), not_null(r_52));
                    }
                  else
                    {
                      if(match_cons(q_52, sym_Lets_2))
                        {
                          r_52 = ATgetArgument(q_52, 0);
                          n_52 = ATgetArgument(q_52, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_52), not_null(n_52));
                        }
                      else
                        {
                          if(match_cons(q_52, sym_LChoices_1))
                            {
                              r_52 = ATgetArgument(q_52, 0);
                              j_52 :
                              if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                {
                                  o_52 = ATgetFirst((ATermList) r_52);
                                  p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_52), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_52)));
                                }
                              else
                                {
                                  if(((ATermList) r_52 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_52, sym_Choices_1))
                                {
                                  r_52 = ATgetArgument(q_52, 0);
                                  k_52 :
                                  if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                    {
                                      o_52 = ATgetFirst((ATermList) r_52);
                                      p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_52), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_52)));
                                    }
                                  else
                                    {
                                      if(((ATermList) r_52 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_52, sym_Seqs_1))
                                    {
                                      r_52 = ATgetArgument(q_52, 0);
                                      l_52 :
                                      if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                        {
                                          o_52 = ATgetFirst((ATermList) r_52);
                                          p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_52), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_52)));
                                        }
                                      else
                                        {
                                          if(((ATermList) r_52 == ATempty))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Id_0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
ATerm F15_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  b_54 = t;
  z_53 :
  if(match_cons(b_54, sym_Where_1))
    {
      c_54 = ATgetArgument(b_54, 0);
      a_54 :
      if(match_cons(c_54, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  f_54 :
  if(match_cons(h_54, sym_LChoice_2))
    {
      i_54 = ATgetArgument(h_54, 0);
      j_54 = ATgetArgument(h_54, 1);
      g_54 :
      if(match_cons(j_54, sym_Fail_0))
        t = not_null(i_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  n_54 :
  if(match_cons(p_54, sym_LChoice_2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      o_54 :
      if(match_cons(q_54, sym_Fail_0))
        t = not_null(r_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  v_54 :
  if(match_cons(x_54, sym_Choice_2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      w_54 :
      if(match_cons(z_54, sym_Fail_0))
        t = not_null(y_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  d_55 :
  if(match_cons(f_55, sym_Choice_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      e_55 :
      if(match_cons(g_55, sym_Fail_0))
        t = not_null(h_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  m_55 :
  if(match_cons(n_55, sym_Cong_2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      {
        t = not_null(p_55);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm s_55 = NULL;
            s_55 = t;
            l_55 :
            if(!(match_cons(s_55, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, o_3);
        }
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  v_55 :
  if(match_cons(x_55, sym_Path_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      w_55 :
      if(match_cons(z_55, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_One_1))
    {
      g_56 = ATgetArgument(f_56, 0);
      e_56 :
      if(match_cons(g_56, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  l_56 = t;
  j_56 :
  if(match_cons(l_56, sym_Some_1))
    {
      m_56 = ATgetArgument(l_56, 0);
      k_56 :
      if(match_cons(m_56, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  p_56 :
  if(match_cons(r_56, sym_Rec_2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      q_56 :
      if(match_cons(t_56, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  x_56 :
  if(match_cons(z_56, sym_Scope_2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      y_56 :
      if(match_cons(b_57, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  f_57 :
  if(match_cons(h_57, sym_Seq_2))
    {
      i_57 = ATgetArgument(h_57, 0);
      j_57 = ATgetArgument(h_57, 1);
      g_57 :
      if(match_cons(i_57, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  p_57 = t;
  n_57 :
  if(match_cons(p_57, sym_Not_1))
    {
      q_57 = ATgetArgument(p_57, 0);
      o_57 :
      if(match_cons(q_57, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  v_57 = t;
  t_57 :
  if(match_cons(v_57, sym_Test_1))
    {
      w_57 = ATgetArgument(v_57, 0);
      u_57 :
      if(match_cons(w_57, sym_Fail_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm d_15 = t;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = d_15;
      {
        ATerm e_15 = t;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = e_15;
            {
              ATerm f_15 = t;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = f_15;
                  {
                    ATerm g_15 = t;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = g_15;
                        {
                          ATerm o_15 = t;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = o_15;
                              {
                                ATerm q_15 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_15;
                                    {
                                      ATerm s_15 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_15;
                                          {
                                            ATerm t_15 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = t_15;
                                                {
                                                  ATerm y_15 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_15;
                                                      {
                                                        ATerm z_15 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_15;
                                                            {
                                                              ATerm b_16 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = b_16;
                                                                  {
                                                                    ATerm c_16 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_16;
                                                                        {
                                                                          ATerm d_16 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_16;
                                                                              t = F15_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm I16_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_Match_1))
    {
      c_58 = ATgetArgument(b_58, 0);
      a_58 :
      if(match_cons(c_58, sym_Wld_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  f_58 :
  if(match_cons(h_58, sym_Where_1))
    {
      i_58 = ATgetArgument(h_58, 0);
      g_58 :
      if(match_cons(i_58, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  n_58 = t;
  l_58 :
  if(match_cons(n_58, sym_All_1))
    {
      o_58 = ATgetArgument(n_58, 0);
      m_58 :
      if(match_cons(o_58, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  s_58 :
  if(match_cons(u_58, sym_Rec_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      t_58 :
      if(match_cons(w_58, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  f_59 = t;
  a_59 :
  if(match_cons(f_59, sym_Scope_2))
    {
      g_59 = ATgetArgument(f_59, 0);
      h_59 = ATgetArgument(f_59, 1);
      c_59 :
      if(match_cons(h_59, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  l_59 :
  if(match_cons(b_60, sym_LChoice_2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      a_60 :
      if(match_cons(c_60, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  j_60 :
  if(match_cons(n_60, sym_Seq_2))
    {
      o_60 = ATgetArgument(n_60, 0);
      p_60 = ATgetArgument(n_60, 1);
      k_60 :
      if(match_cons(p_60, sym_Id_0))
        t = not_null(o_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  v_60 :
  if(match_cons(z_60, sym_Seq_2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      w_60 :
      if(match_cons(a_61, sym_Id_0))
        t = not_null(b_61);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL;
  k_61 = t;
  h_61 :
  if(match_cons(k_61, sym_Not_1))
    {
      l_61 = ATgetArgument(k_61, 0);
      i_61 :
      if(match_cons(l_61, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL;
  q_61 = t;
  o_61 :
  if(match_cons(q_61, sym_Test_1))
    {
      r_61 = ATgetArgument(q_61, 0);
      p_61 :
      if(match_cons(r_61, sym_Id_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm f_16 = t;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = f_16;
      {
        ATerm j_16 = t;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = j_16;
            {
              ATerm k_16 = t;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = k_16;
                  {
                    ATerm m_16 = t;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_16;
                        {
                          ATerm n_16 = t;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = n_16;
                              {
                                ATerm p_16 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_16;
                                    {
                                      ATerm q_16 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_16;
                                          {
                                            ATerm u_16 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_16;
                                                {
                                                  ATerm v_16 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_16;
                                                      t = I16_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Simplify_0 (ATerm t)
{
  ATerm w_16 = t;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = w_16;
      {
        ATerm f_17 = t;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = f_17;
            {
              ATerm g_17 = t;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = g_17;
                  {
                    ATerm h_17 = t;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_17;
                        {
                          ATerm i_17 = t;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_17;
                              {
                                ATerm j_17 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_17;
                                    {
                                      ATerm k_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_17;
                                          t = TransformingCongruence_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm t_61 (ATerm t)
  {
    ATerm l_17 = t;
    if((PushChoice() == 0))
      {
        t = f_66(t);
        t = t_61(t);
        PopChoice();
      }
    else
      {
        t = l_17;
        t = g_66(t);
      }
    return(t);
  }
  t = t_61(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_66 (ATerm))
{
  t = repeat_2(t, i_66, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm u_61 (ATerm t)
  {
    t = i_79(t);
    {
      t = _all(t, u_61);
      t = i_79(t);
    }
    return(t);
  }
  t = u_61(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, p_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, z_3);
    }
    return(t);
  }
  t = map_1(t, q_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm y_61 = NULL,z_61 = NULL;
  y_61 = t;
  x_61 :
  if(match_cons(y_61, sym_Strategies_1))
    {
      z_61 = ATgetArgument(y_61, 0);
      {
        ATerm b_62 = NULL;
        t = not_null(z_61);
        {
          t = b_59(t);
          {
            b_62 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm i_62 = NULL,j_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym_Specification_1))
    {
      j_62 = ATgetArgument(i_62, 0);
      {
        ATerm l_62 = NULL;
        t = not_null(j_62);
        {
          t = d_59(t);
          {
            l_62 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, g_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_4);
    return(t);
  }
  t = Specification_1(t, a_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm a_50 (ATerm), ATerm b_50 (ATerm))
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t_62 = t;
  s_62 :
  if(match_cons(t_62, sym__2))
    {
      u_62 = ATgetArgument(t_62, 0);
      v_62 = ATgetArgument(t_62, 1);
      {
        ATerm y_62 = NULL;
        t = not_null(u_62);
        {
          ATerm a_63 = NULL;
          t = a_50(t);
          {
            y_62 = t;
            {
              t = not_null(v_62);
              {
                t = b_50(t);
                {
                  a_63 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_62), not_null(a_63));
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
  ATerm n_63 = NULL;
  ATerm m_17;
  m_17 = t;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm o_63 = NULL,p_63 = NULL;
      o_63 = t;
      m_63 :
      if(match_cons(o_63, sym_Program_1))
        {
          p_63 = ATgetArgument(o_63, 0);
          if(((n_63 != NULL) && (n_63 != p_63)))
            _fail(p_63);
          else
            n_63 = p_63;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, h_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(n_63)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = m_17;
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
  ATerm w_63 = NULL,x_63 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm n_17 = t;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_63 = NULL;
            y_63 = t;
            r_63 :
            if(!(match_cons(y_63, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_4);
          PopChoice();
          _fail(t);
        }
      else
        t = n_17;
      return(t);
    }
    t = _2(t, s_4, _id);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm a_5 (ATerm t)
        {
          ATerm z_63 = NULL,a_64 = NULL;
          z_63 = t;
          t_63 :
          if(match_cons(z_63, sym_Runtime_1))
            {
              a_64 = ATgetArgument(z_63, 0);
              if(((x_63 != NULL) && (x_63 != a_64)))
                _fail(a_64);
              else
                x_63 = a_64;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_5);
        return(t);
      }
      t = _2(t, y_4, _id);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm b_64 = NULL,d_64 = NULL;
            b_64 = t;
            v_63 :
            if(match_cons(b_64, sym_Program_1))
              {
                d_64 = ATgetArgument(b_64, 0);
                if(((w_63 != NULL) && (w_63 != d_64)))
                  _fail(d_64);
                else
                  w_63 = d_64;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_5);
          return(t);
        }
        t = _2(t, b_5, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(x_63)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(w_63)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_4);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_64 = NULL,p_64 = NULL,q_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym__2))
    {
      p_64 = ATgetArgument(l_64, 0);
      q_64 = ATgetArgument(l_64, 1);
      t = SSL_WriteToTextFile(not_null(p_64), not_null(q_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_64 = NULL,z_64 = NULL,a_65 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym__2))
    {
      z_64 = ATgetArgument(w_64, 0);
      a_65 = ATgetArgument(w_64, 1);
      t = SSL_WriteToBinaryFile(not_null(z_64), not_null(a_65));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_65 = NULL;
  ATerm r_17;
  r_17 = t;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm t_17 = t;
      if((PushChoice() == 0))
        {
          ATerm a_6 (ATerm t)
          {
            ATerm p_65 = NULL,q_65 = NULL;
            p_65 = t;
            l_65 :
            if(match_cons(p_65, sym_Output_1))
              {
                q_65 = ATgetArgument(p_65, 0);
                if(((o_65 != NULL) && (o_65 != q_65)))
                  _fail(q_65);
                else
                  o_65 = q_65;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_6);
          PopChoice();
        }
      else
        {
          t = t_17;
          {
            ATerm r_65 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              r_65 = t;
              if(((o_65 != NULL) && (o_65 != r_65)))
                _fail(r_65);
              else
                o_65 = r_65;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_5, _id);
  }
  t = r_17;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        t = not_null(o_65);
        return(t);
      }
      t = split_2(t, c_6, _id);
      return(t);
    }
    t = _2(t, _id, b_6);
    {
      ATerm u_17 = t;
      if((PushChoice() == 0))
        {
          ATerm d_6 (ATerm t)
          {
            ATerm e_6 (ATerm t)
            {
              ATerm s_65 = NULL;
              s_65 = t;
              n_65 :
              if(!(match_cons(s_65, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, e_6);
            return(t);
          }
          t = _2(t, d_6, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = u_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm y_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  ATerm v_17;
  v_17 = t;
  t = dtime_0(t);
  t = v_17;
  {
    t = y_64(t);
    {
      ATerm w_17;
      w_17 = t;
      {
        ATerm z_65 = NULL;
        t = dtime_0(t);
        {
          z_65 = t;
          if(((y_65 != NULL) && (y_65 != z_65)))
            _fail(z_65);
          else
            y_65 = z_65;
        }
      }
      t = w_17;
      {
        a_66 = t;
        x_65 :
        if(match_cons(a_66, sym__2))
          {
            b_66 = ATgetArgument(a_66, 0);
            c_66 = ATgetArgument(a_66, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_66)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_65))), not_null(c_66));
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
  ATerm m_66 = NULL;
  m_66 = t;
  t = SSL_ReadFromFile(not_null(m_66));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm r_66 = NULL,t_66 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm s_66 = NULL;
    t = x_77(t);
    {
      s_66 = t;
      if(((r_66 != NULL) && (r_66 != s_66)))
        _fail(s_66);
      else
        r_66 = s_66;
    }
  }
  t = x_17;
  {
    ATerm u_66 = NULL;
    t = y_77(t);
    {
      u_66 = t;
      if(((t_66 != NULL) && (t_66 != u_66)))
        _fail(u_66);
      else
        t_66 = u_66;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_66), not_null(t_66));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_67 = NULL;
  ATerm y_17;
  y_17 = t;
  {
    ATerm e_18 = t;
    if((PushChoice() == 0))
      {
        ATerm n_6 (ATerm t)
        {
          ATerm h_67 = NULL,i_67 = NULL;
          h_67 = t;
          e_67 :
          if(match_cons(h_67, sym_Input_1))
            {
              i_67 = ATgetArgument(h_67, 0);
              if(((g_67 != NULL) && (g_67 != i_67)))
                _fail(i_67);
              else
                g_67 = i_67;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_6);
        PopChoice();
      }
    else
      {
        t = e_18;
        {
          ATerm j_67 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            j_67 = t;
            if(((g_67 != NULL) && (g_67 != j_67)))
              _fail(j_67);
            else
              g_67 = j_67;
          }
        }
      }
  }
  t = y_17;
  {
    ATerm o_6 (ATerm t)
    {
      t = not_null(g_67);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_67 = NULL;
  n_67 = t;
  m_67 :
  if(!(match_cons(n_67, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm f_18 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_18;
        {
          ATerm g_18 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_6);
  t = x_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_67 = NULL;
  p_67 = t;
  t = SSL_table_create(not_null(p_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  {
    ATerm i_18;
    i_18 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(t_67));
          t = table_put_0(t);
        }
      }
    }
    t = i_18;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  b_68 = t;
  z_67 :
  if(match_string(b_68, "register-usage-info"))
    t = register_usage_1(t, n_0);
  else
    {
      if(((ATgetType(b_68) == AT_LIST) && ((ATermList) b_68 != ATempty)))
        {
          c_68 = ATgetFirst((ATermList) b_68);
          d_68 = (ATerm) ATgetNext((ATermList) b_68);
          a_68 :
          if(((ATgetType(d_68) == AT_LIST) && ((ATermList) d_68 != ATempty)))
            {
              e_68 = ATgetFirst((ATermList) d_68);
              f_68 = (ATerm) ATgetNext((ATermList) d_68);
              {
                ATerm n_68 = NULL;
                ATerm k_18;
                k_18 = t;
                {
                  t = not_null(c_68);
                  t = l_0(t);
                }
                t = k_18;
                {
                  ATerm o_68 = NULL;
                  t = not_null(e_68);
                  {
                    t = m_0(t);
                    {
                      o_68 = t;
                      if(((n_68 != NULL) && (n_68 != o_68)))
                        _fail(o_68);
                      else
                        n_68 = o_68;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_68)), not_null(n_68));
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
  ATerm l_18 = t;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm e_69 = NULL;
        e_69 = t;
        s_68 :
        if(!(match_string(e_69, "-S")))
          {
            if(!(match_string(e_69, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, u_6, v_6, w_6);
      PopChoice();
    }
  else
    {
      t = l_18;
      {
        ATerm m_18 = t;
        if((PushChoice() == 0))
          {
            ATerm z_6 (ATerm t)
            {
              ATerm f_69 = NULL;
              f_69 = t;
              t_68 :
              if(!(match_string(f_69, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, z_6, i_7, j_7);
            PopChoice();
          }
        else
          {
            t = m_18;
            {
              ATerm n_18 = t;
              if((PushChoice() == 0))
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm g_69 = NULL;
                    g_69 = t;
                    u_68 :
                    if(!(match_string(g_69, "-v")))
                      {
                        if(!(match_string(g_69, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm r_7 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, k_7, q_7, r_7);
                  PopChoice();
                }
              else
                {
                  t = n_18;
                  {
                    ATerm o_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm s_7 (ATerm t)
                        {
                          ATerm j_69 = NULL;
                          j_69 = t;
                          v_68 :
                          if(!(match_string(j_69, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_7 (ATerm t)
                        {
                          ATerm k_69 = NULL;
                          ATerm l_69 = NULL;
                          l_69 = t;
                          if(((k_69 != NULL) && (k_69 != l_69)))
                            _fail(l_69);
                          else
                            k_69 = l_69;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_69));
                          return(t);
                        }
                        ATerm u_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, s_7, t_7, u_7);
                        PopChoice();
                      }
                    else
                      {
                        t = o_18;
                        {
                          ATerm p_18 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm v_7 (ATerm t)
                              {
                                ATerm m_69 = NULL;
                                m_69 = t;
                                x_68 :
                                if(!(match_string(m_69, "-i")))
                                  {
                                    if(!(match_string(m_69, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                ATerm n_69 = NULL;
                                ATerm o_69 = NULL;
                                o_69 = t;
                                if(((n_69 != NULL) && (n_69 != o_69)))
                                  _fail(o_69);
                                else
                                  n_69 = o_69;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_69));
                                return(t);
                              }
                              ATerm x_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, v_7, w_7, x_7);
                              PopChoice();
                            }
                          else
                            {
                              t = p_18;
                              {
                                ATerm q_18 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_8 (ATerm t)
                                    {
                                      ATerm p_69 = NULL;
                                      p_69 = t;
                                      z_68 :
                                      if(!(match_string(p_69, "-o")))
                                        {
                                          if(!(match_string(p_69, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_8 (ATerm t)
                                    {
                                      ATerm q_69 = NULL;
                                      ATerm r_69 = NULL;
                                      r_69 = t;
                                      if(((q_69 != NULL) && (q_69 != r_69)))
                                        _fail(r_69);
                                      else
                                        q_69 = r_69;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_69));
                                      return(t);
                                    }
                                    ATerm f_8 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_8, d_8, f_8);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_18;
                                    {
                                      ATerm r_18 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_8 (ATerm t)
                                          {
                                            ATerm s_69 = NULL;
                                            s_69 = t;
                                            b_69 :
                                            if(!(match_string(s_69, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm i_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm j_8 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, h_8, i_8, j_8);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_18;
                                          {
                                            ATerm k_8 (ATerm t)
                                            {
                                              ATerm t_69 = NULL;
                                              t_69 = t;
                                              d_69 :
                                              if(!(match_string(t_69, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm l_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm m_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, k_8, l_8, m_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_69 = NULL;
  z_69 = t;
  t = SSL_table_destroy(not_null(z_69));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_70 = NULL;
  f_70 = t;
  t = SSL_exit(not_null(f_70));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_70 = NULL;
  q_70 = t;
  t = SSL_implode_string(not_null(q_70));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm t_70 (ATerm t)
  {
    ATerm s_18 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_70);
        PopChoice();
      }
    else
      {
        t = s_18;
        {
          t = Nil_0(t);
          t = g_75(t);
        }
      }
    return(t);
  }
  t = t_70(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_18 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = t_18;
      {
        ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
        w_70 = t;
        v_70 :
        if(((ATgetType(w_70) == AT_LIST) && ((ATermList) w_70 != ATempty)))
          {
            x_70 = ATgetFirst((ATermList) w_70);
            y_70 = (ATerm) ATgetNext((ATermList) w_70);
            {
              t = not_null(x_70);
              {
                ATerm n_8 (ATerm t)
                {
                  t = not_null(y_70);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_8);
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
  ATerm e_71 = NULL;
  e_71 = t;
  t = SSL_explode_string(not_null(e_71));
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
ATerm long_description_1 (ATerm t, ATerm e_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm h_71 (ATerm t)
  {
    ATerm u_18 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = u_18;
        t = Cons_2(t, s_74, h_71);
      }
    return(t);
  }
  t = h_71(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
  r_71 = t;
  o_71 :
  if(((ATgetType(r_71) == AT_LIST) && ((ATermList) r_71 != ATempty)))
    {
      p_71 = ATgetFirst((ATermList) r_71);
      q_71 = (ATerm) ATgetNext((ATermList) r_71);
      {
        t = not_null(q_71);
        {
          ATerm s_8 (ATerm t)
          {
            ATerm u_71 = NULL;
            ATerm v_71 = NULL;
            t = k_0(t);
            {
              v_71 = t;
              if(((u_71 != NULL) && (u_71 != v_71)))
                _fail(v_71);
              else
                u_71 = v_71;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(u_71)), not_null(p_71));
            return(t);
          }
          t = reverse_1(t, s_8);
        }
      }
    }
  else
    {
      if(((ATermList) r_71 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = k_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, t_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_52 (ATerm))
{
  ATerm c_72 = NULL,d_72 = NULL;
  c_72 = t;
  b_72 :
  if(match_cons(c_72, sym_Program_1))
    {
      d_72 = ATgetArgument(c_72, 0);
      {
        ATerm f_72 = NULL;
        t = not_null(d_72);
        {
          t = d_52(t);
          {
            f_72 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_72));
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
  ATerm r_72 = NULL;
  ATerm v_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm s_72 = NULL;
      s_72 = t;
      if(((r_72 != NULL) && (r_72 != s_72)))
        _fail(s_72);
      else
        r_72 = s_72;
      return(t);
    }
    t = Program_1(t, x_8);
    return(t);
  }
  t = option_defined_1(t, v_8);
  {
    ATerm y_8 (ATerm t)
    {
      ATerm t_72 = NULL;
      ATerm u_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm z_8 (ATerm t)
        {
          t = not_null(r_72);
          return(t);
        }
        t = short_description_1(t, z_8);
        {
          t = concat_strings_0(t);
          {
            u_72 = t;
            if(((t_72 != NULL) && (t_72 != u_72)))
              _fail(u_72);
            else
              t_72 = u_72;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(t_72)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_8);
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
                ATerm a_9 (ATerm t)
                {
                  ATerm v_72 = NULL;
                  v_72 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_72)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_9);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm a_73 = NULL;
                    ATerm b_73 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm g_9 (ATerm t)
                      {
                        t = not_null(r_72);
                        return(t);
                      }
                      t = long_description_1(t, g_9);
                      {
                        t = concat_strings_0(t);
                        {
                          b_73 = t;
                          if(((a_73 != NULL) && (a_73 != b_73)))
                            _fail(b_73);
                          else
                            a_73 = b_73;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_73)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_9);
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
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  h_73 :
  if(match_cons(i_73, sym__2))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      {
        ATerm z_18;
        z_18 = t;
        t = SSL_printnl(not_null(j_73), not_null(k_73));
        t = z_18;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_52 (ATerm))
{
  ATerm r_73 = NULL,s_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym_Undefined_1))
    {
      s_73 = ATgetArgument(r_73, 0);
      {
        ATerm u_73 = NULL;
        t = not_null(s_73);
        {
          t = e_52(t);
          {
            u_73 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_73));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm y_73 (ATerm t)
  {
    ATerm a_19 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_75, _id);
        PopChoice();
      }
    else
      {
        t = a_19;
        t = Cons_2(t, _id, y_73);
      }
    return(t);
  }
  t = y_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_64 (ATerm))
{
  t = fetch_1(t, c_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_74 = NULL;
  a_74 = t;
  z_73 :
  if(!(match_cons(a_74, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm l_19 = t;
  if((PushChoice() == 0))
    {
      t = p_78(t);
      PopChoice();
    }
  else
    {
      t = l_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym__2))
    {
      e_74 = ATgetArgument(d_74, 0);
      f_74 = ATgetArgument(d_74, 1);
      t = SSL_table_get(not_null(e_74), not_null(f_74));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym__3))
    {
      n_74 = ATgetArgument(m_74, 0);
      o_74 = ATgetArgument(m_74, 1);
      p_74 = ATgetArgument(m_74, 2);
      {
        ATerm m_19;
        m_19 = t;
        {
          ATerm v_74 = NULL;
          ATerm w_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), not_null(o_74));
          {
            ATerm n_19 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = n_19;
                t = (ATerm) ATempty;
              }
            {
              w_74 = t;
              if(((v_74 != NULL) && (v_74 != w_74)))
                _fail(w_74);
              else
                v_74 = w_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_74), not_null(o_74), (ATerm) ATinsert(CheckATermList(not_null(v_74)), not_null(p_74)));
            t = table_put_0(t);
          }
        }
        t = m_19;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm c_75 = NULL;
  ATerm d_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = i_63(t);
    {
      d_75 = t;
      if(((c_75 != NULL) && (c_75 != d_75)))
        _fail(d_75);
      else
        c_75 = d_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(c_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  k_75 :
  if(match_string(l_75, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(l_75) == AT_LIST) && ((ATermList) l_75 != ATempty)))
        {
          m_75 = ATgetFirst((ATermList) l_75);
          n_75 = (ATerm) ATgetNext((ATermList) l_75);
          {
            ATerm q_75 = NULL;
            ATerm o_19;
            o_19 = t;
            {
              t = not_null(m_75);
              t = h_0(t);
            }
            t = o_19;
            {
              ATerm r_75 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = i_0(t);
                {
                  r_75 = t;
                  if(((q_75 != NULL) && (q_75 != r_75)))
                    _fail(r_75);
                  else
                    q_75 = r_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_75)), not_null(q_75));
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
  ATerm h_9 (ATerm t)
  {
    ATerm w_75 = NULL;
    w_75 = t;
    v_75 :
    if(!(match_string(w_75, "--help")))
      {
        if(!(match_string(w_75, "-h")))
          {
            if(!(match_string(w_75, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, h_9, i_9, j_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL;
  z_75 = t;
  y_75 :
  if(((ATgetType(z_75) == AT_LIST) && ((ATermList) z_75 != ATempty)))
    {
      a_76 = ATgetFirst((ATermList) z_75);
      b_76 = (ATerm) ATgetNext((ATermList) z_75);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_76)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_61 (ATerm), ATerm d_61 (ATerm))
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  j_76 :
  if(((ATgetType(q_76) == AT_LIST) && ((ATermList) q_76 != ATempty)))
    {
      r_76 = ATgetFirst((ATermList) q_76);
      s_76 = (ATerm) ATgetNext((ATermList) q_76);
      {
        ATerm v_76 = NULL;
        t = not_null(r_76);
        {
          ATerm x_76 = NULL;
          t = c_61(t);
          {
            v_76 = t;
            {
              t = not_null(s_76);
              {
                t = d_61(t);
                {
                  x_76 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_76)), not_null(v_76));
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
  ATerm d_77 = NULL;
  d_77 = t;
  c_77 :
  if(((ATermList) d_77 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm p_19;
  p_19 = t;
  {
    ATerm k_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = g_63(t);
      return(t);
    }
    t = try_1(t, k_9);
  }
  t = p_19;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm f_77 = NULL;
      f_77 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_77));
      return(t);
    }
    ATerm s_9 (ATerm t)
    {
      ATerm q_19 = t;
      if((PushChoice() == 0))
        {
          ATerm r_19 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = r_19;
              {
                t = g_63(t);
                t = Cons_2(t, _id, s_9);
              }
            }
          PopChoice();
        }
      else
        {
          t = q_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_9, s_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  ATerm z_19;
  z_19 = t;
  {
    ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
    o_77 = t;
    k_77 :
    if(match_cons(o_77, sym__3))
      {
        p_77 = ATgetArgument(o_77, 0);
        q_77 = ATgetArgument(o_77, 1);
        r_77 = ATgetArgument(o_77, 2);
        {
          if(((l_77 != NULL) && (l_77 != p_77)))
            _fail(p_77);
          else
            l_77 = p_77;
          {
            if(((m_77 != NULL) && (m_77 != q_77)))
              _fail(q_77);
            else
              m_77 = q_77;
            {
              if(((n_77 != NULL) && (n_77 != r_77)))
                _fail(r_77);
              else
                n_77 = r_77;
              t = SSL_table_put(not_null(l_77), not_null(m_77), not_null(n_77));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = z_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm u_77 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = a_20;
  {
    ATerm t_9 (ATerm t)
    {
      ATerm b_20 = t;
      if((PushChoice() == 0))
        {
          t = f_63(t);
          PopChoice();
        }
      else
        {
          t = b_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_9);
    {
      ATerm x_9 (ATerm t)
      {
        ATerm c_20 = t;
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
            t = c_20;
            {
              ATerm y_9 (ATerm t)
              {
                ATerm z_9 (ATerm t)
                {
                  ATerm v_77 = NULL;
                  v_77 = t;
                  if(((u_77 != NULL) && (u_77 != v_77)))
                    _fail(v_77);
                  else
                    u_77 = v_77;
                  return(t);
                }
                t = Undefined_1(t, z_9);
                return(t);
              }
              t = option_defined_1(t, y_9);
              {
                ATerm n_20;
                n_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_77)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = n_20;
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
      t = try_1(t, x_9);
      {
        ATerm p_20;
        p_20 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = p_20;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm a_10 (ATerm t)
  {
    ATerm q_20 = t;
    if((PushChoice() == 0))
      {
        t = n_64(t);
        PopChoice();
      }
    else
      {
        t = q_20;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_10);
  {
    t = store_options_0(t);
    {
      ATerm r_20 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, o_64);
          PopChoice();
        }
      else
        {
          t = r_20;
          {
            ATerm w_20 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, m_64);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = w_20;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  t = iowrap_3(t, h_64, i_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    t = _2(t, _id, e_64);
    return(t);
  }
  t = iowrap_2(t, b_10, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
