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
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm i_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm crush_3 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm free_vars_3 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_81 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm h_79 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm alltd_1 (ATerm, ATerm k_83 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm o_84 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm c_75 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm for_3 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_82 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm e_61 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm zip_1 (ATerm, ATerm e_77 (ATerm));
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
ATerm downup_1 (ATerm, ATerm k_81 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm e_86 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_66 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_65 (ATerm));
ATerm map_1 (ATerm, ATerm p_78 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_68 (ATerm), ATerm w_68 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_68 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_65 (ATerm));
ATerm Program_1 (ATerm, ATerm g_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_80 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_65 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_66 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  m_1 = t;
  l_1 :
  if(match_cons(m_1, sym_Cons_2))
    {
      n_1 = ATgetArgument(m_1, 0);
      o_1 = ATgetArgument(m_1, 1);
      t = not_null(o_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  w_1 = t;
  t_1 :
  if(match_cons(w_1, sym_TCons_2))
    {
      x_1 = ATgetArgument(w_1, 0);
      y_1 = ATgetArgument(w_1, 1);
      u_1 :
      if(match_cons(y_1, sym_TCons_2))
        {
          z_1 = ATgetArgument(y_1, 0);
          a_2 = ATgetArgument(y_1, 1);
          v_1 :
          if(match_cons(a_2, sym_TNil_0))
            {
              t = not_null(x_1);
              {
                ATerm e_2 (ATerm t)
                {
                  ATerm y_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = y_7;
                      {
                        ATerm m_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm n_8;
                            n_8 = t;
                            {
                              ATerm a_0 (ATerm t)
                              {
                                t = not_null(z_1);
                                return(t);
                              }
                              t = HdMember_1(t, a_0);
                            }
                            t = n_8;
                            t = Cons_2(t, _id, e_2);
                            PopChoice();
                          }
                        else
                          {
                            t = m_8;
                            t = Tl_0(t);
                            t = e_2(t);
                          }
                      }
                    }
                  return(t);
                }
                t = e_2(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm i_2 = NULL,j_2 = NULL;
  i_2 = t;
  h_2 :
  if(match_cons(i_2, sym_DynamicRules_1))
    {
      j_2 = ATgetArgument(i_2, 0);
      {
        ATerm l_2 = NULL;
        t = not_null(j_2);
        t = i_60(t);
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(l_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  s_2 :
  if(match_cons(t_2, sym_Scope_2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      {
        ATerm y_2 = NULL;
        t = not_null(u_2);
        {
          ATerm a_3 = NULL;
          t = x_62(t);
          y_2 = t;
          t = not_null(v_2);
          t = y_62(t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_2), not_null(a_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  ATerm o_8 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, f_85, d_85);
      PopChoice();
    }
  else
    {
      t = o_8;
      t = DynamicRules_1(t, d_85);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL;
  h_3 = t;
  g_3 :
  if(match_cons(h_3, sym_DynamicRules_1))
    {
      i_3 = ATgetArgument(h_3, 0);
      t = not_null(i_3);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  q_3 = t;
  n_3 :
  if(match_cons(q_3, sym_Scope_2))
    {
      r_3 = ATgetArgument(q_3, 0);
      p_3 = ATgetArgument(q_3, 1);
      t = not_null(r_3);
    }
  else
    {
      if(match_cons(q_3, sym_LRule_1))
        {
          r_3 = ATgetArgument(q_3, 0);
          o_3 :
          if(match_cons(r_3, sym_Rule_3))
            {
              s_3 = ATgetArgument(r_3, 0);
              t_3 = ATgetArgument(r_3, 1);
              u_3 = ATgetArgument(r_3, 2);
              t = not_null(s_3);
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
  ATerm e_4 = NULL,f_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym_Var_1))
    {
      f_4 = ATgetArgument(e_4, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_4), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  m_4 = t;
  j_4 :
  if(match_cons(m_4, sym_TCons_2))
    {
      n_4 = ATgetArgument(m_4, 0);
      o_4 = ATgetArgument(m_4, 1);
      k_4 :
      if(match_cons(o_4, sym_TCons_2))
        {
          p_4 = ATgetArgument(o_4, 0);
          q_4 = ATgetArgument(o_4, 1);
          l_4 :
          if(match_cons(q_4, sym_TNil_0))
            {
              t = not_null(n_4);
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm p_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(p_4);
                      PopChoice();
                    }
                  else
                    {
                      t = p_8;
                      {
                        ATerm r_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm h_0 (ATerm t)
                            {
                              t = not_null(p_4);
                              return(t);
                            }
                            t = HdMember_1(t, h_0);
                            t = u_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_8;
                            t = Cons_2(t, _id, u_4);
                          }
                      }
                    }
                  return(t);
                }
                t = u_4(t);
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
ATerm foldr_3 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = x_73(t);
      PopChoice();
    }
  else
    {
      t = s_8;
      {
        ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
        z_4 = t;
        y_4 :
        if(match_cons(z_4, sym_Cons_2))
          {
            a_5 = ATgetArgument(z_4, 0);
            b_5 = ATgetArgument(z_4, 1);
            {
              ATerm e_5 = NULL,g_5 = NULL;
              ATerm t_8;
              t_8 = t;
              {
                ATerm f_5 = NULL;
                t = not_null(a_5);
                t = z_73(t);
                f_5 = t;
                if(e_5 != NULL && e_5 != f_5)
                  _fail(f_5);
                else
                  e_5 = f_5;
              }
              t = t_8;
              {
                ATerm h_5 = NULL;
                t = not_null(b_5);
                t = foldr_3(t, x_73, y_73, z_73);
                h_5 = t;
                if(g_5 != NULL && g_5 != h_5)
                  _fail(h_5);
                else
                  g_5 = h_5;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = y_73(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
    t = not_null(r_5);
    u_5 = t;
    t = SSL_explode_term(not_null(u_5));
    w_5 = t;
    o_5 :
    if(match_cons(w_5, sym_TCons_2))
      {
        x_5 = ATgetArgument(w_5, 0);
        y_5 = ATgetArgument(w_5, 1);
        p_5 :
        if(match_cons(y_5, sym_TCons_2))
          {
            z_5 = ATgetArgument(y_5, 0);
            a_6 = ATgetArgument(y_5, 1);
            q_5 :
            if(match_cons(a_6, sym_TNil_0))
              {
                if(t_5 != NULL && t_5 != z_5)
                  _fail(z_5);
                else
                  t_5 = z_5;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(t_5);
    t = foldr_3(t, n_75, o_75, p_75);
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_6 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = x_70(t);
        PopChoice();
      }
    else
      {
        t = x_8;
        {
          ATerm b_9 = t;
          if(PushChoice()==0)
            {
              ATerm f_6 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm g_6 = NULL;
                t = y_70(t);
                g_6 = t;
                if(f_6 != NULL && f_6 != g_6)
                  _fail(g_6);
                else
                  f_6 = g_6;
              }
              t = g_9;
              {
                ATerm i_0 (ATerm t)
                {
                  ATerm k_0 (ATerm t)
                  {
                    t = not_null(f_6);
                    return(t);
                  }
                  t = split_2(t, h_6, k_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm j_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = z_70(t, i_0, h_6, j_0);
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, l_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = b_9;
              {
                ATerm m_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, m_0, union_0, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, n_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_Scope_2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      {
        ATerm t_6 = NULL,v_6 = NULL;
        ATerm u_6 = NULL;
        t = not_null(q_6);
        t = tvars_0(t);
        u_6 = t;
        if(t_6 != NULL && t_6 != u_6)
          _fail(u_6);
        else
          t_6 = u_6;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_6), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = isect_0(t);
        v_6 = t;
        {
          ATerm p_9 = t;
          if(PushChoice()==0)
            {
              ATerm x_6 = NULL;
              x_6 = t;
              if(p_6 != NULL && p_6 != x_6)
                _fail(x_6);
              else
                p_6 = x_6;
              PopChoice();
              _fail(t);
            }
          else
            t = p_9;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_6), not_null(q_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = g_81(t);
    t = _all(t, c_7);
    return(t);
  }
  t = c_7(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = topdown_1(t, o_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, q_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  ATerm w_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_7), not_null(n_7)));
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_7), not_null(p_7)));
    return(t);
  }
  l_7 = t;
  f_7 :
  if(match_cons(l_7, sym_Seq_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      g_7 :
      if(match_cons(n_7, sym_Scope_2))
        {
          o_7 = ATgetArgument(n_7, 0);
          p_7 = ATgetArgument(n_7, 1);
          h_7 :
          if(match_cons(m_7, sym_Scope_2))
            {
              j_7 = ATgetArgument(m_7, 0);
              k_7 = ATgetArgument(m_7, 1);
              {
                ATerm q_9 = t;
                if(PushChoice()==0)
                  {
                    t = w_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = q_9;
                    t = x_7(t);
                  }
              }
            }
          else
            t = x_7(t);
        }
      else
        {
          i_7 :
          if(match_cons(m_7, sym_Scope_2))
            {
              j_7 = ATgetArgument(m_7, 0);
              k_7 = ATgetArgument(m_7, 1);
              t = w_7(t);
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
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  e_8 = t;
  z_7 :
  if(match_cons(e_8, sym_Let_2))
    {
      f_8 = ATgetArgument(e_8, 0);
      l_8 = ATgetArgument(e_8, 1);
      a_8 :
      if(match_cons(f_8, sym_Cons_2))
        {
          g_8 = ATgetArgument(f_8, 0);
          k_8 = ATgetArgument(f_8, 1);
          b_8 :
          if(match_cons(g_8, sym_SDef_3))
            {
              h_8 = ATgetArgument(g_8, 0);
              i_8 = ATgetArgument(g_8, 1);
              j_8 = ATgetArgument(g_8, 2);
              c_8 :
              if(match_cons(i_8, sym_Nil_0))
                {
                  d_8 :
                  if(match_cons(k_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(h_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(j_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(l_8));
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
ATerm at_suffix_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm r_9 = t;
    if(PushChoice()==0)
      {
        t = h_79(t);
        PopChoice();
      }
    else
      {
        t = r_9;
        t = Cons_2(t, _id, q_8);
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Let_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm i_9 = NULL,x_9 = NULL;
        t = not_null(e_9);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
            j_9 = t;
            y_8 :
            if(match_cons(j_9, sym_Cons_2))
              {
                k_9 = ATgetArgument(j_9, 0);
                o_9 = ATgetArgument(j_9, 1);
                z_8 :
                if(match_cons(k_9, sym_SDef_3))
                  {
                    l_9 = ATgetArgument(k_9, 0);
                    m_9 = ATgetArgument(k_9, 1);
                    n_9 = ATgetArgument(k_9, 2);
                    a_9 :
                    if(match_cons(m_9, sym_Nil_0))
                      {
                        ATerm w_9 = NULL;
                        t = not_null(f_9);
                        {
                          ATerm s_0 (ATerm t)
                          {
                            ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
                            s_9 = t;
                            u_8 :
                            if(match_cons(s_9, sym_Call_2))
                              {
                                t_9 = ATgetArgument(s_9, 0);
                                v_9 = ATgetArgument(s_9, 1);
                                v_8 :
                                if(match_cons(t_9, sym_SVar_1))
                                  {
                                    u_9 = ATgetArgument(t_9, 0);
                                    w_8 :
                                    if(match_cons(v_9, sym_Nil_0))
                                      {
                                        if(l_9 != NULL && l_9 != u_9)
                                          _fail(u_9);
                                        else
                                          l_9 = u_9;
                                        t = not_null(n_9);
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
                          t = oncetd_1(t, s_0);
                          w_9 = t;
                          if(i_9 != NULL && i_9 != w_9)
                            _fail(w_9);
                          else
                            i_9 = w_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm y_9 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = y_9;
                            t = not_null(o_9);
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
          t = at_suffix_1(t, r_0);
          x_9 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_9), not_null(i_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  o_10 = t;
  g_10 :
  if(match_cons(o_10, sym_TCons_2))
    {
      p_10 = ATgetArgument(o_10, 0);
      r_10 = ATgetArgument(o_10, 1);
      h_10 :
      if(match_cons(p_10, sym_Build_1))
        {
          q_10 = ATgetArgument(p_10, 0);
          i_10 :
          if(match_cons(r_10, sym_TCons_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              w_10 = ATgetArgument(r_10, 1);
              j_10 :
              if(match_cons(s_10, sym_Prim_2))
                {
                  t_10 = ATgetArgument(s_10, 0);
                  n_10 = ATgetArgument(s_10, 1);
                  k_10 :
                  if(match_cons(w_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_10), not_null(n_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(s_10, sym_Where_1))
                    {
                      t_10 = ATgetArgument(s_10, 0);
                      l_10 :
                      if(match_cons(t_10, sym_Prim_2))
                        {
                          u_10 = ATgetArgument(t_10, 0);
                          v_10 = ATgetArgument(t_10, 1);
                          m_10 :
                          if(match_cons(w_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_10), not_null(v_10));
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  o_11 = t;
  h_11 :
  if(match_cons(o_11, sym_TCons_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      r_11 = ATgetArgument(o_11, 1);
      i_11 :
      if(match_cons(p_11, sym_Build_1))
        {
          q_11 = ATgetArgument(p_11, 0);
          j_11 :
          if(match_cons(r_11, sym_TCons_2))
            {
              s_11 = ATgetArgument(r_11, 0);
              v_11 = ATgetArgument(r_11, 1);
              k_11 :
              if(match_cons(s_11, sym_Build_1))
                {
                  t_11 = ATgetArgument(s_11, 0);
                  l_11 :
                  if(match_cons(v_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(s_11, sym_Where_1))
                    {
                      t_11 = ATgetArgument(s_11, 0);
                      m_11 :
                      if(match_cons(t_11, sym_Build_1))
                        {
                          u_11 = ATgetArgument(t_11, 0);
                          n_11 :
                          if(match_cons(v_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_11));
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
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  p_12 = t;
  i_12 :
  if(match_cons(p_12, sym_TCons_2))
    {
      q_12 = ATgetArgument(p_12, 0);
      u_12 = ATgetArgument(p_12, 1);
      j_12 :
      if(match_cons(q_12, sym_Build_1))
        {
          r_12 = ATgetArgument(q_12, 0);
          k_12 :
          if(match_cons(r_12, sym_Op_2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              l_12 :
              if(match_cons(u_12, sym_TCons_2))
                {
                  v_12 = ATgetArgument(u_12, 0);
                  z_12 = ATgetArgument(u_12, 1);
                  m_12 :
                  if(match_cons(v_12, sym_Match_1))
                    {
                      w_12 = ATgetArgument(v_12, 0);
                      n_12 :
                      if(match_cons(w_12, sym_Op_2))
                        {
                          x_12 = ATgetArgument(w_12, 0);
                          y_12 = ATgetArgument(w_12, 1);
                          o_12 :
                          if(match_cons(z_12, sym_TNil_0))
                            {
                              ATerm x_14 = NULL,y_14 = NULL;
                              if(s_12 != NULL && s_12 != x_12)
                                _fail(x_12);
                              else
                                s_12 = x_12;
                              if(x_14 != NULL && x_14 != y_12)
                                _fail(y_12);
                              else
                                x_14 = y_12;
                              {
                                ATerm t_15 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_14), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm t_0 (ATerm t)
                                  {
                                    ATerm d_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
                                    d_15 = t;
                                    e_12 :
                                    if(match_cons(d_15, sym_TCons_2))
                                      {
                                        n_15 = ATgetArgument(d_15, 0);
                                        o_15 = ATgetArgument(d_15, 1);
                                        f_12 :
                                        if(match_cons(o_15, sym_TCons_2))
                                          {
                                            p_15 = ATgetArgument(o_15, 0);
                                            q_15 = ATgetArgument(o_15, 1);
                                            g_12 :
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
                                  t = zip_1(t, t_0);
                                  t_15 = t;
                                  if(y_14 != NULL && y_14 != t_15)
                                    _fail(t_15);
                                  else
                                    y_14 = t_15;
                                }
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_14)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_12), not_null(t_12))));
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
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  y_15 :
  if(match_cons(b_16, sym_TCons_2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      z_15 :
      if(match_cons(d_16, sym_TCons_2))
        {
          e_16 = ATgetArgument(d_16, 0);
          f_16 = ATgetArgument(d_16, 1);
          a_16 :
          if(match_cons(f_16, sym_TNil_0))
            {
              if(c_16 != NULL && c_16 != e_16)
                _fail(e_16);
              else
                c_16 = e_16;
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  d_17 = t;
  j_16 :
  if(match_cons(d_17, sym_TCons_2))
    {
      e_17 = ATgetArgument(d_17, 0);
      i_17 = ATgetArgument(d_17, 1);
      u_16 :
      if(match_cons(e_17, sym_Build_1))
        {
          f_17 = ATgetArgument(e_17, 0);
          v_16 :
          if(match_cons(f_17, sym_Op_2))
            {
              g_17 = ATgetArgument(f_17, 0);
              h_17 = ATgetArgument(f_17, 1);
              w_16 :
              if(match_cons(i_17, sym_TCons_2))
                {
                  j_17 = ATgetArgument(i_17, 0);
                  n_17 = ATgetArgument(i_17, 1);
                  x_16 :
                  if(match_cons(j_17, sym_Match_1))
                    {
                      k_17 = ATgetArgument(j_17, 0);
                      b_17 :
                      if(match_cons(k_17, sym_Op_2))
                        {
                          l_17 = ATgetArgument(k_17, 0);
                          m_17 = ATgetArgument(k_17, 1);
                          c_17 :
                          if(match_cons(n_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm z_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = z_9;
                                t = (ATerm) ATmakeAppl(sym_Fail_0);
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
ATerm BMF_0 (ATerm t)
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = a_10;
      {
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = b_10;
            {
              ATerm c_10 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_10;
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,r_20 = NULL,s_20 = NULL;
  ATerm c_21 (ATerm t)
  {
    ATerm v_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    v_20 = t;
    t = not_null(v_20);
    return(t);
  }
  ATerm d_21 (ATerm t)
  {
    ATerm a_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_21), not_null(s_20));
    return(t);
  }
  w_19 = t;
  l_19 :
  if(match_cons(w_19, sym_Seq_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      m_19 :
      if(match_cons(y_19, sym_Seq_2))
        {
          r_20 = ATgetArgument(y_19, 0);
          s_20 = ATgetArgument(y_19, 1);
          {
            ATerm d_10 = t;
            if(PushChoice()==0)
              {
                t = c_21(t);
                PopChoice();
              }
            else
              {
                t = d_10;
                t = d_21(t);
              }
          }
        }
      else
        t = c_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  u_21 = t;
  h_21 :
  if(match_cons(u_21, sym_Seq_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      x_21 = ATgetArgument(u_21, 1);
      i_21 :
      if(match_cons(v_21, sym_Build_1))
        {
          w_21 = ATgetArgument(v_21, 0);
          j_21 :
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
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  m_22 = t;
  k_22 :
  if(match_cons(m_22, sym_Scope_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      l_22 :
      if(match_cons(o_22, sym_Scope_2))
        {
          p_22 = ATgetArgument(o_22, 0);
          q_22 = ATgetArgument(o_22, 1);
          {
            ATerm u_22 = NULL;
            ATerm v_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            v_22 = t;
            if(u_22 != NULL && u_22 != v_22)
              _fail(v_22);
            else
              u_22 = v_22;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_22), not_null(q_22));
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
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_Var_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      t = not_null(c_23);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,z_23 = NULL;
  k_23 = t;
  g_23 :
  if(match_cons(k_23, sym_TCons_2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      h_23 :
      if(match_cons(m_23, sym_TCons_2))
        {
          n_23 = ATgetArgument(m_23, 0);
          z_23 = ATgetArgument(m_23, 1);
          i_23 :
          if(match_cons(n_23, sym_Cons_2))
            {
              o_23 = ATgetArgument(n_23, 0);
              p_23 = ATgetArgument(n_23, 1);
              j_23 :
              if(match_cons(z_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_23), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  z_24 = t;
  h_24 :
  if(match_cons(z_24, sym_TCons_2))
    {
      a_25 = ATgetArgument(z_24, 0);
      b_25 = ATgetArgument(z_24, 1);
      t_24 :
      if(match_cons(b_25, sym_TCons_2))
        {
          c_25 = ATgetArgument(b_25, 0);
          l_25 = ATgetArgument(b_25, 1);
          u_24 :
          if(match_cons(c_25, sym_Cons_2))
            {
              d_25 = ATgetArgument(c_25, 0);
              k_25 = ATgetArgument(c_25, 1);
              v_24 :
              if(match_cons(d_25, sym_TCons_2))
                {
                  e_25 = ATgetArgument(d_25, 0);
                  f_25 = ATgetArgument(d_25, 1);
                  w_24 :
                  if(match_cons(f_25, sym_TCons_2))
                    {
                      i_25 = ATgetArgument(f_25, 0);
                      j_25 = ATgetArgument(f_25, 1);
                      x_24 :
                      if(match_cons(j_25, sym_TNil_0))
                        {
                          y_24 :
                          if(match_cons(l_25, sym_TNil_0))
                            {
                              ATerm s_25 = NULL;
                              if(a_25 != NULL && a_25 != e_25)
                                _fail(e_25);
                              else
                                a_25 = e_25;
                              if(s_25 != NULL && s_25 != i_25)
                                _fail(i_25);
                              else
                                s_25 = i_25;
                              t = not_null(s_25);
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
  ATerm e_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = e_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  ATerm y_25 = NULL;
  ATerm a_26 = NULL;
  y_25 = t;
  {
    ATerm c_26 = NULL;
    t = k_84(t);
    a_26 = t;
    t = l_84(t);
    c_26 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_26), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm k_83 (ATerm))
{
  ATerm h_26 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = k_83(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = _all(t, h_26);
      }
    return(t);
  }
  t = h_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  p_26 = t;
  l_26 :
  if(match_cons(p_26, sym_TCons_2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      m_26 :
      if(match_cons(r_26, sym_TCons_2))
        {
          s_26 = ATgetArgument(r_26, 0);
          t_26 = ATgetArgument(r_26, 1);
          n_26 :
          if(match_cons(t_26, sym_TNil_0))
            {
              ATerm x_26 = NULL;
              if(x_26 != NULL && x_26 != s_26)
                _fail(s_26);
              else
                x_26 = s_26;
            }
          else
            {
              if(match_cons(t_26, sym_TCons_2))
                {
                  u_26 = ATgetArgument(t_26, 0);
                  v_26 = ATgetArgument(t_26, 1);
                  o_26 :
                  if(match_cons(v_26, sym_TNil_0))
                    {
                      ATerm d_27 = NULL;
                      ATerm e_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      e_27 = t;
                      if(d_27 != NULL && d_27 != e_27)
                        _fail(e_27);
                      else
                        d_27 = e_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = subs_args_0(t);
  m_27 = t;
  j_27 :
  if(match_cons(m_27, sym_TCons_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      k_27 :
      if(match_cons(o_27, sym_TCons_2))
        {
          p_27 = ATgetArgument(o_27, 0);
          q_27 = ATgetArgument(o_27, 1);
          l_27 :
          if(match_cons(q_27, sym_TNil_0))
            {
              t = not_null(p_27);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = not_null(n_27);
                    return(t);
                  }
                  t = SubsVar_2(t, m_84, v_0);
                  t = n_84(t);
                  return(t);
                }
                t = alltd_1(t, u_0);
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
ATerm substitute_1 (ATerm t, ATerm o_84 (ATerm))
{
  t = substitute_2(t, o_84, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Cons_2))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      t = c_75(t);
      {
        ATerm w_0 (ATerm t)
        {
          ATerm c_28 = NULL;
          c_28 = t;
          if(y_27 != NULL && y_27 != c_28)
            _fail(c_28);
          else
            y_27 = c_28;
          return(t);
        }
        t = fetch_1(t, w_0);
        t = not_null(z_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  k_28 = t;
  g_28 :
  if(match_cons(k_28, sym_TCons_2))
    {
      l_28 = ATgetArgument(k_28, 0);
      m_28 = ATgetArgument(k_28, 1);
      h_28 :
      if(match_cons(m_28, sym_TCons_2))
        {
          n_28 = ATgetArgument(m_28, 0);
          q_28 = ATgetArgument(m_28, 1);
          i_28 :
          if(match_cons(n_28, sym_Cons_2))
            {
              o_28 = ATgetArgument(n_28, 0);
              p_28 = ATgetArgument(n_28, 1);
              j_28 :
              if(match_cons(q_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_28), not_null(l_28)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  l_29 = t;
  h_29 :
  if(match_cons(l_29, sym_Cons_2))
    {
      m_29 = ATgetArgument(l_29, 0);
      r_29 = ATgetArgument(l_29, 1);
      i_29 :
      if(match_cons(m_29, sym_TCons_2))
        {
          n_29 = ATgetArgument(m_29, 0);
          o_29 = ATgetArgument(m_29, 1);
          j_29 :
          if(match_cons(o_29, sym_TCons_2))
            {
              p_29 = ATgetArgument(o_29, 0);
              q_29 = ATgetArgument(o_29, 1);
              k_29 :
              if(match_cons(q_29, sym_TNil_0))
                {
                  ATerm v_29 = NULL,w_29 = NULL,e_30 = NULL,m_30 = NULL;
                  ATerm x_10;
                  x_10 = t;
                  {
                    ATerm x_29 = NULL;
                    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
                    t = not_null(p_29);
                    x_29 = t;
                    t = SSL_explode_term(not_null(x_29));
                    z_29 = t;
                    y_28 :
                    if(match_cons(z_29, sym_TCons_2))
                      {
                        a_30 = ATgetArgument(z_29, 0);
                        b_30 = ATgetArgument(z_29, 1);
                        z_28 :
                        if(match_cons(b_30, sym_TCons_2))
                          {
                            c_30 = ATgetArgument(b_30, 0);
                            d_30 = ATgetArgument(b_30, 1);
                            a_29 :
                            if(match_cons(d_30, sym_TNil_0))
                              {
                                if(v_29 != NULL && v_29 != a_30)
                                  _fail(a_30);
                                else
                                  v_29 = a_30;
                                if(w_29 != NULL && w_29 != c_30)
                                  _fail(c_30);
                                else
                                  w_29 = c_30;
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
                  t = x_10;
                  {
                    ATerm y_10;
                    y_10 = t;
                    {
                      ATerm f_30 = NULL;
                      ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
                      t = not_null(n_29);
                      f_30 = t;
                      t = SSL_explode_term(not_null(f_30));
                      h_30 = t;
                      d_29 :
                      if(match_cons(h_30, sym_TCons_2))
                        {
                          i_30 = ATgetArgument(h_30, 0);
                          j_30 = ATgetArgument(h_30, 1);
                          e_29 :
                          if(match_cons(j_30, sym_TCons_2))
                            {
                              k_30 = ATgetArgument(j_30, 0);
                              l_30 = ATgetArgument(j_30, 1);
                              f_29 :
                              if(match_cons(l_30, sym_TNil_0))
                                {
                                  if(v_29 != NULL && v_29 != i_30)
                                    _fail(i_30);
                                  else
                                    v_29 = i_30;
                                  if(e_30 != NULL && e_30 != k_30)
                                    _fail(k_30);
                                  else
                                    e_30 = k_30;
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
                    t = y_10;
                    {
                      ATerm n_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      n_30 = t;
                      if(m_30 != NULL && m_30 != n_30)
                        _fail(n_30);
                      else
                        m_30 = n_30;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  z_30 = t;
  v_30 :
  if(match_cons(z_30, sym_Cons_2))
    {
      a_31 = ATgetArgument(z_30, 0);
      f_31 = ATgetArgument(z_30, 1);
      w_30 :
      if(match_cons(a_31, sym_TCons_2))
        {
          b_31 = ATgetArgument(a_31, 0);
          c_31 = ATgetArgument(a_31, 1);
          x_30 :
          if(match_cons(c_31, sym_TCons_2))
            {
              d_31 = ATgetArgument(c_31, 0);
              e_31 = ATgetArgument(c_31, 1);
              y_30 :
              if(match_cons(e_31, sym_TNil_0))
                {
                  ATerm h_31 = NULL;
                  if(b_31 != NULL && b_31 != d_31)
                    _fail(d_31);
                  else
                    b_31 = d_31;
                  if(h_31 != NULL && h_31 != f_31)
                    _fail(f_31);
                  else
                    h_31 = f_31;
                  t = not_null(h_31);
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
ATerm while_not_2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm j_31 (ATerm t)
  {
    ATerm z_10 = t;
    if(PushChoice()==0)
      {
        t = m_69(t);
        PopChoice();
      }
    else
      {
        t = z_10;
        t = n_69(t);
        t = j_31(t);
      }
    return(t);
  }
  t = j_31(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  t = p_69(t);
  t = while_not_2(t, q_69, r_69);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm a_11 = t;
  if(PushChoice()==0)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm p_31 = NULL;
        p_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, a_1);
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        ATerm b_11 = t;
        if(PushChoice()==0)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                ATerm c_11 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = c_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, c_1, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, b_1);
            PopChoice();
          }
        else
          {
            t = b_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, x_0, y_0, z_0);
      PopChoice();
    }
  else
    {
      t = a_11;
      {
        ATerm r_31 = NULL,s_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
        r_31 = t;
        m_31 :
        if(match_cons(r_31, sym_TCons_2))
          {
            s_31 = ATgetArgument(r_31, 0);
            v_31 = ATgetArgument(r_31, 1);
            n_31 :
            if(match_cons(v_31, sym_TCons_2))
              {
                w_31 = ATgetArgument(v_31, 0);
                x_31 = ATgetArgument(v_31, 1);
                o_31 :
                if(match_cons(x_31, sym_TNil_0))
                  {
                    t = not_null(s_31);
                    {
                      ATerm c_32 (ATerm t)
                      {
                        ATerm d_11 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_11;
                            {
                              ATerm e_11 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm d_1 (ATerm t)
                                  {
                                    t = not_null(w_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, d_1);
                                  t = c_32(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_11;
                                  t = Cons_2(t, _id, c_32);
                                }
                            }
                          }
                        return(t);
                      }
                      t = c_32(t);
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
ATerm oncetd_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm d_32 (ATerm t)
  {
    ATerm f_11 = t;
    if(PushChoice()==0)
      {
        t = w_82(t);
        PopChoice();
      }
    else
      {
        t = f_11;
        t = _one(t, d_32);
      }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  j_32 = t;
  g_32 :
  if(match_cons(j_32, sym_TCons_2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      h_32 :
      if(match_cons(l_32, sym_TCons_2))
        {
          m_32 = ATgetArgument(l_32, 0);
          n_32 = ATgetArgument(l_32, 1);
          i_32 :
          if(match_cons(n_32, sym_TNil_0))
            {
              t = not_null(m_32);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm q_32 = NULL;
                  q_32 = t;
                  if(k_32 != NULL && k_32 != q_32)
                    _fail(q_32);
                  else
                    k_32 = q_32;
                  return(t);
                }
                t = oncetd_1(t, e_1);
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
ATerm Var_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Var_1))
    {
      x_32 = ATgetArgument(w_32, 0);
      {
        ATerm z_32 = NULL;
        t = not_null(x_32);
        t = e_61(t);
        z_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  v_34 = t;
  t_33 :
  if(match_cons(v_34, sym_Seq_2))
    {
      w_34 = ATgetArgument(v_34, 0);
      z_34 = ATgetArgument(v_34, 1);
      u_33 :
      if(match_cons(w_34, sym_Build_1))
        {
          x_34 = ATgetArgument(w_34, 0);
          v_33 :
          if(match_cons(z_34, sym_Scope_2))
            {
              a_35 = ATgetArgument(z_34, 0);
              d_35 = ATgetArgument(z_34, 1);
              w_33 :
              if(match_cons(d_35, sym_Seq_2))
                {
                  p_34 = ATgetArgument(d_35, 0);
                  u_34 = ATgetArgument(d_35, 1);
                  x_33 :
                  if(match_cons(p_34, sym_Assign_1))
                    {
                      q_34 = ATgetArgument(p_34, 0);
                      y_33 :
                      if(match_cons(q_34, sym_Var_1))
                        {
                          r_34 = ATgetArgument(q_34, 0);
                          {
                            ATerm g_11 = t;
                            if(PushChoice()==0)
                              {
                                ATerm j_35 = NULL;
                                t = not_null(x_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm l_35 = NULL;
                                  t = diff_0(t);
                                  j_35 = t;
                                  {
                                    ATerm m_35 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = tsubs_0(t);
                                    m_35 = t;
                                    if(l_35 != NULL && l_35 != m_35)
                                      _fail(m_35);
                                    else
                                      l_35 = m_35;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_35), not_null(l_35)));
                                  }
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = g_11;
                                {
                                  ATerm r_35 = NULL;
                                  t = not_null(x_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm t_35 = NULL;
                                    t = diff_0(t);
                                    r_35 = t;
                                    {
                                      ATerm u_35 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                      t = tsubs_0(t);
                                      u_35 = t;
                                      if(t_35 != NULL && t_35 != u_35)
                                        _fail(u_35);
                                      else
                                        t_35 = u_35;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_35), not_null(t_35)));
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
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(w_34, sym_Assign_1))
            {
              x_34 = ATgetArgument(w_34, 0);
              z_33 :
              if(match_cons(x_34, sym_Var_1))
                {
                  y_34 = ATgetArgument(x_34, 0);
                  a_34 :
                  if(match_cons(z_34, sym_Seq_2))
                    {
                      a_35 = ATgetArgument(z_34, 0);
                      d_35 = ATgetArgument(z_34, 1);
                      b_34 :
                      if(match_cons(a_35, sym_Build_1))
                        {
                          b_35 = ATgetArgument(a_35, 0);
                          c_34 :
                          if(match_cons(b_35, sym_Var_1))
                            {
                              c_35 = ATgetArgument(b_35, 0);
                              {
                                ATerm u_36 = NULL;
                                if(y_34 != NULL && y_34 != c_35)
                                  _fail(c_35);
                                else
                                  y_34 = c_35;
                                if(u_36 != NULL && u_36 != d_35)
                                  _fail(d_35);
                                else
                                  u_36 = d_35;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34))), not_null(u_36));
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
      if(match_cons(v_34, sym_Scope_2))
        {
          w_34 = ATgetArgument(v_34, 0);
          z_34 = ATgetArgument(v_34, 1);
          d_34 :
          if(match_cons(z_34, sym_Seq_2))
            {
              a_35 = ATgetArgument(z_34, 0);
              d_35 = ATgetArgument(z_34, 1);
              e_34 :
              if(match_cons(a_35, sym_Assign_2))
                {
                  b_35 = ATgetArgument(a_35, 0);
                  n_34 = ATgetArgument(a_35, 1);
                  f_34 :
                  if(match_cons(b_35, sym_Var_1))
                    {
                      c_35 = ATgetArgument(b_35, 0);
                      g_34 :
                      if(match_cons(n_34, sym_Var_1))
                        {
                          o_34 = ATgetArgument(n_34, 0);
                          {
                            ATerm z_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm b_36 = NULL;
                              t = diff_0(t);
                              z_35 = t;
                              {
                                ATerm c_36 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                t = tsubs_0(t);
                                c_36 = t;
                                if(b_36 != NULL && b_36 != c_36)
                                  _fail(c_36);
                                else
                                  b_36 = c_36;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_35), not_null(b_36));
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
                {
                  if(match_cons(a_35, sym_Assign_1))
                    {
                      b_35 = ATgetArgument(a_35, 0);
                      h_34 :
                      if(match_cons(b_35, sym_Var_1))
                        {
                          c_35 = ATgetArgument(b_35, 0);
                          i_34 :
                          if(match_cons(d_35, sym_Seq_2))
                            {
                              p_34 = ATgetArgument(d_35, 0);
                              u_34 = ATgetArgument(d_35, 1);
                              j_34 :
                              if(match_cons(p_34, sym_Assign_1))
                                {
                                  q_34 = ATgetArgument(p_34, 0);
                                  k_34 :
                                  if(match_cons(q_34, sym_Var_1))
                                    {
                                      r_34 = ATgetArgument(q_34, 0);
                                      {
                                        ATerm h_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm j_36 = NULL;
                                          t = diff_0(t);
                                          h_36 = t;
                                          {
                                            ATerm k_36 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = tsubs_0(t);
                                            k_36 = t;
                                            if(j_36 != NULL && j_36 != k_36)
                                              _fail(k_36);
                                            else
                                              j_36 = k_36;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_35))), not_null(j_36)));
                                          }
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(p_34, sym_Assign_2))
                                    {
                                      q_34 = ATgetArgument(p_34, 0);
                                      s_34 = ATgetArgument(p_34, 1);
                                      l_34 :
                                      if(match_cons(q_34, sym_Var_1))
                                        {
                                          r_34 = ATgetArgument(q_34, 0);
                                          m_34 :
                                          if(match_cons(s_34, sym_Var_1))
                                            {
                                              t_34 = ATgetArgument(s_34, 0);
                                              {
                                                ATerm o_36 = NULL,p_36 = NULL;
                                                if(c_35 != NULL && c_35 != t_34)
                                                  _fail(t_34);
                                                else
                                                  c_35 = t_34;
                                                if(o_36 != NULL && o_36 != u_34)
                                                  _fail(u_34);
                                                else
                                                  o_36 = u_34;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm r_36 = NULL;
                                                  t = diff_0(t);
                                                  p_36 = t;
                                                  {
                                                    ATerm s_36 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                    t = tsubs_0(t);
                                                    s_36 = t;
                                                    if(r_36 != NULL && r_36 != s_36)
                                                      _fail(s_36);
                                                    else
                                                      r_36 = s_36;
                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_35))), not_null(r_36)));
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
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,u_37 = NULL;
  o_37 = t;
  m_37 :
  if(match_cons(o_37, sym_Seq_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      n_37 :
      if(match_cons(q_37, sym_Let_2))
        {
          r_37 = ATgetArgument(q_37, 0);
          u_37 = ATgetArgument(q_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_37), not_null(u_37)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  d_38 = t;
  a_38 :
  if(match_cons(d_38, sym_TCons_2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      b_38 :
      if(match_cons(f_38, sym_TCons_2))
        {
          g_38 = ATgetArgument(f_38, 0);
          h_38 = ATgetArgument(f_38, 1);
          c_38 :
          if(match_cons(h_38, sym_TNil_0))
            {
              t = not_null(e_38);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(g_38);
                  return(t);
                }
                t = at_end_1(t, f_1);
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
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t_38 = t;
  m_38 :
  if(match_cons(t_38, sym_TCons_2))
    {
      u_38 = ATgetArgument(t_38, 0);
      v_38 = ATgetArgument(t_38, 1);
      r_38 :
      if(match_cons(v_38, sym_TCons_2))
        {
          w_38 = ATgetArgument(v_38, 0);
          x_38 = ATgetArgument(v_38, 1);
          s_38 :
          if(match_cons(x_38, sym_TNil_0))
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
  ATerm p_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  p_39 = t;
  e_39 :
  if(match_cons(p_39, sym_TCons_2))
    {
      r_39 = ATgetArgument(p_39, 0);
      u_39 = ATgetArgument(p_39, 1);
      f_39 :
      if(match_cons(r_39, sym_Cons_2))
        {
          s_39 = ATgetArgument(r_39, 0);
          t_39 = ATgetArgument(r_39, 1);
          g_39 :
          if(match_cons(u_39, sym_TCons_2))
            {
              v_39 = ATgetArgument(u_39, 0);
              y_39 = ATgetArgument(u_39, 1);
              l_39 :
              if(match_cons(v_39, sym_Cons_2))
                {
                  w_39 = ATgetArgument(v_39, 0);
                  x_39 = ATgetArgument(v_39, 1);
                  m_39 :
                  if(match_cons(y_39, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(s_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  q_40 = t;
  j_40 :
  if(match_cons(q_40, sym_TCons_2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      k_40 :
      if(match_cons(r_40, sym_Nil_0))
        {
          l_40 :
          if(match_cons(s_40, sym_TCons_2))
            {
              t_40 = ATgetArgument(s_40, 0);
              u_40 = ATgetArgument(s_40, 1);
              m_40 :
              if(match_cons(t_40, sym_Nil_0))
                {
                  n_40 :
                  if(match_cons(u_40, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm w_40 (ATerm t)
  {
    ATerm w_11 = t;
    if(PushChoice()==0)
      {
        t = z_76(t);
        PopChoice();
      }
    else
      {
        t = w_11;
        t = a_77(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = TCons_2(t, w_40, TNil_0);
            return(t);
          }
          t = TCons_2(t, c_77, g_1);
          t = b_77(t);
        }
      }
    return(t);
  }
  t = w_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_77);
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
        ATerm u_41 = NULL;
        t = not_null(r_41);
        {
          ATerm y_41 = NULL;
          t = map_1(t, new_0);
          u_41 = t;
          {
            ATerm a_42 = NULL;
            ATerm h_1 (ATerm t)
            {
              ATerm w_41 = NULL;
              w_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_41));
              return(t);
            }
            t = map_1(t, h_1);
            y_41 = t;
            t = not_null(r_41);
            {
              ATerm e_42 = NULL;
              t = map_1(t, new_0);
              a_42 = t;
              {
                ATerm g_42 = NULL,u_42 = NULL;
                ATerm i_1 (ATerm t)
                {
                  ATerm c_42 = NULL;
                  c_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_42));
                  return(t);
                }
                t = map_1(t, i_1);
                e_42 = t;
                {
                  ATerm h_42 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = zip_1(t, _id);
                  h_42 = t;
                  if(g_42 != NULL && g_42 != h_42)
                    _fail(h_42);
                  else
                    g_42 = h_42;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm w_42 = NULL;
                    ATerm j_1 (ATerm t)
                    {
                      ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
                      i_42 = t;
                      g_41 :
                      if(match_cons(i_42, sym_TCons_2))
                        {
                          j_42 = ATgetArgument(i_42, 0);
                          o_42 = ATgetArgument(i_42, 1);
                          h_41 :
                          if(match_cons(j_42, sym_TCons_2))
                            {
                              k_42 = ATgetArgument(j_42, 0);
                              l_42 = ATgetArgument(j_42, 1);
                              i_41 :
                              if(match_cons(l_42, sym_TCons_2))
                                {
                                  m_42 = ATgetArgument(l_42, 0);
                                  n_42 = ATgetArgument(l_42, 1);
                                  j_41 :
                                  if(match_cons(n_42, sym_TNil_0))
                                    {
                                      k_41 :
                                      if(match_cons(o_42, sym_TCons_2))
                                        {
                                          p_42 = ATgetArgument(o_42, 0);
                                          q_42 = ATgetArgument(o_42, 1);
                                          l_41 :
                                          if(match_cons(q_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_42)))));
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
                    t = zip_1(t, j_1);
                    u_42 = t;
                    {
                      ATerm x_42 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      x_42 = t;
                      if(w_42 != NULL && w_42 != x_42)
                        _fail(x_42);
                      else
                        w_42 = x_42;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_41), not_null(y_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_42)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_41), not_null(e_42))))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym_Cong_2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      {
        ATerm i_44 = NULL;
        t = not_null(c_44);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm f_44 = NULL,g_44 = NULL;
            g_44 = t;
            x_43 :
            if(match_cons(g_44, sym_Match_1))
              {
                f_44 = ATgetArgument(g_44, 0);
                t = not_null(f_44);
              }
            else
              {
                if(match_cons(g_44, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_1);
          i_44 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(b_44), not_null(i_44)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  q_44 :
  if(match_cons(s_44, sym_Scope_2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      r_44 :
      if(match_cons(t_44, sym_Nil_0))
        t = not_null(u_44);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  d_46 = t;
  p_45 :
  if(match_cons(d_46, sym_Choice_2))
    {
      e_46 = ATgetArgument(d_46, 0);
      c_46 = ATgetArgument(d_46, 1);
      if(e_46 != NULL && e_46 != c_46)
        _fail(c_46);
      else
        e_46 = c_46;
      t = not_null(e_46);
    }
  else
    {
      if(match_cons(d_46, sym_LChoice_2))
        {
          e_46 = ATgetArgument(d_46, 0);
          c_46 = ATgetArgument(d_46, 1);
          if(e_46 != NULL && e_46 != c_46)
            _fail(c_46);
          else
            e_46 = c_46;
          t = not_null(e_46);
        }
      else
        {
          if(match_cons(d_46, sym_Where_1))
            {
              e_46 = ATgetArgument(d_46, 0);
              r_45 :
              if(match_cons(e_46, sym_Where_1))
                {
                  f_46 = ATgetArgument(e_46, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_46));
                }
              else
                {
                  if(match_cons(e_46, sym_Seq_2))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      h_46 = ATgetArgument(e_46, 1);
                      s_45 :
                      if(match_cons(f_46, sym_Where_1))
                        {
                          g_46 = ATgetArgument(f_46, 0);
                          t_45 :
                          if(match_cons(h_46, sym_Seq_2))
                            {
                              i_46 = ATgetArgument(h_46, 0);
                              k_46 = ATgetArgument(h_46, 1);
                              u_45 :
                              if(match_cons(i_46, sym_Build_1))
                                {
                                  j_46 = ATgetArgument(i_46, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_46)), not_null(k_46))));
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
              if(match_cons(d_46, sym_Not_1))
                {
                  e_46 = ATgetArgument(d_46, 0);
                  a_46 :
                  if(match_cons(e_46, sym_Not_1))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_46));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(d_46, sym_Test_1))
                    {
                      e_46 = ATgetArgument(d_46, 0);
                      b_46 :
                      if(match_cons(e_46, sym_Test_1))
                        {
                          f_46 = ATgetArgument(e_46, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_46));
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
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
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
  ATerm x_11 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = x_11;
      {
        ATerm y_11 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = y_11;
            {
              ATerm z_11 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = z_11;
                  {
                    ATerm a_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = a_12;
                        {
                          ATerm b_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = b_12;
                              {
                                ATerm c_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_12;
                                    {
                                      ATerm d_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_12;
                                          {
                                            ATerm h_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_12;
                                                {
                                                  ATerm a_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_13;
                                                      {
                                                        ATerm b_13 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                            {
                                                              ATerm c_13 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = c_13;
                                                                  {
                                                                    ATerm d_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_13;
                                                                        {
                                                                          ATerm e_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_13;
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_LChoice_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(match_cons(g_56, sym_Id_0))
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
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  l_56 :
  if(match_cons(n_56, sym_Seq_2))
    {
      o_56 = ATgetArgument(n_56, 0);
      p_56 = ATgetArgument(n_56, 1);
      m_56 :
      if(match_cons(p_56, sym_Id_0))
        t = not_null(o_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
  v_56 = t;
  t_56 :
  if(match_cons(v_56, sym_Seq_2))
    {
      w_56 = ATgetArgument(v_56, 0);
      x_56 = ATgetArgument(v_56, 1);
      u_56 :
      if(match_cons(w_56, sym_Id_0))
        t = not_null(x_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  d_57 = t;
  b_57 :
  if(match_cons(d_57, sym_Not_1))
    {
      e_57 = ATgetArgument(d_57, 0);
      c_57 :
      if(match_cons(e_57, sym_Id_0))
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
  ATerm l_57 = NULL,m_57 = NULL;
  l_57 = t;
  j_57 :
  if(match_cons(l_57, sym_Test_1))
    {
      m_57 = ATgetArgument(l_57, 0);
      k_57 :
      if(match_cons(m_57, sym_Id_0))
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
  ATerm f_13 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = f_13;
      {
        ATerm g_13 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = g_13;
            {
              ATerm h_13 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_13;
                  {
                    ATerm i_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm j_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm k_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_13;
                                    {
                                      ATerm l_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_13;
                                          {
                                            ATerm m_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_13;
                                                {
                                                  ATerm n_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_13;
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
  ATerm o_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = o_13;
      {
        ATerm p_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = p_13;
            {
              ATerm q_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_13;
                  {
                    ATerm r_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_13;
                        {
                          ATerm s_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_13;
                              {
                                ATerm t_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_13;
                                    {
                                      ATerm u_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_13;
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
  ATerm v_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = v_13;
      {
        ATerm w_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = w_13;
            {
              ATerm x_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = x_13;
                  {
                    ATerm y_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm z_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_13;
                              {
                                ATerm a_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_14;
                                    {
                                      ATerm b_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_14;
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
ATerm downup_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm o_57 (ATerm t)
  {
    t = k_81(t);
    t = _all(t, o_57);
    t = k_81(t);
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
      ATerm c_14 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = c_14;
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
ATerm SDef_3 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm))
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
          t = x_61(t);
          b_58 = t;
          t = not_null(w_57);
          {
            ATerm f_58 = NULL;
            t = y_61(t);
            d_58 = t;
            t = not_null(x_57);
            t = z_61(t);
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
ATerm Strategies_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm o_58 = NULL,p_58 = NULL;
  o_58 = t;
  n_58 :
  if(match_cons(o_58, sym_Strategies_1))
    {
      p_58 = ATgetArgument(o_58, 0);
      {
        ATerm r_58 = NULL;
        t = not_null(p_58);
        t = s_60(t);
        r_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm u_60 (ATerm))
{
  ATerm y_58 = NULL,z_58 = NULL;
  y_58 = t;
  x_58 :
  if(match_cons(y_58, sym_Specification_1))
    {
      z_58 = ATgetArgument(y_58, 0);
      {
        ATerm b_59 = NULL;
        t = not_null(z_58);
        t = u_60(t);
        b_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(b_59));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, e_86);
            return(t);
          }
          t = map_1(t, f_2);
          return(t);
        }
        t = Strategies_1(t, d_2);
        return(t);
      }
      t = Cons_2(t, c_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, b_2);
    return(t);
  }
  t = Specification_1(t, s_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm g_59 = NULL;
  g_59 = t;
  f_59 :
  if(!(match_cons(g_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  k_59 :
  if(match_cons(l_59, sym_TCons_2))
    {
      m_59 = ATgetArgument(l_59, 0);
      n_59 = ATgetArgument(l_59, 1);
      {
        ATerm q_59 = NULL;
        t = not_null(m_59);
        {
          ATerm s_59 = NULL;
          t = c_63(t);
          q_59 = t;
          t = not_null(n_59);
          t = d_63(t);
          s_59 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_59), not_null(s_59));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_59 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm a_60 = NULL,b_60 = NULL;
      a_60 = t;
      y_59 :
      if(match_cons(a_60, sym_Program_1))
        {
          b_60 = ATgetArgument(a_60, 0);
          if(z_59 != NULL && z_59 != b_60)
            _fail(b_60);
          else
            z_59 = b_60;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = d_14;
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
ATerm report_success_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm e_14 = t;
      if(PushChoice()==0)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm l_60 = NULL;
            l_60 = t;
            d_60 :
            if(!(match_cons(l_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_2);
          PopChoice();
          _fail(t);
        }
      else
        t = e_14;
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, m_2, n_2);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          ATerm m_60 = NULL,n_60 = NULL;
          m_60 = t;
          f_60 :
          if(match_cons(m_60, sym_Runtime_1))
            {
              n_60 = ATgetArgument(m_60, 0);
              if(k_60 != NULL && k_60 != n_60)
                _fail(n_60);
              else
                k_60 = n_60;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_2);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, p_2, q_2);
      {
        ATerm w_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm o_60 = NULL,p_60 = NULL;
            o_60 = t;
            h_60 :
            if(match_cons(o_60, sym_Program_1))
              {
                p_60 = ATgetArgument(o_60, 0);
                if(j_60 != NULL && j_60 != p_60)
                  _fail(p_60);
                else
                  j_60 = p_60;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_2);
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, w_2, x_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, k_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  y_60 = t;
  v_60 :
  if(match_cons(y_60, sym_TCons_2))
    {
      z_60 = ATgetArgument(y_60, 0);
      a_61 = ATgetArgument(y_60, 1);
      w_60 :
      if(match_cons(a_61, sym_TCons_2))
        {
          b_61 = ATgetArgument(a_61, 0);
          c_61 = ATgetArgument(a_61, 1);
          x_60 :
          if(match_cons(c_61, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(z_60), not_null(b_61));
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
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  l_61 = t;
  i_61 :
  if(match_cons(l_61, sym_TCons_2))
    {
      m_61 = ATgetArgument(l_61, 0);
      n_61 = ATgetArgument(l_61, 1);
      j_61 :
      if(match_cons(n_61, sym_TCons_2))
        {
          o_61 = ATgetArgument(n_61, 0);
          p_61 = ATgetArgument(n_61, 1);
          k_61 :
          if(match_cons(p_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(m_61), not_null(o_61));
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
  ATerm a_62 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm g_14 = t;
      if(PushChoice()==0)
        {
          ATerm d_3 (ATerm t)
          {
            ATerm b_62 = NULL,c_62 = NULL;
            b_62 = t;
            u_61 :
            if(match_cons(b_62, sym_Output_1))
              {
                c_62 = ATgetArgument(b_62, 0);
                if(a_62 != NULL && a_62 != c_62)
                  _fail(c_62);
                else
                  a_62 = c_62;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_3);
          PopChoice();
        }
      else
        {
          t = g_14;
          {
            ATerm d_62 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            d_62 = t;
            if(a_62 != NULL && a_62 != d_62)
              _fail(d_62);
            else
              a_62 = d_62;
          }
        }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, b_3, c_3);
  }
  t = f_14;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = not_null(a_62);
          return(t);
        }
        t = split_2(t, j_3, _id);
        return(t);
      }
      t = TCons_2(t, f_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, e_3);
    {
      ATerm h_14 = t;
      if(PushChoice()==0)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm m_3 (ATerm t)
            {
              ATerm e_62 = NULL;
              e_62 = t;
              w_61 :
              if(!(match_cons(e_62, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, m_3);
            return(t);
          }
          ATerm l_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_3, l_3);
          PopChoice();
        }
      else
        {
          t = h_14;
          {
            ATerm v_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm m_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  ATerm i_14;
  i_14 = t;
  t = dtime_0(t);
  t = i_14;
  t = y_66(t);
  {
    ATerm j_14;
    j_14 = t;
    {
      ATerm n_62 = NULL;
      t = dtime_0(t);
      n_62 = t;
      if(m_62 != NULL && m_62 != n_62)
        _fail(n_62);
      else
        m_62 = n_62;
    }
    t = j_14;
    o_62 = t;
    j_62 :
    if(match_cons(o_62, sym_TCons_2))
      {
        p_62 = ATgetArgument(o_62, 0);
        q_62 = ATgetArgument(o_62, 1);
        k_62 :
        if(match_cons(q_62, sym_TCons_2))
          {
            r_62 = ATgetArgument(q_62, 0);
            s_62 = ATgetArgument(q_62, 1);
            l_62 :
            if(match_cons(s_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(m_62)), not_null(p_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_63 = NULL;
  a_63 = t;
  t = SSL_ReadFromFile(not_null(a_63));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm k_63 = NULL;
  ATerm m_63 = NULL,o_63 = NULL;
  k_63 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm n_63 = NULL;
      t = not_null(k_63);
      t = d_80(t);
      n_63 = t;
      if(m_63 != NULL && m_63 != n_63)
        _fail(n_63);
      else
        m_63 = n_63;
    }
    t = k_14;
    {
      ATerm p_63 = NULL;
      t = not_null(k_63);
      t = e_80(t);
      p_63 = t;
      if(o_63 != NULL && o_63 != p_63)
        _fail(p_63);
      else
        o_63 = p_63;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_63), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_63 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm m_14 = t;
    if(PushChoice()==0)
      {
        ATerm w_3 (ATerm t)
        {
          ATerm x_63 = NULL,y_63 = NULL;
          x_63 = t;
          u_63 :
          if(match_cons(x_63, sym_Input_1))
            {
              y_63 = ATgetArgument(x_63, 0);
              if(w_63 != NULL && w_63 != y_63)
                _fail(y_63);
              else
                w_63 = y_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, w_3);
        PopChoice();
      }
    else
      {
        t = m_14;
        {
          ATerm z_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          z_63 = t;
          if(w_63 != NULL && w_63 != z_63)
            _fail(z_63);
          else
            w_63 = z_63;
        }
      }
  }
  t = l_14;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(w_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_64 = NULL;
  d_64 = t;
  c_64 :
  if(!(match_cons(d_64, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm n_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        {
          ATerm o_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_3);
  t = x_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_64 = NULL;
  f_64 = t;
  t = SSL_table_create(not_null(f_64));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_64 = NULL;
  j_64 = t;
  {
    ATerm p_14;
    p_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_64), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = p_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  v_64 = t;
  p_64 :
  if(match_cons(v_64, sym_Cons_2))
    {
      r_64 = ATgetArgument(v_64, 0);
      s_64 = ATgetArgument(v_64, 1);
      q_64 :
      if(match_cons(s_64, sym_Cons_2))
        {
          t_64 = ATgetArgument(s_64, 0);
          u_64 = ATgetArgument(s_64, 1);
          {
            ATerm z_64 = NULL;
            t = not_null(r_64);
            t = e_0(t);
            {
              ATerm a_65 = NULL;
              t = not_null(t_64);
              t = f_0(t);
              a_65 = t;
              if(z_64 != NULL && z_64 != a_65)
                _fail(a_65);
              else
                z_64 = a_65;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_64), not_null(u_64));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(v_64, "register-usage-info"))
        t = register_usage_1(t, g_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_14 = t;
  if(PushChoice()==0)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm v_65 = NULL;
        v_65 = t;
        k_65 :
        if(!(match_string(v_65, "-S")))
          {
            if(!(match_string(v_65, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, z_3, a_4, b_4);
      PopChoice();
    }
  else
    {
      t = q_14;
      {
        ATerm r_14 = t;
        if(PushChoice()==0)
          {
            ATerm c_4 (ATerm t)
            {
              ATerm w_65 = NULL;
              w_65 = t;
              l_65 :
              if(!(match_string(w_65, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, c_4, g_4, h_4);
            PopChoice();
          }
        else
          {
            t = r_14;
            {
              ATerm s_14 = t;
              if(PushChoice()==0)
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm x_65 = NULL;
                    x_65 = t;
                    m_65 :
                    if(!(match_string(x_65, "-v")))
                      {
                        if(!(match_string(x_65, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm r_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm s_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, i_4, r_4, s_4);
                  PopChoice();
                }
              else
                {
                  t = s_14;
                  {
                    ATerm t_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm t_4 (ATerm t)
                        {
                          ATerm y_65 = NULL;
                          y_65 = t;
                          n_65 :
                          if(!(match_string(y_65, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_4 (ATerm t)
                        {
                          ATerm z_65 = NULL;
                          z_65 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_65));
                          return(t);
                        }
                        ATerm w_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, t_4, v_4, w_4);
                        PopChoice();
                      }
                    else
                      {
                        t = t_14;
                        {
                          ATerm u_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_4 (ATerm t)
                              {
                                ATerm b_66 = NULL;
                                b_66 = t;
                                p_65 :
                                if(!(match_string(b_66, "-i")))
                                  {
                                    if(!(match_string(b_66, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_5 (ATerm t)
                              {
                                ATerm d_66 = NULL;
                                d_66 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_66));
                                return(t);
                              }
                              ATerm d_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, x_4, c_5, d_5);
                              PopChoice();
                            }
                          else
                            {
                              t = u_14;
                              {
                                ATerm v_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm g_66 = NULL;
                                      g_66 = t;
                                      r_65 :
                                      if(!(match_string(g_66, "-o")))
                                        {
                                          if(!(match_string(g_66, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_5 (ATerm t)
                                    {
                                      ATerm j_66 = NULL;
                                      j_66 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_66));
                                      return(t);
                                    }
                                    ATerm k_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_5, j_5, k_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_14;
                                    {
                                      ATerm w_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_5 (ATerm t)
                                          {
                                            ATerm l_66 = NULL;
                                            l_66 = t;
                                            t_65 :
                                            if(!(match_string(l_66, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm n_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, l_5, m_5, n_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_14;
                                          {
                                            ATerm s_5 (ATerm t)
                                            {
                                              ATerm p_66 = NULL;
                                              p_66 = t;
                                              u_65 :
                                              if(!(match_string(p_66, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm b_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, s_5, v_5, b_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_table_destroy(not_null(u_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_67 = NULL;
  a_67 = t;
  t = SSL_exit(not_null(a_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_67 = NULL;
  e_67 = t;
  t = SSL_implode_string(not_null(e_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm h_67 (ATerm t)
  {
    ATerm z_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, h_67);
        PopChoice();
      }
    else
      {
        t = z_14;
        t = Nil_0(t);
        t = d_79(t);
      }
    return(t);
  }
  t = h_67(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_15 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_15;
      {
        ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
        k_67 = t;
        j_67 :
        if(match_cons(k_67, sym_Cons_2))
          {
            l_67 = ATgetArgument(k_67, 0);
            m_67 = ATgetArgument(k_67, 1);
            t = not_null(l_67);
            {
              ATerm c_6 (ATerm t)
              {
                t = not_null(m_67);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, c_6);
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
  ATerm s_67 = NULL;
  s_67 = t;
  t = SSL_explode_string(not_null(s_67));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm v_67 (ATerm t)
  {
    ATerm b_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_15;
        t = Cons_2(t, p_78, v_67);
      }
    return(t);
  }
  t = v_67(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  b_68 = t;
  x_67 :
  if(match_cons(b_68, sym_TCons_2))
    {
      c_68 = ATgetArgument(b_68, 0);
      d_68 = ATgetArgument(b_68, 1);
      y_67 :
      if(match_cons(c_68, sym_Nil_0))
        {
          z_67 :
          if(match_cons(d_68, sym_TCons_2))
            {
              e_68 = ATgetArgument(d_68, 0);
              f_68 = ATgetArgument(d_68, 1);
              a_68 :
              if(match_cons(f_68, sym_TNil_0))
                t = not_null(e_68);
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
ATerm Rev_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  n_68 = t;
  j_68 :
  if(match_cons(n_68, sym_TCons_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      r_68 = ATgetArgument(n_68, 1);
      k_68 :
      if(match_cons(o_68, sym_Cons_2))
        {
          p_68 = ATgetArgument(o_68, 0);
          q_68 = ATgetArgument(o_68, 1);
          l_68 :
          if(match_cons(r_68, sym_TCons_2))
            {
              s_68 = ATgetArgument(r_68, 0);
              t_68 = ATgetArgument(r_68, 1);
              m_68 :
              if(match_cons(t_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_68), not_null(s_68)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm v_68 (ATerm), ATerm w_68 (ATerm))
{
  ATerm c_69 (ATerm t)
  {
    ATerm c_15 = t;
    if(PushChoice()==0)
      {
        t = v_68(t);
        t = c_69(t);
        PopChoice();
      }
    else
      {
        t = c_15;
        t = w_68(t);
      }
    return(t);
  }
  t = c_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_68 (ATerm))
{
  t = repeat_2(t, y_68, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm e_69 = NULL;
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_69), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm k_69 = NULL,l_69 = NULL;
  k_69 = t;
  j_69 :
  if(match_cons(k_69, sym_Program_1))
    {
      l_69 = ATgetArgument(k_69, 0);
      {
        ATerm t_69 = NULL;
        t = not_null(l_69);
        t = g_57(t);
        t_69 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_70 = NULL;
  ATerm d_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm c_70 = NULL;
      c_70 = t;
      if(b_70 != NULL && b_70 != c_70)
        _fail(c_70);
      else
        b_70 = c_70;
      return(t);
    }
    t = Program_1(t, e_6);
    return(t);
  }
  t = option_defined_1(t, d_6);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm d_70 = NULL;
      ATerm e_70 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm j_6 (ATerm t)
        {
          t = not_null(b_70);
          return(t);
        }
        t = short_description_1(t, j_6);
        t = concat_strings_0(t);
        e_70 = t;
        if(d_70 != NULL && d_70 != e_70)
          _fail(e_70);
        else
          d_70 = e_70;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_70), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, i_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm f_70 = NULL;
        f_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, k_6);
      {
        ATerm l_6 (ATerm t)
        {
          ATerm h_70 = NULL;
          ATerm i_70 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm m_6 (ATerm t)
            {
              t = not_null(b_70);
              return(t);
            }
            t = long_description_1(t, m_6);
            t = concat_strings_0(t);
            i_70 = t;
            if(h_70 != NULL && h_70 != i_70)
              _fail(i_70);
            else
              h_70 = i_70;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, l_6);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  r_70 = t;
  o_70 :
  if(match_cons(r_70, sym_TCons_2))
    {
      s_70 = ATgetArgument(r_70, 0);
      t_70 = ATgetArgument(r_70, 1);
      p_70 :
      if(match_cons(t_70, sym_TCons_2))
        {
          u_70 = ATgetArgument(t_70, 0);
          v_70 = ATgetArgument(t_70, 1);
          q_70 :
          if(match_cons(v_70, sym_TNil_0))
            {
              ATerm e_15;
              e_15 = t;
              t = SSL_printnl(not_null(s_70), not_null(u_70));
              t = e_15;
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
ATerm Undefined_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm g_71 = NULL,h_71 = NULL;
  g_71 = t;
  f_71 :
  if(match_cons(g_71, sym_Undefined_1))
    {
      h_71 = ATgetArgument(g_71, 0);
      {
        ATerm j_71 = NULL;
        t = not_null(h_71);
        t = h_57(t);
        j_71 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_71));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm n_71 (ATerm t)
  {
    ATerm f_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, x_78, _id);
        PopChoice();
      }
    else
      {
        t = f_15;
        t = Cons_2(t, _id, n_71);
      }
    return(t);
  }
  t = n_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_66 (ATerm))
{
  t = fetch_1(t, c_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_71 = NULL;
  p_71 = t;
  o_71 :
  if(!(match_cons(p_71, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm g_15 = t;
  if(PushChoice()==0)
    {
      t = v_80(t);
      PopChoice();
    }
  else
    t = g_15;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
  u_71 = t;
  r_71 :
  if(match_cons(u_71, sym_TCons_2))
    {
      v_71 = ATgetArgument(u_71, 0);
      w_71 = ATgetArgument(u_71, 1);
      s_71 :
      if(match_cons(w_71, sym_TCons_2))
        {
          x_71 = ATgetArgument(w_71, 0);
          y_71 = ATgetArgument(w_71, 1);
          t_71 :
          if(match_cons(y_71, sym_TNil_0))
            t = SSL_table_get(not_null(v_71), not_null(x_71));
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
ATerm table_push_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  i_72 = t;
  e_72 :
  if(match_cons(i_72, sym_TCons_2))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      f_72 :
      if(match_cons(k_72, sym_TCons_2))
        {
          l_72 = ATgetArgument(k_72, 0);
          m_72 = ATgetArgument(k_72, 1);
          g_72 :
          if(match_cons(m_72, sym_TCons_2))
            {
              n_72 = ATgetArgument(m_72, 0);
              o_72 = ATgetArgument(m_72, 1);
              h_72 :
              if(match_cons(o_72, sym_TNil_0))
                {
                  ATerm h_15;
                  h_15 = t;
                  {
                    ATerm s_72 = NULL;
                    ATerm t_72 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_15 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = i_15;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      t_72 = t;
                      if(s_72 != NULL && s_72 != t_72)
                        _fail(t_72);
                      else
                        s_72 = t_72;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_72), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_72), not_null(s_72)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = h_15;
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
ATerm register_usage_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm x_72 = NULL;
  ATerm y_72 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = i_65(t);
  y_72 = t;
  if(x_72 != NULL && x_72 != y_72)
    _fail(y_72);
  else
    x_72 = y_72;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_72), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  g_73 = t;
  d_73 :
  if(match_cons(g_73, sym_Cons_2))
    {
      e_73 = ATgetArgument(g_73, 0);
      f_73 = ATgetArgument(g_73, 1);
      {
        ATerm j_73 = NULL;
        t = not_null(e_73);
        t = b_0(t);
        {
          ATerm k_73 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = c_0(t);
          k_73 = t;
          if(j_73 != NULL && j_73 != k_73)
            _fail(k_73);
          else
            j_73 = k_73;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_73), not_null(f_73));
        }
      }
    }
  else
    {
      if(match_string(g_73, "register-usage-info"))
        t = register_usage_1(t, d_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm p_73 = NULL;
    p_73 = t;
    o_73 :
    if(!(match_string(p_73, "--help")))
      {
        if(!(match_string(p_73, "-h")))
          {
            if(!(match_string(p_73, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, r_6, s_6, w_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(match_cons(s_73, sym_Cons_2))
    {
      t_73 = ATgetArgument(s_73, 0);
      u_73 = ATgetArgument(s_73, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_73)), not_null(u_73));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(match_cons(f_74, sym_Cons_2))
    {
      g_74 = ATgetArgument(f_74, 0);
      h_74 = ATgetArgument(f_74, 1);
      {
        ATerm k_74 = NULL;
        t = not_null(g_74);
        {
          ATerm m_74 = NULL;
          t = g_63(t);
          k_74 = t;
          t = not_null(h_74);
          t = h_63(t);
          m_74 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_74), not_null(m_74));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  r_74 :
  if(!(match_cons(s_74, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm j_15;
  j_15 = t;
  {
    ATerm y_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = g_65(t);
      return(t);
    }
    t = try_1(t, y_6);
  }
  t = j_15;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm u_74 = NULL;
      u_74 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_74));
      return(t);
    }
    ATerm a_7 (ATerm t)
    {
      ATerm k_15 = t;
      if(PushChoice()==0)
        {
          ATerm l_15 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = l_15;
              t = g_65(t);
              t = Cons_2(t, _id, a_7);
            }
          PopChoice();
        }
      else
        {
          t = k_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_6, a_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm l_75 = NULL,m_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
    l_75 = t;
    a_75 :
    if(match_cons(l_75, sym_TCons_2))
      {
        m_75 = ATgetArgument(l_75, 0);
        q_75 = ATgetArgument(l_75, 1);
        b_75 :
        if(match_cons(q_75, sym_TCons_2))
          {
            r_75 = ATgetArgument(q_75, 0);
            s_75 = ATgetArgument(q_75, 1);
            d_75 :
            if(match_cons(s_75, sym_TCons_2))
              {
                t_75 = ATgetArgument(s_75, 0);
                u_75 = ATgetArgument(s_75, 1);
                e_75 :
                if(match_cons(u_75, sym_TNil_0))
                  {
                    if(h_75 != NULL && h_75 != m_75)
                      _fail(m_75);
                    else
                      h_75 = m_75;
                    if(i_75 != NULL && i_75 != r_75)
                      _fail(r_75);
                    else
                      i_75 = r_75;
                    if(j_75 != NULL && j_75 != t_75)
                      _fail(t_75);
                    else
                      j_75 = t_75;
                    t = SSL_table_put(not_null(h_75), not_null(i_75), not_null(j_75));
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
  t = m_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm x_75 = NULL;
  ATerm r_15;
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = r_15;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm s_15 = t;
      if(PushChoice()==0)
        {
          t = f_65(t);
          PopChoice();
        }
      else
        {
          t = s_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_7);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm u_15 = t;
        if(PushChoice()==0)
          {
            t = option_defined_1(t, Help_0);
            t = system_usage_0(t);
            t = (ATerm) ATmakeInt(0);
            t = exit_0(t);
            PopChoice();
          }
        else
          {
            t = u_15;
            {
              ATerm e_7 (ATerm t)
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm y_75 = NULL;
                  y_75 = t;
                  if(x_75 != NULL && x_75 != y_75)
                    _fail(y_75);
                  else
                    x_75 = y_75;
                  return(t);
                }
                t = Undefined_1(t, q_7);
                return(t);
              }
              t = option_defined_1(t, e_7);
              {
                ATerm v_15;
                v_15 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_75), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = v_15;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_7);
      {
        ATerm w_15;
        w_15 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = w_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm x_15 = t;
    if(PushChoice()==0)
      {
        t = n_66(t);
        PopChoice();
      }
    else
      {
        t = x_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_7);
  t = store_options_0(t);
  {
    ATerm g_16 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, o_66);
        PopChoice();
      }
    else
      {
        t = g_16;
        {
          ATerm h_16 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, m_66);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = h_16;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  t = iowrap_3(t, h_66, i_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      t = TCons_2(t, e_66, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, t_7);
    return(t);
  }
  t = iowrap_2(t, s_7, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm v_7 (ATerm t)
    {
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_clean_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, v_7);
    return(t);
  }
  t = iowrap_1(t, u_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
