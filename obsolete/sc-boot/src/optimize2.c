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
ATerm DynamicRules_1 (ATerm, ATerm x_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm crush_3 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm w_74 (ATerm));
ATerm free_vars_3 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_80 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm f_78 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm f_82 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_83 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm e_74 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_68 (ATerm), ATerm m_68 (ATerm));
ATerm for_3 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_81 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm t_60 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_78 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm zip_1 (ATerm, ATerm b_76 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_67 (ATerm));
ATerm downup_1 (ATerm, ATerm i_80 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm map_1 (ATerm, ATerm m_77 (ATerm));
ATerm Strategies_1 (ATerm, ATerm h_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm z_84 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_65 (ATerm));
ATerm need_help_1 (ATerm, ATerm w_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_65 (ATerm));
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
ATerm DynamicRules_1 (ATerm t, ATerm x_59 (ATerm))
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
        t = x_59(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(y_1));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm m_62 (ATerm), ATerm n_62 (ATerm))
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
          t = m_62(t);
          l_2 = t;
          t = not_null(i_2);
          t = n_62(t);
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_2), not_null(n_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm n_6 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, a_84, y_83);
      PopChoice();
    }
  else
    {
      t = n_6;
      t = DynamicRules_1(t, y_83);
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
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  z_3 = t;
  w_3 :
  if(match_cons(z_3, sym_TCons_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      x_3 :
      if(match_cons(b_4, sym_TCons_2))
        {
          c_4 = ATgetArgument(b_4, 0);
          d_4 = ATgetArgument(b_4, 1);
          y_3 :
          if(match_cons(d_4, sym_TNil_0))
            {
              t = not_null(a_4);
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm o_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(c_4);
                      PopChoice();
                    }
                  else
                    {
                      t = o_6;
                      {
                        ATerm p_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm a_0 (ATerm t)
                            {
                              t = not_null(c_4);
                              return(t);
                            }
                            t = HdMember_1(t, a_0);
                            t = h_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = p_6;
                            t = Cons_2(t, _id, h_4);
                          }
                      }
                    }
                  return(t);
                }
                t = h_4(t);
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
ATerm foldr_3 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm r_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = x_72(t);
        PopChoice();
      }
    else
      {
        t = r_6;
        {
          ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
          m_4 = t;
          l_4 :
          if(match_cons(m_4, sym_Cons_2))
            {
              n_4 = ATgetArgument(m_4, 0);
              o_4 = ATgetArgument(m_4, 1);
              {
                ATerm r_4 = NULL;
                t = not_null(n_4);
                {
                  ATerm t_4 = NULL;
                  t = z_72(t);
                  r_4 = t;
                  t = not_null(o_4);
                  t = v_4(t);
                  t_4 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_4), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = y_72(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = v_4(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm f_5 = NULL;
  ATerm h_5 = NULL;
  f_5 = t;
  {
    ATerm i_5 = NULL;
    ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
    t = not_null(f_5);
    i_5 = t;
    t = SSL_explode_term(not_null(i_5));
    k_5 = t;
    c_5 :
    if(match_cons(k_5, sym_TCons_2))
      {
        l_5 = ATgetArgument(k_5, 0);
        m_5 = ATgetArgument(k_5, 1);
        d_5 :
        if(match_cons(m_5, sym_TCons_2))
          {
            n_5 = ATgetArgument(m_5, 0);
            o_5 = ATgetArgument(m_5, 1);
            e_5 :
            if(match_cons(o_5, sym_TNil_0))
              {
                if(h_5 != NULL && h_5 != n_5)
                  _fail(n_5);
                else
                  h_5 = n_5;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(h_5);
    t = foldr_3(t, o_74, p_74, q_74);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, b_0, union_0, w_74);
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm v_5 (ATerm t)
  {
    ATerm s_6 = t;
    if(PushChoice()==0)
      {
        t = v_69(t);
        PopChoice();
      }
    else
      {
        t = s_6;
        {
          ATerm e_7 = t;
          if(PushChoice()==0)
            {
              ATerm t_5 = NULL;
              ATerm f_7;
              f_7 = t;
              {
                ATerm u_5 = NULL;
                t = w_69(t);
                u_5 = t;
                if(t_5 != NULL && t_5 != u_5)
                  _fail(u_5);
                else
                  t_5 = u_5;
              }
              t = f_7;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm e_0 (ATerm t)
                  {
                    t = not_null(t_5);
                    return(t);
                  }
                  t = split_2(t, v_5, e_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = x_69(t, c_0, v_5, d_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = e_7;
              t = collect_kids_1(t, v_5);
            }
        }
      }
    return(t);
  }
  t = v_5(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm g_7 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = g_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym_Scope_2))
    {
      d_6 = ATgetArgument(c_6, 0);
      e_6 = ATgetArgument(c_6, 1);
      {
        ATerm h_6 = NULL;
        ATerm i_6 = NULL;
        t = not_null(e_6);
        {
          ATerm k_6 = NULL;
          t = tvars_0(t);
          i_6 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_6), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          k_6 = t;
          if(h_6 != NULL && h_6 != k_6)
            _fail(k_6);
          else
            h_6 = k_6;
          {
            ATerm h_7 = t;
            if(PushChoice()==0)
              {
                ATerm l_6 = NULL;
                l_6 = t;
                if(d_6 != NULL && d_6 != l_6)
                  _fail(l_6);
                else
                  d_6 = l_6;
                PopChoice();
                _fail(t);
              }
            else
              t = h_7;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_6), not_null(e_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    t = e_80(t);
    t = _all(t, q_6);
    return(t);
  }
  t = q_6(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, h_0);
    return(t);
  }
  t = topdown_1(t, g_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, i_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  ATerm k_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_6), not_null(b_7)));
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_7), not_null(d_7)));
    return(t);
  }
  z_6 = t;
  t_6 :
  if(match_cons(z_6, sym_Seq_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      u_6 :
      if(match_cons(b_7, sym_Scope_2))
        {
          c_7 = ATgetArgument(b_7, 0);
          d_7 = ATgetArgument(b_7, 1);
          v_6 :
          if(match_cons(a_7, sym_Scope_2))
            {
              x_6 = ATgetArgument(a_7, 0);
              y_6 = ATgetArgument(a_7, 1);
              {
                ATerm i_7 = t;
                if(PushChoice()==0)
                  {
                    t = k_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_7;
                    t = l_7(t);
                  }
              }
            }
          else
            t = l_7(t);
        }
      else
        {
          w_6 :
          if(match_cons(a_7, sym_Scope_2))
            {
              x_6 = ATgetArgument(a_7, 0);
              y_6 = ATgetArgument(a_7, 1);
              t = k_7(t);
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
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  s_7 = t;
  n_7 :
  if(match_cons(s_7, sym_Let_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      z_7 = ATgetArgument(s_7, 1);
      o_7 :
      if(match_cons(t_7, sym_Cons_2))
        {
          u_7 = ATgetArgument(t_7, 0);
          y_7 = ATgetArgument(t_7, 1);
          p_7 :
          if(match_cons(u_7, sym_SDef_3))
            {
              v_7 = ATgetArgument(u_7, 0);
              w_7 = ATgetArgument(u_7, 1);
              x_7 = ATgetArgument(u_7, 2);
              q_7 :
              if(match_cons(w_7, sym_Nil_0))
                {
                  r_7 :
                  if(match_cons(y_7, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(v_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(x_7)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(z_7));
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
ATerm at_suffix_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm j_7 = t;
    if(PushChoice()==0)
      {
        t = f_78(t);
        PopChoice();
      }
    else
      {
        t = j_7;
        t = Cons_2(t, _id, e_8);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Let_2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        ATerm w_8 = NULL,x_8 = NULL;
        ATerm m_9 = NULL;
        t = not_null(s_8);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
            y_8 = t;
            m_8 :
            if(match_cons(y_8, sym_Cons_2))
              {
                z_8 = ATgetArgument(y_8, 0);
                d_9 = ATgetArgument(y_8, 1);
                n_8 :
                if(match_cons(z_8, sym_SDef_3))
                  {
                    a_9 = ATgetArgument(z_8, 0);
                    b_9 = ATgetArgument(z_8, 1);
                    c_9 = ATgetArgument(z_8, 2);
                    o_8 :
                    if(match_cons(b_9, sym_Nil_0))
                      {
                        ATerm l_9 = NULL;
                        t = not_null(t_8);
                        {
                          ATerm k_0 (ATerm t)
                          {
                            ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
                            h_9 = t;
                            i_8 :
                            if(match_cons(h_9, sym_Call_2))
                              {
                                i_9 = ATgetArgument(h_9, 0);
                                k_9 = ATgetArgument(h_9, 1);
                                j_8 :
                                if(match_cons(i_9, sym_SVar_1))
                                  {
                                    j_9 = ATgetArgument(i_9, 0);
                                    k_8 :
                                    if(match_cons(k_9, sym_Nil_0))
                                      {
                                        if(a_9 != NULL && a_9 != j_9)
                                          _fail(j_9);
                                        else
                                          a_9 = j_9;
                                        t = not_null(c_9);
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
                          t = oncetd_1(t, k_0);
                          l_9 = t;
                          if(w_8 != NULL && w_8 != l_9)
                            _fail(l_9);
                          else
                            w_8 = l_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_8), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm m_7 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = m_7;
                          }
                        }
                        t = not_null(d_9);
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
          t = at_suffix_1(t, j_0);
          m_9 = t;
          if(x_8 != NULL && x_8 != m_9)
            _fail(m_9);
          else
            x_8 = m_9;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_8), not_null(w_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  c_10 = t;
  u_9 :
  if(match_cons(c_10, sym_TCons_2))
    {
      d_10 = ATgetArgument(c_10, 0);
      f_10 = ATgetArgument(c_10, 1);
      v_9 :
      if(match_cons(d_10, sym_Build_1))
        {
          e_10 = ATgetArgument(d_10, 0);
          w_9 :
          if(match_cons(f_10, sym_TCons_2))
            {
              g_10 = ATgetArgument(f_10, 0);
              k_10 = ATgetArgument(f_10, 1);
              x_9 :
              if(match_cons(g_10, sym_Prim_2))
                {
                  h_10 = ATgetArgument(g_10, 0);
                  b_10 = ATgetArgument(g_10, 1);
                  y_9 :
                  if(match_cons(k_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_10), not_null(b_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(g_10, sym_Where_1))
                    {
                      h_10 = ATgetArgument(g_10, 0);
                      z_9 :
                      if(match_cons(h_10, sym_Prim_2))
                        {
                          i_10 = ATgetArgument(h_10, 0);
                          j_10 = ATgetArgument(h_10, 1);
                          a_10 :
                          if(match_cons(k_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_10), not_null(j_10));
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
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  c_11 = t;
  v_10 :
  if(match_cons(c_11, sym_TCons_2))
    {
      d_11 = ATgetArgument(c_11, 0);
      f_11 = ATgetArgument(c_11, 1);
      w_10 :
      if(match_cons(d_11, sym_Build_1))
        {
          e_11 = ATgetArgument(d_11, 0);
          x_10 :
          if(match_cons(f_11, sym_TCons_2))
            {
              g_11 = ATgetArgument(f_11, 0);
              j_11 = ATgetArgument(f_11, 1);
              y_10 :
              if(match_cons(g_11, sym_Build_1))
                {
                  h_11 = ATgetArgument(g_11, 0);
                  z_10 :
                  if(match_cons(j_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(g_11, sym_Where_1))
                    {
                      h_11 = ATgetArgument(g_11, 0);
                      a_11 :
                      if(match_cons(h_11, sym_Build_1))
                        {
                          i_11 = ATgetArgument(h_11, 0);
                          b_11 :
                          if(match_cons(j_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_11));
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
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  d_12 = t;
  w_11 :
  if(match_cons(d_12, sym_TCons_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      i_12 = ATgetArgument(d_12, 1);
      x_11 :
      if(match_cons(e_12, sym_Build_1))
        {
          f_12 = ATgetArgument(e_12, 0);
          y_11 :
          if(match_cons(f_12, sym_Op_2))
            {
              g_12 = ATgetArgument(f_12, 0);
              h_12 = ATgetArgument(f_12, 1);
              z_11 :
              if(match_cons(i_12, sym_TCons_2))
                {
                  j_12 = ATgetArgument(i_12, 0);
                  n_12 = ATgetArgument(i_12, 1);
                  a_12 :
                  if(match_cons(j_12, sym_Match_1))
                    {
                      k_12 = ATgetArgument(j_12, 0);
                      b_12 :
                      if(match_cons(k_12, sym_Op_2))
                        {
                          l_12 = ATgetArgument(k_12, 0);
                          m_12 = ATgetArgument(k_12, 1);
                          c_12 :
                          if(match_cons(n_12, sym_TNil_0))
                            {
                              ATerm q_12 = NULL,y_12 = NULL;
                              if(g_12 != NULL && g_12 != l_12)
                                _fail(l_12);
                              else
                                g_12 = l_12;
                              if(q_12 != NULL && q_12 != m_12)
                                _fail(m_12);
                              else
                                q_12 = m_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm l_0 (ATerm t)
                                {
                                  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
                                  r_12 = t;
                                  s_11 :
                                  if(match_cons(r_12, sym_TCons_2))
                                    {
                                      s_12 = ATgetArgument(r_12, 0);
                                      t_12 = ATgetArgument(r_12, 1);
                                      t_11 :
                                      if(match_cons(t_12, sym_TCons_2))
                                        {
                                          u_12 = ATgetArgument(t_12, 0);
                                          v_12 = ATgetArgument(t_12, 1);
                                          u_11 :
                                          if(match_cons(v_12, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_12)));
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
                                t = zip_1(t, l_0);
                                y_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_12)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(g_12), not_null(h_12))));
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
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  p_15 = t;
  m_15 :
  if(match_cons(p_15, sym_TCons_2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      n_15 :
      if(match_cons(r_15, sym_TCons_2))
        {
          s_15 = ATgetArgument(r_15, 0);
          t_15 = ATgetArgument(r_15, 1);
          o_15 :
          if(match_cons(t_15, sym_TNil_0))
            {
              if(q_15 != NULL && q_15 != s_15)
                _fail(s_15);
              else
                q_15 = s_15;
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,a_17 = NULL,b_17 = NULL;
  e_16 = t;
  x_15 :
  if(match_cons(e_16, sym_TCons_2))
    {
      f_16 = ATgetArgument(e_16, 0);
      t_16 = ATgetArgument(e_16, 1);
      y_15 :
      if(match_cons(f_16, sym_Build_1))
        {
          g_16 = ATgetArgument(f_16, 0);
          z_15 :
          if(match_cons(g_16, sym_Op_2))
            {
              h_16 = ATgetArgument(g_16, 0);
              i_16 = ATgetArgument(g_16, 1);
              a_16 :
              if(match_cons(t_16, sym_TCons_2))
                {
                  u_16 = ATgetArgument(t_16, 0);
                  b_17 = ATgetArgument(t_16, 1);
                  b_16 :
                  if(match_cons(u_16, sym_Match_1))
                    {
                      v_16 = ATgetArgument(u_16, 0);
                      c_16 :
                      if(match_cons(v_16, sym_Op_2))
                        {
                          w_16 = ATgetArgument(v_16, 0);
                          a_17 = ATgetArgument(v_16, 1);
                          d_16 :
                          if(match_cons(b_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm a_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = a_8;
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
  ATerm b_8 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = b_8;
      {
        ATerm c_8 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = c_8;
            {
              ATerm d_8 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = d_8;
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
  ATerm n_17 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,f_19 = NULL;
  ATerm q_20 (ATerm t)
  {
    ATerm i_19 = NULL;
    ATerm j_19 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    j_19 = t;
    if(i_19 != NULL && i_19 != j_19)
      _fail(j_19);
    else
      i_19 = j_19;
    t = not_null(i_19);
    return(t);
  }
  ATerm r_20 (ATerm t)
  {
    ATerm w_19 = NULL;
    ATerm x_19 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    x_19 = t;
    if(w_19 != NULL && w_19 != x_19)
      _fail(x_19);
    else
      w_19 = x_19;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_19), not_null(f_19));
    return(t);
  }
  n_17 = t;
  l_17 :
  if(match_cons(n_17, sym_Seq_2))
    {
      p_18 = ATgetArgument(n_17, 0);
      q_18 = ATgetArgument(n_17, 1);
      m_17 :
      if(match_cons(q_18, sym_Seq_2))
        {
          r_18 = ATgetArgument(q_18, 0);
          f_19 = ATgetArgument(q_18, 1);
          {
            ATerm f_8 = t;
            if(PushChoice()==0)
              {
                t = q_20(t);
                PopChoice();
              }
            else
              {
                t = f_8;
                t = r_20(t);
              }
          }
        }
      else
        t = q_20(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  z_20 = t;
  v_20 :
  if(match_cons(z_20, sym_Seq_2))
    {
      a_21 = ATgetArgument(z_20, 0);
      c_21 = ATgetArgument(z_20, 1);
      w_20 :
      if(match_cons(a_21, sym_Build_1))
        {
          b_21 = ATgetArgument(a_21, 0);
          x_20 :
          if(match_cons(c_21, sym_Seq_2))
            {
              d_21 = ATgetArgument(c_21, 0);
              f_21 = ATgetArgument(c_21, 1);
              y_20 :
              if(match_cons(d_21, sym_Build_1))
                {
                  e_21 = ATgetArgument(d_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_21)), not_null(f_21));
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
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  u_21 = t;
  s_21 :
  if(match_cons(u_21, sym_Scope_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      t_21 :
      if(match_cons(w_21, sym_Scope_2))
        {
          x_21 = ATgetArgument(w_21, 0);
          y_21 = ATgetArgument(w_21, 1);
          {
            ATerm c_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_21), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            c_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_22), not_null(y_21));
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
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym_Var_1))
    {
      j_22 = ATgetArgument(i_22, 0);
      t = not_null(j_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL;
  r_22 = t;
  n_22 :
  if(match_cons(r_22, sym_TCons_2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      o_22 :
      if(match_cons(t_22, sym_TCons_2))
        {
          u_22 = ATgetArgument(t_22, 0);
          y_22 = ATgetArgument(t_22, 1);
          p_22 :
          if(match_cons(u_22, sym_Cons_2))
            {
              v_22 = ATgetArgument(u_22, 0);
              x_22 = ATgetArgument(u_22, 1);
              q_22 :
              if(match_cons(y_22, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,c_24 = NULL,d_24 = NULL;
  k_23 = t;
  d_23 :
  if(match_cons(k_23, sym_TCons_2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      e_23 :
      if(match_cons(m_23, sym_TCons_2))
        {
          n_23 = ATgetArgument(m_23, 0);
          d_24 = ATgetArgument(m_23, 1);
          f_23 :
          if(match_cons(n_23, sym_Cons_2))
            {
              o_23 = ATgetArgument(n_23, 0);
              c_24 = ATgetArgument(n_23, 1);
              g_23 :
              if(match_cons(o_23, sym_TCons_2))
                {
                  v_23 = ATgetArgument(o_23, 0);
                  w_23 = ATgetArgument(o_23, 1);
                  h_23 :
                  if(match_cons(w_23, sym_TCons_2))
                    {
                      x_23 = ATgetArgument(w_23, 0);
                      y_23 = ATgetArgument(w_23, 1);
                      i_23 :
                      if(match_cons(y_23, sym_TNil_0))
                        {
                          j_23 :
                          if(match_cons(d_24, sym_TNil_0))
                            {
                              ATerm s_24 = NULL;
                              if(l_23 != NULL && l_23 != v_23)
                                _fail(v_23);
                              else
                                l_23 = v_23;
                              if(s_24 != NULL && s_24 != x_23)
                                _fail(x_23);
                              else
                                s_24 = x_23;
                              t = not_null(s_24);
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
  ATerm g_8 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = g_8;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm y_24 = NULL;
  ATerm a_25 = NULL,b_25 = NULL;
  y_24 = t;
  {
    ATerm c_25 = NULL;
    t = not_null(y_24);
    {
      ATerm d_25 = NULL;
      t = f_83(t);
      c_25 = t;
      if(a_25 != NULL && a_25 != c_25)
        _fail(c_25);
      else
        a_25 = c_25;
      t = g_83(t);
      d_25 = t;
      if(b_25 != NULL && b_25 != d_25)
        _fail(d_25);
      else
        b_25 = d_25;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm j_25 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = f_82(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        t = _all(t, j_25);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  w_25 = t;
  s_25 :
  if(match_cons(w_25, sym_TCons_2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      t_25 :
      if(match_cons(y_25, sym_TCons_2))
        {
          z_25 = ATgetArgument(y_25, 0);
          a_26 = ATgetArgument(y_25, 1);
          u_25 :
          if(match_cons(a_26, sym_TNil_0))
            {
              ATerm e_26 = NULL;
              if(e_26 != NULL && e_26 != z_25)
                _fail(z_25);
              else
                e_26 = z_25;
            }
          else
            {
              if(match_cons(a_26, sym_TCons_2))
                {
                  b_26 = ATgetArgument(a_26, 0);
                  c_26 = ATgetArgument(a_26, 1);
                  v_25 :
                  if(match_cons(c_26, sym_TNil_0))
                    {
                      ATerm k_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_25), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      k_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  t = subs_args_0(t);
  t_26 = t;
  q_26 :
  if(match_cons(t_26, sym_TCons_2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      r_26 :
      if(match_cons(v_26, sym_TCons_2))
        {
          w_26 = ATgetArgument(v_26, 0);
          x_26 = ATgetArgument(v_26, 1);
          s_26 :
          if(match_cons(x_26, sym_TNil_0))
            {
              t = not_null(w_26);
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = not_null(u_26);
                    return(t);
                  }
                  t = SubsVar_2(t, h_83, n_0);
                  t = i_83(t);
                  return(t);
                }
                t = alltd_1(t, m_0);
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
ATerm substitute_1 (ATerm t, ATerm j_83 (ATerm))
{
  t = substitute_2(t, j_83, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_Cons_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      t = e_74(t);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm j_27 = NULL;
          j_27 = t;
          if(f_27 != NULL && f_27 != j_27)
            _fail(j_27);
          else
            f_27 = j_27;
          return(t);
        }
        t = fetch_1(t, o_0);
      }
      t = not_null(g_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  r_27 = t;
  n_27 :
  if(match_cons(r_27, sym_TCons_2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      o_27 :
      if(match_cons(t_27, sym_TCons_2))
        {
          u_27 = ATgetArgument(t_27, 0);
          x_27 = ATgetArgument(t_27, 1);
          p_27 :
          if(match_cons(u_27, sym_Cons_2))
            {
              v_27 = ATgetArgument(u_27, 0);
              w_27 = ATgetArgument(u_27, 1);
              q_27 :
              if(match_cons(x_27, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_27), not_null(s_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_27), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  s_28 = t;
  o_28 :
  if(match_cons(s_28, sym_Cons_2))
    {
      t_28 = ATgetArgument(s_28, 0);
      y_28 = ATgetArgument(s_28, 1);
      p_28 :
      if(match_cons(t_28, sym_TCons_2))
        {
          u_28 = ATgetArgument(t_28, 0);
          v_28 = ATgetArgument(t_28, 1);
          q_28 :
          if(match_cons(v_28, sym_TCons_2))
            {
              w_28 = ATgetArgument(v_28, 0);
              x_28 = ATgetArgument(v_28, 1);
              r_28 :
              if(match_cons(x_28, sym_TNil_0))
                {
                  ATerm c_29 = NULL,d_29 = NULL,l_29 = NULL,t_29 = NULL;
                  ATerm l_8;
                  l_8 = t;
                  {
                    ATerm e_29 = NULL;
                    ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
                    t = not_null(w_28);
                    e_29 = t;
                    t = SSL_explode_term(not_null(e_29));
                    g_29 = t;
                    f_28 :
                    if(match_cons(g_29, sym_TCons_2))
                      {
                        h_29 = ATgetArgument(g_29, 0);
                        i_29 = ATgetArgument(g_29, 1);
                        g_28 :
                        if(match_cons(i_29, sym_TCons_2))
                          {
                            j_29 = ATgetArgument(i_29, 0);
                            k_29 = ATgetArgument(i_29, 1);
                            h_28 :
                            if(match_cons(k_29, sym_TNil_0))
                              {
                                if(c_29 != NULL && c_29 != h_29)
                                  _fail(h_29);
                                else
                                  c_29 = h_29;
                                if(d_29 != NULL && d_29 != j_29)
                                  _fail(j_29);
                                else
                                  d_29 = j_29;
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
                  t = l_8;
                  {
                    ATerm m_29 = NULL;
                    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
                    t = not_null(u_28);
                    m_29 = t;
                    t = SSL_explode_term(not_null(m_29));
                    o_29 = t;
                    k_28 :
                    if(match_cons(o_29, sym_TCons_2))
                      {
                        p_29 = ATgetArgument(o_29, 0);
                        q_29 = ATgetArgument(o_29, 1);
                        l_28 :
                        if(match_cons(q_29, sym_TCons_2))
                          {
                            r_29 = ATgetArgument(q_29, 0);
                            s_29 = ATgetArgument(q_29, 1);
                            m_28 :
                            if(match_cons(s_29, sym_TNil_0))
                              {
                                if(c_29 != NULL && c_29 != p_29)
                                  _fail(p_29);
                                else
                                  c_29 = p_29;
                                if(l_29 != NULL && l_29 != r_29)
                                  _fail(r_29);
                                else
                                  l_29 = r_29;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    t_29 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  g_30 = t;
  c_30 :
  if(match_cons(g_30, sym_Cons_2))
    {
      h_30 = ATgetArgument(g_30, 0);
      m_30 = ATgetArgument(g_30, 1);
      d_30 :
      if(match_cons(h_30, sym_TCons_2))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          e_30 :
          if(match_cons(j_30, sym_TCons_2))
            {
              k_30 = ATgetArgument(j_30, 0);
              l_30 = ATgetArgument(j_30, 1);
              f_30 :
              if(match_cons(l_30, sym_TNil_0))
                {
                  ATerm o_30 = NULL;
                  if(i_30 != NULL && i_30 != k_30)
                    _fail(k_30);
                  else
                    i_30 = k_30;
                  if(o_30 != NULL && o_30 != m_30)
                    _fail(m_30);
                  else
                    o_30 = m_30;
                  t = not_null(o_30);
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
ATerm while_not_2 (ATerm t, ATerm l_68 (ATerm), ATerm m_68 (ATerm))
{
  ATerm q_30 (ATerm t)
  {
    ATerm p_8 = t;
    if(PushChoice()==0)
      {
        t = l_68(t);
        PopChoice();
      }
    else
      {
        t = p_8;
        t = m_68(t);
        t = q_30(t);
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  t = o_68(t);
  t = while_not_2(t, p_68, q_68);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm u_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm w_30 = NULL;
        w_30 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_30), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, s_0);
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm v_8 = t;
        if(PushChoice()==0)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                ATerm e_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = e_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, u_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, t_0);
            PopChoice();
          }
        else
          {
            t = v_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_0, q_0, r_0);
      PopChoice();
    }
  else
    {
      t = u_8;
      {
        ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
        y_30 = t;
        t_30 :
        if(match_cons(y_30, sym_TCons_2))
          {
            z_30 = ATgetArgument(y_30, 0);
            a_31 = ATgetArgument(y_30, 1);
            u_30 :
            if(match_cons(a_31, sym_TCons_2))
              {
                b_31 = ATgetArgument(a_31, 0);
                c_31 = ATgetArgument(a_31, 1);
                v_30 :
                if(match_cons(c_31, sym_TNil_0))
                  {
                    t = not_null(z_30);
                    {
                      ATerm h_31 (ATerm t)
                      {
                        ATerm f_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = f_9;
                            {
                              ATerm g_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm v_0 (ATerm t)
                                  {
                                    t = not_null(b_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, v_0);
                                  t = h_31(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = g_9;
                                  t = Cons_2(t, _id, h_31);
                                }
                            }
                          }
                        return(t);
                      }
                      t = h_31(t);
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
ATerm oncetd_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm i_31 (ATerm t)
  {
    ATerm n_9 = t;
    if(PushChoice()==0)
      {
        t = u_81(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        t = _one(t, i_31);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  o_31 = t;
  l_31 :
  if(match_cons(o_31, sym_TCons_2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      m_31 :
      if(match_cons(q_31, sym_TCons_2))
        {
          r_31 = ATgetArgument(q_31, 0);
          s_31 = ATgetArgument(q_31, 1);
          n_31 :
          if(match_cons(s_31, sym_TNil_0))
            {
              t = not_null(r_31);
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm v_31 = NULL;
                  v_31 = t;
                  if(p_31 != NULL && p_31 != v_31)
                    _fail(v_31);
                  else
                    p_31 = v_31;
                  return(t);
                }
                t = oncetd_1(t, w_0);
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
ATerm Var_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm b_32 = NULL,c_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym_Var_1))
    {
      c_32 = ATgetArgument(b_32, 0);
      {
        ATerm e_32 = NULL;
        t = not_null(c_32);
        t = t_60(t);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  a_34 = t;
  y_32 :
  if(match_cons(a_34, sym_Seq_2))
    {
      b_34 = ATgetArgument(a_34, 0);
      e_34 = ATgetArgument(a_34, 1);
      z_32 :
      if(match_cons(b_34, sym_Build_1))
        {
          c_34 = ATgetArgument(b_34, 0);
          a_33 :
          if(match_cons(e_34, sym_Scope_2))
            {
              f_34 = ATgetArgument(e_34, 0);
              i_34 = ATgetArgument(e_34, 1);
              b_33 :
              if(match_cons(i_34, sym_Seq_2))
                {
                  u_33 = ATgetArgument(i_34, 0);
                  z_33 = ATgetArgument(i_34, 1);
                  c_33 :
                  if(match_cons(u_33, sym_Assign_1))
                    {
                      v_33 = ATgetArgument(u_33, 0);
                      d_33 :
                      if(match_cons(v_33, sym_Var_1))
                        {
                          w_33 = ATgetArgument(v_33, 0);
                          {
                            ATerm o_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm n_34 = NULL,p_34 = NULL;
                                ATerm o_34 = NULL;
                                t = not_null(c_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = diff_0(t);
                                o_34 = t;
                                if(n_34 != NULL && n_34 != o_34)
                                  _fail(o_34);
                                else
                                  n_34 = o_34;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                                t = tsubs_0(t);
                                p_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_34), not_null(p_34)));
                                PopChoice();
                              }
                            else
                              {
                                t = o_9;
                                {
                                  ATerm v_34 = NULL,x_34 = NULL;
                                  ATerm w_34 = NULL;
                                  t = not_null(c_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  w_34 = t;
                                  if(v_34 != NULL && v_34 != w_34)
                                    _fail(w_34);
                                  else
                                    v_34 = w_34;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  x_34 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_34), not_null(x_34)));
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
          if(match_cons(b_34, sym_Assign_1))
            {
              c_34 = ATgetArgument(b_34, 0);
              e_33 :
              if(match_cons(c_34, sym_Var_1))
                {
                  d_34 = ATgetArgument(c_34, 0);
                  f_33 :
                  if(match_cons(e_34, sym_Seq_2))
                    {
                      f_34 = ATgetArgument(e_34, 0);
                      i_34 = ATgetArgument(e_34, 1);
                      g_33 :
                      if(match_cons(f_34, sym_Build_1))
                        {
                          g_34 = ATgetArgument(f_34, 0);
                          h_33 :
                          if(match_cons(g_34, sym_Var_1))
                            {
                              h_34 = ATgetArgument(g_34, 0);
                              {
                                ATerm z_35 = NULL;
                                if(d_34 != NULL && d_34 != h_34)
                                  _fail(h_34);
                                else
                                  d_34 = h_34;
                                if(z_35 != NULL && z_35 != i_34)
                                  _fail(i_34);
                                else
                                  z_35 = i_34;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_34))), not_null(z_35));
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
      if(match_cons(a_34, sym_Scope_2))
        {
          b_34 = ATgetArgument(a_34, 0);
          e_34 = ATgetArgument(a_34, 1);
          i_33 :
          if(match_cons(e_34, sym_Seq_2))
            {
              f_34 = ATgetArgument(e_34, 0);
              i_34 = ATgetArgument(e_34, 1);
              j_33 :
              if(match_cons(f_34, sym_Assign_2))
                {
                  g_34 = ATgetArgument(f_34, 0);
                  s_33 = ATgetArgument(f_34, 1);
                  k_33 :
                  if(match_cons(g_34, sym_Var_1))
                    {
                      h_34 = ATgetArgument(g_34, 0);
                      l_33 :
                      if(match_cons(s_33, sym_Var_1))
                        {
                          t_33 = ATgetArgument(s_33, 0);
                          {
                            ATerm d_35 = NULL,g_35 = NULL;
                            ATerm f_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = diff_0(t);
                            f_35 = t;
                            if(d_35 != NULL && d_35 != f_35)
                              _fail(f_35);
                            else
                              d_35 = f_35;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_33)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = tsubs_0(t);
                            g_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_35), not_null(g_35));
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
                  if(match_cons(f_34, sym_Assign_1))
                    {
                      g_34 = ATgetArgument(f_34, 0);
                      m_33 :
                      if(match_cons(g_34, sym_Var_1))
                        {
                          h_34 = ATgetArgument(g_34, 0);
                          n_33 :
                          if(match_cons(i_34, sym_Seq_2))
                            {
                              u_33 = ATgetArgument(i_34, 0);
                              z_33 = ATgetArgument(i_34, 1);
                              o_33 :
                              if(match_cons(u_33, sym_Assign_1))
                                {
                                  v_33 = ATgetArgument(u_33, 0);
                                  p_33 :
                                  if(match_cons(v_33, sym_Var_1))
                                    {
                                      w_33 = ATgetArgument(v_33, 0);
                                      {
                                        ATerm m_35 = NULL,o_35 = NULL;
                                        ATerm n_35 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        n_35 = t;
                                        if(m_35 != NULL && m_35 != n_35)
                                          _fail(n_35);
                                        else
                                          m_35 = n_35;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_33), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = tsubs_0(t);
                                        o_35 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_34))), not_null(o_35)));
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(u_33, sym_Assign_2))
                                    {
                                      v_33 = ATgetArgument(u_33, 0);
                                      x_33 = ATgetArgument(u_33, 1);
                                      q_33 :
                                      if(match_cons(v_33, sym_Var_1))
                                        {
                                          w_33 = ATgetArgument(v_33, 0);
                                          r_33 :
                                          if(match_cons(x_33, sym_Var_1))
                                            {
                                              y_33 = ATgetArgument(x_33, 0);
                                              {
                                                ATerm t_35 = NULL,u_35 = NULL,w_35 = NULL;
                                                if(h_34 != NULL && h_34 != y_33)
                                                  _fail(y_33);
                                                else
                                                  h_34 = y_33;
                                                if(t_35 != NULL && t_35 != z_33)
                                                  _fail(z_33);
                                                else
                                                  t_35 = z_33;
                                                {
                                                  ATerm v_35 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = diff_0(t);
                                                  v_35 = t;
                                                  if(u_35 != NULL && u_35 != v_35)
                                                    _fail(v_35);
                                                  else
                                                    u_35 = v_35;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_33), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = tsubs_0(t);
                                                  w_35 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_34))), not_null(w_35)));
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
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  t_36 = t;
  r_36 :
  if(match_cons(t_36, sym_Seq_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      s_36 :
      if(match_cons(v_36, sym_Let_2))
        {
          w_36 = ATgetArgument(v_36, 0);
          x_36 = ATgetArgument(v_36, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_36), not_null(x_36)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm c_37 (ATerm t)
  {
    ATerm p_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, c_37);
        PopChoice();
      }
    else
      {
        t = p_9;
        t = Nil_0(t);
        t = b_78(t);
      }
    return(t);
  }
  t = c_37(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,n_37 = NULL;
  h_37 = t;
  e_37 :
  if(match_cons(h_37, sym_TCons_2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      f_37 :
      if(match_cons(j_37, sym_TCons_2))
        {
          k_37 = ATgetArgument(j_37, 0);
          n_37 = ATgetArgument(j_37, 1);
          g_37 :
          if(match_cons(n_37, sym_TNil_0))
            {
              t = not_null(i_37);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(k_37);
                  return(t);
                }
                t = at_end_1(t, x_0);
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
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  v_37 = t;
  s_37 :
  if(match_cons(v_37, sym_TCons_2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      t_37 :
      if(match_cons(x_37, sym_TCons_2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          u_37 :
          if(match_cons(z_37, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_37), not_null(y_37));
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
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  n_38 = t;
  e_38 :
  if(match_cons(n_38, sym_TCons_2))
    {
      o_38 = ATgetArgument(n_38, 0);
      r_38 = ATgetArgument(n_38, 1);
      f_38 :
      if(match_cons(o_38, sym_Cons_2))
        {
          p_38 = ATgetArgument(o_38, 0);
          q_38 = ATgetArgument(o_38, 1);
          g_38 :
          if(match_cons(r_38, sym_TCons_2))
            {
              s_38 = ATgetArgument(r_38, 0);
              v_38 = ATgetArgument(r_38, 1);
              h_38 :
              if(match_cons(s_38, sym_Cons_2))
                {
                  t_38 = ATgetArgument(s_38, 0);
                  u_38 = ATgetArgument(s_38, 1);
                  m_38 :
                  if(match_cons(v_38, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_38), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  k_39 :
  if(match_cons(q_39, sym_TCons_2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      m_39 :
      if(match_cons(r_39, sym_Nil_0))
        {
          n_39 :
          if(match_cons(s_39, sym_TCons_2))
            {
              t_39 = ATgetArgument(s_39, 0);
              u_39 = ATgetArgument(s_39, 1);
              o_39 :
              if(match_cons(t_39, sym_Nil_0))
                {
                  p_39 :
                  if(match_cons(u_39, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm w_39 (ATerm t)
  {
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        t = w_75(t);
        PopChoice();
      }
    else
      {
        t = q_9;
        t = x_75(t);
        {
          ATerm y_0 (ATerm t)
          {
            t = TCons_2(t, w_39, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_75, y_0);
          t = y_75(t);
        }
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_Cong_2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      {
        ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,c_42 = NULL;
        ATerm f_41 = NULL;
        t = not_null(x_40);
        {
          ATerm i_41 = NULL;
          t = map_1(t, new_0);
          f_41 = t;
          if(c_41 != NULL && c_41 != f_41)
            _fail(f_41);
          else
            c_41 = f_41;
          t = not_null(c_41);
          {
            ATerm j_41 = NULL;
            ATerm z_0 (ATerm t)
            {
              ATerm g_41 = NULL;
              g_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_41));
              return(t);
            }
            t = map_1(t, z_0);
            i_41 = t;
            if(a_41 != NULL && a_41 != i_41)
              _fail(i_41);
            else
              a_41 = i_41;
            t = not_null(x_40);
            {
              ATerm m_41 = NULL;
              t = map_1(t, new_0);
              j_41 = t;
              if(d_41 != NULL && d_41 != j_41)
                _fail(j_41);
              else
                d_41 = j_41;
              t = not_null(d_41);
              {
                ATerm n_41 = NULL;
                ATerm a_1 (ATerm t)
                {
                  ATerm k_41 = NULL;
                  k_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_41));
                  return(t);
                }
                t = map_1(t, a_1);
                m_41 = t;
                if(b_41 != NULL && b_41 != m_41)
                  _fail(m_41);
                else
                  b_41 = m_41;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm b_42 = NULL;
                  t = zip_1(t, _id);
                  n_41 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
                      p_41 = t;
                      m_40 :
                      if(match_cons(p_41, sym_TCons_2))
                        {
                          q_41 = ATgetArgument(p_41, 0);
                          v_41 = ATgetArgument(p_41, 1);
                          n_40 :
                          if(match_cons(q_41, sym_TCons_2))
                            {
                              r_41 = ATgetArgument(q_41, 0);
                              s_41 = ATgetArgument(q_41, 1);
                              o_40 :
                              if(match_cons(s_41, sym_TCons_2))
                                {
                                  t_41 = ATgetArgument(s_41, 0);
                                  u_41 = ATgetArgument(s_41, 1);
                                  p_40 :
                                  if(match_cons(u_41, sym_TNil_0))
                                    {
                                      q_40 :
                                      if(match_cons(v_41, sym_TCons_2))
                                        {
                                          w_41 = ATgetArgument(v_41, 0);
                                          x_41 = ATgetArgument(v_41, 1);
                                          r_40 :
                                          if(match_cons(x_41, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_41))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_41)))));
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
                    t = zip_1(t, b_1);
                    b_42 = t;
                    if(e_41 != NULL && e_41 != b_42)
                      _fail(b_42);
                    else
                      e_41 = b_42;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_41), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        c_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(w_40), not_null(a_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_41)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(w_40), not_null(b_41))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_Cong_2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        ATerm a_43 = NULL;
        ATerm e_43 = NULL;
        t = not_null(x_42);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm b_43 = NULL,c_43 = NULL;
            c_43 = t;
            s_42 :
            if(match_cons(c_43, sym_Match_1))
              {
                b_43 = ATgetArgument(c_43, 0);
                t = not_null(b_43);
              }
            else
              {
                if(match_cons(c_43, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_1);
          e_43 = t;
          if(a_43 != NULL && a_43 != e_43)
            _fail(e_43);
          else
            a_43 = e_43;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(w_42), not_null(a_43)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,q_43 = NULL;
  m_43 = t;
  k_43 :
  if(match_cons(m_43, sym_Scope_2))
    {
      n_43 = ATgetArgument(m_43, 0);
      q_43 = ATgetArgument(m_43, 1);
      l_43 :
      if(match_cons(n_43, sym_Nil_0))
        t = not_null(q_43);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  h_44 = t;
  z_43 :
  if(match_cons(h_44, sym_Choice_2))
    {
      i_44 = ATgetArgument(h_44, 0);
      g_44 = ATgetArgument(h_44, 1);
      if(i_44 != NULL && i_44 != g_44)
        _fail(g_44);
      else
        i_44 = g_44;
      t = not_null(i_44);
    }
  else
    {
      if(match_cons(h_44, sym_LChoice_2))
        {
          i_44 = ATgetArgument(h_44, 0);
          g_44 = ATgetArgument(h_44, 1);
          if(i_44 != NULL && i_44 != g_44)
            _fail(g_44);
          else
            i_44 = g_44;
          t = not_null(i_44);
        }
      else
        {
          if(match_cons(h_44, sym_Where_1))
            {
              i_44 = ATgetArgument(h_44, 0);
              a_44 :
              if(match_cons(i_44, sym_Where_1))
                {
                  k_44 = ATgetArgument(i_44, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(k_44));
                }
              else
                {
                  if(match_cons(i_44, sym_Seq_2))
                    {
                      k_44 = ATgetArgument(i_44, 0);
                      m_44 = ATgetArgument(i_44, 1);
                      b_44 :
                      if(match_cons(k_44, sym_Where_1))
                        {
                          l_44 = ATgetArgument(k_44, 0);
                          c_44 :
                          if(match_cons(m_44, sym_Seq_2))
                            {
                              n_44 = ATgetArgument(m_44, 0);
                              p_44 = ATgetArgument(m_44, 1);
                              d_44 :
                              if(match_cons(n_44, sym_Build_1))
                                {
                                  o_44 = ATgetArgument(n_44, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_44)), not_null(p_44))));
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
              if(match_cons(h_44, sym_Not_1))
                {
                  i_44 = ATgetArgument(h_44, 0);
                  e_44 :
                  if(match_cons(i_44, sym_Not_1))
                    {
                      k_44 = ATgetArgument(i_44, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(k_44));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(h_44, sym_Test_1))
                    {
                      i_44 = ATgetArgument(h_44, 0);
                      f_44 :
                      if(match_cons(i_44, sym_Test_1))
                        {
                          k_44 = ATgetArgument(i_44, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(k_44));
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
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,i_46 = NULL;
  d_46 = t;
  z_45 :
  if(match_cons(d_46, sym_Choice_2))
    {
      e_46 = ATgetArgument(d_46, 0);
      i_46 = ATgetArgument(d_46, 1);
      a_46 :
      if(match_cons(e_46, sym_Choice_2))
        {
          f_46 = ATgetArgument(e_46, 0);
          g_46 = ATgetArgument(e_46, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_46), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_46), not_null(i_46)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_46, sym_Seq_2))
        {
          e_46 = ATgetArgument(d_46, 0);
          i_46 = ATgetArgument(d_46, 1);
          b_46 :
          if(match_cons(e_46, sym_Seq_2))
            {
              f_46 = ATgetArgument(e_46, 0);
              g_46 = ATgetArgument(e_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_46), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_46), not_null(i_46)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(d_46, sym_LChoice_2))
            {
              e_46 = ATgetArgument(d_46, 0);
              i_46 = ATgetArgument(d_46, 1);
              c_46 :
              if(match_cons(e_46, sym_LChoice_2))
                {
                  f_46 = ATgetArgument(e_46, 0);
                  g_46 = ATgetArgument(e_46, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_46), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_46), not_null(i_46)));
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
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  h_48 = t;
  b_48 :
  if(match_cons(h_48, sym_Seqs_1))
    {
      i_48 = ATgetArgument(h_48, 0);
      c_48 :
      if(match_cons(i_48, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(i_48, sym_Cons_2))
            {
              f_48 = ATgetArgument(i_48, 0);
              g_48 = ATgetArgument(i_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_48)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(h_48, sym_Choices_1))
        {
          i_48 = ATgetArgument(h_48, 0);
          d_48 :
          if(match_cons(i_48, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(i_48, sym_Cons_2))
                {
                  f_48 = ATgetArgument(i_48, 0);
                  g_48 = ATgetArgument(i_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_48)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(h_48, sym_LChoices_1))
            {
              i_48 = ATgetArgument(h_48, 0);
              e_48 :
              if(match_cons(i_48, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(i_48, sym_Cons_2))
                    {
                      f_48 = ATgetArgument(i_48, 0);
                      g_48 = ATgetArgument(i_48, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_48)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(h_48, sym_Lets_2))
                {
                  i_48 = ATgetArgument(h_48, 0);
                  j_48 = ATgetArgument(h_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_48), not_null(j_48));
                }
              else
                {
                  if(match_cons(h_48, sym_BA_2))
                    {
                      i_48 = ATgetArgument(h_48, 0);
                      j_48 = ATgetArgument(h_48, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_48)), not_null(i_48));
                    }
                  else
                    {
                      if(match_cons(h_48, sym_MA_2))
                        {
                          i_48 = ATgetArgument(h_48, 0);
                          j_48 = ATgetArgument(h_48, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_48)), not_null(j_48));
                        }
                      else
                        {
                          if(match_cons(h_48, sym_AM_2))
                            {
                              i_48 = ATgetArgument(h_48, 0);
                              j_48 = ATgetArgument(h_48, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_48)));
                            }
                          else
                            {
                              if(match_cons(h_48, sym_BAM_3))
                                {
                                  i_48 = ATgetArgument(h_48, 0);
                                  j_48 = ATgetArgument(h_48, 1);
                                  k_48 = ATgetArgument(h_48, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_48)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_48)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(h_48, sym_InfixApp_3))
                                    {
                                      i_48 = ATgetArgument(h_48, 0);
                                      j_48 = ATgetArgument(h_48, 1);
                                      k_48 = ATgetArgument(h_48, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_48), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm u_49 = NULL,v_49 = NULL;
  u_49 = t;
  s_49 :
  if(match_cons(u_49, sym_Where_1))
    {
      v_49 = ATgetArgument(u_49, 0);
      t_49 :
      if(match_cons(v_49, sym_Fail_0))
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
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  y_49 :
  if(match_cons(a_50, sym_LChoice_2))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      z_49 :
      if(match_cons(c_50, sym_Fail_0))
        t = not_null(b_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  g_50 :
  if(match_cons(i_50, sym_LChoice_2))
    {
      j_50 = ATgetArgument(i_50, 0);
      k_50 = ATgetArgument(i_50, 1);
      h_50 :
      if(match_cons(j_50, sym_Fail_0))
        t = not_null(k_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
  q_50 = t;
  o_50 :
  if(match_cons(q_50, sym_Choice_2))
    {
      r_50 = ATgetArgument(q_50, 0);
      s_50 = ATgetArgument(q_50, 1);
      p_50 :
      if(match_cons(s_50, sym_Fail_0))
        t = not_null(r_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  w_50 :
  if(match_cons(y_50, sym_Choice_2))
    {
      z_50 = ATgetArgument(y_50, 0);
      a_51 = ATgetArgument(y_50, 1);
      x_50 :
      if(match_cons(z_50, sym_Fail_0))
        t = not_null(a_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym_Cong_2))
    {
      h_51 = ATgetArgument(g_51, 0);
      i_51 = ATgetArgument(g_51, 1);
      t = not_null(i_51);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm l_51 = NULL;
          l_51 = t;
          e_51 :
          if(!(match_cons(l_51, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, d_1);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  o_51 :
  if(match_cons(q_51, sym_Path_2))
    {
      r_51 = ATgetArgument(q_51, 0);
      s_51 = ATgetArgument(q_51, 1);
      p_51 :
      if(match_cons(s_51, sym_Fail_0))
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
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_One_1))
    {
      z_51 = ATgetArgument(y_51, 0);
      x_51 :
      if(match_cons(z_51, sym_Fail_0))
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
  ATerm e_52 = NULL,f_52 = NULL;
  e_52 = t;
  c_52 :
  if(match_cons(e_52, sym_Some_1))
    {
      f_52 = ATgetArgument(e_52, 0);
      d_52 :
      if(match_cons(f_52, sym_Fail_0))
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
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Rec_2))
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
ATerm F5_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  q_52 :
  if(match_cons(s_52, sym_Scope_2))
    {
      t_52 = ATgetArgument(s_52, 0);
      u_52 = ATgetArgument(s_52, 1);
      r_52 :
      if(match_cons(u_52, sym_Fail_0))
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
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  y_52 :
  if(match_cons(a_53, sym_Seq_2))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      z_52 :
      if(match_cons(b_53, sym_Fail_0))
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
  ATerm i_53 = NULL,j_53 = NULL;
  i_53 = t;
  g_53 :
  if(match_cons(i_53, sym_Not_1))
    {
      j_53 = ATgetArgument(i_53, 0);
      h_53 :
      if(match_cons(j_53, sym_Fail_0))
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
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  m_53 :
  if(match_cons(o_53, sym_Test_1))
    {
      p_53 = ATgetArgument(o_53, 0);
      n_53 :
      if(match_cons(p_53, sym_Fail_0))
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
  ATerm r_9 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = r_9;
      {
        ATerm s_9 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = s_9;
            {
              ATerm t_9 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = t_9;
                  {
                    ATerm l_10 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = l_10;
                        {
                          ATerm m_10 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = m_10;
                              {
                                ATerm n_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_10;
                                    {
                                      ATerm o_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_10;
                                          {
                                            ATerm p_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = p_10;
                                                {
                                                  ATerm q_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = q_10;
                                                      {
                                                        ATerm r_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = r_10;
                                                            {
                                                              ATerm s_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = s_10;
                                                                  {
                                                                    ATerm t_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_10;
                                                                        {
                                                                          ATerm u_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_10;
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
  ATerm u_53 = NULL,v_53 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_Match_1))
    {
      v_53 = ATgetArgument(u_53, 0);
      t_53 :
      if(match_cons(v_53, sym_Wld_0))
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
  ATerm a_54 = NULL,b_54 = NULL;
  a_54 = t;
  y_53 :
  if(match_cons(a_54, sym_Where_1))
    {
      b_54 = ATgetArgument(a_54, 0);
      z_53 :
      if(match_cons(b_54, sym_Id_0))
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
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  e_54 :
  if(match_cons(g_54, sym_All_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      f_54 :
      if(match_cons(h_54, sym_Id_0))
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
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  k_54 :
  if(match_cons(m_54, sym_Rec_2))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      l_54 :
      if(match_cons(o_54, sym_Id_0))
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
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  s_54 :
  if(match_cons(u_54, sym_Scope_2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      t_54 :
      if(match_cons(w_54, sym_Id_0))
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
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
  c_55 = t;
  a_55 :
  if(match_cons(c_55, sym_LChoice_2))
    {
      d_55 = ATgetArgument(c_55, 0);
      e_55 = ATgetArgument(c_55, 1);
      b_55 :
      if(match_cons(d_55, sym_Id_0))
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
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
  k_55 = t;
  i_55 :
  if(match_cons(k_55, sym_Seq_2))
    {
      l_55 = ATgetArgument(k_55, 0);
      m_55 = ATgetArgument(k_55, 1);
      j_55 :
      if(match_cons(m_55, sym_Id_0))
        t = not_null(l_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  q_55 :
  if(match_cons(s_55, sym_Seq_2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      r_55 :
      if(match_cons(t_55, sym_Id_0))
        t = not_null(u_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  a_56 = t;
  y_55 :
  if(match_cons(a_56, sym_Not_1))
    {
      b_56 = ATgetArgument(a_56, 0);
      z_55 :
      if(match_cons(b_56, sym_Id_0))
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
  ATerm g_56 = NULL,h_56 = NULL;
  g_56 = t;
  e_56 :
  if(match_cons(g_56, sym_Test_1))
    {
      h_56 = ATgetArgument(g_56, 0);
      f_56 :
      if(match_cons(h_56, sym_Id_0))
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
  ATerm k_11 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = k_11;
      {
        ATerm l_11 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = l_11;
            {
              ATerm m_11 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_11;
                  {
                    ATerm n_11 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = n_11;
                        {
                          ATerm o_11 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = o_11;
                              {
                                ATerm p_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_11;
                                    {
                                      ATerm q_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_11;
                                          {
                                            ATerm r_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = r_11;
                                                {
                                                  ATerm v_11 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_11;
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
  ATerm o_12 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = o_12;
      {
        ATerm p_12 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = p_12;
            {
              ATerm w_12 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = w_12;
                  {
                    ATerm x_12 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = x_12;
                        {
                          ATerm z_12 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_12;
                              {
                                ATerm a_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_13;
                                    {
                                      ATerm b_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_13;
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
  ATerm c_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = c_13;
      {
        ATerm d_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = d_13;
            {
              ATerm e_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = e_13;
                  {
                    ATerm f_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = f_13;
                        {
                          ATerm g_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = g_13;
                              {
                                ATerm h_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_13;
                                    {
                                      ATerm i_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_13;
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
ATerm repeat_2 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm j_56 (ATerm t)
  {
    ATerm j_13 = t;
    if(PushChoice()==0)
      {
        t = u_67(t);
        t = j_56(t);
        PopChoice();
      }
    else
      {
        t = j_13;
        t = v_67(t);
      }
    return(t);
  }
  t = j_56(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_67 (ATerm))
{
  t = repeat_2(t, x_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm k_56 (ATerm t)
  {
    t = i_80(t);
    t = _all(t, k_56);
    t = i_80(t);
    return(t);
  }
  t = k_56(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      ATerm k_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = k_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, n_1);
    return(t);
  }
  t = downup_1(t, m_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym_SDef_3))
    {
      r_56 = ATgetArgument(q_56, 0);
      s_56 = ATgetArgument(q_56, 1);
      t_56 = ATgetArgument(q_56, 2);
      {
        ATerm y_56 = NULL;
        t = not_null(r_56);
        {
          ATerm a_57 = NULL;
          t = m_61(t);
          y_56 = t;
          t = not_null(s_56);
          {
            ATerm c_57 = NULL;
            t = n_61(t);
            a_57 = t;
            t = not_null(t_56);
            t = o_61(t);
            c_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_56), not_null(a_57), not_null(c_57));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm i_57 (ATerm t)
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = l_13;
        t = Cons_2(t, m_77, i_57);
      }
    return(t);
  }
  t = i_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm m_57 = NULL,n_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym_Strategies_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      {
        ATerm p_57 = NULL;
        t = not_null(n_57);
        t = h_60(t);
        p_57 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_57));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm w_57 = NULL,x_57 = NULL;
  w_57 = t;
  v_57 :
  if(match_cons(w_57, sym_Specification_1))
    {
      x_57 = ATgetArgument(w_57, 0);
      {
        ATerm z_57 = NULL;
        t = not_null(x_57);
        t = j_60(t);
        z_57 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(z_57));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, z_84);
            return(t);
          }
          t = map_1(t, t_1);
          return(t);
        }
        t = Strategies_1(t, s_1);
        return(t);
      }
      t = Cons_2(t, r_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, q_1);
    return(t);
  }
  t = Specification_1(t, p_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  d_58 :
  if(!(match_cons(e_58, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_TCons_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      {
        ATerm o_58 = NULL;
        t = not_null(k_58);
        {
          ATerm q_58 = NULL;
          t = r_62(t);
          o_58 = t;
          t = not_null(l_58);
          t = s_62(t);
          q_58 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_58), not_null(q_58));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_58 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_58 = NULL,z_58 = NULL;
      y_58 = t;
      w_58 :
      if(match_cons(y_58, sym_Program_1))
        {
          z_58 = ATgetArgument(y_58, 0);
          if(x_58 != NULL && x_58 != z_58)
            _fail(z_58);
          else
            x_58 = z_58;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, x_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_58), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = m_13;
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
  ATerm c_59 = NULL;
  c_59 = t;
  t = SSL_exit(not_null(c_59));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
  j_59 = t;
  g_59 :
  if(match_cons(j_59, sym_TCons_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      h_59 :
      if(match_cons(l_59, sym_TCons_2))
        {
          m_59 = ATgetArgument(l_59, 0);
          n_59 = ATgetArgument(l_59, 1);
          i_59 :
          if(match_cons(n_59, sym_TNil_0))
            {
              ATerm n_13;
              n_13 = t;
              t = SSL_printnl(not_null(k_59), not_null(m_59));
              t = n_13;
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
ATerm try_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm o_13 = t;
  if(PushChoice()==0)
    {
      t = t_79(t);
      PopChoice();
    }
  else
    t = o_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_59 = NULL,y_59 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm p_13 = t;
      if(PushChoice()==0)
        {
          ATerm c_2 (ATerm t)
          {
            ATerm z_59 = NULL;
            z_59 = t;
            r_59 :
            if(!(match_cons(z_59, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_2);
          PopChoice();
          _fail(t);
        }
      else
        t = p_13;
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, a_2, b_2);
    {
      ATerm d_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          ATerm a_60 = NULL,b_60 = NULL;
          a_60 = t;
          t_59 :
          if(match_cons(a_60, sym_Runtime_1))
            {
              b_60 = ATgetArgument(a_60, 0);
              if(y_59 != NULL && y_59 != b_60)
                _fail(b_60);
              else
                y_59 = b_60;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_2);
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, d_2, e_2);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm c_60 = NULL,d_60 = NULL;
            c_60 = t;
            v_59 :
            if(match_cons(c_60, sym_Program_1))
              {
                d_60 = ATgetArgument(c_60, 0);
                if(w_59 != NULL && w_59 != d_60)
                  _fail(d_60);
                else
                  w_59 = d_60;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_2);
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, k_2, m_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, z_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  m_60 = t;
  i_60 :
  if(match_cons(m_60, sym_TCons_2))
    {
      n_60 = ATgetArgument(m_60, 0);
      o_60 = ATgetArgument(m_60, 1);
      k_60 :
      if(match_cons(o_60, sym_TCons_2))
        {
          p_60 = ATgetArgument(o_60, 0);
          q_60 = ATgetArgument(o_60, 1);
          l_60 :
          if(match_cons(q_60, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(n_60), not_null(p_60));
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
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  z_60 = t;
  w_60 :
  if(match_cons(z_60, sym_TCons_2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      x_60 :
      if(match_cons(b_61, sym_TCons_2))
        {
          c_61 = ATgetArgument(b_61, 0);
          d_61 = ATgetArgument(b_61, 1);
          y_60 :
          if(match_cons(d_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(a_61), not_null(c_61));
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
  ATerm l_61 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm r_13 = t;
      if(PushChoice()==0)
        {
          ATerm r_2 (ATerm t)
          {
            ATerm p_61 = NULL,q_61 = NULL;
            p_61 = t;
            i_61 :
            if(match_cons(p_61, sym_Output_1))
              {
                q_61 = ATgetArgument(p_61, 0);
                if(l_61 != NULL && l_61 != q_61)
                  _fail(q_61);
                else
                  l_61 = q_61;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_2);
          PopChoice();
        }
      else
        {
          t = r_13;
          {
            ATerm r_61 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            r_61 = t;
            if(l_61 != NULL && l_61 != r_61)
              _fail(r_61);
            else
              l_61 = r_61;
          }
        }
      return(t);
    }
    ATerm q_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, p_2, q_2);
  }
  t = q_13;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm w_2 (ATerm t)
      {
        ATerm x_2 (ATerm t)
        {
          t = not_null(l_61);
          return(t);
        }
        t = split_2(t, x_2, _id);
        return(t);
      }
      t = TCons_2(t, w_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_2);
    {
      ATerm s_13 = t;
      if(PushChoice()==0)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm i_3 (ATerm t)
            {
              ATerm s_61 = NULL;
              s_61 = t;
              k_61 :
              if(!(match_cons(s_61, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, i_3);
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, y_2, z_2);
          PopChoice();
        }
      else
        {
          t = s_13;
          {
            ATerm j_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, j_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm a_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  ATerm t_13;
  t_13 = t;
  t = dtime_0(t);
  t = t_13;
  t = x_65(t);
  {
    ATerm u_13;
    u_13 = t;
    {
      ATerm b_62 = NULL;
      t = dtime_0(t);
      b_62 = t;
      if(a_62 != NULL && a_62 != b_62)
        _fail(b_62);
      else
        a_62 = b_62;
    }
    t = u_13;
    c_62 = t;
    x_61 :
    if(match_cons(c_62, sym_TCons_2))
      {
        d_62 = ATgetArgument(c_62, 0);
        e_62 = ATgetArgument(c_62, 1);
        y_61 :
        if(match_cons(e_62, sym_TCons_2))
          {
            f_62 = ATgetArgument(e_62, 0);
            g_62 = ATgetArgument(e_62, 1);
            z_61 :
            if(match_cons(g_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(a_62)), not_null(d_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_62 = NULL;
  o_62 = t;
  t = SSL_ReadFromFile(not_null(o_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm y_62 = NULL;
  ATerm a_63 = NULL;
  y_62 = t;
  {
    ATerm c_63 = NULL;
    t = b_79(t);
    a_63 = t;
    t = not_null(y_62);
    t = c_79(t);
    c_63 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_63), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_63 = NULL;
  ATerm v_13;
  v_13 = t;
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_63 = NULL,m_63 = NULL;
          l_63 = t;
          i_63 :
          if(match_cons(l_63, sym_Input_1))
            {
              m_63 = ATgetArgument(l_63, 0);
              if(k_63 != NULL && k_63 != m_63)
                _fail(m_63);
              else
                k_63 = m_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_3);
        PopChoice();
      }
    else
      {
        t = w_13;
        {
          ATerm n_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          n_63 = t;
          if(k_63 != NULL && k_63 != n_63)
            _fail(n_63);
          else
            k_63 = n_63;
        }
      }
  }
  t = v_13;
  {
    ATerm l_3 (ATerm t)
    {
      t = not_null(k_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_63 = NULL;
  r_63 = t;
  q_63 :
  if(!(match_cons(r_63, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm v_63 = NULL,w_63 = NULL;
  v_63 = t;
  u_63 :
  if(match_cons(v_63, sym_Undefined_1))
    {
      w_63 = ATgetArgument(v_63, 0);
      {
        ATerm y_63 = NULL;
        t = not_null(w_63);
        t = x_56(t);
        y_63 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_63));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_64 = NULL;
  d_64 = t;
  c_64 :
  if(!(match_cons(d_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm e_64 (ATerm t)
  {
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_77, _id);
        PopChoice();
      }
    else
      {
        t = x_13;
        t = Cons_2(t, _id, e_64);
      }
    return(t);
  }
  t = e_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_65 (ATerm))
{
  t = fetch_1(t, b_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm y_13 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = y_13;
        {
          ATerm z_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_3);
  t = w_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,y_64 = NULL,z_64 = NULL;
    n_64 = t;
    g_64 :
    if(match_cons(n_64, sym_TCons_2))
      {
        o_64 = ATgetArgument(n_64, 0);
        p_64 = ATgetArgument(n_64, 1);
        h_64 :
        if(match_cons(p_64, sym_TCons_2))
          {
            q_64 = ATgetArgument(p_64, 0);
            r_64 = ATgetArgument(p_64, 1);
            i_64 :
            if(match_cons(r_64, sym_TCons_2))
              {
                y_64 = ATgetArgument(r_64, 0);
                z_64 = ATgetArgument(r_64, 1);
                j_64 :
                if(match_cons(z_64, sym_TNil_0))
                  {
                    if(k_64 != NULL && k_64 != o_64)
                      _fail(o_64);
                    else
                      k_64 = o_64;
                    if(l_64 != NULL && l_64 != q_64)
                      _fail(q_64);
                    else
                      l_64 = q_64;
                    if(m_64 != NULL && m_64 != y_64)
                      _fail(y_64);
                    else
                      m_64 = y_64;
                    t = SSL_table_put(not_null(k_64), not_null(l_64), not_null(m_64));
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
  t = a_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_65 = NULL;
  e_65 = t;
  t = SSL_table_create(not_null(e_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_65 = NULL;
  k_65 = t;
  {
    ATerm b_14;
    b_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_65), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = b_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym_Cons_2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      {
        ATerm a_66 = NULL;
        t = not_null(u_65);
        t = u_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_64(t);
        a_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_66), not_null(v_65));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
  i_66 = t;
  g_66 :
  if(match_cons(i_66, sym_Cons_2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      h_66 :
      if(match_cons(k_66, sym_Cons_2))
        {
          l_66 = ATgetArgument(k_66, 0);
          m_66 = ATgetArgument(k_66, 1);
          {
            ATerm q_66 = NULL;
            t = not_null(j_66);
            t = w_64(t);
            t = not_null(l_66);
            t = x_64(t);
            q_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_66), not_null(m_66));
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
  ATerm c_14 = t;
  if(PushChoice()==0)
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_67 = NULL;
        o_67 = t;
        u_66 :
        if(!(match_string(o_67, "-S")))
          _fail(t);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, n_3, o_3);
      PopChoice();
    }
  else
    {
      t = c_14;
      {
        ATerm d_14 = t;
        if(PushChoice()==0)
          {
            ATerm p_3 (ATerm t)
            {
              ATerm p_67 = NULL;
              p_67 = t;
              v_66 :
              if(!(match_string(p_67, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, p_3, t_3);
            PopChoice();
          }
        else
          {
            t = d_14;
            {
              ATerm e_14 = t;
              if(PushChoice()==0)
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm q_67 = NULL;
                    q_67 = t;
                    w_66 :
                    if(!(match_string(q_67, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, u_3, v_3);
                  PopChoice();
                }
              else
                {
                  t = e_14;
                  {
                    ATerm f_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm e_4 (ATerm t)
                        {
                          ATerm r_67 = NULL;
                          r_67 = t;
                          x_66 :
                          if(!(match_string(r_67, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, e_4, f_4);
                        PopChoice();
                      }
                    else
                      {
                        t = f_14;
                        {
                          ATerm g_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm g_4 (ATerm t)
                              {
                                ATerm s_67 = NULL;
                                s_67 = t;
                                y_66 :
                                if(!(match_string(s_67, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, g_4, i_4);
                              PopChoice();
                            }
                          else
                            {
                              t = g_14;
                              {
                                ATerm h_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm t_67 = NULL;
                                      t_67 = t;
                                      z_66 :
                                      if(!(match_string(t_67, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm y_67 = NULL;
                                      y_67 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_67));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, j_4, k_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_14;
                                    {
                                      ATerm i_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm p_4 (ATerm t)
                                          {
                                            ATerm a_68 = NULL;
                                            a_68 = t;
                                            b_67 :
                                            if(!(match_string(a_68, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm b_68 = NULL;
                                            b_68 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_68));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, p_4, q_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_14;
                                          {
                                            ATerm j_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm s_4 (ATerm t)
                                                {
                                                  ATerm d_68 = NULL;
                                                  d_68 = t;
                                                  d_67 :
                                                  if(!(match_string(d_68, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm u_4 (ATerm t)
                                                {
                                                  ATerm e_68 = NULL;
                                                  e_68 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_68));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, s_4, u_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = j_14;
                                                {
                                                  ATerm k_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm w_4 (ATerm t)
                                                      {
                                                        ATerm g_68 = NULL;
                                                        g_68 = t;
                                                        f_67 :
                                                        if(!(match_string(g_68, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm x_4 (ATerm t)
                                                      {
                                                        ATerm h_68 = NULL;
                                                        h_68 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_68));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, w_4, x_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = k_14;
                                                      {
                                                        ATerm l_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm y_4 (ATerm t)
                                                            {
                                                              ATerm j_68 = NULL;
                                                              j_68 = t;
                                                              h_67 :
                                                              if(!(match_string(j_68, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm z_4 (ATerm t)
                                                            {
                                                              ATerm k_68 = NULL;
                                                              k_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_68));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, y_4, z_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = l_14;
                                                            {
                                                              ATerm m_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm a_5 (ATerm t)
                                                                  {
                                                                    ATerm s_68 = NULL;
                                                                    s_68 = t;
                                                                    j_67 :
                                                                    if(!(match_string(s_68, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm b_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, a_5, b_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = m_14;
                                                                  {
                                                                    ATerm n_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm g_5 (ATerm t)
                                                                        {
                                                                          ATerm t_68 = NULL;
                                                                          t_68 = t;
                                                                          k_67 :
                                                                          if(!(match_string(t_68, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm j_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, g_5, j_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_14;
                                                                        {
                                                                          ATerm o_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm p_5 (ATerm t)
                                                                              {
                                                                                ATerm u_68 = NULL;
                                                                                u_68 = t;
                                                                                l_67 :
                                                                                if(!(match_string(u_68, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm q_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, p_5, q_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_14;
                                                                              {
                                                                                ATerm p_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm r_5 (ATerm t)
                                                                                    {
                                                                                      ATerm v_68 = NULL;
                                                                                      v_68 = t;
                                                                                      m_67 :
                                                                                      if(!(match_string(v_68, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm s_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, r_5, s_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_14;
                                                                                    {
                                                                                      ATerm w_5 (ATerm t)
                                                                                      {
                                                                                        ATerm w_68 = NULL;
                                                                                        w_68 = t;
                                                                                        n_67 :
                                                                                        if(!(match_string(w_68, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm x_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, w_5, x_5);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym_Cons_2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_69)), not_null(g_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_Cons_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      {
        ATerm t_69 = NULL;
        t = not_null(p_69);
        {
          ATerm z_69 = NULL;
          t = v_62(t);
          t_69 = t;
          t = not_null(q_69);
          t = w_62(t);
          z_69 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_69), not_null(z_69));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm f_70 = NULL;
  f_70 = t;
  e_70 :
  if(!(match_cons(f_70, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm h_70 = NULL;
    h_70 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_70));
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm q_14 = t;
    if(PushChoice()==0)
      {
        ATerm r_14 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = r_14;
            t = s_64(t);
            t = Cons_2(t, _id, z_5);
          }
        PopChoice();
      }
    else
      {
        t = q_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, y_5, z_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm s_14 = t;
    if(PushChoice()==0)
      {
        t = m_65(t);
        PopChoice();
      }
    else
      {
        t = s_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_6);
  t = store_options_0(t);
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, n_65);
        PopChoice();
      }
    else
      {
        t = t_14;
        {
          ATerm u_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, l_65);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = u_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  t = iowrap_3(t, g_65, h_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      t = TCons_2(t, d_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_6);
    return(t);
  }
  t = iowrap_2(t, f_6, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_clean_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, m_6);
    return(t);
  }
  t = iowrap_1(t, j_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
