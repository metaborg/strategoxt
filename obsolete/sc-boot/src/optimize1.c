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
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_80 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
  ATerm o_6 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, a_84, y_83);
      PopChoice();
    }
  else
    {
      t = o_6;
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
                  ATerm r_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(c_4);
                      PopChoice();
                    }
                  else
                    {
                      t = r_6;
                      {
                        ATerm s_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(c_4);
                              return(t);
                            }
                            t = HdMember_1(t, b_0);
                            t = h_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_6;
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
    ATerm t_6 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = x_72(t);
        PopChoice();
      }
    else
      {
        t = t_6;
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
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, c_0, union_0, w_74);
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm v_5 (ATerm t)
  {
    ATerm u_6 = t;
    if(PushChoice()==0)
      {
        t = v_69(t);
        PopChoice();
      }
    else
      {
        t = u_6;
        {
          ATerm w_6 = t;
          if(PushChoice()==0)
            {
              ATerm t_5 = NULL;
              ATerm x_6;
              x_6 = t;
              {
                ATerm u_5 = NULL;
                t = w_69(t);
                u_5 = t;
                if(t_5 != NULL && t_5 != u_5)
                  _fail(u_5);
                else
                  t_5 = u_5;
              }
              t = x_6;
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = not_null(t_5);
                    return(t);
                  }
                  t = split_2(t, v_5, f_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm e_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = x_69(t, d_0, v_5, e_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = w_6;
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
  ATerm g_0 (ATerm t)
  {
    ATerm j_7 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = j_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  d_6 = t;
  b_6 :
  if(match_cons(d_6, sym_Scope_2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      c_6 :
      if(match_cons(f_6, sym_Seq_2))
        {
          g_6 = ATgetArgument(f_6, 0);
          h_6 = ATgetArgument(f_6, 1);
          {
            ATerm l_6 = NULL,m_6 = NULL;
            ATerm n_6 = NULL;
            t = not_null(g_6);
            {
              ATerm p_6 = NULL;
              t = tvars_0(t);
              n_6 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm q_6 = NULL;
                t = isect_0(t);
                p_6 = t;
                if(l_6 != NULL && l_6 != p_6)
                  _fail(p_6);
                else
                  l_6 = p_6;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = diff_0(t);
                q_6 = t;
                if(m_6 != NULL && m_6 != q_6)
                  _fail(q_6);
                else
                  m_6 = q_6;
                {
                  ATerm k_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = k_7;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_6), not_null(h_6))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    t = e_80(t);
    t = _all(t, v_6);
    return(t);
  }
  t = v_6(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, h_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  ATerm p_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), not_null(g_7)));
    return(t);
  }
  ATerm q_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_7), not_null(i_7)));
    return(t);
  }
  e_7 = t;
  y_6 :
  if(match_cons(e_7, sym_Seq_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      z_6 :
      if(match_cons(g_7, sym_Scope_2))
        {
          h_7 = ATgetArgument(g_7, 0);
          i_7 = ATgetArgument(g_7, 1);
          a_7 :
          if(match_cons(f_7, sym_Scope_2))
            {
              c_7 = ATgetArgument(f_7, 0);
              d_7 = ATgetArgument(f_7, 1);
              {
                ATerm l_7 = t;
                if(PushChoice()==0)
                  {
                    t = p_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = l_7;
                    t = q_7(t);
                  }
              }
            }
          else
            t = q_7(t);
        }
      else
        {
          b_7 :
          if(match_cons(f_7, sym_Scope_2))
            {
              c_7 = ATgetArgument(f_7, 0);
              d_7 = ATgetArgument(f_7, 1);
              t = p_7(t);
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
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  x_7 = t;
  s_7 :
  if(match_cons(x_7, sym_Let_2))
    {
      y_7 = ATgetArgument(x_7, 0);
      e_8 = ATgetArgument(x_7, 1);
      t_7 :
      if(match_cons(y_7, sym_Cons_2))
        {
          z_7 = ATgetArgument(y_7, 0);
          d_8 = ATgetArgument(y_7, 1);
          u_7 :
          if(match_cons(z_7, sym_SDef_3))
            {
              a_8 = ATgetArgument(z_7, 0);
              b_8 = ATgetArgument(z_7, 1);
              c_8 = ATgetArgument(z_7, 2);
              v_7 :
              if(match_cons(b_8, sym_Nil_0))
                {
                  w_7 :
                  if(match_cons(d_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(a_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(c_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(e_8));
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
  ATerm j_8 (ATerm t)
  {
    ATerm m_7 = t;
    if(PushChoice()==0)
      {
        t = f_78(t);
        PopChoice();
      }
    else
      {
        t = m_7;
        t = Cons_2(t, _id, j_8);
      }
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_Let_2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        ATerm b_9 = NULL,c_9 = NULL;
        ATerm r_9 = NULL;
        t = not_null(x_8);
        {
          ATerm i_0 (ATerm t)
          {
            ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
            d_9 = t;
            r_8 :
            if(match_cons(d_9, sym_Cons_2))
              {
                e_9 = ATgetArgument(d_9, 0);
                i_9 = ATgetArgument(d_9, 1);
                s_8 :
                if(match_cons(e_9, sym_SDef_3))
                  {
                    f_9 = ATgetArgument(e_9, 0);
                    g_9 = ATgetArgument(e_9, 1);
                    h_9 = ATgetArgument(e_9, 2);
                    t_8 :
                    if(match_cons(g_9, sym_Nil_0))
                      {
                        ATerm q_9 = NULL;
                        t = not_null(y_8);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
                            m_9 = t;
                            n_8 :
                            if(match_cons(m_9, sym_Call_2))
                              {
                                n_9 = ATgetArgument(m_9, 0);
                                p_9 = ATgetArgument(m_9, 1);
                                o_8 :
                                if(match_cons(n_9, sym_SVar_1))
                                  {
                                    o_9 = ATgetArgument(n_9, 0);
                                    p_8 :
                                    if(match_cons(p_9, sym_Nil_0))
                                      {
                                        if(f_9 != NULL && f_9 != o_9)
                                          _fail(o_9);
                                        else
                                          f_9 = o_9;
                                        t = not_null(h_9);
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
                          q_9 = t;
                          if(b_9 != NULL && b_9 != q_9)
                            _fail(q_9);
                          else
                            b_9 = q_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm n_7 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = n_7;
                          }
                        }
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
          t = at_suffix_1(t, i_0);
          r_9 = t;
          if(c_9 != NULL && c_9 != r_9)
            _fail(r_9);
          else
            c_9 = r_9;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_9), not_null(b_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  h_10 = t;
  z_9 :
  if(match_cons(h_10, sym_TCons_2))
    {
      i_10 = ATgetArgument(h_10, 0);
      k_10 = ATgetArgument(h_10, 1);
      a_10 :
      if(match_cons(i_10, sym_Build_1))
        {
          j_10 = ATgetArgument(i_10, 0);
          b_10 :
          if(match_cons(k_10, sym_TCons_2))
            {
              l_10 = ATgetArgument(k_10, 0);
              p_10 = ATgetArgument(k_10, 1);
              c_10 :
              if(match_cons(l_10, sym_Prim_2))
                {
                  m_10 = ATgetArgument(l_10, 0);
                  g_10 = ATgetArgument(l_10, 1);
                  d_10 :
                  if(match_cons(p_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_10), not_null(g_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(l_10, sym_Where_1))
                    {
                      m_10 = ATgetArgument(l_10, 0);
                      e_10 :
                      if(match_cons(m_10, sym_Prim_2))
                        {
                          n_10 = ATgetArgument(m_10, 0);
                          o_10 = ATgetArgument(m_10, 1);
                          f_10 :
                          if(match_cons(p_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_10), not_null(o_10));
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
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  h_11 = t;
  a_11 :
  if(match_cons(h_11, sym_TCons_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      k_11 = ATgetArgument(h_11, 1);
      b_11 :
      if(match_cons(i_11, sym_Build_1))
        {
          j_11 = ATgetArgument(i_11, 0);
          c_11 :
          if(match_cons(k_11, sym_TCons_2))
            {
              l_11 = ATgetArgument(k_11, 0);
              o_11 = ATgetArgument(k_11, 1);
              d_11 :
              if(match_cons(l_11, sym_Build_1))
                {
                  m_11 = ATgetArgument(l_11, 0);
                  e_11 :
                  if(match_cons(o_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(l_11, sym_Where_1))
                    {
                      m_11 = ATgetArgument(l_11, 0);
                      f_11 :
                      if(match_cons(m_11, sym_Build_1))
                        {
                          n_11 = ATgetArgument(m_11, 0);
                          g_11 :
                          if(match_cons(o_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_11));
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
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  i_12 = t;
  b_12 :
  if(match_cons(i_12, sym_TCons_2))
    {
      j_12 = ATgetArgument(i_12, 0);
      n_12 = ATgetArgument(i_12, 1);
      c_12 :
      if(match_cons(j_12, sym_Build_1))
        {
          k_12 = ATgetArgument(j_12, 0);
          d_12 :
          if(match_cons(k_12, sym_Op_2))
            {
              l_12 = ATgetArgument(k_12, 0);
              m_12 = ATgetArgument(k_12, 1);
              e_12 :
              if(match_cons(n_12, sym_TCons_2))
                {
                  o_12 = ATgetArgument(n_12, 0);
                  s_12 = ATgetArgument(n_12, 1);
                  f_12 :
                  if(match_cons(o_12, sym_Match_1))
                    {
                      p_12 = ATgetArgument(o_12, 0);
                      g_12 :
                      if(match_cons(p_12, sym_Op_2))
                        {
                          q_12 = ATgetArgument(p_12, 0);
                          r_12 = ATgetArgument(p_12, 1);
                          h_12 :
                          if(match_cons(s_12, sym_TNil_0))
                            {
                              ATerm v_12 = NULL,c_15 = NULL;
                              if(l_12 != NULL && l_12 != q_12)
                                _fail(q_12);
                              else
                                l_12 = q_12;
                              if(v_12 != NULL && v_12 != r_12)
                                _fail(r_12);
                              else
                                v_12 = r_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_0 (ATerm t)
                                {
                                  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                                  w_12 = t;
                                  x_11 :
                                  if(match_cons(w_12, sym_TCons_2))
                                    {
                                      x_12 = ATgetArgument(w_12, 0);
                                      y_12 = ATgetArgument(w_12, 1);
                                      y_11 :
                                      if(match_cons(y_12, sym_TCons_2))
                                        {
                                          z_12 = ATgetArgument(y_12, 0);
                                          a_13 = ATgetArgument(y_12, 1);
                                          z_11 :
                                          if(match_cons(a_13, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_12)));
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
                                c_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(l_12), not_null(m_12))));
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
  u_15 = t;
  r_15 :
  if(match_cons(u_15, sym_TCons_2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      s_15 :
      if(match_cons(w_15, sym_TCons_2))
        {
          x_15 = ATgetArgument(w_15, 0);
          y_15 = ATgetArgument(w_15, 1);
          t_15 :
          if(match_cons(y_15, sym_TNil_0))
            {
              if(v_15 != NULL && v_15 != x_15)
                _fail(x_15);
              else
                v_15 = x_15;
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  t_16 = t;
  c_16 :
  if(match_cons(t_16, sym_TCons_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      b_17 = ATgetArgument(t_16, 1);
      d_16 :
      if(match_cons(u_16, sym_Build_1))
        {
          v_16 = ATgetArgument(u_16, 0);
          e_16 :
          if(match_cons(v_16, sym_Op_2))
            {
              w_16 = ATgetArgument(v_16, 0);
              a_17 = ATgetArgument(v_16, 1);
              f_16 :
              if(match_cons(b_17, sym_TCons_2))
                {
                  c_17 = ATgetArgument(b_17, 0);
                  g_17 = ATgetArgument(b_17, 1);
                  g_16 :
                  if(match_cons(c_17, sym_Match_1))
                    {
                      d_17 = ATgetArgument(c_17, 0);
                      h_16 :
                      if(match_cons(d_17, sym_Op_2))
                        {
                          e_17 = ATgetArgument(d_17, 0);
                          f_17 = ATgetArgument(d_17, 1);
                          i_16 :
                          if(match_cons(g_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm o_7 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = o_7;
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
  ATerm r_7 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = r_7;
      {
        ATerm f_8 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = f_8;
            {
              ATerm g_8 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = g_8;
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
  ATerm d_19 = NULL,e_19 = NULL,k_19 = NULL,l_19 = NULL,v_19 = NULL;
  ATerm x_20 (ATerm t)
  {
    ATerm q_20 = NULL;
    ATerm r_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    r_20 = t;
    if(q_20 != NULL && q_20 != r_20)
      _fail(r_20);
    else
      q_20 = r_20;
    t = not_null(q_20);
    return(t);
  }
  ATerm y_20 (ATerm t)
  {
    ATerm v_20 = NULL;
    ATerm w_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    w_20 = t;
    if(v_20 != NULL && v_20 != w_20)
      _fail(w_20);
    else
      v_20 = w_20;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_20), not_null(v_19));
    return(t);
  }
  d_19 = t;
  r_18 :
  if(match_cons(d_19, sym_Seq_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      k_19 = ATgetArgument(d_19, 1);
      c_19 :
      if(match_cons(k_19, sym_Seq_2))
        {
          l_19 = ATgetArgument(k_19, 0);
          v_19 = ATgetArgument(k_19, 1);
          {
            ATerm h_8 = t;
            if(PushChoice()==0)
              {
                t = x_20(t);
                PopChoice();
              }
            else
              {
                t = h_8;
                t = y_20(t);
              }
          }
        }
      else
        t = x_20(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,m_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  g_21 = t;
  c_21 :
  if(match_cons(g_21, sym_Seq_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      m_21 = ATgetArgument(g_21, 1);
      d_21 :
      if(match_cons(h_21, sym_Build_1))
        {
          i_21 = ATgetArgument(h_21, 0);
          e_21 :
          if(match_cons(m_21, sym_Seq_2))
            {
              q_21 = ATgetArgument(m_21, 0);
              s_21 = ATgetArgument(m_21, 1);
              f_21 :
              if(match_cons(q_21, sym_Build_1))
                {
                  r_21 = ATgetArgument(q_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_21)), not_null(s_21));
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
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  b_22 = t;
  z_21 :
  if(match_cons(b_22, sym_Scope_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      a_22 :
      if(match_cons(d_22, sym_Scope_2))
        {
          e_22 = ATgetArgument(d_22, 0);
          f_22 = ATgetArgument(d_22, 1);
          {
            ATerm j_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            j_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_22), not_null(f_22));
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
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym_Var_1))
    {
      q_22 = ATgetArgument(p_22, 0);
      t = not_null(q_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  z_22 = t;
  u_22 :
  if(match_cons(z_22, sym_TCons_2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      v_22 :
      if(match_cons(b_23, sym_TCons_2))
        {
          c_23 = ATgetArgument(b_23, 0);
          f_23 = ATgetArgument(b_23, 1);
          x_22 :
          if(match_cons(c_23, sym_Cons_2))
            {
              d_23 = ATgetArgument(c_23, 0);
              e_23 = ATgetArgument(c_23, 1);
              y_22 :
              if(match_cons(f_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_23 = NULL,y_23 = NULL,c_24 = NULL,d_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  x_23 = t;
  k_23 :
  if(match_cons(x_23, sym_TCons_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      c_24 = ATgetArgument(x_23, 1);
      l_23 :
      if(match_cons(c_24, sym_TCons_2))
        {
          d_24 = ATgetArgument(c_24, 0);
          x_24 = ATgetArgument(c_24, 1);
          m_23 :
          if(match_cons(d_24, sym_Cons_2))
            {
              r_24 = ATgetArgument(d_24, 0);
              w_24 = ATgetArgument(d_24, 1);
              n_23 :
              if(match_cons(r_24, sym_TCons_2))
                {
                  s_24 = ATgetArgument(r_24, 0);
                  t_24 = ATgetArgument(r_24, 1);
                  o_23 :
                  if(match_cons(t_24, sym_TCons_2))
                    {
                      u_24 = ATgetArgument(t_24, 0);
                      v_24 = ATgetArgument(t_24, 1);
                      v_23 :
                      if(match_cons(v_24, sym_TNil_0))
                        {
                          w_23 :
                          if(match_cons(x_24, sym_TNil_0))
                            {
                              ATerm z_24 = NULL;
                              if(y_23 != NULL && y_23 != s_24)
                                _fail(s_24);
                              else
                                y_23 = s_24;
                              if(z_24 != NULL && z_24 != u_24)
                                _fail(u_24);
                              else
                                z_24 = u_24;
                              t = not_null(z_24);
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
  ATerm i_8 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = i_8;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm h_25 = NULL;
  ATerm j_25 = NULL,p_25 = NULL;
  h_25 = t;
  {
    ATerm q_25 = NULL;
    t = not_null(h_25);
    {
      ATerm r_25 = NULL;
      t = f_83(t);
      q_25 = t;
      if(j_25 != NULL && j_25 != q_25)
        _fail(q_25);
      else
        j_25 = q_25;
      t = g_83(t);
      r_25 = t;
      if(p_25 != NULL && p_25 != r_25)
        _fail(r_25);
      else
        p_25 = r_25;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm v_25 (ATerm t)
  {
    ATerm k_8 = t;
    if(PushChoice()==0)
      {
        t = f_82(t);
        PopChoice();
      }
    else
      {
        t = k_8;
        t = _all(t, v_25);
      }
    return(t);
  }
  t = v_25(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  d_26 = t;
  z_25 :
  if(match_cons(d_26, sym_TCons_2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      a_26 :
      if(match_cons(f_26, sym_TCons_2))
        {
          g_26 = ATgetArgument(f_26, 0);
          h_26 = ATgetArgument(f_26, 1);
          b_26 :
          if(match_cons(h_26, sym_TNil_0))
            {
              ATerm l_26 = NULL;
              if(l_26 != NULL && l_26 != g_26)
                _fail(g_26);
              else
                l_26 = g_26;
            }
          else
            {
              if(match_cons(h_26, sym_TCons_2))
                {
                  i_26 = ATgetArgument(h_26, 0);
                  j_26 = ATgetArgument(h_26, 1);
                  c_26 :
                  if(match_cons(j_26, sym_TNil_0))
                    {
                      ATerm r_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      r_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  t = subs_args_0(t);
  a_27 = t;
  x_26 :
  if(match_cons(a_27, sym_TCons_2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      y_26 :
      if(match_cons(c_27, sym_TCons_2))
        {
          d_27 = ATgetArgument(c_27, 0);
          e_27 = ATgetArgument(c_27, 1);
          z_26 :
          if(match_cons(e_27, sym_TNil_0))
            {
              t = not_null(d_27);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(b_27);
                    return(t);
                  }
                  t = SubsVar_2(t, h_83, m_0);
                  t = i_83(t);
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
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym_Cons_2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      t = e_74(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm q_27 = NULL;
          q_27 = t;
          if(m_27 != NULL && m_27 != q_27)
            _fail(q_27);
          else
            m_27 = q_27;
          return(t);
        }
        t = fetch_1(t, n_0);
      }
      t = not_null(n_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  y_27 = t;
  u_27 :
  if(match_cons(y_27, sym_TCons_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      a_28 = ATgetArgument(y_27, 1);
      v_27 :
      if(match_cons(a_28, sym_TCons_2))
        {
          b_28 = ATgetArgument(a_28, 0);
          e_28 = ATgetArgument(a_28, 1);
          w_27 :
          if(match_cons(b_28, sym_Cons_2))
            {
              c_28 = ATgetArgument(b_28, 0);
              d_28 = ATgetArgument(b_28, 1);
              x_27 :
              if(match_cons(e_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_28), not_null(z_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  z_28 = t;
  v_28 :
  if(match_cons(z_28, sym_Cons_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      f_29 = ATgetArgument(z_28, 1);
      w_28 :
      if(match_cons(a_29, sym_TCons_2))
        {
          b_29 = ATgetArgument(a_29, 0);
          c_29 = ATgetArgument(a_29, 1);
          x_28 :
          if(match_cons(c_29, sym_TCons_2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              y_28 :
              if(match_cons(e_29, sym_TNil_0))
                {
                  ATerm j_29 = NULL,k_29 = NULL,s_29 = NULL,a_30 = NULL;
                  ATerm l_8;
                  l_8 = t;
                  {
                    ATerm l_29 = NULL;
                    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
                    t = not_null(d_29);
                    l_29 = t;
                    t = SSL_explode_term(not_null(l_29));
                    n_29 = t;
                    m_28 :
                    if(match_cons(n_29, sym_TCons_2))
                      {
                        o_29 = ATgetArgument(n_29, 0);
                        p_29 = ATgetArgument(n_29, 1);
                        n_28 :
                        if(match_cons(p_29, sym_TCons_2))
                          {
                            q_29 = ATgetArgument(p_29, 0);
                            r_29 = ATgetArgument(p_29, 1);
                            o_28 :
                            if(match_cons(r_29, sym_TNil_0))
                              {
                                if(j_29 != NULL && j_29 != o_29)
                                  _fail(o_29);
                                else
                                  j_29 = o_29;
                                if(k_29 != NULL && k_29 != q_29)
                                  _fail(q_29);
                                else
                                  k_29 = q_29;
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
                    ATerm t_29 = NULL;
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
                    t = not_null(b_29);
                    t_29 = t;
                    t = SSL_explode_term(not_null(t_29));
                    v_29 = t;
                    r_28 :
                    if(match_cons(v_29, sym_TCons_2))
                      {
                        w_29 = ATgetArgument(v_29, 0);
                        x_29 = ATgetArgument(v_29, 1);
                        s_28 :
                        if(match_cons(x_29, sym_TCons_2))
                          {
                            y_29 = ATgetArgument(x_29, 0);
                            z_29 = ATgetArgument(x_29, 1);
                            t_28 :
                            if(match_cons(z_29, sym_TNil_0))
                              {
                                if(j_29 != NULL && j_29 != w_29)
                                  _fail(w_29);
                                else
                                  j_29 = w_29;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    a_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  n_30 = t;
  j_30 :
  if(match_cons(n_30, sym_Cons_2))
    {
      o_30 = ATgetArgument(n_30, 0);
      t_30 = ATgetArgument(n_30, 1);
      k_30 :
      if(match_cons(o_30, sym_TCons_2))
        {
          p_30 = ATgetArgument(o_30, 0);
          q_30 = ATgetArgument(o_30, 1);
          l_30 :
          if(match_cons(q_30, sym_TCons_2))
            {
              r_30 = ATgetArgument(q_30, 0);
              s_30 = ATgetArgument(q_30, 1);
              m_30 :
              if(match_cons(s_30, sym_TNil_0))
                {
                  ATerm v_30 = NULL;
                  if(p_30 != NULL && p_30 != r_30)
                    _fail(r_30);
                  else
                    p_30 = r_30;
                  if(v_30 != NULL && v_30 != t_30)
                    _fail(t_30);
                  else
                    v_30 = t_30;
                  t = not_null(v_30);
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
  ATerm x_30 (ATerm t)
  {
    ATerm m_8 = t;
    if(PushChoice()==0)
      {
        t = l_68(t);
        PopChoice();
      }
    else
      {
        t = m_8;
        t = m_68(t);
        t = x_30(t);
      }
    return(t);
  }
  t = x_30(t);
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
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm d_31 = NULL;
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, r_0);
        return(t);
      }
      ATerm q_0 (ATerm t)
      {
        ATerm u_8 = t;
        if(PushChoice()==0)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                ATerm z_8 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = z_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, t_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, s_0);
            PopChoice();
          }
        else
          {
            t = u_8;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = q_8;
      {
        ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
        f_31 = t;
        a_31 :
        if(match_cons(f_31, sym_TCons_2))
          {
            g_31 = ATgetArgument(f_31, 0);
            h_31 = ATgetArgument(f_31, 1);
            b_31 :
            if(match_cons(h_31, sym_TCons_2))
              {
                i_31 = ATgetArgument(h_31, 0);
                j_31 = ATgetArgument(h_31, 1);
                c_31 :
                if(match_cons(j_31, sym_TNil_0))
                  {
                    t = not_null(g_31);
                    {
                      ATerm o_31 (ATerm t)
                      {
                        ATerm a_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = a_9;
                            {
                              ATerm j_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    t = not_null(i_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_0);
                                  t = o_31(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = j_9;
                                  t = Cons_2(t, _id, o_31);
                                }
                            }
                          }
                        return(t);
                      }
                      t = o_31(t);
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
  ATerm p_31 (ATerm t)
  {
    ATerm k_9 = t;
    if(PushChoice()==0)
      {
        t = u_81(t);
        PopChoice();
      }
    else
      {
        t = k_9;
        t = _one(t, p_31);
      }
    return(t);
  }
  t = p_31(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  v_31 = t;
  s_31 :
  if(match_cons(v_31, sym_TCons_2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      t_31 :
      if(match_cons(x_31, sym_TCons_2))
        {
          y_31 = ATgetArgument(x_31, 0);
          z_31 = ATgetArgument(x_31, 1);
          u_31 :
          if(match_cons(z_31, sym_TNil_0))
            {
              t = not_null(y_31);
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm c_32 = NULL;
                  c_32 = t;
                  if(w_31 != NULL && w_31 != c_32)
                    _fail(c_32);
                  else
                    w_31 = c_32;
                  return(t);
                }
                t = oncetd_1(t, v_0);
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
  ATerm i_32 = NULL,j_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym_Var_1))
    {
      j_32 = ATgetArgument(i_32, 0);
      {
        ATerm l_32 = NULL;
        t = not_null(j_32);
        t = t_60(t);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  h_34 = t;
  f_33 :
  if(match_cons(h_34, sym_Seq_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      l_34 = ATgetArgument(h_34, 1);
      g_33 :
      if(match_cons(i_34, sym_Build_1))
        {
          j_34 = ATgetArgument(i_34, 0);
          h_33 :
          if(match_cons(l_34, sym_Scope_2))
            {
              m_34 = ATgetArgument(l_34, 0);
              p_34 = ATgetArgument(l_34, 1);
              i_33 :
              if(match_cons(p_34, sym_Seq_2))
                {
                  b_34 = ATgetArgument(p_34, 0);
                  g_34 = ATgetArgument(p_34, 1);
                  j_33 :
                  if(match_cons(b_34, sym_Assign_1))
                    {
                      c_34 = ATgetArgument(b_34, 0);
                      k_33 :
                      if(match_cons(c_34, sym_Var_1))
                        {
                          d_34 = ATgetArgument(c_34, 0);
                          {
                            ATerm l_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm u_34 = NULL,w_34 = NULL;
                                ATerm v_34 = NULL;
                                t = not_null(j_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = diff_0(t);
                                v_34 = t;
                                if(u_34 != NULL && u_34 != v_34)
                                  _fail(v_34);
                                else
                                  u_34 = v_34;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                t = tsubs_0(t);
                                w_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_34), not_null(w_34)));
                                PopChoice();
                              }
                            else
                              {
                                t = l_9;
                                {
                                  ATerm c_35 = NULL,f_35 = NULL;
                                  ATerm d_35 = NULL;
                                  t = not_null(j_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  d_35 = t;
                                  if(c_35 != NULL && c_35 != d_35)
                                    _fail(d_35);
                                  else
                                    c_35 = d_35;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  f_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_35), not_null(f_35)));
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
          if(match_cons(i_34, sym_Assign_1))
            {
              j_34 = ATgetArgument(i_34, 0);
              l_33 :
              if(match_cons(j_34, sym_Var_1))
                {
                  k_34 = ATgetArgument(j_34, 0);
                  m_33 :
                  if(match_cons(l_34, sym_Seq_2))
                    {
                      m_34 = ATgetArgument(l_34, 0);
                      p_34 = ATgetArgument(l_34, 1);
                      n_33 :
                      if(match_cons(m_34, sym_Build_1))
                        {
                          n_34 = ATgetArgument(m_34, 0);
                          o_33 :
                          if(match_cons(n_34, sym_Var_1))
                            {
                              o_34 = ATgetArgument(n_34, 0);
                              {
                                ATerm g_36 = NULL;
                                if(k_34 != NULL && k_34 != o_34)
                                  _fail(o_34);
                                else
                                  k_34 = o_34;
                                if(g_36 != NULL && g_36 != p_34)
                                  _fail(p_34);
                                else
                                  g_36 = p_34;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34))), not_null(g_36));
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
      if(match_cons(h_34, sym_Scope_2))
        {
          i_34 = ATgetArgument(h_34, 0);
          l_34 = ATgetArgument(h_34, 1);
          p_33 :
          if(match_cons(l_34, sym_Seq_2))
            {
              m_34 = ATgetArgument(l_34, 0);
              p_34 = ATgetArgument(l_34, 1);
              q_33 :
              if(match_cons(m_34, sym_Assign_2))
                {
                  n_34 = ATgetArgument(m_34, 0);
                  z_33 = ATgetArgument(m_34, 1);
                  r_33 :
                  if(match_cons(n_34, sym_Var_1))
                    {
                      o_34 = ATgetArgument(n_34, 0);
                      s_33 :
                      if(match_cons(z_33, sym_Var_1))
                        {
                          a_34 = ATgetArgument(z_33, 0);
                          {
                            ATerm l_35 = NULL,n_35 = NULL;
                            ATerm m_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = diff_0(t);
                            m_35 = t;
                            if(l_35 != NULL && l_35 != m_35)
                              _fail(m_35);
                            else
                              l_35 = m_35;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                            t = tsubs_0(t);
                            n_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_35), not_null(n_35));
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
                  if(match_cons(m_34, sym_Assign_1))
                    {
                      n_34 = ATgetArgument(m_34, 0);
                      t_33 :
                      if(match_cons(n_34, sym_Var_1))
                        {
                          o_34 = ATgetArgument(n_34, 0);
                          u_33 :
                          if(match_cons(p_34, sym_Seq_2))
                            {
                              b_34 = ATgetArgument(p_34, 0);
                              g_34 = ATgetArgument(p_34, 1);
                              v_33 :
                              if(match_cons(b_34, sym_Assign_1))
                                {
                                  c_34 = ATgetArgument(b_34, 0);
                                  w_33 :
                                  if(match_cons(c_34, sym_Var_1))
                                    {
                                      d_34 = ATgetArgument(c_34, 0);
                                      {
                                        ATerm t_35 = NULL,v_35 = NULL;
                                        ATerm u_35 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        u_35 = t;
                                        if(t_35 != NULL && t_35 != u_35)
                                          _fail(u_35);
                                        else
                                          t_35 = u_35;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = tsubs_0(t);
                                        v_35 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))), not_null(v_35)));
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(b_34, sym_Assign_2))
                                    {
                                      c_34 = ATgetArgument(b_34, 0);
                                      e_34 = ATgetArgument(b_34, 1);
                                      x_33 :
                                      if(match_cons(c_34, sym_Var_1))
                                        {
                                          d_34 = ATgetArgument(c_34, 0);
                                          y_33 :
                                          if(match_cons(e_34, sym_Var_1))
                                            {
                                              f_34 = ATgetArgument(e_34, 0);
                                              {
                                                ATerm a_36 = NULL,b_36 = NULL,d_36 = NULL;
                                                if(o_34 != NULL && o_34 != f_34)
                                                  _fail(f_34);
                                                else
                                                  o_34 = f_34;
                                                if(a_36 != NULL && a_36 != g_34)
                                                  _fail(g_34);
                                                else
                                                  a_36 = g_34;
                                                {
                                                  ATerm c_36 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = in_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = diff_0(t);
                                                  c_36 = t;
                                                  if(b_36 != NULL && b_36 != c_36)
                                                    _fail(c_36);
                                                  else
                                                    b_36 = c_36;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = tsubs_0(t);
                                                  d_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))), not_null(d_36)));
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
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  a_37 = t;
  y_36 :
  if(match_cons(a_37, sym_Seq_2))
    {
      b_37 = ATgetArgument(a_37, 0);
      c_37 = ATgetArgument(a_37, 1);
      z_36 :
      if(match_cons(c_37, sym_Let_2))
        {
          d_37 = ATgetArgument(c_37, 0);
          e_37 = ATgetArgument(c_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_37), not_null(e_37)));
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
  ATerm j_37 (ATerm t)
  {
    ATerm s_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, j_37);
        PopChoice();
      }
    else
      {
        t = s_9;
        t = Nil_0(t);
        t = b_78(t);
      }
    return(t);
  }
  t = j_37(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  q_37 = t;
  n_37 :
  if(match_cons(q_37, sym_TCons_2))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      o_37 :
      if(match_cons(s_37, sym_TCons_2))
        {
          t_37 = ATgetArgument(s_37, 0);
          u_37 = ATgetArgument(s_37, 1);
          p_37 :
          if(match_cons(u_37, sym_TNil_0))
            {
              t = not_null(r_37);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(t_37);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  c_38 = t;
  z_37 :
  if(match_cons(c_38, sym_TCons_2))
    {
      d_38 = ATgetArgument(c_38, 0);
      e_38 = ATgetArgument(c_38, 1);
      a_38 :
      if(match_cons(e_38, sym_TCons_2))
        {
          f_38 = ATgetArgument(e_38, 0);
          g_38 = ATgetArgument(e_38, 1);
          b_38 :
          if(match_cons(g_38, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_38), not_null(f_38));
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
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,g_39 = NULL,h_39 = NULL,k_39 = NULL;
  u_38 = t;
  p_38 :
  if(match_cons(u_38, sym_TCons_2))
    {
      v_38 = ATgetArgument(u_38, 0);
      a_39 = ATgetArgument(u_38, 1);
      q_38 :
      if(match_cons(v_38, sym_Cons_2))
        {
          w_38 = ATgetArgument(v_38, 0);
          z_38 = ATgetArgument(v_38, 1);
          r_38 :
          if(match_cons(a_39, sym_TCons_2))
            {
              b_39 = ATgetArgument(a_39, 0);
              k_39 = ATgetArgument(a_39, 1);
              s_38 :
              if(match_cons(b_39, sym_Cons_2))
                {
                  g_39 = ATgetArgument(b_39, 0);
                  h_39 = ATgetArgument(b_39, 1);
                  t_38 :
                  if(match_cons(k_39, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(w_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(z_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_39 = NULL,y_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  x_39 = t;
  s_39 :
  if(match_cons(x_39, sym_TCons_2))
    {
      y_39 = ATgetArgument(x_39, 0);
      d_40 = ATgetArgument(x_39, 1);
      t_39 :
      if(match_cons(y_39, sym_Nil_0))
        {
          u_39 :
          if(match_cons(d_40, sym_TCons_2))
            {
              e_40 = ATgetArgument(d_40, 0);
              f_40 = ATgetArgument(d_40, 1);
              v_39 :
              if(match_cons(e_40, sym_Nil_0))
                {
                  w_39 :
                  if(match_cons(f_40, sym_TNil_0))
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
  ATerm h_40 (ATerm t)
  {
    ATerm t_9 = t;
    if(PushChoice()==0)
      {
        t = w_75(t);
        PopChoice();
      }
    else
      {
        t = t_9;
        t = x_75(t);
        {
          ATerm x_0 (ATerm t)
          {
            t = TCons_2(t, h_40, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_75, x_0);
          t = y_75(t);
        }
      }
    return(t);
  }
  t = h_40(t);
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
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Cong_2))
    {
      d_41 = ATgetArgument(c_41, 0);
      e_41 = ATgetArgument(c_41, 1);
      {
        ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,j_42 = NULL;
        ATerm m_41 = NULL;
        t = not_null(e_41);
        {
          ATerm p_41 = NULL;
          t = map_1(t, new_0);
          m_41 = t;
          if(j_41 != NULL && j_41 != m_41)
            _fail(m_41);
          else
            j_41 = m_41;
          t = not_null(j_41);
          {
            ATerm q_41 = NULL;
            ATerm y_0 (ATerm t)
            {
              ATerm n_41 = NULL;
              n_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_41));
              return(t);
            }
            t = map_1(t, y_0);
            p_41 = t;
            if(h_41 != NULL && h_41 != p_41)
              _fail(p_41);
            else
              h_41 = p_41;
            t = not_null(e_41);
            {
              ATerm t_41 = NULL;
              t = map_1(t, new_0);
              q_41 = t;
              if(k_41 != NULL && k_41 != q_41)
                _fail(q_41);
              else
                k_41 = q_41;
              t = not_null(k_41);
              {
                ATerm u_41 = NULL;
                ATerm z_0 (ATerm t)
                {
                  ATerm r_41 = NULL;
                  r_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_41));
                  return(t);
                }
                t = map_1(t, z_0);
                t_41 = t;
                if(i_41 != NULL && i_41 != t_41)
                  _fail(t_41);
                else
                  i_41 = t_41;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm i_42 = NULL;
                  t = zip_1(t, _id);
                  u_41 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
                      w_41 = t;
                      t_40 :
                      if(match_cons(w_41, sym_TCons_2))
                        {
                          x_41 = ATgetArgument(w_41, 0);
                          c_42 = ATgetArgument(w_41, 1);
                          u_40 :
                          if(match_cons(x_41, sym_TCons_2))
                            {
                              y_41 = ATgetArgument(x_41, 0);
                              z_41 = ATgetArgument(x_41, 1);
                              v_40 :
                              if(match_cons(z_41, sym_TCons_2))
                                {
                                  a_42 = ATgetArgument(z_41, 0);
                                  b_42 = ATgetArgument(z_41, 1);
                                  w_40 :
                                  if(match_cons(b_42, sym_TNil_0))
                                    {
                                      x_40 :
                                      if(match_cons(c_42, sym_TCons_2))
                                        {
                                          d_42 = ATgetArgument(c_42, 0);
                                          e_42 = ATgetArgument(c_42, 1);
                                          y_40 :
                                          if(match_cons(e_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_41))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_42)))));
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
                    t = zip_1(t, a_1);
                    i_42 = t;
                    if(l_41 != NULL && l_41 != i_42)
                      _fail(i_42);
                    else
                      l_41 = i_42;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        j_42 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_41), not_null(h_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_41)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_41), not_null(i_41))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_Cong_2))
    {
      d_43 = ATgetArgument(c_43, 0);
      e_43 = ATgetArgument(c_43, 1);
      {
        ATerm h_43 = NULL;
        ATerm l_43 = NULL;
        t = not_null(e_43);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm i_43 = NULL,j_43 = NULL;
            j_43 = t;
            z_42 :
            if(match_cons(j_43, sym_Match_1))
              {
                i_43 = ATgetArgument(j_43, 0);
                t = not_null(i_43);
              }
            else
              {
                if(match_cons(j_43, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_1);
          l_43 = t;
          if(h_43 != NULL && h_43 != l_43)
            _fail(l_43);
          else
            h_43 = l_43;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_43), not_null(h_43)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  t_43 :
  if(match_cons(v_43, sym_Scope_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      u_43 :
      if(match_cons(w_43, sym_Nil_0))
        t = not_null(x_43);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  p_44 = t;
  g_44 :
  if(match_cons(p_44, sym_Choice_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      o_44 = ATgetArgument(p_44, 1);
      if(q_44 != NULL && q_44 != o_44)
        _fail(o_44);
      else
        q_44 = o_44;
      t = not_null(q_44);
    }
  else
    {
      if(match_cons(p_44, sym_LChoice_2))
        {
          q_44 = ATgetArgument(p_44, 0);
          o_44 = ATgetArgument(p_44, 1);
          if(q_44 != NULL && q_44 != o_44)
            _fail(o_44);
          else
            q_44 = o_44;
          t = not_null(q_44);
        }
      else
        {
          if(match_cons(p_44, sym_Where_1))
            {
              q_44 = ATgetArgument(p_44, 0);
              h_44 :
              if(match_cons(q_44, sym_Where_1))
                {
                  r_44 = ATgetArgument(q_44, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(r_44));
                }
              else
                {
                  if(match_cons(q_44, sym_Seq_2))
                    {
                      r_44 = ATgetArgument(q_44, 0);
                      t_44 = ATgetArgument(q_44, 1);
                      i_44 :
                      if(match_cons(r_44, sym_Where_1))
                        {
                          s_44 = ATgetArgument(r_44, 0);
                          k_44 :
                          if(match_cons(t_44, sym_Seq_2))
                            {
                              u_44 = ATgetArgument(t_44, 0);
                              w_44 = ATgetArgument(t_44, 1);
                              l_44 :
                              if(match_cons(u_44, sym_Build_1))
                                {
                                  v_44 = ATgetArgument(u_44, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_44)), not_null(w_44))));
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
              if(match_cons(p_44, sym_Not_1))
                {
                  q_44 = ATgetArgument(p_44, 0);
                  m_44 :
                  if(match_cons(q_44, sym_Not_1))
                    {
                      r_44 = ATgetArgument(q_44, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(r_44));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_44, sym_Test_1))
                    {
                      q_44 = ATgetArgument(p_44, 0);
                      n_44 :
                      if(match_cons(q_44, sym_Test_1))
                        {
                          r_44 = ATgetArgument(q_44, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(r_44));
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
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  l_46 = t;
  g_46 :
  if(match_cons(l_46, sym_Choice_2))
    {
      m_46 = ATgetArgument(l_46, 0);
      p_46 = ATgetArgument(l_46, 1);
      i_46 :
      if(match_cons(m_46, sym_Choice_2))
        {
          n_46 = ATgetArgument(m_46, 0);
          o_46 = ATgetArgument(m_46, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_46), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_46), not_null(p_46)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(l_46, sym_Seq_2))
        {
          m_46 = ATgetArgument(l_46, 0);
          p_46 = ATgetArgument(l_46, 1);
          j_46 :
          if(match_cons(m_46, sym_Seq_2))
            {
              n_46 = ATgetArgument(m_46, 0);
              o_46 = ATgetArgument(m_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_46), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_46), not_null(p_46)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(l_46, sym_LChoice_2))
            {
              m_46 = ATgetArgument(l_46, 0);
              p_46 = ATgetArgument(l_46, 1);
              k_46 :
              if(match_cons(m_46, sym_LChoice_2))
                {
                  n_46 = ATgetArgument(m_46, 0);
                  o_46 = ATgetArgument(m_46, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_46), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_46), not_null(p_46)));
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
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  o_48 = t;
  i_48 :
  if(match_cons(o_48, sym_Seqs_1))
    {
      p_48 = ATgetArgument(o_48, 0);
      j_48 :
      if(match_cons(p_48, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(p_48, sym_Cons_2))
            {
              m_48 = ATgetArgument(p_48, 0);
              n_48 = ATgetArgument(p_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_48)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(o_48, sym_Choices_1))
        {
          p_48 = ATgetArgument(o_48, 0);
          k_48 :
          if(match_cons(p_48, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(p_48, sym_Cons_2))
                {
                  m_48 = ATgetArgument(p_48, 0);
                  n_48 = ATgetArgument(p_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(n_48)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(o_48, sym_LChoices_1))
            {
              p_48 = ATgetArgument(o_48, 0);
              l_48 :
              if(match_cons(p_48, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(p_48, sym_Cons_2))
                    {
                      m_48 = ATgetArgument(p_48, 0);
                      n_48 = ATgetArgument(p_48, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_48)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(o_48, sym_Lets_2))
                {
                  p_48 = ATgetArgument(o_48, 0);
                  q_48 = ATgetArgument(o_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_48), not_null(q_48));
                }
              else
                {
                  if(match_cons(o_48, sym_BA_2))
                    {
                      p_48 = ATgetArgument(o_48, 0);
                      q_48 = ATgetArgument(o_48, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_48)), not_null(p_48));
                    }
                  else
                    {
                      if(match_cons(o_48, sym_MA_2))
                        {
                          p_48 = ATgetArgument(o_48, 0);
                          q_48 = ATgetArgument(o_48, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_48)), not_null(q_48));
                        }
                      else
                        {
                          if(match_cons(o_48, sym_AM_2))
                            {
                              p_48 = ATgetArgument(o_48, 0);
                              q_48 = ATgetArgument(o_48, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_48)));
                            }
                          else
                            {
                              if(match_cons(o_48, sym_BAM_3))
                                {
                                  p_48 = ATgetArgument(o_48, 0);
                                  q_48 = ATgetArgument(o_48, 1);
                                  r_48 = ATgetArgument(o_48, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_48)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_48)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(o_48, sym_InfixApp_3))
                                    {
                                      p_48 = ATgetArgument(o_48, 0);
                                      q_48 = ATgetArgument(o_48, 1);
                                      r_48 = ATgetArgument(o_48, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_48), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  z_49 :
  if(match_cons(b_50, sym_Where_1))
    {
      c_50 = ATgetArgument(b_50, 0);
      a_50 :
      if(match_cons(c_50, sym_Fail_0))
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
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  f_50 :
  if(match_cons(h_50, sym_LChoice_2))
    {
      i_50 = ATgetArgument(h_50, 0);
      j_50 = ATgetArgument(h_50, 1);
      g_50 :
      if(match_cons(j_50, sym_Fail_0))
        t = not_null(i_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  n_50 :
  if(match_cons(p_50, sym_LChoice_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      o_50 :
      if(match_cons(q_50, sym_Fail_0))
        t = not_null(r_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  v_50 :
  if(match_cons(x_50, sym_Choice_2))
    {
      y_50 = ATgetArgument(x_50, 0);
      z_50 = ATgetArgument(x_50, 1);
      w_50 :
      if(match_cons(z_50, sym_Fail_0))
        t = not_null(y_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  f_51 = t;
  d_51 :
  if(match_cons(f_51, sym_Choice_2))
    {
      g_51 = ATgetArgument(f_51, 0);
      h_51 = ATgetArgument(f_51, 1);
      e_51 :
      if(match_cons(g_51, sym_Fail_0))
        t = not_null(h_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  n_51 = t;
  m_51 :
  if(match_cons(n_51, sym_Cong_2))
    {
      o_51 = ATgetArgument(n_51, 0);
      p_51 = ATgetArgument(n_51, 1);
      t = not_null(p_51);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm s_51 = NULL;
          s_51 = t;
          l_51 :
          if(!(match_cons(s_51, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, c_1);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  v_51 :
  if(match_cons(x_51, sym_Path_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      w_51 :
      if(match_cons(z_51, sym_Fail_0))
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
  ATerm f_52 = NULL,g_52 = NULL;
  f_52 = t;
  d_52 :
  if(match_cons(f_52, sym_One_1))
    {
      g_52 = ATgetArgument(f_52, 0);
      e_52 :
      if(match_cons(g_52, sym_Fail_0))
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
  ATerm l_52 = NULL,m_52 = NULL;
  l_52 = t;
  j_52 :
  if(match_cons(l_52, sym_Some_1))
    {
      m_52 = ATgetArgument(l_52, 0);
      k_52 :
      if(match_cons(m_52, sym_Fail_0))
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
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  p_52 :
  if(match_cons(r_52, sym_Rec_2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      q_52 :
      if(match_cons(t_52, sym_Fail_0))
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
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  x_52 :
  if(match_cons(z_52, sym_Scope_2))
    {
      a_53 = ATgetArgument(z_52, 0);
      b_53 = ATgetArgument(z_52, 1);
      y_52 :
      if(match_cons(b_53, sym_Fail_0))
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
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
  h_53 = t;
  f_53 :
  if(match_cons(h_53, sym_Seq_2))
    {
      i_53 = ATgetArgument(h_53, 0);
      j_53 = ATgetArgument(h_53, 1);
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
ATerm F2_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  p_53 = t;
  n_53 :
  if(match_cons(p_53, sym_Not_1))
    {
      q_53 = ATgetArgument(p_53, 0);
      o_53 :
      if(match_cons(q_53, sym_Fail_0))
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
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  t_53 :
  if(match_cons(v_53, sym_Test_1))
    {
      w_53 = ATgetArgument(v_53, 0);
      u_53 :
      if(match_cons(w_53, sym_Fail_0))
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
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = v_9;
            {
              ATerm w_9 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = w_9;
                  {
                    ATerm x_9 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm y_9 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = y_9;
                              {
                                ATerm q_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_10;
                                    {
                                      ATerm r_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_10;
                                          {
                                            ATerm s_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = s_10;
                                                {
                                                  ATerm t_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      {
                                                        ATerm u_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = u_10;
                                                            {
                                                              ATerm v_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = v_10;
                                                                  {
                                                                    ATerm w_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_10;
                                                                        {
                                                                          ATerm x_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_10;
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
  ATerm b_54 = NULL,c_54 = NULL;
  b_54 = t;
  z_53 :
  if(match_cons(b_54, sym_Match_1))
    {
      c_54 = ATgetArgument(b_54, 0);
      a_54 :
      if(match_cons(c_54, sym_Wld_0))
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
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  f_54 :
  if(match_cons(h_54, sym_Where_1))
    {
      i_54 = ATgetArgument(h_54, 0);
      g_54 :
      if(match_cons(i_54, sym_Id_0))
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
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  l_54 :
  if(match_cons(n_54, sym_All_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      m_54 :
      if(match_cons(o_54, sym_Id_0))
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
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  r_54 :
  if(match_cons(t_54, sym_Rec_2))
    {
      u_54 = ATgetArgument(t_54, 0);
      v_54 = ATgetArgument(t_54, 1);
      s_54 :
      if(match_cons(v_54, sym_Id_0))
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
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  z_54 :
  if(match_cons(b_55, sym_Scope_2))
    {
      c_55 = ATgetArgument(b_55, 0);
      d_55 = ATgetArgument(b_55, 1);
      a_55 :
      if(match_cons(d_55, sym_Id_0))
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
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  h_55 :
  if(match_cons(j_55, sym_LChoice_2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
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
ATerm I4_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  p_55 :
  if(match_cons(r_55, sym_Seq_2))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      q_55 :
      if(match_cons(t_55, sym_Id_0))
        t = not_null(s_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  z_55 = t;
  x_55 :
  if(match_cons(z_55, sym_Seq_2))
    {
      a_56 = ATgetArgument(z_55, 0);
      b_56 = ATgetArgument(z_55, 1);
      y_55 :
      if(match_cons(a_56, sym_Id_0))
        t = not_null(b_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  h_56 = t;
  f_56 :
  if(match_cons(h_56, sym_Not_1))
    {
      i_56 = ATgetArgument(h_56, 0);
      g_56 :
      if(match_cons(i_56, sym_Id_0))
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
  ATerm n_56 = NULL,o_56 = NULL;
  n_56 = t;
  l_56 :
  if(match_cons(n_56, sym_Test_1))
    {
      o_56 = ATgetArgument(n_56, 0);
      m_56 :
      if(match_cons(o_56, sym_Id_0))
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
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = y_10;
      {
        ATerm z_10 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = z_10;
            {
              ATerm p_11 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_11;
                  {
                    ATerm q_11 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_11;
                        {
                          ATerm r_11 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_11;
                              {
                                ATerm s_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_11;
                                    {
                                      ATerm t_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_11;
                                          {
                                            ATerm u_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_11;
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
  ATerm w_11 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = w_11;
      {
        ATerm a_12 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = a_12;
            {
              ATerm t_12 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = t_12;
                  {
                    ATerm u_12 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = u_12;
                        {
                          ATerm b_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm c_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_13;
                                    {
                                      ATerm d_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_13;
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
  ATerm e_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = e_13;
      {
        ATerm f_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = f_13;
            {
              ATerm g_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = g_13;
                  {
                    ATerm h_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_13;
                        {
                          ATerm i_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_13;
                              {
                                ATerm j_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_13;
                                    {
                                      ATerm k_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_13;
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
  ATerm q_56 (ATerm t)
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        t = u_67(t);
        t = q_56(t);
        PopChoice();
      }
    else
      {
        t = l_13;
        t = v_67(t);
      }
    return(t);
  }
  t = q_56(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_67 (ATerm))
{
  t = repeat_2(t, x_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm r_56 (ATerm t)
  {
    t = i_80(t);
    t = _all(t, r_56);
    t = i_80(t);
    return(t);
  }
  t = r_56(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm m_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = m_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, m_1);
    return(t);
  }
  t = downup_1(t, d_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  y_56 = t;
  w_56 :
  if(match_cons(y_56, sym_SDef_3))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      b_57 = ATgetArgument(y_56, 2);
      {
        ATerm f_57 = NULL;
        t = not_null(z_56);
        {
          ATerm h_57 = NULL;
          t = m_61(t);
          f_57 = t;
          t = not_null(a_57);
          {
            ATerm j_57 = NULL;
            t = n_61(t);
            h_57 = t;
            t = not_null(b_57);
            t = o_61(t);
            j_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_57), not_null(h_57), not_null(j_57));
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
  ATerm p_57 (ATerm t)
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = n_13;
        t = Cons_2(t, m_77, p_57);
      }
    return(t);
  }
  t = p_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm t_57 = NULL,u_57 = NULL;
  t_57 = t;
  s_57 :
  if(match_cons(t_57, sym_Strategies_1))
    {
      u_57 = ATgetArgument(t_57, 0);
      {
        ATerm w_57 = NULL;
        t = not_null(u_57);
        t = h_60(t);
        w_57 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_57));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm d_58 = NULL,e_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym_Specification_1))
    {
      e_58 = ATgetArgument(d_58, 0);
      {
        ATerm g_58 = NULL;
        t = not_null(e_58);
        t = j_60(t);
        g_58 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(g_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          ATerm s_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, z_84);
            return(t);
          }
          t = map_1(t, s_1);
          return(t);
        }
        t = Strategies_1(t, r_1);
        return(t);
      }
      t = Cons_2(t, q_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, p_1);
    return(t);
  }
  t = Specification_1(t, n_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  k_58 :
  if(!(match_cons(l_58, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym_TCons_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm v_58 = NULL;
        t = not_null(r_58);
        {
          ATerm x_58 = NULL;
          t = r_62(t);
          v_58 = t;
          t = not_null(s_58);
          t = s_62(t);
          x_58 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_58), not_null(x_58));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm e_59 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm f_59 = NULL,g_59 = NULL;
      f_59 = t;
      d_59 :
      if(match_cons(f_59, sym_Program_1))
        {
          g_59 = ATgetArgument(f_59, 0);
          if(e_59 != NULL && e_59 != g_59)
            _fail(g_59);
          else
            e_59 = g_59;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_1);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = o_13;
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
  ATerm j_59 = NULL;
  j_59 = t;
  t = SSL_exit(not_null(j_59));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  q_59 = t;
  n_59 :
  if(match_cons(q_59, sym_TCons_2))
    {
      r_59 = ATgetArgument(q_59, 0);
      s_59 = ATgetArgument(q_59, 1);
      o_59 :
      if(match_cons(s_59, sym_TCons_2))
        {
          t_59 = ATgetArgument(s_59, 0);
          u_59 = ATgetArgument(s_59, 1);
          p_59 :
          if(match_cons(u_59, sym_TNil_0))
            {
              ATerm p_13;
              p_13 = t;
              t = SSL_printnl(not_null(r_59), not_null(t_59));
              t = p_13;
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
  ATerm q_13 = t;
  if(PushChoice()==0)
    {
      t = t_79(t);
      PopChoice();
    }
  else
    t = q_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm r_13 = t;
      if(PushChoice()==0)
        {
          ATerm b_2 (ATerm t)
          {
            ATerm g_60 = NULL;
            g_60 = t;
            z_59 :
            if(!(match_cons(g_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_2);
          PopChoice();
          _fail(t);
        }
      else
        t = r_13;
      return(t);
    }
    ATerm a_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_1, a_2);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm i_60 = NULL,k_60 = NULL;
          i_60 = t;
          b_60 :
          if(match_cons(i_60, sym_Runtime_1))
            {
              k_60 = ATgetArgument(i_60, 0);
              if(f_60 != NULL && f_60 != k_60)
                _fail(k_60);
              else
                f_60 = k_60;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_2);
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, c_2, d_2);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm l_60 = NULL,m_60 = NULL;
            l_60 = t;
            d_60 :
            if(match_cons(l_60, sym_Program_1))
              {
                m_60 = ATgetArgument(l_60, 0);
                if(e_60 != NULL && e_60 != m_60)
                  _fail(m_60);
                else
                  e_60 = m_60;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_2);
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, j_2, k_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, x_1);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  u_60 = t;
  q_60 :
  if(match_cons(u_60, sym_TCons_2))
    {
      v_60 = ATgetArgument(u_60, 0);
      w_60 = ATgetArgument(u_60, 1);
      r_60 :
      if(match_cons(w_60, sym_TCons_2))
        {
          x_60 = ATgetArgument(w_60, 0);
          y_60 = ATgetArgument(w_60, 1);
          s_60 :
          if(match_cons(y_60, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(v_60), not_null(x_60));
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
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
  g_61 = t;
  d_61 :
  if(match_cons(g_61, sym_TCons_2))
    {
      h_61 = ATgetArgument(g_61, 0);
      i_61 = ATgetArgument(g_61, 1);
      e_61 :
      if(match_cons(i_61, sym_TCons_2))
        {
          j_61 = ATgetArgument(i_61, 0);
          k_61 = ATgetArgument(i_61, 1);
          f_61 :
          if(match_cons(k_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(h_61), not_null(j_61));
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
  ATerm v_61 = NULL;
  ATerm s_13;
  s_13 = t;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm t_13 = t;
      if(PushChoice()==0)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm w_61 = NULL,x_61 = NULL;
            w_61 = t;
            s_61 :
            if(match_cons(w_61, sym_Output_1))
              {
                x_61 = ATgetArgument(w_61, 0);
                if(v_61 != NULL && v_61 != x_61)
                  _fail(x_61);
                else
                  v_61 = x_61;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_2);
          PopChoice();
        }
      else
        {
          t = t_13;
          {
            ATerm y_61 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            y_61 = t;
            if(v_61 != NULL && v_61 != y_61)
              _fail(y_61);
            else
              v_61 = y_61;
          }
        }
      return(t);
    }
    ATerm p_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, o_2, p_2);
  }
  t = s_13;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          t = not_null(v_61);
          return(t);
        }
        t = split_2(t, w_2, _id);
        return(t);
      }
      t = TCons_2(t, s_2, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, r_2);
    {
      ATerm u_13 = t;
      if(PushChoice()==0)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm z_61 = NULL;
              z_61 = t;
              u_61 :
              if(!(match_cons(z_61, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, z_2);
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, x_2, y_2);
          PopChoice();
        }
      else
        {
          t = u_13;
          {
            ATerm i_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, i_3);
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
  ATerm h_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,o_62 = NULL,p_62 = NULL;
  ATerm v_13;
  v_13 = t;
  t = dtime_0(t);
  t = v_13;
  t = x_65(t);
  {
    ATerm w_13;
    w_13 = t;
    {
      ATerm i_62 = NULL;
      t = dtime_0(t);
      i_62 = t;
      if(h_62 != NULL && h_62 != i_62)
        _fail(i_62);
      else
        h_62 = i_62;
    }
    t = w_13;
    j_62 = t;
    e_62 :
    if(match_cons(j_62, sym_TCons_2))
      {
        k_62 = ATgetArgument(j_62, 0);
        l_62 = ATgetArgument(j_62, 1);
        f_62 :
        if(match_cons(l_62, sym_TCons_2))
          {
            o_62 = ATgetArgument(l_62, 0);
            p_62 = ATgetArgument(l_62, 1);
            g_62 :
            if(match_cons(p_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(h_62)), not_null(k_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_62 = NULL;
  z_62 = t;
  t = SSL_ReadFromFile(not_null(z_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm f_63 = NULL;
  ATerm h_63 = NULL;
  f_63 = t;
  {
    ATerm j_63 = NULL;
    t = b_79(t);
    h_63 = t;
    t = not_null(f_63);
    t = c_79(t);
    j_63 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_63), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_63 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm y_13 = t;
    if(PushChoice()==0)
      {
        ATerm j_3 (ATerm t)
        {
          ATerm s_63 = NULL,t_63 = NULL;
          s_63 = t;
          p_63 :
          if(match_cons(s_63, sym_Input_1))
            {
              t_63 = ATgetArgument(s_63, 0);
              if(r_63 != NULL && r_63 != t_63)
                _fail(t_63);
              else
                r_63 = t_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_3);
        PopChoice();
      }
    else
      {
        t = y_13;
        {
          ATerm u_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_63 = t;
          if(r_63 != NULL && r_63 != u_63)
            _fail(u_63);
          else
            r_63 = u_63;
        }
      }
  }
  t = x_13;
  {
    ATerm k_3 (ATerm t)
    {
      t = not_null(r_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_63 = NULL;
  y_63 = t;
  x_63 :
  if(!(match_cons(y_63, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  b_64 :
  if(match_cons(c_64, sym_Undefined_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      {
        ATerm f_64 = NULL;
        t = not_null(d_64);
        t = x_56(t);
        f_64 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_64));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_64 = NULL;
  k_64 = t;
  j_64 :
  if(!(match_cons(k_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm l_64 (ATerm t)
  {
    ATerm z_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, v_77, _id);
        PopChoice();
      }
    else
      {
        t = z_13;
        t = Cons_2(t, _id, l_64);
      }
    return(t);
  }
  t = l_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_65 (ATerm))
{
  t = fetch_1(t, b_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = a_14;
        {
          ATerm b_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = b_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_3);
  t = w_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_64 = NULL,y_64 = NULL,z_64 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm a_65 = NULL,c_65 = NULL,e_65 = NULL,f_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL;
    a_65 = t;
    n_64 :
    if(match_cons(a_65, sym_TCons_2))
      {
        c_65 = ATgetArgument(a_65, 0);
        e_65 = ATgetArgument(a_65, 1);
        o_64 :
        if(match_cons(e_65, sym_TCons_2))
          {
            f_65 = ATgetArgument(e_65, 0);
            i_65 = ATgetArgument(e_65, 1);
            p_64 :
            if(match_cons(i_65, sym_TCons_2))
              {
                j_65 = ATgetArgument(i_65, 0);
                k_65 = ATgetArgument(i_65, 1);
                q_64 :
                if(match_cons(k_65, sym_TNil_0))
                  {
                    if(r_64 != NULL && r_64 != c_65)
                      _fail(c_65);
                    else
                      r_64 = c_65;
                    if(y_64 != NULL && y_64 != f_65)
                      _fail(f_65);
                    else
                      y_64 = f_65;
                    if(z_64 != NULL && z_64 != j_65)
                      _fail(j_65);
                    else
                      z_64 = j_65;
                    t = SSL_table_put(not_null(r_64), not_null(y_64), not_null(z_64));
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
  t = c_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  t = SSL_table_create(not_null(q_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  {
    ATerm d_14;
    d_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_65), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = d_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym_Cons_2))
    {
      d_66 = ATgetArgument(c_66, 0);
      e_66 = ATgetArgument(c_66, 1);
      {
        ATerm h_66 = NULL;
        t = not_null(d_66);
        t = u_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = v_64(t);
        h_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_66), not_null(e_66));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  p_66 = t;
  n_66 :
  if(match_cons(p_66, sym_Cons_2))
    {
      q_66 = ATgetArgument(p_66, 0);
      r_66 = ATgetArgument(p_66, 1);
      o_66 :
      if(match_cons(r_66, sym_Cons_2))
        {
          s_66 = ATgetArgument(r_66, 0);
          t_66 = ATgetArgument(r_66, 1);
          {
            ATerm x_66 = NULL;
            t = not_null(q_66);
            t = w_64(t);
            t = not_null(s_66);
            t = x_64(t);
            x_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_66), not_null(t_66));
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
  ATerm e_14 = t;
  if(PushChoice()==0)
    {
      ATerm m_3 (ATerm t)
      {
        ATerm z_67 = NULL;
        z_67 = t;
        b_67 :
        if(!(match_string(z_67, "-S")))
          _fail(t);
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, m_3, n_3);
      PopChoice();
    }
  else
    {
      t = e_14;
      {
        ATerm f_14 = t;
        if(PushChoice()==0)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm a_68 = NULL;
              a_68 = t;
              c_67 :
              if(!(match_string(a_68, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, o_3, p_3);
            PopChoice();
          }
        else
          {
            t = f_14;
            {
              ATerm g_14 = t;
              if(PushChoice()==0)
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm b_68 = NULL;
                    b_68 = t;
                    d_67 :
                    if(!(match_string(b_68, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, t_3, u_3);
                  PopChoice();
                }
              else
                {
                  t = g_14;
                  {
                    ATerm h_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm v_3 (ATerm t)
                        {
                          ATerm c_68 = NULL;
                          c_68 = t;
                          e_67 :
                          if(!(match_string(c_68, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, v_3, e_4);
                        PopChoice();
                      }
                    else
                      {
                        t = h_14;
                        {
                          ATerm i_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_4 (ATerm t)
                              {
                                ATerm d_68 = NULL;
                                d_68 = t;
                                f_67 :
                                if(!(match_string(d_68, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, f_4, g_4);
                              PopChoice();
                            }
                          else
                            {
                              t = i_14;
                              {
                                ATerm j_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_4 (ATerm t)
                                    {
                                      ATerm e_68 = NULL;
                                      e_68 = t;
                                      g_67 :
                                      if(!(match_string(e_68, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm f_68 = NULL;
                                      f_68 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(f_68));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, i_4, j_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = j_14;
                                    {
                                      ATerm k_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm h_68 = NULL;
                                            h_68 = t;
                                            i_67 :
                                            if(!(match_string(h_68, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            ATerm i_68 = NULL;
                                            i_68 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_68));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, k_4, p_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = k_14;
                                          {
                                            ATerm l_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm q_4 (ATerm t)
                                                {
                                                  ATerm k_68 = NULL;
                                                  k_68 = t;
                                                  k_67 :
                                                  if(!(match_string(k_68, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm s_4 (ATerm t)
                                                {
                                                  ATerm r_68 = NULL;
                                                  r_68 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_68));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, q_4, s_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_14;
                                                {
                                                  ATerm m_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm u_4 (ATerm t)
                                                      {
                                                        ATerm t_68 = NULL;
                                                        t_68 = t;
                                                        m_67 :
                                                        if(!(match_string(t_68, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm w_4 (ATerm t)
                                                      {
                                                        ATerm u_68 = NULL;
                                                        u_68 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_68));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, u_4, w_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      {
                                                        ATerm n_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm x_4 (ATerm t)
                                                            {
                                                              ATerm w_68 = NULL;
                                                              w_68 = t;
                                                              o_67 :
                                                              if(!(match_string(w_68, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm y_4 (ATerm t)
                                                            {
                                                              ATerm x_68 = NULL;
                                                              x_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_68));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, x_4, y_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = n_14;
                                                            {
                                                              ATerm o_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm z_4 (ATerm t)
                                                                  {
                                                                    ATerm z_68 = NULL;
                                                                    z_68 = t;
                                                                    q_67 :
                                                                    if(!(match_string(z_68, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, z_4, a_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = o_14;
                                                                  {
                                                                    ATerm p_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm b_5 (ATerm t)
                                                                        {
                                                                          ATerm a_69 = NULL;
                                                                          a_69 = t;
                                                                          r_67 :
                                                                          if(!(match_string(a_69, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm g_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, b_5, g_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_14;
                                                                        {
                                                                          ATerm q_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm j_5 (ATerm t)
                                                                              {
                                                                                ATerm b_69 = NULL;
                                                                                b_69 = t;
                                                                                s_67 :
                                                                                if(!(match_string(b_69, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm p_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, j_5, p_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_14;
                                                                              {
                                                                                ATerm r_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm q_5 (ATerm t)
                                                                                    {
                                                                                      ATerm c_69 = NULL;
                                                                                      c_69 = t;
                                                                                      t_67 :
                                                                                      if(!(match_string(c_69, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm r_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, q_5, r_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_14;
                                                                                    {
                                                                                      ATerm s_5 (ATerm t)
                                                                                      {
                                                                                        ATerm d_69 = NULL;
                                                                                        d_69 = t;
                                                                                        y_67 :
                                                                                        if(!(match_string(d_69, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm w_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, s_5, w_5);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  l_69 = t;
  k_69 :
  if(match_cons(l_69, sym_Cons_2))
    {
      m_69 = ATgetArgument(l_69, 0);
      n_69 = ATgetArgument(l_69, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_69)), not_null(n_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  u_69 :
  if(match_cons(z_69, sym_Cons_2))
    {
      a_70 = ATgetArgument(z_69, 0);
      b_70 = ATgetArgument(z_69, 1);
      {
        ATerm e_70 = NULL;
        t = not_null(a_70);
        {
          ATerm g_70 = NULL;
          t = v_62(t);
          e_70 = t;
          t = not_null(b_70);
          t = w_62(t);
          g_70 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_70), not_null(g_70));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm m_70 = NULL;
  m_70 = t;
  l_70 :
  if(!(match_cons(m_70, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm o_70 = NULL;
    o_70 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_70));
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm s_14 = t;
    if(PushChoice()==0)
      {
        ATerm t_14 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = t_14;
            t = s_64(t);
            t = Cons_2(t, _id, y_5);
          }
        PopChoice();
      }
    else
      {
        t = s_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, x_5, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = m_65(t);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_5);
  t = store_options_0(t);
  {
    ATerm v_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, n_65);
        PopChoice();
      }
    else
      {
        t = v_14;
        {
          ATerm w_14 = t;
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
              t = w_14;
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
  ATerm a_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      t = TCons_2(t, d_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, i_6);
    return(t);
  }
  t = iowrap_2(t, a_6, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      t = simplify_0(t);
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_narrow_0(t);
      t = simplify_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, k_6);
    return(t);
  }
  t = iowrap_1(t, j_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
