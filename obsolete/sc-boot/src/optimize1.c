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
ATerm simplify_0 (ATerm);
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
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_82 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
                  ATerm a_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = a_8;
                      {
                        ATerm d_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm r_8;
                            r_8 = t;
                            {
                              ATerm b_0 (ATerm t)
                              {
                                t = not_null(z_1);
                                return(t);
                              }
                              t = HdMember_1(t, b_0);
                            }
                            t = r_8;
                            t = Cons_2(t, _id, e_2);
                            PopChoice();
                          }
                        else
                          {
                            t = d_8;
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
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, d_86, b_86);
      PopChoice();
    }
  else
    {
      t = s_8;
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
                  ATerm t_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(p_4);
                      PopChoice();
                    }
                  else
                    {
                      t = t_8;
                      {
                        ATerm u_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm c_0 (ATerm t)
                            {
                              t = not_null(p_4);
                              return(t);
                            }
                            t = HdMember_1(t, c_0);
                            t = u_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = u_8;
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
  ATerm w_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = m_74(t);
      PopChoice();
    }
  else
    {
      t = w_8;
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
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = m_71(t);
        PopChoice();
      }
    else
      {
        t = y_8;
        {
          ATerm c_9 = t;
          if(PushChoice()==0)
            {
              ATerm f_6 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm g_6 = NULL;
                t = n_71(t);
                g_6 = t;
                if(f_6 != NULL && f_6 != g_6)
                  _fail(g_6);
                else
                  f_6 = g_6;
              }
              t = g_9;
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = not_null(f_6);
                    return(t);
                  }
                  t = split_2(t, h_6, l_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm k_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = o_71(t, j_0, h_6, k_0);
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, m_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = c_9;
              {
                ATerm n_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, n_0, union_0, h_6);
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
  ATerm o_0 (ATerm t)
  {
    ATerm l_9 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = l_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, o_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  p_6 = t;
  n_6 :
  if(match_cons(p_6, sym_Scope_2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      o_6 :
      if(match_cons(r_6, sym_Seq_2))
        {
          s_6 = ATgetArgument(r_6, 0);
          t_6 = ATgetArgument(r_6, 1);
          {
            ATerm x_6 = NULL,y_6 = NULL;
            ATerm z_6 = NULL,b_7 = NULL;
            ATerm a_7 = NULL;
            t = not_null(s_6);
            t = tvars_0(t);
            a_7 = t;
            if(z_6 != NULL && z_6 != a_7)
              _fail(a_7);
            else
              z_6 = a_7;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TNil_0)));
            {
              ATerm c_7 = NULL;
              t = isect_0(t);
              b_7 = t;
              if(x_6 != NULL && x_6 != b_7)
                _fail(b_7);
              else
                x_6 = b_7;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_6), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
              c_7 = t;
              if(y_6 != NULL && y_6 != c_7)
                _fail(c_7);
              else
                y_6 = c_7;
              {
                ATerm m_9 = t;
                if(PushChoice()==0)
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = m_9;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_6), not_null(t_6))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    t = e_82(t);
    t = _all(t, h_7);
    return(t);
  }
  t = h_7(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, p_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  ATerm b_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_7), not_null(p_7)));
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_7), not_null(u_7)));
    return(t);
  }
  q_7 = t;
  k_7 :
  if(match_cons(q_7, sym_Seq_2))
    {
      r_7 = ATgetArgument(q_7, 0);
      u_7 = ATgetArgument(q_7, 1);
      l_7 :
      if(match_cons(u_7, sym_Scope_2))
        {
          o_7 = ATgetArgument(u_7, 0);
          p_7 = ATgetArgument(u_7, 1);
          m_7 :
          if(match_cons(r_7, sym_Scope_2))
            {
              s_7 = ATgetArgument(r_7, 0);
              t_7 = ATgetArgument(r_7, 1);
              {
                ATerm v_9 = t;
                if(PushChoice()==0)
                  {
                    t = b_8(t);
                    PopChoice();
                  }
                else
                  {
                    t = v_9;
                    t = c_8(t);
                  }
              }
            }
          else
            t = b_8(t);
        }
      else
        {
          n_7 :
          if(match_cons(r_7, sym_Scope_2))
            {
              s_7 = ATgetArgument(r_7, 0);
              t_7 = ATgetArgument(r_7, 1);
              t = c_8(t);
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
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  j_8 = t;
  e_8 :
  if(match_cons(j_8, sym_Let_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      q_8 = ATgetArgument(j_8, 1);
      f_8 :
      if(match_cons(k_8, sym_Cons_2))
        {
          l_8 = ATgetArgument(k_8, 0);
          p_8 = ATgetArgument(k_8, 1);
          g_8 :
          if(match_cons(l_8, sym_SDef_3))
            {
              m_8 = ATgetArgument(l_8, 0);
              n_8 = ATgetArgument(l_8, 1);
              o_8 = ATgetArgument(l_8, 2);
              h_8 :
              if(match_cons(n_8, sym_Nil_0))
                {
                  i_8 :
                  if(match_cons(p_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(m_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(o_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(q_8));
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
  ATerm v_8 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = b_80(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        t = Cons_2(t, _id, v_8);
      }
    return(t);
  }
  t = v_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Let_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm n_9 = NULL,o_9 = NULL;
        ATerm d_10 = NULL;
        t = not_null(j_9);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
            p_9 = t;
            d_9 :
            if(match_cons(p_9, sym_Cons_2))
              {
                q_9 = ATgetArgument(p_9, 0);
                u_9 = ATgetArgument(p_9, 1);
                e_9 :
                if(match_cons(q_9, sym_SDef_3))
                  {
                    r_9 = ATgetArgument(q_9, 0);
                    s_9 = ATgetArgument(q_9, 1);
                    t_9 = ATgetArgument(q_9, 2);
                    f_9 :
                    if(match_cons(s_9, sym_Nil_0))
                      {
                        ATerm c_10 = NULL;
                        t = not_null(k_9);
                        {
                          ATerm r_0 (ATerm t)
                          {
                            ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
                            y_9 = t;
                            z_8 :
                            if(match_cons(y_9, sym_Call_2))
                              {
                                z_9 = ATgetArgument(y_9, 0);
                                b_10 = ATgetArgument(y_9, 1);
                                a_9 :
                                if(match_cons(z_9, sym_SVar_1))
                                  {
                                    a_10 = ATgetArgument(z_9, 0);
                                    b_9 :
                                    if(match_cons(b_10, sym_Nil_0))
                                      {
                                        if(r_9 != NULL && r_9 != a_10)
                                          _fail(a_10);
                                        else
                                          r_9 = a_10;
                                        t = not_null(t_9);
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
                          t = oncetd_1(t, r_0);
                          c_10 = t;
                          if(n_9 != NULL && n_9 != c_10)
                            _fail(c_10);
                          else
                            n_9 = c_10;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm x_9 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = x_9;
                          }
                        }
                        t = not_null(u_9);
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
          t = at_suffix_1(t, q_0);
          d_10 = t;
          if(o_9 != NULL && o_9 != d_10)
            _fail(d_10);
          else
            o_9 = d_10;
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_9), not_null(n_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  u_10 = t;
  l_10 :
  if(match_cons(u_10, sym_TCons_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      x_10 = ATgetArgument(u_10, 1);
      m_10 :
      if(match_cons(v_10, sym_Build_1))
        {
          w_10 = ATgetArgument(v_10, 0);
          n_10 :
          if(match_cons(x_10, sym_TCons_2))
            {
              y_10 = ATgetArgument(x_10, 0);
              b_11 = ATgetArgument(x_10, 1);
              o_10 :
              if(match_cons(y_10, sym_Where_1))
                {
                  z_10 = ATgetArgument(y_10, 0);
                  p_10 :
                  if(match_cons(z_10, sym_Prim_2))
                    {
                      s_10 = ATgetArgument(z_10, 0);
                      t_10 = ATgetArgument(z_10, 1);
                      q_10 :
                      if(match_cons(b_11, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(s_10), not_null(t_10));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_10, sym_Prim_2))
                    {
                      z_10 = ATgetArgument(y_10, 0);
                      a_11 = ATgetArgument(y_10, 1);
                      r_10 :
                      if(match_cons(b_11, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(z_10), not_null(a_11));
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
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  u_11 = t;
  m_11 :
  if(match_cons(u_11, sym_TCons_2))
    {
      v_11 = ATgetArgument(u_11, 0);
      x_11 = ATgetArgument(u_11, 1);
      n_11 :
      if(match_cons(v_11, sym_Build_1))
        {
          w_11 = ATgetArgument(v_11, 0);
          o_11 :
          if(match_cons(x_11, sym_TCons_2))
            {
              y_11 = ATgetArgument(x_11, 0);
              a_12 = ATgetArgument(x_11, 1);
              p_11 :
              if(match_cons(y_11, sym_Where_1))
                {
                  z_11 = ATgetArgument(y_11, 0);
                  q_11 :
                  if(match_cons(z_11, sym_Build_1))
                    {
                      t_11 = ATgetArgument(z_11, 0);
                      r_11 :
                      if(match_cons(a_12, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_11));
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_11, sym_Build_1))
                    {
                      z_11 = ATgetArgument(y_11, 0);
                      s_11 :
                      if(match_cons(a_12, sym_TNil_0))
                        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_11));
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  c_15 = t;
  n_12 :
  if(match_cons(c_15, sym_TCons_2))
    {
      d_15 = ATgetArgument(c_15, 0);
      h_15 = ATgetArgument(c_15, 1);
      o_12 :
      if(match_cons(d_15, sym_Build_1))
        {
          e_15 = ATgetArgument(d_15, 0);
          k_14 :
          if(match_cons(e_15, sym_Op_2))
            {
              f_15 = ATgetArgument(e_15, 0);
              g_15 = ATgetArgument(e_15, 1);
              l_14 :
              if(match_cons(h_15, sym_TCons_2))
                {
                  i_15 = ATgetArgument(h_15, 0);
                  m_15 = ATgetArgument(h_15, 1);
                  q_14 :
                  if(match_cons(i_15, sym_Match_1))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      a_15 :
                      if(match_cons(j_15, sym_Op_2))
                        {
                          k_15 = ATgetArgument(j_15, 0);
                          l_15 = ATgetArgument(j_15, 1);
                          b_15 :
                          if(match_cons(m_15, sym_TNil_0))
                            {
                              ATerm p_15 = NULL,q_15 = NULL;
                              if(f_15 != NULL && f_15 != k_15)
                                _fail(k_15);
                              else
                                f_15 = k_15;
                              if(p_15 != NULL && p_15 != l_15)
                                _fail(l_15);
                              else
                                p_15 = l_15;
                              {
                                ATerm i_16 = NULL;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_15), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm s_0 (ATerm t)
                                  {
                                    ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
                                    r_15 = t;
                                    j_12 :
                                    if(match_cons(r_15, sym_TCons_2))
                                      {
                                        s_15 = ATgetArgument(r_15, 0);
                                        t_15 = ATgetArgument(r_15, 1);
                                        k_12 :
                                        if(match_cons(t_15, sym_TCons_2))
                                          {
                                            u_15 = ATgetArgument(t_15, 0);
                                            v_15 = ATgetArgument(t_15, 1);
                                            l_12 :
                                            if(match_cons(v_15, sym_TNil_0))
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_15)));
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
                                  t = zip_1(t, s_0);
                                  i_16 = t;
                                  if(q_15 != NULL && q_15 != i_16)
                                    _fail(i_16);
                                  else
                                    q_15 = i_16;
                                }
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_15), not_null(g_15))));
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  t_16 = t;
  q_16 :
  if(match_cons(t_16, sym_TCons_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      r_16 :
      if(match_cons(v_16, sym_TCons_2))
        {
          w_16 = ATgetArgument(v_16, 0);
          x_16 = ATgetArgument(v_16, 1);
          s_16 :
          if(match_cons(x_16, sym_TNil_0))
            {
              if(u_16 != NULL && u_16 != w_16)
                _fail(w_16);
              else
                u_16 = w_16;
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
  ATerm y_18 = NULL,z_18 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  y_18 = t;
  b_17 :
  if(match_cons(y_18, sym_TCons_2))
    {
      z_18 = ATgetArgument(y_18, 0);
      e_20 = ATgetArgument(y_18, 1);
      d_18 :
      if(match_cons(z_18, sym_Build_1))
        {
          j_19 = ATgetArgument(z_18, 0);
          e_18 :
          if(match_cons(j_19, sym_Op_2))
            {
              k_19 = ATgetArgument(j_19, 0);
              l_19 = ATgetArgument(j_19, 1);
              f_18 :
              if(match_cons(e_20, sym_TCons_2))
                {
                  f_20 = ATgetArgument(e_20, 0);
                  j_20 = ATgetArgument(e_20, 1);
                  q_18 :
                  if(match_cons(f_20, sym_Match_1))
                    {
                      g_20 = ATgetArgument(f_20, 0);
                      r_18 :
                      if(match_cons(g_20, sym_Op_2))
                        {
                          h_20 = ATgetArgument(g_20, 0);
                          i_20 = ATgetArgument(g_20, 1);
                          s_18 :
                          if(match_cons(j_20, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm e_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = e_10;
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
  ATerm f_10 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = f_10;
      {
        ATerm g_10 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = g_10;
            {
              ATerm h_10 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_10;
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
  ATerm v_20 = NULL,w_20 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  ATerm w_21 (ATerm t)
  {
    ATerm t_21 = NULL;
    ATerm u_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_21), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    u_21 = t;
    if(t_21 != NULL && t_21 != u_21)
      _fail(u_21);
    else
      t_21 = u_21;
    t = not_null(t_21);
    return(t);
  }
  g_21 = t;
  t_20 :
  if(match_cons(g_21, sym_Seq_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      u_20 :
      if(match_cons(i_21, sym_Seq_2))
        {
          v_20 = ATgetArgument(i_21, 0);
          w_20 = ATgetArgument(i_21, 1);
          {
            ATerm i_10 = t;
            if(PushChoice()==0)
              {
                ATerm m_21 = NULL;
                ATerm n_21 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = BMF_0(t);
                n_21 = t;
                if(m_21 != NULL && m_21 != n_21)
                  _fail(n_21);
                else
                  m_21 = n_21;
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_21), not_null(w_20));
                PopChoice();
              }
            else
              {
                t = i_10;
                t = w_21(t);
              }
          }
        }
      else
        t = w_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL;
  e_22 = t;
  a_22 :
  if(match_cons(e_22, sym_Seq_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      h_22 = ATgetArgument(e_22, 1);
      b_22 :
      if(match_cons(f_22, sym_Build_1))
        {
          g_22 = ATgetArgument(f_22, 0);
          c_22 :
          if(match_cons(h_22, sym_Seq_2))
            {
              i_22 = ATgetArgument(h_22, 0);
              l_22 = ATgetArgument(h_22, 1);
              d_22 :
              if(match_cons(i_22, sym_Build_1))
                {
                  j_22 = ATgetArgument(i_22, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_22)), not_null(l_22));
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
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  u_22 = t;
  s_22 :
  if(match_cons(u_22, sym_Scope_2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      t_22 :
      if(match_cons(w_22, sym_Scope_2))
        {
          x_22 = ATgetArgument(w_22, 0);
          y_22 = ATgetArgument(w_22, 1);
          {
            ATerm c_23 = NULL;
            ATerm m_23 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            m_23 = t;
            if(c_23 != NULL && c_23 != m_23)
              _fail(m_23);
            else
              c_23 = m_23;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_23), not_null(y_22));
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
  ATerm u_23 = NULL,d_24 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Var_1))
    {
      d_24 = ATgetArgument(u_23, 0);
      t = not_null(d_24);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  l_24 = t;
  h_24 :
  if(match_cons(l_24, sym_TCons_2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      i_24 :
      if(match_cons(n_24, sym_TCons_2))
        {
          o_24 = ATgetArgument(n_24, 0);
          r_24 = ATgetArgument(n_24, 1);
          j_24 :
          if(match_cons(o_24, sym_Cons_2))
            {
              p_24 = ATgetArgument(o_24, 0);
              q_24 = ATgetArgument(o_24, 1);
              k_24 :
              if(match_cons(r_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  d_25 = t;
  w_24 :
  if(match_cons(d_25, sym_TCons_2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      x_24 :
      if(match_cons(f_25, sym_TCons_2))
        {
          i_25 = ATgetArgument(f_25, 0);
          u_25 = ATgetArgument(f_25, 1);
          y_24 :
          if(match_cons(i_25, sym_Cons_2))
            {
              j_25 = ATgetArgument(i_25, 0);
              t_25 = ATgetArgument(i_25, 1);
              z_24 :
              if(match_cons(j_25, sym_TCons_2))
                {
                  k_25 = ATgetArgument(j_25, 0);
                  l_25 = ATgetArgument(j_25, 1);
                  a_25 :
                  if(match_cons(l_25, sym_TCons_2))
                    {
                      r_25 = ATgetArgument(l_25, 0);
                      s_25 = ATgetArgument(l_25, 1);
                      b_25 :
                      if(match_cons(s_25, sym_TNil_0))
                        {
                          c_25 :
                          if(match_cons(u_25, sym_TNil_0))
                            {
                              ATerm w_25 = NULL;
                              if(e_25 != NULL && e_25 != k_25)
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              if(w_25 != NULL && w_25 != r_25)
                                _fail(r_25);
                              else
                                w_25 = r_25;
                              t = not_null(w_25);
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
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = j_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm c_26 = NULL;
  ATerm e_26 = NULL,f_26 = NULL;
  c_26 = t;
  {
    ATerm g_26 = NULL;
    t = not_null(c_26);
    {
      ATerm h_26 = NULL;
      t = i_85(t);
      g_26 = t;
      if(e_26 != NULL && e_26 != g_26)
        _fail(g_26);
      else
        e_26 = g_26;
      t = j_85(t);
      h_26 = t;
      if(f_26 != NULL && f_26 != h_26)
        _fail(h_26);
      else
        f_26 = h_26;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_26), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm l_26 (ATerm t)
  {
    ATerm k_10 = t;
    if(PushChoice()==0)
      {
        t = i_84(t);
        PopChoice();
      }
    else
      {
        t = k_10;
        t = _all(t, l_26);
      }
    return(t);
  }
  t = l_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  t_26 = t;
  p_26 :
  if(match_cons(t_26, sym_TCons_2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      q_26 :
      if(match_cons(v_26, sym_TCons_2))
        {
          w_26 = ATgetArgument(v_26, 0);
          x_26 = ATgetArgument(v_26, 1);
          r_26 :
          if(match_cons(x_26, sym_TNil_0))
            {
              ATerm b_27 = NULL;
              if(b_27 != NULL && b_27 != w_26)
                _fail(w_26);
              else
                b_27 = w_26;
            }
          else
            {
              if(match_cons(x_26, sym_TCons_2))
                {
                  y_26 = ATgetArgument(x_26, 0);
                  z_26 = ATgetArgument(x_26, 1);
                  s_26 :
                  if(match_cons(z_26, sym_TNil_0))
                    {
                      ATerm h_27 = NULL;
                      ATerm i_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      i_27 = t;
                      if(h_27 != NULL && h_27 != i_27)
                        _fail(i_27);
                      else
                        h_27 = i_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  t = subs_args_0(t);
  q_27 = t;
  n_27 :
  if(match_cons(q_27, sym_TCons_2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      o_27 :
      if(match_cons(s_27, sym_TCons_2))
        {
          t_27 = ATgetArgument(s_27, 0);
          u_27 = ATgetArgument(s_27, 1);
          p_27 :
          if(match_cons(u_27, sym_TNil_0))
            {
              t = not_null(t_27);
              {
                ATerm t_0 (ATerm t)
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = not_null(r_27);
                    return(t);
                  }
                  t = SubsVar_2(t, k_85, u_0);
                  t = l_85(t);
                  return(t);
                }
                t = alltd_1(t, t_0);
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  d_28 = t;
  z_27 :
  if(match_cons(d_28, sym_TCons_2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      a_28 :
      if(match_cons(f_28, sym_TCons_2))
        {
          g_28 = ATgetArgument(f_28, 0);
          j_28 = ATgetArgument(f_28, 1);
          b_28 :
          if(match_cons(g_28, sym_Cons_2))
            {
              h_28 = ATgetArgument(g_28, 0);
              i_28 = ATgetArgument(g_28, 1);
              c_28 :
              if(match_cons(j_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_28), not_null(e_28)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  e_29 = t;
  a_29 :
  if(match_cons(e_29, sym_Cons_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      k_29 = ATgetArgument(e_29, 1);
      b_29 :
      if(match_cons(f_29, sym_TCons_2))
        {
          g_29 = ATgetArgument(f_29, 0);
          h_29 = ATgetArgument(f_29, 1);
          c_29 :
          if(match_cons(h_29, sym_TCons_2))
            {
              i_29 = ATgetArgument(h_29, 0);
              j_29 = ATgetArgument(h_29, 1);
              d_29 :
              if(match_cons(j_29, sym_TNil_0))
                {
                  ATerm o_29 = NULL,p_29 = NULL,x_29 = NULL,f_30 = NULL;
                  ATerm c_11;
                  c_11 = t;
                  {
                    ATerm q_29 = NULL;
                    ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
                    t = not_null(i_29);
                    q_29 = t;
                    t = SSL_explode_term(not_null(q_29));
                    s_29 = t;
                    r_28 :
                    if(match_cons(s_29, sym_TCons_2))
                      {
                        t_29 = ATgetArgument(s_29, 0);
                        u_29 = ATgetArgument(s_29, 1);
                        s_28 :
                        if(match_cons(u_29, sym_TCons_2))
                          {
                            v_29 = ATgetArgument(u_29, 0);
                            w_29 = ATgetArgument(u_29, 1);
                            t_28 :
                            if(match_cons(w_29, sym_TNil_0))
                              {
                                if(o_29 != NULL && o_29 != t_29)
                                  _fail(t_29);
                                else
                                  o_29 = t_29;
                                if(p_29 != NULL && p_29 != v_29)
                                  _fail(v_29);
                                else
                                  p_29 = v_29;
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
                  t = c_11;
                  {
                    ATerm d_11;
                    d_11 = t;
                    {
                      ATerm y_29 = NULL;
                      ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
                      t = not_null(g_29);
                      y_29 = t;
                      t = SSL_explode_term(not_null(y_29));
                      a_30 = t;
                      w_28 :
                      if(match_cons(a_30, sym_TCons_2))
                        {
                          b_30 = ATgetArgument(a_30, 0);
                          c_30 = ATgetArgument(a_30, 1);
                          x_28 :
                          if(match_cons(c_30, sym_TCons_2))
                            {
                              d_30 = ATgetArgument(c_30, 0);
                              e_30 = ATgetArgument(c_30, 1);
                              y_28 :
                              if(match_cons(e_30, sym_TNil_0))
                                {
                                  if(o_29 != NULL && o_29 != b_30)
                                    _fail(b_30);
                                  else
                                    o_29 = b_30;
                                  if(x_29 != NULL && x_29 != d_30)
                                    _fail(d_30);
                                  else
                                    x_29 = d_30;
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
                    t = d_11;
                    {
                      ATerm g_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      g_30 = t;
                      if(f_30 != NULL && f_30 != g_30)
                        _fail(g_30);
                      else
                        f_30 = g_30;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  s_30 = t;
  o_30 :
  if(match_cons(s_30, sym_Cons_2))
    {
      t_30 = ATgetArgument(s_30, 0);
      y_30 = ATgetArgument(s_30, 1);
      p_30 :
      if(match_cons(t_30, sym_TCons_2))
        {
          u_30 = ATgetArgument(t_30, 0);
          v_30 = ATgetArgument(t_30, 1);
          q_30 :
          if(match_cons(v_30, sym_TCons_2))
            {
              w_30 = ATgetArgument(v_30, 0);
              x_30 = ATgetArgument(v_30, 1);
              r_30 :
              if(match_cons(x_30, sym_TNil_0))
                {
                  ATerm a_31 = NULL;
                  if(u_30 != NULL && u_30 != w_30)
                    _fail(w_30);
                  else
                    u_30 = w_30;
                  if(a_31 != NULL && a_31 != y_30)
                    _fail(y_30);
                  else
                    a_31 = y_30;
                  t = not_null(a_31);
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
  ATerm c_31 (ATerm t)
  {
    ATerm e_11 = t;
    if(PushChoice()==0)
      {
        t = b_70(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        t = c_70(t);
        t = c_31(t);
      }
    return(t);
  }
  t = c_31(t);
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
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Cons_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      t = r_75(t);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm l_31 = NULL;
          l_31 = t;
          if(h_31 != NULL && h_31 != l_31)
            _fail(l_31);
          else
            h_31 = l_31;
          return(t);
        }
        t = fetch_1(t, v_0);
      }
      t = not_null(i_31);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
      v_31 = t;
      r_31 :
      if(match_cons(v_31, sym_TCons_2))
        {
          w_31 = ATgetArgument(v_31, 0);
          x_31 = ATgetArgument(v_31, 1);
          s_31 :
          if(match_cons(x_31, sym_TCons_2))
            {
              y_31 = ATgetArgument(x_31, 0);
              z_31 = ATgetArgument(x_31, 1);
              t_31 :
              if(match_cons(z_31, sym_TNil_0))
                {
                  t = not_null(w_31);
                  {
                    ATerm f_32 (ATerm t)
                    {
                      ATerm g_11 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = g_11;
                          {
                            ATerm h_11 = t;
                            if(PushChoice()==0)
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = not_null(y_31);
                                  return(t);
                                }
                                t = HdMember_1(t, w_0);
                                t = f_32(t);
                                PopChoice();
                              }
                            else
                              {
                                t = h_11;
                                t = Cons_2(t, _id, f_32);
                              }
                          }
                        }
                      return(t);
                    }
                    t = f_32(t);
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
      t = f_11;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm c_32 = NULL;
          c_32 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_32), (ATerm) ATmakeAppl(sym_TNil_0)));
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
          ATerm i_11 = t;
          if(PushChoice()==0)
            {
              ATerm b_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm j_11 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = j_11;
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
              t = i_11;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, x_0, y_0, z_0);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm h_32 (ATerm t)
  {
    ATerm k_11 = t;
    if(PushChoice()==0)
      {
        t = u_83(t);
        PopChoice();
      }
    else
      {
        t = k_11;
        t = _one(t, h_32);
      }
    return(t);
  }
  t = h_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  n_32 = t;
  k_32 :
  if(match_cons(n_32, sym_TCons_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      l_32 :
      if(match_cons(p_32, sym_TCons_2))
        {
          q_32 = ATgetArgument(p_32, 0);
          r_32 = ATgetArgument(p_32, 1);
          m_32 :
          if(match_cons(r_32, sym_TNil_0))
            {
              t = not_null(q_32);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm u_32 = NULL;
                  u_32 = t;
                  if(o_32 != NULL && o_32 != u_32)
                    _fail(u_32);
                  else
                    o_32 = u_32;
                  return(t);
                }
                t = oncetd_1(t, d_1);
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
  ATerm a_33 = NULL,b_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym_Var_1))
    {
      b_33 = ATgetArgument(a_33, 0);
      {
        ATerm d_33 = NULL;
        t = not_null(b_33);
        t = p_61(t);
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  y_34 = t;
  x_33 :
  if(match_cons(y_34, sym_Seq_2))
    {
      z_34 = ATgetArgument(y_34, 0);
      c_35 = ATgetArgument(y_34, 1);
      y_33 :
      if(match_cons(z_34, sym_Assign_1))
        {
          a_35 = ATgetArgument(z_34, 0);
          z_33 :
          if(match_cons(a_35, sym_Var_1))
            {
              r_34 = ATgetArgument(a_35, 0);
              a_34 :
              if(match_cons(c_35, sym_Seq_2))
                {
                  d_35 = ATgetArgument(c_35, 0);
                  e_35 = ATgetArgument(c_35, 1);
                  b_34 :
                  if(match_cons(d_35, sym_Build_1))
                    {
                      u_34 = ATgetArgument(d_35, 0);
                      c_34 :
                      if(match_cons(u_34, sym_Var_1))
                        {
                          v_34 = ATgetArgument(u_34, 0);
                          {
                            ATerm k_35 = NULL;
                            if(r_34 != NULL && r_34 != v_34)
                              _fail(v_34);
                            else
                              r_34 = v_34;
                            if(k_35 != NULL && k_35 != e_35)
                              _fail(e_35);
                            else
                              k_35 = e_35;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_34))), not_null(k_35));
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
          if(match_cons(z_34, sym_Build_1))
            {
              a_35 = ATgetArgument(z_34, 0);
              d_34 :
              if(match_cons(c_35, sym_Scope_2))
                {
                  d_35 = ATgetArgument(c_35, 0);
                  e_35 = ATgetArgument(c_35, 1);
                  e_34 :
                  if(match_cons(e_35, sym_Seq_2))
                    {
                      f_35 = ATgetArgument(e_35, 0);
                      i_35 = ATgetArgument(e_35, 1);
                      f_34 :
                      if(match_cons(f_35, sym_Assign_1))
                        {
                          g_35 = ATgetArgument(f_35, 0);
                          g_34 :
                          if(match_cons(g_35, sym_Var_1))
                            {
                              h_35 = ATgetArgument(g_35, 0);
                              {
                                ATerm l_11 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm n_36 = NULL,p_36 = NULL;
                                    ATerm b_12;
                                    b_12 = t;
                                    {
                                      ATerm o_36 = NULL;
                                      t = not_null(a_35);
                                      t = Var_1(t, _id);
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = in_0(t);
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = diff_0(t);
                                      o_36 = t;
                                      if(n_36 != NULL && n_36 != o_36)
                                        _fail(o_36);
                                      else
                                        n_36 = o_36;
                                    }
                                    t = b_12;
                                    {
                                      ATerm q_36 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                      t = tsubs_0(t);
                                      q_36 = t;
                                      if(p_36 != NULL && p_36 != q_36)
                                        _fail(q_36);
                                      else
                                        p_36 = q_36;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_36), not_null(p_36)));
                                    }
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_11;
                                    {
                                      ATerm v_36 = NULL,x_36 = NULL;
                                      ATerm c_12;
                                      c_12 = t;
                                      {
                                        ATerm w_36 = NULL;
                                        t = not_null(a_35);
                                        t = Var_1(t, _id);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = diff_0(t);
                                        w_36 = t;
                                        if(v_36 != NULL && v_36 != w_36)
                                          _fail(w_36);
                                        else
                                          v_36 = w_36;
                                      }
                                      t = c_12;
                                      {
                                        ATerm y_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                        t = tsubs_0(t);
                                        y_36 = t;
                                        if(x_36 != NULL && x_36 != y_36)
                                          _fail(y_36);
                                        else
                                          x_36 = y_36;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_36), not_null(x_36)));
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
      if(match_cons(y_34, sym_Scope_2))
        {
          z_34 = ATgetArgument(y_34, 0);
          c_35 = ATgetArgument(y_34, 1);
          h_34 :
          if(match_cons(c_35, sym_Seq_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              e_35 = ATgetArgument(c_35, 1);
              i_34 :
              if(match_cons(d_35, sym_Assign_1))
                {
                  u_34 = ATgetArgument(d_35, 0);
                  j_34 :
                  if(match_cons(u_34, sym_Var_1))
                    {
                      v_34 = ATgetArgument(u_34, 0);
                      k_34 :
                      if(match_cons(e_35, sym_Seq_2))
                        {
                          f_35 = ATgetArgument(e_35, 0);
                          i_35 = ATgetArgument(e_35, 1);
                          l_34 :
                          if(match_cons(f_35, sym_Assign_2))
                            {
                              g_35 = ATgetArgument(f_35, 0);
                              s_34 = ATgetArgument(f_35, 1);
                              m_34 :
                              if(match_cons(g_35, sym_Var_1))
                                {
                                  h_35 = ATgetArgument(g_35, 0);
                                  n_34 :
                                  if(match_cons(s_34, sym_Var_1))
                                    {
                                      t_34 = ATgetArgument(s_34, 0);
                                      {
                                        ATerm o_35 = NULL,p_35 = NULL,r_35 = NULL;
                                        if(v_34 != NULL && v_34 != t_34)
                                          _fail(t_34);
                                        else
                                          v_34 = t_34;
                                        if(o_35 != NULL && o_35 != i_35)
                                          _fail(i_35);
                                        else
                                          o_35 = i_35;
                                        {
                                          ATerm d_12;
                                          d_12 = t;
                                          {
                                            ATerm q_35 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = in_0(t);
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = in_0(t);
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                            t = diff_0(t);
                                            q_35 = t;
                                            if(p_35 != NULL && p_35 != q_35)
                                              _fail(q_35);
                                            else
                                              p_35 = q_35;
                                          }
                                          t = d_12;
                                          {
                                            ATerm s_35 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                            t = tsubs_0(t);
                                            s_35 = t;
                                            if(r_35 != NULL && r_35 != s_35)
                                              _fail(s_35);
                                            else
                                              r_35 = s_35;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34))), not_null(r_35)));
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
                              if(match_cons(f_35, sym_Assign_1))
                                {
                                  g_35 = ATgetArgument(f_35, 0);
                                  o_34 :
                                  if(match_cons(g_35, sym_Var_1))
                                    {
                                      h_35 = ATgetArgument(g_35, 0);
                                      {
                                        ATerm x_35 = NULL,z_35 = NULL;
                                        ATerm e_12;
                                        e_12 = t;
                                        {
                                          ATerm y_35 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = in_0(t);
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = in_0(t);
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          t = diff_0(t);
                                          y_35 = t;
                                          if(x_35 != NULL && x_35 != y_35)
                                            _fail(y_35);
                                          else
                                            x_35 = y_35;
                                        }
                                        t = e_12;
                                        {
                                          ATerm a_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = tsubs_0(t);
                                          a_36 = t;
                                          if(z_35 != NULL && z_35 != a_36)
                                            _fail(a_36);
                                          else
                                            z_35 = a_36;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34))), not_null(z_35)));
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
                  if(match_cons(d_35, sym_Assign_2))
                    {
                      u_34 = ATgetArgument(d_35, 0);
                      w_34 = ATgetArgument(d_35, 1);
                      p_34 :
                      if(match_cons(u_34, sym_Var_1))
                        {
                          v_34 = ATgetArgument(u_34, 0);
                          q_34 :
                          if(match_cons(w_34, sym_Var_1))
                            {
                              x_34 = ATgetArgument(w_34, 0);
                              {
                                ATerm f_36 = NULL,h_36 = NULL;
                                ATerm f_12;
                                f_12 = t;
                                {
                                  ATerm g_36 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = diff_0(t);
                                  g_36 = t;
                                  if(f_36 != NULL && f_36 != g_36)
                                    _fail(g_36);
                                  else
                                    f_36 = g_36;
                                }
                                t = f_12;
                                {
                                  ATerm i_36 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  i_36 = t;
                                  if(h_36 != NULL && h_36 != i_36)
                                    _fail(i_36);
                                  else
                                    h_36 = i_36;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_36), not_null(h_36));
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
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  u_37 = t;
  s_37 :
  if(match_cons(u_37, sym_Seq_2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      t_37 :
      if(match_cons(w_37, sym_Let_2))
        {
          x_37 = ATgetArgument(w_37, 0);
          y_37 = ATgetArgument(w_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_37), not_null(y_37)));
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
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  l_38 = t;
  e_38 :
  if(match_cons(l_38, sym_TCons_2))
    {
      m_38 = ATgetArgument(l_38, 0);
      n_38 = ATgetArgument(l_38, 1);
      f_38 :
      if(match_cons(n_38, sym_TCons_2))
        {
          o_38 = ATgetArgument(n_38, 0);
          p_38 = ATgetArgument(n_38, 1);
          k_38 :
          if(match_cons(p_38, sym_TNil_0))
            {
              t = not_null(m_38);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(o_38);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm z_38 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,k_39 = NULL;
  z_38 = t;
  u_38 :
  if(match_cons(z_38, sym_TCons_2))
    {
      e_39 = ATgetArgument(z_38, 0);
      f_39 = ATgetArgument(z_38, 1);
      x_38 :
      if(match_cons(f_39, sym_TCons_2))
        {
          i_39 = ATgetArgument(f_39, 0);
          k_39 = ATgetArgument(f_39, 1);
          y_38 :
          if(match_cons(k_39, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_39), not_null(i_39));
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  y_39 = t;
  p_39 :
  if(match_cons(y_39, sym_TCons_2))
    {
      z_39 = ATgetArgument(y_39, 0);
      c_40 = ATgetArgument(y_39, 1);
      q_39 :
      if(match_cons(z_39, sym_Cons_2))
        {
          a_40 = ATgetArgument(z_39, 0);
          b_40 = ATgetArgument(z_39, 1);
          r_39 :
          if(match_cons(c_40, sym_TCons_2))
            {
              f_40 = ATgetArgument(c_40, 0);
              i_40 = ATgetArgument(c_40, 1);
              s_39 :
              if(match_cons(f_40, sym_Cons_2))
                {
                  g_40 = ATgetArgument(f_40, 0);
                  h_40 = ATgetArgument(f_40, 1);
                  x_39 :
                  if(match_cons(i_40, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  u_40 = t;
  p_40 :
  if(match_cons(u_40, sym_TCons_2))
    {
      v_40 = ATgetArgument(u_40, 0);
      w_40 = ATgetArgument(u_40, 1);
      q_40 :
      if(match_cons(v_40, sym_Nil_0))
        {
          r_40 :
          if(match_cons(w_40, sym_TCons_2))
            {
              x_40 = ATgetArgument(w_40, 0);
              y_40 = ATgetArgument(w_40, 1);
              s_40 :
              if(match_cons(x_40, sym_Nil_0))
                {
                  t_40 :
                  if(match_cons(y_40, sym_TNil_0))
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
  ATerm a_41 (ATerm t)
  {
    ATerm g_12 = t;
    if(PushChoice()==0)
      {
        t = r_77(t);
        PopChoice();
      }
    else
      {
        t = g_12;
        t = s_77(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = TCons_2(t, a_41, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_77, f_1);
          t = t_77(t);
        }
      }
    return(t);
  }
  t = a_41(t);
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
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym_Cong_2))
    {
      u_41 = ATgetArgument(t_41, 0);
      v_41 = ATgetArgument(t_41, 1);
      {
        ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,c_43 = NULL;
        ATerm h_12;
        h_12 = t;
        {
          ATerm d_42 = NULL;
          t = not_null(v_41);
          {
            ATerm g_42 = NULL;
            t = map_1(t, new_0);
            d_42 = t;
            if(a_42 != NULL && a_42 != d_42)
              _fail(d_42);
            else
              a_42 = d_42;
            t = not_null(a_42);
            {
              ATerm h_42 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm e_42 = NULL;
                e_42 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_42));
                return(t);
              }
              t = map_1(t, g_1);
              g_42 = t;
              if(y_41 != NULL && y_41 != g_42)
                _fail(g_42);
              else
                y_41 = g_42;
              t = not_null(v_41);
              {
                ATerm k_42 = NULL;
                t = map_1(t, new_0);
                h_42 = t;
                if(b_42 != NULL && b_42 != h_42)
                  _fail(h_42);
                else
                  b_42 = h_42;
                t = not_null(b_42);
                {
                  ATerm l_42 = NULL,b_43 = NULL;
                  ATerm h_1 (ATerm t)
                  {
                    ATerm i_42 = NULL;
                    i_42 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_42));
                    return(t);
                  }
                  t = map_1(t, h_1);
                  k_42 = t;
                  if(z_41 != NULL && z_41 != k_42)
                    _fail(k_42);
                  else
                    z_41 = k_42;
                  {
                    ATerm m_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    m_42 = t;
                    if(l_42 != NULL && l_42 != m_42)
                      _fail(m_42);
                    else
                      l_42 = m_42;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_1 (ATerm t)
                      {
                        ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
                        n_42 = t;
                        k_41 :
                        if(match_cons(n_42, sym_TCons_2))
                          {
                            o_42 = ATgetArgument(n_42, 0);
                            t_42 = ATgetArgument(n_42, 1);
                            l_41 :
                            if(match_cons(o_42, sym_TCons_2))
                              {
                                p_42 = ATgetArgument(o_42, 0);
                                q_42 = ATgetArgument(o_42, 1);
                                m_41 :
                                if(match_cons(q_42, sym_TCons_2))
                                  {
                                    r_42 = ATgetArgument(q_42, 0);
                                    s_42 = ATgetArgument(q_42, 1);
                                    n_41 :
                                    if(match_cons(s_42, sym_TNil_0))
                                      {
                                        o_41 :
                                        if(match_cons(t_42, sym_TCons_2))
                                          {
                                            u_42 = ATgetArgument(t_42, 0);
                                            v_42 = ATgetArgument(t_42, 1);
                                            p_41 :
                                            if(match_cons(v_42, sym_TNil_0))
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_42)))));
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
                      t = zip_1(t, i_1);
                      b_43 = t;
                      if(c_42 != NULL && c_42 != b_43)
                        _fail(b_43);
                      else
                        c_42 = b_43;
                    }
                  }
                }
              }
            }
          }
        }
        t = h_12;
        {
          ATerm d_43 = NULL;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          d_43 = t;
          if(c_43 != NULL && c_43 != d_43)
            _fail(d_43);
          else
            c_43 = d_43;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_41), not_null(y_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_42)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_41), not_null(z_41))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym_Cong_2))
    {
      f_44 = ATgetArgument(e_44, 0);
      g_44 = ATgetArgument(e_44, 1);
      {
        ATerm j_44 = NULL;
        ATerm o_44 = NULL;
        t = not_null(g_44);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_44 = NULL,l_44 = NULL;
            l_44 = t;
            b_44 :
            if(match_cons(l_44, sym_Match_1))
              {
                k_44 = ATgetArgument(l_44, 0);
                t = not_null(k_44);
              }
            else
              {
                if(match_cons(l_44, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_1);
          o_44 = t;
          if(j_44 != NULL && j_44 != o_44)
            _fail(o_44);
          else
            j_44 = o_44;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_44), not_null(j_44)));
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
  u_44 :
  if(match_cons(w_44, sym_Scope_2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      v_44 :
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
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  u_45 :
  if(match_cons(n_46, sym_Where_1))
    {
      o_46 = ATgetArgument(n_46, 0);
      a_46 :
      if(match_cons(o_46, sym_Seq_2))
        {
          m_46 = ATgetArgument(o_46, 0);
          h_46 = ATgetArgument(o_46, 1);
          b_46 :
          if(match_cons(m_46, sym_Where_1))
            {
              g_46 = ATgetArgument(m_46, 0);
              c_46 :
              if(match_cons(h_46, sym_Seq_2))
                {
                  i_46 = ATgetArgument(h_46, 0);
                  k_46 = ATgetArgument(h_46, 1);
                  d_46 :
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
        {
          if(match_cons(o_46, sym_Where_1))
            {
              m_46 = ATgetArgument(o_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_46));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(n_46, sym_Test_1))
        {
          o_46 = ATgetArgument(n_46, 0);
          e_46 :
          if(match_cons(o_46, sym_Test_1))
            {
              m_46 = ATgetArgument(o_46, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_46));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(n_46, sym_Not_1))
            {
              o_46 = ATgetArgument(n_46, 0);
              f_46 :
              if(match_cons(o_46, sym_Not_1))
                {
                  m_46 = ATgetArgument(o_46, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_46));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(n_46, sym_LChoice_2))
                {
                  o_46 = ATgetArgument(n_46, 0);
                  p_46 = ATgetArgument(n_46, 1);
                  if(o_46 != NULL && o_46 != p_46)
                    _fail(p_46);
                  else
                    o_46 = p_46;
                  t = not_null(o_46);
                }
              else
                {
                  if(match_cons(n_46, sym_Choice_2))
                    {
                      o_46 = ATgetArgument(n_46, 0);
                      p_46 = ATgetArgument(n_46, 1);
                      if(o_46 != NULL && o_46 != p_46)
                        _fail(p_46);
                      else
                        o_46 = p_46;
                      t = not_null(o_46);
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
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  f_48 = t;
  b_48 :
  if(match_cons(f_48, sym_LChoice_2))
    {
      g_48 = ATgetArgument(f_48, 0);
      j_48 = ATgetArgument(f_48, 1);
      c_48 :
      if(match_cons(g_48, sym_LChoice_2))
        {
          h_48 = ATgetArgument(g_48, 0);
          i_48 = ATgetArgument(g_48, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_48), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_48), not_null(j_48)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(f_48, sym_Seq_2))
        {
          g_48 = ATgetArgument(f_48, 0);
          j_48 = ATgetArgument(f_48, 1);
          d_48 :
          if(match_cons(g_48, sym_Seq_2))
            {
              h_48 = ATgetArgument(g_48, 0);
              i_48 = ATgetArgument(g_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_48), not_null(j_48)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_48, sym_Choice_2))
            {
              g_48 = ATgetArgument(f_48, 0);
              j_48 = ATgetArgument(f_48, 1);
              e_48 :
              if(match_cons(g_48, sym_Choice_2))
                {
                  h_48 = ATgetArgument(g_48, 0);
                  i_48 = ATgetArgument(g_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_48), not_null(j_48)));
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
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  q_49 = t;
  i_49 :
  if(match_cons(q_49, sym_InfixApp_3))
    {
      r_49 = ATgetArgument(q_49, 0);
      n_49 = ATgetArgument(q_49, 1);
      m_49 = ATgetArgument(q_49, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_49), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(q_49, sym_BAM_3))
        {
          r_49 = ATgetArgument(q_49, 0);
          n_49 = ATgetArgument(q_49, 1);
          m_49 = ATgetArgument(q_49, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_49)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_49)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(q_49, sym_AM_2))
            {
              r_49 = ATgetArgument(q_49, 0);
              n_49 = ATgetArgument(q_49, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_49)));
            }
          else
            {
              if(match_cons(q_49, sym_MA_2))
                {
                  r_49 = ATgetArgument(q_49, 0);
                  n_49 = ATgetArgument(q_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_49)), not_null(n_49));
                }
              else
                {
                  if(match_cons(q_49, sym_BA_2))
                    {
                      r_49 = ATgetArgument(q_49, 0);
                      n_49 = ATgetArgument(q_49, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_49)), not_null(r_49));
                    }
                  else
                    {
                      if(match_cons(q_49, sym_Lets_2))
                        {
                          r_49 = ATgetArgument(q_49, 0);
                          n_49 = ATgetArgument(q_49, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_49), not_null(n_49));
                        }
                      else
                        {
                          if(match_cons(q_49, sym_LChoices_1))
                            {
                              r_49 = ATgetArgument(q_49, 0);
                              j_49 :
                              if(match_cons(r_49, sym_Cons_2))
                                {
                                  o_49 = ATgetArgument(r_49, 0);
                                  p_49 = ATgetArgument(r_49, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_49), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_49)));
                                }
                              else
                                {
                                  if(match_cons(r_49, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_49, sym_Choices_1))
                                {
                                  r_49 = ATgetArgument(q_49, 0);
                                  k_49 :
                                  if(match_cons(r_49, sym_Cons_2))
                                    {
                                      o_49 = ATgetArgument(r_49, 0);
                                      p_49 = ATgetArgument(r_49, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_49), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_49)));
                                    }
                                  else
                                    {
                                      if(match_cons(r_49, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_49, sym_Seqs_1))
                                    {
                                      r_49 = ATgetArgument(q_49, 0);
                                      l_49 :
                                      if(match_cons(r_49, sym_Cons_2))
                                        {
                                          o_49 = ATgetArgument(r_49, 0);
                                          p_49 = ATgetArgument(r_49, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_49), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_49)));
                                        }
                                      else
                                        {
                                          if(match_cons(r_49, sym_Nil_0))
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
  ATerm b_51 = NULL,c_51 = NULL;
  b_51 = t;
  z_50 :
  if(match_cons(b_51, sym_Where_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      a_51 :
      if(match_cons(c_51, sym_Fail_0))
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
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  f_51 :
  if(match_cons(h_51, sym_LChoice_2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      g_51 :
      if(match_cons(j_51, sym_Fail_0))
        t = not_null(i_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  n_51 :
  if(match_cons(p_51, sym_LChoice_2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      o_51 :
      if(match_cons(q_51, sym_Fail_0))
        t = not_null(r_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  v_51 :
  if(match_cons(x_51, sym_Choice_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      w_51 :
      if(match_cons(z_51, sym_Fail_0))
        t = not_null(y_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  d_52 :
  if(match_cons(f_52, sym_Choice_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      e_52 :
      if(match_cons(g_52, sym_Fail_0))
        t = not_null(h_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_Cong_2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      t = not_null(p_52);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm s_52 = NULL;
          s_52 = t;
          l_52 :
          if(!(match_cons(s_52, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, k_1);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  v_52 :
  if(match_cons(x_52, sym_Path_2))
    {
      y_52 = ATgetArgument(x_52, 0);
      z_52 = ATgetArgument(x_52, 1);
      w_52 :
      if(match_cons(z_52, sym_Fail_0))
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
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  d_53 :
  if(match_cons(f_53, sym_One_1))
    {
      g_53 = ATgetArgument(f_53, 0);
      e_53 :
      if(match_cons(g_53, sym_Fail_0))
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
  ATerm n_53 = NULL,o_53 = NULL;
  n_53 = t;
  j_53 :
  if(match_cons(n_53, sym_Some_1))
    {
      o_53 = ATgetArgument(n_53, 0);
      k_53 :
      if(match_cons(o_53, sym_Fail_0))
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
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  r_53 :
  if(match_cons(t_53, sym_Rec_2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      s_53 :
      if(match_cons(v_53, sym_Fail_0))
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
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  z_53 :
  if(match_cons(b_54, sym_Scope_2))
    {
      c_54 = ATgetArgument(b_54, 0);
      d_54 = ATgetArgument(b_54, 1);
      a_54 :
      if(match_cons(d_54, sym_Fail_0))
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
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  j_54 = t;
  h_54 :
  if(match_cons(j_54, sym_Seq_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      l_54 = ATgetArgument(j_54, 1);
      i_54 :
      if(match_cons(k_54, sym_Fail_0))
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
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  p_54 :
  if(match_cons(r_54, sym_Not_1))
    {
      s_54 = ATgetArgument(r_54, 0);
      q_54 :
      if(match_cons(s_54, sym_Fail_0))
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
  ATerm x_54 = NULL,y_54 = NULL;
  x_54 = t;
  v_54 :
  if(match_cons(x_54, sym_Test_1))
    {
      y_54 = ATgetArgument(x_54, 0);
      w_54 :
      if(match_cons(y_54, sym_Fail_0))
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
  ATerm i_12 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = i_12;
      {
        ATerm m_12 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = m_12;
            {
              ATerm p_12 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_12;
                  {
                    ATerm q_12 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = q_12;
                        {
                          ATerm r_12 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = r_12;
                              {
                                ATerm s_12 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm t_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm u_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_12;
                                                {
                                                  ATerm v_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_12;
                                                      {
                                                        ATerm w_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = w_12;
                                                            {
                                                              ATerm x_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = x_12;
                                                                  {
                                                                    ATerm y_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_12;
                                                                        {
                                                                          ATerm z_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_12;
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
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  b_55 :
  if(match_cons(d_55, sym_Match_1))
    {
      e_55 = ATgetArgument(d_55, 0);
      c_55 :
      if(match_cons(e_55, sym_Wld_0))
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
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  h_55 :
  if(match_cons(j_55, sym_Where_1))
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
ATerm I10_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  p_55 = t;
  n_55 :
  if(match_cons(p_55, sym_All_1))
    {
      q_55 = ATgetArgument(p_55, 0);
      o_55 :
      if(match_cons(q_55, sym_Id_0))
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
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  t_55 :
  if(match_cons(v_55, sym_Rec_2))
    {
      w_55 = ATgetArgument(v_55, 0);
      x_55 = ATgetArgument(v_55, 1);
      u_55 :
      if(match_cons(x_55, sym_Id_0))
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
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  b_56 :
  if(match_cons(d_56, sym_Scope_2))
    {
      e_56 = ATgetArgument(d_56, 0);
      f_56 = ATgetArgument(d_56, 1);
      c_56 :
      if(match_cons(f_56, sym_Id_0))
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
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  j_56 :
  if(match_cons(l_56, sym_LChoice_2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      k_56 :
      if(match_cons(m_56, sym_Id_0))
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  r_56 :
  if(match_cons(t_56, sym_Seq_2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      s_56 :
      if(match_cons(v_56, sym_Id_0))
        t = not_null(u_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  b_57 = t;
  z_56 :
  if(match_cons(b_57, sym_Seq_2))
    {
      c_57 = ATgetArgument(b_57, 0);
      d_57 = ATgetArgument(b_57, 1);
      a_57 :
      if(match_cons(c_57, sym_Id_0))
        t = not_null(d_57);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  j_57 = t;
  h_57 :
  if(match_cons(j_57, sym_Not_1))
    {
      k_57 = ATgetArgument(j_57, 0);
      i_57 :
      if(match_cons(k_57, sym_Id_0))
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
  ATerm p_57 = NULL,q_57 = NULL;
  p_57 = t;
  n_57 :
  if(match_cons(p_57, sym_Test_1))
    {
      q_57 = ATgetArgument(p_57, 0);
      o_57 :
      if(match_cons(q_57, sym_Id_0))
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
  ATerm a_13 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = a_13;
      {
        ATerm b_13 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = b_13;
            {
              ATerm c_13 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_13;
                  {
                    ATerm d_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = d_13;
                        {
                          ATerm e_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_13;
                              {
                                ATerm f_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_13;
                                    {
                                      ATerm g_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_13;
                                          {
                                            ATerm h_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_13;
                                                {
                                                  ATerm i_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = i_13;
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
  ATerm j_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = j_13;
      {
        ATerm k_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = k_13;
            {
              ATerm l_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = l_13;
                  {
                    ATerm m_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_13;
                        {
                          ATerm n_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = n_13;
                              {
                                ATerm o_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_13;
                                    {
                                      ATerm p_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = p_13;
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
  ATerm q_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = q_13;
      {
        ATerm r_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = r_13;
            {
              ATerm s_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = s_13;
                  {
                    ATerm t_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm u_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = u_13;
                              {
                                ATerm v_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_13;
                                    {
                                      ATerm w_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_13;
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
  ATerm s_57 (ATerm t)
  {
    t = i_82(t);
    t = _all(t, s_57);
    t = i_82(t);
    return(t);
  }
  t = s_57(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      ATerm x_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = x_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, q_1);
    return(t);
  }
  t = downup_1(t, p_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
  y_57 = t;
  x_57 :
  if(match_cons(y_57, sym_SDef_3))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      b_58 = ATgetArgument(y_57, 2);
      {
        ATerm f_58 = NULL;
        t = not_null(z_57);
        {
          ATerm h_58 = NULL;
          t = i_62(t);
          f_58 = t;
          t = not_null(a_58);
          {
            ATerm j_58 = NULL;
            t = j_62(t);
            h_58 = t;
            t = not_null(b_58);
            t = k_62(t);
            j_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_58), not_null(h_58), not_null(j_58));
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
  ATerm s_58 = NULL,t_58 = NULL;
  s_58 = t;
  r_58 :
  if(match_cons(s_58, sym_Strategies_1))
    {
      t_58 = ATgetArgument(s_58, 0);
      {
        ATerm v_58 = NULL;
        t = not_null(t_58);
        t = d_61(t);
        v_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm c_59 = NULL,d_59 = NULL;
  c_59 = t;
  b_59 :
  if(match_cons(c_59, sym_Specification_1))
    {
      d_59 = ATgetArgument(c_59, 0);
      {
        ATerm f_59 = NULL;
        t = not_null(d_59);
        t = f_61(t);
        f_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(f_59));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm d_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, c_87);
            return(t);
          }
          t = map_1(t, d_2);
          return(t);
        }
        t = Strategies_1(t, c_2);
        return(t);
      }
      t = Cons_2(t, b_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, s_1);
    return(t);
  }
  t = Specification_1(t, r_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm k_59 = NULL;
  k_59 = t;
  j_59 :
  if(!(match_cons(k_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  o_59 :
  if(match_cons(p_59, sym_TCons_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      {
        ATerm u_59 = NULL;
        t = not_null(q_59);
        {
          ATerm w_59 = NULL;
          t = n_63(t);
          u_59 = t;
          t = not_null(r_59);
          t = o_63(t);
          w_59 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_59), not_null(w_59));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_60 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm e_60 = NULL,f_60 = NULL;
      e_60 = t;
      c_60 :
      if(match_cons(e_60, sym_Program_1))
        {
          f_60 = ATgetArgument(e_60, 0);
          if(d_60 != NULL && d_60 != f_60)
            _fail(f_60);
          else
            d_60 = f_60;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, f_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = y_13;
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
  ATerm m_60 = NULL,n_60 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      ATerm z_13 = t;
      if(PushChoice()==0)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_60 = NULL;
            o_60 = t;
            h_60 :
            if(!(match_cons(o_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_2);
          PopChoice();
          _fail(t);
        }
      else
        t = z_13;
      return(t);
    }
    ATerm m_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, k_2, m_2);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm q_2 (ATerm t)
        {
          ATerm p_60 = NULL,q_60 = NULL;
          p_60 = t;
          j_60 :
          if(match_cons(p_60, sym_Runtime_1))
            {
              q_60 = ATgetArgument(p_60, 0);
              if(n_60 != NULL && n_60 != q_60)
                _fail(q_60);
              else
                n_60 = q_60;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_2);
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm r_60 = NULL,s_60 = NULL;
            r_60 = t;
            l_60 :
            if(match_cons(r_60, sym_Program_1))
              {
                s_60 = ATgetArgument(r_60, 0);
                if(m_60 != NULL && m_60 != s_60)
                  _fail(s_60);
                else
                  m_60 = s_60;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_2);
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, r_2, w_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, g_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,e_61 = NULL,g_61 = NULL;
  a_61 = t;
  x_60 :
  if(match_cons(a_61, sym_TCons_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      c_61 = ATgetArgument(a_61, 1);
      y_60 :
      if(match_cons(c_61, sym_TCons_2))
        {
          e_61 = ATgetArgument(c_61, 0);
          g_61 = ATgetArgument(c_61, 1);
          z_60 :
          if(match_cons(g_61, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(b_61), not_null(e_61));
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
  ATerm o_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  o_61 = t;
  l_61 :
  if(match_cons(o_61, sym_TCons_2))
    {
      q_61 = ATgetArgument(o_61, 0);
      r_61 = ATgetArgument(o_61, 1);
      m_61 :
      if(match_cons(r_61, sym_TCons_2))
        {
          s_61 = ATgetArgument(r_61, 0);
          t_61 = ATgetArgument(r_61, 1);
          n_61 :
          if(match_cons(t_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(q_61), not_null(s_61));
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
  ATerm b_62 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm b_14 = t;
      if(PushChoice()==0)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm c_62 = NULL,d_62 = NULL;
            c_62 = t;
            y_61 :
            if(match_cons(c_62, sym_Output_1))
              {
                d_62 = ATgetArgument(c_62, 0);
                if(b_62 != NULL && b_62 != d_62)
                  _fail(d_62);
                else
                  b_62 = d_62;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_3);
          PopChoice();
        }
      else
        {
          t = b_14;
          {
            ATerm e_62 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            e_62 = t;
            if(b_62 != NULL && b_62 != e_62)
              _fail(e_62);
            else
              b_62 = e_62;
          }
        }
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_2, b_3);
  }
  t = a_14;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(b_62);
          return(t);
        }
        t = split_2(t, f_3, _id);
        return(t);
      }
      t = TCons_2(t, e_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, d_3);
    {
      ATerm c_14 = t;
      if(PushChoice()==0)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_3 (ATerm t)
            {
              ATerm f_62 = NULL;
              f_62 = t;
              a_62 :
              if(!(match_cons(f_62, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, l_3);
            return(t);
          }
          ATerm k_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, j_3, k_3);
          PopChoice();
        }
      else
        {
          t = c_14;
          {
            ATerm m_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, m_3);
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
  ATerm q_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
  ATerm d_14;
  d_14 = t;
  t = dtime_0(t);
  t = d_14;
  t = a_67(t);
  {
    ATerm e_14;
    e_14 = t;
    {
      ATerm r_62 = NULL;
      t = dtime_0(t);
      r_62 = t;
      if(q_62 != NULL && q_62 != r_62)
        _fail(r_62);
      else
        q_62 = r_62;
    }
    t = e_14;
    s_62 = t;
    n_62 :
    if(match_cons(s_62, sym_TCons_2))
      {
        t_62 = ATgetArgument(s_62, 0);
        u_62 = ATgetArgument(s_62, 1);
        o_62 :
        if(match_cons(u_62, sym_TCons_2))
          {
            v_62 = ATgetArgument(u_62, 0);
            w_62 = ATgetArgument(u_62, 1);
            p_62 :
            if(match_cons(w_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(q_62)), not_null(t_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_63 = NULL;
  c_63 = t;
  t = SSL_ReadFromFile(not_null(c_63));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm k_63 = NULL;
  ATerm m_63 = NULL,q_63 = NULL;
  k_63 = t;
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm p_63 = NULL;
      t = not_null(k_63);
      t = x_80(t);
      p_63 = t;
      if(m_63 != NULL && m_63 != p_63)
        _fail(p_63);
      else
        m_63 = p_63;
    }
    t = f_14;
    {
      ATerm t_63 = NULL;
      t = not_null(k_63);
      t = y_80(t);
      t_63 = t;
      if(q_63 != NULL && q_63 != t_63)
        _fail(t_63);
      else
        q_63 = t_63;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_63), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_64 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm h_14 = t;
    if(PushChoice()==0)
      {
        ATerm v_3 (ATerm t)
        {
          ATerm b_64 = NULL,c_64 = NULL;
          b_64 = t;
          y_63 :
          if(match_cons(b_64, sym_Input_1))
            {
              c_64 = ATgetArgument(b_64, 0);
              if(a_64 != NULL && a_64 != c_64)
                _fail(c_64);
              else
                a_64 = c_64;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, v_3);
        PopChoice();
      }
    else
      {
        t = h_14;
        {
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          d_64 = t;
          if(a_64 != NULL && a_64 != d_64)
            _fail(d_64);
          else
            a_64 = d_64;
        }
      }
  }
  t = g_14;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(a_64);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_64 = NULL;
  h_64 = t;
  g_64 :
  if(!(match_cons(h_64, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm i_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = i_14;
        {
          ATerm j_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = j_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_3);
  t = z_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_64 = NULL;
  j_64 = t;
  t = SSL_table_create(not_null(j_64));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_64 = NULL;
  n_64 = t;
  {
    ATerm m_14;
    m_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_64), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = m_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  v_64 = t;
  t_64 :
  if(match_string(v_64, "register-usage-info"))
    t = register_usage_1(t, i_0);
  else
    {
      if(match_cons(v_64, sym_Cons_2))
        {
          w_64 = ATgetArgument(v_64, 0);
          x_64 = ATgetArgument(v_64, 1);
          u_64 :
          if(match_cons(x_64, sym_Cons_2))
            {
              y_64 = ATgetArgument(x_64, 0);
              z_64 = ATgetArgument(x_64, 1);
              {
                ATerm d_65 = NULL;
                ATerm n_14;
                n_14 = t;
                t = not_null(w_64);
                t = g_0(t);
                t = n_14;
                {
                  ATerm e_65 = NULL;
                  t = not_null(y_64);
                  t = h_0(t);
                  e_65 = t;
                  if(d_65 != NULL && d_65 != e_65)
                    _fail(e_65);
                  else
                    d_65 = e_65;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_65), not_null(z_64));
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
  ATerm o_14 = t;
  if(PushChoice()==0)
    {
      ATerm y_3 (ATerm t)
      {
        ATerm z_65 = NULL;
        z_65 = t;
        o_65 :
        if(!(match_string(z_65, "-S")))
          {
            if(!(match_string(z_65, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, y_3, z_3, a_4);
      PopChoice();
    }
  else
    {
      t = o_14;
      {
        ATerm p_14 = t;
        if(PushChoice()==0)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm a_66 = NULL;
              a_66 = t;
              p_65 :
              if(!(match_string(a_66, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, b_4, c_4, g_4);
            PopChoice();
          }
        else
          {
            t = p_14;
            {
              ATerm r_14 = t;
              if(PushChoice()==0)
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm b_66 = NULL;
                    b_66 = t;
                    q_65 :
                    if(!(match_string(b_66, "-v")))
                      {
                        if(!(match_string(b_66, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm r_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, h_4, i_4, r_4);
                  PopChoice();
                }
              else
                {
                  t = r_14;
                  {
                    ATerm s_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm s_4 (ATerm t)
                        {
                          ATerm c_66 = NULL;
                          c_66 = t;
                          r_65 :
                          if(!(match_string(c_66, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_4 (ATerm t)
                        {
                          ATerm d_66 = NULL;
                          ATerm f_66 = NULL;
                          f_66 = t;
                          if(d_66 != NULL && d_66 != f_66)
                            _fail(f_66);
                          else
                            d_66 = f_66;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(d_66));
                          return(t);
                        }
                        ATerm v_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, s_4, t_4, v_4);
                        PopChoice();
                      }
                    else
                      {
                        t = s_14;
                        {
                          ATerm t_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm w_4 (ATerm t)
                              {
                                ATerm h_66 = NULL;
                                h_66 = t;
                                t_65 :
                                if(!(match_string(h_66, "-i")))
                                  {
                                    if(!(match_string(h_66, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm x_4 (ATerm t)
                              {
                                ATerm i_66 = NULL;
                                ATerm l_66 = NULL;
                                l_66 = t;
                                if(i_66 != NULL && i_66 != l_66)
                                  _fail(l_66);
                                else
                                  i_66 = l_66;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_66));
                                return(t);
                              }
                              ATerm c_5 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, w_4, x_4, c_5);
                              PopChoice();
                            }
                          else
                            {
                              t = t_14;
                              {
                                ATerm u_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm d_5 (ATerm t)
                                    {
                                      ATerm m_66 = NULL;
                                      m_66 = t;
                                      v_65 :
                                      if(!(match_string(m_66, "-o")))
                                        {
                                          if(!(match_string(m_66, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      ATerm n_66 = NULL;
                                      ATerm r_66 = NULL;
                                      r_66 = t;
                                      if(n_66 != NULL && n_66 != r_66)
                                        _fail(r_66);
                                      else
                                        n_66 = r_66;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_66));
                                      return(t);
                                    }
                                    ATerm j_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_5, i_5, j_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_14;
                                    {
                                      ATerm v_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm k_5 (ATerm t)
                                          {
                                            ATerm s_66 = NULL;
                                            s_66 = t;
                                            x_65 :
                                            if(!(match_string(s_66, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm l_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm m_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, k_5, l_5, m_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_14;
                                          {
                                            ATerm n_5 (ATerm t)
                                            {
                                              ATerm t_66 = NULL;
                                              t_66 = t;
                                              y_65 :
                                              if(!(match_string(t_66, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm s_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm v_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, n_5, s_5, v_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm y_66 = NULL;
  y_66 = t;
  t = SSL_table_destroy(not_null(y_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_67 = NULL;
  e_67 = t;
  t = SSL_exit(not_null(e_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  t = SSL_implode_string(not_null(i_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm l_67 (ATerm t)
  {
    ATerm w_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, l_67);
        PopChoice();
      }
    else
      {
        t = w_14;
        t = Nil_0(t);
        t = x_79(t);
      }
    return(t);
  }
  t = l_67(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_14;
      {
        ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
        o_67 = t;
        n_67 :
        if(match_cons(o_67, sym_Cons_2))
          {
            p_67 = ATgetArgument(o_67, 0);
            q_67 = ATgetArgument(o_67, 1);
            t = not_null(p_67);
            {
              ATerm b_6 (ATerm t)
              {
                t = not_null(q_67);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_6);
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
  ATerm w_67 = NULL;
  w_67 = t;
  t = SSL_explode_string(not_null(w_67));
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
  ATerm z_67 (ATerm t)
  {
    ATerm y_14 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = y_14;
        t = Cons_2(t, j_79, z_67);
      }
    return(t);
  }
  t = z_67(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  f_68 = t;
  b_68 :
  if(match_cons(f_68, sym_TCons_2))
    {
      g_68 = ATgetArgument(f_68, 0);
      h_68 = ATgetArgument(f_68, 1);
      c_68 :
      if(match_cons(g_68, sym_Nil_0))
        {
          d_68 :
          if(match_cons(h_68, sym_TCons_2))
            {
              i_68 = ATgetArgument(h_68, 0);
              j_68 = ATgetArgument(h_68, 1);
              e_68 :
              if(match_cons(j_68, sym_TNil_0))
                t = not_null(i_68);
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
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  r_68 = t;
  n_68 :
  if(match_cons(r_68, sym_TCons_2))
    {
      s_68 = ATgetArgument(r_68, 0);
      v_68 = ATgetArgument(r_68, 1);
      o_68 :
      if(match_cons(s_68, sym_Cons_2))
        {
          t_68 = ATgetArgument(s_68, 0);
          u_68 = ATgetArgument(s_68, 1);
          p_68 :
          if(match_cons(v_68, sym_TCons_2))
            {
              w_68 = ATgetArgument(v_68, 0);
              x_68 = ATgetArgument(v_68, 1);
              q_68 :
              if(match_cons(x_68, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_68), not_null(w_68)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_69 (ATerm t)
  {
    ATerm z_14 = t;
    if(PushChoice()==0)
      {
        t = k_69(t);
        t = c_69(t);
        PopChoice();
      }
    else
      {
        t = z_14;
        t = l_69(t);
      }
    return(t);
  }
  t = c_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_69 (ATerm))
{
  t = repeat_2(t, n_69, _id);
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
ATerm short_description_1 (ATerm t, ATerm f_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm o_69 = NULL,p_69 = NULL;
  o_69 = t;
  j_69 :
  if(match_cons(o_69, sym_Program_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      {
        ATerm r_69 = NULL;
        t = not_null(p_69);
        t = l_53(t);
        r_69 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_69 = NULL;
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm a_70 = NULL;
      a_70 = t;
      if(z_69 != NULL && z_69 != a_70)
        _fail(a_70);
      else
        z_69 = a_70;
      return(t);
    }
    t = Program_1(t, d_6);
    return(t);
  }
  t = option_defined_1(t, c_6);
  {
    ATerm e_6 (ATerm t)
    {
      ATerm h_70 = NULL;
      ATerm i_70 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm i_6 (ATerm t)
        {
          t = not_null(z_69);
          return(t);
        }
        t = short_description_1(t, i_6);
        t = concat_strings_0(t);
        i_70 = t;
        if(h_70 != NULL && h_70 != i_70)
          _fail(i_70);
        else
          h_70 = i_70;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_70), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, e_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm j_6 (ATerm t)
      {
        ATerm j_70 = NULL;
        j_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, j_6);
      {
        ATerm k_6 (ATerm t)
        {
          ATerm l_70 = NULL;
          ATerm m_70 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm l_6 (ATerm t)
            {
              t = not_null(z_69);
              return(t);
            }
            t = long_description_1(t, l_6);
            t = concat_strings_0(t);
            m_70 = t;
            if(l_70 != NULL && l_70 != m_70)
              _fail(m_70);
            else
              l_70 = m_70;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, k_6);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  v_70 = t;
  s_70 :
  if(match_cons(v_70, sym_TCons_2))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      t_70 :
      if(match_cons(x_70, sym_TCons_2))
        {
          y_70 = ATgetArgument(x_70, 0);
          z_70 = ATgetArgument(x_70, 1);
          u_70 :
          if(match_cons(z_70, sym_TNil_0))
            {
              ATerm n_15;
              n_15 = t;
              t = SSL_printnl(not_null(w_70), not_null(y_70));
              t = n_15;
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
  ATerm g_71 = NULL,h_71 = NULL;
  g_71 = t;
  f_71 :
  if(match_cons(g_71, sym_Undefined_1))
    {
      h_71 = ATgetArgument(g_71, 0);
      {
        ATerm j_71 = NULL;
        t = not_null(h_71);
        t = m_53(t);
        j_71 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_71));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm r_71 (ATerm t)
  {
    ATerm o_15 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, r_79, _id);
        PopChoice();
      }
    else
      {
        t = o_15;
        t = Cons_2(t, _id, r_71);
      }
    return(t);
  }
  t = r_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_66 (ATerm))
{
  t = fetch_1(t, e_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_71 = NULL;
  t_71 = t;
  s_71 :
  if(!(match_cons(t_71, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm w_15 = t;
  if(PushChoice()==0)
    {
      t = p_81(t);
      PopChoice();
    }
  else
    t = w_15;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  y_71 = t;
  v_71 :
  if(match_cons(y_71, sym_TCons_2))
    {
      z_71 = ATgetArgument(y_71, 0);
      a_72 = ATgetArgument(y_71, 1);
      w_71 :
      if(match_cons(a_72, sym_TCons_2))
        {
          b_72 = ATgetArgument(a_72, 0);
          c_72 = ATgetArgument(a_72, 1);
          x_71 :
          if(match_cons(c_72, sym_TNil_0))
            t = SSL_table_get(not_null(z_71), not_null(b_72));
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
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  m_72 = t;
  i_72 :
  if(match_cons(m_72, sym_TCons_2))
    {
      n_72 = ATgetArgument(m_72, 0);
      o_72 = ATgetArgument(m_72, 1);
      j_72 :
      if(match_cons(o_72, sym_TCons_2))
        {
          p_72 = ATgetArgument(o_72, 0);
          q_72 = ATgetArgument(o_72, 1);
          k_72 :
          if(match_cons(q_72, sym_TCons_2))
            {
              r_72 = ATgetArgument(q_72, 0);
              s_72 = ATgetArgument(q_72, 1);
              l_72 :
              if(match_cons(s_72, sym_TNil_0))
                {
                  ATerm x_15;
                  x_15 = t;
                  {
                    ATerm w_72 = NULL;
                    ATerm x_72 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm y_15 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = y_15;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      x_72 = t;
                      if(w_72 != NULL && w_72 != x_72)
                        _fail(x_72);
                      else
                        w_72 = x_72;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_72), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_72), not_null(w_72)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = x_15;
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
  ATerm b_73 = NULL;
  ATerm c_73 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = k_65(t);
  c_73 = t;
  if(b_73 != NULL && b_73 != c_73)
    _fail(c_73);
  else
    b_73 = c_73;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_73), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  h_73 :
  if(match_string(i_73, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(match_cons(i_73, sym_Cons_2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          {
            ATerm n_73 = NULL;
            ATerm z_15;
            z_15 = t;
            t = not_null(j_73);
            t = d_0(t);
            t = z_15;
            {
              ATerm o_73 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = e_0(t);
              o_73 = t;
              if(n_73 != NULL && n_73 != o_73)
                _fail(o_73);
              else
                n_73 = o_73;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_73), not_null(k_73));
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
  ATerm m_6 (ATerm t)
  {
    ATerm t_73 = NULL;
    t_73 = t;
    s_73 :
    if(!(match_string(t_73, "--help")))
      {
        if(!(match_string(t_73, "-h")))
          {
            if(!(match_string(t_73, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, m_6, u_6, v_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym_Cons_2))
    {
      x_73 = ATgetArgument(w_73, 0);
      y_73 = ATgetArgument(w_73, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_73)), not_null(y_73));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  f_74 :
  if(match_cons(g_74, sym_Cons_2))
    {
      h_74 = ATgetArgument(g_74, 0);
      i_74 = ATgetArgument(g_74, 1);
      {
        ATerm l_74 = NULL;
        t = not_null(h_74);
        {
          ATerm q_74 = NULL;
          t = r_63(t);
          l_74 = t;
          t = not_null(i_74);
          t = s_63(t);
          q_74 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_74), not_null(q_74));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  v_74 :
  if(!(match_cons(w_74, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm a_16;
  a_16 = t;
  {
    ATerm w_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_65(t);
      return(t);
    }
    t = try_1(t, w_6);
  }
  t = a_16;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm y_74 = NULL;
      y_74 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_74));
      return(t);
    }
    ATerm e_7 (ATerm t)
    {
      ATerm b_16 = t;
      if(PushChoice()==0)
        {
          ATerm c_16 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_16;
              t = i_65(t);
              t = Cons_2(t, _id, e_7);
            }
          PopChoice();
        }
      else
        {
          t = b_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_7, e_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    ATerm k_75 = NULL,l_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,s_75 = NULL;
    k_75 = t;
    d_75 :
    if(match_cons(k_75, sym_TCons_2))
      {
        l_75 = ATgetArgument(k_75, 0);
        n_75 = ATgetArgument(k_75, 1);
        e_75 :
        if(match_cons(n_75, sym_TCons_2))
          {
            o_75 = ATgetArgument(n_75, 0);
            p_75 = ATgetArgument(n_75, 1);
            f_75 :
            if(match_cons(p_75, sym_TCons_2))
              {
                q_75 = ATgetArgument(p_75, 0);
                s_75 = ATgetArgument(p_75, 1);
                g_75 :
                if(match_cons(s_75, sym_TNil_0))
                  {
                    if(h_75 != NULL && h_75 != l_75)
                      _fail(l_75);
                    else
                      h_75 = l_75;
                    if(i_75 != NULL && i_75 != o_75)
                      _fail(o_75);
                    else
                      i_75 = o_75;
                    if(j_75 != NULL && j_75 != q_75)
                      _fail(q_75);
                    else
                      j_75 = q_75;
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
  t = d_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm x_75 = NULL;
  ATerm e_16;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = e_16;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm f_16 = t;
      if(PushChoice()==0)
        {
          t = h_65(t);
          PopChoice();
        }
      else
        {
          t = f_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_7);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm g_16 = t;
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
            t = g_16;
            {
              ATerm i_7 (ATerm t)
              {
                ATerm j_7 (ATerm t)
                {
                  ATerm y_75 = NULL;
                  y_75 = t;
                  if(x_75 != NULL && x_75 != y_75)
                    _fail(y_75);
                  else
                    x_75 = y_75;
                  return(t);
                }
                t = Undefined_1(t, j_7);
                return(t);
              }
              t = option_defined_1(t, i_7);
              {
                ATerm h_16;
                h_16 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_75), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = h_16;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_7);
      {
        ATerm j_16;
        j_16 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = j_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm v_7 (ATerm t)
  {
    ATerm k_16 = t;
    if(PushChoice()==0)
      {
        t = p_66(t);
        PopChoice();
      }
    else
      {
        t = k_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_7);
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
  ATerm w_7 (ATerm t)
  {
    ATerm x_7 (ATerm t)
    {
      t = TCons_2(t, g_66, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_7);
    return(t);
  }
  t = iowrap_2(t, w_7, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    ATerm z_7 (ATerm t)
    {
      t = simplify_0(t);
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_narrow_0(t);
      t = simplify_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, z_7);
    return(t);
  }
  t = iowrap_1(t, y_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
