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
ATerm DynamicRules_1 (ATerm, ATerm a_60 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm crush_3 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm free_vars_3 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_80 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm z_78 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_83 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_84 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_74 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm for_3 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_82 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm w_60 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm zip_1 (ATerm, ATerm w_76 (ATerm));
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
ATerm downup_1 (ATerm, ATerm c_81 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm Strategies_1 (ATerm, ATerm k_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm w_85 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_66 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_64 (ATerm));
ATerm map_1 (ATerm, ATerm h_78 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_68 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_64 (ATerm));
ATerm Program_1 (ATerm, ATerm z_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_65 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_80 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_65 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_65 (ATerm));
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
                  ATerm v_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = v_7;
                      {
                        ATerm w_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm x_7;
                            x_7 = t;
                            {
                              ATerm h_0 (ATerm t)
                              {
                                t = not_null(z_1);
                                return(t);
                              }
                              t = HdMember_1(t, h_0);
                            }
                            t = x_7;
                            t = Cons_2(t, _id, e_2);
                            PopChoice();
                          }
                        else
                          {
                            t = w_7;
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
ATerm DynamicRules_1 (ATerm t, ATerm a_60 (ATerm))
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
        t = a_60(t);
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(l_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
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
          t = p_62(t);
          y_2 = t;
          t = not_null(v_2);
          t = q_62(t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_2), not_null(a_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm))
{
  ATerm y_7 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, x_84, v_84);
      PopChoice();
    }
  else
    {
      t = y_7;
      t = DynamicRules_1(t, v_84);
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
                  ATerm z_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(p_4);
                      PopChoice();
                    }
                  else
                    {
                      t = z_7;
                      {
                        ATerm a_8 = t;
                        if(PushChoice()==0)
                          {
                            ATerm i_0 (ATerm t)
                            {
                              t = not_null(p_4);
                              return(t);
                            }
                            t = HdMember_1(t, i_0);
                            t = u_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = a_8;
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
ATerm foldr_3 (ATerm t, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm d_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = p_73(t);
      PopChoice();
    }
  else
    {
      t = d_8;
      {
        ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
        z_4 = t;
        y_4 :
        if(match_cons(z_4, sym_Cons_2))
          {
            a_5 = ATgetArgument(z_4, 0);
            b_5 = ATgetArgument(z_4, 1);
            {
              ATerm e_5 = NULL;
              t = not_null(a_5);
              {
                ATerm g_5 = NULL;
                t = r_73(t);
                e_5 = t;
                t = not_null(b_5);
                t = foldr_3(t, p_73, q_73, r_73);
                g_5 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_5), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = q_73(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm))
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
    t = foldr_3(t, f_75, g_75, h_75);
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm r_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_6 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = p_70(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        {
          ATerm s_8 = t;
          if(PushChoice()==0)
            {
              ATerm f_6 = NULL;
              ATerm t_8;
              t_8 = t;
              {
                ATerm g_6 = NULL;
                t = q_70(t);
                g_6 = t;
                if(f_6 != NULL && f_6 != g_6)
                  _fail(g_6);
                else
                  f_6 = g_6;
              }
              t = t_8;
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
                t = r_70(t, j_0, h_6, k_0);
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
              t = s_8;
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
    ATerm u_8 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = u_8;
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
            ATerm x_6 = NULL;
            t = not_null(s_6);
            {
              ATerm z_6 = NULL;
              t = tvars_0(t);
              x_6 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm b_7 = NULL;
                t = isect_0(t);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_6), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = diff_0(t);
                b_7 = t;
                {
                  ATerm w_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = w_8;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_7), not_null(t_6))));
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
ATerm topdown_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    t = y_80(t);
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
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_7), not_null(s_7)));
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_7), not_null(u_7)));
    return(t);
  }
  q_7 = t;
  k_7 :
  if(match_cons(q_7, sym_Seq_2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      l_7 :
      if(match_cons(s_7, sym_Scope_2))
        {
          t_7 = ATgetArgument(s_7, 0);
          u_7 = ATgetArgument(s_7, 1);
          m_7 :
          if(match_cons(r_7, sym_Scope_2))
            {
              o_7 = ATgetArgument(r_7, 0);
              p_7 = ATgetArgument(r_7, 1);
              {
                ATerm x_8 = t;
                if(PushChoice()==0)
                  {
                    t = b_8(t);
                    PopChoice();
                  }
                else
                  {
                    t = x_8;
                    t = c_8(t);
                  }
              }
            }
          else
            t = c_8(t);
        }
      else
        {
          n_7 :
          if(match_cons(r_7, sym_Scope_2))
            {
              o_7 = ATgetArgument(r_7, 0);
              p_7 = ATgetArgument(r_7, 1);
              t = b_8(t);
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
ATerm at_suffix_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = z_78(t);
        PopChoice();
      }
    else
      {
        t = y_8;
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
        ATerm n_9 = NULL,c_10 = NULL;
        t = not_null(j_9);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
            o_9 = t;
            d_9 :
            if(match_cons(o_9, sym_Cons_2))
              {
                p_9 = ATgetArgument(o_9, 0);
                t_9 = ATgetArgument(o_9, 1);
                e_9 :
                if(match_cons(p_9, sym_SDef_3))
                  {
                    q_9 = ATgetArgument(p_9, 0);
                    r_9 = ATgetArgument(p_9, 1);
                    s_9 = ATgetArgument(p_9, 2);
                    f_9 :
                    if(match_cons(r_9, sym_Nil_0))
                      {
                        ATerm b_10 = NULL;
                        t = not_null(k_9);
                        {
                          ATerm r_0 (ATerm t)
                          {
                            ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
                            x_9 = t;
                            z_8 :
                            if(match_cons(x_9, sym_Call_2))
                              {
                                y_9 = ATgetArgument(x_9, 0);
                                a_10 = ATgetArgument(x_9, 1);
                                a_9 :
                                if(match_cons(y_9, sym_SVar_1))
                                  {
                                    z_9 = ATgetArgument(y_9, 0);
                                    b_9 :
                                    if(match_cons(a_10, sym_Nil_0))
                                      {
                                        if(q_9 != NULL && q_9 != z_9)
                                          _fail(z_9);
                                        else
                                          q_9 = z_9;
                                        t = not_null(s_9);
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
                          b_10 = t;
                          if(n_9 != NULL && n_9 != b_10)
                            _fail(b_10);
                          else
                            n_9 = b_10;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm c_9 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = c_9;
                            t = not_null(t_9);
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
          t = at_suffix_1(t, q_0);
          c_10 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_10), not_null(n_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  t_10 = t;
  l_10 :
  if(match_cons(t_10, sym_TCons_2))
    {
      u_10 = ATgetArgument(t_10, 0);
      w_10 = ATgetArgument(t_10, 1);
      m_10 :
      if(match_cons(u_10, sym_Build_1))
        {
          v_10 = ATgetArgument(u_10, 0);
          n_10 :
          if(match_cons(w_10, sym_TCons_2))
            {
              x_10 = ATgetArgument(w_10, 0);
              b_11 = ATgetArgument(w_10, 1);
              o_10 :
              if(match_cons(x_10, sym_Prim_2))
                {
                  y_10 = ATgetArgument(x_10, 0);
                  s_10 = ATgetArgument(x_10, 1);
                  p_10 :
                  if(match_cons(b_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_10), not_null(s_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_10, sym_Where_1))
                    {
                      y_10 = ATgetArgument(x_10, 0);
                      q_10 :
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
  t_11 = t;
  m_11 :
  if(match_cons(t_11, sym_TCons_2))
    {
      u_11 = ATgetArgument(t_11, 0);
      w_11 = ATgetArgument(t_11, 1);
      n_11 :
      if(match_cons(u_11, sym_Build_1))
        {
          v_11 = ATgetArgument(u_11, 0);
          o_11 :
          if(match_cons(w_11, sym_TCons_2))
            {
              x_11 = ATgetArgument(w_11, 0);
              a_12 = ATgetArgument(w_11, 1);
              p_11 :
              if(match_cons(x_11, sym_Build_1))
                {
                  y_11 = ATgetArgument(x_11, 0);
                  q_11 :
                  if(match_cons(a_12, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_11, sym_Where_1))
                    {
                      y_11 = ATgetArgument(x_11, 0);
                      r_11 :
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
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,w_14 = NULL,x_14 = NULL,c_15 = NULL,m_15 = NULL;
  u_12 = t;
  n_12 :
  if(match_cons(u_12, sym_TCons_2))
    {
      v_12 = ATgetArgument(u_12, 0);
      z_12 = ATgetArgument(u_12, 1);
      o_12 :
      if(match_cons(v_12, sym_Build_1))
        {
          w_12 = ATgetArgument(v_12, 0);
          p_12 :
          if(match_cons(w_12, sym_Op_2))
            {
              x_12 = ATgetArgument(w_12, 0);
              y_12 = ATgetArgument(w_12, 1);
              q_12 :
              if(match_cons(z_12, sym_TCons_2))
                {
                  a_13 = ATgetArgument(z_12, 0);
                  m_15 = ATgetArgument(z_12, 1);
                  r_12 :
                  if(match_cons(a_13, sym_Match_1))
                    {
                      w_14 = ATgetArgument(a_13, 0);
                      s_12 :
                      if(match_cons(w_14, sym_Op_2))
                        {
                          x_14 = ATgetArgument(w_14, 0);
                          c_15 = ATgetArgument(w_14, 1);
                          t_12 :
                          if(match_cons(m_15, sym_TNil_0))
                            {
                              ATerm p_15 = NULL,x_15 = NULL;
                              if(x_12 != NULL && x_12 != x_14)
                                _fail(x_14);
                              else
                                x_12 = x_14;
                              if(p_15 != NULL && p_15 != c_15)
                                _fail(c_15);
                              else
                                p_15 = c_15;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_15), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
                                  q_15 = t;
                                  j_12 :
                                  if(match_cons(q_15, sym_TCons_2))
                                    {
                                      r_15 = ATgetArgument(q_15, 0);
                                      s_15 = ATgetArgument(q_15, 1);
                                      k_12 :
                                      if(match_cons(s_15, sym_TCons_2))
                                        {
                                          t_15 = ATgetArgument(s_15, 0);
                                          u_15 = ATgetArgument(s_15, 1);
                                          l_12 :
                                          if(match_cons(u_15, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_15)));
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
                                x_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_12), not_null(y_12))));
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,t_16 = NULL,u_16 = NULL;
  g_16 = t;
  d_16 :
  if(match_cons(g_16, sym_TCons_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      e_16 :
      if(match_cons(i_16, sym_TCons_2))
        {
          t_16 = ATgetArgument(i_16, 0);
          u_16 = ATgetArgument(i_16, 1);
          f_16 :
          if(match_cons(u_16, sym_TNil_0))
            {
              if(h_16 != NULL && h_16 != t_16)
                _fail(t_16);
              else
                h_16 = t_16;
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
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,c_19 = NULL,d_19 = NULL;
  i_17 = t;
  b_17 :
  if(match_cons(i_17, sym_TCons_2))
    {
      j_17 = ATgetArgument(i_17, 0);
      n_17 = ATgetArgument(i_17, 1);
      c_17 :
      if(match_cons(j_17, sym_Build_1))
        {
          k_17 = ATgetArgument(j_17, 0);
          d_17 :
          if(match_cons(k_17, sym_Op_2))
            {
              l_17 = ATgetArgument(k_17, 0);
              m_17 = ATgetArgument(k_17, 1);
              e_17 :
              if(match_cons(n_17, sym_TCons_2))
                {
                  p_18 = ATgetArgument(n_17, 0);
                  d_19 = ATgetArgument(n_17, 1);
                  f_17 :
                  if(match_cons(p_18, sym_Match_1))
                    {
                      q_18 = ATgetArgument(p_18, 0);
                      g_17 :
                      if(match_cons(q_18, sym_Op_2))
                        {
                          r_18 = ATgetArgument(q_18, 0);
                          c_19 = ATgetArgument(q_18, 1);
                          h_17 :
                          if(match_cons(d_19, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm g_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = g_9;
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
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = l_9;
      {
        ATerm m_9 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = m_9;
            {
              ATerm u_9 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_9;
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  ATerm s_21 (ATerm t)
  {
    ATerm c_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    c_21 = t;
    t = not_null(c_21);
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    ATerm h_21 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    h_21 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_21), not_null(z_20));
    return(t);
  }
  v_20 = t;
  t_20 :
  if(match_cons(v_20, sym_Seq_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      u_20 :
      if(match_cons(x_20, sym_Seq_2))
        {
          y_20 = ATgetArgument(x_20, 0);
          z_20 = ATgetArgument(x_20, 1);
          {
            ATerm v_9 = t;
            if(PushChoice()==0)
              {
                t = s_21(t);
                PopChoice();
              }
            else
              {
                t = v_9;
                t = t_21(t);
              }
          }
        }
      else
        t = s_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  e_22 = t;
  x_21 :
  if(match_cons(e_22, sym_Seq_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      h_22 = ATgetArgument(e_22, 1);
      y_21 :
      if(match_cons(f_22, sym_Build_1))
        {
          g_22 = ATgetArgument(f_22, 0);
          z_21 :
          if(match_cons(h_22, sym_Seq_2))
            {
              i_22 = ATgetArgument(h_22, 0);
              k_22 = ATgetArgument(h_22, 1);
              a_22 :
              if(match_cons(i_22, sym_Build_1))
                {
                  j_22 = ATgetArgument(i_22, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_22)), not_null(k_22));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL;
  t_22 = t;
  r_22 :
  if(match_cons(t_22, sym_Scope_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      s_22 :
      if(match_cons(v_22, sym_Scope_2))
        {
          x_22 = ATgetArgument(v_22, 0);
          y_22 = ATgetArgument(v_22, 1);
          {
            ATerm c_23 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            c_23 = t;
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
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Var_1))
    {
      j_23 = ATgetArgument(i_23, 0);
      t = not_null(j_23);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,f_24 = NULL,g_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  a_24 = t;
  n_23 :
  if(match_cons(a_24, sym_TCons_2))
    {
      b_24 = ATgetArgument(a_24, 0);
      f_24 = ATgetArgument(a_24, 1);
      o_23 :
      if(match_cons(f_24, sym_TCons_2))
        {
          g_24 = ATgetArgument(f_24, 0);
          u_24 = ATgetArgument(f_24, 1);
          y_23 :
          if(match_cons(g_24, sym_Cons_2))
            {
              s_24 = ATgetArgument(g_24, 0);
              t_24 = ATgetArgument(g_24, 1);
              z_23 :
              if(match_cons(u_24, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_24), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_24), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  i_25 = t;
  z_24 :
  if(match_cons(i_25, sym_TCons_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      a_25 :
      if(match_cons(k_25, sym_TCons_2))
        {
          q_25 = ATgetArgument(k_25, 0);
          x_25 = ATgetArgument(k_25, 1);
          b_25 :
          if(match_cons(q_25, sym_Cons_2))
            {
              r_25 = ATgetArgument(q_25, 0);
              w_25 = ATgetArgument(q_25, 1);
              c_25 :
              if(match_cons(r_25, sym_TCons_2))
                {
                  s_25 = ATgetArgument(r_25, 0);
                  t_25 = ATgetArgument(r_25, 1);
                  d_25 :
                  if(match_cons(t_25, sym_TCons_2))
                    {
                      u_25 = ATgetArgument(t_25, 0);
                      v_25 = ATgetArgument(t_25, 1);
                      e_25 :
                      if(match_cons(v_25, sym_TNil_0))
                        {
                          h_25 :
                          if(match_cons(x_25, sym_TNil_0))
                            {
                              ATerm z_25 = NULL;
                              if(j_25 != NULL && j_25 != s_25)
                                _fail(s_25);
                              else
                                j_25 = s_25;
                              if(z_25 != NULL && z_25 != u_25)
                                _fail(u_25);
                              else
                                z_25 = u_25;
                              t = not_null(z_25);
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
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = w_9;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm f_26 = NULL;
  ATerm h_26 = NULL;
  f_26 = t;
  {
    ATerm j_26 = NULL;
    t = c_84(t);
    h_26 = t;
    t = d_84(t);
    j_26 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_26), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm o_26 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        t = c_83(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        t = _all(t, o_26);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  w_26 = t;
  s_26 :
  if(match_cons(w_26, sym_TCons_2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      t_26 :
      if(match_cons(y_26, sym_TCons_2))
        {
          z_26 = ATgetArgument(y_26, 0);
          a_27 = ATgetArgument(y_26, 1);
          u_26 :
          if(match_cons(a_27, sym_TNil_0))
            {
              ATerm e_27 = NULL;
              if(e_27 != NULL && e_27 != z_26)
                _fail(z_26);
              else
                e_27 = z_26;
            }
          else
            {
              if(match_cons(a_27, sym_TCons_2))
                {
                  b_27 = ATgetArgument(a_27, 0);
                  c_27 = ATgetArgument(a_27, 1);
                  v_26 :
                  if(match_cons(c_27, sym_TNil_0))
                    {
                      ATerm k_27 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      k_27 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_27), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  t = subs_args_0(t);
  t_27 = t;
  q_27 :
  if(match_cons(t_27, sym_TCons_2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      r_27 :
      if(match_cons(v_27, sym_TCons_2))
        {
          w_27 = ATgetArgument(v_27, 0);
          x_27 = ATgetArgument(v_27, 1);
          s_27 :
          if(match_cons(x_27, sym_TNil_0))
            {
              t = not_null(w_27);
              {
                ATerm t_0 (ATerm t)
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = not_null(u_27);
                    return(t);
                  }
                  t = SubsVar_2(t, e_84, u_0);
                  t = f_84(t);
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
ATerm substitute_1 (ATerm t, ATerm g_84 (ATerm))
{
  t = substitute_2(t, g_84, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_Cons_2))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      t = u_74(t);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm j_28 = NULL;
          j_28 = t;
          if(f_28 != NULL && f_28 != j_28)
            _fail(j_28);
          else
            f_28 = j_28;
          return(t);
        }
        t = fetch_1(t, v_0);
        t = not_null(g_28);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  r_28 = t;
  n_28 :
  if(match_cons(r_28, sym_TCons_2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      o_28 :
      if(match_cons(t_28, sym_TCons_2))
        {
          u_28 = ATgetArgument(t_28, 0);
          x_28 = ATgetArgument(t_28, 1);
          p_28 :
          if(match_cons(u_28, sym_Cons_2))
            {
              v_28 = ATgetArgument(u_28, 0);
              w_28 = ATgetArgument(u_28, 1);
              q_28 :
              if(match_cons(x_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_28), not_null(s_28)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_28), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  s_29 = t;
  o_29 :
  if(match_cons(s_29, sym_Cons_2))
    {
      t_29 = ATgetArgument(s_29, 0);
      y_29 = ATgetArgument(s_29, 1);
      p_29 :
      if(match_cons(t_29, sym_TCons_2))
        {
          u_29 = ATgetArgument(t_29, 0);
          v_29 = ATgetArgument(t_29, 1);
          q_29 :
          if(match_cons(v_29, sym_TCons_2))
            {
              w_29 = ATgetArgument(v_29, 0);
              x_29 = ATgetArgument(v_29, 1);
              r_29 :
              if(match_cons(x_29, sym_TNil_0))
                {
                  ATerm c_30 = NULL,d_30 = NULL,l_30 = NULL,t_30 = NULL;
                  ATerm e_10;
                  e_10 = t;
                  {
                    ATerm e_30 = NULL;
                    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
                    t = not_null(w_29);
                    e_30 = t;
                    t = SSL_explode_term(not_null(e_30));
                    g_30 = t;
                    f_29 :
                    if(match_cons(g_30, sym_TCons_2))
                      {
                        h_30 = ATgetArgument(g_30, 0);
                        i_30 = ATgetArgument(g_30, 1);
                        g_29 :
                        if(match_cons(i_30, sym_TCons_2))
                          {
                            j_30 = ATgetArgument(i_30, 0);
                            k_30 = ATgetArgument(i_30, 1);
                            h_29 :
                            if(match_cons(k_30, sym_TNil_0))
                              {
                                if(c_30 != NULL && c_30 != h_30)
                                  _fail(h_30);
                                else
                                  c_30 = h_30;
                                if(d_30 != NULL && d_30 != j_30)
                                  _fail(j_30);
                                else
                                  d_30 = j_30;
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
                  t = e_10;
                  {
                    ATerm m_30 = NULL;
                    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
                    t = not_null(u_29);
                    m_30 = t;
                    t = SSL_explode_term(not_null(m_30));
                    o_30 = t;
                    k_29 :
                    if(match_cons(o_30, sym_TCons_2))
                      {
                        p_30 = ATgetArgument(o_30, 0);
                        q_30 = ATgetArgument(o_30, 1);
                        l_29 :
                        if(match_cons(q_30, sym_TCons_2))
                          {
                            r_30 = ATgetArgument(q_30, 0);
                            s_30 = ATgetArgument(q_30, 1);
                            m_29 :
                            if(match_cons(s_30, sym_TNil_0))
                              {
                                if(c_30 != NULL && c_30 != p_30)
                                  _fail(p_30);
                                else
                                  c_30 = p_30;
                                if(l_30 != NULL && l_30 != r_30)
                                  _fail(r_30);
                                else
                                  l_30 = r_30;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_30), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    t_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  g_31 = t;
  c_31 :
  if(match_cons(g_31, sym_Cons_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      m_31 = ATgetArgument(g_31, 1);
      d_31 :
      if(match_cons(h_31, sym_TCons_2))
        {
          i_31 = ATgetArgument(h_31, 0);
          j_31 = ATgetArgument(h_31, 1);
          e_31 :
          if(match_cons(j_31, sym_TCons_2))
            {
              k_31 = ATgetArgument(j_31, 0);
              l_31 = ATgetArgument(j_31, 1);
              f_31 :
              if(match_cons(l_31, sym_TNil_0))
                {
                  ATerm o_31 = NULL;
                  if(i_31 != NULL && i_31 != k_31)
                    _fail(k_31);
                  else
                    i_31 = k_31;
                  if(o_31 != NULL && o_31 != m_31)
                    _fail(m_31);
                  else
                    o_31 = m_31;
                  t = not_null(o_31);
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
ATerm while_not_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm q_31 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = e_69(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = f_69(t);
        t = q_31(t);
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  t = h_69(t);
  t = while_not_2(t, i_69, j_69);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm y_31 = NULL;
        y_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, z_0);
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        ATerm h_10 = t;
        if(PushChoice()==0)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                ATerm i_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = i_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, b_1, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, a_1);
            PopChoice();
          }
        else
          {
            t = h_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, w_0, x_0, y_0);
      PopChoice();
    }
  else
    {
      t = g_10;
      {
        ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
        a_32 = t;
        v_31 :
        if(match_cons(a_32, sym_TCons_2))
          {
            b_32 = ATgetArgument(a_32, 0);
            c_32 = ATgetArgument(a_32, 1);
            w_31 :
            if(match_cons(c_32, sym_TCons_2))
              {
                d_32 = ATgetArgument(c_32, 0);
                e_32 = ATgetArgument(c_32, 1);
                x_31 :
                if(match_cons(e_32, sym_TNil_0))
                  {
                    t = not_null(b_32);
                    {
                      ATerm j_32 (ATerm t)
                      {
                        ATerm j_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_10;
                            {
                              ATerm k_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm c_1 (ATerm t)
                                  {
                                    t = not_null(d_32);
                                    return(t);
                                  }
                                  t = HdMember_1(t, c_1);
                                  t = j_32(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_10;
                                  t = Cons_2(t, _id, j_32);
                                }
                            }
                          }
                        return(t);
                      }
                      t = j_32(t);
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
ATerm oncetd_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm k_32 (ATerm t)
  {
    ATerm c_11 = t;
    if(PushChoice()==0)
      {
        t = o_82(t);
        PopChoice();
      }
    else
      {
        t = c_11;
        t = _one(t, k_32);
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  q_32 = t;
  n_32 :
  if(match_cons(q_32, sym_TCons_2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      o_32 :
      if(match_cons(s_32, sym_TCons_2))
        {
          t_32 = ATgetArgument(s_32, 0);
          u_32 = ATgetArgument(s_32, 1);
          p_32 :
          if(match_cons(u_32, sym_TNil_0))
            {
              t = not_null(t_32);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm x_32 = NULL;
                  x_32 = t;
                  if(r_32 != NULL && r_32 != x_32)
                    _fail(x_32);
                  else
                    r_32 = x_32;
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
ATerm Var_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym_Var_1))
    {
      e_33 = ATgetArgument(d_33, 0);
      {
        ATerm g_33 = NULL;
        t = not_null(e_33);
        t = w_60(t);
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_33));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  c_35 = t;
  a_34 :
  if(match_cons(c_35, sym_Seq_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      g_35 = ATgetArgument(c_35, 1);
      b_34 :
      if(match_cons(d_35, sym_Build_1))
        {
          e_35 = ATgetArgument(d_35, 0);
          c_34 :
          if(match_cons(g_35, sym_Scope_2))
            {
              i_35 = ATgetArgument(g_35, 0);
              l_35 = ATgetArgument(g_35, 1);
              d_34 :
              if(match_cons(l_35, sym_Seq_2))
                {
                  w_34 = ATgetArgument(l_35, 0);
                  b_35 = ATgetArgument(l_35, 1);
                  e_34 :
                  if(match_cons(w_34, sym_Assign_1))
                    {
                      x_34 = ATgetArgument(w_34, 0);
                      f_34 :
                      if(match_cons(x_34, sym_Var_1))
                        {
                          y_34 = ATgetArgument(x_34, 0);
                          {
                            ATerm d_11 = t;
                            if(PushChoice()==0)
                              {
                                ATerm q_35 = NULL;
                                t = not_null(e_35);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm s_35 = NULL;
                                  t = diff_0(t);
                                  q_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  s_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_35), not_null(s_35)));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = d_11;
                                {
                                  ATerm y_35 = NULL;
                                  t = not_null(e_35);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm a_36 = NULL;
                                    t = diff_0(t);
                                    y_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = tsubs_0(t);
                                    a_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_35)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_35), not_null(a_36)));
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
          if(match_cons(d_35, sym_Assign_1))
            {
              e_35 = ATgetArgument(d_35, 0);
              g_34 :
              if(match_cons(e_35, sym_Var_1))
                {
                  f_35 = ATgetArgument(e_35, 0);
                  h_34 :
                  if(match_cons(g_35, sym_Seq_2))
                    {
                      i_35 = ATgetArgument(g_35, 0);
                      l_35 = ATgetArgument(g_35, 1);
                      i_34 :
                      if(match_cons(i_35, sym_Build_1))
                        {
                          j_35 = ATgetArgument(i_35, 0);
                          j_34 :
                          if(match_cons(j_35, sym_Var_1))
                            {
                              k_35 = ATgetArgument(j_35, 0);
                              {
                                ATerm b_37 = NULL;
                                if(f_35 != NULL && f_35 != k_35)
                                  _fail(k_35);
                                else
                                  f_35 = k_35;
                                if(b_37 != NULL && b_37 != l_35)
                                  _fail(l_35);
                                else
                                  b_37 = l_35;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_35))), not_null(b_37));
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
      if(match_cons(c_35, sym_Scope_2))
        {
          d_35 = ATgetArgument(c_35, 0);
          g_35 = ATgetArgument(c_35, 1);
          k_34 :
          if(match_cons(g_35, sym_Seq_2))
            {
              i_35 = ATgetArgument(g_35, 0);
              l_35 = ATgetArgument(g_35, 1);
              l_34 :
              if(match_cons(i_35, sym_Assign_2))
                {
                  j_35 = ATgetArgument(i_35, 0);
                  u_34 = ATgetArgument(i_35, 1);
                  m_34 :
                  if(match_cons(j_35, sym_Var_1))
                    {
                      k_35 = ATgetArgument(j_35, 0);
                      n_34 :
                      if(match_cons(u_34, sym_Var_1))
                        {
                          v_34 = ATgetArgument(u_34, 0);
                          {
                            ATerm g_36 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm i_36 = NULL;
                              t = diff_0(t);
                              g_36 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = tsubs_0(t);
                              i_36 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_36), not_null(i_36));
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
                  if(match_cons(i_35, sym_Assign_1))
                    {
                      j_35 = ATgetArgument(i_35, 0);
                      o_34 :
                      if(match_cons(j_35, sym_Var_1))
                        {
                          k_35 = ATgetArgument(j_35, 0);
                          p_34 :
                          if(match_cons(l_35, sym_Seq_2))
                            {
                              w_34 = ATgetArgument(l_35, 0);
                              b_35 = ATgetArgument(l_35, 1);
                              q_34 :
                              if(match_cons(w_34, sym_Assign_1))
                                {
                                  x_34 = ATgetArgument(w_34, 0);
                                  r_34 :
                                  if(match_cons(x_34, sym_Var_1))
                                    {
                                      y_34 = ATgetArgument(x_34, 0);
                                      {
                                        ATerm o_36 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm q_36 = NULL;
                                          t = diff_0(t);
                                          o_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = tsubs_0(t);
                                          q_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_35))), not_null(q_36)));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(w_34, sym_Assign_2))
                                    {
                                      x_34 = ATgetArgument(w_34, 0);
                                      z_34 = ATgetArgument(w_34, 1);
                                      s_34 :
                                      if(match_cons(x_34, sym_Var_1))
                                        {
                                          y_34 = ATgetArgument(x_34, 0);
                                          t_34 :
                                          if(match_cons(z_34, sym_Var_1))
                                            {
                                              a_35 = ATgetArgument(z_34, 0);
                                              {
                                                ATerm v_36 = NULL,w_36 = NULL;
                                                if(k_35 != NULL && k_35 != a_35)
                                                  _fail(a_35);
                                                else
                                                  k_35 = a_35;
                                                if(v_36 != NULL && v_36 != b_35)
                                                  _fail(b_35);
                                                else
                                                  v_36 = b_35;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm y_36 = NULL;
                                                  t = diff_0(t);
                                                  w_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_35)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = tsubs_0(t);
                                                  y_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_35))), not_null(y_36)));
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
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  x_37 = t;
  v_37 :
  if(match_cons(x_37, sym_Seq_2))
    {
      y_37 = ATgetArgument(x_37, 0);
      z_37 = ATgetArgument(x_37, 1);
      w_37 :
      if(match_cons(z_37, sym_Let_2))
        {
          a_38 = ATgetArgument(z_37, 0);
          b_38 = ATgetArgument(z_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_38), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_37), not_null(b_38)));
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
  ATerm k_38 = NULL,l_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  k_38 = t;
  h_38 :
  if(match_cons(k_38, sym_TCons_2))
    {
      l_38 = ATgetArgument(k_38, 0);
      q_38 = ATgetArgument(k_38, 1);
      i_38 :
      if(match_cons(q_38, sym_TCons_2))
        {
          r_38 = ATgetArgument(q_38, 0);
          s_38 = ATgetArgument(q_38, 1);
          j_38 :
          if(match_cons(s_38, sym_TNil_0))
            {
              t = not_null(l_38);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(r_38);
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
  ATerm a_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,k_39 = NULL;
  a_39 = t;
  x_38 :
  if(match_cons(a_39, sym_TCons_2))
    {
      d_39 = ATgetArgument(a_39, 0);
      e_39 = ATgetArgument(a_39, 1);
      y_38 :
      if(match_cons(e_39, sym_TCons_2))
        {
          f_39 = ATgetArgument(e_39, 0);
          k_39 = ATgetArgument(e_39, 1);
          z_38 :
          if(match_cons(k_39, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_39), not_null(f_39));
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
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  x_39 = t;
  s_39 :
  if(match_cons(x_39, sym_TCons_2))
    {
      y_39 = ATgetArgument(x_39, 0);
      b_40 = ATgetArgument(x_39, 1);
      t_39 :
      if(match_cons(y_39, sym_Cons_2))
        {
          z_39 = ATgetArgument(y_39, 0);
          a_40 = ATgetArgument(y_39, 1);
          u_39 :
          if(match_cons(b_40, sym_TCons_2))
            {
              c_40 = ATgetArgument(b_40, 0);
              j_40 = ATgetArgument(b_40, 1);
              v_39 :
              if(match_cons(c_40, sym_Cons_2))
                {
                  h_40 = ATgetArgument(c_40, 0);
                  i_40 = ATgetArgument(c_40, 1);
                  w_39 :
                  if(match_cons(j_40, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(z_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_40), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm genzip_4 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm d_41 (ATerm t)
  {
    ATerm e_11 = t;
    if(PushChoice()==0)
      {
        t = r_76(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        t = s_76(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = TCons_2(t, d_41, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_76, f_1);
          t = t_76(t);
        }
      }
    return(t);
  }
  t = d_41(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym_Cong_2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        ATerm b_42 = NULL;
        t = not_null(y_41);
        {
          ATerm f_42 = NULL;
          t = map_1(t, new_0);
          b_42 = t;
          {
            ATerm h_42 = NULL;
            ATerm g_1 (ATerm t)
            {
              ATerm d_42 = NULL;
              d_42 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_42));
              return(t);
            }
            t = map_1(t, g_1);
            f_42 = t;
            t = not_null(y_41);
            {
              ATerm l_42 = NULL;
              t = map_1(t, new_0);
              h_42 = t;
              {
                ATerm n_42 = NULL;
                ATerm h_1 (ATerm t)
                {
                  ATerm j_42 = NULL;
                  j_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_42));
                  return(t);
                }
                t = map_1(t, h_1);
                l_42 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm d_43 = NULL;
                  t = zip_1(t, _id);
                  n_42 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm f_43 = NULL;
                    ATerm i_1 (ATerm t)
                    {
                      ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL;
                      p_42 = t;
                      n_41 :
                      if(match_cons(p_42, sym_TCons_2))
                        {
                          q_42 = ATgetArgument(p_42, 0);
                          v_42 = ATgetArgument(p_42, 1);
                          o_41 :
                          if(match_cons(q_42, sym_TCons_2))
                            {
                              r_42 = ATgetArgument(q_42, 0);
                              s_42 = ATgetArgument(q_42, 1);
                              p_41 :
                              if(match_cons(s_42, sym_TCons_2))
                                {
                                  t_42 = ATgetArgument(s_42, 0);
                                  u_42 = ATgetArgument(s_42, 1);
                                  q_41 :
                                  if(match_cons(u_42, sym_TNil_0))
                                    {
                                      r_41 :
                                      if(match_cons(v_42, sym_TCons_2))
                                        {
                                          w_42 = ATgetArgument(v_42, 0);
                                          z_42 = ATgetArgument(v_42, 1);
                                          s_41 :
                                          if(match_cons(z_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_42)))));
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
                    d_43 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_42), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_42), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    f_43 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_41), not_null(f_42))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_43)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_41), not_null(l_42))))));
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
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym_Cong_2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm q_44 = NULL;
        t = not_null(j_44);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm n_44 = NULL,o_44 = NULL;
            o_44 = t;
            e_44 :
            if(match_cons(o_44, sym_Match_1))
              {
                n_44 = ATgetArgument(o_44, 0);
                t = not_null(n_44);
              }
            else
              {
                if(match_cons(o_44, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_1);
          q_44 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(i_44), not_null(q_44)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm z_44 = NULL,l_45 = NULL,m_45 = NULL;
  z_44 = t;
  x_44 :
  if(match_cons(z_44, sym_Scope_2))
    {
      l_45 = ATgetArgument(z_44, 0);
      m_45 = ATgetArgument(z_44, 1);
      y_44 :
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
  ATerm j_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  l_46 = t;
  c_46 :
  if(match_cons(l_46, sym_Choice_2))
    {
      m_46 = ATgetArgument(l_46, 0);
      j_46 = ATgetArgument(l_46, 1);
      if(m_46 != NULL && m_46 != j_46)
        _fail(j_46);
      else
        m_46 = j_46;
      t = not_null(m_46);
    }
  else
    {
      if(match_cons(l_46, sym_LChoice_2))
        {
          m_46 = ATgetArgument(l_46, 0);
          j_46 = ATgetArgument(l_46, 1);
          if(m_46 != NULL && m_46 != j_46)
            _fail(j_46);
          else
            m_46 = j_46;
          t = not_null(m_46);
        }
      else
        {
          if(match_cons(l_46, sym_Where_1))
            {
              m_46 = ATgetArgument(l_46, 0);
              d_46 :
              if(match_cons(m_46, sym_Where_1))
                {
                  n_46 = ATgetArgument(m_46, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_46));
                }
              else
                {
                  if(match_cons(m_46, sym_Seq_2))
                    {
                      n_46 = ATgetArgument(m_46, 0);
                      p_46 = ATgetArgument(m_46, 1);
                      e_46 :
                      if(match_cons(n_46, sym_Where_1))
                        {
                          o_46 = ATgetArgument(n_46, 0);
                          f_46 :
                          if(match_cons(p_46, sym_Seq_2))
                            {
                              q_46 = ATgetArgument(p_46, 0);
                              s_46 = ATgetArgument(p_46, 1);
                              g_46 :
                              if(match_cons(q_46, sym_Build_1))
                                {
                                  r_46 = ATgetArgument(q_46, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_46)), not_null(s_46))));
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
              if(match_cons(l_46, sym_Not_1))
                {
                  m_46 = ATgetArgument(l_46, 0);
                  h_46 :
                  if(match_cons(m_46, sym_Not_1))
                    {
                      n_46 = ATgetArgument(m_46, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_46));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(l_46, sym_Test_1))
                    {
                      m_46 = ATgetArgument(l_46, 0);
                      i_46 :
                      if(match_cons(m_46, sym_Test_1))
                        {
                          n_46 = ATgetArgument(m_46, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_46));
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
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  i_48 = t;
  e_48 :
  if(match_cons(i_48, sym_Choice_2))
    {
      j_48 = ATgetArgument(i_48, 0);
      m_48 = ATgetArgument(i_48, 1);
      f_48 :
      if(match_cons(j_48, sym_Choice_2))
        {
          k_48 = ATgetArgument(j_48, 0);
          l_48 = ATgetArgument(j_48, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_48), not_null(m_48)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(i_48, sym_Seq_2))
        {
          j_48 = ATgetArgument(i_48, 0);
          m_48 = ATgetArgument(i_48, 1);
          g_48 :
          if(match_cons(j_48, sym_Seq_2))
            {
              k_48 = ATgetArgument(j_48, 0);
              l_48 = ATgetArgument(j_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_48), not_null(m_48)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(i_48, sym_LChoice_2))
            {
              j_48 = ATgetArgument(i_48, 0);
              m_48 = ATgetArgument(i_48, 1);
              h_48 :
              if(match_cons(j_48, sym_LChoice_2))
                {
                  k_48 = ATgetArgument(j_48, 0);
                  l_48 = ATgetArgument(j_48, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_48), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_48), not_null(m_48)));
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  r_49 = t;
  l_49 :
  if(match_cons(r_49, sym_Seqs_1))
    {
      s_49 = ATgetArgument(r_49, 0);
      m_49 :
      if(match_cons(s_49, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(s_49, sym_Cons_2))
            {
              p_49 = ATgetArgument(s_49, 0);
              q_49 = ATgetArgument(s_49, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_49), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_49)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(r_49, sym_Choices_1))
        {
          s_49 = ATgetArgument(r_49, 0);
          n_49 :
          if(match_cons(s_49, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(s_49, sym_Cons_2))
                {
                  p_49 = ATgetArgument(s_49, 0);
                  q_49 = ATgetArgument(s_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_49), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_49)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(r_49, sym_LChoices_1))
            {
              s_49 = ATgetArgument(r_49, 0);
              o_49 :
              if(match_cons(s_49, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(s_49, sym_Cons_2))
                    {
                      p_49 = ATgetArgument(s_49, 0);
                      q_49 = ATgetArgument(s_49, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_49), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_49)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(r_49, sym_Lets_2))
                {
                  s_49 = ATgetArgument(r_49, 0);
                  t_49 = ATgetArgument(r_49, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_49), not_null(t_49));
                }
              else
                {
                  if(match_cons(r_49, sym_BA_2))
                    {
                      s_49 = ATgetArgument(r_49, 0);
                      t_49 = ATgetArgument(r_49, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_49)), not_null(s_49));
                    }
                  else
                    {
                      if(match_cons(r_49, sym_MA_2))
                        {
                          s_49 = ATgetArgument(r_49, 0);
                          t_49 = ATgetArgument(r_49, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_49)), not_null(t_49));
                        }
                      else
                        {
                          if(match_cons(r_49, sym_AM_2))
                            {
                              s_49 = ATgetArgument(r_49, 0);
                              t_49 = ATgetArgument(r_49, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_49)));
                            }
                          else
                            {
                              if(match_cons(r_49, sym_BAM_3))
                                {
                                  s_49 = ATgetArgument(r_49, 0);
                                  t_49 = ATgetArgument(r_49, 1);
                                  u_49 = ATgetArgument(r_49, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_49)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_49)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(r_49, sym_InfixApp_3))
                                    {
                                      s_49 = ATgetArgument(r_49, 0);
                                      t_49 = ATgetArgument(r_49, 1);
                                      u_49 = ATgetArgument(r_49, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_49), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm e_51 = NULL,f_51 = NULL;
  e_51 = t;
  c_51 :
  if(match_cons(e_51, sym_Where_1))
    {
      f_51 = ATgetArgument(e_51, 0);
      d_51 :
      if(match_cons(f_51, sym_Fail_0))
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
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  i_51 :
  if(match_cons(k_51, sym_LChoice_2))
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
ATerm F13_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  q_51 :
  if(match_cons(s_51, sym_LChoice_2))
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
ATerm F12_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  y_51 :
  if(match_cons(a_52, sym_Choice_2))
    {
      b_52 = ATgetArgument(a_52, 0);
      c_52 = ATgetArgument(a_52, 1);
      z_51 :
      if(match_cons(c_52, sym_Fail_0))
        t = not_null(b_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  g_52 :
  if(match_cons(i_52, sym_Choice_2))
    {
      j_52 = ATgetArgument(i_52, 0);
      k_52 = ATgetArgument(i_52, 1);
      h_52 :
      if(match_cons(j_52, sym_Fail_0))
        t = not_null(k_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym_Cong_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      t = not_null(s_52);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm v_52 = NULL;
          v_52 = t;
          o_52 :
          if(!(match_cons(v_52, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, k_1);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  y_52 :
  if(match_cons(a_53, sym_Path_2))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      z_52 :
      if(match_cons(c_53, sym_Fail_0))
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
  ATerm i_53 = NULL,j_53 = NULL;
  i_53 = t;
  g_53 :
  if(match_cons(i_53, sym_One_1))
    {
      j_53 = ATgetArgument(i_53, 0);
      h_53 :
      if(match_cons(j_53, sym_Fail_0))
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
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  m_53 :
  if(match_cons(o_53, sym_Some_1))
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
ATerm F6_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_Rec_2))
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
ATerm F5_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  a_54 :
  if(match_cons(c_54, sym_Scope_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      b_54 :
      if(match_cons(e_54, sym_Fail_0))
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
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  i_54 :
  if(match_cons(k_54, sym_Seq_2))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      j_54 :
      if(match_cons(l_54, sym_Fail_0))
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
  ATerm s_54 = NULL,t_54 = NULL;
  s_54 = t;
  q_54 :
  if(match_cons(s_54, sym_Not_1))
    {
      t_54 = ATgetArgument(s_54, 0);
      r_54 :
      if(match_cons(t_54, sym_Fail_0))
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
  ATerm y_54 = NULL,z_54 = NULL;
  y_54 = t;
  w_54 :
  if(match_cons(y_54, sym_Test_1))
    {
      z_54 = ATgetArgument(y_54, 0);
      x_54 :
      if(match_cons(z_54, sym_Fail_0))
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
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = f_11;
      {
        ATerm g_11 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = g_11;
            {
              ATerm h_11 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_11;
                  {
                    ATerm i_11 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_11;
                        {
                          ATerm j_11 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_11;
                              {
                                ATerm k_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_11;
                                    {
                                      ATerm l_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_11;
                                          {
                                            ATerm b_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = b_12;
                                                {
                                                  ATerm c_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = c_12;
                                                      {
                                                        ATerm d_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = d_12;
                                                            {
                                                              ATerm e_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = e_12;
                                                                  {
                                                                    ATerm f_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_12;
                                                                        {
                                                                          ATerm g_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_12;
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
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  c_55 :
  if(match_cons(e_55, sym_Match_1))
    {
      f_55 = ATgetArgument(e_55, 0);
      d_55 :
      if(match_cons(f_55, sym_Wld_0))
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
  ATerm k_55 = NULL,l_55 = NULL;
  k_55 = t;
  i_55 :
  if(match_cons(k_55, sym_Where_1))
    {
      l_55 = ATgetArgument(k_55, 0);
      j_55 :
      if(match_cons(l_55, sym_Id_0))
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
  ATerm q_55 = NULL,r_55 = NULL;
  q_55 = t;
  o_55 :
  if(match_cons(q_55, sym_All_1))
    {
      r_55 = ATgetArgument(q_55, 0);
      p_55 :
      if(match_cons(r_55, sym_Id_0))
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
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  u_55 :
  if(match_cons(w_55, sym_Rec_2))
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
ATerm I8_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_cons(e_56, sym_Scope_2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      d_56 :
      if(match_cons(g_56, sym_Id_0))
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
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  k_56 :
  if(match_cons(m_56, sym_LChoice_2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      l_56 :
      if(match_cons(n_56, sym_Id_0))
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
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  s_56 :
  if(match_cons(u_56, sym_Seq_2))
    {
      v_56 = ATgetArgument(u_56, 0);
      w_56 = ATgetArgument(u_56, 1);
      t_56 :
      if(match_cons(w_56, sym_Id_0))
        t = not_null(v_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  e_57 = t;
  c_57 :
  if(match_cons(e_57, sym_Seq_2))
    {
      f_57 = ATgetArgument(e_57, 0);
      g_57 = ATgetArgument(e_57, 1);
      d_57 :
      if(match_cons(f_57, sym_Id_0))
        t = not_null(g_57);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  m_57 = t;
  k_57 :
  if(match_cons(m_57, sym_Not_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      l_57 :
      if(match_cons(n_57, sym_Id_0))
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
  ATerm s_57 = NULL,t_57 = NULL;
  s_57 = t;
  q_57 :
  if(match_cons(s_57, sym_Test_1))
    {
      t_57 = ATgetArgument(s_57, 0);
      r_57 :
      if(match_cons(t_57, sym_Id_0))
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
  ATerm h_12 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = h_12;
      {
        ATerm i_12 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = i_12;
            {
              ATerm m_12 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_12;
                  {
                    ATerm b_13 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_13;
                        {
                          ATerm c_13 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = c_13;
                              {
                                ATerm d_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_13;
                                    {
                                      ATerm e_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_13;
                                          {
                                            ATerm f_13 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = f_13;
                                                {
                                                  ATerm g_13 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_13;
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
  ATerm h_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = h_13;
      {
        ATerm i_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = i_13;
            {
              ATerm j_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = j_13;
                  {
                    ATerm k_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = k_13;
                        {
                          ATerm l_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm m_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_13;
                                    {
                                      ATerm n_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_13;
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
  ATerm o_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = o_13;
      {
        ATerm p_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = p_13;
            {
              ATerm q_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_13;
                  {
                    ATerm r_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_13;
                        {
                          ATerm s_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_13;
                              {
                                ATerm t_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_13;
                                    {
                                      ATerm u_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_13;
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
ATerm downup_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm v_57 (ATerm t)
  {
    t = c_81(t);
    t = _all(t, v_57);
    t = c_81(t);
    return(t);
  }
  t = v_57(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
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
    t = repeat_1(t, q_1);
    return(t);
  }
  t = downup_1(t, p_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym_SDef_3))
    {
      c_58 = ATgetArgument(b_58, 0);
      d_58 = ATgetArgument(b_58, 1);
      e_58 = ATgetArgument(b_58, 2);
      {
        ATerm i_58 = NULL;
        t = not_null(c_58);
        {
          ATerm k_58 = NULL;
          t = p_61(t);
          i_58 = t;
          t = not_null(d_58);
          {
            ATerm m_58 = NULL;
            t = q_61(t);
            k_58 = t;
            t = not_null(e_58);
            t = r_61(t);
            m_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_58), not_null(k_58), not_null(m_58));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Strategies_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      {
        ATerm y_58 = NULL;
        t = not_null(w_58);
        t = k_60(t);
        y_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(y_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm f_59 = NULL,g_59 = NULL;
  f_59 = t;
  e_59 :
  if(match_cons(f_59, sym_Specification_1))
    {
      g_59 = ATgetArgument(f_59, 0);
      {
        ATerm i_59 = NULL;
        t = not_null(g_59);
        t = m_60(t);
        i_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(i_59));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm w_85 (ATerm))
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
            t = SDef_3(t, _id, _id, w_85);
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
  ATerm n_59 = NULL;
  n_59 = t;
  m_59 :
  if(!(match_cons(n_59, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
  s_59 = t;
  r_59 :
  if(match_cons(s_59, sym_TCons_2))
    {
      t_59 = ATgetArgument(s_59, 0);
      u_59 = ATgetArgument(s_59, 1);
      {
        ATerm x_59 = NULL;
        t = not_null(t_59);
        {
          ATerm z_59 = NULL;
          t = u_62(t);
          x_59 = t;
          t = not_null(u_59);
          t = v_62(t);
          z_59 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_59), not_null(z_59));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_60 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm i_60 = NULL,j_60 = NULL;
      i_60 = t;
      g_60 :
      if(match_cons(i_60, sym_Program_1))
        {
          j_60 = ATgetArgument(i_60, 0);
          if(h_60 != NULL && h_60 != j_60)
            _fail(j_60);
          else
            h_60 = j_60;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, f_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm report_success_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      ATerm x_13 = t;
      if(PushChoice()==0)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm u_60 = NULL;
            u_60 = t;
            n_60 :
            if(!(match_cons(u_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_2);
          PopChoice();
          _fail(t);
        }
      else
        t = x_13;
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
          ATerm v_60 = NULL,x_60 = NULL;
          v_60 = t;
          p_60 :
          if(match_cons(v_60, sym_Runtime_1))
            {
              x_60 = ATgetArgument(v_60, 0);
              if(t_60 != NULL && t_60 != x_60)
                _fail(x_60);
              else
                t_60 = x_60;
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
            ATerm y_60 = NULL,z_60 = NULL;
            y_60 = t;
            r_60 :
            if(match_cons(y_60, sym_Program_1))
              {
                z_60 = ATgetArgument(y_60, 0);
                if(s_60 != NULL && s_60 != z_60)
                  _fail(z_60);
                else
                  s_60 = z_60;
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
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
            t = SSL_WriteToTextFile(not_null(h_61), not_null(j_61));
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
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  v_61 = t;
  s_61 :
  if(match_cons(v_61, sym_TCons_2))
    {
      w_61 = ATgetArgument(v_61, 0);
      x_61 = ATgetArgument(v_61, 1);
      t_61 :
      if(match_cons(x_61, sym_TCons_2))
        {
          y_61 = ATgetArgument(x_61, 0);
          z_61 = ATgetArgument(x_61, 1);
          u_61 :
          if(match_cons(z_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(w_61), not_null(y_61));
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
  ATerm h_62 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm z_2 (ATerm t)
    {
      ATerm z_13 = t;
      if(PushChoice()==0)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm i_62 = NULL,j_62 = NULL;
            i_62 = t;
            e_62 :
            if(match_cons(i_62, sym_Output_1))
              {
                j_62 = ATgetArgument(i_62, 0);
                if(h_62 != NULL && h_62 != j_62)
                  _fail(j_62);
                else
                  h_62 = j_62;
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
          t = z_13;
          {
            ATerm k_62 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            k_62 = t;
            if(h_62 != NULL && h_62 != k_62)
              _fail(k_62);
            else
              h_62 = k_62;
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
  t = y_13;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(h_62);
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
      ATerm a_14 = t;
      if(PushChoice()==0)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_3 (ATerm t)
            {
              ATerm l_62 = NULL;
              l_62 = t;
              g_62 :
              if(!(match_cons(l_62, sym_Binary_0)))
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
          t = a_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_66 (ATerm))
{
  ATerm x_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  ATerm b_14;
  b_14 = t;
  t = dtime_0(t);
  t = b_14;
  t = q_66(t);
  {
    ATerm c_14;
    c_14 = t;
    {
      ATerm a_63 = NULL;
      t = dtime_0(t);
      a_63 = t;
      if(x_62 != NULL && x_62 != a_63)
        _fail(a_63);
      else
        x_62 = a_63;
    }
    t = c_14;
    b_63 = t;
    s_62 :
    if(match_cons(b_63, sym_TCons_2))
      {
        c_63 = ATgetArgument(b_63, 0);
        d_63 = ATgetArgument(b_63, 1);
        t_62 :
        if(match_cons(d_63, sym_TCons_2))
          {
            e_63 = ATgetArgument(d_63, 0);
            f_63 = ATgetArgument(d_63, 1);
            w_62 :
            if(match_cons(f_63, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(x_62)), not_null(c_63)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_63), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm l_63 = NULL;
  l_63 = t;
  t = SSL_ReadFromFile(not_null(l_63));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm r_63 = NULL;
  ATerm t_63 = NULL;
  r_63 = t;
  {
    ATerm v_63 = NULL;
    t = v_79(t);
    t_63 = t;
    t = not_null(r_63);
    t = w_79(t);
    v_63 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_63), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_64 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm e_14 = t;
    if(PushChoice()==0)
      {
        ATerm v_3 (ATerm t)
        {
          ATerm e_64 = NULL,f_64 = NULL;
          e_64 = t;
          b_64 :
          if(match_cons(e_64, sym_Input_1))
            {
              f_64 = ATgetArgument(e_64, 0);
              if(d_64 != NULL && d_64 != f_64)
                _fail(f_64);
              else
                d_64 = f_64;
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
        t = e_14;
        {
          ATerm g_64 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          g_64 = t;
          if(d_64 != NULL && d_64 != g_64)
            _fail(g_64);
          else
            d_64 = g_64;
        }
      }
  }
  t = d_14;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(d_64);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_64 = NULL;
  k_64 = t;
  j_64 :
  if(!(match_cons(k_64, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm f_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_14;
        {
          ATerm g_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = g_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_3);
  t = p_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_64 = NULL;
  m_64 = t;
  t = SSL_table_create(not_null(m_64));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  {
    ATerm h_14;
    h_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_64), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = h_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  i_65 = t;
  c_65 :
  if(match_cons(i_65, sym_Cons_2))
    {
      e_65 = ATgetArgument(i_65, 0);
      f_65 = ATgetArgument(i_65, 1);
      d_65 :
      if(match_cons(f_65, sym_Cons_2))
        {
          g_65 = ATgetArgument(f_65, 0);
          h_65 = ATgetArgument(f_65, 1);
          {
            ATerm m_65 = NULL;
            t = not_null(e_65);
            t = e_0(t);
            t = not_null(g_65);
            t = f_0(t);
            m_65 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_65), not_null(h_65));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(i_65, "register-usage-info"))
        t = register_usage_1(t, g_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_14 = t;
  if(PushChoice()==0)
    {
      ATerm y_3 (ATerm t)
      {
        ATerm j_66 = NULL;
        j_66 = t;
        r_65 :
        if(!(match_string(j_66, "-S")))
          {
            if(!(match_string(j_66, "--silent")))
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
      t = i_14;
      {
        ATerm j_14 = t;
        if(PushChoice()==0)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm k_66 = NULL;
              k_66 = t;
              s_65 :
              if(!(match_string(k_66, "--verbose")))
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
            t = j_14;
            {
              ATerm k_14 = t;
              if(PushChoice()==0)
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm l_66 = NULL;
                    l_66 = t;
                    t_65 :
                    if(!(match_string(l_66, "-v")))
                      {
                        if(!(match_string(l_66, "--version")))
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
                  t = k_14;
                  {
                    ATerm l_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm s_4 (ATerm t)
                        {
                          ATerm m_66 = NULL;
                          m_66 = t;
                          v_65 :
                          if(!(match_string(m_66, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_4 (ATerm t)
                        {
                          ATerm n_66 = NULL;
                          n_66 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_66));
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
                        t = l_14;
                        {
                          ATerm m_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm w_4 (ATerm t)
                              {
                                ATerm r_66 = NULL;
                                r_66 = t;
                                y_65 :
                                if(!(match_string(r_66, "-i")))
                                  {
                                    if(!(match_string(r_66, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm x_4 (ATerm t)
                              {
                                ATerm s_66 = NULL;
                                s_66 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_66));
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
                              t = m_14;
                              {
                                ATerm n_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm d_5 (ATerm t)
                                    {
                                      ATerm u_66 = NULL;
                                      u_66 = t;
                                      c_66 :
                                      if(!(match_string(u_66, "-o")))
                                        {
                                          if(!(match_string(u_66, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_5 (ATerm t)
                                    {
                                      ATerm v_66 = NULL;
                                      v_66 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_66));
                                      return(t);
                                    }
                                    ATerm h_5 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, d_5, f_5, h_5);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm o_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_5 (ATerm t)
                                          {
                                            ATerm x_66 = NULL;
                                            x_66 = t;
                                            h_66 :
                                            if(!(match_string(x_66, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm k_5 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, i_5, j_5, k_5);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_14;
                                          {
                                            ATerm l_5 (ATerm t)
                                            {
                                              ATerm y_66 = NULL;
                                              y_66 = t;
                                              i_66 :
                                              if(!(match_string(y_66, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm m_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm n_5 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, l_5, m_5, n_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_67 = NULL;
  d_67 = t;
  t = SSL_table_destroy(not_null(d_67));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  t = SSL_exit(not_null(h_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_67 = NULL;
  l_67 = t;
  t = SSL_implode_string(not_null(l_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm o_67 (ATerm t)
  {
    ATerm p_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_67);
        PopChoice();
      }
    else
      {
        t = p_14;
        t = Nil_0(t);
        t = v_78(t);
      }
    return(t);
  }
  t = o_67(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = q_14;
      {
        ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
        r_67 = t;
        q_67 :
        if(match_cons(r_67, sym_Cons_2))
          {
            s_67 = ATgetArgument(r_67, 0);
            t_67 = ATgetArgument(r_67, 1);
            t = not_null(s_67);
            {
              ATerm s_5 (ATerm t)
              {
                t = not_null(t_67);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, s_5);
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
  ATerm z_67 = NULL;
  z_67 = t;
  t = SSL_explode_string(not_null(z_67));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm c_68 (ATerm t)
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
        t = Cons_2(t, h_78, c_68);
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
  i_68 = t;
  e_68 :
  if(match_cons(i_68, sym_TCons_2))
    {
      j_68 = ATgetArgument(i_68, 0);
      k_68 = ATgetArgument(i_68, 1);
      f_68 :
      if(match_cons(j_68, sym_Nil_0))
        {
          g_68 :
          if(match_cons(k_68, sym_TCons_2))
            {
              l_68 = ATgetArgument(k_68, 0);
              m_68 = ATgetArgument(k_68, 1);
              h_68 :
              if(match_cons(m_68, sym_TNil_0))
                t = not_null(l_68);
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
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,k_69 = NULL;
  y_68 = t;
  u_68 :
  if(match_cons(y_68, sym_TCons_2))
    {
      z_68 = ATgetArgument(y_68, 0);
      c_69 = ATgetArgument(y_68, 1);
      v_68 :
      if(match_cons(z_68, sym_Cons_2))
        {
          a_69 = ATgetArgument(z_68, 0);
          b_69 = ATgetArgument(z_68, 1);
          w_68 :
          if(match_cons(c_69, sym_TCons_2))
            {
              d_69 = ATgetArgument(c_69, 0);
              k_69 = ATgetArgument(c_69, 1);
              x_68 :
              if(match_cons(k_69, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_69), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_69), not_null(d_69)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm repeat_2 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm))
{
  ATerm p_69 (ATerm t)
  {
    ATerm s_14 = t;
    if(PushChoice()==0)
      {
        t = n_68(t);
        t = p_69(t);
        PopChoice();
      }
    else
      {
        t = s_14;
        t = o_68(t);
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_68 (ATerm))
{
  t = repeat_2(t, q_68, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm r_69 = NULL;
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_69), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_56 (ATerm))
{
  ATerm x_69 = NULL,y_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym_Program_1))
    {
      y_69 = ATgetArgument(x_69, 0);
      {
        ATerm a_70 = NULL;
        t = not_null(y_69);
        t = z_56(t);
        a_70 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_70));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_70 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm j_70 = NULL;
      j_70 = t;
      if(i_70 != NULL && i_70 != j_70)
        _fail(j_70);
      else
        i_70 = j_70;
      return(t);
    }
    t = Program_1(t, b_6);
    return(t);
  }
  t = option_defined_1(t, v_5);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm k_70 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm d_6 (ATerm t)
        {
          t = not_null(i_70);
          return(t);
        }
        t = short_description_1(t, d_6);
        t = concat_strings_0(t);
        k_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_70), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_6);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm m_70 = NULL;
        m_70 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, e_6);
      {
        ATerm i_6 (ATerm t)
        {
          ATerm o_70 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm j_6 (ATerm t)
            {
              t = not_null(i_70);
              return(t);
            }
            t = long_description_1(t, j_6);
            t = concat_strings_0(t);
            o_70 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_70), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, i_6);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  c_71 = t;
  z_70 :
  if(match_cons(c_71, sym_TCons_2))
    {
      d_71 = ATgetArgument(c_71, 0);
      e_71 = ATgetArgument(c_71, 1);
      a_71 :
      if(match_cons(e_71, sym_TCons_2))
        {
          f_71 = ATgetArgument(e_71, 0);
          g_71 = ATgetArgument(e_71, 1);
          b_71 :
          if(match_cons(g_71, sym_TNil_0))
            {
              ATerm t_14;
              t_14 = t;
              t = SSL_printnl(not_null(d_71), not_null(f_71));
              t = t_14;
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
ATerm Undefined_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm n_71 = NULL,o_71 = NULL;
  n_71 = t;
  m_71 :
  if(match_cons(n_71, sym_Undefined_1))
    {
      o_71 = ATgetArgument(n_71, 0);
      {
        ATerm q_71 = NULL;
        t = not_null(o_71);
        t = a_57(t);
        q_71 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_71));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm u_71 (ATerm t)
  {
    ATerm u_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_78, _id);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = Cons_2(t, _id, u_71);
      }
    return(t);
  }
  t = u_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_65 (ATerm))
{
  t = fetch_1(t, u_65);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_71 = NULL;
  w_71 = t;
  v_71 :
  if(!(match_cons(w_71, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm v_14 = t;
  if(PushChoice()==0)
    {
      t = n_80(t);
      PopChoice();
    }
  else
    t = v_14;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL;
  b_72 = t;
  y_71 :
  if(match_cons(b_72, sym_TCons_2))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      z_71 :
      if(match_cons(d_72, sym_TCons_2))
        {
          e_72 = ATgetArgument(d_72, 0);
          f_72 = ATgetArgument(d_72, 1);
          a_72 :
          if(match_cons(f_72, sym_TNil_0))
            t = SSL_table_get(not_null(c_72), not_null(e_72));
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
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL;
  p_72 = t;
  l_72 :
  if(match_cons(p_72, sym_TCons_2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      m_72 :
      if(match_cons(r_72, sym_TCons_2))
        {
          s_72 = ATgetArgument(r_72, 0);
          t_72 = ATgetArgument(r_72, 1);
          n_72 :
          if(match_cons(t_72, sym_TCons_2))
            {
              u_72 = ATgetArgument(t_72, 0);
              v_72 = ATgetArgument(t_72, 1);
              o_72 :
              if(match_cons(v_72, sym_TNil_0))
                {
                  ATerm y_14;
                  y_14 = t;
                  {
                    ATerm z_72 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_72), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm z_14 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = z_14;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      z_72 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_72), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_72), not_null(z_72)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = y_14;
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
ATerm register_usage_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm e_73 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = a_65(t);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_73), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
  n_73 = t;
  k_73 :
  if(match_cons(n_73, sym_Cons_2))
    {
      l_73 = ATgetArgument(n_73, 0);
      m_73 = ATgetArgument(n_73, 1);
      {
        ATerm t_73 = NULL;
        t = not_null(l_73);
        t = b_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = c_0(t);
        t_73 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_73), not_null(m_73));
      }
    }
  else
    {
      if(match_string(n_73, "register-usage-info"))
        t = register_usage_1(t, d_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm z_73 = NULL;
    z_73 = t;
    y_73 :
    if(!(match_string(z_73, "--help")))
      {
        if(!(match_string(z_73, "-h")))
          {
            if(!(match_string(z_73, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, k_6, l_6, m_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
  c_74 = t;
  b_74 :
  if(match_cons(c_74, sym_Cons_2))
    {
      d_74 = ATgetArgument(c_74, 0);
      e_74 = ATgetArgument(c_74, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_74)), not_null(e_74));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym_Cons_2))
    {
      n_74 = ATgetArgument(m_74, 0);
      o_74 = ATgetArgument(m_74, 1);
      {
        ATerm s_74 = NULL;
        t = not_null(n_74);
        {
          ATerm v_74 = NULL;
          t = y_62(t);
          s_74 = t;
          t = not_null(o_74);
          t = z_62(t);
          v_74 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_74), not_null(v_74));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  d_75 :
  if(!(match_cons(e_75, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm a_15;
  a_15 = t;
  {
    ATerm u_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = y_64(t);
      return(t);
    }
    t = try_1(t, u_6);
  }
  t = a_15;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm j_75 = NULL;
      j_75 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_75));
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm b_15 = t;
      if(PushChoice()==0)
        {
          ATerm d_15 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = d_15;
              t = y_64(t);
              t = Cons_2(t, _id, w_6);
            }
          PopChoice();
        }
      else
        {
          t = b_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_6, w_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
  ATerm e_15;
  e_15 = t;
  {
    ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
    v_75 = t;
    o_75 :
    if(match_cons(v_75, sym_TCons_2))
      {
        w_75 = ATgetArgument(v_75, 0);
        x_75 = ATgetArgument(v_75, 1);
        p_75 :
        if(match_cons(x_75, sym_TCons_2))
          {
            y_75 = ATgetArgument(x_75, 0);
            z_75 = ATgetArgument(x_75, 1);
            q_75 :
            if(match_cons(z_75, sym_TCons_2))
              {
                a_76 = ATgetArgument(z_75, 0);
                b_76 = ATgetArgument(z_75, 1);
                r_75 :
                if(match_cons(b_76, sym_TNil_0))
                  {
                    if(s_75 != NULL && s_75 != w_75)
                      _fail(w_75);
                    else
                      s_75 = w_75;
                    if(t_75 != NULL && t_75 != y_75)
                      _fail(y_75);
                    else
                      t_75 = y_75;
                    if(u_75 != NULL && u_75 != a_76)
                      _fail(a_76);
                    else
                      u_75 = a_76;
                    t = SSL_table_put(not_null(s_75), not_null(t_75), not_null(u_75));
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
  t = e_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm e_76 = NULL;
  ATerm f_15;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = f_15;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm g_15 = t;
      if(PushChoice()==0)
        {
          t = x_64(t);
          PopChoice();
        }
      else
        {
          t = g_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_6);
    {
      ATerm a_7 (ATerm t)
      {
        ATerm h_15 = t;
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
            t = h_15;
            {
              ATerm c_7 (ATerm t)
              {
                ATerm d_7 (ATerm t)
                {
                  ATerm f_76 = NULL;
                  f_76 = t;
                  if(e_76 != NULL && e_76 != f_76)
                    _fail(f_76);
                  else
                    e_76 = f_76;
                  return(t);
                }
                t = Undefined_1(t, d_7);
                return(t);
              }
              t = option_defined_1(t, c_7);
              {
                ATerm i_15;
                i_15 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_76), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = i_15;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, a_7);
      {
        ATerm j_15;
        j_15 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = j_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm k_15 = t;
    if(PushChoice()==0)
      {
        t = f_66(t);
        PopChoice();
      }
    else
      {
        t = k_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_7);
  t = store_options_0(t);
  {
    ATerm l_15 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_66);
        PopChoice();
      }
    else
      {
        t = l_15;
        {
          ATerm n_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, e_66);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  t = iowrap_3(t, z_65, a_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      t = TCons_2(t, w_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_7);
    return(t);
  }
  t = iowrap_2(t, f_7, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm j_7 (ATerm t)
    {
      t = simplify_0(t);
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_narrow_0(t);
      t = simplify_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, j_7);
    return(t);
  }
  t = iowrap_1(t, i_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
