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
ATerm simplify_0 (ATerm);
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
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_79 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, a_0);
  return(t);
}
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
  ATerm s_7 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, b_83, z_82);
      PopChoice();
    }
  else
    {
      t = s_7;
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
                  ATerm t_7 = t;
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
                      t = t_7;
                      {
                        ATerm u_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(e_4);
                              return(t);
                            }
                            t = HdMember_1(t, b_0);
                            t = k_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_7;
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
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, c_0, union_0, z_73);
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_6 (ATerm t)
  {
    ATerm v_7 = t;
    if(PushChoice()==0)
      {
        t = y_68(t);
        PopChoice();
      }
    else
      {
        t = v_7;
        {
          ATerm w_7 = t;
          if(PushChoice()==0)
            {
              ATerm z_5 = NULL;
              ATerm z_7;
              z_7 = t;
              {
                ATerm a_6 = NULL;
                t = z_68(t);
                a_6 = t;
                if(z_5 != NULL && z_5 != a_6)
                  _fail(a_6);
                else
                  z_5 = a_6;
              }
              t = z_7;
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = not_null(z_5);
                    return(t);
                  }
                  t = split_2(t, b_6, f_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm e_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_69(t, d_0, b_6, e_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = w_7;
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
  ATerm g_0 (ATerm t)
  {
    ATerm n_8 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = n_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
  k_6 = t;
  i_6 :
  if(match_cons(k_6, sym_Scope_2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      j_6 :
      if(match_cons(m_6, sym_Seq_2))
        {
          n_6 = ATgetArgument(m_6, 0);
          o_6 = ATgetArgument(m_6, 1);
          {
            ATerm s_6 = NULL,t_6 = NULL;
            ATerm u_6 = NULL;
            t = not_null(n_6);
            {
              ATerm w_6 = NULL;
              t = tvars_0(t);
              u_6 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm x_6 = NULL;
                t = isect_0(t);
                w_6 = t;
                if(s_6 != NULL && s_6 != w_6)
                  _fail(w_6);
                else
                  s_6 = w_6;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_6), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = diff_0(t);
                x_6 = t;
                if(t_6 != NULL && t_6 != x_6)
                  _fail(x_6);
                else
                  t_6 = x_6;
                {
                  ATerm o_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm y_6 = NULL;
                      y_6 = t;
                      h_6 :
                      if(!(match_cons(y_6, sym_Nil_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = o_8;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_6), not_null(o_6))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm d_7 (ATerm t)
  {
    t = f_79(t);
    t = _all(t, d_7);
    return(t);
  }
  t = d_7(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm p_8 = t;
    if(PushChoice()==0)
      {
        t = NarrowScope_0(t);
        PopChoice();
      }
    else
      t = p_8;
    return(t);
  }
  t = topdown_1(t, h_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  ATerm x_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_7), not_null(o_7)));
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_7), not_null(q_7)));
    return(t);
  }
  m_7 = t;
  g_7 :
  if(match_cons(m_7, sym_Seq_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      h_7 :
      if(match_cons(o_7, sym_Scope_2))
        {
          p_7 = ATgetArgument(o_7, 0);
          q_7 = ATgetArgument(o_7, 1);
          i_7 :
          if(match_cons(n_7, sym_Scope_2))
            {
              k_7 = ATgetArgument(n_7, 0);
              l_7 = ATgetArgument(n_7, 1);
              {
                ATerm q_8 = t;
                if(PushChoice()==0)
                  {
                    t = x_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = q_8;
                    t = y_7(t);
                  }
              }
            }
          else
            t = y_7(t);
        }
      else
        {
          j_7 :
          if(match_cons(n_7, sym_Scope_2))
            {
              k_7 = ATgetArgument(n_7, 0);
              l_7 = ATgetArgument(n_7, 1);
              t = x_7(t);
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
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  f_8 = t;
  a_8 :
  if(match_cons(f_8, sym_Let_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      m_8 = ATgetArgument(f_8, 1);
      b_8 :
      if(match_cons(g_8, sym_Cons_2))
        {
          h_8 = ATgetArgument(g_8, 0);
          l_8 = ATgetArgument(g_8, 1);
          c_8 :
          if(match_cons(h_8, sym_SDef_3))
            {
              i_8 = ATgetArgument(h_8, 0);
              j_8 = ATgetArgument(h_8, 1);
              k_8 = ATgetArgument(h_8, 2);
              d_8 :
              if(match_cons(j_8, sym_Nil_0))
                {
                  e_8 :
                  if(match_cons(l_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(i_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(k_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(m_8));
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
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 = t;
    if(PushChoice()==0)
      {
        t = g_77(t);
        PopChoice();
      }
    else
      {
        t = s_8;
        t = Cons_2(t, _id, r_8);
      }
    return(t);
  }
  t = r_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Let_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm j_9 = NULL,k_9 = NULL;
        ATerm z_9 = NULL;
        t = not_null(f_9);
        {
          ATerm i_0 (ATerm t)
          {
            ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
            l_9 = t;
            z_8 :
            if(match_cons(l_9, sym_Cons_2))
              {
                m_9 = ATgetArgument(l_9, 0);
                q_9 = ATgetArgument(l_9, 1);
                a_9 :
                if(match_cons(m_9, sym_SDef_3))
                  {
                    n_9 = ATgetArgument(m_9, 0);
                    o_9 = ATgetArgument(m_9, 1);
                    p_9 = ATgetArgument(m_9, 2);
                    b_9 :
                    if(match_cons(o_9, sym_Nil_0))
                      {
                        ATerm y_9 = NULL;
                        t = not_null(g_9);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
                            u_9 = t;
                            v_8 :
                            if(match_cons(u_9, sym_Call_2))
                              {
                                v_9 = ATgetArgument(u_9, 0);
                                x_9 = ATgetArgument(u_9, 1);
                                w_8 :
                                if(match_cons(v_9, sym_SVar_1))
                                  {
                                    w_9 = ATgetArgument(v_9, 0);
                                    x_8 :
                                    if(match_cons(x_9, sym_Nil_0))
                                      {
                                        if(n_9 != NULL && n_9 != w_9)
                                          _fail(w_9);
                                        else
                                          n_9 = w_9;
                                        t = not_null(p_9);
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
                          y_9 = t;
                          if(j_9 != NULL && j_9 != y_9)
                            _fail(y_9);
                          else
                            j_9 = y_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm t_8 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = t_8;
                          }
                        }
                        t = not_null(q_9);
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
          z_9 = t;
          if(k_9 != NULL && k_9 != z_9)
            _fail(z_9);
          else
            k_9 = z_9;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_9), not_null(j_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  p_10 = t;
  h_10 :
  if(match_cons(p_10, sym_TCons_2))
    {
      q_10 = ATgetArgument(p_10, 0);
      s_10 = ATgetArgument(p_10, 1);
      i_10 :
      if(match_cons(q_10, sym_Build_1))
        {
          r_10 = ATgetArgument(q_10, 0);
          j_10 :
          if(match_cons(s_10, sym_TCons_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              x_10 = ATgetArgument(s_10, 1);
              k_10 :
              if(match_cons(t_10, sym_Prim_2))
                {
                  u_10 = ATgetArgument(t_10, 0);
                  o_10 = ATgetArgument(t_10, 1);
                  l_10 :
                  if(match_cons(x_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_10), not_null(o_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(t_10, sym_Where_1))
                    {
                      u_10 = ATgetArgument(t_10, 0);
                      m_10 :
                      if(match_cons(u_10, sym_Prim_2))
                        {
                          v_10 = ATgetArgument(u_10, 0);
                          w_10 = ATgetArgument(u_10, 1);
                          n_10 :
                          if(match_cons(x_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_10), not_null(w_10));
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
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  p_11 = t;
  i_11 :
  if(match_cons(p_11, sym_TCons_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      s_11 = ATgetArgument(p_11, 1);
      j_11 :
      if(match_cons(q_11, sym_Build_1))
        {
          r_11 = ATgetArgument(q_11, 0);
          k_11 :
          if(match_cons(s_11, sym_TCons_2))
            {
              t_11 = ATgetArgument(s_11, 0);
              w_11 = ATgetArgument(s_11, 1);
              l_11 :
              if(match_cons(t_11, sym_Build_1))
                {
                  u_11 = ATgetArgument(t_11, 0);
                  m_11 :
                  if(match_cons(w_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(t_11, sym_Where_1))
                    {
                      u_11 = ATgetArgument(t_11, 0);
                      n_11 :
                      if(match_cons(u_11, sym_Build_1))
                        {
                          v_11 = ATgetArgument(u_11, 0);
                          o_11 :
                          if(match_cons(w_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_11));
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
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,v_14 = NULL;
  q_12 = t;
  j_12 :
  if(match_cons(q_12, sym_TCons_2))
    {
      r_12 = ATgetArgument(q_12, 0);
      v_12 = ATgetArgument(q_12, 1);
      k_12 :
      if(match_cons(r_12, sym_Build_1))
        {
          s_12 = ATgetArgument(r_12, 0);
          l_12 :
          if(match_cons(s_12, sym_Op_2))
            {
              t_12 = ATgetArgument(s_12, 0);
              u_12 = ATgetArgument(s_12, 1);
              m_12 :
              if(match_cons(v_12, sym_TCons_2))
                {
                  w_12 = ATgetArgument(v_12, 0);
                  v_14 = ATgetArgument(v_12, 1);
                  n_12 :
                  if(match_cons(w_12, sym_Match_1))
                    {
                      x_12 = ATgetArgument(w_12, 0);
                      o_12 :
                      if(match_cons(x_12, sym_Op_2))
                        {
                          y_12 = ATgetArgument(x_12, 0);
                          z_12 = ATgetArgument(x_12, 1);
                          p_12 :
                          if(match_cons(v_14, sym_TNil_0))
                            {
                              ATerm l_15 = NULL,t_15 = NULL;
                              if(t_12 != NULL && t_12 != y_12)
                                _fail(y_12);
                              else
                                t_12 = y_12;
                              if(l_15 != NULL && l_15 != z_12)
                                _fail(z_12);
                              else
                                l_15 = z_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_15), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_0 (ATerm t)
                                {
                                  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
                                  m_15 = t;
                                  f_12 :
                                  if(match_cons(m_15, sym_TCons_2))
                                    {
                                      n_15 = ATgetArgument(m_15, 0);
                                      o_15 = ATgetArgument(m_15, 1);
                                      g_12 :
                                      if(match_cons(o_15, sym_TCons_2))
                                        {
                                          p_15 = ATgetArgument(o_15, 0);
                                          q_15 = ATgetArgument(o_15, 1);
                                          h_12 :
                                          if(match_cons(q_15, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_15)));
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
                                t_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(t_12), not_null(u_12))));
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
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  z_15 :
  if(match_cons(c_16, sym_TCons_2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      a_16 :
      if(match_cons(e_16, sym_TCons_2))
        {
          f_16 = ATgetArgument(e_16, 0);
          g_16 = ATgetArgument(e_16, 1);
          b_16 :
          if(match_cons(g_16, sym_TNil_0))
            {
              if(d_16 != NULL && d_16 != f_16)
                _fail(f_16);
              else
                d_16 = f_16;
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,o_18 = NULL,p_18 = NULL;
  e_17 = t;
  u_16 :
  if(match_cons(e_17, sym_TCons_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      j_17 = ATgetArgument(e_17, 1);
      v_16 :
      if(match_cons(f_17, sym_Build_1))
        {
          g_17 = ATgetArgument(f_17, 0);
          z_16 :
          if(match_cons(g_17, sym_Op_2))
            {
              h_17 = ATgetArgument(g_17, 0);
              i_17 = ATgetArgument(g_17, 1);
              a_17 :
              if(match_cons(j_17, sym_TCons_2))
                {
                  k_17 = ATgetArgument(j_17, 0);
                  p_18 = ATgetArgument(j_17, 1);
                  b_17 :
                  if(match_cons(k_17, sym_Match_1))
                    {
                      l_17 = ATgetArgument(k_17, 0);
                      c_17 :
                      if(match_cons(l_17, sym_Op_2))
                        {
                          m_17 = ATgetArgument(l_17, 0);
                          o_18 = ATgetArgument(l_17, 1);
                          d_17 :
                          if(match_cons(p_18, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm u_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = u_8;
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
  ATerm y_8 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = y_8;
      {
        ATerm c_9 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = c_9;
            {
              ATerm h_9 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_9;
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
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm f_21 (ATerm t)
  {
    ATerm y_20 = NULL;
    ATerm z_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    z_20 = t;
    if(y_20 != NULL && y_20 != z_20)
      _fail(z_20);
    else
      y_20 = z_20;
    t = not_null(y_20);
    return(t);
  }
  ATerm g_21 (ATerm t)
  {
    ATerm d_21 = NULL;
    ATerm e_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    e_21 = t;
    if(d_21 != NULL && d_21 != e_21)
      _fail(e_21);
    else
      d_21 = e_21;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_21), not_null(v_20));
    return(t);
  }
  r_20 = t;
  p_20 :
  if(match_cons(r_20, sym_Seq_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      q_20 :
      if(match_cons(t_20, sym_Seq_2))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          {
            ATerm i_9 = t;
            if(PushChoice()==0)
              {
                t = f_21(t);
                PopChoice();
              }
            else
              {
                t = i_9;
                t = g_21(t);
              }
          }
        }
      else
        t = f_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  u_21 = t;
  q_21 :
  if(match_cons(u_21, sym_Seq_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      x_21 = ATgetArgument(u_21, 1);
      r_21 :
      if(match_cons(v_21, sym_Build_1))
        {
          w_21 = ATgetArgument(v_21, 0);
          s_21 :
          if(match_cons(x_21, sym_Seq_2))
            {
              y_21 = ATgetArgument(x_21, 0);
              a_22 = ATgetArgument(x_21, 1);
              t_21 :
              if(match_cons(y_21, sym_Build_1))
                {
                  z_21 = ATgetArgument(y_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_21)), not_null(a_22));
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
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  j_22 = t;
  h_22 :
  if(match_cons(j_22, sym_Scope_2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      i_22 :
      if(match_cons(l_22, sym_Scope_2))
        {
          m_22 = ATgetArgument(l_22, 0);
          n_22 = ATgetArgument(l_22, 1);
          {
            ATerm r_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            r_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_22), not_null(n_22));
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
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Var_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      t = not_null(z_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  h_23 = t;
  d_23 :
  if(match_cons(h_23, sym_TCons_2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      e_23 :
      if(match_cons(j_23, sym_TCons_2))
        {
          k_23 = ATgetArgument(j_23, 0);
          n_23 = ATgetArgument(j_23, 1);
          f_23 :
          if(match_cons(k_23, sym_Cons_2))
            {
              l_23 = ATgetArgument(k_23, 0);
              m_23 = ATgetArgument(k_23, 1);
              g_23 :
              if(match_cons(n_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,l_25 = NULL,m_25 = NULL;
  v_24 = t;
  b_24 :
  if(match_cons(v_24, sym_TCons_2))
    {
      w_24 = ATgetArgument(v_24, 0);
      x_24 = ATgetArgument(v_24, 1);
      c_24 :
      if(match_cons(x_24, sym_TCons_2))
        {
          a_25 = ATgetArgument(x_24, 0);
          m_25 = ATgetArgument(x_24, 1);
          q_24 :
          if(match_cons(a_25, sym_Cons_2))
            {
              b_25 = ATgetArgument(a_25, 0);
              l_25 = ATgetArgument(a_25, 1);
              r_24 :
              if(match_cons(b_25, sym_TCons_2))
                {
                  c_25 = ATgetArgument(b_25, 0);
                  d_25 = ATgetArgument(b_25, 1);
                  s_24 :
                  if(match_cons(d_25, sym_TCons_2))
                    {
                      e_25 = ATgetArgument(d_25, 0);
                      f_25 = ATgetArgument(d_25, 1);
                      t_24 :
                      if(match_cons(f_25, sym_TNil_0))
                        {
                          u_24 :
                          if(match_cons(m_25, sym_TNil_0))
                            {
                              ATerm o_25 = NULL;
                              if(w_24 != NULL && w_24 != c_25)
                                _fail(c_25);
                              else
                                w_24 = c_25;
                              if(o_25 != NULL && o_25 != e_25)
                                _fail(e_25);
                              else
                                o_25 = e_25;
                              t = not_null(o_25);
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
  ATerm r_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = r_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm u_25 = NULL;
  ATerm w_25 = NULL,x_25 = NULL;
  u_25 = t;
  {
    ATerm y_25 = NULL;
    t = not_null(u_25);
    {
      ATerm z_25 = NULL;
      t = g_82(t);
      y_25 = t;
      if(w_25 != NULL && w_25 != y_25)
        _fail(y_25);
      else
        w_25 = y_25;
      t = h_82(t);
      z_25 = t;
      if(x_25 != NULL && x_25 != z_25)
        _fail(z_25);
      else
        x_25 = z_25;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm d_26 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = g_81(t);
        PopChoice();
      }
    else
      {
        t = s_9;
        t = _all(t, d_26);
      }
    return(t);
  }
  t = d_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  l_26 = t;
  h_26 :
  if(match_cons(l_26, sym_TCons_2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      i_26 :
      if(match_cons(n_26, sym_TCons_2))
        {
          o_26 = ATgetArgument(n_26, 0);
          p_26 = ATgetArgument(n_26, 1);
          j_26 :
          if(match_cons(p_26, sym_TNil_0))
            {
              ATerm t_26 = NULL;
              if(t_26 != NULL && t_26 != o_26)
                _fail(o_26);
              else
                t_26 = o_26;
            }
          else
            {
              if(match_cons(p_26, sym_TCons_2))
                {
                  q_26 = ATgetArgument(p_26, 0);
                  r_26 = ATgetArgument(p_26, 1);
                  k_26 :
                  if(match_cons(r_26, sym_TNil_0))
                    {
                      ATerm z_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      z_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  t = subs_args_0(t);
  i_27 = t;
  f_27 :
  if(match_cons(i_27, sym_TCons_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      g_27 :
      if(match_cons(k_27, sym_TCons_2))
        {
          l_27 = ATgetArgument(k_27, 0);
          m_27 = ATgetArgument(k_27, 1);
          h_27 :
          if(match_cons(m_27, sym_TNil_0))
            {
              t = not_null(l_27);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(j_27);
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
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Cons_2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      t = h_73(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm y_27 = NULL;
          y_27 = t;
          if(u_27 != NULL && u_27 != y_27)
            _fail(y_27);
          else
            u_27 = y_27;
          return(t);
        }
        t = fetch_1(t, n_0);
      }
      t = not_null(v_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  g_28 = t;
  c_28 :
  if(match_cons(g_28, sym_TCons_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      d_28 :
      if(match_cons(i_28, sym_TCons_2))
        {
          j_28 = ATgetArgument(i_28, 0);
          m_28 = ATgetArgument(i_28, 1);
          e_28 :
          if(match_cons(j_28, sym_Cons_2))
            {
              k_28 = ATgetArgument(j_28, 0);
              l_28 = ATgetArgument(j_28, 1);
              f_28 :
              if(match_cons(m_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_28), not_null(h_28)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  h_29 = t;
  d_29 :
  if(match_cons(h_29, sym_Cons_2))
    {
      i_29 = ATgetArgument(h_29, 0);
      n_29 = ATgetArgument(h_29, 1);
      e_29 :
      if(match_cons(i_29, sym_TCons_2))
        {
          j_29 = ATgetArgument(i_29, 0);
          k_29 = ATgetArgument(i_29, 1);
          f_29 :
          if(match_cons(k_29, sym_TCons_2))
            {
              l_29 = ATgetArgument(k_29, 0);
              m_29 = ATgetArgument(k_29, 1);
              g_29 :
              if(match_cons(m_29, sym_TNil_0))
                {
                  ATerm r_29 = NULL,s_29 = NULL,a_30 = NULL,i_30 = NULL;
                  ATerm t_9;
                  t_9 = t;
                  {
                    ATerm t_29 = NULL;
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
                    t = not_null(l_29);
                    t_29 = t;
                    t = SSL_explode_term(not_null(t_29));
                    v_29 = t;
                    u_28 :
                    if(match_cons(v_29, sym_TCons_2))
                      {
                        w_29 = ATgetArgument(v_29, 0);
                        x_29 = ATgetArgument(v_29, 1);
                        v_28 :
                        if(match_cons(x_29, sym_TCons_2))
                          {
                            y_29 = ATgetArgument(x_29, 0);
                            z_29 = ATgetArgument(x_29, 1);
                            w_28 :
                            if(match_cons(z_29, sym_TNil_0))
                              {
                                if(r_29 != NULL && r_29 != w_29)
                                  _fail(w_29);
                                else
                                  r_29 = w_29;
                                if(s_29 != NULL && s_29 != y_29)
                                  _fail(y_29);
                                else
                                  s_29 = y_29;
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
                    ATerm b_30 = NULL;
                    ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
                    t = not_null(j_29);
                    b_30 = t;
                    t = SSL_explode_term(not_null(b_30));
                    d_30 = t;
                    z_28 :
                    if(match_cons(d_30, sym_TCons_2))
                      {
                        e_30 = ATgetArgument(d_30, 0);
                        f_30 = ATgetArgument(d_30, 1);
                        a_29 :
                        if(match_cons(f_30, sym_TCons_2))
                          {
                            g_30 = ATgetArgument(f_30, 0);
                            h_30 = ATgetArgument(f_30, 1);
                            b_29 :
                            if(match_cons(h_30, sym_TNil_0))
                              {
                                if(r_29 != NULL && r_29 != e_30)
                                  _fail(e_30);
                                else
                                  r_29 = e_30;
                                if(a_30 != NULL && a_30 != g_30)
                                  _fail(g_30);
                                else
                                  a_30 = g_30;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    i_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  v_30 = t;
  r_30 :
  if(match_cons(v_30, sym_Cons_2))
    {
      w_30 = ATgetArgument(v_30, 0);
      b_31 = ATgetArgument(v_30, 1);
      s_30 :
      if(match_cons(w_30, sym_TCons_2))
        {
          x_30 = ATgetArgument(w_30, 0);
          y_30 = ATgetArgument(w_30, 1);
          t_30 :
          if(match_cons(y_30, sym_TCons_2))
            {
              z_30 = ATgetArgument(y_30, 0);
              a_31 = ATgetArgument(y_30, 1);
              u_30 :
              if(match_cons(a_31, sym_TNil_0))
                {
                  ATerm d_31 = NULL;
                  if(x_30 != NULL && x_30 != z_30)
                    _fail(z_30);
                  else
                    x_30 = z_30;
                  if(d_31 != NULL && d_31 != b_31)
                    _fail(b_31);
                  else
                    d_31 = b_31;
                  t = not_null(d_31);
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
  ATerm f_31 (ATerm t)
  {
    ATerm a_10 = t;
    if(PushChoice()==0)
      {
        t = o_67(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        t = p_67(t);
        t = f_31(t);
      }
    return(t);
  }
  t = f_31(t);
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
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm p_31 = NULL;
        p_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            ATerm r_31 = NULL;
            r_31 = t;
            h_31 :
            if(!(match_cons(r_31, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm t_0 (ATerm t)
          {
            ATerm s_31 = NULL;
            s_31 = t;
            i_31 :
            if(!(match_cons(s_31, sym_TNil_0)))
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
        ATerm c_10 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm d_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = d_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm w_0 (ATerm t)
              {
                ATerm t_31 = NULL;
                t_31 = t;
                j_31 :
                if(!(match_cons(t_31, sym_TNil_0)))
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
            t = c_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = b_10;
      {
        ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
        u_31 = t;
        m_31 :
        if(match_cons(u_31, sym_TCons_2))
          {
            v_31 = ATgetArgument(u_31, 0);
            w_31 = ATgetArgument(u_31, 1);
            n_31 :
            if(match_cons(w_31, sym_TCons_2))
              {
                x_31 = ATgetArgument(w_31, 0);
                y_31 = ATgetArgument(w_31, 1);
                o_31 :
                if(match_cons(y_31, sym_TNil_0))
                  {
                    t = not_null(v_31);
                    {
                      ATerm e_32 (ATerm t)
                      {
                        ATerm e_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm b_32 = NULL;
                            b_32 = t;
                            l_31 :
                            if(!(match_cons(b_32, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = e_10;
                            {
                              ATerm f_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm x_0 (ATerm t)
                                  {
                                    t = not_null(x_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, x_0);
                                  t = e_32(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = f_10;
                                  t = Cons_2(t, _id, e_32);
                                }
                            }
                          }
                        return(t);
                      }
                      t = e_32(t);
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
  ATerm f_32 (ATerm t)
  {
    ATerm g_10 = t;
    if(PushChoice()==0)
      {
        t = v_80(t);
        PopChoice();
      }
    else
      {
        t = g_10;
        t = _one(t, f_32);
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  l_32 = t;
  i_32 :
  if(match_cons(l_32, sym_TCons_2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      j_32 :
      if(match_cons(n_32, sym_TCons_2))
        {
          o_32 = ATgetArgument(n_32, 0);
          p_32 = ATgetArgument(n_32, 1);
          k_32 :
          if(match_cons(p_32, sym_TNil_0))
            {
              t = not_null(o_32);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm s_32 = NULL;
                  s_32 = t;
                  if(m_32 != NULL && m_32 != s_32)
                    _fail(s_32);
                  else
                    m_32 = s_32;
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
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym_Var_1))
    {
      z_32 = ATgetArgument(y_32, 0);
      {
        ATerm b_33 = NULL;
        t = not_null(z_32);
        t = c_60(t);
        b_33 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  x_34 = t;
  v_33 :
  if(match_cons(x_34, sym_Seq_2))
    {
      y_34 = ATgetArgument(x_34, 0);
      c_35 = ATgetArgument(x_34, 1);
      w_33 :
      if(match_cons(y_34, sym_Build_1))
        {
          a_35 = ATgetArgument(y_34, 0);
          x_33 :
          if(match_cons(c_35, sym_Scope_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              g_35 = ATgetArgument(c_35, 1);
              y_33 :
              if(match_cons(g_35, sym_Seq_2))
                {
                  r_34 = ATgetArgument(g_35, 0);
                  w_34 = ATgetArgument(g_35, 1);
                  z_33 :
                  if(match_cons(r_34, sym_Assign_1))
                    {
                      s_34 = ATgetArgument(r_34, 0);
                      a_34 :
                      if(match_cons(s_34, sym_Var_1))
                        {
                          t_34 = ATgetArgument(s_34, 0);
                          {
                            ATerm y_10 = t;
                            if(PushChoice()==0)
                              {
                                ATerm l_35 = NULL,n_35 = NULL;
                                ATerm m_35 = NULL;
                                t = not_null(a_35);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = diff_0(t);
                                m_35 = t;
                                if(l_35 != NULL && l_35 != m_35)
                                  _fail(m_35);
                                else
                                  l_35 = m_35;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                t = substitute_1(t, IsVar_0);
                                n_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_35), not_null(n_35)));
                                PopChoice();
                              }
                            else
                              {
                                t = y_10;
                                {
                                  ATerm t_35 = NULL,v_35 = NULL;
                                  ATerm u_35 = NULL;
                                  t = not_null(a_35);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  u_35 = t;
                                  if(t_35 != NULL && t_35 != u_35)
                                    _fail(u_35);
                                  else
                                    t_35 = u_35;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = substitute_1(t, IsVar_0);
                                  v_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_35), not_null(v_35)));
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
          if(match_cons(y_34, sym_Assign_1))
            {
              a_35 = ATgetArgument(y_34, 0);
              b_34 :
              if(match_cons(a_35, sym_Var_1))
                {
                  b_35 = ATgetArgument(a_35, 0);
                  c_34 :
                  if(match_cons(c_35, sym_Seq_2))
                    {
                      d_35 = ATgetArgument(c_35, 0);
                      g_35 = ATgetArgument(c_35, 1);
                      d_34 :
                      if(match_cons(d_35, sym_Build_1))
                        {
                          e_35 = ATgetArgument(d_35, 0);
                          e_34 :
                          if(match_cons(e_35, sym_Var_1))
                            {
                              f_35 = ATgetArgument(e_35, 0);
                              {
                                ATerm w_36 = NULL;
                                if(b_35 != NULL && b_35 != f_35)
                                  _fail(f_35);
                                else
                                  b_35 = f_35;
                                if(w_36 != NULL && w_36 != g_35)
                                  _fail(g_35);
                                else
                                  w_36 = g_35;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_35))), not_null(w_36));
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
      if(match_cons(x_34, sym_Scope_2))
        {
          y_34 = ATgetArgument(x_34, 0);
          c_35 = ATgetArgument(x_34, 1);
          f_34 :
          if(match_cons(c_35, sym_Seq_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              g_35 = ATgetArgument(c_35, 1);
              g_34 :
              if(match_cons(d_35, sym_Assign_2))
                {
                  e_35 = ATgetArgument(d_35, 0);
                  p_34 = ATgetArgument(d_35, 1);
                  h_34 :
                  if(match_cons(e_35, sym_Var_1))
                    {
                      f_35 = ATgetArgument(e_35, 0);
                      i_34 :
                      if(match_cons(p_34, sym_Var_1))
                        {
                          q_34 = ATgetArgument(p_34, 0);
                          {
                            ATerm b_36 = NULL,d_36 = NULL;
                            ATerm c_36 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = diff_0(t);
                            c_36 = t;
                            if(b_36 != NULL && b_36 != c_36)
                              _fail(c_36);
                            else
                              b_36 = c_36;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = substitute_1(t, IsVar_0);
                            d_36 = t;
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_36), not_null(d_36));
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
                  if(match_cons(d_35, sym_Assign_1))
                    {
                      e_35 = ATgetArgument(d_35, 0);
                      j_34 :
                      if(match_cons(e_35, sym_Var_1))
                        {
                          f_35 = ATgetArgument(e_35, 0);
                          k_34 :
                          if(match_cons(g_35, sym_Seq_2))
                            {
                              r_34 = ATgetArgument(g_35, 0);
                              w_34 = ATgetArgument(g_35, 1);
                              l_34 :
                              if(match_cons(r_34, sym_Assign_1))
                                {
                                  s_34 = ATgetArgument(r_34, 0);
                                  m_34 :
                                  if(match_cons(s_34, sym_Var_1))
                                    {
                                      t_34 = ATgetArgument(s_34, 0);
                                      {
                                        ATerm j_36 = NULL,l_36 = NULL;
                                        ATerm k_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        k_36 = t;
                                        if(j_36 != NULL && j_36 != k_36)
                                          _fail(k_36);
                                        else
                                          j_36 = k_36;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = substitute_1(t, IsVar_0);
                                        l_36 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_35))), not_null(l_36)));
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(r_34, sym_Assign_2))
                                    {
                                      s_34 = ATgetArgument(r_34, 0);
                                      u_34 = ATgetArgument(r_34, 1);
                                      n_34 :
                                      if(match_cons(s_34, sym_Var_1))
                                        {
                                          t_34 = ATgetArgument(s_34, 0);
                                          o_34 :
                                          if(match_cons(u_34, sym_Var_1))
                                            {
                                              v_34 = ATgetArgument(u_34, 0);
                                              {
                                                ATerm q_36 = NULL,r_36 = NULL,t_36 = NULL;
                                                if(f_35 != NULL && f_35 != v_34)
                                                  _fail(v_34);
                                                else
                                                  f_35 = v_34;
                                                if(q_36 != NULL && q_36 != w_34)
                                                  _fail(w_34);
                                                else
                                                  q_36 = w_34;
                                                {
                                                  ATerm s_36 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = diff_0(t);
                                                  s_36 = t;
                                                  if(r_36 != NULL && r_36 != s_36)
                                                    _fail(s_36);
                                                  else
                                                    r_36 = s_36;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = substitute_1(t, IsVar_0);
                                                  t_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_35))), not_null(t_36)));
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
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  s_37 = t;
  q_37 :
  if(match_cons(s_37, sym_Seq_2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      r_37 :
      if(match_cons(u_37, sym_Let_2))
        {
          v_37 = ATgetArgument(u_37, 0);
          w_37 = ATgetArgument(u_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_37), not_null(w_37)));
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
  ATerm i_38 (ATerm t)
  {
    ATerm z_10 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, i_38);
        PopChoice();
      }
    else
      {
        t = z_10;
        {
          ATerm h_38 = NULL;
          h_38 = t;
          c_38 :
          if(match_cons(h_38, sym_Nil_0))
            t = c_77(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,u_38 = NULL;
  o_38 = t;
  l_38 :
  if(match_cons(o_38, sym_TCons_2))
    {
      p_38 = ATgetArgument(o_38, 0);
      q_38 = ATgetArgument(o_38, 1);
      m_38 :
      if(match_cons(q_38, sym_TCons_2))
        {
          r_38 = ATgetArgument(q_38, 0);
          u_38 = ATgetArgument(q_38, 1);
          n_38 :
          if(match_cons(u_38, sym_TNil_0))
            {
              t = not_null(p_38);
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(r_38);
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
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  j_39 = t;
  f_39 :
  if(match_cons(j_39, sym_TCons_2))
    {
      k_39 = ATgetArgument(j_39, 0);
      l_39 = ATgetArgument(j_39, 1);
      h_39 :
      if(match_cons(l_39, sym_TCons_2))
        {
          m_39 = ATgetArgument(l_39, 0);
          n_39 = ATgetArgument(l_39, 1);
          i_39 :
          if(match_cons(n_39, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_39), not_null(m_39));
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
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  b_40 = t;
  s_39 :
  if(match_cons(b_40, sym_TCons_2))
    {
      c_40 = ATgetArgument(b_40, 0);
      h_40 = ATgetArgument(b_40, 1);
      t_39 :
      if(match_cons(c_40, sym_Cons_2))
        {
          d_40 = ATgetArgument(c_40, 0);
          g_40 = ATgetArgument(c_40, 1);
          y_39 :
          if(match_cons(h_40, sym_TCons_2))
            {
              i_40 = ATgetArgument(h_40, 0);
              l_40 = ATgetArgument(h_40, 1);
              z_39 :
              if(match_cons(i_40, sym_Cons_2))
                {
                  j_40 = ATgetArgument(i_40, 0);
                  k_40 = ATgetArgument(i_40, 1);
                  a_40 :
                  if(match_cons(l_40, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  x_40 = t;
  s_40 :
  if(match_cons(x_40, sym_TCons_2))
    {
      y_40 = ATgetArgument(x_40, 0);
      z_40 = ATgetArgument(x_40, 1);
      t_40 :
      if(match_cons(y_40, sym_Nil_0))
        {
          u_40 :
          if(match_cons(z_40, sym_TCons_2))
            {
              a_41 = ATgetArgument(z_40, 0);
              b_41 = ATgetArgument(z_40, 1);
              v_40 :
              if(match_cons(a_41, sym_Nil_0))
                {
                  w_40 :
                  if(match_cons(b_41, sym_TNil_0))
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
  ATerm f_41 (ATerm t)
  {
    ATerm a_11 = t;
    if(PushChoice()==0)
      {
        t = z_74(t);
        PopChoice();
      }
    else
      {
        t = a_11;
        t = a_75(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm e_41 = NULL;
              e_41 = t;
              d_41 :
              if(!(match_cons(e_41, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, f_41, b_1);
            return(t);
          }
          t = TCons_2(t, c_75, a_1);
          t = b_75(t);
        }
      }
    return(t);
  }
  t = f_41(t);
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
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Cong_2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,h_43 = NULL;
        ATerm i_42 = NULL;
        t = not_null(a_42);
        {
          ATerm l_42 = NULL;
          t = map_1(t, new_0);
          i_42 = t;
          if(f_42 != NULL && f_42 != i_42)
            _fail(i_42);
          else
            f_42 = i_42;
          t = not_null(f_42);
          {
            ATerm m_42 = NULL;
            ATerm c_1 (ATerm t)
            {
              ATerm j_42 = NULL;
              j_42 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_42));
              return(t);
            }
            t = map_1(t, c_1);
            l_42 = t;
            if(d_42 != NULL && d_42 != l_42)
              _fail(l_42);
            else
              d_42 = l_42;
            t = not_null(a_42);
            {
              ATerm p_42 = NULL;
              t = map_1(t, new_0);
              m_42 = t;
              if(g_42 != NULL && g_42 != m_42)
                _fail(m_42);
              else
                g_42 = m_42;
              t = not_null(g_42);
              {
                ATerm q_42 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm n_42 = NULL;
                  n_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42));
                  return(t);
                }
                t = map_1(t, d_1);
                p_42 = t;
                if(e_42 != NULL && e_42 != p_42)
                  _fail(p_42);
                else
                  e_42 = p_42;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm g_43 = NULL;
                  t = zip_1(t, _id);
                  q_42 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
                      s_42 = t;
                      p_41 :
                      if(match_cons(s_42, sym_TCons_2))
                        {
                          t_42 = ATgetArgument(s_42, 0);
                          a_43 = ATgetArgument(s_42, 1);
                          q_41 :
                          if(match_cons(t_42, sym_TCons_2))
                            {
                              u_42 = ATgetArgument(t_42, 0);
                              v_42 = ATgetArgument(t_42, 1);
                              r_41 :
                              if(match_cons(v_42, sym_TCons_2))
                                {
                                  w_42 = ATgetArgument(v_42, 0);
                                  z_42 = ATgetArgument(v_42, 1);
                                  s_41 :
                                  if(match_cons(z_42, sym_TNil_0))
                                    {
                                      t_41 :
                                      if(match_cons(a_43, sym_TCons_2))
                                        {
                                          b_43 = ATgetArgument(a_43, 0);
                                          c_43 = ATgetArgument(a_43, 1);
                                          u_41 :
                                          if(match_cons(c_43, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_42)))));
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
                    g_43 = t;
                    if(h_42 != NULL && h_42 != g_43)
                      _fail(g_43);
                    else
                      h_42 = g_43;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_42), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        h_43 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_41), not_null(d_42))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_42)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_41), not_null(e_42))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_Cong_2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      {
        ATerm r_44 = NULL;
        ATerm x_44 = NULL;
        t = not_null(d_44);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm s_44 = NULL,u_44 = NULL;
            u_44 = t;
            y_43 :
            if(match_cons(u_44, sym_Match_1))
              {
                s_44 = ATgetArgument(u_44, 0);
                t = not_null(s_44);
              }
            else
              {
                if(match_cons(u_44, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_1);
          x_44 = t;
          if(r_44 != NULL && r_44 != x_44)
            _fail(x_44);
          else
            r_44 = x_44;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_44), not_null(r_44)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  i_45 :
  if(match_cons(k_45, sym_Scope_2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      j_45 :
      if(match_cons(l_45, sym_Nil_0))
        t = not_null(m_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
  y_46 = t;
  w_45 :
  if(match_cons(y_46, sym_Choice_2))
    {
      z_46 = ATgetArgument(y_46, 0);
      x_46 = ATgetArgument(y_46, 1);
      if(z_46 != NULL && z_46 != x_46)
        _fail(x_46);
      else
        z_46 = x_46;
      t = not_null(z_46);
    }
  else
    {
      if(match_cons(y_46, sym_LChoice_2))
        {
          z_46 = ATgetArgument(y_46, 0);
          x_46 = ATgetArgument(y_46, 1);
          if(z_46 != NULL && z_46 != x_46)
            _fail(x_46);
          else
            z_46 = x_46;
          t = not_null(z_46);
        }
      else
        {
          if(match_cons(y_46, sym_Where_1))
            {
              z_46 = ATgetArgument(y_46, 0);
              x_45 :
              if(match_cons(z_46, sym_Where_1))
                {
                  a_47 = ATgetArgument(z_46, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(a_47));
                }
              else
                {
                  if(match_cons(z_46, sym_Seq_2))
                    {
                      a_47 = ATgetArgument(z_46, 0);
                      c_47 = ATgetArgument(z_46, 1);
                      y_45 :
                      if(match_cons(a_47, sym_Where_1))
                        {
                          b_47 = ATgetArgument(a_47, 0);
                          z_45 :
                          if(match_cons(c_47, sym_Seq_2))
                            {
                              d_47 = ATgetArgument(c_47, 0);
                              f_47 = ATgetArgument(c_47, 1);
                              i_46 :
                              if(match_cons(d_47, sym_Build_1))
                                {
                                  e_47 = ATgetArgument(d_47, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_47)), not_null(f_47))));
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
              if(match_cons(y_46, sym_Not_1))
                {
                  z_46 = ATgetArgument(y_46, 0);
                  j_46 :
                  if(match_cons(z_46, sym_Not_1))
                    {
                      a_47 = ATgetArgument(z_46, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_47));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_46, sym_Test_1))
                    {
                      z_46 = ATgetArgument(y_46, 0);
                      w_46 :
                      if(match_cons(z_46, sym_Test_1))
                        {
                          a_47 = ATgetArgument(z_46, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_47));
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
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  b_48 = t;
  x_47 :
  if(match_cons(b_48, sym_Choice_2))
    {
      c_48 = ATgetArgument(b_48, 0);
      f_48 = ATgetArgument(b_48, 1);
      y_47 :
      if(match_cons(c_48, sym_Choice_2))
        {
          d_48 = ATgetArgument(c_48, 0);
          e_48 = ATgetArgument(c_48, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_48), (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_48), not_null(f_48)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(b_48, sym_Seq_2))
        {
          c_48 = ATgetArgument(b_48, 0);
          f_48 = ATgetArgument(b_48, 1);
          z_47 :
          if(match_cons(c_48, sym_Seq_2))
            {
              d_48 = ATgetArgument(c_48, 0);
              e_48 = ATgetArgument(c_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_48), not_null(f_48)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_48, sym_LChoice_2))
            {
              c_48 = ATgetArgument(b_48, 0);
              f_48 = ATgetArgument(b_48, 1);
              a_48 :
              if(match_cons(c_48, sym_LChoice_2))
                {
                  d_48 = ATgetArgument(c_48, 0);
                  e_48 = ATgetArgument(c_48, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_48), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_48), not_null(f_48)));
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  k_49 = t;
  e_49 :
  if(match_cons(k_49, sym_Seqs_1))
    {
      l_49 = ATgetArgument(k_49, 0);
      f_49 :
      if(match_cons(l_49, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(l_49, sym_Cons_2))
            {
              i_49 = ATgetArgument(l_49, 0);
              j_49 = ATgetArgument(l_49, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_49), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_49)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(k_49, sym_Choices_1))
        {
          l_49 = ATgetArgument(k_49, 0);
          g_49 :
          if(match_cons(l_49, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(l_49, sym_Cons_2))
                {
                  i_49 = ATgetArgument(l_49, 0);
                  j_49 = ATgetArgument(l_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_49), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_49)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(k_49, sym_LChoices_1))
            {
              l_49 = ATgetArgument(k_49, 0);
              h_49 :
              if(match_cons(l_49, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(l_49, sym_Cons_2))
                    {
                      i_49 = ATgetArgument(l_49, 0);
                      j_49 = ATgetArgument(l_49, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_49), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_49)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(k_49, sym_Lets_2))
                {
                  l_49 = ATgetArgument(k_49, 0);
                  m_49 = ATgetArgument(k_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_49), not_null(m_49));
                }
              else
                {
                  if(match_cons(k_49, sym_BA_2))
                    {
                      l_49 = ATgetArgument(k_49, 0);
                      m_49 = ATgetArgument(k_49, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_49)), not_null(l_49));
                    }
                  else
                    {
                      if(match_cons(k_49, sym_MA_2))
                        {
                          l_49 = ATgetArgument(k_49, 0);
                          m_49 = ATgetArgument(k_49, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_49)), not_null(m_49));
                        }
                      else
                        {
                          if(match_cons(k_49, sym_AM_2))
                            {
                              l_49 = ATgetArgument(k_49, 0);
                              m_49 = ATgetArgument(k_49, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_49)));
                            }
                          else
                            {
                              if(match_cons(k_49, sym_BAM_3))
                                {
                                  l_49 = ATgetArgument(k_49, 0);
                                  m_49 = ATgetArgument(k_49, 1);
                                  n_49 = ATgetArgument(k_49, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_49)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_49)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(k_49, sym_InfixApp_3))
                                    {
                                      l_49 = ATgetArgument(k_49, 0);
                                      m_49 = ATgetArgument(k_49, 1);
                                      n_49 = ATgetArgument(k_49, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_49), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm x_50 = NULL,y_50 = NULL;
  x_50 = t;
  v_50 :
  if(match_cons(x_50, sym_Where_1))
    {
      y_50 = ATgetArgument(x_50, 0);
      w_50 :
      if(match_cons(y_50, sym_Fail_0))
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
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  b_51 :
  if(match_cons(d_51, sym_LChoice_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      c_51 :
      if(match_cons(f_51, sym_Fail_0))
        t = not_null(e_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  l_51 = t;
  j_51 :
  if(match_cons(l_51, sym_LChoice_2))
    {
      m_51 = ATgetArgument(l_51, 0);
      n_51 = ATgetArgument(l_51, 1);
      k_51 :
      if(match_cons(m_51, sym_Fail_0))
        t = not_null(n_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  r_51 :
  if(match_cons(t_51, sym_Choice_2))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      s_51 :
      if(match_cons(v_51, sym_Fail_0))
        t = not_null(u_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  z_51 :
  if(match_cons(b_52, sym_Choice_2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      a_52 :
      if(match_cons(c_52, sym_Fail_0))
        t = not_null(d_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  i_52 :
  if(match_cons(j_52, sym_Cong_2))
    {
      k_52 = ATgetArgument(j_52, 0);
      l_52 = ATgetArgument(j_52, 1);
      t = not_null(l_52);
      {
        ATerm p_1 (ATerm t)
        {
          ATerm o_52 = NULL;
          o_52 = t;
          h_52 :
          if(!(match_cons(o_52, sym_Fail_0)))
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
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t_52 = t;
  r_52 :
  if(match_cons(t_52, sym_Path_2))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      s_52 :
      if(match_cons(v_52, sym_Fail_0))
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
  ATerm b_53 = NULL,c_53 = NULL;
  b_53 = t;
  z_52 :
  if(match_cons(b_53, sym_One_1))
    {
      c_53 = ATgetArgument(b_53, 0);
      a_53 :
      if(match_cons(c_53, sym_Fail_0))
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
  ATerm h_53 = NULL,i_53 = NULL;
  h_53 = t;
  f_53 :
  if(match_cons(h_53, sym_Some_1))
    {
      i_53 = ATgetArgument(h_53, 0);
      g_53 :
      if(match_cons(i_53, sym_Fail_0))
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
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  l_53 :
  if(match_cons(n_53, sym_Rec_2))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      m_53 :
      if(match_cons(p_53, sym_Fail_0))
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
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  t_53 :
  if(match_cons(v_53, sym_Scope_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      u_53 :
      if(match_cons(x_53, sym_Fail_0))
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
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  b_54 :
  if(match_cons(d_54, sym_Seq_2))
    {
      e_54 = ATgetArgument(d_54, 0);
      f_54 = ATgetArgument(d_54, 1);
      c_54 :
      if(match_cons(e_54, sym_Fail_0))
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
  ATerm l_54 = NULL,m_54 = NULL;
  l_54 = t;
  j_54 :
  if(match_cons(l_54, sym_Not_1))
    {
      m_54 = ATgetArgument(l_54, 0);
      k_54 :
      if(match_cons(m_54, sym_Fail_0))
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
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  p_54 :
  if(match_cons(r_54, sym_Test_1))
    {
      s_54 = ATgetArgument(r_54, 0);
      q_54 :
      if(match_cons(s_54, sym_Fail_0))
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
  ATerm b_11 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = b_11;
      {
        ATerm c_11 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = c_11;
            {
              ATerm d_11 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = d_11;
                  {
                    ATerm e_11 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm f_11 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = f_11;
                              {
                                ATerm g_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_11;
                                    {
                                      ATerm h_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_11;
                                          {
                                            ATerm x_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_11;
                                                {
                                                  ATerm y_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_11;
                                                      {
                                                        ATerm z_11 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_11;
                                                            {
                                                              ATerm a_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_12;
                                                                  {
                                                                    ATerm b_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_12;
                                                                        {
                                                                          ATerm c_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_12;
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
  ATerm x_54 = NULL,y_54 = NULL;
  x_54 = t;
  v_54 :
  if(match_cons(x_54, sym_Match_1))
    {
      y_54 = ATgetArgument(x_54, 0);
      w_54 :
      if(match_cons(y_54, sym_Wld_0))
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
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  b_55 :
  if(match_cons(d_55, sym_Where_1))
    {
      e_55 = ATgetArgument(d_55, 0);
      c_55 :
      if(match_cons(e_55, sym_Id_0))
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
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  h_55 :
  if(match_cons(j_55, sym_All_1))
    {
      k_55 = ATgetArgument(j_55, 0);
      i_55 :
      if(match_cons(k_55, sym_Id_0))
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
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  n_55 :
  if(match_cons(p_55, sym_Rec_2))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      o_55 :
      if(match_cons(r_55, sym_Id_0))
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  v_55 :
  if(match_cons(x_55, sym_Scope_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      w_55 :
      if(match_cons(z_55, sym_Id_0))
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
  ATerm f_56 = NULL,h_56 = NULL,i_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_LChoice_2))
    {
      h_56 = ATgetArgument(f_56, 0);
      i_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(match_cons(h_56, sym_Id_0))
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
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  m_56 :
  if(match_cons(o_56, sym_Seq_2))
    {
      p_56 = ATgetArgument(o_56, 0);
      q_56 = ATgetArgument(o_56, 1);
      n_56 :
      if(match_cons(q_56, sym_Id_0))
        t = not_null(p_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  u_56 :
  if(match_cons(w_56, sym_Seq_2))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      v_56 :
      if(match_cons(x_56, sym_Id_0))
        t = not_null(y_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  e_57 = t;
  c_57 :
  if(match_cons(e_57, sym_Not_1))
    {
      f_57 = ATgetArgument(e_57, 0);
      d_57 :
      if(match_cons(f_57, sym_Id_0))
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
  ATerm k_57 = NULL,l_57 = NULL;
  k_57 = t;
  i_57 :
  if(match_cons(k_57, sym_Test_1))
    {
      l_57 = ATgetArgument(k_57, 0);
      j_57 :
      if(match_cons(l_57, sym_Id_0))
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
  ATerm d_12 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = d_12;
      {
        ATerm e_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = e_12;
            {
              ATerm i_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = i_12;
                  {
                    ATerm a_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = a_13;
                        {
                          ATerm b_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm c_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_13;
                                    {
                                      ATerm d_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_13;
                                          {
                                            ATerm e_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_13;
                                                {
                                                  ATerm f_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = f_13;
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
  ATerm g_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = g_13;
      {
        ATerm h_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = h_13;
            {
              ATerm i_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = i_13;
                  {
                    ATerm j_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm k_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = k_13;
                              {
                                ATerm l_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_13;
                                    {
                                      ATerm m_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_13;
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
  ATerm n_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = n_13;
      {
        ATerm o_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = o_13;
            {
              ATerm p_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_13;
                  {
                    ATerm q_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm r_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_13;
                              {
                                ATerm s_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_13;
                                    {
                                      ATerm t_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_13;
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
  ATerm n_57 (ATerm t)
  {
    ATerm u_13 = t;
    if(PushChoice()==0)
      {
        t = x_66(t);
        t = n_57(t);
        PopChoice();
      }
    else
      {
        t = u_13;
        t = y_66(t);
      }
    return(t);
  }
  t = n_57(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_67 (ATerm))
{
  t = repeat_2(t, a_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm o_57 (ATerm t)
  {
    t = j_79(t);
    t = _all(t, o_57);
    t = j_79(t);
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      ATerm v_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = v_13;
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
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym_SDef_3))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      x_57 = ATgetArgument(u_57, 2);
      {
        ATerm b_58 = NULL;
        t = not_null(v_57);
        {
          ATerm d_58 = NULL;
          t = v_60(t);
          b_58 = t;
          t = not_null(w_57);
          {
            ATerm f_58 = NULL;
            t = w_60(t);
            d_58 = t;
            t = not_null(x_57);
            t = x_60(t);
            f_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_58), not_null(d_58), not_null(f_58));
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
  ATerm n_58 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        ATerm m_58 = NULL;
        m_58 = t;
        l_58 :
        if(!(match_cons(m_58, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = Cons_2(t, n_76, n_58);
      }
    return(t);
  }
  t = n_58(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_59 (ATerm))
{
  ATerm r_58 = NULL,s_58 = NULL;
  r_58 = t;
  q_58 :
  if(match_cons(r_58, sym_Strategies_1))
    {
      s_58 = ATgetArgument(r_58, 0);
      {
        ATerm u_58 = NULL;
        t = not_null(s_58);
        t = q_59(t);
        u_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(u_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm b_59 = NULL,c_59 = NULL;
  b_59 = t;
  a_59 :
  if(match_cons(b_59, sym_Specification_1))
    {
      c_59 = ATgetArgument(b_59, 0);
      {
        ATerm e_59 = NULL;
        t = not_null(c_59);
        t = s_59(t);
        e_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(e_59));
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
        ATerm k_59 = NULL;
        k_59 = t;
        j_59 :
        if(!(match_cons(k_59, sym_Nil_0)))
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
  ATerm m_59 = NULL;
  m_59 = t;
  l_59 :
  if(!(match_cons(m_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t_59 = t;
  r_59 :
  if(match_cons(t_59, sym_TCons_2))
    {
      u_59 = ATgetArgument(t_59, 0);
      v_59 = ATgetArgument(t_59, 1);
      {
        ATerm y_59 = NULL;
        t = not_null(u_59);
        {
          ATerm a_60 = NULL;
          t = a_62(t);
          y_59 = t;
          t = not_null(v_59);
          t = b_62(t);
          a_60 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_59), not_null(a_60));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_60 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm j_60 = NULL,k_60 = NULL;
      j_60 = t;
      h_60 :
      if(match_cons(j_60, sym_Program_1))
        {
          k_60 = ATgetArgument(j_60, 0);
          if(i_60 != NULL && i_60 != k_60)
            _fail(k_60);
          else
            i_60 = k_60;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, c_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = x_13;
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
  ATerm n_60 = NULL;
  n_60 = t;
  t = SSL_exit(not_null(n_60));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  u_60 = t;
  r_60 :
  if(match_cons(u_60, sym_TCons_2))
    {
      y_60 = ATgetArgument(u_60, 0);
      z_60 = ATgetArgument(u_60, 1);
      s_60 :
      if(match_cons(z_60, sym_TCons_2))
        {
          a_61 = ATgetArgument(z_60, 0);
          b_61 = ATgetArgument(z_60, 1);
          t_60 :
          if(match_cons(b_61, sym_TNil_0))
            {
              ATerm y_13;
              y_13 = t;
              t = SSL_printnl(not_null(y_60), not_null(a_61));
              t = y_13;
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
  ATerm z_13 = t;
  if(PushChoice()==0)
    {
      t = u_78(t);
      PopChoice();
    }
  else
    t = z_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  ATerm a_14 = t;
  if(PushChoice()==0)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm b_14 = t;
        if(PushChoice()==0)
          {
            ATerm j_2 (ATerm t)
            {
              ATerm p_61 = NULL;
              p_61 = t;
              f_61 :
              if(!(match_cons(p_61, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_2);
            PopChoice();
            _fail(t);
          }
        else
          t = b_14;
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          ATerm q_61 = NULL;
          q_61 = t;
          g_61 :
          if(!(match_cons(q_61, sym_TNil_0)))
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
            ATerm r_61 = NULL,s_61 = NULL;
            r_61 = t;
            i_61 :
            if(match_cons(r_61, sym_Runtime_1))
              {
                s_61 = ATgetArgument(r_61, 0);
                if(o_61 != NULL && o_61 != s_61)
                  _fail(s_61);
                else
                  o_61 = s_61;
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
            ATerm t_61 = NULL;
            t_61 = t;
            j_61 :
            if(!(match_cons(t_61, sym_TNil_0)))
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
              ATerm u_61 = NULL,x_61 = NULL;
              u_61 = t;
              l_61 :
              if(match_cons(u_61, sym_Program_1))
                {
                  x_61 = ATgetArgument(u_61, 0);
                  if(n_61 != NULL && n_61 != x_61)
                    _fail(x_61);
                  else
                    n_61 = x_61;
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
              ATerm y_61 = NULL;
              y_61 = t;
              m_61 :
              if(!(match_cons(y_61, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, x_2);
            return(t);
          }
          t = TCons_2(t, r_2, s_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_61), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = a_14;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
  j_62 = t;
  g_62 :
  if(match_cons(j_62, sym_TCons_2))
    {
      k_62 = ATgetArgument(j_62, 0);
      l_62 = ATgetArgument(j_62, 1);
      h_62 :
      if(match_cons(l_62, sym_TCons_2))
        {
          m_62 = ATgetArgument(l_62, 0);
          n_62 = ATgetArgument(l_62, 1);
          i_62 :
          if(match_cons(n_62, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(k_62), not_null(m_62));
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
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  v_62 = t;
  s_62 :
  if(match_cons(v_62, sym_TCons_2))
    {
      w_62 = ATgetArgument(v_62, 0);
      x_62 = ATgetArgument(v_62, 1);
      t_62 :
      if(match_cons(x_62, sym_TCons_2))
        {
          y_62 = ATgetArgument(x_62, 0);
          z_62 = ATgetArgument(x_62, 1);
          u_62 :
          if(match_cons(z_62, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_62), not_null(y_62));
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
  ATerm l_63 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm d_14 = t;
      if(PushChoice()==0)
        {
          ATerm i_3 (ATerm t)
          {
            ATerm m_63 = NULL,n_63 = NULL;
            m_63 = t;
            e_63 :
            if(match_cons(m_63, sym_Output_1))
              {
                n_63 = ATgetArgument(m_63, 0);
                if(l_63 != NULL && l_63 != n_63)
                  _fail(n_63);
                else
                  l_63 = n_63;
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
          t = d_14;
          {
            ATerm o_63 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            o_63 = t;
            if(l_63 != NULL && l_63 != o_63)
              _fail(o_63);
            else
              l_63 = o_63;
          }
        }
      return(t);
    }
    ATerm z_2 (ATerm t)
    {
      ATerm j_3 (ATerm t)
      {
        ATerm p_63 = NULL;
        p_63 = t;
        g_63 :
        if(!(match_cons(p_63, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, j_3);
      return(t);
    }
    t = TCons_2(t, y_2, z_2);
  }
  t = c_14;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        ATerm n_3 (ATerm t)
        {
          t = not_null(l_63);
          return(t);
        }
        t = split_2(t, n_3, _id);
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        ATerm q_63 = NULL;
        q_63 = t;
        h_63 :
        if(!(match_cons(q_63, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, l_3, m_3);
      return(t);
    }
    t = TCons_2(t, _id, k_3);
    {
      ATerm e_14 = t;
      if(PushChoice()==0)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm r_63 = NULL;
              r_63 = t;
              i_63 :
              if(!(match_cons(r_63, sym_Binary_0)))
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
              ATerm s_63 = NULL;
              s_63 = t;
              j_63 :
              if(!(match_cons(s_63, sym_TNil_0)))
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
          t = e_14;
          {
            ATerm v_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                ATerm t_63 = NULL;
                t_63 = t;
                k_63 :
                if(!(match_cons(t_63, sym_TNil_0)))
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
  ATerm i_64 = NULL,l_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,u_64 = NULL;
  ATerm f_14;
  f_14 = t;
  t = dtime_0(t);
  t = f_14;
  t = d_65(t);
  {
    ATerm g_14;
    g_14 = t;
    {
      ATerm k_64 = NULL;
      t = dtime_0(t);
      k_64 = t;
      if(i_64 != NULL && i_64 != k_64)
        _fail(k_64);
      else
        i_64 = k_64;
    }
    t = g_14;
    l_64 = t;
    e_64 :
    if(match_cons(l_64, sym_TCons_2))
      {
        o_64 = ATgetArgument(l_64, 0);
        p_64 = ATgetArgument(l_64, 1);
        f_64 :
        if(match_cons(p_64, sym_TCons_2))
          {
            q_64 = ATgetArgument(p_64, 0);
            u_64 = ATgetArgument(p_64, 1);
            g_64 :
            if(match_cons(u_64, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(i_64)), not_null(o_64)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_64), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_65 = NULL;
  a_65 = t;
  t = SSL_ReadFromFile(not_null(a_65));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm i_65 = NULL;
  ATerm k_65 = NULL;
  i_65 = t;
  {
    ATerm m_65 = NULL;
    t = c_78(t);
    k_65 = t;
    t = not_null(i_65);
    t = d_78(t);
    m_65 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_65), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_65), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_65 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm i_14 = t;
    if(PushChoice()==0)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm v_65 = NULL,w_65 = NULL;
          v_65 = t;
          s_65 :
          if(match_cons(v_65, sym_Input_1))
            {
              w_65 = ATgetArgument(v_65, 0);
              if(u_65 != NULL && u_65 != w_65)
                _fail(w_65);
              else
                u_65 = w_65;
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
        t = i_14;
        {
          ATerm x_65 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          x_65 = t;
          if(u_65 != NULL && u_65 != x_65)
            _fail(x_65);
          else
            u_65 = x_65;
        }
      }
  }
  t = h_14;
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(u_65);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_66 = NULL;
  b_66 = t;
  a_66 :
  if(!(match_cons(b_66, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm f_66 = NULL,g_66 = NULL;
  f_66 = t;
  e_66 :
  if(match_cons(f_66, sym_Undefined_1))
    {
      g_66 = ATgetArgument(f_66, 0);
      {
        ATerm i_66 = NULL;
        t = not_null(g_66);
        t = g_56(t);
        i_66 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_66));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_66 = NULL;
  n_66 = t;
  m_66 :
  if(!(match_cons(n_66, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm o_66 (ATerm t)
  {
    ATerm j_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, w_76, _id);
        PopChoice();
      }
    else
      {
        t = j_14;
        t = Cons_2(t, _id, o_66);
      }
    return(t);
  }
  t = o_66(t);
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
    ATerm k_14 = t;
    if(PushChoice()==0)
      {
        ATerm r_66 = NULL;
        r_66 = t;
        p_66 :
        if(!(match_cons(r_66, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = k_14;
        {
          ATerm l_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = l_14;
              {
                ATerm s_66 = NULL;
                s_66 = t;
                q_66 :
                if(!(match_cons(s_66, sym_Version_0)))
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
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
    f_67 = t;
    u_66 :
    if(match_cons(f_67, sym_TCons_2))
      {
        g_67 = ATgetArgument(f_67, 0);
        h_67 = ATgetArgument(f_67, 1);
        v_66 :
        if(match_cons(h_67, sym_TCons_2))
          {
            i_67 = ATgetArgument(h_67, 0);
            j_67 = ATgetArgument(h_67, 1);
            w_66 :
            if(match_cons(j_67, sym_TCons_2))
              {
                k_67 = ATgetArgument(j_67, 0);
                l_67 = ATgetArgument(j_67, 1);
                b_67 :
                if(match_cons(l_67, sym_TNil_0))
                  {
                    if(c_67 != NULL && c_67 != g_67)
                      _fail(g_67);
                    else
                      c_67 = g_67;
                    if(d_67 != NULL && d_67 != i_67)
                      _fail(i_67);
                    else
                      d_67 = i_67;
                    if(e_67 != NULL && e_67 != k_67)
                      _fail(k_67);
                    else
                      e_67 = k_67;
                    t = SSL_table_put(not_null(c_67), not_null(d_67), not_null(e_67));
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
  t = m_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_67 = NULL;
  u_67 = t;
  t = SSL_table_create(not_null(u_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_67 = NULL;
  y_67 = t;
  {
    ATerm n_14;
    n_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_67), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = n_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  e_68 = t;
  d_68 :
  if(match_cons(e_68, sym_Cons_2))
    {
      f_68 = ATgetArgument(e_68, 0);
      g_68 = ATgetArgument(e_68, 1);
      {
        ATerm j_68 = NULL;
        t = not_null(f_68);
        t = a_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = b_64(t);
        j_68 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_68), not_null(g_68));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  r_68 = t;
  p_68 :
  if(match_cons(r_68, sym_Cons_2))
    {
      s_68 = ATgetArgument(r_68, 0);
      t_68 = ATgetArgument(r_68, 1);
      q_68 :
      if(match_cons(t_68, sym_Cons_2))
        {
          u_68 = ATgetArgument(t_68, 0);
          v_68 = ATgetArgument(t_68, 1);
          {
            ATerm d_69 = NULL;
            t = not_null(s_68);
            t = c_64(t);
            t = not_null(u_68);
            t = d_64(t);
            d_69 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_69), not_null(v_68));
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
  ATerm o_14 = t;
  if(PushChoice()==0)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm b_70 = NULL;
        b_70 = t;
        h_69 :
        if(!(match_string(b_70, "-S")))
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
      t = o_14;
      {
        ATerm p_14 = t;
        if(PushChoice()==0)
          {
            ATerm n_4 (ATerm t)
            {
              ATerm c_70 = NULL;
              c_70 = t;
              i_69 :
              if(!(match_string(c_70, "--silent")))
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
            t = p_14;
            {
              ATerm q_14 = t;
              if(PushChoice()==0)
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm d_70 = NULL;
                    d_70 = t;
                    j_69 :
                    if(!(match_string(d_70, "--verbose")))
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
                  t = q_14;
                  {
                    ATerm r_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_4 (ATerm t)
                        {
                          ATerm e_70 = NULL;
                          e_70 = t;
                          k_69 :
                          if(!(match_string(e_70, "-v")))
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
                        t = r_14;
                        {
                          ATerm s_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_4 (ATerm t)
                              {
                                ATerm f_70 = NULL;
                                f_70 = t;
                                l_69 :
                                if(!(match_string(f_70, "--version")))
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
                              t = s_14;
                              {
                                ATerm t_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm c_5 (ATerm t)
                                    {
                                      ATerm g_70 = NULL;
                                      g_70 = t;
                                      m_69 :
                                      if(!(match_string(g_70, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm d_5 (ATerm t)
                                    {
                                      ATerm h_70 = NULL;
                                      h_70 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(h_70));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, c_5, d_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_14;
                                    {
                                      ATerm u_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm e_5 (ATerm t)
                                          {
                                            ATerm j_70 = NULL;
                                            j_70 = t;
                                            o_69 :
                                            if(!(match_string(j_70, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm f_5 (ATerm t)
                                          {
                                            ATerm k_70 = NULL;
                                            k_70 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_70));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, e_5, f_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_14;
                                          {
                                            ATerm w_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm g_5 (ATerm t)
                                                {
                                                  ATerm m_70 = NULL;
                                                  m_70 = t;
                                                  q_69 :
                                                  if(!(match_string(m_70, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm h_5 (ATerm t)
                                                {
                                                  ATerm n_70 = NULL;
                                                  n_70 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_70));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, g_5, h_5);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_14;
                                                {
                                                  ATerm x_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm m_5 (ATerm t)
                                                      {
                                                        ATerm p_70 = NULL;
                                                        p_70 = t;
                                                        s_69 :
                                                        if(!(match_string(p_70, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm p_5 (ATerm t)
                                                      {
                                                        ATerm q_70 = NULL;
                                                        q_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_70));
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
                                                              ATerm s_70 = NULL;
                                                              s_70 = t;
                                                              u_69 :
                                                              if(!(match_string(s_70, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm w_5 (ATerm t)
                                                            {
                                                              ATerm t_70 = NULL;
                                                              t_70 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_70));
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
                                                                    ATerm v_70 = NULL;
                                                                    v_70 = t;
                                                                    w_69 :
                                                                    if(!(match_string(v_70, "-b")))
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
                                                                          ATerm w_70 = NULL;
                                                                          w_70 = t;
                                                                          x_69 :
                                                                          if(!(match_string(w_70, "-s")))
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
                                                                                ATerm x_70 = NULL;
                                                                                x_70 = t;
                                                                                y_69 :
                                                                                if(!(match_string(x_70, "--help")))
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
                                                                                      ATerm y_70 = NULL;
                                                                                      y_70 = t;
                                                                                      z_69 :
                                                                                      if(!(match_string(y_70, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm p_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, g_6, p_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_15;
                                                                                    {
                                                                                      ATerm q_6 (ATerm t)
                                                                                      {
                                                                                        ATerm z_70 = NULL;
                                                                                        z_70 = t;
                                                                                        a_70 :
                                                                                        if(!(match_string(z_70, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm r_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, q_6, r_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_cons(h_71, sym_Cons_2))
    {
      i_71 = ATgetArgument(h_71, 0);
      j_71 = ATgetArgument(h_71, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_71)), not_null(j_71));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  q_71 :
  if(match_cons(r_71, sym_Cons_2))
    {
      s_71 = ATgetArgument(r_71, 0);
      t_71 = ATgetArgument(r_71, 1);
      {
        ATerm w_71 = NULL;
        t = not_null(s_71);
        {
          ATerm y_71 = NULL;
          t = e_62(t);
          w_71 = t;
          t = not_null(t_71);
          t = f_62(t);
          y_71 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_71), not_null(y_71));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_72 = NULL;
  i_72 = t;
  h_72 :
  if(!(match_cons(i_72, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm l_72 = NULL;
    l_72 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_72));
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm d_15 = t;
    if(PushChoice()==0)
      {
        ATerm e_15 = t;
        if(PushChoice()==0)
          {
            ATerm n_72 = NULL;
            n_72 = t;
            k_72 :
            if(!(match_cons(n_72, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = e_15;
            t = y_63(t);
            t = Cons_2(t, _id, z_6);
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
  t = Cons_2(t, v_6, z_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm a_7 (ATerm t)
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
  t = parse_options_1(t, a_7);
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
  ATerm b_7 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      ATerm e_7 (ATerm t)
      {
        ATerm r_72 = NULL;
        r_72 = t;
        q_72 :
        if(!(match_cons(r_72, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, j_64, e_7);
      return(t);
    }
    t = TCons_2(t, _id, c_7);
    return(t);
  }
  t = iowrap_2(t, b_7, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      t = simplify_0(t);
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_narrow_0(t);
      t = simplify_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, r_7);
    return(t);
  }
  t = iowrap_1(t, f_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
