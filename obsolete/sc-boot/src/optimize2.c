#include <stratego.h>
#include <stratego-lib.h>
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
ATerm DynamicRules_1 (ATerm, ATerm t_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm crush_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm free_vars_3 (ATerm, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_82 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm b_80 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm alltd_1 (ATerm, ATerm i_84 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm substitute_1 (ATerm, ATerm m_85 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm for_3 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm HdMember_1 (ATerm, ATerm r_75 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_83 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_61 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm));
ATerm zip_1 (ATerm, ATerm w_77 (ATerm));
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
ATerm downup_1 (ATerm, ATerm i_82 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm Strategies_1 (ATerm, ATerm d_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_61 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm c_87 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_65 (ATerm));
ATerm map_1 (ATerm, ATerm j_79 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_69 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_65 (ATerm));
ATerm Program_1 (ATerm, ATerm l_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_65 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_66 (ATerm));
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
                  ATerm m_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = m_8;
                      {
                        ATerm n_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm o_8;
                            o_8 = t;
                            {
                              ATerm a_0 (ATerm t)
                              {
                                t = not_null(z_1);
                                return(t);
                              }
                              t = HdMember_1(t, a_0);
                            }
                            t = o_8;
                            t = Cons_2(t, _id, e_2);
                            PopChoice();
                          }
                        else
                          {
                            t = n_8;
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
ATerm DynamicRules_1 (ATerm t, ATerm t_60 (ATerm))
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
        t = t_60(t);
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(l_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
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
          t = i_63(t);
          y_2 = t;
          t = not_null(v_2);
          t = j_63(t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_2), not_null(a_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, d_86, b_86);
      PopChoice();
    }
  else
    {
      t = p_8;
      t = DynamicRules_1(t, b_86);
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
  s_3 = t;
  n_3 :
  if(match_cons(s_3, sym_LRule_1))
    {
      t_3 = ATgetArgument(s_3, 0);
      o_3 :
      if(match_cons(t_3, sym_Rule_3))
        {
          p_3 = ATgetArgument(t_3, 0);
          q_3 = ATgetArgument(t_3, 1);
          r_3 = ATgetArgument(t_3, 2);
          t = not_null(p_3);
          t = tvars_0(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_3, sym_Scope_2))
        {
          t_3 = ATgetArgument(s_3, 0);
          u_3 = ATgetArgument(s_3, 1);
          t = not_null(t_3);
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
                  ATerm r_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(p_4);
                      PopChoice();
                    }
                  else
                    {
                      t = r_8;
                      {
                        ATerm s_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(p_4);
                              return(t);
                            }
                            t = HdMember_1(t, b_0);
                            t = u_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_8;
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
ATerm foldr_3 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm t_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = m_74(t);
      PopChoice();
    }
  else
    {
      t = t_8;
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
              ATerm x_8;
              x_8 = t;
              {
                ATerm f_5 = NULL;
                t = not_null(a_5);
                t = o_74(t);
                f_5 = t;
                if(e_5 != NULL && e_5 != f_5)
                  _fail(f_5);
                else
                  e_5 = f_5;
              }
              t = x_8;
              {
                ATerm h_5 = NULL;
                t = not_null(b_5);
                t = foldr_3(t, m_74, n_74, o_74);
                h_5 = t;
                if(g_5 != NULL && g_5 != h_5)
                  _fail(h_5);
                else
                  g_5 = h_5;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = n_74(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
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
    t = foldr_3(t, c_76, d_76, e_76);
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_6 (ATerm t)
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = m_71(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        {
          ATerm g_9 = t;
          if(PushChoice()==0)
            {
              ATerm f_6 = NULL;
              ATerm h_9;
              h_9 = t;
              {
                ATerm g_6 = NULL;
                t = n_71(t);
                g_6 = t;
                if(f_6 != NULL && f_6 != g_6)
                  _fail(g_6);
                else
                  f_6 = g_6;
              }
              t = h_9;
              {
                ATerm c_0 (ATerm t)
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
                t = o_71(t, c_0, h_6, j_0);
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
              t = g_9;
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
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = q_9;
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
        ATerm t_6 = NULL;
        ATerm u_6 = NULL,w_6 = NULL;
        ATerm v_6 = NULL;
        t = not_null(q_6);
        t = tvars_0(t);
        v_6 = t;
        if(u_6 != NULL && u_6 != v_6)
          _fail(v_6);
        else
          u_6 = v_6;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_6), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = isect_0(t);
        w_6 = t;
        if(t_6 != NULL && t_6 != w_6)
          _fail(w_6);
        else
          t_6 = w_6;
        {
          ATerm r_9 = t;
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
            t = r_9;
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_6), not_null(q_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = e_82(t);
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
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_7), not_null(k_7)));
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_7), not_null(p_7)));
    return(t);
  }
  l_7 = t;
  f_7 :
  if(match_cons(l_7, sym_Seq_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      p_7 = ATgetArgument(l_7, 1);
      g_7 :
      if(match_cons(p_7, sym_Scope_2))
        {
          j_7 = ATgetArgument(p_7, 0);
          k_7 = ATgetArgument(p_7, 1);
          h_7 :
          if(match_cons(m_7, sym_Scope_2))
            {
              n_7 = ATgetArgument(m_7, 0);
              o_7 = ATgetArgument(m_7, 1);
              {
                ATerm s_9 = t;
                if(PushChoice()==0)
                  {
                    t = w_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = s_9;
                    t = x_7(t);
                  }
              }
            }
          else
            t = w_7(t);
        }
      else
        {
          i_7 :
          if(match_cons(m_7, sym_Scope_2))
            {
              n_7 = ATgetArgument(m_7, 0);
              o_7 = ATgetArgument(m_7, 1);
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
ATerm at_suffix_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm z_9 = t;
    if(PushChoice()==0)
      {
        t = b_80(t);
        PopChoice();
      }
    else
      {
        t = z_9;
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
        ATerm i_9 = NULL,j_9 = NULL;
        ATerm y_9 = NULL;
        t = not_null(e_9);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
            k_9 = t;
            y_8 :
            if(match_cons(k_9, sym_Cons_2))
              {
                l_9 = ATgetArgument(k_9, 0);
                p_9 = ATgetArgument(k_9, 1);
                z_8 :
                if(match_cons(l_9, sym_SDef_3))
                  {
                    m_9 = ATgetArgument(l_9, 0);
                    n_9 = ATgetArgument(l_9, 1);
                    o_9 = ATgetArgument(l_9, 2);
                    a_9 :
                    if(match_cons(n_9, sym_Nil_0))
                      {
                        ATerm x_9 = NULL;
                        t = not_null(f_9);
                        {
                          ATerm s_0 (ATerm t)
                          {
                            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
                            t_9 = t;
                            u_8 :
                            if(match_cons(t_9, sym_Call_2))
                              {
                                u_9 = ATgetArgument(t_9, 0);
                                w_9 = ATgetArgument(t_9, 1);
                                v_8 :
                                if(match_cons(u_9, sym_SVar_1))
                                  {
                                    v_9 = ATgetArgument(u_9, 0);
                                    w_8 :
                                    if(match_cons(w_9, sym_Nil_0))
                                      {
                                        if(m_9 != NULL && m_9 != v_9)
                                          _fail(v_9);
                                        else
                                          m_9 = v_9;
                                        t = not_null(o_9);
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
                          x_9 = t;
                          if(i_9 != NULL && i_9 != x_9)
                            _fail(x_9);
                          else
                            i_9 = x_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm a_10 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = a_10;
                          }
                        }
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
          t = at_suffix_1(t, r_0);
          y_9 = t;
          if(j_9 != NULL && j_9 != y_9)
            _fail(y_9);
          else
            j_9 = y_9;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_9), not_null(i_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  p_10 = t;
  g_10 :
  if(match_cons(p_10, sym_TCons_2))
    {
      q_10 = ATgetArgument(p_10, 0);
      s_10 = ATgetArgument(p_10, 1);
      h_10 :
      if(match_cons(q_10, sym_Build_1))
        {
          r_10 = ATgetArgument(q_10, 0);
          i_10 :
          if(match_cons(s_10, sym_TCons_2))
            {
              t_10 = ATgetArgument(s_10, 0);
              w_10 = ATgetArgument(s_10, 1);
              j_10 :
              if(match_cons(t_10, sym_Where_1))
                {
                  u_10 = ATgetArgument(t_10, 0);
                  k_10 :
                  if(match_cons(u_10, sym_Prim_2))
                    {
                      n_10 = ATgetArgument(u_10, 0);
                      o_10 = ATgetArgument(u_10, 1);
                      l_10 :
                      if(match_cons(w_10, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(n_10), not_null(o_10));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
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
  p_11 = t;
  h_11 :
  if(match_cons(p_11, sym_TCons_2))
    {
      q_11 = ATgetArgument(p_11, 0);
      s_11 = ATgetArgument(p_11, 1);
      i_11 :
      if(match_cons(q_11, sym_Build_1))
        {
          r_11 = ATgetArgument(q_11, 0);
          j_11 :
          if(match_cons(s_11, sym_TCons_2))
            {
              t_11 = ATgetArgument(s_11, 0);
              v_11 = ATgetArgument(s_11, 1);
              k_11 :
              if(match_cons(t_11, sym_Where_1))
                {
                  u_11 = ATgetArgument(t_11, 0);
                  l_11 :
                  if(match_cons(u_11, sym_Build_1))
                    {
                      o_11 = ATgetArgument(u_11, 0);
                      m_11 :
                      if(match_cons(v_11, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_11));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
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
  ATerm k_14 = NULL,l_14 = NULL,q_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  k_14 = t;
  i_12 :
  if(match_cons(k_14, sym_TCons_2))
    {
      l_14 = ATgetArgument(k_14, 0);
      c_15 = ATgetArgument(k_14, 1);
      j_12 :
      if(match_cons(l_14, sym_Build_1))
        {
          q_14 = ATgetArgument(l_14, 0);
          k_12 :
          if(match_cons(q_14, sym_Op_2))
            {
              a_15 = ATgetArgument(q_14, 0);
              b_15 = ATgetArgument(q_14, 1);
              l_12 :
              if(match_cons(c_15, sym_TCons_2))
                {
                  d_15 = ATgetArgument(c_15, 0);
                  h_15 = ATgetArgument(c_15, 1);
                  m_12 :
                  if(match_cons(d_15, sym_Match_1))
                    {
                      e_15 = ATgetArgument(d_15, 0);
                      n_12 :
                      if(match_cons(e_15, sym_Op_2))
                        {
                          f_15 = ATgetArgument(e_15, 0);
                          g_15 = ATgetArgument(e_15, 1);
                          o_12 :
                          if(match_cons(h_15, sym_TNil_0))
                            {
                              ATerm k_15 = NULL,l_15 = NULL;
                              if(a_15 != NULL && a_15 != f_15)
                                _fail(f_15);
                              else
                                a_15 = f_15;
                              if(k_15 != NULL && k_15 != g_15)
                                _fail(g_15);
                              else
                                k_15 = g_15;
                              {
                                ATerm t_15 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_15), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm t_0 (ATerm t)
                                  {
                                    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
                                    m_15 = t;
                                    e_12 :
                                    if(match_cons(m_15, sym_TCons_2))
                                      {
                                        n_15 = ATgetArgument(m_15, 0);
                                        o_15 = ATgetArgument(m_15, 1);
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
                                  if(l_15 != NULL && l_15 != t_15)
                                    _fail(t_15);
                                  else
                                    l_15 = t_15;
                                }
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_15), not_null(b_15))));
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
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  o_16 = t;
  i_16 :
  if(match_cons(o_16, sym_TCons_2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      j_16 :
      if(match_cons(q_16, sym_TCons_2))
        {
          r_16 = ATgetArgument(q_16, 0);
          s_16 = ATgetArgument(q_16, 1);
          k_16 :
          if(match_cons(s_16, sym_TNil_0))
            {
              if(p_16 != NULL && p_16 != r_16)
                _fail(r_16);
              else
                p_16 = r_16;
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
  ATerm e_18 = NULL,f_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,j_19 = NULL,k_19 = NULL;
  e_18 = t;
  w_16 :
  if(match_cons(e_18, sym_TCons_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      w_18 = ATgetArgument(e_18, 1);
      x_16 :
      if(match_cons(f_18, sym_Build_1))
        {
          t_18 = ATgetArgument(f_18, 0);
          y_16 :
          if(match_cons(t_18, sym_Op_2))
            {
              u_18 = ATgetArgument(t_18, 0);
              v_18 = ATgetArgument(t_18, 1);
              z_16 :
              if(match_cons(w_18, sym_TCons_2))
                {
                  x_18 = ATgetArgument(w_18, 0);
                  k_19 = ATgetArgument(w_18, 1);
                  a_17 :
                  if(match_cons(x_18, sym_Match_1))
                    {
                      y_18 = ATgetArgument(x_18, 0);
                      b_17 :
                      if(match_cons(y_18, sym_Op_2))
                        {
                          z_18 = ATgetArgument(y_18, 0);
                          j_19 = ATgetArgument(y_18, 1);
                          d_18 :
                          if(match_cons(k_19, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm b_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = b_10;
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
  ATerm c_10 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = c_10;
      {
        ATerm d_10 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm e_10 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = e_10;
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
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  ATerm m_21 (ATerm t)
  {
    ATerm j_21 = NULL;
    ATerm k_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    k_21 = t;
    if(j_21 != NULL && j_21 != k_21)
      _fail(k_21);
    else
      j_21 = k_21;
    t = not_null(j_21);
    return(t);
  }
  q_20 = t;
  m_20 :
  if(match_cons(q_20, sym_Seq_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      n_20 :
      if(match_cons(s_20, sym_Seq_2))
        {
          o_20 = ATgetArgument(s_20, 0);
          p_20 = ATgetArgument(s_20, 1);
          {
            ATerm f_10 = t;
            if(PushChoice()==0)
              {
                ATerm w_20 = NULL;
                ATerm g_21 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = BMF_0(t);
                g_21 = t;
                if(w_20 != NULL && w_20 != g_21)
                  _fail(g_21);
                else
                  w_20 = g_21;
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_20), not_null(p_20));
                PopChoice();
              }
            else
              {
                t = f_10;
                t = m_21(t);
              }
          }
        }
      else
        t = m_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  x_21 = t;
  t_21 :
  if(match_cons(x_21, sym_Seq_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      a_22 = ATgetArgument(x_21, 1);
      u_21 :
      if(match_cons(y_21, sym_Build_1))
        {
          z_21 = ATgetArgument(y_21, 0);
          v_21 :
          if(match_cons(a_22, sym_Seq_2))
            {
              b_22 = ATgetArgument(a_22, 0);
              d_22 = ATgetArgument(a_22, 1);
              w_21 :
              if(match_cons(b_22, sym_Build_1))
                {
                  c_22 = ATgetArgument(b_22, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_22)), not_null(d_22));
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  l_22 :
  if(match_cons(n_22, sym_Scope_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      m_22 :
      if(match_cons(p_22, sym_Scope_2))
        {
          q_22 = ATgetArgument(p_22, 0);
          r_22 = ATgetArgument(p_22, 1);
          {
            ATerm v_22 = NULL;
            ATerm w_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            w_22 = t;
            if(v_22 != NULL && v_22 != w_22)
              _fail(w_22);
            else
              v_22 = w_22;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_22), not_null(r_22));
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
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  e_24 = t;
  p_23 :
  if(match_cons(e_24, sym_TCons_2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      t_23 :
      if(match_cons(g_24, sym_TCons_2))
        {
          h_24 = ATgetArgument(g_24, 0);
          k_24 = ATgetArgument(g_24, 1);
          u_23 :
          if(match_cons(h_24, sym_Cons_2))
            {
              i_24 = ATgetArgument(h_24, 0);
              j_24 = ATgetArgument(h_24, 1);
              d_24 :
              if(match_cons(k_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL;
  w_24 = t;
  p_24 :
  if(match_cons(w_24, sym_TCons_2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      q_24 :
      if(match_cons(y_24, sym_TCons_2))
        {
          z_24 = ATgetArgument(y_24, 0);
          i_25 = ATgetArgument(y_24, 1);
          r_24 :
          if(match_cons(z_24, sym_Cons_2))
            {
              a_25 = ATgetArgument(z_24, 0);
              f_25 = ATgetArgument(z_24, 1);
              s_24 :
              if(match_cons(a_25, sym_TCons_2))
                {
                  b_25 = ATgetArgument(a_25, 0);
                  c_25 = ATgetArgument(a_25, 1);
                  t_24 :
                  if(match_cons(c_25, sym_TCons_2))
                    {
                      d_25 = ATgetArgument(c_25, 0);
                      e_25 = ATgetArgument(c_25, 1);
                      u_24 :
                      if(match_cons(e_25, sym_TNil_0))
                        {
                          v_24 :
                          if(match_cons(i_25, sym_TNil_0))
                            {
                              ATerm k_25 = NULL;
                              if(x_24 != NULL && x_24 != b_25)
                                _fail(b_25);
                              else
                                x_24 = b_25;
                              if(k_25 != NULL && k_25 != d_25)
                                _fail(d_25);
                              else
                                k_25 = d_25;
                              t = not_null(k_25);
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
  ATerm x_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = x_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm v_25 = NULL;
  ATerm x_25 = NULL,y_25 = NULL;
  v_25 = t;
  {
    ATerm z_25 = NULL;
    t = not_null(v_25);
    {
      ATerm a_26 = NULL;
      t = i_85(t);
      z_25 = t;
      if(x_25 != NULL && x_25 != z_25)
        _fail(z_25);
      else
        x_25 = z_25;
      t = j_85(t);
      a_26 = t;
      if(y_25 != NULL && y_25 != a_26)
        _fail(a_26);
      else
        y_25 = a_26;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm e_26 (ATerm t)
  {
    ATerm y_10 = t;
    if(PushChoice()==0)
      {
        t = i_84(t);
        PopChoice();
      }
    else
      {
        t = y_10;
        t = _all(t, e_26);
      }
    return(t);
  }
  t = e_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  m_26 = t;
  i_26 :
  if(match_cons(m_26, sym_TCons_2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      j_26 :
      if(match_cons(o_26, sym_TCons_2))
        {
          p_26 = ATgetArgument(o_26, 0);
          q_26 = ATgetArgument(o_26, 1);
          k_26 :
          if(match_cons(q_26, sym_TNil_0))
            {
              ATerm u_26 = NULL;
              if(u_26 != NULL && u_26 != p_26)
                _fail(p_26);
              else
                u_26 = p_26;
            }
          else
            {
              if(match_cons(q_26, sym_TCons_2))
                {
                  r_26 = ATgetArgument(q_26, 0);
                  s_26 = ATgetArgument(q_26, 1);
                  l_26 :
                  if(match_cons(s_26, sym_TNil_0))
                    {
                      ATerm a_27 = NULL;
                      ATerm b_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      b_27 = t;
                      if(a_27 != NULL && a_27 != b_27)
                        _fail(b_27);
                      else
                        a_27 = b_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = subs_args_0(t);
  j_27 = t;
  g_27 :
  if(match_cons(j_27, sym_TCons_2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      h_27 :
      if(match_cons(l_27, sym_TCons_2))
        {
          m_27 = ATgetArgument(l_27, 0);
          n_27 = ATgetArgument(l_27, 1);
          i_27 :
          if(match_cons(n_27, sym_TNil_0))
            {
              t = not_null(m_27);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = not_null(k_27);
                    return(t);
                  }
                  t = SubsVar_2(t, k_85, v_0);
                  t = l_85(t);
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
ATerm substitute_1 (ATerm t, ATerm m_85 (ATerm))
{
  t = substitute_2(t, m_85, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  w_27 = t;
  s_27 :
  if(match_cons(w_27, sym_TCons_2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      t_27 :
      if(match_cons(y_27, sym_TCons_2))
        {
          z_27 = ATgetArgument(y_27, 0);
          c_28 = ATgetArgument(y_27, 1);
          u_27 :
          if(match_cons(z_27, sym_Cons_2))
            {
              a_28 = ATgetArgument(z_27, 0);
              b_28 = ATgetArgument(z_27, 1);
              v_27 :
              if(match_cons(c_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_28), not_null(x_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  x_28 = t;
  t_28 :
  if(match_cons(x_28, sym_Cons_2))
    {
      y_28 = ATgetArgument(x_28, 0);
      d_29 = ATgetArgument(x_28, 1);
      u_28 :
      if(match_cons(y_28, sym_TCons_2))
        {
          z_28 = ATgetArgument(y_28, 0);
          a_29 = ATgetArgument(y_28, 1);
          v_28 :
          if(match_cons(a_29, sym_TCons_2))
            {
              b_29 = ATgetArgument(a_29, 0);
              c_29 = ATgetArgument(a_29, 1);
              w_28 :
              if(match_cons(c_29, sym_TNil_0))
                {
                  ATerm h_29 = NULL,i_29 = NULL,q_29 = NULL,y_29 = NULL;
                  ATerm z_10;
                  z_10 = t;
                  {
                    ATerm j_29 = NULL;
                    ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
                    t = not_null(b_29);
                    j_29 = t;
                    t = SSL_explode_term(not_null(j_29));
                    l_29 = t;
                    k_28 :
                    if(match_cons(l_29, sym_TCons_2))
                      {
                        m_29 = ATgetArgument(l_29, 0);
                        n_29 = ATgetArgument(l_29, 1);
                        l_28 :
                        if(match_cons(n_29, sym_TCons_2))
                          {
                            o_29 = ATgetArgument(n_29, 0);
                            p_29 = ATgetArgument(n_29, 1);
                            m_28 :
                            if(match_cons(p_29, sym_TNil_0))
                              {
                                if(h_29 != NULL && h_29 != m_29)
                                  _fail(m_29);
                                else
                                  h_29 = m_29;
                                if(i_29 != NULL && i_29 != o_29)
                                  _fail(o_29);
                                else
                                  i_29 = o_29;
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
                  t = z_10;
                  {
                    ATerm a_11;
                    a_11 = t;
                    {
                      ATerm r_29 = NULL;
                      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
                      t = not_null(z_28);
                      r_29 = t;
                      t = SSL_explode_term(not_null(r_29));
                      t_29 = t;
                      p_28 :
                      if(match_cons(t_29, sym_TCons_2))
                        {
                          u_29 = ATgetArgument(t_29, 0);
                          v_29 = ATgetArgument(t_29, 1);
                          q_28 :
                          if(match_cons(v_29, sym_TCons_2))
                            {
                              w_29 = ATgetArgument(v_29, 0);
                              x_29 = ATgetArgument(v_29, 1);
                              r_28 :
                              if(match_cons(x_29, sym_TNil_0))
                                {
                                  if(h_29 != NULL && h_29 != u_29)
                                    _fail(u_29);
                                  else
                                    h_29 = u_29;
                                  if(q_29 != NULL && q_29 != w_29)
                                    _fail(w_29);
                                  else
                                    q_29 = w_29;
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
                    t = a_11;
                    {
                      ATerm z_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      z_29 = t;
                      if(y_29 != NULL && y_29 != z_29)
                        _fail(z_29);
                      else
                        y_29 = z_29;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  l_30 = t;
  h_30 :
  if(match_cons(l_30, sym_Cons_2))
    {
      m_30 = ATgetArgument(l_30, 0);
      r_30 = ATgetArgument(l_30, 1);
      i_30 :
      if(match_cons(m_30, sym_TCons_2))
        {
          n_30 = ATgetArgument(m_30, 0);
          o_30 = ATgetArgument(m_30, 1);
          j_30 :
          if(match_cons(o_30, sym_TCons_2))
            {
              p_30 = ATgetArgument(o_30, 0);
              q_30 = ATgetArgument(o_30, 1);
              k_30 :
              if(match_cons(q_30, sym_TNil_0))
                {
                  ATerm t_30 = NULL;
                  if(n_30 != NULL && n_30 != p_30)
                    _fail(p_30);
                  else
                    n_30 = p_30;
                  if(t_30 != NULL && t_30 != r_30)
                    _fail(r_30);
                  else
                    t_30 = r_30;
                  t = not_null(t_30);
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
ATerm while_not_2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm v_30 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = b_70(t);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = c_70(t);
        t = v_30(t);
      }
    return(t);
  }
  t = v_30(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  t = e_70(t);
  t = while_not_2(t, f_70, g_70);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym_Cons_2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      t = r_75(t);
      {
        ATerm w_0 (ATerm t)
        {
          ATerm e_31 = NULL;
          e_31 = t;
          if(a_31 != NULL && a_31 != e_31)
            _fail(e_31);
          else
            a_31 = e_31;
          return(t);
        }
        t = fetch_1(t, w_0);
      }
      t = not_null(b_31);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm c_11 = t;
  if(PushChoice()==0)
    {
      ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
      o_31 = t;
      i_31 :
      if(match_cons(o_31, sym_TCons_2))
        {
          p_31 = ATgetArgument(o_31, 0);
          q_31 = ATgetArgument(o_31, 1);
          j_31 :
          if(match_cons(q_31, sym_TCons_2))
            {
              r_31 = ATgetArgument(q_31, 0);
              s_31 = ATgetArgument(q_31, 1);
              k_31 :
              if(match_cons(s_31, sym_TNil_0))
                {
                  t = not_null(p_31);
                  {
                    ATerm y_31 (ATerm t)
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
                                ATerm x_0 (ATerm t)
                                {
                                  t = not_null(r_31);
                                  return(t);
                                }
                                t = HdMember_1(t, x_0);
                                t = y_31(t);
                                PopChoice();
                              }
                            else
                              {
                                t = e_11;
                                t = Cons_2(t, _id, y_31);
                              }
                          }
                        }
                      return(t);
                    }
                    t = y_31(t);
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
      PopChoice();
    }
  else
    {
      t = c_11;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm v_31 = NULL;
          v_31 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_31), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, b_1);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm f_11 = t;
          if(PushChoice()==0)
            {
              ATerm c_1 (ATerm t)
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm g_11 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_11;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, d_1, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, c_1);
              PopChoice();
            }
          else
            {
              t = f_11;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, y_0, z_0, a_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm a_32 (ATerm t)
  {
    ATerm w_11 = t;
    if(PushChoice()==0)
      {
        t = u_83(t);
        PopChoice();
      }
    else
      {
        t = w_11;
        t = _one(t, a_32);
      }
    return(t);
  }
  t = a_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  g_32 = t;
  d_32 :
  if(match_cons(g_32, sym_TCons_2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      e_32 :
      if(match_cons(i_32, sym_TCons_2))
        {
          j_32 = ATgetArgument(i_32, 0);
          k_32 = ATgetArgument(i_32, 1);
          f_32 :
          if(match_cons(k_32, sym_TNil_0))
            {
              t = not_null(j_32);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm n_32 = NULL;
                  n_32 = t;
                  if(h_32 != NULL && h_32 != n_32)
                    _fail(n_32);
                  else
                    h_32 = n_32;
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
ATerm Var_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym_Var_1))
    {
      u_32 = ATgetArgument(t_32, 0);
      {
        ATerm w_32 = NULL;
        t = not_null(u_32);
        t = p_61(t);
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  r_34 = t;
  q_33 :
  if(match_cons(r_34, sym_Seq_2))
    {
      s_34 = ATgetArgument(r_34, 0);
      u_34 = ATgetArgument(r_34, 1);
      r_33 :
      if(match_cons(s_34, sym_Assign_1))
        {
          t_34 = ATgetArgument(s_34, 0);
          s_33 :
          if(match_cons(t_34, sym_Var_1))
            {
              k_34 = ATgetArgument(t_34, 0);
              t_33 :
              if(match_cons(u_34, sym_Seq_2))
                {
                  v_34 = ATgetArgument(u_34, 0);
                  w_34 = ATgetArgument(u_34, 1);
                  u_33 :
                  if(match_cons(v_34, sym_Build_1))
                    {
                      n_34 = ATgetArgument(v_34, 0);
                      v_33 :
                      if(match_cons(n_34, sym_Var_1))
                        {
                          o_34 = ATgetArgument(n_34, 0);
                          {
                            ATerm d_35 = NULL;
                            if(k_34 != NULL && k_34 != o_34)
                              _fail(o_34);
                            else
                              k_34 = o_34;
                            if(d_35 != NULL && d_35 != w_34)
                              _fail(w_34);
                            else
                              d_35 = w_34;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34))), not_null(d_35));
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
          if(match_cons(s_34, sym_Build_1))
            {
              t_34 = ATgetArgument(s_34, 0);
              w_33 :
              if(match_cons(u_34, sym_Scope_2))
                {
                  v_34 = ATgetArgument(u_34, 0);
                  w_34 = ATgetArgument(u_34, 1);
                  x_33 :
                  if(match_cons(w_34, sym_Seq_2))
                    {
                      x_34 = ATgetArgument(w_34, 0);
                      a_35 = ATgetArgument(w_34, 1);
                      y_33 :
                      if(match_cons(x_34, sym_Assign_1))
                        {
                          y_34 = ATgetArgument(x_34, 0);
                          z_33 :
                          if(match_cons(y_34, sym_Var_1))
                            {
                              z_34 = ATgetArgument(y_34, 0);
                              {
                                ATerm x_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_36 = NULL,i_36 = NULL;
                                    ATerm y_11;
                                    y_11 = t;
                                    {
                                      ATerm h_36 = NULL;
                                      t = not_null(t_34);
                                      t = Var_1(t, _id);
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = in_0(t);
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = diff_0(t);
                                      h_36 = t;
                                      if(g_36 != NULL && g_36 != h_36)
                                        _fail(h_36);
                                      else
                                        g_36 = h_36;
                                    }
                                    t = y_11;
                                    {
                                      ATerm j_36 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                      t = tsubs_0(t);
                                      j_36 = t;
                                      if(i_36 != NULL && i_36 != j_36)
                                        _fail(j_36);
                                      else
                                        i_36 = j_36;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_36), not_null(i_36)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_11;
                                    {
                                      ATerm o_36 = NULL,q_36 = NULL;
                                      ATerm z_11;
                                      z_11 = t;
                                      {
                                        ATerm p_36 = NULL;
                                        t = not_null(t_34);
                                        t = Var_1(t, _id);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        p_36 = t;
                                        if(o_36 != NULL && o_36 != p_36)
                                          _fail(p_36);
                                        else
                                          o_36 = p_36;
                                      }
                                      t = z_11;
                                      {
                                        ATerm r_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = tsubs_0(t);
                                        r_36 = t;
                                        if(q_36 != NULL && q_36 != r_36)
                                          _fail(r_36);
                                        else
                                          q_36 = r_36;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_36), not_null(q_36)));
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
            _fail(t);
        }
    }
  else
    {
      if(match_cons(r_34, sym_Scope_2))
        {
          s_34 = ATgetArgument(r_34, 0);
          u_34 = ATgetArgument(r_34, 1);
          a_34 :
          if(match_cons(u_34, sym_Seq_2))
            {
              v_34 = ATgetArgument(u_34, 0);
              w_34 = ATgetArgument(u_34, 1);
              b_34 :
              if(match_cons(v_34, sym_Assign_1))
                {
                  n_34 = ATgetArgument(v_34, 0);
                  c_34 :
                  if(match_cons(n_34, sym_Var_1))
                    {
                      o_34 = ATgetArgument(n_34, 0);
                      d_34 :
                      if(match_cons(w_34, sym_Seq_2))
                        {
                          x_34 = ATgetArgument(w_34, 0);
                          a_35 = ATgetArgument(w_34, 1);
                          e_34 :
                          if(match_cons(x_34, sym_Assign_2))
                            {
                              y_34 = ATgetArgument(x_34, 0);
                              l_34 = ATgetArgument(x_34, 1);
                              f_34 :
                              if(match_cons(y_34, sym_Var_1))
                                {
                                  z_34 = ATgetArgument(y_34, 0);
                                  g_34 :
                                  if(match_cons(l_34, sym_Var_1))
                                    {
                                      m_34 = ATgetArgument(l_34, 0);
                                      {
                                        ATerm h_35 = NULL,i_35 = NULL,k_35 = NULL;
                                        if(o_34 != NULL && o_34 != m_34)
                                          _fail(m_34);
                                        else
                                          o_34 = m_34;
                                        if(h_35 != NULL && h_35 != a_35)
                                          _fail(a_35);
                                        else
                                          h_35 = a_35;
                                        {
                                          ATerm a_12;
                                          a_12 = t;
                                          {
                                            ATerm j_35 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = in_0(t);
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = in_0(t);
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = diff_0(t);
                                            j_35 = t;
                                            if(i_35 != NULL && i_35 != j_35)
                                              _fail(j_35);
                                            else
                                              i_35 = j_35;
                                          }
                                          t = a_12;
                                          {
                                            ATerm l_35 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = tsubs_0(t);
                                            l_35 = t;
                                            if(k_35 != NULL && k_35 != l_35)
                                              _fail(l_35);
                                            else
                                              k_35 = l_35;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))), not_null(k_35)));
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
                              if(match_cons(x_34, sym_Assign_1))
                                {
                                  y_34 = ATgetArgument(x_34, 0);
                                  h_34 :
                                  if(match_cons(y_34, sym_Var_1))
                                    {
                                      z_34 = ATgetArgument(y_34, 0);
                                      {
                                        ATerm q_35 = NULL,s_35 = NULL;
                                        ATerm b_12;
                                        b_12 = t;
                                        {
                                          ATerm r_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = in_0(t);
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = in_0(t);
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = diff_0(t);
                                          r_35 = t;
                                          if(q_35 != NULL && q_35 != r_35)
                                            _fail(r_35);
                                          else
                                            q_35 = r_35;
                                        }
                                        t = b_12;
                                        {
                                          ATerm t_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = tsubs_0(t);
                                          t_35 = t;
                                          if(s_35 != NULL && s_35 != t_35)
                                            _fail(t_35);
                                          else
                                            s_35 = t_35;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))), not_null(s_35)));
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
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(v_34, sym_Assign_2))
                    {
                      n_34 = ATgetArgument(v_34, 0);
                      p_34 = ATgetArgument(v_34, 1);
                      i_34 :
                      if(match_cons(n_34, sym_Var_1))
                        {
                          o_34 = ATgetArgument(n_34, 0);
                          j_34 :
                          if(match_cons(p_34, sym_Var_1))
                            {
                              q_34 = ATgetArgument(p_34, 0);
                              {
                                ATerm y_35 = NULL,a_36 = NULL;
                                ATerm c_12;
                                c_12 = t;
                                {
                                  ATerm z_35 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  z_35 = t;
                                  if(y_35 != NULL && y_35 != z_35)
                                    _fail(z_35);
                                  else
                                    y_35 = z_35;
                                }
                                t = c_12;
                                {
                                  ATerm b_36 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  b_36 = t;
                                  if(a_36 != NULL && a_36 != b_36)
                                    _fail(b_36);
                                  else
                                    a_36 = b_36;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_35), not_null(a_36));
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
  return(t);
}
ATerm HoistLet_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  n_37 = t;
  j_37 :
  if(match_cons(n_37, sym_Seq_2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      k_37 :
      if(match_cons(p_37, sym_Let_2))
        {
          q_37 = ATgetArgument(p_37, 0);
          r_37 = ATgetArgument(p_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_37), not_null(r_37)));
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
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  a_38 = t;
  x_37 :
  if(match_cons(a_38, sym_TCons_2))
    {
      b_38 = ATgetArgument(a_38, 0);
      c_38 = ATgetArgument(a_38, 1);
      y_37 :
      if(match_cons(c_38, sym_TCons_2))
        {
          d_38 = ATgetArgument(c_38, 0);
          e_38 = ATgetArgument(c_38, 1);
          z_37 :
          if(match_cons(e_38, sym_TNil_0))
            {
              t = not_null(b_38);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(d_38);
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  q_38 = t;
  n_38 :
  if(match_cons(q_38, sym_TCons_2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      o_38 :
      if(match_cons(s_38, sym_TCons_2))
        {
          t_38 = ATgetArgument(s_38, 0);
          u_38 = ATgetArgument(s_38, 1);
          p_38 :
          if(match_cons(u_38, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_38), not_null(t_38));
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
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  n_39 = t;
  f_39 :
  if(match_cons(n_39, sym_TCons_2))
    {
      o_39 = ATgetArgument(n_39, 0);
      r_39 = ATgetArgument(n_39, 1);
      i_39 :
      if(match_cons(o_39, sym_Cons_2))
        {
          p_39 = ATgetArgument(o_39, 0);
          q_39 = ATgetArgument(o_39, 1);
          k_39 :
          if(match_cons(r_39, sym_TCons_2))
            {
              s_39 = ATgetArgument(r_39, 0);
              z_39 = ATgetArgument(r_39, 1);
              l_39 :
              if(match_cons(s_39, sym_Cons_2))
                {
                  x_39 = ATgetArgument(s_39, 0);
                  y_39 = ATgetArgument(s_39, 1);
                  m_39 :
                  if(match_cons(z_39, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(p_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  n_40 = t;
  i_40 :
  if(match_cons(n_40, sym_TCons_2))
    {
      o_40 = ATgetArgument(n_40, 0);
      p_40 = ATgetArgument(n_40, 1);
      j_40 :
      if(match_cons(o_40, sym_Nil_0))
        {
          k_40 :
          if(match_cons(p_40, sym_TCons_2))
            {
              q_40 = ATgetArgument(p_40, 0);
              r_40 = ATgetArgument(p_40, 1);
              l_40 :
              if(match_cons(q_40, sym_Nil_0))
                {
                  m_40 :
                  if(match_cons(r_40, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm))
{
  ATerm t_40 (ATerm t)
  {
    ATerm d_12 = t;
    if(PushChoice()==0)
      {
        t = r_77(t);
        PopChoice();
      }
    else
      {
        t = d_12;
        t = s_77(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = TCons_2(t, t_40, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_77, g_1);
          t = t_77(t);
        }
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_77);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_Cong_2))
    {
      n_41 = ATgetArgument(m_41, 0);
      o_41 = ATgetArgument(m_41, 1);
      {
        ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,t_42 = NULL;
        ATerm h_12;
        h_12 = t;
        {
          ATerm w_41 = NULL;
          t = not_null(o_41);
          {
            ATerm z_41 = NULL;
            t = map_1(t, new_0);
            w_41 = t;
            if(t_41 != NULL && t_41 != w_41)
              _fail(w_41);
            else
              t_41 = w_41;
            t = not_null(t_41);
            {
              ATerm a_42 = NULL;
              ATerm h_1 (ATerm t)
              {
                ATerm x_41 = NULL;
                x_41 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_41));
                return(t);
              }
              t = map_1(t, h_1);
              z_41 = t;
              if(r_41 != NULL && r_41 != z_41)
                _fail(z_41);
              else
                r_41 = z_41;
              t = not_null(o_41);
              {
                ATerm d_42 = NULL;
                t = map_1(t, new_0);
                a_42 = t;
                if(u_41 != NULL && u_41 != a_42)
                  _fail(a_42);
                else
                  u_41 = a_42;
                t = not_null(u_41);
                {
                  ATerm e_42 = NULL,s_42 = NULL;
                  ATerm i_1 (ATerm t)
                  {
                    ATerm b_42 = NULL;
                    b_42 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_42));
                    return(t);
                  }
                  t = map_1(t, i_1);
                  d_42 = t;
                  if(s_41 != NULL && s_41 != d_42)
                    _fail(d_42);
                  else
                    s_41 = d_42;
                  {
                    ATerm f_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    f_42 = t;
                    if(e_42 != NULL && e_42 != f_42)
                      _fail(f_42);
                    else
                      e_42 = f_42;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
                        g_42 = t;
                        d_41 :
                        if(match_cons(g_42, sym_TCons_2))
                          {
                            h_42 = ATgetArgument(g_42, 0);
                            m_42 = ATgetArgument(g_42, 1);
                            e_41 :
                            if(match_cons(h_42, sym_TCons_2))
                              {
                                i_42 = ATgetArgument(h_42, 0);
                                j_42 = ATgetArgument(h_42, 1);
                                f_41 :
                                if(match_cons(j_42, sym_TCons_2))
                                  {
                                    k_42 = ATgetArgument(j_42, 0);
                                    l_42 = ATgetArgument(j_42, 1);
                                    g_41 :
                                    if(match_cons(l_42, sym_TNil_0))
                                      {
                                        h_41 :
                                        if(match_cons(m_42, sym_TCons_2))
                                          {
                                            n_42 = ATgetArgument(m_42, 0);
                                            o_42 = ATgetArgument(m_42, 1);
                                            i_41 :
                                            if(match_cons(o_42, sym_TNil_0))
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_42)))));
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
                      s_42 = t;
                      if(v_41 != NULL && v_41 != s_42)
                        _fail(s_42);
                      else
                        v_41 = s_42;
                    }
                  }
                }
              }
            }
          }
        }
        t = h_12;
        {
          ATerm u_42 = NULL;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_41), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          u_42 = t;
          if(t_42 != NULL && t_42 != u_42)
            _fail(u_42);
          else
            t_42 = u_42;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_41), not_null(r_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_41)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_41), not_null(s_41))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym_Cong_2))
    {
      y_43 = ATgetArgument(x_43, 0);
      z_43 = ATgetArgument(x_43, 1);
      {
        ATerm c_44 = NULL;
        ATerm g_44 = NULL;
        t = not_null(z_43);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm d_44 = NULL,e_44 = NULL;
            e_44 = t;
            q_43 :
            if(match_cons(e_44, sym_Match_1))
              {
                d_44 = ATgetArgument(e_44, 0);
                t = not_null(d_44);
              }
            else
              {
                if(match_cons(e_44, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_1);
          g_44 = t;
          if(c_44 != NULL && c_44 != g_44)
            _fail(g_44);
          else
            c_44 = g_44;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_43), not_null(c_44)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  m_44 :
  if(match_cons(p_44, sym_Scope_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      o_44 :
      if(match_cons(q_44, sym_Nil_0))
        t = not_null(r_44);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm u_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  a_45 :
  if(match_cons(f_46, sym_Where_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      m_45 :
      if(match_cons(g_46, sym_Seq_2))
        {
          e_46 = ATgetArgument(g_46, 0);
          a_46 = ATgetArgument(g_46, 1);
          n_45 :
          if(match_cons(e_46, sym_Where_1))
            {
              u_45 = ATgetArgument(e_46, 0);
              p_45 :
              if(match_cons(a_46, sym_Seq_2))
                {
                  b_46 = ATgetArgument(a_46, 0);
                  d_46 = ATgetArgument(a_46, 1);
                  r_45 :
                  if(match_cons(b_46, sym_Build_1))
                    {
                      c_46 = ATgetArgument(b_46, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_46)), not_null(d_46))));
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
          if(match_cons(g_46, sym_Where_1))
            {
              e_46 = ATgetArgument(g_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_46));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(f_46, sym_Test_1))
        {
          g_46 = ATgetArgument(f_46, 0);
          s_45 :
          if(match_cons(g_46, sym_Test_1))
            {
              e_46 = ATgetArgument(g_46, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_46));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_46, sym_Not_1))
            {
              g_46 = ATgetArgument(f_46, 0);
              t_45 :
              if(match_cons(g_46, sym_Not_1))
                {
                  e_46 = ATgetArgument(g_46, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_46));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(f_46, sym_LChoice_2))
                {
                  g_46 = ATgetArgument(f_46, 0);
                  h_46 = ATgetArgument(f_46, 1);
                  if(g_46 != NULL && g_46 != h_46)
                    _fail(h_46);
                  else
                    g_46 = h_46;
                  t = not_null(g_46);
                }
              else
                {
                  if(match_cons(f_46, sym_Choice_2))
                    {
                      g_46 = ATgetArgument(f_46, 0);
                      h_46 = ATgetArgument(f_46, 1);
                      if(g_46 != NULL && g_46 != h_46)
                        _fail(h_46);
                      else
                        g_46 = h_46;
                      t = not_null(g_46);
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
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  y_47 = t;
  u_47 :
  if(match_cons(y_47, sym_LChoice_2))
    {
      z_47 = ATgetArgument(y_47, 0);
      c_48 = ATgetArgument(y_47, 1);
      v_47 :
      if(match_cons(z_47, sym_LChoice_2))
        {
          a_48 = ATgetArgument(z_47, 0);
          b_48 = ATgetArgument(z_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_48), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_48), not_null(c_48)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(y_47, sym_Seq_2))
        {
          z_47 = ATgetArgument(y_47, 0);
          c_48 = ATgetArgument(y_47, 1);
          w_47 :
          if(match_cons(z_47, sym_Seq_2))
            {
              a_48 = ATgetArgument(z_47, 0);
              b_48 = ATgetArgument(z_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_48), not_null(c_48)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(y_47, sym_Choice_2))
            {
              z_47 = ATgetArgument(y_47, 0);
              c_48 = ATgetArgument(y_47, 1);
              x_47 :
              if(match_cons(z_47, sym_Choice_2))
                {
                  a_48 = ATgetArgument(z_47, 0);
                  b_48 = ATgetArgument(z_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_48), (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_48), not_null(c_48)));
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
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  j_49 = t;
  b_49 :
  if(match_cons(j_49, sym_InfixApp_3))
    {
      k_49 = ATgetArgument(j_49, 0);
      g_49 = ATgetArgument(j_49, 1);
      f_49 = ATgetArgument(j_49, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_49), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(j_49, sym_BAM_3))
        {
          k_49 = ATgetArgument(j_49, 0);
          g_49 = ATgetArgument(j_49, 1);
          f_49 = ATgetArgument(j_49, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_49)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_49)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(j_49, sym_AM_2))
            {
              k_49 = ATgetArgument(j_49, 0);
              g_49 = ATgetArgument(j_49, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_49)));
            }
          else
            {
              if(match_cons(j_49, sym_MA_2))
                {
                  k_49 = ATgetArgument(j_49, 0);
                  g_49 = ATgetArgument(j_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_49)), not_null(g_49));
                }
              else
                {
                  if(match_cons(j_49, sym_BA_2))
                    {
                      k_49 = ATgetArgument(j_49, 0);
                      g_49 = ATgetArgument(j_49, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_49)), not_null(k_49));
                    }
                  else
                    {
                      if(match_cons(j_49, sym_Lets_2))
                        {
                          k_49 = ATgetArgument(j_49, 0);
                          g_49 = ATgetArgument(j_49, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_49), not_null(g_49));
                        }
                      else
                        {
                          if(match_cons(j_49, sym_LChoices_1))
                            {
                              k_49 = ATgetArgument(j_49, 0);
                              c_49 :
                              if(match_cons(k_49, sym_Cons_2))
                                {
                                  h_49 = ATgetArgument(k_49, 0);
                                  i_49 = ATgetArgument(k_49, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_49), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_49)));
                                }
                              else
                                {
                                  if(match_cons(k_49, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(j_49, sym_Choices_1))
                                {
                                  k_49 = ATgetArgument(j_49, 0);
                                  d_49 :
                                  if(match_cons(k_49, sym_Cons_2))
                                    {
                                      h_49 = ATgetArgument(k_49, 0);
                                      i_49 = ATgetArgument(k_49, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_49), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_49)));
                                    }
                                  else
                                    {
                                      if(match_cons(k_49, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(j_49, sym_Seqs_1))
                                    {
                                      k_49 = ATgetArgument(j_49, 0);
                                      e_49 :
                                      if(match_cons(k_49, sym_Cons_2))
                                        {
                                          h_49 = ATgetArgument(k_49, 0);
                                          i_49 = ATgetArgument(k_49, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_49), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_49)));
                                        }
                                      else
                                        {
                                          if(match_cons(k_49, sym_Nil_0))
                                            t = (ATerm) ATmakeAppl(sym_Id_0);
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
  ATerm u_50 = NULL,v_50 = NULL;
  u_50 = t;
  s_50 :
  if(match_cons(u_50, sym_Where_1))
    {
      v_50 = ATgetArgument(u_50, 0);
      t_50 :
      if(match_cons(v_50, sym_Fail_0))
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
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  y_50 :
  if(match_cons(a_51, sym_LChoice_2))
    {
      b_51 = ATgetArgument(a_51, 0);
      c_51 = ATgetArgument(a_51, 1);
      z_50 :
      if(match_cons(c_51, sym_Fail_0))
        t = not_null(b_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  g_51 :
  if(match_cons(i_51, sym_LChoice_2))
    {
      j_51 = ATgetArgument(i_51, 0);
      k_51 = ATgetArgument(i_51, 1);
      h_51 :
      if(match_cons(j_51, sym_Fail_0))
        t = not_null(k_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  o_51 :
  if(match_cons(q_51, sym_Choice_2))
    {
      r_51 = ATgetArgument(q_51, 0);
      s_51 = ATgetArgument(q_51, 1);
      p_51 :
      if(match_cons(s_51, sym_Fail_0))
        t = not_null(r_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_Choice_2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      x_51 :
      if(match_cons(z_51, sym_Fail_0))
        t = not_null(a_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym_Cong_2))
    {
      h_52 = ATgetArgument(g_52, 0);
      i_52 = ATgetArgument(g_52, 1);
      t = not_null(i_52);
      {
        ATerm p_1 (ATerm t)
        {
          ATerm l_52 = NULL;
          l_52 = t;
          e_52 :
          if(!(match_cons(l_52, sym_Fail_0)))
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_cons(q_52, sym_Path_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      p_52 :
      if(match_cons(s_52, sym_Fail_0))
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
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  w_52 :
  if(match_cons(y_52, sym_One_1))
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
ATerm F7_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  e_53 = t;
  c_53 :
  if(match_cons(e_53, sym_Some_1))
    {
      f_53 = ATgetArgument(e_53, 0);
      d_53 :
      if(match_cons(f_53, sym_Fail_0))
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
  ATerm k_53 = NULL,n_53 = NULL,o_53 = NULL;
  k_53 = t;
  i_53 :
  if(match_cons(k_53, sym_Rec_2))
    {
      n_53 = ATgetArgument(k_53, 0);
      o_53 = ATgetArgument(k_53, 1);
      j_53 :
      if(match_cons(o_53, sym_Fail_0))
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
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_Scope_2))
    {
      v_53 = ATgetArgument(u_53, 0);
      w_53 = ATgetArgument(u_53, 1);
      t_53 :
      if(match_cons(w_53, sym_Fail_0))
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
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  a_54 :
  if(match_cons(c_54, sym_Seq_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      b_54 :
      if(match_cons(d_54, sym_Fail_0))
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
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  i_54 :
  if(match_cons(k_54, sym_Not_1))
    {
      l_54 = ATgetArgument(k_54, 0);
      j_54 :
      if(match_cons(l_54, sym_Fail_0))
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
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  o_54 :
  if(match_cons(q_54, sym_Test_1))
    {
      r_54 = ATgetArgument(q_54, 0);
      p_54 :
      if(match_cons(r_54, sym_Fail_0))
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
  ATerm p_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = p_12;
      {
        ATerm q_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = q_12;
            {
              ATerm r_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = r_12;
                  {
                    ATerm s_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = s_12;
                        {
                          ATerm t_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = t_12;
                              {
                                ATerm u_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_12;
                                    {
                                      ATerm v_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_12;
                                          {
                                            ATerm w_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_12;
                                                {
                                                  ATerm x_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_12;
                                                      {
                                                        ATerm y_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_12;
                                                            {
                                                              ATerm z_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_12;
                                                                  {
                                                                    ATerm a_13 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_13;
                                                                        {
                                                                          ATerm b_13 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_13;
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
  ATerm w_54 = NULL,x_54 = NULL;
  w_54 = t;
  u_54 :
  if(match_cons(w_54, sym_Match_1))
    {
      x_54 = ATgetArgument(w_54, 0);
      v_54 :
      if(match_cons(x_54, sym_Wld_0))
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
  ATerm c_55 = NULL,d_55 = NULL;
  c_55 = t;
  a_55 :
  if(match_cons(c_55, sym_Where_1))
    {
      d_55 = ATgetArgument(c_55, 0);
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
ATerm I10_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  i_55 = t;
  g_55 :
  if(match_cons(i_55, sym_All_1))
    {
      j_55 = ATgetArgument(i_55, 0);
      h_55 :
      if(match_cons(j_55, sym_Id_0))
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  o_55 = t;
  m_55 :
  if(match_cons(o_55, sym_Rec_2))
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
ATerm I8_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  u_55 :
  if(match_cons(w_55, sym_Scope_2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      v_55 :
      if(match_cons(y_55, sym_Id_0))
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
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_cons(e_56, sym_LChoice_2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      d_56 :
      if(match_cons(f_56, sym_Id_0))
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
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  k_56 :
  if(match_cons(m_56, sym_Seq_2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      l_56 :
      if(match_cons(o_56, sym_Id_0))
        t = not_null(n_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  s_56 :
  if(match_cons(u_56, sym_Seq_2))
    {
      v_56 = ATgetArgument(u_56, 0);
      w_56 = ATgetArgument(u_56, 1);
      t_56 :
      if(match_cons(v_56, sym_Id_0))
        t = not_null(w_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  c_57 = t;
  a_57 :
  if(match_cons(c_57, sym_Not_1))
    {
      d_57 = ATgetArgument(c_57, 0);
      b_57 :
      if(match_cons(d_57, sym_Id_0))
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
  ATerm i_57 = NULL,j_57 = NULL;
  i_57 = t;
  g_57 :
  if(match_cons(i_57, sym_Test_1))
    {
      j_57 = ATgetArgument(i_57, 0);
      h_57 :
      if(match_cons(j_57, sym_Id_0))
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
  ATerm c_13 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = c_13;
      {
        ATerm d_13 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = d_13;
            {
              ATerm e_13 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = e_13;
                  {
                    ATerm f_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = f_13;
                        {
                          ATerm g_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = g_13;
                              {
                                ATerm h_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_13;
                                    {
                                      ATerm i_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_13;
                                          {
                                            ATerm j_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = j_13;
                                                {
                                                  ATerm k_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = k_13;
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
  ATerm l_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = l_13;
      {
        ATerm m_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = m_13;
            {
              ATerm n_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = n_13;
                  {
                    ATerm o_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = o_13;
                        {
                          ATerm p_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = p_13;
                              {
                                ATerm q_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_13;
                                    {
                                      ATerm r_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_13;
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
  ATerm s_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = s_13;
      {
        ATerm t_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = t_13;
            {
              ATerm u_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_13;
                  {
                    ATerm v_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = v_13;
                        {
                          ATerm w_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = w_13;
                              {
                                ATerm x_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_13;
                                    {
                                      ATerm y_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_13;
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
ATerm downup_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm l_57 (ATerm t)
  {
    t = i_82(t);
    t = _all(t, l_57);
    t = i_82(t);
    return(t);
  }
  t = l_57(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      ATerm z_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = z_13;
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
ATerm SDef_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym_SDef_3))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      u_57 = ATgetArgument(r_57, 2);
      {
        ATerm y_57 = NULL;
        t = not_null(s_57);
        {
          ATerm a_58 = NULL;
          t = i_62(t);
          y_57 = t;
          t = not_null(t_57);
          {
            ATerm c_58 = NULL;
            t = j_62(t);
            a_58 = t;
            t = not_null(u_57);
            t = k_62(t);
            c_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_57), not_null(a_58), not_null(c_58));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm l_58 = NULL,m_58 = NULL;
  l_58 = t;
  k_58 :
  if(match_cons(l_58, sym_Strategies_1))
    {
      m_58 = ATgetArgument(l_58, 0);
      {
        ATerm o_58 = NULL;
        t = not_null(m_58);
        t = d_61(t);
        o_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Specification_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      {
        ATerm y_58 = NULL;
        t = not_null(w_58);
        t = f_61(t);
        y_58 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(y_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm c_87 (ATerm))
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
            t = SDef_3(t, _id, _id, c_87);
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
  ATerm d_59 = NULL;
  d_59 = t;
  c_59 :
  if(!(match_cons(d_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
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
          t = n_63(t);
          n_59 = t;
          t = not_null(k_59);
          t = o_63(t);
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
  ATerm w_59 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm x_59 = NULL,y_59 = NULL;
      x_59 = t;
      v_59 :
      if(match_cons(x_59, sym_Program_1))
        {
          y_59 = ATgetArgument(x_59, 0);
          if(w_59 != NULL && w_59 != y_59)
            _fail(y_59);
          else
            w_59 = y_59;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = a_14;
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
  ATerm f_60 = NULL,g_60 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm b_14 = t;
      if(PushChoice()==0)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm h_60 = NULL;
            h_60 = t;
            a_60 :
            if(!(match_cons(h_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_2);
          PopChoice();
          _fail(t);
        }
      else
        t = b_14;
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
          ATerm i_60 = NULL,j_60 = NULL;
          i_60 = t;
          c_60 :
          if(match_cons(i_60, sym_Runtime_1))
            {
              j_60 = ATgetArgument(i_60, 0);
              if(g_60 != NULL && g_60 != j_60)
                _fail(j_60);
              else
                g_60 = j_60;
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
            ATerm k_60 = NULL,l_60 = NULL;
            k_60 = t;
            e_60 :
            if(match_cons(k_60, sym_Program_1))
              {
                l_60 = ATgetArgument(k_60, 0);
                if(f_60 != NULL && f_60 != l_60)
                  _fail(l_60);
                else
                  f_60 = l_60;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  s_60 = t;
  p_60 :
  if(match_cons(s_60, sym_TCons_2))
    {
      u_60 = ATgetArgument(s_60, 0);
      v_60 = ATgetArgument(s_60, 1);
      q_60 :
      if(match_cons(v_60, sym_TCons_2))
        {
          w_60 = ATgetArgument(v_60, 0);
          x_60 = ATgetArgument(v_60, 1);
          r_60 :
          if(match_cons(x_60, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(u_60), not_null(w_60));
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
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  h_61 = t;
  c_61 :
  if(match_cons(h_61, sym_TCons_2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      e_61 :
      if(match_cons(j_61, sym_TCons_2))
        {
          k_61 = ATgetArgument(j_61, 0);
          l_61 = ATgetArgument(j_61, 1);
          g_61 :
          if(match_cons(l_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(i_61), not_null(k_61));
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
  ATerm u_61 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm d_14 = t;
      if(PushChoice()==0)
        {
          ATerm d_3 (ATerm t)
          {
            ATerm v_61 = NULL,w_61 = NULL;
            v_61 = t;
            r_61 :
            if(match_cons(v_61, sym_Output_1))
              {
                w_61 = ATgetArgument(v_61, 0);
                if(u_61 != NULL && u_61 != w_61)
                  _fail(w_61);
                else
                  u_61 = w_61;
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
          t = d_14;
          {
            ATerm x_61 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_61 = t;
            if(u_61 != NULL && u_61 != x_61)
              _fail(x_61);
            else
              u_61 = x_61;
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
  t = c_14;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = not_null(u_61);
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
      ATerm e_14 = t;
      if(PushChoice()==0)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm m_3 (ATerm t)
            {
              ATerm y_61 = NULL;
              y_61 = t;
              t_61 :
              if(!(match_cons(y_61, sym_Binary_0)))
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
          t = e_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm g_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
  ATerm f_14;
  f_14 = t;
  t = dtime_0(t);
  t = f_14;
  t = a_67(t);
  {
    ATerm g_14;
    g_14 = t;
    {
      ATerm h_62 = NULL;
      t = dtime_0(t);
      h_62 = t;
      if(g_62 != NULL && g_62 != h_62)
        _fail(h_62);
      else
        g_62 = h_62;
    }
    t = g_14;
    l_62 = t;
    d_62 :
    if(match_cons(l_62, sym_TCons_2))
      {
        m_62 = ATgetArgument(l_62, 0);
        n_62 = ATgetArgument(l_62, 1);
        e_62 :
        if(match_cons(n_62, sym_TCons_2))
          {
            o_62 = ATgetArgument(n_62, 0);
            p_62 = ATgetArgument(n_62, 1);
            f_62 :
            if(match_cons(p_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_62)), not_null(m_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_62 = NULL;
  v_62 = t;
  t = SSL_ReadFromFile(not_null(v_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm b_63 = NULL;
  ATerm d_63 = NULL,f_63 = NULL;
  b_63 = t;
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm e_63 = NULL;
      t = not_null(b_63);
      t = x_80(t);
      e_63 = t;
      if(d_63 != NULL && d_63 != e_63)
        _fail(e_63);
      else
        d_63 = e_63;
    }
    t = h_14;
    {
      ATerm g_63 = NULL;
      t = not_null(b_63);
      t = y_80(t);
      g_63 = t;
      if(f_63 != NULL && f_63 != g_63)
        _fail(g_63);
      else
        f_63 = g_63;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_63), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_63 = NULL;
  ATerm i_14;
  i_14 = t;
  {
    ATerm j_14 = t;
    if(PushChoice()==0)
      {
        ATerm w_3 (ATerm t)
        {
          ATerm u_63 = NULL,v_63 = NULL;
          u_63 = t;
          p_63 :
          if(match_cons(u_63, sym_Input_1))
            {
              v_63 = ATgetArgument(u_63, 0);
              if(t_63 != NULL && t_63 != v_63)
                _fail(v_63);
              else
                t_63 = v_63;
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
        t = j_14;
        {
          ATerm w_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_63 = t;
          if(t_63 != NULL && t_63 != w_63)
            _fail(w_63);
          else
            t_63 = w_63;
        }
      }
  }
  t = i_14;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(t_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  z_63 :
  if(!(match_cons(a_64, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = m_14;
        {
          ATerm n_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = n_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_3);
  t = z_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_64 = NULL;
  c_64 = t;
  t = SSL_table_create(not_null(c_64));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_64 = NULL;
  g_64 = t;
  {
    ATerm o_14;
    o_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_64), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = o_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  o_64 = t;
  m_64 :
  if(match_string(o_64, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(o_64, sym_Cons_2))
        {
          p_64 = ATgetArgument(o_64, 0);
          q_64 = ATgetArgument(o_64, 1);
          n_64 :
          if(match_cons(q_64, sym_Cons_2))
            {
              r_64 = ATgetArgument(q_64, 0);
              s_64 = ATgetArgument(q_64, 1);
              {
                ATerm w_64 = NULL;
                ATerm p_14;
                p_14 = t;
                t = not_null(p_64);
                t = g_0(t);
                t = p_14;
                {
                  ATerm x_64 = NULL;
                  t = not_null(r_64);
                  t = h_0(t);
                  x_64 = t;
                  if(w_64 != NULL && w_64 != x_64)
                    _fail(x_64);
                  else
                    w_64 = x_64;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_64), not_null(s_64));
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
  ATerm r_14 = t;
  if(PushChoice()==0)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm s_65 = NULL;
        s_65 = t;
        b_65 :
        if(!(match_string(s_65, "-S")))
          {
            if(!(match_string(s_65, "--silent")))
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
      t = r_14;
      {
        ATerm s_14 = t;
        if(PushChoice()==0)
          {
            ATerm c_4 (ATerm t)
            {
              ATerm t_65 = NULL;
              t_65 = t;
              c_65 :
              if(!(match_string(t_65, "--verbose")))
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
            t = s_14;
            {
              ATerm t_14 = t;
              if(PushChoice()==0)
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm u_65 = NULL;
                    u_65 = t;
                    d_65 :
                    if(!(match_string(u_65, "-v")))
                      {
                        if(!(match_string(u_65, "--version")))
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
                  t = t_14;
                  {
                    ATerm u_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm t_4 (ATerm t)
                        {
                          ATerm v_65 = NULL;
                          v_65 = t;
                          e_65 :
                          if(!(match_string(v_65, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_4 (ATerm t)
                        {
                          ATerm w_65 = NULL;
                          ATerm x_65 = NULL;
                          x_65 = t;
                          if(w_65 != NULL && w_65 != x_65)
                            _fail(x_65);
                          else
                            w_65 = x_65;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_65));
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
                        t = u_14;
                        {
                          ATerm v_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm x_4 (ATerm t)
                              {
                                ATerm y_65 = NULL;
                                y_65 = t;
                                m_65 :
                                if(!(match_string(y_65, "-i")))
                                  {
                                    if(!(match_string(y_65, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_5 (ATerm t)
                              {
                                ATerm z_65 = NULL;
                                ATerm a_66 = NULL;
                                a_66 = t;
                                if(z_65 != NULL && z_65 != a_66)
                                  _fail(a_66);
                                else
                                  z_65 = a_66;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_65));
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
                              t = v_14;
                              {
                                ATerm w_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm b_66 = NULL;
                                      b_66 = t;
                                      o_65 :
                                      if(!(match_string(b_66, "-o")))
                                        {
                                          if(!(match_string(b_66, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_5 (ATerm t)
                                    {
                                      ATerm c_66 = NULL;
                                      ATerm d_66 = NULL;
                                      d_66 = t;
                                      if(c_66 != NULL && c_66 != d_66)
                                        _fail(d_66);
                                      else
                                        c_66 = d_66;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_66));
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
                                    t = w_14;
                                    {
                                      ATerm x_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm l_5 (ATerm t)
                                          {
                                            ATerm f_66 = NULL;
                                            f_66 = t;
                                            q_65 :
                                            if(!(match_string(f_66, "-b")))
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
                                          t = x_14;
                                          {
                                            ATerm s_5 (ATerm t)
                                            {
                                              ATerm h_66 = NULL;
                                              h_66 = t;
                                              r_65 :
                                              if(!(match_string(h_66, "-s")))
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
  ATerm r_66 = NULL;
  r_66 = t;
  t = SSL_table_destroy(not_null(r_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  t = SSL_exit(not_null(v_66));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  t = SSL_implode_string(not_null(b_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm e_67 (ATerm t)
  {
    ATerm y_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, e_67);
        PopChoice();
      }
    else
      {
        t = y_14;
        t = Nil_0(t);
        t = x_79(t);
      }
    return(t);
  }
  t = e_67(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = z_14;
      {
        ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
        h_67 = t;
        g_67 :
        if(match_cons(h_67, sym_Cons_2))
          {
            i_67 = ATgetArgument(h_67, 0);
            j_67 = ATgetArgument(h_67, 1);
            t = not_null(i_67);
            {
              ATerm c_6 (ATerm t)
              {
                t = not_null(j_67);
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
  ATerm p_67 = NULL;
  p_67 = t;
  t = SSL_explode_string(not_null(p_67));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm s_67 (ATerm t)
  {
    ATerm i_15 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_15;
        t = Cons_2(t, j_79, s_67);
      }
    return(t);
  }
  t = s_67(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  y_67 = t;
  u_67 :
  if(match_cons(y_67, sym_TCons_2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      v_67 :
      if(match_cons(z_67, sym_Nil_0))
        {
          w_67 :
          if(match_cons(a_68, sym_TCons_2))
            {
              b_68 = ATgetArgument(a_68, 0);
              c_68 = ATgetArgument(a_68, 1);
              x_67 :
              if(match_cons(c_68, sym_TNil_0))
                t = not_null(b_68);
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
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  k_68 = t;
  g_68 :
  if(match_cons(k_68, sym_TCons_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      o_68 = ATgetArgument(k_68, 1);
      h_68 :
      if(match_cons(l_68, sym_Cons_2))
        {
          m_68 = ATgetArgument(l_68, 0);
          n_68 = ATgetArgument(l_68, 1);
          i_68 :
          if(match_cons(o_68, sym_TCons_2))
            {
              p_68 = ATgetArgument(o_68, 0);
              q_68 = ATgetArgument(o_68, 1);
              j_68 :
              if(match_cons(q_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_68), not_null(p_68)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm v_68 (ATerm t)
  {
    ATerm j_15 = t;
    if(PushChoice()==0)
      {
        t = k_69(t);
        t = v_68(t);
        PopChoice();
      }
    else
      {
        t = j_15;
        t = l_69(t);
      }
    return(t);
  }
  t = v_68(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_69 (ATerm))
{
  t = repeat_2(t, n_69, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm x_68 = NULL;
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm d_69 = NULL,e_69 = NULL;
  d_69 = t;
  c_69 :
  if(match_cons(d_69, sym_Program_1))
    {
      e_69 = ATgetArgument(d_69, 0);
      {
        ATerm g_69 = NULL;
        t = not_null(e_69);
        t = l_53(t);
        g_69 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm s_69 = NULL;
  ATerm d_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm t_69 = NULL;
      t_69 = t;
      if(s_69 != NULL && s_69 != t_69)
        _fail(t_69);
      else
        s_69 = t_69;
      return(t);
    }
    t = Program_1(t, e_6);
    return(t);
  }
  t = option_defined_1(t, d_6);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm u_69 = NULL;
      ATerm v_69 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm j_6 (ATerm t)
        {
          t = not_null(s_69);
          return(t);
        }
        t = short_description_1(t, j_6);
        t = concat_strings_0(t);
        v_69 = t;
        if(u_69 != NULL && u_69 != v_69)
          _fail(v_69);
        else
          u_69 = v_69;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_69), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
        ATerm w_69 = NULL;
        w_69 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_69), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, k_6);
      {
        ATerm l_6 (ATerm t)
        {
          ATerm y_69 = NULL;
          ATerm z_69 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm m_6 (ATerm t)
            {
              t = not_null(s_69);
              return(t);
            }
            t = long_description_1(t, m_6);
            t = concat_strings_0(t);
            z_69 = t;
            if(y_69 != NULL && y_69 != z_69)
              _fail(z_69);
            else
              y_69 = z_69;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_69), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  o_70 = t;
  l_70 :
  if(match_cons(o_70, sym_TCons_2))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      m_70 :
      if(match_cons(q_70, sym_TCons_2))
        {
          r_70 = ATgetArgument(q_70, 0);
          s_70 = ATgetArgument(q_70, 1);
          n_70 :
          if(match_cons(s_70, sym_TNil_0))
            {
              ATerm r_15;
              r_15 = t;
              t = SSL_printnl(not_null(p_70), not_null(r_70));
              t = r_15;
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
ATerm Undefined_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm z_70 = NULL,a_71 = NULL;
  z_70 = t;
  y_70 :
  if(match_cons(z_70, sym_Undefined_1))
    {
      a_71 = ATgetArgument(z_70, 0);
      {
        ATerm c_71 = NULL;
        t = not_null(a_71);
        t = m_53(t);
        c_71 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_71));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm g_71 (ATerm t)
  {
    ATerm s_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_79, _id);
        PopChoice();
      }
    else
      {
        t = s_15;
        t = Cons_2(t, _id, g_71);
      }
    return(t);
  }
  t = g_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_66 (ATerm))
{
  t = fetch_1(t, e_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_71 = NULL;
  i_71 = t;
  h_71 :
  if(!(match_cons(i_71, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm u_15 = t;
  if(PushChoice()==0)
    {
      t = p_81(t);
      PopChoice();
    }
  else
    t = u_15;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  r_71 = t;
  k_71 :
  if(match_cons(r_71, sym_TCons_2))
    {
      s_71 = ATgetArgument(r_71, 0);
      t_71 = ATgetArgument(r_71, 1);
      l_71 :
      if(match_cons(t_71, sym_TCons_2))
        {
          u_71 = ATgetArgument(t_71, 0);
          v_71 = ATgetArgument(t_71, 1);
          q_71 :
          if(match_cons(v_71, sym_TNil_0))
            t = SSL_table_get(not_null(s_71), not_null(u_71));
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
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  f_72 = t;
  b_72 :
  if(match_cons(f_72, sym_TCons_2))
    {
      g_72 = ATgetArgument(f_72, 0);
      h_72 = ATgetArgument(f_72, 1);
      c_72 :
      if(match_cons(h_72, sym_TCons_2))
        {
          i_72 = ATgetArgument(h_72, 0);
          j_72 = ATgetArgument(h_72, 1);
          d_72 :
          if(match_cons(j_72, sym_TCons_2))
            {
              k_72 = ATgetArgument(j_72, 0);
              l_72 = ATgetArgument(j_72, 1);
              e_72 :
              if(match_cons(l_72, sym_TNil_0))
                {
                  ATerm v_15;
                  v_15 = t;
                  {
                    ATerm p_72 = NULL;
                    ATerm q_72 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm w_15 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = w_15;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      q_72 = t;
                      if(p_72 != NULL && p_72 != q_72)
                        _fail(q_72);
                      else
                        p_72 = q_72;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_72), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_72), not_null(p_72)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = v_15;
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
ATerm register_usage_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm u_72 = NULL;
  ATerm v_72 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = k_65(t);
  v_72 = t;
  if(u_72 != NULL && u_72 != v_72)
    _fail(v_72);
  else
    u_72 = v_72;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_72), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_string(b_73, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(b_73, sym_Cons_2))
        {
          c_73 = ATgetArgument(b_73, 0);
          d_73 = ATgetArgument(b_73, 1);
          {
            ATerm g_73 = NULL;
            ATerm x_15;
            x_15 = t;
            t = not_null(c_73);
            t = d_0(t);
            t = x_15;
            {
              ATerm h_73 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              h_73 = t;
              if(g_73 != NULL && g_73 != h_73)
                _fail(h_73);
              else
                g_73 = h_73;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_73), not_null(d_73));
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
  ATerm r_6 (ATerm t)
  {
    ATerm m_73 = NULL;
    m_73 = t;
    l_73 :
    if(!(match_string(m_73, "--help")))
      {
        if(!(match_string(m_73, "-h")))
          {
            if(!(match_string(m_73, "-?")))
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
  ATerm y_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, r_6, s_6, y_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  o_73 :
  if(match_cons(p_73, sym_Cons_2))
    {
      q_73 = ATgetArgument(p_73, 0);
      r_73 = ATgetArgument(p_73, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_73)), not_null(r_73));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
  z_73 = t;
  y_73 :
  if(match_cons(z_73, sym_Cons_2))
    {
      a_74 = ATgetArgument(z_73, 0);
      b_74 = ATgetArgument(z_73, 1);
      {
        ATerm e_74 = NULL;
        t = not_null(a_74);
        {
          ATerm g_74 = NULL;
          t = r_63(t);
          e_74 = t;
          t = not_null(b_74);
          t = s_63(t);
          g_74 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_74), not_null(g_74));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm p_74 = NULL;
  p_74 = t;
  l_74 :
  if(!(match_cons(p_74, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm y_15;
  y_15 = t;
  {
    ATerm z_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_65(t);
      return(t);
    }
    t = try_1(t, z_6);
  }
  t = y_15;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm r_74 = NULL;
      r_74 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_74));
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      ATerm z_15 = t;
      if(PushChoice()==0)
        {
          ATerm a_16 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = a_16;
              t = i_65(t);
              t = Cons_2(t, _id, b_7);
            }
          PopChoice();
        }
      else
        {
          t = z_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, b_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  ATerm b_16;
  b_16 = t;
  {
    ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
    d_75 = t;
    w_74 :
    if(match_cons(d_75, sym_TCons_2))
      {
        e_75 = ATgetArgument(d_75, 0);
        f_75 = ATgetArgument(d_75, 1);
        x_74 :
        if(match_cons(f_75, sym_TCons_2))
          {
            g_75 = ATgetArgument(f_75, 0);
            h_75 = ATgetArgument(f_75, 1);
            y_74 :
            if(match_cons(h_75, sym_TCons_2))
              {
                i_75 = ATgetArgument(h_75, 0);
                j_75 = ATgetArgument(h_75, 1);
                z_74 :
                if(match_cons(j_75, sym_TNil_0))
                  {
                    if(a_75 != NULL && a_75 != e_75)
                      _fail(e_75);
                    else
                      a_75 = e_75;
                    if(b_75 != NULL && b_75 != g_75)
                      _fail(g_75);
                    else
                      b_75 = g_75;
                    if(c_75 != NULL && c_75 != i_75)
                      _fail(i_75);
                    else
                      c_75 = i_75;
                    t = SSL_table_put(not_null(a_75), not_null(b_75), not_null(c_75));
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
  t = b_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm n_75 = NULL;
  ATerm c_16;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = c_16;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm d_16 = t;
      if(PushChoice()==0)
        {
          t = h_65(t);
          PopChoice();
        }
      else
        {
          t = d_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_7);
    {
      ATerm e_7 (ATerm t)
      {
        ATerm e_16 = t;
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
            t = e_16;
            {
              ATerm q_7 (ATerm t)
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm o_75 = NULL;
                  o_75 = t;
                  if(n_75 != NULL && n_75 != o_75)
                    _fail(o_75);
                  else
                    n_75 = o_75;
                  return(t);
                }
                t = Undefined_1(t, r_7);
                return(t);
              }
              t = option_defined_1(t, q_7);
              {
                ATerm f_16;
                f_16 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_75), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = f_16;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_7);
      {
        ATerm g_16;
        g_16 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = g_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    ATerm h_16 = t;
    if(PushChoice()==0)
      {
        t = p_66(t);
        PopChoice();
      }
    else
      {
        t = h_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_7);
  t = store_options_0(t);
  {
    ATerm l_16 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, q_66);
        PopChoice();
      }
    else
      {
        t = l_16;
        {
          ATerm m_16 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, o_66);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = m_16;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  t = iowrap_3(t, j_66, k_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm u_7 (ATerm t)
    {
      t = TCons_2(t, g_66, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, u_7);
    return(t);
  }
  t = iowrap_2(t, t_7, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_clean_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, y_7);
    return(t);
  }
  t = iowrap_1(t, v_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
