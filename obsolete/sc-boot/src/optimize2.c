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
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm z_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm tboundin_3 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm crush_3 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm free_vars_3 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_80 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm i_78 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm l_82 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm p_83 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm d_74 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm));
ATerm for_3 (ATerm, ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm x_81 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm v_60 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_78 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm zip_1 (ATerm, ATerm f_76 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_67 (ATerm));
ATerm downup_1 (ATerm, ATerm l_80 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm map_1 (ATerm, ATerm q_77 (ATerm));
ATerm Strategies_1 (ATerm, ATerm j_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_60 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm f_85 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_79 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm y_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_65 (ATerm));
ATerm need_help_1 (ATerm, ATerm y_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_64 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_65 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL;
  e_1 = t;
  d_1 :
  if(match_cons(e_1, sym_Cons_2))
    {
      f_1 = ATgetArgument(e_1, 0);
      g_1 = ATgetArgument(e_1, 1);
      t = not_null(g_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  o_1 = t;
  l_1 :
  if(match_cons(o_1, sym_TCons_2))
    {
      p_1 = ATgetArgument(o_1, 0);
      q_1 = ATgetArgument(o_1, 1);
      m_1 :
      if(match_cons(q_1, sym_TCons_2))
        {
          r_1 = ATgetArgument(q_1, 0);
          s_1 = ATgetArgument(q_1, 1);
          n_1 :
          if(match_cons(s_1, sym_TNil_0))
            {
              t = not_null(p_1);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm r_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_6;
                      {
                        ATerm s_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm t_6;
                            t_6 = t;
                            {
                              ATerm a_0 (ATerm t)
                              {
                                t = not_null(r_1);
                                return(t);
                              }
                              t = HdMember_1(t, a_0);
                            }
                            t = t_6;
                            t = Cons_2(t, _id, w_1);
                            PopChoice();
                          }
                        else
                          {
                            t = s_6;
                            t = Tl_0(t);
                            t = w_1(t);
                          }
                      }
                    }
                  return(t);
                }
                t = w_1(t);
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
ATerm DynamicRules_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm a_2 = NULL,b_2 = NULL;
  a_2 = t;
  z_1 :
  if(match_cons(a_2, sym_DynamicRules_1))
    {
      b_2 = ATgetArgument(a_2, 0);
      {
        ATerm d_2 = NULL;
        t = not_null(b_2);
        t = z_59(t);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(d_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  k_2 :
  if(match_cons(l_2, sym_Scope_2))
    {
      m_2 = ATgetArgument(l_2, 0);
      n_2 = ATgetArgument(l_2, 1);
      {
        ATerm q_2 = NULL;
        t = not_null(m_2);
        {
          ATerm s_2 = NULL;
          t = o_62(t);
          q_2 = t;
          t = not_null(n_2);
          t = p_62(t);
          s_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_2), not_null(s_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm v_6 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, g_84, e_84);
      PopChoice();
    }
  else
    {
      t = v_6;
      t = DynamicRules_1(t, e_84);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  z_2 = t;
  y_2 :
  if(match_cons(z_2, sym_DynamicRules_1))
    {
      a_3 = ATgetArgument(z_2, 0);
      t = not_null(a_3);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  i_3 = t;
  f_3 :
  if(match_cons(i_3, sym_Scope_2))
    {
      j_3 = ATgetArgument(i_3, 0);
      h_3 = ATgetArgument(i_3, 1);
      t = not_null(j_3);
    }
  else
    {
      if(match_cons(i_3, sym_LRule_1))
        {
          j_3 = ATgetArgument(i_3, 0);
          g_3 :
          if(match_cons(j_3, sym_Rule_3))
            {
              k_3 = ATgetArgument(j_3, 0);
              l_3 = ATgetArgument(j_3, 1);
              m_3 = ATgetArgument(j_3, 2);
              t = not_null(k_3);
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
  ATerm w_3 = NULL,x_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym_Var_1))
    {
      x_3 = ATgetArgument(w_3, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_3), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  e_4 = t;
  b_4 :
  if(match_cons(e_4, sym_TCons_2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      c_4 :
      if(match_cons(g_4, sym_TCons_2))
        {
          h_4 = ATgetArgument(g_4, 0);
          i_4 = ATgetArgument(g_4, 1);
          d_4 :
          if(match_cons(i_4, sym_TNil_0))
            {
              t = not_null(f_4);
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm w_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(h_4);
                      PopChoice();
                    }
                  else
                    {
                      t = w_6;
                      {
                        ATerm i_7 = t;
                        if(PushChoice()==0)
                          {
                            ATerm b_0 (ATerm t)
                            {
                              t = not_null(h_4);
                              return(t);
                            }
                            t = HdMember_1(t, b_0);
                            t = m_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = i_7;
                            t = Cons_2(t, _id, m_4);
                          }
                      }
                    }
                  return(t);
                }
                t = m_4(t);
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
ATerm foldr_3 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm j_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = y_72(t);
      PopChoice();
    }
  else
    {
      t = j_7;
      {
        ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
        r_4 = t;
        q_4 :
        if(match_cons(r_4, sym_Cons_2))
          {
            s_4 = ATgetArgument(r_4, 0);
            t_4 = ATgetArgument(r_4, 1);
            {
              ATerm w_4 = NULL;
              t = not_null(s_4);
              {
                ATerm y_4 = NULL;
                t = a_73(t);
                w_4 = t;
                t = not_null(t_4);
                t = foldr_3(t, y_72, z_72, a_73);
                y_4 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_4), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = z_72(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm j_5 = NULL;
  ATerm l_5 = NULL;
  j_5 = t;
  {
    ATerm m_5 = NULL;
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
    t = not_null(j_5);
    m_5 = t;
    t = SSL_explode_term(not_null(m_5));
    o_5 = t;
    g_5 :
    if(match_cons(o_5, sym_TCons_2))
      {
        p_5 = ATgetArgument(o_5, 0);
        q_5 = ATgetArgument(o_5, 1);
        h_5 :
        if(match_cons(q_5, sym_TCons_2))
          {
            r_5 = ATgetArgument(q_5, 0);
            s_5 = ATgetArgument(q_5, 1);
            i_5 :
            if(match_cons(s_5, sym_TNil_0))
              {
                if(l_5 != NULL && l_5 != r_5)
                  _fail(r_5);
                else
                  l_5 = r_5;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(l_5);
    t = foldr_3(t, o_74, p_74, q_74);
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_5 (ATerm t)
  {
    ATerm k_7 = t;
    if(PushChoice()==0)
      {
        t = y_69(t);
        PopChoice();
      }
    else
      {
        t = k_7;
        {
          ATerm l_7 = t;
          if(PushChoice()==0)
            {
              ATerm x_5 = NULL;
              ATerm m_7;
              m_7 = t;
              {
                ATerm y_5 = NULL;
                t = z_69(t);
                y_5 = t;
                if(x_5 != NULL && x_5 != y_5)
                  _fail(y_5);
                else
                  x_5 = y_5;
              }
              t = m_7;
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm e_0 (ATerm t)
                  {
                    t = not_null(x_5);
                    return(t);
                  }
                  t = split_2(t, z_5, e_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm d_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_70(t, c_0, z_5, d_0);
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, f_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = l_7;
              {
                ATerm g_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, g_0, union_0, z_5);
              }
            }
        }
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm n_7 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = n_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, h_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_Scope_2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      {
        ATerm l_6 = NULL;
        t = not_null(i_6);
        {
          ATerm n_6 = NULL;
          t = tvars_0(t);
          l_6 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_6), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          n_6 = t;
          {
            ATerm q_7 = t;
            if(PushChoice()==0)
              {
                ATerm p_6 = NULL;
                p_6 = t;
                if(h_6 != NULL && h_6 != p_6)
                  _fail(p_6);
                else
                  h_6 = p_6;
                PopChoice();
                _fail(t);
              }
            else
              t = q_7;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_6), not_null(i_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    t = h_80(t);
    t = _all(t, u_6);
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    ATerm j_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, j_0);
    return(t);
  }
  t = topdown_1(t, i_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, k_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  ATerm o_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_7), not_null(f_7)));
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_7), not_null(h_7)));
    return(t);
  }
  d_7 = t;
  x_6 :
  if(match_cons(d_7, sym_Seq_2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      y_6 :
      if(match_cons(f_7, sym_Scope_2))
        {
          g_7 = ATgetArgument(f_7, 0);
          h_7 = ATgetArgument(f_7, 1);
          z_6 :
          if(match_cons(e_7, sym_Scope_2))
            {
              b_7 = ATgetArgument(e_7, 0);
              c_7 = ATgetArgument(e_7, 1);
              {
                ATerm e_8 = t;
                if(PushChoice()==0)
                  {
                    t = o_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = e_8;
                    t = p_7(t);
                  }
              }
            }
          else
            t = p_7(t);
        }
      else
        {
          a_7 :
          if(match_cons(e_7, sym_Scope_2))
            {
              b_7 = ATgetArgument(e_7, 0);
              c_7 = ATgetArgument(e_7, 1);
              t = o_7(t);
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
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  w_7 = t;
  r_7 :
  if(match_cons(w_7, sym_Let_2))
    {
      x_7 = ATgetArgument(w_7, 0);
      d_8 = ATgetArgument(w_7, 1);
      s_7 :
      if(match_cons(x_7, sym_Cons_2))
        {
          y_7 = ATgetArgument(x_7, 0);
          c_8 = ATgetArgument(x_7, 1);
          t_7 :
          if(match_cons(y_7, sym_SDef_3))
            {
              z_7 = ATgetArgument(y_7, 0);
              a_8 = ATgetArgument(y_7, 1);
              b_8 = ATgetArgument(y_7, 2);
              u_7 :
              if(match_cons(a_8, sym_Nil_0))
                {
                  v_7 :
                  if(match_cons(c_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(z_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(b_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(d_8));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
ATerm at_suffix_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm f_8 = t;
    if(PushChoice()==0)
      {
        t = i_78(t);
        PopChoice();
      }
    else
      {
        t = f_8;
        t = Cons_2(t, _id, i_8);
      }
    return(t);
  }
  t = i_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_Let_2))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      {
        ATerm a_9 = NULL,p_9 = NULL;
        t = not_null(w_8);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
            b_9 = t;
            q_8 :
            if(match_cons(b_9, sym_Cons_2))
              {
                c_9 = ATgetArgument(b_9, 0);
                g_9 = ATgetArgument(b_9, 1);
                r_8 :
                if(match_cons(c_9, sym_SDef_3))
                  {
                    d_9 = ATgetArgument(c_9, 0);
                    e_9 = ATgetArgument(c_9, 1);
                    f_9 = ATgetArgument(c_9, 2);
                    s_8 :
                    if(match_cons(e_9, sym_Nil_0))
                      {
                        ATerm o_9 = NULL;
                        t = not_null(x_8);
                        {
                          ATerm m_0 (ATerm t)
                          {
                            ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
                            k_9 = t;
                            m_8 :
                            if(match_cons(k_9, sym_Call_2))
                              {
                                l_9 = ATgetArgument(k_9, 0);
                                n_9 = ATgetArgument(k_9, 1);
                                n_8 :
                                if(match_cons(l_9, sym_SVar_1))
                                  {
                                    m_9 = ATgetArgument(l_9, 0);
                                    o_8 :
                                    if(match_cons(n_9, sym_Nil_0))
                                      {
                                        if(d_9 != NULL && d_9 != m_9)
                                          _fail(m_9);
                                        else
                                          d_9 = m_9;
                                        t = not_null(f_9);
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
                          t = oncetd_1(t, m_0);
                          o_9 = t;
                          if(a_9 != NULL && a_9 != o_9)
                            _fail(o_9);
                          else
                            a_9 = o_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm g_8 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = g_8;
                            t = not_null(g_9);
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
          t = at_suffix_1(t, l_0);
          p_9 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_9), not_null(a_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  g_10 = t;
  y_9 :
  if(match_cons(g_10, sym_TCons_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      j_10 = ATgetArgument(g_10, 1);
      z_9 :
      if(match_cons(h_10, sym_Build_1))
        {
          i_10 = ATgetArgument(h_10, 0);
          a_10 :
          if(match_cons(j_10, sym_TCons_2))
            {
              k_10 = ATgetArgument(j_10, 0);
              o_10 = ATgetArgument(j_10, 1);
              b_10 :
              if(match_cons(k_10, sym_Prim_2))
                {
                  l_10 = ATgetArgument(k_10, 0);
                  f_10 = ATgetArgument(k_10, 1);
                  c_10 :
                  if(match_cons(o_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_10), not_null(f_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(k_10, sym_Where_1))
                    {
                      l_10 = ATgetArgument(k_10, 0);
                      d_10 :
                      if(match_cons(l_10, sym_Prim_2))
                        {
                          m_10 = ATgetArgument(l_10, 0);
                          n_10 = ATgetArgument(l_10, 1);
                          e_10 :
                          if(match_cons(o_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_10), not_null(n_10));
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
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  g_11 = t;
  z_10 :
  if(match_cons(g_11, sym_TCons_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      j_11 = ATgetArgument(g_11, 1);
      a_11 :
      if(match_cons(h_11, sym_Build_1))
        {
          i_11 = ATgetArgument(h_11, 0);
          b_11 :
          if(match_cons(j_11, sym_TCons_2))
            {
              k_11 = ATgetArgument(j_11, 0);
              n_11 = ATgetArgument(j_11, 1);
              c_11 :
              if(match_cons(k_11, sym_Build_1))
                {
                  l_11 = ATgetArgument(k_11, 0);
                  d_11 :
                  if(match_cons(n_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(k_11, sym_Where_1))
                    {
                      l_11 = ATgetArgument(k_11, 0);
                      e_11 :
                      if(match_cons(l_11, sym_Build_1))
                        {
                          m_11 = ATgetArgument(l_11, 0);
                          f_11 :
                          if(match_cons(n_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_11));
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
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  h_12 = t;
  a_12 :
  if(match_cons(h_12, sym_TCons_2))
    {
      i_12 = ATgetArgument(h_12, 0);
      m_12 = ATgetArgument(h_12, 1);
      b_12 :
      if(match_cons(i_12, sym_Build_1))
        {
          j_12 = ATgetArgument(i_12, 0);
          c_12 :
          if(match_cons(j_12, sym_Op_2))
            {
              k_12 = ATgetArgument(j_12, 0);
              l_12 = ATgetArgument(j_12, 1);
              d_12 :
              if(match_cons(m_12, sym_TCons_2))
                {
                  n_12 = ATgetArgument(m_12, 0);
                  r_12 = ATgetArgument(m_12, 1);
                  e_12 :
                  if(match_cons(n_12, sym_Match_1))
                    {
                      o_12 = ATgetArgument(n_12, 0);
                      f_12 :
                      if(match_cons(o_12, sym_Op_2))
                        {
                          p_12 = ATgetArgument(o_12, 0);
                          q_12 = ATgetArgument(o_12, 1);
                          g_12 :
                          if(match_cons(r_12, sym_TNil_0))
                            {
                              ATerm u_12 = NULL,x_14 = NULL;
                              if(k_12 != NULL && k_12 != p_12)
                                _fail(p_12);
                              else
                                k_12 = p_12;
                              if(u_12 != NULL && u_12 != q_12)
                                _fail(q_12);
                              else
                                u_12 = q_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
                                  v_12 = t;
                                  w_11 :
                                  if(match_cons(v_12, sym_TCons_2))
                                    {
                                      w_12 = ATgetArgument(v_12, 0);
                                      x_12 = ATgetArgument(v_12, 1);
                                      x_11 :
                                      if(match_cons(x_12, sym_TCons_2))
                                        {
                                          y_12 = ATgetArgument(x_12, 0);
                                          z_12 = ATgetArgument(x_12, 1);
                                          y_11 :
                                          if(match_cons(z_12, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_12)));
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
                                t = zip_1(t, n_0);
                                x_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_14)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_12), not_null(l_12))));
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
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  t_15 = t;
  q_15 :
  if(match_cons(t_15, sym_TCons_2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      r_15 :
      if(match_cons(v_15, sym_TCons_2))
        {
          w_15 = ATgetArgument(v_15, 0);
          x_15 = ATgetArgument(v_15, 1);
          s_15 :
          if(match_cons(x_15, sym_TNil_0))
            {
              if(u_15 != NULL && u_15 != w_15)
                _fail(w_15);
              else
                u_15 = w_15;
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
  ATerm i_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  i_16 = t;
  b_16 :
  if(match_cons(i_16, sym_TCons_2))
    {
      t_16 = ATgetArgument(i_16, 0);
      a_17 = ATgetArgument(i_16, 1);
      c_16 :
      if(match_cons(t_16, sym_Build_1))
        {
          u_16 = ATgetArgument(t_16, 0);
          d_16 :
          if(match_cons(u_16, sym_Op_2))
            {
              v_16 = ATgetArgument(u_16, 0);
              w_16 = ATgetArgument(u_16, 1);
              e_16 :
              if(match_cons(a_17, sym_TCons_2))
                {
                  b_17 = ATgetArgument(a_17, 0);
                  f_17 = ATgetArgument(a_17, 1);
                  f_16 :
                  if(match_cons(b_17, sym_Match_1))
                    {
                      c_17 = ATgetArgument(b_17, 0);
                      g_16 :
                      if(match_cons(c_17, sym_Op_2))
                        {
                          d_17 = ATgetArgument(c_17, 0);
                          e_17 = ATgetArgument(c_17, 1);
                          h_16 :
                          if(match_cons(f_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm h_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = h_8;
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
  ATerm j_8 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = j_8;
      {
        ATerm k_8 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = k_8;
            {
              ATerm l_8 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = l_8;
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
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  ATerm u_20 (ATerm t)
  {
    ATerm v_19 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    v_19 = t;
    t = not_null(v_19);
    return(t);
  }
  ATerm v_20 (ATerm t)
  {
    ATerm s_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    s_20 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_20), not_null(j_19));
    return(t);
  }
  f_19 = t;
  q_18 :
  if(match_cons(f_19, sym_Seq_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      r_18 :
      if(match_cons(h_19, sym_Seq_2))
        {
          i_19 = ATgetArgument(h_19, 0);
          j_19 = ATgetArgument(h_19, 1);
          {
            ATerm p_8 = t;
            if(PushChoice()==0)
              {
                t = u_20(t);
                PopChoice();
              }
            else
              {
                t = p_8;
                t = v_20(t);
              }
          }
        }
      else
        t = u_20(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,m_21 = NULL;
  d_21 = t;
  z_20 :
  if(match_cons(d_21, sym_Seq_2))
    {
      e_21 = ATgetArgument(d_21, 0);
      g_21 = ATgetArgument(d_21, 1);
      a_21 :
      if(match_cons(e_21, sym_Build_1))
        {
          f_21 = ATgetArgument(e_21, 0);
          b_21 :
          if(match_cons(g_21, sym_Seq_2))
            {
              h_21 = ATgetArgument(g_21, 0);
              m_21 = ATgetArgument(g_21, 1);
              c_21 :
              if(match_cons(h_21, sym_Build_1))
                {
                  i_21 = ATgetArgument(h_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_21)), not_null(m_21));
                }
              else
                _fail(t);
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
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  y_21 = t;
  w_21 :
  if(match_cons(y_21, sym_Scope_2))
    {
      z_21 = ATgetArgument(y_21, 0);
      a_22 = ATgetArgument(y_21, 1);
      x_21 :
      if(match_cons(a_22, sym_Scope_2))
        {
          b_22 = ATgetArgument(a_22, 0);
          c_22 = ATgetArgument(a_22, 1);
          {
            ATerm g_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            g_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_22), not_null(c_22));
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
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Var_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      t = not_null(n_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  v_22 = t;
  r_22 :
  if(match_cons(v_22, sym_TCons_2))
    {
      x_22 = ATgetArgument(v_22, 0);
      y_22 = ATgetArgument(v_22, 1);
      s_22 :
      if(match_cons(y_22, sym_TCons_2))
        {
          z_22 = ATgetArgument(y_22, 0);
          c_23 = ATgetArgument(y_22, 1);
          t_22 :
          if(match_cons(z_22, sym_Cons_2))
            {
              a_23 = ATgetArgument(z_22, 0);
              b_23 = ATgetArgument(z_22, 1);
              u_22 :
              if(match_cons(c_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_23), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm o_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,c_24 = NULL,d_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  o_23 = t;
  h_23 :
  if(match_cons(o_23, sym_TCons_2))
    {
      v_23 = ATgetArgument(o_23, 0);
      w_23 = ATgetArgument(o_23, 1);
      i_23 :
      if(match_cons(w_23, sym_TCons_2))
        {
          x_23 = ATgetArgument(w_23, 0);
          u_24 = ATgetArgument(w_23, 1);
          j_23 :
          if(match_cons(x_23, sym_Cons_2))
            {
              y_23 = ATgetArgument(x_23, 0);
              t_24 = ATgetArgument(x_23, 1);
              k_23 :
              if(match_cons(y_23, sym_TCons_2))
                {
                  c_24 = ATgetArgument(y_23, 0);
                  d_24 = ATgetArgument(y_23, 1);
                  l_23 :
                  if(match_cons(d_24, sym_TCons_2))
                    {
                      r_24 = ATgetArgument(d_24, 0);
                      s_24 = ATgetArgument(d_24, 1);
                      m_23 :
                      if(match_cons(s_24, sym_TNil_0))
                        {
                          n_23 :
                          if(match_cons(u_24, sym_TNil_0))
                            {
                              ATerm w_24 = NULL;
                              if(v_23 != NULL && v_23 != c_24)
                                _fail(c_24);
                              else
                                v_23 = c_24;
                              if(w_24 != NULL && w_24 != r_24)
                                _fail(r_24);
                              else
                                w_24 = r_24;
                              t = not_null(w_24);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm t_8 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = t_8;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm c_25 = NULL;
  ATerm g_25 = NULL;
  c_25 = t;
  {
    ATerm i_25 = NULL;
    t = l_83(t);
    g_25 = t;
    t = m_83(t);
    i_25 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm s_25 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = l_82(t);
        PopChoice();
      }
    else
      {
        t = y_8;
        t = _all(t, s_25);
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  a_26 = t;
  w_25 :
  if(match_cons(a_26, sym_TCons_2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      x_25 :
      if(match_cons(c_26, sym_TCons_2))
        {
          d_26 = ATgetArgument(c_26, 0);
          e_26 = ATgetArgument(c_26, 1);
          y_25 :
          if(match_cons(e_26, sym_TNil_0))
            {
              ATerm i_26 = NULL;
              if(i_26 != NULL && i_26 != d_26)
                _fail(d_26);
              else
                i_26 = d_26;
            }
          else
            {
              if(match_cons(e_26, sym_TCons_2))
                {
                  f_26 = ATgetArgument(e_26, 0);
                  g_26 = ATgetArgument(e_26, 1);
                  z_25 :
                  if(match_cons(g_26, sym_TNil_0))
                    {
                      ATerm o_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      o_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  t = subs_args_0(t);
  x_26 = t;
  u_26 :
  if(match_cons(x_26, sym_TCons_2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      v_26 :
      if(match_cons(z_26, sym_TCons_2))
        {
          a_27 = ATgetArgument(z_26, 0);
          b_27 = ATgetArgument(z_26, 1);
          w_26 :
          if(match_cons(b_27, sym_TNil_0))
            {
              t = not_null(a_27);
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm p_0 (ATerm t)
                  {
                    t = not_null(y_26);
                    return(t);
                  }
                  t = SubsVar_2(t, n_83, p_0);
                  t = o_83(t);
                  return(t);
                }
                t = alltd_1(t, o_0);
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
ATerm substitute_1 (ATerm t, ATerm p_83 (ATerm))
{
  t = substitute_2(t, p_83, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Cons_2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      t = d_74(t);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm n_27 = NULL;
          n_27 = t;
          if(j_27 != NULL && j_27 != n_27)
            _fail(n_27);
          else
            j_27 = n_27;
          return(t);
        }
        t = fetch_1(t, q_0);
        t = not_null(k_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  v_27 = t;
  r_27 :
  if(match_cons(v_27, sym_TCons_2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      s_27 :
      if(match_cons(x_27, sym_TCons_2))
        {
          y_27 = ATgetArgument(x_27, 0);
          b_28 = ATgetArgument(x_27, 1);
          t_27 :
          if(match_cons(y_27, sym_Cons_2))
            {
              z_27 = ATgetArgument(y_27, 0);
              a_28 = ATgetArgument(y_27, 1);
              u_27 :
              if(match_cons(b_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_27), not_null(w_27)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_28), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  w_28 = t;
  s_28 :
  if(match_cons(w_28, sym_Cons_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      c_29 = ATgetArgument(w_28, 1);
      t_28 :
      if(match_cons(x_28, sym_TCons_2))
        {
          y_28 = ATgetArgument(x_28, 0);
          z_28 = ATgetArgument(x_28, 1);
          u_28 :
          if(match_cons(z_28, sym_TCons_2))
            {
              a_29 = ATgetArgument(z_28, 0);
              b_29 = ATgetArgument(z_28, 1);
              v_28 :
              if(match_cons(b_29, sym_TNil_0))
                {
                  ATerm g_29 = NULL,h_29 = NULL,p_29 = NULL,x_29 = NULL;
                  ATerm z_8;
                  z_8 = t;
                  {
                    ATerm i_29 = NULL;
                    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
                    t = not_null(a_29);
                    i_29 = t;
                    t = SSL_explode_term(not_null(i_29));
                    k_29 = t;
                    j_28 :
                    if(match_cons(k_29, sym_TCons_2))
                      {
                        l_29 = ATgetArgument(k_29, 0);
                        m_29 = ATgetArgument(k_29, 1);
                        k_28 :
                        if(match_cons(m_29, sym_TCons_2))
                          {
                            n_29 = ATgetArgument(m_29, 0);
                            o_29 = ATgetArgument(m_29, 1);
                            l_28 :
                            if(match_cons(o_29, sym_TNil_0))
                              {
                                if(g_29 != NULL && g_29 != l_29)
                                  _fail(l_29);
                                else
                                  g_29 = l_29;
                                if(h_29 != NULL && h_29 != n_29)
                                  _fail(n_29);
                                else
                                  h_29 = n_29;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = z_8;
                  {
                    ATerm q_29 = NULL;
                    ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
                    t = not_null(y_28);
                    q_29 = t;
                    t = SSL_explode_term(not_null(q_29));
                    s_29 = t;
                    o_28 :
                    if(match_cons(s_29, sym_TCons_2))
                      {
                        t_29 = ATgetArgument(s_29, 0);
                        u_29 = ATgetArgument(s_29, 1);
                        p_28 :
                        if(match_cons(u_29, sym_TCons_2))
                          {
                            v_29 = ATgetArgument(u_29, 0);
                            w_29 = ATgetArgument(u_29, 1);
                            q_28 :
                            if(match_cons(w_29, sym_TNil_0))
                              {
                                if(g_29 != NULL && g_29 != t_29)
                                  _fail(t_29);
                                else
                                  g_29 = t_29;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    x_29 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  k_30 = t;
  g_30 :
  if(match_cons(k_30, sym_Cons_2))
    {
      l_30 = ATgetArgument(k_30, 0);
      q_30 = ATgetArgument(k_30, 1);
      h_30 :
      if(match_cons(l_30, sym_TCons_2))
        {
          m_30 = ATgetArgument(l_30, 0);
          n_30 = ATgetArgument(l_30, 1);
          i_30 :
          if(match_cons(n_30, sym_TCons_2))
            {
              o_30 = ATgetArgument(n_30, 0);
              p_30 = ATgetArgument(n_30, 1);
              j_30 :
              if(match_cons(p_30, sym_TNil_0))
                {
                  ATerm s_30 = NULL;
                  if(m_30 != NULL && m_30 != o_30)
                    _fail(o_30);
                  else
                    m_30 = o_30;
                  if(s_30 != NULL && s_30 != q_30)
                    _fail(q_30);
                  else
                    s_30 = q_30;
                  t = not_null(s_30);
                }
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm))
{
  ATerm u_30 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        t = n_68(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        t = o_68(t);
        t = u_30(t);
      }
    return(t);
  }
  t = u_30(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  t = q_68(t);
  t = while_not_2(t, r_68, s_68);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm i_9 = t;
  if(PushChoice()==0)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm a_31 = NULL;
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, u_0);
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm j_9 = t;
        if(PushChoice()==0)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                ATerm q_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = q_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, w_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_0);
            PopChoice();
          }
        else
          {
            t = j_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, r_0, s_0, t_0);
      PopChoice();
    }
  else
    {
      t = i_9;
      {
        ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
        c_31 = t;
        x_30 :
        if(match_cons(c_31, sym_TCons_2))
          {
            d_31 = ATgetArgument(c_31, 0);
            e_31 = ATgetArgument(c_31, 1);
            y_30 :
            if(match_cons(e_31, sym_TCons_2))
              {
                f_31 = ATgetArgument(e_31, 0);
                g_31 = ATgetArgument(e_31, 1);
                z_30 :
                if(match_cons(g_31, sym_TNil_0))
                  {
                    t = not_null(d_31);
                    {
                      ATerm l_31 (ATerm t)
                      {
                        ATerm r_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = r_9;
                            {
                              ATerm s_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm x_0 (ATerm t)
                                  {
                                    t = not_null(f_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, x_0);
                                  t = l_31(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = s_9;
                                  t = Cons_2(t, _id, l_31);
                                }
                            }
                          }
                        return(t);
                      }
                      t = l_31(t);
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
ATerm oncetd_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm m_31 (ATerm t)
  {
    ATerm t_9 = t;
    if(PushChoice()==0)
      {
        t = x_81(t);
        PopChoice();
      }
    else
      {
        t = t_9;
        t = _one(t, m_31);
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  s_31 = t;
  p_31 :
  if(match_cons(s_31, sym_TCons_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      q_31 :
      if(match_cons(u_31, sym_TCons_2))
        {
          v_31 = ATgetArgument(u_31, 0);
          w_31 = ATgetArgument(u_31, 1);
          r_31 :
          if(match_cons(w_31, sym_TNil_0))
            {
              t = not_null(v_31);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm z_31 = NULL;
                  z_31 = t;
                  if(t_31 != NULL && t_31 != z_31)
                    _fail(z_31);
                  else
                    t_31 = z_31;
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
ATerm Var_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Var_1))
    {
      g_32 = ATgetArgument(f_32, 0);
      {
        ATerm i_32 = NULL;
        t = not_null(g_32);
        t = v_60(t);
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  e_34 = t;
  c_33 :
  if(match_cons(e_34, sym_Seq_2))
    {
      f_34 = ATgetArgument(e_34, 0);
      i_34 = ATgetArgument(e_34, 1);
      d_33 :
      if(match_cons(f_34, sym_Build_1))
        {
          g_34 = ATgetArgument(f_34, 0);
          e_33 :
          if(match_cons(i_34, sym_Scope_2))
            {
              j_34 = ATgetArgument(i_34, 0);
              m_34 = ATgetArgument(i_34, 1);
              f_33 :
              if(match_cons(m_34, sym_Seq_2))
                {
                  y_33 = ATgetArgument(m_34, 0);
                  d_34 = ATgetArgument(m_34, 1);
                  g_33 :
                  if(match_cons(y_33, sym_Assign_1))
                    {
                      z_33 = ATgetArgument(y_33, 0);
                      h_33 :
                      if(match_cons(z_33, sym_Var_1))
                        {
                          a_34 = ATgetArgument(z_33, 0);
                          {
                            ATerm u_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm r_34 = NULL;
                                t = not_null(g_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm t_34 = NULL;
                                  t = diff_0(t);
                                  r_34 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  t_34 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_34), not_null(t_34)));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = u_9;
                                {
                                  ATerm z_34 = NULL;
                                  t = not_null(g_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm b_35 = NULL;
                                    t = diff_0(t);
                                    z_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = tsubs_0(t);
                                    b_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_34), not_null(b_35)));
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
          if(match_cons(f_34, sym_Assign_1))
            {
              g_34 = ATgetArgument(f_34, 0);
              i_33 :
              if(match_cons(g_34, sym_Var_1))
                {
                  h_34 = ATgetArgument(g_34, 0);
                  j_33 :
                  if(match_cons(i_34, sym_Seq_2))
                    {
                      j_34 = ATgetArgument(i_34, 0);
                      m_34 = ATgetArgument(i_34, 1);
                      k_33 :
                      if(match_cons(j_34, sym_Build_1))
                        {
                          k_34 = ATgetArgument(j_34, 0);
                          l_33 :
                          if(match_cons(k_34, sym_Var_1))
                            {
                              l_34 = ATgetArgument(k_34, 0);
                              {
                                ATerm d_36 = NULL;
                                if(h_34 != NULL && h_34 != l_34)
                                  _fail(l_34);
                                else
                                  h_34 = l_34;
                                if(d_36 != NULL && d_36 != m_34)
                                  _fail(m_34);
                                else
                                  d_36 = m_34;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_34))), not_null(d_36));
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
      if(match_cons(e_34, sym_Scope_2))
        {
          f_34 = ATgetArgument(e_34, 0);
          i_34 = ATgetArgument(e_34, 1);
          m_33 :
          if(match_cons(i_34, sym_Seq_2))
            {
              j_34 = ATgetArgument(i_34, 0);
              m_34 = ATgetArgument(i_34, 1);
              n_33 :
              if(match_cons(j_34, sym_Assign_2))
                {
                  k_34 = ATgetArgument(j_34, 0);
                  w_33 = ATgetArgument(j_34, 1);
                  o_33 :
                  if(match_cons(k_34, sym_Var_1))
                    {
                      l_34 = ATgetArgument(k_34, 0);
                      p_33 :
                      if(match_cons(w_33, sym_Var_1))
                        {
                          x_33 = ATgetArgument(w_33, 0);
                          {
                            ATerm i_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm k_35 = NULL;
                              t = diff_0(t);
                              i_35 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_33)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = tsubs_0(t);
                              k_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_35), not_null(k_35));
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
                  if(match_cons(j_34, sym_Assign_1))
                    {
                      k_34 = ATgetArgument(j_34, 0);
                      q_33 :
                      if(match_cons(k_34, sym_Var_1))
                        {
                          l_34 = ATgetArgument(k_34, 0);
                          r_33 :
                          if(match_cons(m_34, sym_Seq_2))
                            {
                              y_33 = ATgetArgument(m_34, 0);
                              d_34 = ATgetArgument(m_34, 1);
                              s_33 :
                              if(match_cons(y_33, sym_Assign_1))
                                {
                                  z_33 = ATgetArgument(y_33, 0);
                                  t_33 :
                                  if(match_cons(z_33, sym_Var_1))
                                    {
                                      a_34 = ATgetArgument(z_33, 0);
                                      {
                                        ATerm q_35 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm s_35 = NULL;
                                          t = diff_0(t);
                                          q_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = tsubs_0(t);
                                          s_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_34))), not_null(s_35)));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(y_33, sym_Assign_2))
                                    {
                                      z_33 = ATgetArgument(y_33, 0);
                                      b_34 = ATgetArgument(y_33, 1);
                                      u_33 :
                                      if(match_cons(z_33, sym_Var_1))
                                        {
                                          a_34 = ATgetArgument(z_33, 0);
                                          v_33 :
                                          if(match_cons(b_34, sym_Var_1))
                                            {
                                              c_34 = ATgetArgument(b_34, 0);
                                              {
                                                ATerm x_35 = NULL,y_35 = NULL;
                                                if(l_34 != NULL && l_34 != c_34)
                                                  _fail(c_34);
                                                else
                                                  l_34 = c_34;
                                                if(x_35 != NULL && x_35 != d_34)
                                                  _fail(d_34);
                                                else
                                                  x_35 = d_34;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm a_36 = NULL;
                                                  t = diff_0(t);
                                                  y_35 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = tsubs_0(t);
                                                  a_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_34))), not_null(a_36)));
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
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  x_36 = t;
  v_36 :
  if(match_cons(x_36, sym_Seq_2))
    {
      y_36 = ATgetArgument(x_36, 0);
      z_36 = ATgetArgument(x_36, 1);
      w_36 :
      if(match_cons(z_36, sym_Let_2))
        {
          a_37 = ATgetArgument(z_36, 0);
          b_37 = ATgetArgument(z_36, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_36), not_null(b_37)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm g_37 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, g_37);
        PopChoice();
      }
    else
      {
        t = v_9;
        t = Nil_0(t);
        t = e_78(t);
      }
    return(t);
  }
  t = g_37(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  l_37 = t;
  i_37 :
  if(match_cons(l_37, sym_TCons_2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      j_37 :
      if(match_cons(n_37, sym_TCons_2))
        {
          o_37 = ATgetArgument(n_37, 0);
          p_37 = ATgetArgument(n_37, 1);
          k_37 :
          if(match_cons(p_37, sym_TNil_0))
            {
              t = not_null(m_37);
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(o_37);
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
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  w_37 :
  if(match_cons(z_37, sym_TCons_2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      x_37 :
      if(match_cons(b_38, sym_TCons_2))
        {
          c_38 = ATgetArgument(b_38, 0);
          d_38 = ATgetArgument(b_38, 1);
          y_37 :
          if(match_cons(d_38, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_38), not_null(c_38));
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
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  r_38 = t;
  i_38 :
  if(match_cons(r_38, sym_TCons_2))
    {
      s_38 = ATgetArgument(r_38, 0);
      v_38 = ATgetArgument(r_38, 1);
      j_38 :
      if(match_cons(s_38, sym_Cons_2))
        {
          t_38 = ATgetArgument(s_38, 0);
          u_38 = ATgetArgument(s_38, 1);
          k_38 :
          if(match_cons(v_38, sym_TCons_2))
            {
              w_38 = ATgetArgument(v_38, 0);
              z_38 = ATgetArgument(v_38, 1);
              p_38 :
              if(match_cons(w_38, sym_Cons_2))
                {
                  x_38 = ATgetArgument(w_38, 0);
                  y_38 = ATgetArgument(w_38, 1);
                  q_38 :
                  if(match_cons(z_38, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(t_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_38), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_38), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  u_39 = t;
  p_39 :
  if(match_cons(u_39, sym_TCons_2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      q_39 :
      if(match_cons(v_39, sym_Nil_0))
        {
          r_39 :
          if(match_cons(w_39, sym_TCons_2))
            {
              x_39 = ATgetArgument(w_39, 0);
              y_39 = ATgetArgument(w_39, 1);
              s_39 :
              if(match_cons(x_39, sym_Nil_0))
                {
                  t_39 :
                  if(match_cons(y_39, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm a_40 (ATerm t)
  {
    ATerm w_9 = t;
    if(PushChoice()==0)
      {
        t = a_76(t);
        PopChoice();
      }
    else
      {
        t = w_9;
        t = b_76(t);
        {
          ATerm a_1 (ATerm t)
          {
            t = TCons_2(t, a_40, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_76, a_1);
          t = c_76(t);
        }
      }
    return(t);
  }
  t = a_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym_Cong_2))
    {
      a_41 = ATgetArgument(z_40, 0);
      b_41 = ATgetArgument(z_40, 1);
      {
        ATerm e_41 = NULL;
        t = not_null(b_41);
        {
          ATerm i_41 = NULL;
          t = map_1(t, new_0);
          e_41 = t;
          {
            ATerm k_41 = NULL;
            ATerm b_1 (ATerm t)
            {
              ATerm g_41 = NULL;
              g_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_41));
              return(t);
            }
            t = map_1(t, b_1);
            i_41 = t;
            t = not_null(b_41);
            {
              ATerm o_41 = NULL;
              t = map_1(t, new_0);
              k_41 = t;
              {
                ATerm q_41 = NULL;
                ATerm c_1 (ATerm t)
                {
                  ATerm m_41 = NULL;
                  m_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_41));
                  return(t);
                }
                t = map_1(t, c_1);
                o_41 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm e_42 = NULL;
                  t = zip_1(t, _id);
                  q_41 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm g_42 = NULL;
                    ATerm h_1 (ATerm t)
                    {
                      ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
                      s_41 = t;
                      q_40 :
                      if(match_cons(s_41, sym_TCons_2))
                        {
                          t_41 = ATgetArgument(s_41, 0);
                          y_41 = ATgetArgument(s_41, 1);
                          r_40 :
                          if(match_cons(t_41, sym_TCons_2))
                            {
                              u_41 = ATgetArgument(t_41, 0);
                              v_41 = ATgetArgument(t_41, 1);
                              s_40 :
                              if(match_cons(v_41, sym_TCons_2))
                                {
                                  w_41 = ATgetArgument(v_41, 0);
                                  x_41 = ATgetArgument(v_41, 1);
                                  t_40 :
                                  if(match_cons(x_41, sym_TNil_0))
                                    {
                                      u_40 :
                                      if(match_cons(y_41, sym_TCons_2))
                                        {
                                          z_41 = ATgetArgument(y_41, 0);
                                          a_42 = ATgetArgument(y_41, 1);
                                          v_40 :
                                          if(match_cons(a_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_41))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_41)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, h_1);
                    e_42 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    g_42 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_41), not_null(i_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_42)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_41), not_null(o_41))))));
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
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym_Cong_2))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      {
        ATerm j_43 = NULL;
        t = not_null(d_43);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm g_43 = NULL,h_43 = NULL;
            h_43 = t;
            y_42 :
            if(match_cons(h_43, sym_Match_1))
              {
                g_43 = ATgetArgument(h_43, 0);
                t = not_null(g_43);
              }
            else
              {
                if(match_cons(h_43, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_1);
          j_43 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_43), not_null(j_43)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  s_43 :
  if(match_cons(u_43, sym_Scope_2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      t_43 :
      if(match_cons(v_43, sym_Nil_0))
        t = not_null(w_43);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  o_44 = t;
  f_44 :
  if(match_cons(o_44, sym_Choice_2))
    {
      p_44 = ATgetArgument(o_44, 0);
      n_44 = ATgetArgument(o_44, 1);
      if(p_44 != NULL && p_44 != n_44)
        _fail(n_44);
      else
        p_44 = n_44;
      t = not_null(p_44);
    }
  else
    {
      if(match_cons(o_44, sym_LChoice_2))
        {
          p_44 = ATgetArgument(o_44, 0);
          n_44 = ATgetArgument(o_44, 1);
          if(p_44 != NULL && p_44 != n_44)
            _fail(n_44);
          else
            p_44 = n_44;
          t = not_null(p_44);
        }
      else
        {
          if(match_cons(o_44, sym_Where_1))
            {
              p_44 = ATgetArgument(o_44, 0);
              g_44 :
              if(match_cons(p_44, sym_Where_1))
                {
                  q_44 = ATgetArgument(p_44, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(q_44));
                }
              else
                {
                  if(match_cons(p_44, sym_Seq_2))
                    {
                      q_44 = ATgetArgument(p_44, 0);
                      s_44 = ATgetArgument(p_44, 1);
                      h_44 :
                      if(match_cons(q_44, sym_Where_1))
                        {
                          r_44 = ATgetArgument(q_44, 0);
                          i_44 :
                          if(match_cons(s_44, sym_Seq_2))
                            {
                              t_44 = ATgetArgument(s_44, 0);
                              v_44 = ATgetArgument(s_44, 1);
                              j_44 :
                              if(match_cons(t_44, sym_Build_1))
                                {
                                  u_44 = ATgetArgument(t_44, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_44)), not_null(v_44))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(o_44, sym_Not_1))
                {
                  p_44 = ATgetArgument(o_44, 0);
                  k_44 :
                  if(match_cons(p_44, sym_Not_1))
                    {
                      q_44 = ATgetArgument(p_44, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(q_44));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(o_44, sym_Test_1))
                    {
                      p_44 = ATgetArgument(o_44, 0);
                      m_44 :
                      if(match_cons(p_44, sym_Test_1))
                        {
                          q_44 = ATgetArgument(p_44, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(q_44));
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
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  k_46 = t;
  f_46 :
  if(match_cons(k_46, sym_Choice_2))
    {
      l_46 = ATgetArgument(k_46, 0);
      o_46 = ATgetArgument(k_46, 1);
      g_46 :
      if(match_cons(l_46, sym_Choice_2))
        {
          m_46 = ATgetArgument(l_46, 0);
          n_46 = ATgetArgument(l_46, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_46), (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_46), not_null(o_46)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(k_46, sym_Seq_2))
        {
          l_46 = ATgetArgument(k_46, 0);
          o_46 = ATgetArgument(k_46, 1);
          h_46 :
          if(match_cons(l_46, sym_Seq_2))
            {
              m_46 = ATgetArgument(l_46, 0);
              n_46 = ATgetArgument(l_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_46), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_46), not_null(o_46)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(k_46, sym_LChoice_2))
            {
              l_46 = ATgetArgument(k_46, 0);
              o_46 = ATgetArgument(k_46, 1);
              i_46 :
              if(match_cons(l_46, sym_LChoice_2))
                {
                  m_46 = ATgetArgument(l_46, 0);
                  n_46 = ATgetArgument(l_46, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_46), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_46), not_null(o_46)));
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
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  n_48 = t;
  h_48 :
  if(match_cons(n_48, sym_Seqs_1))
    {
      o_48 = ATgetArgument(n_48, 0);
      i_48 :
      if(match_cons(o_48, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(o_48, sym_Cons_2))
            {
              l_48 = ATgetArgument(o_48, 0);
              m_48 = ATgetArgument(o_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_48)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(n_48, sym_Choices_1))
        {
          o_48 = ATgetArgument(n_48, 0);
          j_48 :
          if(match_cons(o_48, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(o_48, sym_Cons_2))
                {
                  l_48 = ATgetArgument(o_48, 0);
                  m_48 = ATgetArgument(o_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_48)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(n_48, sym_LChoices_1))
            {
              o_48 = ATgetArgument(n_48, 0);
              k_48 :
              if(match_cons(o_48, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(o_48, sym_Cons_2))
                    {
                      l_48 = ATgetArgument(o_48, 0);
                      m_48 = ATgetArgument(o_48, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_48)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(n_48, sym_Lets_2))
                {
                  o_48 = ATgetArgument(n_48, 0);
                  p_48 = ATgetArgument(n_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_48), not_null(p_48));
                }
              else
                {
                  if(match_cons(n_48, sym_BA_2))
                    {
                      o_48 = ATgetArgument(n_48, 0);
                      p_48 = ATgetArgument(n_48, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_48)), not_null(o_48));
                    }
                  else
                    {
                      if(match_cons(n_48, sym_MA_2))
                        {
                          o_48 = ATgetArgument(n_48, 0);
                          p_48 = ATgetArgument(n_48, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_48)), not_null(p_48));
                        }
                      else
                        {
                          if(match_cons(n_48, sym_AM_2))
                            {
                              o_48 = ATgetArgument(n_48, 0);
                              p_48 = ATgetArgument(n_48, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_48)));
                            }
                          else
                            {
                              if(match_cons(n_48, sym_BAM_3))
                                {
                                  o_48 = ATgetArgument(n_48, 0);
                                  p_48 = ATgetArgument(n_48, 1);
                                  q_48 = ATgetArgument(n_48, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_48)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_48)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(n_48, sym_InfixApp_3))
                                    {
                                      o_48 = ATgetArgument(n_48, 0);
                                      p_48 = ATgetArgument(n_48, 1);
                                      q_48 = ATgetArgument(n_48, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_48), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm a_50 = NULL,b_50 = NULL;
  a_50 = t;
  y_49 :
  if(match_cons(a_50, sym_Where_1))
    {
      b_50 = ATgetArgument(a_50, 0);
      z_49 :
      if(match_cons(b_50, sym_Fail_0))
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
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  e_50 :
  if(match_cons(g_50, sym_LChoice_2))
    {
      h_50 = ATgetArgument(g_50, 0);
      i_50 = ATgetArgument(g_50, 1);
      f_50 :
      if(match_cons(i_50, sym_Fail_0))
        t = not_null(h_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  m_50 :
  if(match_cons(o_50, sym_LChoice_2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      n_50 :
      if(match_cons(p_50, sym_Fail_0))
        t = not_null(q_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  u_50 :
  if(match_cons(w_50, sym_Choice_2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      v_50 :
      if(match_cons(y_50, sym_Fail_0))
        t = not_null(x_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  e_51 = t;
  c_51 :
  if(match_cons(e_51, sym_Choice_2))
    {
      f_51 = ATgetArgument(e_51, 0);
      g_51 = ATgetArgument(e_51, 1);
      d_51 :
      if(match_cons(f_51, sym_Fail_0))
        t = not_null(g_51);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym_Cong_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      t = not_null(o_51);
      {
        ATerm j_1 (ATerm t)
        {
          ATerm r_51 = NULL;
          r_51 = t;
          k_51 :
          if(!(match_cons(r_51, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, j_1);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
  w_51 = t;
  u_51 :
  if(match_cons(w_51, sym_Path_2))
    {
      x_51 = ATgetArgument(w_51, 0);
      y_51 = ATgetArgument(w_51, 1);
      v_51 :
      if(match_cons(y_51, sym_Fail_0))
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
  ATerm e_52 = NULL,f_52 = NULL;
  e_52 = t;
  c_52 :
  if(match_cons(e_52, sym_One_1))
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
ATerm F7_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  k_52 = t;
  i_52 :
  if(match_cons(k_52, sym_Some_1))
    {
      l_52 = ATgetArgument(k_52, 0);
      j_52 :
      if(match_cons(l_52, sym_Fail_0))
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_cons(q_52, sym_Rec_2))
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
ATerm F5_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  w_52 :
  if(match_cons(y_52, sym_Scope_2))
    {
      z_52 = ATgetArgument(y_52, 0);
      a_53 = ATgetArgument(y_52, 1);
      x_52 :
      if(match_cons(a_53, sym_Fail_0))
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
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  e_53 :
  if(match_cons(g_53, sym_Seq_2))
    {
      h_53 = ATgetArgument(g_53, 0);
      i_53 = ATgetArgument(g_53, 1);
      f_53 :
      if(match_cons(h_53, sym_Fail_0))
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
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  m_53 :
  if(match_cons(o_53, sym_Not_1))
    {
      p_53 = ATgetArgument(o_53, 0);
      n_53 :
      if(match_cons(p_53, sym_Fail_0))
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
  ATerm u_53 = NULL,v_53 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_Test_1))
    {
      v_53 = ATgetArgument(u_53, 0);
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm x_9 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = x_9;
      {
        ATerm p_10 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = p_10;
            {
              ATerm q_10 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_10;
                  {
                    ATerm r_10 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm s_10 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm t_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_10;
                                    {
                                      ATerm u_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_10;
                                          {
                                            ATerm v_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_10;
                                                {
                                                  ATerm w_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      {
                                                        ATerm x_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = x_10;
                                                            {
                                                              ATerm y_10 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = y_10;
                                                                  {
                                                                    ATerm o_11 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_11;
                                                                        {
                                                                          ATerm p_11 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_11;
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
  ATerm a_54 = NULL,b_54 = NULL;
  a_54 = t;
  y_53 :
  if(match_cons(a_54, sym_Match_1))
    {
      b_54 = ATgetArgument(a_54, 0);
      z_53 :
      if(match_cons(b_54, sym_Wld_0))
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
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  e_54 :
  if(match_cons(g_54, sym_Where_1))
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
ATerm I10_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  m_54 = t;
  k_54 :
  if(match_cons(m_54, sym_All_1))
    {
      n_54 = ATgetArgument(m_54, 0);
      l_54 :
      if(match_cons(n_54, sym_Id_0))
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
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  q_54 :
  if(match_cons(s_54, sym_Rec_2))
    {
      t_54 = ATgetArgument(s_54, 0);
      u_54 = ATgetArgument(s_54, 1);
      r_54 :
      if(match_cons(u_54, sym_Id_0))
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
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  y_54 :
  if(match_cons(a_55, sym_Scope_2))
    {
      b_55 = ATgetArgument(a_55, 0);
      c_55 = ATgetArgument(a_55, 1);
      z_54 :
      if(match_cons(c_55, sym_Id_0))
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
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  i_55 = t;
  g_55 :
  if(match_cons(i_55, sym_LChoice_2))
    {
      j_55 = ATgetArgument(i_55, 0);
      k_55 = ATgetArgument(i_55, 1);
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
ATerm I4_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  o_55 :
  if(match_cons(q_55, sym_Seq_2))
    {
      r_55 = ATgetArgument(q_55, 0);
      s_55 = ATgetArgument(q_55, 1);
      p_55 :
      if(match_cons(s_55, sym_Id_0))
        t = not_null(r_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  w_55 :
  if(match_cons(y_55, sym_Seq_2))
    {
      z_55 = ATgetArgument(y_55, 0);
      a_56 = ATgetArgument(y_55, 1);
      x_55 :
      if(match_cons(z_55, sym_Id_0))
        t = not_null(a_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  g_56 = t;
  e_56 :
  if(match_cons(g_56, sym_Not_1))
    {
      h_56 = ATgetArgument(g_56, 0);
      f_56 :
      if(match_cons(h_56, sym_Id_0))
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
  ATerm m_56 = NULL,n_56 = NULL;
  m_56 = t;
  k_56 :
  if(match_cons(m_56, sym_Test_1))
    {
      n_56 = ATgetArgument(m_56, 0);
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
ATerm ElimId_0 (ATerm t)
{
  ATerm q_11 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = q_11;
      {
        ATerm r_11 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = r_11;
            {
              ATerm s_11 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = s_11;
                  {
                    ATerm t_11 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = t_11;
                        {
                          ATerm u_11 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = u_11;
                              {
                                ATerm v_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_11;
                                    {
                                      ATerm z_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_11;
                                          {
                                            ATerm s_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = s_12;
                                                {
                                                  ATerm t_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_12;
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
  ATerm a_13 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = a_13;
      {
        ATerm b_13 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = b_13;
            {
              ATerm c_13 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_13;
                  {
                    ATerm d_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = d_13;
                        {
                          ATerm e_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_13;
                              {
                                ATerm f_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_13;
                                    {
                                      ATerm g_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_13;
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
  ATerm h_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = h_13;
      {
        ATerm i_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = i_13;
            {
              ATerm j_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = j_13;
                  {
                    ATerm k_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = k_13;
                        {
                          ATerm l_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm m_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_13;
                                    {
                                      ATerm n_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_13;
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
ATerm repeat_2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm p_56 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = w_67(t);
        t = p_56(t);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = x_67(t);
      }
    return(t);
  }
  t = p_56(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_67 (ATerm))
{
  t = repeat_2(t, z_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm q_56 (ATerm t)
  {
    t = l_80(t);
    t = _all(t, q_56);
    t = l_80(t);
    return(t);
  }
  t = q_56(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      ATerm p_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = p_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, t_1);
    return(t);
  }
  t = downup_1(t, k_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,a_57 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym_SDef_3))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      a_57 = ATgetArgument(w_56, 2);
      {
        ATerm e_57 = NULL;
        t = not_null(x_56);
        {
          ATerm g_57 = NULL;
          t = o_61(t);
          e_57 = t;
          t = not_null(y_56);
          {
            ATerm i_57 = NULL;
            t = p_61(t);
            g_57 = t;
            t = not_null(a_57);
            t = q_61(t);
            i_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_57), not_null(g_57), not_null(i_57));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm o_57 (ATerm t)
  {
    ATerm q_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = q_13;
        t = Cons_2(t, q_77, o_57);
      }
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm s_57 = NULL,t_57 = NULL;
  s_57 = t;
  r_57 :
  if(match_cons(s_57, sym_Strategies_1))
    {
      t_57 = ATgetArgument(s_57, 0);
      {
        ATerm v_57 = NULL;
        t = not_null(t_57);
        t = j_60(t);
        v_57 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_57));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm c_58 = NULL,d_58 = NULL;
  c_58 = t;
  b_58 :
  if(match_cons(c_58, sym_Specification_1))
    {
      d_58 = ATgetArgument(c_58, 0);
      {
        ATerm f_58 = NULL;
        t = not_null(d_58);
        t = l_60(t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(f_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm c_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, f_85);
            return(t);
          }
          t = map_1(t, c_2);
          return(t);
        }
        t = Strategies_1(t, y_1);
        return(t);
      }
      t = Cons_2(t, x_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, v_1);
    return(t);
  }
  t = Specification_1(t, u_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  j_58 :
  if(!(match_cons(k_58, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  p_58 = t;
  o_58 :
  if(match_cons(p_58, sym_TCons_2))
    {
      q_58 = ATgetArgument(p_58, 0);
      r_58 = ATgetArgument(p_58, 1);
      {
        ATerm u_58 = NULL;
        t = not_null(q_58);
        {
          ATerm w_58 = NULL;
          t = t_62(t);
          u_58 = t;
          t = not_null(r_58);
          t = u_62(t);
          w_58 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_58), not_null(w_58));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_59 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm e_59 = NULL,f_59 = NULL;
      e_59 = t;
      c_59 :
      if(match_cons(e_59, sym_Program_1))
        {
          f_59 = ATgetArgument(e_59, 0);
          if(d_59 != NULL && d_59 != f_59)
            _fail(f_59);
          else
            d_59 = f_59;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, e_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = r_13;
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
  ATerm i_59 = NULL;
  i_59 = t;
  t = SSL_exit(not_null(i_59));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
  p_59 = t;
  m_59 :
  if(match_cons(p_59, sym_TCons_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      n_59 :
      if(match_cons(r_59, sym_TCons_2))
        {
          s_59 = ATgetArgument(r_59, 0);
          t_59 = ATgetArgument(r_59, 1);
          o_59 :
          if(match_cons(t_59, sym_TNil_0))
            {
              ATerm s_13;
              s_13 = t;
              t = SSL_printnl(not_null(q_59), not_null(s_59));
              t = s_13;
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
ATerm try_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm t_13 = t;
  if(PushChoice()==0)
    {
      t = w_79(t);
      PopChoice();
    }
  else
    t = t_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm u_13 = t;
      if(PushChoice()==0)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm f_60 = NULL;
            f_60 = t;
            x_59 :
            if(!(match_cons(f_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_2);
          PopChoice();
          _fail(t);
        }
      else
        t = u_13;
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_2, h_2);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          ATerm g_60 = NULL,h_60 = NULL;
          g_60 = t;
          a_60 :
          if(match_cons(g_60, sym_Runtime_1))
            {
              h_60 = ATgetArgument(g_60, 0);
              if(e_60 != NULL && e_60 != h_60)
                _fail(h_60);
              else
                e_60 = h_60;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_2);
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, j_2, o_2);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm i_60 = NULL,k_60 = NULL;
            i_60 = t;
            c_60 :
            if(match_cons(i_60, sym_Program_1))
              {
                k_60 = ATgetArgument(i_60, 0);
                if(d_60 != NULL && d_60 != k_60)
                  _fail(k_60);
                else
                  d_60 = k_60;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_2);
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, r_2, t_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, f_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,w_60 = NULL,x_60 = NULL;
  s_60 = t;
  p_60 :
  if(match_cons(s_60, sym_TCons_2))
    {
      t_60 = ATgetArgument(s_60, 0);
      u_60 = ATgetArgument(s_60, 1);
      q_60 :
      if(match_cons(u_60, sym_TCons_2))
        {
          w_60 = ATgetArgument(u_60, 0);
          x_60 = ATgetArgument(u_60, 1);
          r_60 :
          if(match_cons(x_60, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(t_60), not_null(w_60));
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
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  f_61 = t;
  c_61 :
  if(match_cons(f_61, sym_TCons_2))
    {
      g_61 = ATgetArgument(f_61, 0);
      h_61 = ATgetArgument(f_61, 1);
      d_61 :
      if(match_cons(h_61, sym_TCons_2))
        {
          i_61 = ATgetArgument(h_61, 0);
          j_61 = ATgetArgument(h_61, 1);
          e_61 :
          if(match_cons(j_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(g_61), not_null(i_61));
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
  ATerm v_13;
  v_13 = t;
  {
    ATerm v_2 (ATerm t)
    {
      ATerm w_13 = t;
      if(PushChoice()==0)
        {
          ATerm x_2 (ATerm t)
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
          t = option_defined_1(t, x_2);
          PopChoice();
        }
      else
        {
          t = w_13;
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
    ATerm w_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, v_2, w_2);
  }
  t = v_13;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          t = not_null(u_61);
          return(t);
        }
        t = split_2(t, d_3, _id);
        return(t);
      }
      t = TCons_2(t, c_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_3);
    {
      ATerm x_13 = t;
      if(PushChoice()==0)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm y_61 = NULL;
              y_61 = t;
              t_61 :
              if(!(match_cons(y_61, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, o_3);
            return(t);
          }
          ATerm n_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_3, n_3);
          PopChoice();
        }
      else
        {
          t = x_13;
          {
            ATerm p_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, p_3);
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
ATerm apply_strategy_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm g_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
  ATerm y_13;
  y_13 = t;
  t = dtime_0(t);
  t = y_13;
  t = z_65(t);
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm h_62 = NULL;
      t = dtime_0(t);
      h_62 = t;
      if(g_62 != NULL && g_62 != h_62)
        _fail(h_62);
      else
        g_62 = h_62;
    }
    t = z_13;
    i_62 = t;
    d_62 :
    if(match_cons(i_62, sym_TCons_2))
      {
        j_62 = ATgetArgument(i_62, 0);
        k_62 = ATgetArgument(i_62, 1);
        e_62 :
        if(match_cons(k_62, sym_TCons_2))
          {
            l_62 = ATgetArgument(k_62, 0);
            m_62 = ATgetArgument(k_62, 1);
            f_62 :
            if(match_cons(m_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_62)), not_null(j_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_62 = NULL;
  w_62 = t;
  t = SSL_ReadFromFile(not_null(w_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm e_63 = NULL;
  ATerm g_63 = NULL;
  e_63 = t;
  {
    ATerm i_63 = NULL;
    t = e_79(t);
    g_63 = t;
    t = not_null(e_63);
    t = f_79(t);
    i_63 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_63), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_63 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm b_14 = t;
    if(PushChoice()==0)
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_63 = NULL,s_63 = NULL;
          r_63 = t;
          o_63 :
          if(match_cons(r_63, sym_Input_1))
            {
              s_63 = ATgetArgument(r_63, 0);
              if(q_63 != NULL && q_63 != s_63)
                _fail(s_63);
              else
                q_63 = s_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_3);
        PopChoice();
      }
    else
      {
        t = b_14;
        {
          ATerm t_63 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          t_63 = t;
          if(q_63 != NULL && q_63 != t_63)
            _fail(t_63);
          else
            q_63 = t_63;
        }
      }
  }
  t = a_14;
  {
    ATerm r_3 (ATerm t)
    {
      t = not_null(q_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  w_63 :
  if(!(match_cons(x_63, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_56 (ATerm))
{
  ATerm b_64 = NULL,c_64 = NULL;
  b_64 = t;
  a_64 :
  if(match_cons(b_64, sym_Undefined_1))
    {
      c_64 = ATgetArgument(b_64, 0);
      {
        ATerm e_64 = NULL;
        t = not_null(c_64);
        t = z_56(t);
        e_64 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_64));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_64 = NULL;
  j_64 = t;
  i_64 :
  if(!(match_cons(j_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm k_64 (ATerm t)
  {
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, y_77, _id);
        PopChoice();
      }
    else
      {
        t = c_14;
        t = Cons_2(t, _id, k_64);
      }
    return(t);
  }
  t = k_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_65 (ATerm))
{
  t = fetch_1(t, d_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm d_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = d_14;
        {
          ATerm e_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = e_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_3);
  t = y_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL;
  ATerm f_14;
  f_14 = t;
  {
    ATerm t_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,e_65 = NULL,g_65 = NULL,h_65 = NULL;
    t_64 = t;
    m_64 :
    if(match_cons(t_64, sym_TCons_2))
      {
        a_65 = ATgetArgument(t_64, 0);
        b_65 = ATgetArgument(t_64, 1);
        n_64 :
        if(match_cons(b_65, sym_TCons_2))
          {
            c_65 = ATgetArgument(b_65, 0);
            e_65 = ATgetArgument(b_65, 1);
            o_64 :
            if(match_cons(e_65, sym_TCons_2))
              {
                g_65 = ATgetArgument(e_65, 0);
                h_65 = ATgetArgument(e_65, 1);
                p_64 :
                if(match_cons(h_65, sym_TNil_0))
                  {
                    if(q_64 != NULL && q_64 != a_65)
                      _fail(a_65);
                    else
                      q_64 = a_65;
                    if(r_64 != NULL && r_64 != c_65)
                      _fail(c_65);
                    else
                      r_64 = c_65;
                    if(s_64 != NULL && s_64 != g_65)
                      _fail(g_65);
                    else
                      s_64 = g_65;
                    t = SSL_table_put(not_null(q_64), not_null(r_64), not_null(s_64));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = f_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_65 = NULL;
  m_65 = t;
  t = SSL_table_create(not_null(m_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_65 = NULL;
  t_65 = t;
  {
    ATerm g_14;
    g_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_65), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = g_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  a_66 :
  if(match_cons(b_66, sym_Cons_2))
    {
      c_66 = ATgetArgument(b_66, 0);
      d_66 = ATgetArgument(b_66, 1);
      {
        ATerm g_66 = NULL;
        t = not_null(c_66);
        t = w_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = x_64(t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_66), not_null(d_66));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
  o_66 = t;
  m_66 :
  if(match_cons(o_66, sym_Cons_2))
    {
      p_66 = ATgetArgument(o_66, 0);
      q_66 = ATgetArgument(o_66, 1);
      n_66 :
      if(match_cons(q_66, sym_Cons_2))
        {
          r_66 = ATgetArgument(q_66, 0);
          s_66 = ATgetArgument(q_66, 1);
          {
            ATerm w_66 = NULL;
            t = not_null(p_66);
            t = y_64(t);
            t = not_null(r_66);
            t = z_64(t);
            w_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_66), not_null(s_66));
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
  ATerm h_14 = t;
  if(PushChoice()==0)
    {
      ATerm t_3 (ATerm t)
      {
        ATerm u_67 = NULL;
        u_67 = t;
        a_67 :
        if(!(match_string(u_67, "-S")))
          _fail(t);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, t_3, u_3);
      PopChoice();
    }
  else
    {
      t = h_14;
      {
        ATerm i_14 = t;
        if(PushChoice()==0)
          {
            ATerm y_3 (ATerm t)
            {
              ATerm v_67 = NULL;
              v_67 = t;
              b_67 :
              if(!(match_string(v_67, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, y_3, z_3);
            PopChoice();
          }
        else
          {
            t = i_14;
            {
              ATerm j_14 = t;
              if(PushChoice()==0)
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm a_68 = NULL;
                    a_68 = t;
                    c_67 :
                    if(!(match_string(a_68, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, a_4, j_4);
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
                          ATerm b_68 = NULL;
                          b_68 = t;
                          d_67 :
                          if(!(match_string(b_68, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, k_4, l_4);
                        PopChoice();
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm l_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm c_68 = NULL;
                                c_68 = t;
                                e_67 :
                                if(!(match_string(c_68, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, n_4, o_4);
                              PopChoice();
                            }
                          else
                            {
                              t = l_14;
                              {
                                ATerm m_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm d_68 = NULL;
                                      d_68 = t;
                                      f_67 :
                                      if(!(match_string(d_68, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      ATerm e_68 = NULL;
                                      e_68 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(e_68));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, p_4, u_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_14;
                                    {
                                      ATerm n_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm v_4 (ATerm t)
                                          {
                                            ATerm g_68 = NULL;
                                            g_68 = t;
                                            h_67 :
                                            if(!(match_string(g_68, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_4 (ATerm t)
                                          {
                                            ATerm h_68 = NULL;
                                            h_68 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_68));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, v_4, x_4);
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
                                                  ATerm j_68 = NULL;
                                                  j_68 = t;
                                                  j_67 :
                                                  if(!(match_string(j_68, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm a_5 (ATerm t)
                                                {
                                                  ATerm k_68 = NULL;
                                                  k_68 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_68));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, z_4, a_5);
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
                                                        ATerm m_68 = NULL;
                                                        m_68 = t;
                                                        l_67 :
                                                        if(!(match_string(m_68, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm c_5 (ATerm t)
                                                      {
                                                        ATerm t_68 = NULL;
                                                        t_68 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_68));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, b_5, c_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = p_14;
                                                      {
                                                        ATerm q_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm d_5 (ATerm t)
                                                            {
                                                              ATerm v_68 = NULL;
                                                              v_68 = t;
                                                              n_67 :
                                                              if(!(match_string(v_68, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm e_5 (ATerm t)
                                                            {
                                                              ATerm w_68 = NULL;
                                                              w_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_68));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, d_5, e_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_14;
                                                            {
                                                              ATerm r_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm f_5 (ATerm t)
                                                                  {
                                                                    ATerm y_68 = NULL;
                                                                    y_68 = t;
                                                                    p_67 :
                                                                    if(!(match_string(y_68, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, f_5, k_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = r_14;
                                                                  {
                                                                    ATerm s_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm n_5 (ATerm t)
                                                                        {
                                                                          ATerm z_68 = NULL;
                                                                          z_68 = t;
                                                                          q_67 :
                                                                          if(!(match_string(z_68, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm t_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, n_5, t_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_14;
                                                                        {
                                                                          ATerm t_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm u_5 (ATerm t)
                                                                              {
                                                                                ATerm a_69 = NULL;
                                                                                a_69 = t;
                                                                                r_67 :
                                                                                if(!(match_string(a_69, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm v_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, u_5, v_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_14;
                                                                              {
                                                                                ATerm u_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm w_5 (ATerm t)
                                                                                    {
                                                                                      ATerm b_69 = NULL;
                                                                                      b_69 = t;
                                                                                      s_67 :
                                                                                      if(!(match_string(b_69, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm a_6 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, w_5, a_6);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_14;
                                                                                    {
                                                                                      ATerm b_6 (ATerm t)
                                                                                      {
                                                                                        ATerm c_69 = NULL;
                                                                                        c_69 = t;
                                                                                        t_67 :
                                                                                        if(!(match_string(c_69, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm c_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, b_6, c_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  j_69 :
  if(match_cons(k_69, sym_Cons_2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_69)), not_null(m_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym_Cons_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        ATerm d_70 = NULL;
        t = not_null(v_69);
        {
          ATerm f_70 = NULL;
          t = x_62(t);
          d_70 = t;
          t = not_null(w_69);
          t = y_62(t);
          f_70 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_70), not_null(f_70));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm l_70 = NULL;
  l_70 = t;
  k_70 :
  if(!(match_cons(l_70, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm n_70 = NULL;
    n_70 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_70));
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm v_14 = t;
    if(PushChoice()==0)
      {
        ATerm w_14 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = w_14;
            t = u_64(t);
            t = Cons_2(t, _id, e_6);
          }
        PopChoice();
      }
    else
      {
        t = v_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, d_6, e_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm y_14 = t;
    if(PushChoice()==0)
      {
        t = o_65(t);
        PopChoice();
      }
    else
      {
        t = y_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_6);
  t = store_options_0(t);
  {
    ATerm z_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, p_65);
        PopChoice();
      }
    else
      {
        t = z_14;
        {
          ATerm a_15 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, n_65);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = a_15;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  t = iowrap_3(t, i_65, j_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      t = TCons_2(t, f_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_6);
    return(t);
  }
  t = iowrap_2(t, k_6, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_clean_0(t);
      return(t);
    }
    t = apply_to_bodies_1(t, q_6);
    return(t);
  }
  t = iowrap_1(t, o_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
