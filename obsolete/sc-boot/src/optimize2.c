#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
Symbol sym_Operations_1;
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
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm g_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm crush_3 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm z_73 (ATerm));
ATerm free_vars_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_79 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm g_77 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm alltd_1 (ATerm, ATerm g_81 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm i_82 (ATerm), ATerm j_82 (ATerm));
ATerm substitute_1 (ATerm, ATerm k_82 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm h_73 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm for_3 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm v_80 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm c_60 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_77 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm zip_1 (ATerm, ATerm e_75 (ATerm));
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm repeat_1 (ATerm, ATerm a_67 (ATerm));
ATerm downup_1 (ATerm, ATerm j_79 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm));
ATerm map_1 (ATerm, ATerm n_76 (ATerm));
ATerm Strategies_1 (ATerm, ATerm q_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_59 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm a_84 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_78 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm w_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_64 (ATerm));
ATerm need_help_1 (ATerm, ATerm c_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_64 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm isect_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  h_1 = t;
  e_1 :
  if(match_cons(h_1, sym_TCons_2))
    {
      i_1 = ATgetArgument(h_1, 0);
      j_1 = ATgetArgument(h_1, 1);
      f_1 :
      if(match_cons(j_1, sym_TCons_2))
        {
          k_1 = ATgetArgument(j_1, 0);
          l_1 = ATgetArgument(j_1, 1);
          g_1 :
          if(match_cons(l_1, sym_TNil_0))
            {
              ATerm o_1 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_1), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
              o_1 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_1), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_1), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm v_1 = NULL,w_1 = NULL;
  v_1 = t;
  u_1 :
  if(match_cons(v_1, sym_DynamicRules_1))
    {
      w_1 = ATgetArgument(v_1, 0);
      {
        ATerm y_1 = NULL;
        t = not_null(w_1);
        t = g_59(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(y_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
  g_2 = t;
  f_2 :
  if(match_cons(g_2, sym_Scope_2))
    {
      h_2 = ATgetArgument(g_2, 0);
      i_2 = ATgetArgument(g_2, 1);
      {
        ATerm l_2 = NULL;
        t = not_null(h_2);
        {
          ATerm n_2 = NULL;
          t = v_61(t);
          l_2 = t;
          t = not_null(i_2);
          t = w_61(t);
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_2), not_null(n_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm))
{
  ATerm m_7 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, b_83, z_82);
      PopChoice();
    }
  else
    {
      t = m_7;
      t = DynamicRules_1(t, z_82);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym_DynamicRules_1))
    {
      v_2 = ATgetArgument(u_2, 0);
      t = not_null(v_2);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
  d_3 = t;
  a_3 :
  if(match_cons(d_3, sym_Scope_2))
    {
      e_3 = ATgetArgument(d_3, 0);
      c_3 = ATgetArgument(d_3, 1);
      t = not_null(e_3);
    }
  else
    {
      if(match_cons(d_3, sym_LRule_1))
        {
          e_3 = ATgetArgument(d_3, 0);
          b_3 :
          if(match_cons(e_3, sym_Rule_3))
            {
              f_3 = ATgetArgument(e_3, 0);
              g_3 = ATgetArgument(e_3, 1);
              h_3 = ATgetArgument(e_3, 2);
              t = not_null(f_3);
              t = tvars_0(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_Var_1))
    {
      s_3 = ATgetArgument(r_3, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_3), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  b_4 = t;
  y_3 :
  if(match_cons(b_4, sym_TCons_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      z_3 :
      if(match_cons(d_4, sym_TCons_2))
        {
          e_4 = ATgetArgument(d_4, 0);
          f_4 = ATgetArgument(d_4, 1);
          a_4 :
          if(match_cons(f_4, sym_TNil_0))
            {
              t = not_null(c_4);
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm n_7 = t;
                  if(PushChoice()==0)
                    {
                      ATerm i_4 = NULL;
                      i_4 = t;
                      x_3 :
                      if(match_cons(i_4, sym_Nil_0))
                        t = not_null(e_4);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = n_7;
                      {
                        ATerm o_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm a_0 (ATerm t)
                            {
                              t = not_null(e_4);
                              return(t);
                            }
                            t = HdMember_1(t, a_0);
                            t = k_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = o_7;
                            t = Cons_2(t, _id, k_4);
                          }
                      }
                    }
                  return(t);
                }
                t = k_4(t);
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
ATerm foldr_3 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
    r_4 = t;
    q_4 :
    if(match_cons(r_4, sym_Nil_0))
      t = a_72(t);
    else
      {
        if(match_cons(r_4, sym_Cons_2))
          {
            s_4 = ATgetArgument(r_4, 0);
            t_4 = ATgetArgument(r_4, 1);
            {
              ATerm w_4 = NULL;
              t = not_null(s_4);
              {
                ATerm y_4 = NULL;
                t = c_72(t);
                w_4 = t;
                t = not_null(t_4);
                t = a_5(t);
                y_4 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_4), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = b_72(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm l_5 = NULL;
  ATerm n_5 = NULL;
  l_5 = t;
  {
    ATerm o_5 = NULL;
    ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
    t = not_null(l_5);
    o_5 = t;
    t = SSL_explode_term(not_null(o_5));
    q_5 = t;
    i_5 :
    if(match_cons(q_5, sym_TCons_2))
      {
        r_5 = ATgetArgument(q_5, 0);
        s_5 = ATgetArgument(q_5, 1);
        j_5 :
        if(match_cons(s_5, sym_TCons_2))
          {
            t_5 = ATgetArgument(s_5, 0);
            u_5 = ATgetArgument(s_5, 1);
            k_5 :
            if(match_cons(u_5, sym_TNil_0))
              {
                if(n_5 != NULL && n_5 != t_5)
                  _fail(t_5);
                else
                  n_5 = t_5;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(n_5);
    t = foldr_3(t, r_73, s_73, t_73);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, b_0, union_0, z_73);
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_6 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = y_68(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        {
          ATerm s_7 = t;
          if(PushChoice()==0)
            {
              ATerm z_5 = NULL;
              ATerm g_8;
              g_8 = t;
              {
                ATerm a_6 = NULL;
                t = z_68(t);
                a_6 = t;
                if(z_5 != NULL && z_5 != a_6)
                  _fail(a_6);
                else
                  z_5 = a_6;
              }
              t = g_8;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm e_0 (ATerm t)
                  {
                    t = not_null(z_5);
                    return(t);
                  }
                  t = split_2(t, b_6, e_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_69(t, c_0, b_6, d_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = s_7;
              t = collect_kids_1(t, b_6);
            }
        }
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym_Scope_2))
    {
      j_6 = ATgetArgument(i_6, 0);
      k_6 = ATgetArgument(i_6, 1);
      {
        ATerm n_6 = NULL;
        ATerm o_6 = NULL;
        t = not_null(k_6);
        {
          ATerm q_6 = NULL;
          t = tvars_0(t);
          o_6 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_6), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          q_6 = t;
          if(n_6 != NULL && n_6 != q_6)
            _fail(q_6);
          else
            n_6 = q_6;
          {
            ATerm i_8 = t;
            if(PushChoice()==0)
              {
                ATerm r_6 = NULL;
                r_6 = t;
                if(j_6 != NULL && j_6 != r_6)
                  _fail(r_6);
                else
                  j_6 = r_6;
                PopChoice();
                _fail(t);
              }
            else
              t = i_8;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_6), not_null(k_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = f_79(t);
    t = _all(t, w_6);
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm g_0 (ATerm t)
  {
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = CleanupScope_0(t);
        t = try_1(t, FuseScope_0);
        PopChoice();
      }
    else
      t = j_8;
    return(t);
  }
  t = topdown_1(t, g_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, h_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  ATerm q_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_7), not_null(h_7)));
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_7), not_null(j_7)));
    return(t);
  }
  f_7 = t;
  z_6 :
  if(match_cons(f_7, sym_Seq_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      a_7 :
      if(match_cons(h_7, sym_Scope_2))
        {
          i_7 = ATgetArgument(h_7, 0);
          j_7 = ATgetArgument(h_7, 1);
          b_7 :
          if(match_cons(g_7, sym_Scope_2))
            {
              d_7 = ATgetArgument(g_7, 0);
              e_7 = ATgetArgument(g_7, 1);
              {
                ATerm l_8 = t;
                if(PushChoice()==0)
                  {
                    t = q_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_8;
                    t = r_7(t);
                  }
              }
            }
          else
            t = r_7(t);
        }
      else
        {
          c_7 :
          if(match_cons(g_7, sym_Scope_2))
            {
              d_7 = ATgetArgument(g_7, 0);
              e_7 = ATgetArgument(g_7, 1);
              t = q_7(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm InlineDont_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  y_7 = t;
  t_7 :
  if(match_cons(y_7, sym_Let_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      f_8 = ATgetArgument(y_7, 1);
      u_7 :
      if(match_cons(z_7, sym_Cons_2))
        {
          a_8 = ATgetArgument(z_7, 0);
          e_8 = ATgetArgument(z_7, 1);
          v_7 :
          if(match_cons(a_8, sym_SDef_3))
            {
              b_8 = ATgetArgument(a_8, 0);
              c_8 = ATgetArgument(a_8, 1);
              d_8 = ATgetArgument(a_8, 2);
              w_7 :
              if(match_cons(c_8, sym_Nil_0))
                {
                  x_7 :
                  if(match_cons(e_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(b_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(d_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(f_8));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        t = g_77(t);
        PopChoice();
      }
    else
      {
        t = m_8;
        t = Cons_2(t, _id, k_8);
      }
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_Let_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        ATerm c_9 = NULL,d_9 = NULL;
        ATerm s_9 = NULL;
        t = not_null(y_8);
        {
          ATerm i_0 (ATerm t)
          {
            ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
            e_9 = t;
            s_8 :
            if(match_cons(e_9, sym_Cons_2))
              {
                f_9 = ATgetArgument(e_9, 0);
                j_9 = ATgetArgument(e_9, 1);
                t_8 :
                if(match_cons(f_9, sym_SDef_3))
                  {
                    g_9 = ATgetArgument(f_9, 0);
                    h_9 = ATgetArgument(f_9, 1);
                    i_9 = ATgetArgument(f_9, 2);
                    u_8 :
                    if(match_cons(h_9, sym_Nil_0))
                      {
                        ATerm r_9 = NULL;
                        t = not_null(z_8);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
                            n_9 = t;
                            o_8 :
                            if(match_cons(n_9, sym_Call_2))
                              {
                                o_9 = ATgetArgument(n_9, 0);
                                q_9 = ATgetArgument(n_9, 1);
                                p_8 :
                                if(match_cons(o_9, sym_SVar_1))
                                  {
                                    p_9 = ATgetArgument(o_9, 0);
                                    q_8 :
                                    if(match_cons(q_9, sym_Nil_0))
                                      {
                                        if(g_9 != NULL && g_9 != p_9)
                                          _fail(p_9);
                                        else
                                          g_9 = p_9;
                                        t = not_null(i_9);
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
                          t = oncetd_1(t, j_0);
                          r_9 = t;
                          if(c_9 != NULL && c_9 != r_9)
                            _fail(r_9);
                          else
                            c_9 = r_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm n_8 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = n_8;
                          }
                        }
                        t = not_null(j_9);
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
          t = at_suffix_1(t, i_0);
          s_9 = t;
          if(d_9 != NULL && d_9 != s_9)
            _fail(s_9);
          else
            d_9 = s_9;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_9), not_null(c_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  i_10 = t;
  a_10 :
  if(match_cons(i_10, sym_TCons_2))
    {
      j_10 = ATgetArgument(i_10, 0);
      l_10 = ATgetArgument(i_10, 1);
      b_10 :
      if(match_cons(j_10, sym_Build_1))
        {
          k_10 = ATgetArgument(j_10, 0);
          c_10 :
          if(match_cons(l_10, sym_TCons_2))
            {
              m_10 = ATgetArgument(l_10, 0);
              q_10 = ATgetArgument(l_10, 1);
              d_10 :
              if(match_cons(m_10, sym_Prim_2))
                {
                  n_10 = ATgetArgument(m_10, 0);
                  h_10 = ATgetArgument(m_10, 1);
                  e_10 :
                  if(match_cons(q_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_10), not_null(h_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(m_10, sym_Where_1))
                    {
                      n_10 = ATgetArgument(m_10, 0);
                      f_10 :
                      if(match_cons(n_10, sym_Prim_2))
                        {
                          o_10 = ATgetArgument(n_10, 0);
                          p_10 = ATgetArgument(n_10, 1);
                          g_10 :
                          if(match_cons(q_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(o_10), not_null(p_10));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
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
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  i_11 = t;
  b_11 :
  if(match_cons(i_11, sym_TCons_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      l_11 = ATgetArgument(i_11, 1);
      c_11 :
      if(match_cons(j_11, sym_Build_1))
        {
          k_11 = ATgetArgument(j_11, 0);
          d_11 :
          if(match_cons(l_11, sym_TCons_2))
            {
              m_11 = ATgetArgument(l_11, 0);
              p_11 = ATgetArgument(l_11, 1);
              e_11 :
              if(match_cons(m_11, sym_Build_1))
                {
                  n_11 = ATgetArgument(m_11, 0);
                  f_11 :
                  if(match_cons(p_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(m_11, sym_Where_1))
                    {
                      n_11 = ATgetArgument(m_11, 0);
                      g_11 :
                      if(match_cons(n_11, sym_Build_1))
                        {
                          o_11 = ATgetArgument(n_11, 0);
                          h_11 :
                          if(match_cons(p_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_11));
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
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
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  j_12 = t;
  c_12 :
  if(match_cons(j_12, sym_TCons_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      o_12 = ATgetArgument(j_12, 1);
      d_12 :
      if(match_cons(k_12, sym_Build_1))
        {
          l_12 = ATgetArgument(k_12, 0);
          e_12 :
          if(match_cons(l_12, sym_Op_2))
            {
              m_12 = ATgetArgument(l_12, 0);
              n_12 = ATgetArgument(l_12, 1);
              f_12 :
              if(match_cons(o_12, sym_TCons_2))
                {
                  p_12 = ATgetArgument(o_12, 0);
                  t_12 = ATgetArgument(o_12, 1);
                  g_12 :
                  if(match_cons(p_12, sym_Match_1))
                    {
                      q_12 = ATgetArgument(p_12, 0);
                      h_12 :
                      if(match_cons(q_12, sym_Op_2))
                        {
                          r_12 = ATgetArgument(q_12, 0);
                          s_12 = ATgetArgument(q_12, 1);
                          i_12 :
                          if(match_cons(t_12, sym_TNil_0))
                            {
                              ATerm w_12 = NULL,m_15 = NULL;
                              if(m_12 != NULL && m_12 != r_12)
                                _fail(r_12);
                              else
                                m_12 = r_12;
                              if(w_12 != NULL && w_12 != s_12)
                                _fail(s_12);
                              else
                                w_12 = s_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_0 (ATerm t)
                                {
                                  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,v_14 = NULL,w_14 = NULL;
                                  x_12 = t;
                                  y_11 :
                                  if(match_cons(x_12, sym_TCons_2))
                                    {
                                      y_12 = ATgetArgument(x_12, 0);
                                      z_12 = ATgetArgument(x_12, 1);
                                      z_11 :
                                      if(match_cons(z_12, sym_TCons_2))
                                        {
                                          v_14 = ATgetArgument(z_12, 0);
                                          w_14 = ATgetArgument(z_12, 1);
                                          a_12 :
                                          if(match_cons(w_14, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_14)));
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
                                t = zip_1(t, k_0);
                                m_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(m_12), not_null(n_12))));
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
ATerm eq_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  v_15 = t;
  s_15 :
  if(match_cons(v_15, sym_TCons_2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      t_15 :
      if(match_cons(x_15, sym_TCons_2))
        {
          y_15 = ATgetArgument(x_15, 0);
          z_15 = ATgetArgument(x_15, 1);
          u_15 :
          if(match_cons(z_15, sym_TNil_0))
            {
              if(w_15 != NULL && w_15 != y_15)
                _fail(y_15);
              else
                w_15 = y_15;
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
ATerm MisMatch_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  u_16 = t;
  d_16 :
  if(match_cons(u_16, sym_TCons_2))
    {
      v_16 = ATgetArgument(u_16, 0);
      c_17 = ATgetArgument(u_16, 1);
      e_16 :
      if(match_cons(v_16, sym_Build_1))
        {
          z_16 = ATgetArgument(v_16, 0);
          f_16 :
          if(match_cons(z_16, sym_Op_2))
            {
              a_17 = ATgetArgument(z_16, 0);
              b_17 = ATgetArgument(z_16, 1);
              g_16 :
              if(match_cons(c_17, sym_TCons_2))
                {
                  d_17 = ATgetArgument(c_17, 0);
                  h_17 = ATgetArgument(c_17, 1);
                  h_16 :
                  if(match_cons(d_17, sym_Match_1))
                    {
                      e_17 = ATgetArgument(d_17, 0);
                      s_16 :
                      if(match_cons(e_17, sym_Op_2))
                        {
                          f_17 = ATgetArgument(e_17, 0);
                          g_17 = ATgetArgument(e_17, 1);
                          t_16 :
                          if(match_cons(h_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm r_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = r_8;
                              }
                              t = (ATerm) ATmakeAppl(sym_Fail_0);
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
ATerm BMF_0 (ATerm t)
{
  ATerm v_8 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = v_8;
      {
        ATerm a_9 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = a_9;
            {
              ATerm b_9 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = b_9;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,u_19 = NULL;
  ATerm w_20 (ATerm t)
  {
    ATerm p_20 = NULL;
    ATerm q_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    q_20 = t;
    if(p_20 != NULL && p_20 != q_20)
      _fail(q_20);
    else
      p_20 = q_20;
    t = not_null(p_20);
    return(t);
  }
  ATerm x_20 (ATerm t)
  {
    ATerm u_20 = NULL;
    ATerm v_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    v_20 = t;
    if(u_20 != NULL && u_20 != v_20)
      _fail(v_20);
    else
      u_20 = v_20;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_20), not_null(u_19));
    return(t);
  }
  h_19 = t;
  f_19 :
  if(match_cons(h_19, sym_Seq_2))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      g_19 :
      if(match_cons(j_19, sym_Seq_2))
        {
          k_19 = ATgetArgument(j_19, 0);
          u_19 = ATgetArgument(j_19, 1);
          {
            ATerm k_9 = t;
            if(PushChoice()==0)
              {
                t = w_20(t);
                PopChoice();
              }
            else
              {
                t = k_9;
                t = x_20(t);
              }
          }
        }
      else
        t = w_20(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,l_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  f_21 = t;
  b_21 :
  if(match_cons(f_21, sym_Seq_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      l_21 = ATgetArgument(f_21, 1);
      c_21 :
      if(match_cons(g_21, sym_Build_1))
        {
          h_21 = ATgetArgument(g_21, 0);
          d_21 :
          if(match_cons(l_21, sym_Seq_2))
            {
              p_21 = ATgetArgument(l_21, 0);
              r_21 = ATgetArgument(l_21, 1);
              e_21 :
              if(match_cons(p_21, sym_Build_1))
                {
                  q_21 = ATgetArgument(p_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_21)), not_null(r_21));
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
ATerm FuseScope_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  a_22 = t;
  y_21 :
  if(match_cons(a_22, sym_Scope_2))
    {
      b_22 = ATgetArgument(a_22, 0);
      c_22 = ATgetArgument(a_22, 1);
      z_21 :
      if(match_cons(c_22, sym_Scope_2))
        {
          d_22 = ATgetArgument(c_22, 0);
          e_22 = ATgetArgument(c_22, 1);
          {
            ATerm i_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            i_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_22), not_null(e_22));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym_Var_1))
    {
      p_22 = ATgetArgument(o_22, 0);
      t = not_null(p_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  y_22 = t;
  t_22 :
  if(match_cons(y_22, sym_TCons_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      u_22 :
      if(match_cons(a_23, sym_TCons_2))
        {
          b_23 = ATgetArgument(a_23, 0);
          e_23 = ATgetArgument(a_23, 1);
          w_22 :
          if(match_cons(b_23, sym_Cons_2))
            {
              c_23 = ATgetArgument(b_23, 0);
              d_23 = ATgetArgument(b_23, 1);
              x_22 :
              if(match_cons(e_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm Look1_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,b_24 = NULL,c_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  w_23 = t;
  j_23 :
  if(match_cons(w_23, sym_TCons_2))
    {
      x_23 = ATgetArgument(w_23, 0);
      b_24 = ATgetArgument(w_23, 1);
      k_23 :
      if(match_cons(b_24, sym_TCons_2))
        {
          c_24 = ATgetArgument(b_24, 0);
          w_24 = ATgetArgument(b_24, 1);
          l_23 :
          if(match_cons(c_24, sym_Cons_2))
            {
              q_24 = ATgetArgument(c_24, 0);
              v_24 = ATgetArgument(c_24, 1);
              m_23 :
              if(match_cons(q_24, sym_TCons_2))
                {
                  r_24 = ATgetArgument(q_24, 0);
                  s_24 = ATgetArgument(q_24, 1);
                  n_23 :
                  if(match_cons(s_24, sym_TCons_2))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      u_23 :
                      if(match_cons(u_24, sym_TNil_0))
                        {
                          v_23 :
                          if(match_cons(w_24, sym_TNil_0))
                            {
                              ATerm a_25 = NULL;
                              if(x_23 != NULL && x_23 != r_24)
                                _fail(r_24);
                              else
                                x_23 = r_24;
                              if(a_25 != NULL && a_25 != t_24)
                                _fail(t_24);
                              else
                                a_25 = t_24;
                              t = not_null(a_25);
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
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = l_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm l_25 = NULL;
  ATerm n_25 = NULL,o_25 = NULL;
  l_25 = t;
  {
    ATerm p_25 = NULL;
    t = not_null(l_25);
    {
      ATerm q_25 = NULL;
      t = g_82(t);
      p_25 = t;
      if(n_25 != NULL && n_25 != p_25)
        _fail(p_25);
      else
        n_25 = p_25;
      t = h_82(t);
      q_25 = t;
      if(o_25 != NULL && o_25 != q_25)
        _fail(q_25);
      else
        o_25 = q_25;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm u_25 (ATerm t)
  {
    ATerm m_9 = t;
    if(PushChoice()==0)
      {
        t = g_81(t);
        PopChoice();
      }
    else
      {
        t = m_9;
        t = _all(t, u_25);
      }
    return(t);
  }
  t = u_25(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  c_26 = t;
  y_25 :
  if(match_cons(c_26, sym_TCons_2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      z_25 :
      if(match_cons(e_26, sym_TCons_2))
        {
          f_26 = ATgetArgument(e_26, 0);
          g_26 = ATgetArgument(e_26, 1);
          a_26 :
          if(match_cons(g_26, sym_TNil_0))
            {
              ATerm k_26 = NULL;
              if(k_26 != NULL && k_26 != f_26)
                _fail(f_26);
              else
                k_26 = f_26;
            }
          else
            {
              if(match_cons(g_26, sym_TCons_2))
                {
                  h_26 = ATgetArgument(g_26, 0);
                  i_26 = ATgetArgument(g_26, 1);
                  b_26 :
                  if(match_cons(i_26, sym_TNil_0))
                    {
                      ATerm q_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      q_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                    }
                  else
                    _fail(t);
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
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm i_82 (ATerm), ATerm j_82 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  t = subs_args_0(t);
  z_26 = t;
  w_26 :
  if(match_cons(z_26, sym_TCons_2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      x_26 :
      if(match_cons(b_27, sym_TCons_2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          y_26 :
          if(match_cons(d_27, sym_TNil_0))
            {
              t = not_null(c_27);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(a_27);
                    return(t);
                  }
                  t = SubsVar_2(t, i_82, m_0);
                  t = j_82(t);
                  return(t);
                }
                t = alltd_1(t, l_0);
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
ATerm substitute_1 (ATerm t, ATerm k_82 (ATerm))
{
  t = substitute_2(t, k_82, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Cons_2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      t = h_73(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm p_27 = NULL;
          p_27 = t;
          if(l_27 != NULL && l_27 != p_27)
            _fail(p_27);
          else
            l_27 = p_27;
          return(t);
        }
        t = fetch_1(t, n_0);
      }
      t = not_null(m_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  x_27 = t;
  t_27 :
  if(match_cons(x_27, sym_TCons_2))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      u_27 :
      if(match_cons(z_27, sym_TCons_2))
        {
          a_28 = ATgetArgument(z_27, 0);
          d_28 = ATgetArgument(z_27, 1);
          v_27 :
          if(match_cons(a_28, sym_Cons_2))
            {
              b_28 = ATgetArgument(a_28, 0);
              c_28 = ATgetArgument(a_28, 1);
              w_27 :
              if(match_cons(d_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_28), not_null(y_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  y_28 = t;
  u_28 :
  if(match_cons(y_28, sym_Cons_2))
    {
      z_28 = ATgetArgument(y_28, 0);
      e_29 = ATgetArgument(y_28, 1);
      v_28 :
      if(match_cons(z_28, sym_TCons_2))
        {
          a_29 = ATgetArgument(z_28, 0);
          b_29 = ATgetArgument(z_28, 1);
          w_28 :
          if(match_cons(b_29, sym_TCons_2))
            {
              c_29 = ATgetArgument(b_29, 0);
              d_29 = ATgetArgument(b_29, 1);
              x_28 :
              if(match_cons(d_29, sym_TNil_0))
                {
                  ATerm i_29 = NULL,j_29 = NULL,r_29 = NULL,z_29 = NULL;
                  ATerm t_9;
                  t_9 = t;
                  {
                    ATerm k_29 = NULL;
                    ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
                    t = not_null(c_29);
                    k_29 = t;
                    t = SSL_explode_term(not_null(k_29));
                    m_29 = t;
                    l_28 :
                    if(match_cons(m_29, sym_TCons_2))
                      {
                        n_29 = ATgetArgument(m_29, 0);
                        o_29 = ATgetArgument(m_29, 1);
                        m_28 :
                        if(match_cons(o_29, sym_TCons_2))
                          {
                            p_29 = ATgetArgument(o_29, 0);
                            q_29 = ATgetArgument(o_29, 1);
                            n_28 :
                            if(match_cons(q_29, sym_TNil_0))
                              {
                                if(i_29 != NULL && i_29 != n_29)
                                  _fail(n_29);
                                else
                                  i_29 = n_29;
                                if(j_29 != NULL && j_29 != p_29)
                                  _fail(p_29);
                                else
                                  j_29 = p_29;
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
                  t = t_9;
                  {
                    ATerm s_29 = NULL;
                    ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
                    t = not_null(a_29);
                    s_29 = t;
                    t = SSL_explode_term(not_null(s_29));
                    u_29 = t;
                    q_28 :
                    if(match_cons(u_29, sym_TCons_2))
                      {
                        v_29 = ATgetArgument(u_29, 0);
                        w_29 = ATgetArgument(u_29, 1);
                        r_28 :
                        if(match_cons(w_29, sym_TCons_2))
                          {
                            x_29 = ATgetArgument(w_29, 0);
                            y_29 = ATgetArgument(w_29, 1);
                            s_28 :
                            if(match_cons(y_29, sym_TNil_0))
                              {
                                if(i_29 != NULL && i_29 != v_29)
                                  _fail(v_29);
                                else
                                  i_29 = v_29;
                                if(r_29 != NULL && r_29 != x_29)
                                  _fail(x_29);
                                else
                                  r_29 = x_29;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    z_29 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  m_30 = t;
  i_30 :
  if(match_cons(m_30, sym_Cons_2))
    {
      n_30 = ATgetArgument(m_30, 0);
      s_30 = ATgetArgument(m_30, 1);
      j_30 :
      if(match_cons(n_30, sym_TCons_2))
        {
          o_30 = ATgetArgument(n_30, 0);
          p_30 = ATgetArgument(n_30, 1);
          k_30 :
          if(match_cons(p_30, sym_TCons_2))
            {
              q_30 = ATgetArgument(p_30, 0);
              r_30 = ATgetArgument(p_30, 1);
              l_30 :
              if(match_cons(r_30, sym_TNil_0))
                {
                  ATerm u_30 = NULL;
                  if(o_30 != NULL && o_30 != q_30)
                    _fail(q_30);
                  else
                    o_30 = q_30;
                  if(u_30 != NULL && u_30 != s_30)
                    _fail(s_30);
                  else
                    u_30 = s_30;
                  t = not_null(u_30);
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
ATerm while_not_2 (ATerm t, ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm w_30 (ATerm t)
  {
    ATerm u_9 = t;
    if(PushChoice()==0)
      {
        t = o_67(t);
        PopChoice();
      }
    else
      {
        t = u_9;
        t = p_67(t);
        t = w_30(t);
      }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  t = r_67(t);
  t = while_not_2(t, s_67, t_67);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm v_9 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm g_31 = NULL;
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            ATerm i_31 = NULL;
            i_31 = t;
            y_30 :
            if(!(match_cons(i_31, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm t_0 (ATerm t)
          {
            ATerm j_31 = NULL;
            j_31 = t;
            z_30 :
            if(!(match_cons(j_31, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, s_0, t_0);
          return(t);
        }
        t = TCons_2(t, _id, r_0);
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm w_9 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm x_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = x_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm w_0 (ATerm t)
              {
                ATerm k_31 = NULL;
                k_31 = t;
                a_31 :
                if(!(match_cons(k_31, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, v_0, w_0);
              return(t);
            }
            t = TCons_2(t, _id, u_0);
            PopChoice();
          }
        else
          {
            t = w_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = v_9;
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
        l_31 = t;
        d_31 :
        if(match_cons(l_31, sym_TCons_2))
          {
            m_31 = ATgetArgument(l_31, 0);
            n_31 = ATgetArgument(l_31, 1);
            e_31 :
            if(match_cons(n_31, sym_TCons_2))
              {
                o_31 = ATgetArgument(n_31, 0);
                p_31 = ATgetArgument(n_31, 1);
                f_31 :
                if(match_cons(p_31, sym_TNil_0))
                  {
                    t = not_null(m_31);
                    {
                      ATerm v_31 (ATerm t)
                      {
                        ATerm y_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm s_31 = NULL;
                            s_31 = t;
                            c_31 :
                            if(!(match_cons(s_31, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_9;
                            {
                              ATerm z_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm x_0 (ATerm t)
                                  {
                                    t = not_null(o_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, x_0);
                                  t = v_31(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = z_9;
                                  t = Cons_2(t, _id, v_31);
                                }
                            }
                          }
                        return(t);
                      }
                      t = v_31(t);
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
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm w_31 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = v_80(t);
        PopChoice();
      }
    else
      {
        t = r_10;
        t = _one(t, w_31);
      }
    return(t);
  }
  t = w_31(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  c_32 = t;
  z_31 :
  if(match_cons(c_32, sym_TCons_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      a_32 :
      if(match_cons(e_32, sym_TCons_2))
        {
          f_32 = ATgetArgument(e_32, 0);
          g_32 = ATgetArgument(e_32, 1);
          b_32 :
          if(match_cons(g_32, sym_TNil_0))
            {
              t = not_null(f_32);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm j_32 = NULL;
                  j_32 = t;
                  if(d_32 != NULL && d_32 != j_32)
                    _fail(j_32);
                  else
                    d_32 = j_32;
                  return(t);
                }
                t = oncetd_1(t, y_0);
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
ATerm Var_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_Var_1))
    {
      q_32 = ATgetArgument(p_32, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(q_32);
        t = c_60(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  o_34 = t;
  m_33 :
  if(match_cons(o_34, sym_Seq_2))
    {
      p_34 = ATgetArgument(o_34, 0);
      s_34 = ATgetArgument(o_34, 1);
      n_33 :
      if(match_cons(p_34, sym_Build_1))
        {
          q_34 = ATgetArgument(p_34, 0);
          o_33 :
          if(match_cons(s_34, sym_Scope_2))
            {
              t_34 = ATgetArgument(s_34, 0);
              w_34 = ATgetArgument(s_34, 1);
              p_33 :
              if(match_cons(w_34, sym_Seq_2))
                {
                  i_34 = ATgetArgument(w_34, 0);
                  n_34 = ATgetArgument(w_34, 1);
                  q_33 :
                  if(match_cons(i_34, sym_Assign_1))
                    {
                      j_34 = ATgetArgument(i_34, 0);
                      r_33 :
                      if(match_cons(j_34, sym_Var_1))
                        {
                          k_34 = ATgetArgument(j_34, 0);
                          {
                            ATerm s_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm c_35 = NULL,e_35 = NULL;
                                ATerm d_35 = NULL;
                                t = not_null(q_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = diff_0(t);
                                d_35 = t;
                                if(c_35 != NULL && c_35 != d_35)
                                  _fail(d_35);
                                else
                                  c_35 = d_35;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                t = substitute_1(t, IsVar_0);
                                e_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_35), not_null(e_35)));
                                PopChoice();
                              }
                            else
                              {
                                t = s_10;
                                {
                                  ATerm k_35 = NULL,m_35 = NULL;
                                  ATerm l_35 = NULL;
                                  t = not_null(q_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  l_35 = t;
                                  if(k_35 != NULL && k_35 != l_35)
                                    _fail(l_35);
                                  else
                                    k_35 = l_35;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = substitute_1(t, IsVar_0);
                                  m_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_35), not_null(m_35)));
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
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(p_34, sym_Assign_1))
            {
              q_34 = ATgetArgument(p_34, 0);
              s_33 :
              if(match_cons(q_34, sym_Var_1))
                {
                  r_34 = ATgetArgument(q_34, 0);
                  t_33 :
                  if(match_cons(s_34, sym_Seq_2))
                    {
                      t_34 = ATgetArgument(s_34, 0);
                      w_34 = ATgetArgument(s_34, 1);
                      u_33 :
                      if(match_cons(t_34, sym_Build_1))
                        {
                          u_34 = ATgetArgument(t_34, 0);
                          v_33 :
                          if(match_cons(u_34, sym_Var_1))
                            {
                              v_34 = ATgetArgument(u_34, 0);
                              {
                                ATerm n_36 = NULL;
                                if(r_34 != NULL && r_34 != v_34)
                                  _fail(v_34);
                                else
                                  r_34 = v_34;
                                if(n_36 != NULL && n_36 != w_34)
                                  _fail(w_34);
                                else
                                  n_36 = w_34;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_34))), not_null(n_36));
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
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(o_34, sym_Scope_2))
        {
          p_34 = ATgetArgument(o_34, 0);
          s_34 = ATgetArgument(o_34, 1);
          w_33 :
          if(match_cons(s_34, sym_Seq_2))
            {
              t_34 = ATgetArgument(s_34, 0);
              w_34 = ATgetArgument(s_34, 1);
              x_33 :
              if(match_cons(t_34, sym_Assign_2))
                {
                  u_34 = ATgetArgument(t_34, 0);
                  g_34 = ATgetArgument(t_34, 1);
                  y_33 :
                  if(match_cons(u_34, sym_Var_1))
                    {
                      v_34 = ATgetArgument(u_34, 0);
                      z_33 :
                      if(match_cons(g_34, sym_Var_1))
                        {
                          h_34 = ATgetArgument(g_34, 0);
                          {
                            ATerm s_35 = NULL,u_35 = NULL;
                            ATerm t_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = diff_0(t);
                            t_35 = t;
                            if(s_35 != NULL && s_35 != t_35)
                              _fail(t_35);
                            else
                              s_35 = t_35;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = substitute_1(t, IsVar_0);
                            u_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_35), not_null(u_35));
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(t_34, sym_Assign_1))
                    {
                      u_34 = ATgetArgument(t_34, 0);
                      a_34 :
                      if(match_cons(u_34, sym_Var_1))
                        {
                          v_34 = ATgetArgument(u_34, 0);
                          b_34 :
                          if(match_cons(w_34, sym_Seq_2))
                            {
                              i_34 = ATgetArgument(w_34, 0);
                              n_34 = ATgetArgument(w_34, 1);
                              c_34 :
                              if(match_cons(i_34, sym_Assign_1))
                                {
                                  j_34 = ATgetArgument(i_34, 0);
                                  d_34 :
                                  if(match_cons(j_34, sym_Var_1))
                                    {
                                      k_34 = ATgetArgument(j_34, 0);
                                      {
                                        ATerm a_36 = NULL,c_36 = NULL;
                                        ATerm b_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        b_36 = t;
                                        if(a_36 != NULL && a_36 != b_36)
                                          _fail(b_36);
                                        else
                                          a_36 = b_36;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = substitute_1(t, IsVar_0);
                                        c_36 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34))), not_null(c_36)));
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(i_34, sym_Assign_2))
                                    {
                                      j_34 = ATgetArgument(i_34, 0);
                                      l_34 = ATgetArgument(i_34, 1);
                                      e_34 :
                                      if(match_cons(j_34, sym_Var_1))
                                        {
                                          k_34 = ATgetArgument(j_34, 0);
                                          f_34 :
                                          if(match_cons(l_34, sym_Var_1))
                                            {
                                              m_34 = ATgetArgument(l_34, 0);
                                              {
                                                ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
                                                if(v_34 != NULL && v_34 != m_34)
                                                  _fail(m_34);
                                                else
                                                  v_34 = m_34;
                                                if(h_36 != NULL && h_36 != n_34)
                                                  _fail(n_34);
                                                else
                                                  h_36 = n_34;
                                                {
                                                  ATerm j_36 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = diff_0(t);
                                                  j_36 = t;
                                                  if(i_36 != NULL && i_36 != j_36)
                                                    _fail(j_36);
                                                  else
                                                    i_36 = j_36;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = substitute_1(t, IsVar_0);
                                                  k_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34))), not_null(k_36)));
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
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm HoistLet_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  j_37 = t;
  f_37 :
  if(match_cons(j_37, sym_Seq_2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      i_37 :
      if(match_cons(l_37, sym_Let_2))
        {
          m_37 = ATgetArgument(l_37, 0);
          n_37 = ATgetArgument(l_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(m_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_37), not_null(n_37)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm v_37 (ATerm t)
  {
    ATerm t_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, v_37);
        PopChoice();
      }
    else
      {
        t = t_10;
        {
          ATerm u_37 = NULL;
          u_37 = t;
          t_37 :
          if(match_cons(u_37, sym_Nil_0))
            t = c_77(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = v_37(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  b_38 = t;
  y_37 :
  if(match_cons(b_38, sym_TCons_2))
    {
      c_38 = ATgetArgument(b_38, 0);
      h_38 = ATgetArgument(b_38, 1);
      z_37 :
      if(match_cons(h_38, sym_TCons_2))
        {
          i_38 = ATgetArgument(h_38, 0);
          j_38 = ATgetArgument(h_38, 1);
          a_38 :
          if(match_cons(j_38, sym_TNil_0))
            {
              t = not_null(c_38);
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(i_38);
                  return(t);
                }
                t = at_end_1(t, z_0);
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
ATerm Zip3_0 (ATerm t)
{
  ATerm r_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,b_39 = NULL;
  r_38 = t;
  o_38 :
  if(match_cons(r_38, sym_TCons_2))
    {
      u_38 = ATgetArgument(r_38, 0);
      v_38 = ATgetArgument(r_38, 1);
      p_38 :
      if(match_cons(v_38, sym_TCons_2))
        {
          w_38 = ATgetArgument(v_38, 0);
          b_39 = ATgetArgument(v_38, 1);
          q_38 :
          if(match_cons(b_39, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_38), not_null(w_38));
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
ATerm Zip2_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  o_39 = t;
  j_39 :
  if(match_cons(o_39, sym_TCons_2))
    {
      p_39 = ATgetArgument(o_39, 0);
      s_39 = ATgetArgument(o_39, 1);
      k_39 :
      if(match_cons(p_39, sym_Cons_2))
        {
          q_39 = ATgetArgument(p_39, 0);
          r_39 = ATgetArgument(p_39, 1);
          l_39 :
          if(match_cons(s_39, sym_TCons_2))
            {
              t_39 = ATgetArgument(s_39, 0);
              a_40 = ATgetArgument(s_39, 1);
              m_39 :
              if(match_cons(t_39, sym_Cons_2))
                {
                  y_39 = ATgetArgument(t_39, 0);
                  z_39 = ATgetArgument(t_39, 1);
                  n_39 :
                  if(match_cons(a_40, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(r_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  o_40 = t;
  j_40 :
  if(match_cons(o_40, sym_TCons_2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      k_40 :
      if(match_cons(p_40, sym_Nil_0))
        {
          l_40 :
          if(match_cons(q_40, sym_TCons_2))
            {
              r_40 = ATgetArgument(q_40, 0);
              s_40 = ATgetArgument(q_40, 1);
              m_40 :
              if(match_cons(r_40, sym_Nil_0))
                {
                  n_40 :
                  if(match_cons(s_40, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm w_40 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        t = z_74(t);
        PopChoice();
      }
    else
      {
        t = u_10;
        t = a_75(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm v_40 = NULL;
              v_40 = t;
              u_40 :
              if(!(match_cons(v_40, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, w_40, b_1);
            return(t);
          }
          t = TCons_2(t, c_75, a_1);
          t = b_75(t);
        }
      }
    return(t);
  }
  t = w_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_75);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Cong_2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      {
        ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,w_42 = NULL;
        ATerm z_41 = NULL;
        t = not_null(r_41);
        {
          ATerm c_42 = NULL;
          t = map_1(t, new_0);
          z_41 = t;
          if(w_41 != NULL && w_41 != z_41)
            _fail(z_41);
          else
            w_41 = z_41;
          t = not_null(w_41);
          {
            ATerm d_42 = NULL;
            ATerm c_1 (ATerm t)
            {
              ATerm a_42 = NULL;
              a_42 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_42));
              return(t);
            }
            t = map_1(t, c_1);
            c_42 = t;
            if(u_41 != NULL && u_41 != c_42)
              _fail(c_42);
            else
              u_41 = c_42;
            t = not_null(r_41);
            {
              ATerm g_42 = NULL;
              t = map_1(t, new_0);
              d_42 = t;
              if(x_41 != NULL && x_41 != d_42)
                _fail(d_42);
              else
                x_41 = d_42;
              t = not_null(x_41);
              {
                ATerm h_42 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm e_42 = NULL;
                  e_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_42));
                  return(t);
                }
                t = map_1(t, d_1);
                g_42 = t;
                if(v_41 != NULL && v_41 != g_42)
                  _fail(g_42);
                else
                  v_41 = g_42;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm v_42 = NULL;
                  t = zip_1(t, _id);
                  h_42 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
                      j_42 = t;
                      g_41 :
                      if(match_cons(j_42, sym_TCons_2))
                        {
                          k_42 = ATgetArgument(j_42, 0);
                          p_42 = ATgetArgument(j_42, 1);
                          h_41 :
                          if(match_cons(k_42, sym_TCons_2))
                            {
                              l_42 = ATgetArgument(k_42, 0);
                              m_42 = ATgetArgument(k_42, 1);
                              i_41 :
                              if(match_cons(m_42, sym_TCons_2))
                                {
                                  n_42 = ATgetArgument(m_42, 0);
                                  o_42 = ATgetArgument(m_42, 1);
                                  j_41 :
                                  if(match_cons(o_42, sym_TNil_0))
                                    {
                                      k_41 :
                                      if(match_cons(p_42, sym_TCons_2))
                                        {
                                          q_42 = ATgetArgument(p_42, 0);
                                          r_42 = ATgetArgument(p_42, 1);
                                          l_41 :
                                          if(match_cons(r_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42)))));
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
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = zip_1(t, m_1);
                    v_42 = t;
                    if(y_41 != NULL && y_41 != v_42)
                      _fail(v_42);
                    else
                      y_41 = v_42;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_41), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        w_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_41), not_null(u_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_41)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_41), not_null(v_41))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm r_43 = NULL,t_43 = NULL,u_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym_Cong_2))
    {
      t_43 = ATgetArgument(r_43, 0);
      u_43 = ATgetArgument(r_43, 1);
      {
        ATerm x_43 = NULL;
        ATerm b_44 = NULL;
        t = not_null(u_43);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm y_43 = NULL,z_43 = NULL;
            z_43 = t;
            o_43 :
            if(match_cons(z_43, sym_Match_1))
              {
                y_43 = ATgetArgument(z_43, 0);
                t = not_null(y_43);
              }
            else
              {
                if(match_cons(z_43, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_1);
          b_44 = t;
          if(x_43 != NULL && x_43 != b_44)
            _fail(b_44);
          else
            x_43 = b_44;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(t_43), not_null(x_43)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  s_44 :
  if(match_cons(w_44, sym_Scope_2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      u_44 :
      if(match_cons(x_44, sym_Nil_0))
        t = not_null(y_44);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,i_46 = NULL,j_46 = NULL,w_46 = NULL;
  v_45 = t;
  m_45 :
  if(match_cons(v_45, sym_Choice_2))
    {
      w_45 = ATgetArgument(v_45, 0);
      u_45 = ATgetArgument(v_45, 1);
      if(w_45 != NULL && w_45 != u_45)
        _fail(u_45);
      else
        w_45 = u_45;
      t = not_null(w_45);
    }
  else
    {
      if(match_cons(v_45, sym_LChoice_2))
        {
          w_45 = ATgetArgument(v_45, 0);
          u_45 = ATgetArgument(v_45, 1);
          if(w_45 != NULL && w_45 != u_45)
            _fail(u_45);
          else
            w_45 = u_45;
          t = not_null(w_45);
        }
      else
        {
          if(match_cons(v_45, sym_Where_1))
            {
              w_45 = ATgetArgument(v_45, 0);
              n_45 :
              if(match_cons(w_45, sym_Where_1))
                {
                  x_45 = ATgetArgument(w_45, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(x_45));
                }
              else
                {
                  if(match_cons(w_45, sym_Seq_2))
                    {
                      x_45 = ATgetArgument(w_45, 0);
                      z_45 = ATgetArgument(w_45, 1);
                      o_45 :
                      if(match_cons(x_45, sym_Where_1))
                        {
                          y_45 = ATgetArgument(x_45, 0);
                          p_45 :
                          if(match_cons(z_45, sym_Seq_2))
                            {
                              i_46 = ATgetArgument(z_45, 0);
                              w_46 = ATgetArgument(z_45, 1);
                              r_45 :
                              if(match_cons(i_46, sym_Build_1))
                                {
                                  j_46 = ATgetArgument(i_46, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_46)), not_null(w_46))));
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
                }
            }
          else
            {
              if(match_cons(v_45, sym_Not_1))
                {
                  w_45 = ATgetArgument(v_45, 0);
                  s_45 :
                  if(match_cons(w_45, sym_Not_1))
                    {
                      x_45 = ATgetArgument(w_45, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_45));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(v_45, sym_Test_1))
                    {
                      w_45 = ATgetArgument(v_45, 0);
                      t_45 :
                      if(match_cons(w_45, sym_Test_1))
                        {
                          x_45 = ATgetArgument(w_45, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_45));
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
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  s_47 = t;
  o_47 :
  if(match_cons(s_47, sym_Choice_2))
    {
      t_47 = ATgetArgument(s_47, 0);
      w_47 = ATgetArgument(s_47, 1);
      p_47 :
      if(match_cons(t_47, sym_Choice_2))
        {
          u_47 = ATgetArgument(t_47, 0);
          v_47 = ATgetArgument(t_47, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_47), not_null(w_47)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_47, sym_Seq_2))
        {
          t_47 = ATgetArgument(s_47, 0);
          w_47 = ATgetArgument(s_47, 1);
          q_47 :
          if(match_cons(t_47, sym_Seq_2))
            {
              u_47 = ATgetArgument(t_47, 0);
              v_47 = ATgetArgument(t_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_47), not_null(w_47)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_47, sym_LChoice_2))
            {
              t_47 = ATgetArgument(s_47, 0);
              w_47 = ATgetArgument(s_47, 1);
              r_47 :
              if(match_cons(t_47, sym_LChoice_2))
                {
                  u_47 = ATgetArgument(t_47, 0);
                  v_47 = ATgetArgument(t_47, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_47), not_null(w_47)));
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
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  b_49 = t;
  v_48 :
  if(match_cons(b_49, sym_Seqs_1))
    {
      c_49 = ATgetArgument(b_49, 0);
      w_48 :
      if(match_cons(c_49, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(c_49, sym_Cons_2))
            {
              z_48 = ATgetArgument(c_49, 0);
              a_49 = ATgetArgument(c_49, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_49)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(b_49, sym_Choices_1))
        {
          c_49 = ATgetArgument(b_49, 0);
          x_48 :
          if(match_cons(c_49, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(c_49, sym_Cons_2))
                {
                  z_48 = ATgetArgument(c_49, 0);
                  a_49 = ATgetArgument(c_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_49)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(b_49, sym_LChoices_1))
            {
              c_49 = ATgetArgument(b_49, 0);
              y_48 :
              if(match_cons(c_49, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(c_49, sym_Cons_2))
                    {
                      z_48 = ATgetArgument(c_49, 0);
                      a_49 = ATgetArgument(c_49, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_49)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(b_49, sym_Lets_2))
                {
                  c_49 = ATgetArgument(b_49, 0);
                  d_49 = ATgetArgument(b_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_49), not_null(d_49));
                }
              else
                {
                  if(match_cons(b_49, sym_BA_2))
                    {
                      c_49 = ATgetArgument(b_49, 0);
                      d_49 = ATgetArgument(b_49, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_49)), not_null(c_49));
                    }
                  else
                    {
                      if(match_cons(b_49, sym_MA_2))
                        {
                          c_49 = ATgetArgument(b_49, 0);
                          d_49 = ATgetArgument(b_49, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_49)), not_null(d_49));
                        }
                      else
                        {
                          if(match_cons(b_49, sym_AM_2))
                            {
                              c_49 = ATgetArgument(b_49, 0);
                              d_49 = ATgetArgument(b_49, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_49)));
                            }
                          else
                            {
                              if(match_cons(b_49, sym_BAM_3))
                                {
                                  c_49 = ATgetArgument(b_49, 0);
                                  d_49 = ATgetArgument(b_49, 1);
                                  e_49 = ATgetArgument(b_49, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_49)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_49)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(b_49, sym_InfixApp_3))
                                    {
                                      c_49 = ATgetArgument(b_49, 0);
                                      d_49 = ATgetArgument(b_49, 1);
                                      e_49 = ATgetArgument(b_49, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_49), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm o_50 = NULL,p_50 = NULL;
  o_50 = t;
  m_50 :
  if(match_cons(o_50, sym_Where_1))
    {
      p_50 = ATgetArgument(o_50, 0);
      n_50 :
      if(match_cons(p_50, sym_Fail_0))
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
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  s_50 :
  if(match_cons(u_50, sym_LChoice_2))
    {
      v_50 = ATgetArgument(u_50, 0);
      w_50 = ATgetArgument(u_50, 1);
      t_50 :
      if(match_cons(w_50, sym_Fail_0))
        t = not_null(v_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  a_51 :
  if(match_cons(c_51, sym_LChoice_2))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      b_51 :
      if(match_cons(d_51, sym_Fail_0))
        t = not_null(e_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  i_51 :
  if(match_cons(k_51, sym_Choice_2))
    {
      l_51 = ATgetArgument(k_51, 0);
      m_51 = ATgetArgument(k_51, 1);
      j_51 :
      if(match_cons(m_51, sym_Fail_0))
        t = not_null(l_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  q_51 :
  if(match_cons(s_51, sym_Choice_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      r_51 :
      if(match_cons(t_51, sym_Fail_0))
        t = not_null(u_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Cong_2))
    {
      b_52 = ATgetArgument(a_52, 0);
      c_52 = ATgetArgument(a_52, 1);
      t = not_null(c_52);
      {
        ATerm p_1 (ATerm t)
        {
          ATerm f_52 = NULL;
          f_52 = t;
          y_51 :
          if(!(match_cons(f_52, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, p_1);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Path_2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      j_52 :
      if(match_cons(m_52, sym_Fail_0))
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
  ATerm s_52 = NULL,t_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_One_1))
    {
      t_52 = ATgetArgument(s_52, 0);
      r_52 :
      if(match_cons(t_52, sym_Fail_0))
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
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  w_52 :
  if(match_cons(y_52, sym_Some_1))
    {
      z_52 = ATgetArgument(y_52, 0);
      x_52 :
      if(match_cons(z_52, sym_Fail_0))
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  c_53 :
  if(match_cons(e_53, sym_Rec_2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      d_53 :
      if(match_cons(g_53, sym_Fail_0))
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
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  k_53 :
  if(match_cons(m_53, sym_Scope_2))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      l_53 :
      if(match_cons(o_53, sym_Fail_0))
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
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_Seq_2))
    {
      v_53 = ATgetArgument(u_53, 0);
      w_53 = ATgetArgument(u_53, 1);
      t_53 :
      if(match_cons(v_53, sym_Fail_0))
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
  ATerm c_54 = NULL,d_54 = NULL;
  c_54 = t;
  a_54 :
  if(match_cons(c_54, sym_Not_1))
    {
      d_54 = ATgetArgument(c_54, 0);
      b_54 :
      if(match_cons(d_54, sym_Fail_0))
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
  ATerm i_54 = NULL,j_54 = NULL;
  i_54 = t;
  g_54 :
  if(match_cons(i_54, sym_Test_1))
    {
      j_54 = ATgetArgument(i_54, 0);
      h_54 :
      if(match_cons(j_54, sym_Fail_0))
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
  ATerm v_10 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = v_10;
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = w_10;
            {
              ATerm x_10 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = x_10;
                  {
                    ATerm y_10 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_10;
                        {
                          ATerm z_10 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm a_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_11;
                                    {
                                      ATerm q_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_11;
                                          {
                                            ATerm r_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_11;
                                                {
                                                  ATerm s_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = s_11;
                                                      {
                                                        ATerm t_11 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = t_11;
                                                            {
                                                              ATerm u_11 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = u_11;
                                                                  {
                                                                    ATerm v_11 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_11;
                                                                        {
                                                                          ATerm w_11 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_11;
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
  ATerm o_54 = NULL,p_54 = NULL;
  o_54 = t;
  m_54 :
  if(match_cons(o_54, sym_Match_1))
    {
      p_54 = ATgetArgument(o_54, 0);
      n_54 :
      if(match_cons(p_54, sym_Wld_0))
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
  ATerm u_54 = NULL,v_54 = NULL;
  u_54 = t;
  s_54 :
  if(match_cons(u_54, sym_Where_1))
    {
      v_54 = ATgetArgument(u_54, 0);
      t_54 :
      if(match_cons(v_54, sym_Id_0))
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
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  y_54 :
  if(match_cons(a_55, sym_All_1))
    {
      b_55 = ATgetArgument(a_55, 0);
      z_54 :
      if(match_cons(b_55, sym_Id_0))
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
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  e_55 :
  if(match_cons(g_55, sym_Rec_2))
    {
      h_55 = ATgetArgument(g_55, 0);
      i_55 = ATgetArgument(g_55, 1);
      f_55 :
      if(match_cons(i_55, sym_Id_0))
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  o_55 = t;
  m_55 :
  if(match_cons(o_55, sym_Scope_2))
    {
      p_55 = ATgetArgument(o_55, 0);
      q_55 = ATgetArgument(o_55, 1);
      n_55 :
      if(match_cons(q_55, sym_Id_0))
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
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  u_55 :
  if(match_cons(w_55, sym_LChoice_2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      v_55 :
      if(match_cons(x_55, sym_Id_0))
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
  ATerm e_56 = NULL,f_56 = NULL,h_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_cons(e_56, sym_Seq_2))
    {
      f_56 = ATgetArgument(e_56, 0);
      h_56 = ATgetArgument(e_56, 1);
      d_56 :
      if(match_cons(h_56, sym_Id_0))
        t = not_null(f_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  l_56 :
  if(match_cons(n_56, sym_Seq_2))
    {
      o_56 = ATgetArgument(n_56, 0);
      p_56 = ATgetArgument(n_56, 1);
      m_56 :
      if(match_cons(o_56, sym_Id_0))
        t = not_null(p_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  v_56 = t;
  t_56 :
  if(match_cons(v_56, sym_Not_1))
    {
      w_56 = ATgetArgument(v_56, 0);
      u_56 :
      if(match_cons(w_56, sym_Id_0))
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
  ATerm b_57 = NULL,c_57 = NULL;
  b_57 = t;
  z_56 :
  if(match_cons(b_57, sym_Test_1))
    {
      c_57 = ATgetArgument(b_57, 0);
      a_57 :
      if(match_cons(c_57, sym_Id_0))
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
  ATerm x_11 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = x_11;
      {
        ATerm b_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = b_12;
            {
              ATerm u_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_12;
                  {
                    ATerm v_12 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = v_12;
                        {
                          ATerm a_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = a_13;
                              {
                                ATerm b_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_13;
                                    {
                                      ATerm c_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_13;
                                          {
                                            ATerm d_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = d_13;
                                                {
                                                  ATerm e_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = e_13;
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
  ATerm f_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = f_13;
      {
        ATerm g_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = g_13;
            {
              ATerm h_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_13;
                  {
                    ATerm i_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm j_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm k_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_13;
                                    {
                                      ATerm l_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_13;
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
ATerm Optimize_0 (ATerm t)
{
  ATerm m_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = m_13;
      {
        ATerm n_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = n_13;
            {
              ATerm o_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = o_13;
                  {
                    ATerm p_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = p_13;
                        {
                          ATerm q_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = q_13;
                              {
                                ATerm r_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = r_13;
                                    {
                                      ATerm s_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = s_13;
                                          t = InlineDont_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm e_57 (ATerm t)
  {
    ATerm t_13 = t;
    if(PushChoice()==0)
      {
        t = x_66(t);
        t = e_57(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        t = y_66(t);
      }
    return(t);
  }
  t = e_57(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_67 (ATerm))
{
  t = repeat_2(t, a_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm f_57 (ATerm t)
  {
    t = j_79(t);
    t = _all(t, f_57);
    t = j_79(t);
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      ATerm u_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = u_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, r_1);
    return(t);
  }
  t = downup_1(t, q_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm x_60 (ATerm))
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_SDef_3))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      o_57 = ATgetArgument(l_57, 2);
      {
        ATerm s_57 = NULL;
        t = not_null(m_57);
        {
          ATerm u_57 = NULL;
          t = v_60(t);
          s_57 = t;
          t = not_null(n_57);
          {
            ATerm w_57 = NULL;
            t = w_60(t);
            u_57 = t;
            t = not_null(o_57);
            t = x_60(t);
            w_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_57), not_null(u_57), not_null(w_57));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm e_58 (ATerm t)
  {
    ATerm v_13 = t;
    if(PushChoice()==0)
      {
        ATerm d_58 = NULL;
        d_58 = t;
        c_58 :
        if(!(match_cons(d_58, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = v_13;
        t = Cons_2(t, n_76, e_58);
      }
    return(t);
  }
  t = e_58(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm i_58 = NULL,j_58 = NULL;
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym_Strategies_1))
    {
      j_58 = ATgetArgument(i_58, 0);
      {
        ATerm l_58 = NULL;
        t = not_null(j_58);
        t = q_59(t);
        l_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm s_58 = NULL,t_58 = NULL;
  s_58 = t;
  r_58 :
  if(match_cons(s_58, sym_Specification_1))
    {
      t_58 = ATgetArgument(s_58, 0);
      {
        ATerm v_58 = NULL;
        t = not_null(t_58);
        t = s_59(t);
        v_58 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(v_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm b_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, a_84);
            return(t);
          }
          t = map_1(t, b_2);
          return(t);
        }
        t = Strategies_1(t, a_2);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm a_59 = NULL;
        a_59 = t;
        z_58 :
        if(!(match_cons(a_59, sym_Nil_0)))
          _fail(t);
        return(t);
      }
      t = Cons_2(t, x_1, z_1);
      return(t);
    }
    t = Cons_2(t, _id, t_1);
    return(t);
  }
  t = Specification_1(t, s_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  b_59 :
  if(!(match_cons(c_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym_TCons_2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      {
        ATerm n_59 = NULL;
        t = not_null(j_59);
        {
          ATerm p_59 = NULL;
          t = a_62(t);
          n_59 = t;
          t = not_null(k_59);
          t = b_62(t);
          p_59 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_59), not_null(p_59));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm y_59 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm z_59 = NULL,a_60 = NULL;
      z_59 = t;
      x_59 :
      if(match_cons(z_59, sym_Program_1))
        {
          a_60 = ATgetArgument(z_59, 0);
          if(y_59 != NULL && y_59 != a_60)
            _fail(a_60);
          else
            y_59 = a_60;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, c_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = w_13;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_60 = NULL;
  e_60 = t;
  t = SSL_exit(not_null(e_60));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  l_60 = t;
  i_60 :
  if(match_cons(l_60, sym_TCons_2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      j_60 :
      if(match_cons(n_60, sym_TCons_2))
        {
          o_60 = ATgetArgument(n_60, 0);
          p_60 = ATgetArgument(n_60, 1);
          k_60 :
          if(match_cons(p_60, sym_TNil_0))
            {
              ATerm x_13;
              x_13 = t;
              t = SSL_printnl(not_null(m_60), not_null(o_60));
              t = x_13;
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
ATerm try_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm y_13 = t;
  if(PushChoice()==0)
    {
      t = u_78(t);
      PopChoice();
    }
  else
    t = y_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  ATerm z_13 = t;
  if(PushChoice()==0)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm a_14 = t;
        if(PushChoice()==0)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm g_61 = NULL;
              g_61 = t;
              t_60 :
              if(!(match_cons(g_61, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_2);
            PopChoice();
            _fail(t);
          }
        else
          t = a_14;
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          ATerm h_61 = NULL;
          h_61 = t;
          u_60 :
          if(!(match_cons(h_61, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, k_2);
        return(t);
      }
      t = TCons_2(t, d_2, e_2);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm i_61 = NULL,j_61 = NULL;
            i_61 = t;
            z_60 :
            if(match_cons(i_61, sym_Runtime_1))
              {
                j_61 = ATgetArgument(i_61, 0);
                if(f_61 != NULL && f_61 != j_61)
                  _fail(j_61);
                else
                  f_61 = j_61;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, p_2);
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm k_61 = NULL;
            k_61 = t;
            a_61 :
            if(!(match_cons(k_61, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, q_2);
          return(t);
        }
        t = TCons_2(t, m_2, o_2);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm l_61 = NULL,m_61 = NULL;
              l_61 = t;
              c_61 :
              if(match_cons(l_61, sym_Program_1))
                {
                  m_61 = ATgetArgument(l_61, 0);
                  if(e_61 != NULL && e_61 != m_61)
                    _fail(m_61);
                  else
                    e_61 = m_61;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, w_2);
            return(t);
          }
          ATerm s_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              ATerm n_61 = NULL;
              n_61 = t;
              d_61 :
              if(!(match_cons(n_61, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, x_2);
            return(t);
          }
          t = TCons_2(t, r_2, s_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_61), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = z_13;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,c_62 = NULL;
  u_61 = t;
  r_61 :
  if(match_cons(u_61, sym_TCons_2))
    {
      x_61 = ATgetArgument(u_61, 0);
      y_61 = ATgetArgument(u_61, 1);
      s_61 :
      if(match_cons(y_61, sym_TCons_2))
        {
          z_61 = ATgetArgument(y_61, 0);
          c_62 = ATgetArgument(y_61, 1);
          t_61 :
          if(match_cons(c_62, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(x_61), not_null(z_61));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  m_62 = t;
  j_62 :
  if(match_cons(m_62, sym_TCons_2))
    {
      n_62 = ATgetArgument(m_62, 0);
      o_62 = ATgetArgument(m_62, 1);
      k_62 :
      if(match_cons(o_62, sym_TCons_2))
        {
          p_62 = ATgetArgument(o_62, 0);
          q_62 = ATgetArgument(o_62, 1);
          l_62 :
          if(match_cons(q_62, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(n_62), not_null(p_62));
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
ATerm output_file_0 (ATerm t)
{
  ATerm c_63 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm c_14 = t;
      if(PushChoice()==0)
        {
          ATerm i_3 (ATerm t)
          {
            ATerm d_63 = NULL,e_63 = NULL;
            d_63 = t;
            v_62 :
            if(match_cons(d_63, sym_Output_1))
              {
                e_63 = ATgetArgument(d_63, 0);
                if(c_63 != NULL && c_63 != e_63)
                  _fail(e_63);
                else
                  c_63 = e_63;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, i_3);
          PopChoice();
        }
      else
        {
          t = c_14;
          {
            ATerm f_63 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_63 = t;
            if(c_63 != NULL && c_63 != f_63)
              _fail(f_63);
            else
              c_63 = f_63;
          }
        }
      return(t);
    }
    ATerm z_2 (ATerm t)
    {
      ATerm j_3 (ATerm t)
      {
        ATerm g_63 = NULL;
        g_63 = t;
        x_62 :
        if(!(match_cons(g_63, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, j_3);
      return(t);
    }
    t = TCons_2(t, y_2, z_2);
  }
  t = b_14;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        ATerm n_3 (ATerm t)
        {
          t = not_null(c_63);
          return(t);
        }
        t = split_2(t, n_3, _id);
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        ATerm h_63 = NULL;
        h_63 = t;
        y_62 :
        if(!(match_cons(h_63, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, l_3, m_3);
      return(t);
    }
    t = TCons_2(t, _id, k_3);
    {
      ATerm d_14 = t;
      if(PushChoice()==0)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm i_63 = NULL;
              i_63 = t;
              z_62 :
              if(!(match_cons(i_63, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, t_3);
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm j_63 = NULL;
              j_63 = t;
              a_63 :
              if(!(match_cons(j_63, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, u_3);
            return(t);
          }
          t = TCons_2(t, o_3, p_3);
          PopChoice();
        }
      else
        {
          t = d_14;
          {
            ATerm v_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                ATerm k_63 = NULL;
                k_63 = t;
                b_63 :
                if(!(match_cons(k_63, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, w_3);
              return(t);
            }
            t = TCons_2(t, _id, v_3);
          }
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
ATerm apply_strategy_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm s_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,e_64 = NULL;
  ATerm e_14;
  e_14 = t;
  t = dtime_0(t);
  t = e_14;
  t = d_65(t);
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm t_63 = NULL;
      t = dtime_0(t);
      t_63 = t;
      if(s_63 != NULL && s_63 != t_63)
        _fail(t_63);
      else
        s_63 = t_63;
    }
    t = f_14;
    u_63 = t;
    p_63 :
    if(match_cons(u_63, sym_TCons_2))
      {
        v_63 = ATgetArgument(u_63, 0);
        w_63 = ATgetArgument(u_63, 1);
        q_63 :
        if(match_cons(w_63, sym_TCons_2))
          {
            x_63 = ATgetArgument(w_63, 0);
            e_64 = ATgetArgument(w_63, 1);
            r_63 :
            if(match_cons(e_64, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(s_63)), not_null(v_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_63), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm o_64 = NULL;
  o_64 = t;
  t = SSL_ReadFromFile(not_null(o_64));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm x_64 = NULL;
  ATerm z_64 = NULL;
  x_64 = t;
  {
    ATerm b_65 = NULL;
    t = c_78(t);
    z_64 = t;
    t = not_null(x_64);
    t = d_78(t);
    b_65 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_64), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_65), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_65 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm h_14 = t;
    if(PushChoice()==0)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm m_65 = NULL,n_65 = NULL;
          m_65 = t;
          j_65 :
          if(match_cons(m_65, sym_Input_1))
            {
              n_65 = ATgetArgument(m_65, 0);
              if(l_65 != NULL && l_65 != n_65)
                _fail(n_65);
              else
                l_65 = n_65;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, g_4);
        PopChoice();
      }
    else
      {
        t = h_14;
        {
          ATerm o_65 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          o_65 = t;
          if(l_65 != NULL && l_65 != o_65)
            _fail(o_65);
          else
            l_65 = o_65;
        }
      }
  }
  t = g_14;
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(l_65);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_65 = NULL;
  s_65 = t;
  r_65 :
  if(!(match_cons(s_65, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm w_65 = NULL,x_65 = NULL;
  w_65 = t;
  v_65 :
  if(match_cons(w_65, sym_Undefined_1))
    {
      x_65 = ATgetArgument(w_65, 0);
      {
        ATerm z_65 = NULL;
        t = not_null(x_65);
        t = g_56(t);
        z_65 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_65));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_66 = NULL;
  e_66 = t;
  d_66 :
  if(!(match_cons(e_66, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm f_66 (ATerm t)
  {
    ATerm i_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_76, _id);
        PopChoice();
      }
    else
      {
        t = i_14;
        t = Cons_2(t, _id, f_66);
      }
    return(t);
  }
  t = f_66(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_64 (ATerm))
{
  t = fetch_1(t, h_64);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm j_14 = t;
    if(PushChoice()==0)
      {
        ATerm i_66 = NULL;
        i_66 = t;
        g_66 :
        if(!(match_cons(i_66, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = j_14;
        {
          ATerm k_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = k_14;
              {
                ATerm j_66 = NULL;
                j_66 = t;
                h_66 :
                if(!(match_cons(j_66, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_4);
  t = c_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,b_67 = NULL,c_67 = NULL;
    s_66 = t;
    l_66 :
    if(match_cons(s_66, sym_TCons_2))
      {
        t_66 = ATgetArgument(s_66, 0);
        u_66 = ATgetArgument(s_66, 1);
        m_66 :
        if(match_cons(u_66, sym_TCons_2))
          {
            v_66 = ATgetArgument(u_66, 0);
            w_66 = ATgetArgument(u_66, 1);
            n_66 :
            if(match_cons(w_66, sym_TCons_2))
              {
                b_67 = ATgetArgument(w_66, 0);
                c_67 = ATgetArgument(w_66, 1);
                o_66 :
                if(match_cons(c_67, sym_TNil_0))
                  {
                    if(p_66 != NULL && p_66 != t_66)
                      _fail(t_66);
                    else
                      p_66 = t_66;
                    if(q_66 != NULL && q_66 != v_66)
                      _fail(v_66);
                    else
                      q_66 = v_66;
                    if(r_66 != NULL && r_66 != b_67)
                      _fail(b_67);
                    else
                      r_66 = b_67;
                    t = SSL_table_put(not_null(p_66), not_null(q_66), not_null(r_66));
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
  }
  t = l_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_67 = NULL;
  f_67 = t;
  t = SSL_table_create(not_null(f_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_67 = NULL;
  j_67 = t;
  {
    ATerm m_14;
    m_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_67), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
  v_67 = t;
  u_67 :
  if(match_cons(v_67, sym_Cons_2))
    {
      w_67 = ATgetArgument(v_67, 0);
      x_67 = ATgetArgument(v_67, 1);
      {
        ATerm a_68 = NULL;
        t = not_null(w_67);
        t = a_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_64(t);
        a_68 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_68), not_null(x_67));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
  i_68 = t;
  g_68 :
  if(match_cons(i_68, sym_Cons_2))
    {
      j_68 = ATgetArgument(i_68, 0);
      k_68 = ATgetArgument(i_68, 1);
      h_68 :
      if(match_cons(k_68, sym_Cons_2))
        {
          l_68 = ATgetArgument(k_68, 0);
          m_68 = ATgetArgument(k_68, 1);
          {
            ATerm q_68 = NULL;
            t = not_null(j_68);
            t = c_64(t);
            t = not_null(l_68);
            t = d_64(t);
            q_68 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_68), not_null(m_68));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_14 = t;
  if(PushChoice()==0)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm s_69 = NULL;
        s_69 = t;
        u_68 :
        if(!(match_string(s_69, "-S")))
          _fail(t);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, l_4, m_4);
      PopChoice();
    }
  else
    {
      t = n_14;
      {
        ATerm o_14 = t;
        if(PushChoice()==0)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm t_69 = NULL;
              t_69 = t;
              v_68 :
              if(!(match_string(t_69, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, n_4, o_4);
            PopChoice();
          }
        else
          {
            t = o_14;
            {
              ATerm p_14 = t;
              if(PushChoice()==0)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm u_69 = NULL;
                    u_69 = t;
                    w_68 :
                    if(!(match_string(u_69, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, p_4, u_4);
                  PopChoice();
                }
              else
                {
                  t = p_14;
                  {
                    ATerm q_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm v_69 = NULL;
                          v_69 = t;
                          x_68 :
                          if(!(match_string(v_69, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, v_4, x_4);
                        PopChoice();
                      }
                    else
                      {
                        t = q_14;
                        {
                          ATerm r_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_4 (ATerm t)
                              {
                                ATerm w_69 = NULL;
                                w_69 = t;
                                c_69 :
                                if(!(match_string(w_69, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm b_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, z_4, b_5);
                              PopChoice();
                            }
                          else
                            {
                              t = r_14;
                              {
                                ATerm s_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm c_5 (ATerm t)
                                    {
                                      ATerm x_69 = NULL;
                                      x_69 = t;
                                      d_69 :
                                      if(!(match_string(x_69, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm d_5 (ATerm t)
                                    {
                                      ATerm y_69 = NULL;
                                      y_69 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_69));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, c_5, d_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_14;
                                    {
                                      ATerm t_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm e_5 (ATerm t)
                                          {
                                            ATerm a_70 = NULL;
                                            a_70 = t;
                                            f_69 :
                                            if(!(match_string(a_70, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_5 (ATerm t)
                                          {
                                            ATerm b_70 = NULL;
                                            b_70 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_70));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, e_5, f_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_14;
                                          {
                                            ATerm u_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm g_5 (ATerm t)
                                                {
                                                  ATerm d_70 = NULL;
                                                  d_70 = t;
                                                  h_69 :
                                                  if(!(match_string(d_70, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm h_5 (ATerm t)
                                                {
                                                  ATerm e_70 = NULL;
                                                  e_70 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_70));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, g_5, h_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_14;
                                                {
                                                  ATerm x_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm m_5 (ATerm t)
                                                      {
                                                        ATerm g_70 = NULL;
                                                        g_70 = t;
                                                        j_69 :
                                                        if(!(match_string(g_70, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm h_70 = NULL;
                                                        h_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_70));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, m_5, p_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_14;
                                                      {
                                                        ATerm y_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm v_5 (ATerm t)
                                                            {
                                                              ATerm j_70 = NULL;
                                                              j_70 = t;
                                                              l_69 :
                                                              if(!(match_string(j_70, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm w_5 (ATerm t)
                                                            {
                                                              ATerm k_70 = NULL;
                                                              k_70 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_70));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, v_5, w_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_14;
                                                            {
                                                              ATerm z_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm x_5 (ATerm t)
                                                                  {
                                                                    ATerm m_70 = NULL;
                                                                    m_70 = t;
                                                                    n_69 :
                                                                    if(!(match_string(m_70, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, x_5, y_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_14;
                                                                  {
                                                                    ATerm a_15 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm c_6 (ATerm t)
                                                                        {
                                                                          ATerm n_70 = NULL;
                                                                          n_70 = t;
                                                                          o_69 :
                                                                          if(!(match_string(n_70, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm d_6 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, c_6, d_6);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_15;
                                                                        {
                                                                          ATerm b_15 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm e_6 (ATerm t)
                                                                              {
                                                                                ATerm o_70 = NULL;
                                                                                o_70 = t;
                                                                                p_69 :
                                                                                if(!(match_string(o_70, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm f_6 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, e_6, f_6);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_15;
                                                                              {
                                                                                ATerm c_15 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm g_6 (ATerm t)
                                                                                    {
                                                                                      ATerm p_70 = NULL;
                                                                                      p_70 = t;
                                                                                      q_69 :
                                                                                      if(!(match_string(p_70, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm l_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, g_6, l_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_15;
                                                                                    {
                                                                                      ATerm m_6 (ATerm t)
                                                                                      {
                                                                                        ATerm q_70 = NULL;
                                                                                        q_70 = t;
                                                                                        r_69 :
                                                                                        if(!(match_string(q_70, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm p_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, m_6, p_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  x_70 :
  if(match_cons(y_70, sym_Cons_2))
    {
      z_70 = ATgetArgument(y_70, 0);
      a_71 = ATgetArgument(y_70, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_70)), not_null(a_71));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  i_71 = t;
  h_71 :
  if(match_cons(i_71, sym_Cons_2))
    {
      j_71 = ATgetArgument(i_71, 0);
      k_71 = ATgetArgument(i_71, 1);
      {
        ATerm n_71 = NULL;
        t = not_null(j_71);
        {
          ATerm p_71 = NULL;
          t = e_62(t);
          n_71 = t;
          t = not_null(k_71);
          t = f_62(t);
          p_71 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_71), not_null(p_71));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm v_71 = NULL;
  v_71 = t;
  u_71 :
  if(!(match_cons(v_71, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm y_71 = NULL;
    y_71 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_71));
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm d_15 = t;
    if(PushChoice()==0)
      {
        ATerm e_15 = t;
        if(PushChoice()==0)
          {
            ATerm e_72 = NULL;
            e_72 = t;
            x_71 :
            if(!(match_cons(e_72, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = e_15;
            t = y_63(t);
            t = Cons_2(t, _id, t_6);
          }
        PopChoice();
      }
    else
      {
        t = d_15;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, s_6, t_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm f_15 = t;
    if(PushChoice()==0)
      {
        t = s_64(t);
        PopChoice();
      }
    else
      {
        t = f_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_6);
  t = store_options_0(t);
  {
    ATerm g_15 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, t_64);
        PopChoice();
      }
    else
      {
        t = g_15;
        {
          ATerm h_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, r_64);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = h_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm))
{
  t = iowrap_3(t, m_64, n_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm y_6 (ATerm t)
      {
        ATerm i_72 = NULL;
        i_72 = t;
        h_72 :
        if(!(match_cons(i_72, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, j_64, y_6);
      return(t);
    }
    t = TCons_2(t, _id, x_6);
    return(t);
  }
  t = iowrap_2(t, v_6, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm l_7 (ATerm t)
    {
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_clean_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, l_7);
    return(t);
  }
  t = iowrap_1(t, k_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
