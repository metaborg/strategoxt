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
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_80 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
                  ATerm s_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = s_6;
                      {
                        ATerm u_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm v_6;
                            v_6 = t;
                            {
                              ATerm b_0 (ATerm t)
                              {
                                t = not_null(r_1);
                                return(t);
                              }
                              t = HdMember_1(t, b_0);
                            }
                            t = v_6;
                            t = Cons_2(t, _id, w_1);
                            PopChoice();
                          }
                        else
                          {
                            t = u_6;
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
  ATerm w_6 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, g_84, e_84);
      PopChoice();
    }
  else
    {
      t = w_6;
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
                  ATerm x_6 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(h_4);
                      PopChoice();
                    }
                  else
                    {
                      t = x_6;
                      {
                        ATerm y_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm c_0 (ATerm t)
                            {
                              t = not_null(h_4);
                              return(t);
                            }
                            t = HdMember_1(t, c_0);
                            t = m_4(t);
                            PopChoice();
                          }
                        else
                          {
                            t = y_6;
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
  ATerm a_7 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = y_72(t);
      PopChoice();
    }
  else
    {
      t = a_7;
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
    ATerm b_7 = t;
    if(PushChoice()==0)
      {
        t = y_69(t);
        PopChoice();
      }
    else
      {
        t = b_7;
        {
          ATerm n_7 = t;
          if(PushChoice()==0)
            {
              ATerm x_5 = NULL;
              ATerm o_7;
              o_7 = t;
              {
                ATerm y_5 = NULL;
                t = z_69(t);
                y_5 = t;
                if(x_5 != NULL && x_5 != y_5)
                  _fail(y_5);
                else
                  x_5 = y_5;
              }
              t = o_7;
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = not_null(x_5);
                    return(t);
                  }
                  t = split_2(t, z_5, f_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm e_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = a_70(t, d_0, z_5, e_0);
                {
                  ATerm g_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, g_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = n_7;
              {
                ATerm h_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, h_0, union_0, z_5);
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
  ATerm i_0 (ATerm t)
  {
    ATerm p_7 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = p_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, i_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  h_6 = t;
  f_6 :
  if(match_cons(h_6, sym_Scope_2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      g_6 :
      if(match_cons(j_6, sym_Seq_2))
        {
          k_6 = ATgetArgument(j_6, 0);
          l_6 = ATgetArgument(j_6, 1);
          {
            ATerm p_6 = NULL;
            t = not_null(k_6);
            {
              ATerm r_6 = NULL;
              t = tvars_0(t);
              p_6 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_6), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm t_6 = NULL;
                t = isect_0(t);
                r_6 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_6), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = diff_0(t);
                t_6 = t;
                {
                  ATerm q_7 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = q_7;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_6), not_null(l_6))));
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
ATerm topdown_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    t = h_80(t);
    t = _all(t, z_6);
    return(t);
  }
  t = z_6(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, j_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  ATerm t_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_7), not_null(k_7)));
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_7), not_null(m_7)));
    return(t);
  }
  i_7 = t;
  c_7 :
  if(match_cons(i_7, sym_Seq_2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      d_7 :
      if(match_cons(k_7, sym_Scope_2))
        {
          l_7 = ATgetArgument(k_7, 0);
          m_7 = ATgetArgument(k_7, 1);
          e_7 :
          if(match_cons(j_7, sym_Scope_2))
            {
              g_7 = ATgetArgument(j_7, 0);
              h_7 = ATgetArgument(j_7, 1);
              {
                ATerm r_7 = t;
                if(PushChoice()==0)
                  {
                    t = t_7(t);
                    PopChoice();
                  }
                else
                  {
                    t = r_7;
                    t = u_7(t);
                  }
              }
            }
          else
            t = u_7(t);
        }
      else
        {
          f_7 :
          if(match_cons(j_7, sym_Scope_2))
            {
              g_7 = ATgetArgument(j_7, 0);
              h_7 = ATgetArgument(j_7, 1);
              t = t_7(t);
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
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  b_8 = t;
  w_7 :
  if(match_cons(b_8, sym_Let_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      i_8 = ATgetArgument(b_8, 1);
      x_7 :
      if(match_cons(c_8, sym_Cons_2))
        {
          d_8 = ATgetArgument(c_8, 0);
          h_8 = ATgetArgument(c_8, 1);
          y_7 :
          if(match_cons(d_8, sym_SDef_3))
            {
              e_8 = ATgetArgument(d_8, 0);
              f_8 = ATgetArgument(d_8, 1);
              g_8 = ATgetArgument(d_8, 2);
              z_7 :
              if(match_cons(f_8, sym_Nil_0))
                {
                  a_8 :
                  if(match_cons(h_8, sym_Nil_0))
                    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_4, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DontInline_0), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(e_8), (ATerm)ATmakeAppl(sym_Nil_0), not_null(g_8)), (ATerm) ATmakeAppl(sym_Nil_0)), not_null(i_8));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm n_8 (ATerm t)
  {
    ATerm s_7 = t;
    if(PushChoice()==0)
      {
        t = i_78(t);
        PopChoice();
      }
    else
      {
        t = s_7;
        t = Cons_2(t, _id, n_8);
      }
    return(t);
  }
  t = n_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_Let_2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        ATerm f_9 = NULL,u_9 = NULL;
        t = not_null(b_9);
        {
          ATerm k_0 (ATerm t)
          {
            ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
            g_9 = t;
            v_8 :
            if(match_cons(g_9, sym_Cons_2))
              {
                h_9 = ATgetArgument(g_9, 0);
                l_9 = ATgetArgument(g_9, 1);
                w_8 :
                if(match_cons(h_9, sym_SDef_3))
                  {
                    i_9 = ATgetArgument(h_9, 0);
                    j_9 = ATgetArgument(h_9, 1);
                    k_9 = ATgetArgument(h_9, 2);
                    x_8 :
                    if(match_cons(j_9, sym_Nil_0))
                      {
                        ATerm t_9 = NULL;
                        t = not_null(c_9);
                        {
                          ATerm l_0 (ATerm t)
                          {
                            ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
                            p_9 = t;
                            r_8 :
                            if(match_cons(p_9, sym_Call_2))
                              {
                                q_9 = ATgetArgument(p_9, 0);
                                s_9 = ATgetArgument(p_9, 1);
                                s_8 :
                                if(match_cons(q_9, sym_SVar_1))
                                  {
                                    r_9 = ATgetArgument(q_9, 0);
                                    t_8 :
                                    if(match_cons(s_9, sym_Nil_0))
                                      {
                                        if(i_9 != NULL && i_9 != r_9)
                                          _fail(r_9);
                                        else
                                          i_9 = r_9;
                                        t = not_null(k_9);
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
                          t = oncetd_1(t, l_0);
                          t_9 = t;
                          if(f_9 != NULL && f_9 != t_9)
                            _fail(t_9);
                          else
                            f_9 = t_9;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_9)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_9), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm v_7 = t;
                            if(PushChoice()==0)
                              {
                                t = in_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = v_7;
                            t = not_null(l_9);
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
          t = at_suffix_1(t, k_0);
          u_9 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_9), not_null(f_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  l_10 = t;
  d_10 :
  if(match_cons(l_10, sym_TCons_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      o_10 = ATgetArgument(l_10, 1);
      e_10 :
      if(match_cons(m_10, sym_Build_1))
        {
          n_10 = ATgetArgument(m_10, 0);
          f_10 :
          if(match_cons(o_10, sym_TCons_2))
            {
              p_10 = ATgetArgument(o_10, 0);
              t_10 = ATgetArgument(o_10, 1);
              g_10 :
              if(match_cons(p_10, sym_Prim_2))
                {
                  q_10 = ATgetArgument(p_10, 0);
                  k_10 = ATgetArgument(p_10, 1);
                  h_10 :
                  if(match_cons(t_10, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_10), not_null(k_10));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_10, sym_Where_1))
                    {
                      q_10 = ATgetArgument(p_10, 0);
                      i_10 :
                      if(match_cons(q_10, sym_Prim_2))
                        {
                          r_10 = ATgetArgument(q_10, 0);
                          s_10 = ATgetArgument(q_10, 1);
                          j_10 :
                          if(match_cons(t_10, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_10), not_null(s_10));
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
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  l_11 = t;
  e_11 :
  if(match_cons(l_11, sym_TCons_2))
    {
      m_11 = ATgetArgument(l_11, 0);
      o_11 = ATgetArgument(l_11, 1);
      f_11 :
      if(match_cons(m_11, sym_Build_1))
        {
          n_11 = ATgetArgument(m_11, 0);
          g_11 :
          if(match_cons(o_11, sym_TCons_2))
            {
              p_11 = ATgetArgument(o_11, 0);
              s_11 = ATgetArgument(o_11, 1);
              h_11 :
              if(match_cons(p_11, sym_Build_1))
                {
                  q_11 = ATgetArgument(p_11, 0);
                  i_11 :
                  if(match_cons(s_11, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_11));
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(p_11, sym_Where_1))
                    {
                      q_11 = ATgetArgument(p_11, 0);
                      j_11 :
                      if(match_cons(q_11, sym_Build_1))
                        {
                          r_11 = ATgetArgument(q_11, 0);
                          k_11 :
                          if(match_cons(s_11, sym_TNil_0))
                            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_11));
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
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  m_12 = t;
  f_12 :
  if(match_cons(m_12, sym_TCons_2))
    {
      n_12 = ATgetArgument(m_12, 0);
      r_12 = ATgetArgument(m_12, 1);
      g_12 :
      if(match_cons(n_12, sym_Build_1))
        {
          o_12 = ATgetArgument(n_12, 0);
          h_12 :
          if(match_cons(o_12, sym_Op_2))
            {
              p_12 = ATgetArgument(o_12, 0);
              q_12 = ATgetArgument(o_12, 1);
              i_12 :
              if(match_cons(r_12, sym_TCons_2))
                {
                  s_12 = ATgetArgument(r_12, 0);
                  w_12 = ATgetArgument(r_12, 1);
                  j_12 :
                  if(match_cons(s_12, sym_Match_1))
                    {
                      t_12 = ATgetArgument(s_12, 0);
                      k_12 :
                      if(match_cons(t_12, sym_Op_2))
                        {
                          u_12 = ATgetArgument(t_12, 0);
                          v_12 = ATgetArgument(t_12, 1);
                          l_12 :
                          if(match_cons(w_12, sym_TNil_0))
                            {
                              ATerm z_12 = NULL,p_15 = NULL;
                              if(p_12 != NULL && p_12 != u_12)
                                _fail(u_12);
                              else
                                p_12 = u_12;
                              if(z_12 != NULL && z_12 != v_12)
                                _fail(v_12);
                              else
                                z_12 = v_12;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  ATerm a_13 = NULL,w_14 = NULL,x_14 = NULL,c_15 = NULL,m_15 = NULL;
                                  a_13 = t;
                                  b_12 :
                                  if(match_cons(a_13, sym_TCons_2))
                                    {
                                      w_14 = ATgetArgument(a_13, 0);
                                      x_14 = ATgetArgument(a_13, 1);
                                      c_12 :
                                      if(match_cons(x_14, sym_TCons_2))
                                        {
                                          c_15 = ATgetArgument(x_14, 0);
                                          m_15 = ATgetArgument(x_14, 1);
                                          d_12 :
                                          if(match_cons(m_15, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_14)), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_15)));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = zip_1(t, m_0);
                                p_15 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_12), not_null(q_12))));
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  y_15 = t;
  v_15 :
  if(match_cons(y_15, sym_TCons_2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      w_15 :
      if(match_cons(a_16, sym_TCons_2))
        {
          b_16 = ATgetArgument(a_16, 0);
          c_16 = ATgetArgument(a_16, 1);
          x_15 :
          if(match_cons(c_16, sym_TNil_0))
            {
              if(z_15 != NULL && z_15 != b_16)
                _fail(b_16);
              else
                z_15 = b_16;
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
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  a_17 = t;
  g_16 :
  if(match_cons(a_17, sym_TCons_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      f_17 = ATgetArgument(a_17, 1);
      h_16 :
      if(match_cons(b_17, sym_Build_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          i_16 :
          if(match_cons(c_17, sym_Op_2))
            {
              d_17 = ATgetArgument(c_17, 0);
              e_17 = ATgetArgument(c_17, 1);
              t_16 :
              if(match_cons(f_17, sym_TCons_2))
                {
                  g_17 = ATgetArgument(f_17, 0);
                  k_17 = ATgetArgument(f_17, 1);
                  u_16 :
                  if(match_cons(g_17, sym_Match_1))
                    {
                      h_17 = ATgetArgument(g_17, 0);
                      v_16 :
                      if(match_cons(h_17, sym_Op_2))
                        {
                          i_17 = ATgetArgument(h_17, 0);
                          j_17 = ATgetArgument(h_17, 1);
                          w_16 :
                          if(match_cons(k_17, sym_TNil_0))
                            {
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm j_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = eq_0(t);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = j_8;
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
  ATerm k_8 = t;
  if(PushChoice()==0)
    {
      t = MisMatch_0(t);
      PopChoice();
    }
  else
    {
      t = k_8;
      {
        ATerm l_8 = t;
        if(PushChoice()==0)
          {
            t = BuildMatchFusion_0(t);
            PopChoice();
          }
        else
          {
            t = l_8;
            {
              ATerm m_8 = t;
              if(PushChoice()==0)
                {
                  t = BuildBuild_0(t);
                  PopChoice();
                }
              else
                {
                  t = m_8;
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
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,q_20 = NULL,r_20 = NULL;
  ATerm b_21 (ATerm t)
  {
    ATerm u_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_19), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    u_20 = t;
    t = not_null(u_20);
    return(t);
  }
  ATerm c_21 (ATerm t)
  {
    ATerm z_20 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_20), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = BMF_0(t);
    z_20 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_20), not_null(r_20));
    return(t);
  }
  v_19 = t;
  k_19 :
  if(match_cons(v_19, sym_Seq_2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      l_19 :
      if(match_cons(x_19, sym_Seq_2))
        {
          q_20 = ATgetArgument(x_19, 0);
          r_20 = ATgetArgument(x_19, 1);
          {
            ATerm o_8 = t;
            if(PushChoice()==0)
              {
                t = b_21(t);
                PopChoice();
              }
            else
              {
                t = o_8;
                t = c_21(t);
              }
          }
        }
      else
        t = b_21(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  q_21 = t;
  g_21 :
  if(match_cons(q_21, sym_Seq_2))
    {
      r_21 = ATgetArgument(q_21, 0);
      t_21 = ATgetArgument(q_21, 1);
      h_21 :
      if(match_cons(r_21, sym_Build_1))
        {
          s_21 = ATgetArgument(r_21, 0);
          i_21 :
          if(match_cons(t_21, sym_Seq_2))
            {
              u_21 = ATgetArgument(t_21, 0);
              w_21 = ATgetArgument(t_21, 1);
              m_21 :
              if(match_cons(u_21, sym_Build_1))
                {
                  v_21 = ATgetArgument(u_21, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_21)), not_null(w_21));
                }
              else
                _fail(t);
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
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  f_22 = t;
  d_22 :
  if(match_cons(f_22, sym_Scope_2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      e_22 :
      if(match_cons(h_22, sym_Scope_2))
        {
          i_22 = ATgetArgument(h_22, 0);
          j_22 = ATgetArgument(h_22, 1);
          {
            ATerm n_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_22), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
            n_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_22), not_null(j_22));
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
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Var_1))
    {
      u_22 = ATgetArgument(t_22, 0);
      t = not_null(u_22);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  d_23 = t;
  z_22 :
  if(match_cons(d_23, sym_TCons_2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      a_23 :
      if(match_cons(f_23, sym_TCons_2))
        {
          g_23 = ATgetArgument(f_23, 0);
          j_23 = ATgetArgument(f_23, 1);
          b_23 :
          if(match_cons(g_23, sym_Cons_2))
            {
              h_23 = ATgetArgument(g_23, 0);
              i_23 = ATgetArgument(g_23, 1);
              c_23 :
              if(match_cons(j_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_23), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  r_24 = t;
  o_23 :
  if(match_cons(r_24, sym_TCons_2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      v_23 :
      if(match_cons(t_24, sym_TCons_2))
        {
          u_24 = ATgetArgument(t_24, 0);
          b_25 = ATgetArgument(t_24, 1);
          w_23 :
          if(match_cons(u_24, sym_Cons_2))
            {
              v_24 = ATgetArgument(u_24, 0);
              a_25 = ATgetArgument(u_24, 1);
              x_23 :
              if(match_cons(v_24, sym_TCons_2))
                {
                  w_24 = ATgetArgument(v_24, 0);
                  x_24 = ATgetArgument(v_24, 1);
                  y_23 :
                  if(match_cons(x_24, sym_TCons_2))
                    {
                      y_24 = ATgetArgument(x_24, 0);
                      z_24 = ATgetArgument(x_24, 1);
                      c_24 :
                      if(match_cons(z_24, sym_TNil_0))
                        {
                          d_24 :
                          if(match_cons(b_25, sym_TNil_0))
                            {
                              ATerm d_25 = NULL;
                              if(s_24 != NULL && s_24 != w_24)
                                _fail(w_24);
                              else
                                s_24 = w_24;
                              if(d_25 != NULL && d_25 != y_24)
                                _fail(y_24);
                              else
                                d_25 = y_24;
                              t = not_null(d_25);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = p_8;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm q_25 = NULL;
  ATerm s_25 = NULL;
  q_25 = t;
  {
    ATerm u_25 = NULL;
    t = l_83(t);
    s_25 = t;
    t = m_83(t);
    u_25 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_25), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm z_25 (ATerm t)
  {
    ATerm q_8 = t;
    if(PushChoice()==0)
      {
        t = l_82(t);
        PopChoice();
      }
    else
      {
        t = q_8;
        t = _all(t, z_25);
      }
    return(t);
  }
  t = z_25(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  h_26 = t;
  d_26 :
  if(match_cons(h_26, sym_TCons_2))
    {
      i_26 = ATgetArgument(h_26, 0);
      j_26 = ATgetArgument(h_26, 1);
      e_26 :
      if(match_cons(j_26, sym_TCons_2))
        {
          k_26 = ATgetArgument(j_26, 0);
          l_26 = ATgetArgument(j_26, 1);
          f_26 :
          if(match_cons(l_26, sym_TNil_0))
            {
              ATerm p_26 = NULL;
              if(p_26 != NULL && p_26 != k_26)
                _fail(k_26);
              else
                p_26 = k_26;
            }
          else
            {
              if(match_cons(l_26, sym_TCons_2))
                {
                  m_26 = ATgetArgument(l_26, 0);
                  n_26 = ATgetArgument(l_26, 1);
                  g_26 :
                  if(match_cons(n_26, sym_TNil_0))
                    {
                      ATerm v_26 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      v_26 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_26), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  t = subs_args_0(t);
  e_27 = t;
  b_27 :
  if(match_cons(e_27, sym_TCons_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      c_27 :
      if(match_cons(g_27, sym_TCons_2))
        {
          h_27 = ATgetArgument(g_27, 0);
          i_27 = ATgetArgument(g_27, 1);
          d_27 :
          if(match_cons(i_27, sym_TNil_0))
            {
              t = not_null(h_27);
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(f_27);
                    return(t);
                  }
                  t = SubsVar_2(t, n_83, o_0);
                  t = o_83(t);
                  return(t);
                }
                t = alltd_1(t, n_0);
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
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym_Cons_2))
    {
      q_27 = ATgetArgument(p_27, 0);
      r_27 = ATgetArgument(p_27, 1);
      t = d_74(t);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm u_27 = NULL;
          u_27 = t;
          if(q_27 != NULL && q_27 != u_27)
            _fail(u_27);
          else
            q_27 = u_27;
          return(t);
        }
        t = fetch_1(t, p_0);
        t = not_null(r_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  c_28 = t;
  y_27 :
  if(match_cons(c_28, sym_TCons_2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      z_27 :
      if(match_cons(e_28, sym_TCons_2))
        {
          f_28 = ATgetArgument(e_28, 0);
          i_28 = ATgetArgument(e_28, 1);
          a_28 :
          if(match_cons(f_28, sym_Cons_2))
            {
              g_28 = ATgetArgument(f_28, 0);
              h_28 = ATgetArgument(f_28, 1);
              b_28 :
              if(match_cons(i_28, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_28), not_null(d_28)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_28), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  d_29 = t;
  z_28 :
  if(match_cons(d_29, sym_Cons_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      j_29 = ATgetArgument(d_29, 1);
      a_29 :
      if(match_cons(e_29, sym_TCons_2))
        {
          f_29 = ATgetArgument(e_29, 0);
          g_29 = ATgetArgument(e_29, 1);
          b_29 :
          if(match_cons(g_29, sym_TCons_2))
            {
              h_29 = ATgetArgument(g_29, 0);
              i_29 = ATgetArgument(g_29, 1);
              c_29 :
              if(match_cons(i_29, sym_TNil_0))
                {
                  ATerm n_29 = NULL,o_29 = NULL,w_29 = NULL,e_30 = NULL;
                  ATerm u_8;
                  u_8 = t;
                  {
                    ATerm p_29 = NULL;
                    ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
                    t = not_null(h_29);
                    p_29 = t;
                    t = SSL_explode_term(not_null(p_29));
                    r_29 = t;
                    q_28 :
                    if(match_cons(r_29, sym_TCons_2))
                      {
                        s_29 = ATgetArgument(r_29, 0);
                        t_29 = ATgetArgument(r_29, 1);
                        r_28 :
                        if(match_cons(t_29, sym_TCons_2))
                          {
                            u_29 = ATgetArgument(t_29, 0);
                            v_29 = ATgetArgument(t_29, 1);
                            s_28 :
                            if(match_cons(v_29, sym_TNil_0))
                              {
                                if(n_29 != NULL && n_29 != s_29)
                                  _fail(s_29);
                                else
                                  n_29 = s_29;
                                if(o_29 != NULL && o_29 != u_29)
                                  _fail(u_29);
                                else
                                  o_29 = u_29;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = u_8;
                  {
                    ATerm x_29 = NULL;
                    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
                    t = not_null(f_29);
                    x_29 = t;
                    t = SSL_explode_term(not_null(x_29));
                    z_29 = t;
                    v_28 :
                    if(match_cons(z_29, sym_TCons_2))
                      {
                        a_30 = ATgetArgument(z_29, 0);
                        b_30 = ATgetArgument(z_29, 1);
                        w_28 :
                        if(match_cons(b_30, sym_TCons_2))
                          {
                            c_30 = ATgetArgument(b_30, 0);
                            d_30 = ATgetArgument(b_30, 1);
                            x_28 :
                            if(match_cons(d_30, sym_TNil_0))
                              {
                                if(n_29 != NULL && n_29 != a_30)
                                  _fail(a_30);
                                else
                                  n_29 = a_30;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_29), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    e_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_29), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  r_30 = t;
  n_30 :
  if(match_cons(r_30, sym_Cons_2))
    {
      s_30 = ATgetArgument(r_30, 0);
      x_30 = ATgetArgument(r_30, 1);
      o_30 :
      if(match_cons(s_30, sym_TCons_2))
        {
          t_30 = ATgetArgument(s_30, 0);
          u_30 = ATgetArgument(s_30, 1);
          p_30 :
          if(match_cons(u_30, sym_TCons_2))
            {
              v_30 = ATgetArgument(u_30, 0);
              w_30 = ATgetArgument(u_30, 1);
              q_30 :
              if(match_cons(w_30, sym_TNil_0))
                {
                  ATerm z_30 = NULL;
                  if(t_30 != NULL && t_30 != v_30)
                    _fail(v_30);
                  else
                    t_30 = v_30;
                  if(z_30 != NULL && z_30 != x_30)
                    _fail(x_30);
                  else
                    z_30 = x_30;
                  t = not_null(z_30);
                }
              else
                _fail(t);
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
  ATerm b_31 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        t = n_68(t);
        PopChoice();
      }
    else
      {
        t = y_8;
        t = o_68(t);
        t = b_31(t);
      }
    return(t);
  }
  t = b_31(t);
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
  ATerm d_9 = t;
  if(PushChoice()==0)
    {
      ATerm q_0 (ATerm t)
      {
        ATerm h_31 = NULL;
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_31), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, t_0);
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            ATerm u_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                ATerm m_9 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = m_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, v_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, u_0);
            PopChoice();
          }
        else
          {
            t = e_9;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_0, r_0, s_0);
      PopChoice();
    }
  else
    {
      t = d_9;
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
        j_31 = t;
        e_31 :
        if(match_cons(j_31, sym_TCons_2))
          {
            k_31 = ATgetArgument(j_31, 0);
            l_31 = ATgetArgument(j_31, 1);
            f_31 :
            if(match_cons(l_31, sym_TCons_2))
              {
                m_31 = ATgetArgument(l_31, 0);
                n_31 = ATgetArgument(l_31, 1);
                g_31 :
                if(match_cons(n_31, sym_TNil_0))
                  {
                    t = not_null(k_31);
                    {
                      ATerm s_31 (ATerm t)
                      {
                        ATerm n_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_9;
                            {
                              ATerm o_9 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm w_0 (ATerm t)
                                  {
                                    t = not_null(m_31);
                                    return(t);
                                  }
                                  t = HdMember_1(t, w_0);
                                  t = s_31(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = o_9;
                                  t = Cons_2(t, _id, s_31);
                                }
                            }
                          }
                        return(t);
                      }
                      t = s_31(t);
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
  ATerm t_31 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = x_81(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        t = _one(t, t_31);
      }
    return(t);
  }
  t = t_31(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  w_31 :
  if(match_cons(z_31, sym_TCons_2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      x_31 :
      if(match_cons(b_32, sym_TCons_2))
        {
          c_32 = ATgetArgument(b_32, 0);
          d_32 = ATgetArgument(b_32, 1);
          y_31 :
          if(match_cons(d_32, sym_TNil_0))
            {
              t = not_null(c_32);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm g_32 = NULL;
                  g_32 = t;
                  if(a_32 != NULL && a_32 != g_32)
                    _fail(g_32);
                  else
                    a_32 = g_32;
                  return(t);
                }
                t = oncetd_1(t, x_0);
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
  ATerm m_32 = NULL,n_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym_Var_1))
    {
      n_32 = ATgetArgument(m_32, 0);
      {
        ATerm p_32 = NULL;
        t = not_null(n_32);
        t = v_60(t);
        p_32 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  l_34 = t;
  j_33 :
  if(match_cons(l_34, sym_Seq_2))
    {
      m_34 = ATgetArgument(l_34, 0);
      p_34 = ATgetArgument(l_34, 1);
      k_33 :
      if(match_cons(m_34, sym_Build_1))
        {
          n_34 = ATgetArgument(m_34, 0);
          l_33 :
          if(match_cons(p_34, sym_Scope_2))
            {
              q_34 = ATgetArgument(p_34, 0);
              t_34 = ATgetArgument(p_34, 1);
              m_33 :
              if(match_cons(t_34, sym_Seq_2))
                {
                  f_34 = ATgetArgument(t_34, 0);
                  k_34 = ATgetArgument(t_34, 1);
                  n_33 :
                  if(match_cons(f_34, sym_Assign_1))
                    {
                      g_34 = ATgetArgument(f_34, 0);
                      o_33 :
                      if(match_cons(g_34, sym_Var_1))
                        {
                          h_34 = ATgetArgument(g_34, 0);
                          {
                            ATerm w_9 = t;
                            if(PushChoice()==0)
                              {
                                ATerm y_34 = NULL;
                                t = not_null(n_34);
                                t = Var_1(t, _id);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                t = in_0(t);
                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                {
                                  ATerm a_35 = NULL;
                                  t = diff_0(t);
                                  y_34 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                  t = tsubs_0(t);
                                  a_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_34), not_null(a_35)));
                                }
                                PopChoice();
                              }
                            else
                              {
                                t = w_9;
                                {
                                  ATerm h_35 = NULL;
                                  t = not_null(n_34);
                                  t = Var_1(t, _id);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  t = in_0(t);
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm j_35 = NULL;
                                    t = diff_0(t);
                                    h_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                    t = tsubs_0(t);
                                    j_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_34)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_35), not_null(j_35)));
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
          if(match_cons(m_34, sym_Assign_1))
            {
              n_34 = ATgetArgument(m_34, 0);
              p_33 :
              if(match_cons(n_34, sym_Var_1))
                {
                  o_34 = ATgetArgument(n_34, 0);
                  q_33 :
                  if(match_cons(p_34, sym_Seq_2))
                    {
                      q_34 = ATgetArgument(p_34, 0);
                      t_34 = ATgetArgument(p_34, 1);
                      r_33 :
                      if(match_cons(q_34, sym_Build_1))
                        {
                          r_34 = ATgetArgument(q_34, 0);
                          s_33 :
                          if(match_cons(r_34, sym_Var_1))
                            {
                              s_34 = ATgetArgument(r_34, 0);
                              {
                                ATerm k_36 = NULL;
                                if(o_34 != NULL && o_34 != s_34)
                                  _fail(s_34);
                                else
                                  o_34 = s_34;
                                if(k_36 != NULL && k_36 != t_34)
                                  _fail(t_34);
                                else
                                  k_36 = t_34;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))), not_null(k_36));
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
      if(match_cons(l_34, sym_Scope_2))
        {
          m_34 = ATgetArgument(l_34, 0);
          p_34 = ATgetArgument(l_34, 1);
          t_33 :
          if(match_cons(p_34, sym_Seq_2))
            {
              q_34 = ATgetArgument(p_34, 0);
              t_34 = ATgetArgument(p_34, 1);
              u_33 :
              if(match_cons(q_34, sym_Assign_2))
                {
                  r_34 = ATgetArgument(q_34, 0);
                  d_34 = ATgetArgument(q_34, 1);
                  v_33 :
                  if(match_cons(r_34, sym_Var_1))
                    {
                      s_34 = ATgetArgument(r_34, 0);
                      w_33 :
                      if(match_cons(d_34, sym_Var_1))
                        {
                          e_34 = ATgetArgument(d_34, 0);
                          {
                            ATerm p_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = in_0(t);
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                            {
                              ATerm r_35 = NULL;
                              t = diff_0(t);
                              p_35 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                              t = tsubs_0(t);
                              r_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_35), not_null(r_35));
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
                  if(match_cons(q_34, sym_Assign_1))
                    {
                      r_34 = ATgetArgument(q_34, 0);
                      x_33 :
                      if(match_cons(r_34, sym_Var_1))
                        {
                          s_34 = ATgetArgument(r_34, 0);
                          y_33 :
                          if(match_cons(t_34, sym_Seq_2))
                            {
                              f_34 = ATgetArgument(t_34, 0);
                              k_34 = ATgetArgument(t_34, 1);
                              z_33 :
                              if(match_cons(f_34, sym_Assign_1))
                                {
                                  g_34 = ATgetArgument(f_34, 0);
                                  a_34 :
                                  if(match_cons(g_34, sym_Var_1))
                                    {
                                      h_34 = ATgetArgument(g_34, 0);
                                      {
                                        ATerm x_35 = NULL;
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = in_0(t);
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        {
                                          ATerm z_35 = NULL;
                                          t = diff_0(t);
                                          x_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                                          t = tsubs_0(t);
                                          z_35 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_34))), not_null(z_35)));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(f_34, sym_Assign_2))
                                    {
                                      g_34 = ATgetArgument(f_34, 0);
                                      i_34 = ATgetArgument(f_34, 1);
                                      b_34 :
                                      if(match_cons(g_34, sym_Var_1))
                                        {
                                          h_34 = ATgetArgument(g_34, 0);
                                          c_34 :
                                          if(match_cons(i_34, sym_Var_1))
                                            {
                                              j_34 = ATgetArgument(i_34, 0);
                                              {
                                                ATerm e_36 = NULL,f_36 = NULL;
                                                if(s_34 != NULL && s_34 != j_34)
                                                  _fail(j_34);
                                                else
                                                  s_34 = j_34;
                                                if(e_36 != NULL && e_36 != k_34)
                                                  _fail(k_34);
                                                else
                                                  e_36 = k_34;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = in_0(t);
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm h_36 = NULL;
                                                  t = diff_0(t);
                                                  f_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_34)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_36), (ATerm) ATmakeAppl(sym_TNil_0))));
                                                  t = tsubs_0(t);
                                                  h_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_34))), not_null(h_36)));
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
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  e_37 = t;
  c_37 :
  if(match_cons(e_37, sym_Seq_2))
    {
      f_37 = ATgetArgument(e_37, 0);
      g_37 = ATgetArgument(e_37, 1);
      d_37 :
      if(match_cons(g_37, sym_Let_2))
        {
          h_37 = ATgetArgument(g_37, 0);
          i_37 = ATgetArgument(g_37, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_37), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_37), not_null(i_37)));
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
  ATerm n_37 (ATerm t)
  {
    ATerm x_9 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, n_37);
        PopChoice();
      }
    else
      {
        t = x_9;
        t = Nil_0(t);
        t = e_78(t);
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  u_37 = t;
  p_37 :
  if(match_cons(u_37, sym_TCons_2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      s_37 :
      if(match_cons(w_37, sym_TCons_2))
        {
          x_37 = ATgetArgument(w_37, 0);
          y_37 = ATgetArgument(w_37, 1);
          t_37 :
          if(match_cons(y_37, sym_TNil_0))
            {
              t = not_null(v_37);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(x_37);
                  return(t);
                }
                t = at_end_1(t, y_0);
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
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  g_38 = t;
  d_38 :
  if(match_cons(g_38, sym_TCons_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      e_38 :
      if(match_cons(i_38, sym_TCons_2))
        {
          j_38 = ATgetArgument(i_38, 0);
          k_38 = ATgetArgument(i_38, 1);
          f_38 :
          if(match_cons(k_38, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_38), not_null(j_38));
          else
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
  ATerm y_38 = NULL,z_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,j_39 = NULL,k_39 = NULL,n_39 = NULL,p_39 = NULL;
  y_38 = t;
  t_38 :
  if(match_cons(y_38, sym_TCons_2))
    {
      z_38 = ATgetArgument(y_38, 0);
      e_39 = ATgetArgument(y_38, 1);
      u_38 :
      if(match_cons(z_38, sym_Cons_2))
        {
          c_39 = ATgetArgument(z_38, 0);
          d_39 = ATgetArgument(z_38, 1);
          v_38 :
          if(match_cons(e_39, sym_TCons_2))
            {
              j_39 = ATgetArgument(e_39, 0);
              p_39 = ATgetArgument(e_39, 1);
              w_38 :
              if(match_cons(j_39, sym_Cons_2))
                {
                  k_39 = ATgetArgument(j_39, 0);
                  n_39 = ATgetArgument(j_39, 1);
                  x_38 :
                  if(match_cons(p_39, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_39), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_39), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm b_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  b_40 = t;
  w_39 :
  if(match_cons(b_40, sym_TCons_2))
    {
      g_40 = ATgetArgument(b_40, 0);
      h_40 = ATgetArgument(b_40, 1);
      x_39 :
      if(match_cons(g_40, sym_Nil_0))
        {
          y_39 :
          if(match_cons(h_40, sym_TCons_2))
            {
              i_40 = ATgetArgument(h_40, 0);
              j_40 = ATgetArgument(h_40, 1);
              z_39 :
              if(match_cons(i_40, sym_Nil_0))
                {
                  a_40 :
                  if(match_cons(j_40, sym_TNil_0))
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
  ATerm l_40 (ATerm t)
  {
    ATerm y_9 = t;
    if(PushChoice()==0)
      {
        t = a_76(t);
        PopChoice();
      }
    else
      {
        t = y_9;
        t = b_76(t);
        {
          ATerm z_0 (ATerm t)
          {
            t = TCons_2(t, l_40, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_76, z_0);
          t = c_76(t);
        }
      }
    return(t);
  }
  t = l_40(t);
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
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_Cong_2))
    {
      h_41 = ATgetArgument(g_41, 0);
      i_41 = ATgetArgument(g_41, 1);
      {
        ATerm l_41 = NULL;
        t = not_null(i_41);
        {
          ATerm p_41 = NULL;
          t = map_1(t, new_0);
          l_41 = t;
          {
            ATerm r_41 = NULL;
            ATerm a_1 (ATerm t)
            {
              ATerm n_41 = NULL;
              n_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_41));
              return(t);
            }
            t = map_1(t, a_1);
            p_41 = t;
            t = not_null(i_41);
            {
              ATerm v_41 = NULL;
              t = map_1(t, new_0);
              r_41 = t;
              {
                ATerm x_41 = NULL;
                ATerm b_1 (ATerm t)
                {
                  ATerm t_41 = NULL;
                  t_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_41));
                  return(t);
                }
                t = map_1(t, b_1);
                v_41 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm l_42 = NULL;
                  t = zip_1(t, _id);
                  x_41 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm n_42 = NULL;
                    ATerm c_1 (ATerm t)
                    {
                      ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
                      z_41 = t;
                      x_40 :
                      if(match_cons(z_41, sym_TCons_2))
                        {
                          a_42 = ATgetArgument(z_41, 0);
                          f_42 = ATgetArgument(z_41, 1);
                          y_40 :
                          if(match_cons(a_42, sym_TCons_2))
                            {
                              b_42 = ATgetArgument(a_42, 0);
                              c_42 = ATgetArgument(a_42, 1);
                              z_40 :
                              if(match_cons(c_42, sym_TCons_2))
                                {
                                  d_42 = ATgetArgument(c_42, 0);
                                  e_42 = ATgetArgument(c_42, 1);
                                  a_41 :
                                  if(match_cons(e_42, sym_TNil_0))
                                    {
                                      b_41 :
                                      if(match_cons(f_42, sym_TCons_2))
                                        {
                                          g_42 = ATgetArgument(f_42, 0);
                                          h_42 = ATgetArgument(f_42, 1);
                                          c_41 :
                                          if(match_cons(h_42, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_42))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_42)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, c_1);
                    l_42 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_41), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_41), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    n_42 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_41), not_null(p_41))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_42)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_41), not_null(v_41))))));
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
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  h_43 :
  if(match_cons(i_43, sym_Cong_2))
    {
      j_43 = ATgetArgument(i_43, 0);
      k_43 = ATgetArgument(i_43, 1);
      {
        ATerm s_43 = NULL;
        t = not_null(k_43);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm n_43 = NULL,o_43 = NULL;
            o_43 = t;
            f_43 :
            if(match_cons(o_43, sym_Match_1))
              {
                n_43 = ATgetArgument(o_43, 0);
                t = not_null(n_43);
              }
            else
              {
                if(match_cons(o_43, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_1);
          s_43 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_43), not_null(s_43)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  z_43 :
  if(match_cons(b_44, sym_Scope_2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      a_44 :
      if(match_cons(c_44, sym_Nil_0))
        t = not_null(d_44);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,p_45 = NULL;
  v_44 = t;
  n_44 :
  if(match_cons(v_44, sym_Choice_2))
    {
      w_44 = ATgetArgument(v_44, 0);
      u_44 = ATgetArgument(v_44, 1);
      if(w_44 != NULL && w_44 != u_44)
        _fail(u_44);
      else
        w_44 = u_44;
      t = not_null(w_44);
    }
  else
    {
      if(match_cons(v_44, sym_LChoice_2))
        {
          w_44 = ATgetArgument(v_44, 0);
          u_44 = ATgetArgument(v_44, 1);
          if(w_44 != NULL && w_44 != u_44)
            _fail(u_44);
          else
            w_44 = u_44;
          t = not_null(w_44);
        }
      else
        {
          if(match_cons(v_44, sym_Where_1))
            {
              w_44 = ATgetArgument(v_44, 0);
              o_44 :
              if(match_cons(w_44, sym_Where_1))
                {
                  x_44 = ATgetArgument(w_44, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(x_44));
                }
              else
                {
                  if(match_cons(w_44, sym_Seq_2))
                    {
                      x_44 = ATgetArgument(w_44, 0);
                      k_45 = ATgetArgument(w_44, 1);
                      p_44 :
                      if(match_cons(x_44, sym_Where_1))
                        {
                          y_44 = ATgetArgument(x_44, 0);
                          q_44 :
                          if(match_cons(k_45, sym_Seq_2))
                            {
                              l_45 = ATgetArgument(k_45, 0);
                              p_45 = ATgetArgument(k_45, 1);
                              r_44 :
                              if(match_cons(l_45, sym_Build_1))
                                {
                                  n_45 = ATgetArgument(l_45, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_45)), not_null(p_45))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(v_44, sym_Not_1))
                {
                  w_44 = ATgetArgument(v_44, 0);
                  s_44 :
                  if(match_cons(w_44, sym_Not_1))
                    {
                      x_44 = ATgetArgument(w_44, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_44));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(v_44, sym_Test_1))
                    {
                      w_44 = ATgetArgument(v_44, 0);
                      t_44 :
                      if(match_cons(w_44, sym_Test_1))
                        {
                          x_44 = ATgetArgument(w_44, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_44));
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
  ATerm r_46 = NULL,s_46 = NULL,b_47 = NULL,c_47 = NULL,p_47 = NULL;
  r_46 = t;
  n_46 :
  if(match_cons(r_46, sym_Choice_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      p_47 = ATgetArgument(r_46, 1);
      o_46 :
      if(match_cons(s_46, sym_Choice_2))
        {
          b_47 = ATgetArgument(s_46, 0);
          c_47 = ATgetArgument(s_46, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_47), not_null(p_47)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(r_46, sym_Seq_2))
        {
          s_46 = ATgetArgument(r_46, 0);
          p_47 = ATgetArgument(r_46, 1);
          p_46 :
          if(match_cons(s_46, sym_Seq_2))
            {
              b_47 = ATgetArgument(s_46, 0);
              c_47 = ATgetArgument(s_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_47), not_null(p_47)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(r_46, sym_LChoice_2))
            {
              s_46 = ATgetArgument(r_46, 0);
              p_47 = ATgetArgument(r_46, 1);
              q_46 :
              if(match_cons(s_46, sym_LChoice_2))
                {
                  b_47 = ATgetArgument(s_46, 0);
                  c_47 = ATgetArgument(s_46, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_47), not_null(p_47)));
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
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  u_48 = t;
  o_48 :
  if(match_cons(u_48, sym_Seqs_1))
    {
      v_48 = ATgetArgument(u_48, 0);
      p_48 :
      if(match_cons(v_48, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(v_48, sym_Cons_2))
            {
              s_48 = ATgetArgument(v_48, 0);
              t_48 = ATgetArgument(v_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_48)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(u_48, sym_Choices_1))
        {
          v_48 = ATgetArgument(u_48, 0);
          q_48 :
          if(match_cons(v_48, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(v_48, sym_Cons_2))
                {
                  s_48 = ATgetArgument(v_48, 0);
                  t_48 = ATgetArgument(v_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_48)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(u_48, sym_LChoices_1))
            {
              v_48 = ATgetArgument(u_48, 0);
              r_48 :
              if(match_cons(v_48, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(v_48, sym_Cons_2))
                    {
                      s_48 = ATgetArgument(v_48, 0);
                      t_48 = ATgetArgument(v_48, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_48)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(u_48, sym_Lets_2))
                {
                  v_48 = ATgetArgument(u_48, 0);
                  w_48 = ATgetArgument(u_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_48), not_null(w_48));
                }
              else
                {
                  if(match_cons(u_48, sym_BA_2))
                    {
                      v_48 = ATgetArgument(u_48, 0);
                      w_48 = ATgetArgument(u_48, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_48)), not_null(v_48));
                    }
                  else
                    {
                      if(match_cons(u_48, sym_MA_2))
                        {
                          v_48 = ATgetArgument(u_48, 0);
                          w_48 = ATgetArgument(u_48, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_48)), not_null(w_48));
                        }
                      else
                        {
                          if(match_cons(u_48, sym_AM_2))
                            {
                              v_48 = ATgetArgument(u_48, 0);
                              w_48 = ATgetArgument(u_48, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_48)));
                            }
                          else
                            {
                              if(match_cons(u_48, sym_BAM_3))
                                {
                                  v_48 = ATgetArgument(u_48, 0);
                                  w_48 = ATgetArgument(u_48, 1);
                                  x_48 = ATgetArgument(u_48, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_48)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_48)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(u_48, sym_InfixApp_3))
                                    {
                                      v_48 = ATgetArgument(u_48, 0);
                                      w_48 = ATgetArgument(u_48, 1);
                                      x_48 = ATgetArgument(u_48, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_48), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm h_50 = NULL,i_50 = NULL;
  h_50 = t;
  f_50 :
  if(match_cons(h_50, sym_Where_1))
    {
      i_50 = ATgetArgument(h_50, 0);
      g_50 :
      if(match_cons(i_50, sym_Fail_0))
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  l_50 :
  if(match_cons(n_50, sym_LChoice_2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      m_50 :
      if(match_cons(p_50, sym_Fail_0))
        t = not_null(o_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  t_50 :
  if(match_cons(v_50, sym_LChoice_2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      u_50 :
      if(match_cons(w_50, sym_Fail_0))
        t = not_null(x_50);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  b_51 :
  if(match_cons(d_51, sym_Choice_2))
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
ATerm F11_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  l_51 = t;
  j_51 :
  if(match_cons(l_51, sym_Choice_2))
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
ATerm F10_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym_Cong_2))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      t = not_null(v_51);
      {
        ATerm i_1 (ATerm t)
        {
          ATerm y_51 = NULL;
          y_51 = t;
          r_51 :
          if(!(match_cons(y_51, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, i_1);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_cons(d_52, sym_Path_2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      c_52 :
      if(match_cons(f_52, sym_Fail_0))
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
  ATerm l_52 = NULL,m_52 = NULL;
  l_52 = t;
  j_52 :
  if(match_cons(l_52, sym_One_1))
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
ATerm F7_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  r_52 = t;
  p_52 :
  if(match_cons(r_52, sym_Some_1))
    {
      s_52 = ATgetArgument(r_52, 0);
      q_52 :
      if(match_cons(s_52, sym_Fail_0))
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
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  v_52 :
  if(match_cons(x_52, sym_Rec_2))
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
ATerm F5_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  d_53 :
  if(match_cons(f_53, sym_Scope_2))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      e_53 :
      if(match_cons(h_53, sym_Fail_0))
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
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  l_53 :
  if(match_cons(n_53, sym_Seq_2))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      m_53 :
      if(match_cons(o_53, sym_Fail_0))
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
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  t_53 :
  if(match_cons(v_53, sym_Not_1))
    {
      w_53 = ATgetArgument(v_53, 0);
      u_53 :
      if(match_cons(w_53, sym_Fail_0))
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
  ATerm b_54 = NULL,c_54 = NULL;
  b_54 = t;
  z_53 :
  if(match_cons(b_54, sym_Test_1))
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm z_9 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = z_9;
      {
        ATerm a_10 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = a_10;
            {
              ATerm b_10 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = b_10;
                  {
                    ATerm c_10 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = c_10;
                        {
                          ATerm u_10 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = u_10;
                              {
                                ATerm v_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_10;
                                    {
                                      ATerm w_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_10;
                                          {
                                            ATerm x_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_10;
                                                {
                                                  ATerm y_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_10;
                                                      {
                                                        ATerm z_10 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_10;
                                                            {
                                                              ATerm a_11 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_11;
                                                                  {
                                                                    ATerm b_11 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_11;
                                                                        {
                                                                          ATerm c_11 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_11;
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
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  f_54 :
  if(match_cons(h_54, sym_Match_1))
    {
      i_54 = ATgetArgument(h_54, 0);
      g_54 :
      if(match_cons(i_54, sym_Wld_0))
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
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  l_54 :
  if(match_cons(n_54, sym_Where_1))
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
ATerm I10_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  t_54 = t;
  r_54 :
  if(match_cons(t_54, sym_All_1))
    {
      u_54 = ATgetArgument(t_54, 0);
      s_54 :
      if(match_cons(u_54, sym_Id_0))
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
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  x_54 :
  if(match_cons(z_54, sym_Rec_2))
    {
      a_55 = ATgetArgument(z_54, 0);
      b_55 = ATgetArgument(z_54, 1);
      y_54 :
      if(match_cons(b_55, sym_Id_0))
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
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  f_55 :
  if(match_cons(h_55, sym_Scope_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      g_55 :
      if(match_cons(j_55, sym_Id_0))
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
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  n_55 :
  if(match_cons(p_55, sym_LChoice_2))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
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
ATerm I4_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  v_55 :
  if(match_cons(x_55, sym_Seq_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      w_55 :
      if(match_cons(z_55, sym_Id_0))
        t = not_null(y_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_Seq_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(match_cons(g_56, sym_Id_0))
        t = not_null(h_56);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL;
  n_56 = t;
  l_56 :
  if(match_cons(n_56, sym_Not_1))
    {
      o_56 = ATgetArgument(n_56, 0);
      m_56 :
      if(match_cons(o_56, sym_Id_0))
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
  ATerm t_56 = NULL,u_56 = NULL;
  t_56 = t;
  r_56 :
  if(match_cons(t_56, sym_Test_1))
    {
      u_56 = ATgetArgument(t_56, 0);
      s_56 :
      if(match_cons(u_56, sym_Id_0))
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
  ATerm d_11 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = d_11;
      {
        ATerm t_11 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = t_11;
            {
              ATerm u_11 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_11;
                  {
                    ATerm v_11 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = v_11;
                        {
                          ATerm w_11 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = w_11;
                              {
                                ATerm x_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_11;
                                    {
                                      ATerm y_11 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_11;
                                          {
                                            ATerm z_11 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = z_11;
                                                {
                                                  ATerm a_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_12;
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
  ATerm e_12 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = e_12;
      {
        ATerm x_12 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = x_12;
            {
              ATerm y_12 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = y_12;
                  {
                    ATerm b_13 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_13;
                        {
                          ATerm c_13 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = c_13;
                              {
                                ATerm d_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = d_13;
                                    {
                                      ATerm e_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_13;
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
  ATerm f_13 = t;
  if(PushChoice()==0)
    {
      t = Simplify_0(t);
      PopChoice();
    }
  else
    {
      t = f_13;
      {
        ATerm g_13 = t;
        if(PushChoice()==0)
          {
            t = HoistLet_0(t);
            PopChoice();
          }
        else
          {
            t = g_13;
            {
              ATerm h_13 = t;
              if(PushChoice()==0)
                {
                  t = CopyPropagation_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_13;
                  {
                    ATerm i_13 = t;
                    if(PushChoice()==0)
                      {
                        t = FuseScope_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm j_13 = t;
                          if(PushChoice()==0)
                            {
                              t = NoEffect_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm k_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BuildMatch_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_13;
                                    {
                                      ATerm l_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Inline_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_13;
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
  ATerm w_56 (ATerm t)
  {
    ATerm m_13 = t;
    if(PushChoice()==0)
      {
        t = w_67(t);
        t = w_56(t);
        PopChoice();
      }
    else
      {
        t = m_13;
        t = x_67(t);
      }
    return(t);
  }
  t = w_56(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_67 (ATerm))
{
  t = repeat_2(t, z_67, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm x_56 (ATerm t)
  {
    t = l_80(t);
    t = _all(t, x_56);
    t = l_80(t);
    return(t);
  }
  t = x_56(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      ATerm n_13 = t;
      if(PushChoice()==0)
        {
          t = Optimize_0(t);
          PopChoice();
        }
      else
        {
          t = n_13;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, k_1);
    return(t);
  }
  t = downup_1(t, j_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  e_57 = t;
  d_57 :
  if(match_cons(e_57, sym_SDef_3))
    {
      f_57 = ATgetArgument(e_57, 0);
      g_57 = ATgetArgument(e_57, 1);
      h_57 = ATgetArgument(e_57, 2);
      {
        ATerm l_57 = NULL;
        t = not_null(f_57);
        {
          ATerm n_57 = NULL;
          t = o_61(t);
          l_57 = t;
          t = not_null(g_57);
          {
            ATerm p_57 = NULL;
            t = p_61(t);
            n_57 = t;
            t = not_null(h_57);
            t = q_61(t);
            p_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_57), not_null(n_57), not_null(p_57));
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
  ATerm v_57 (ATerm t)
  {
    ATerm o_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = o_13;
        t = Cons_2(t, q_77, v_57);
      }
    return(t);
  }
  t = v_57(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm z_57 = NULL,a_58 = NULL;
  z_57 = t;
  y_57 :
  if(match_cons(z_57, sym_Strategies_1))
    {
      a_58 = ATgetArgument(z_57, 0);
      {
        ATerm c_58 = NULL;
        t = not_null(a_58);
        t = j_60(t);
        c_58 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_Specification_1))
    {
      k_58 = ATgetArgument(j_58, 0);
      {
        ATerm m_58 = NULL;
        t = not_null(k_58);
        t = l_60(t);
        m_58 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_58));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, f_85);
            return(t);
          }
          t = map_1(t, y_1);
          return(t);
        }
        t = Strategies_1(t, x_1);
        return(t);
      }
      t = Cons_2(t, v_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, u_1);
    return(t);
  }
  t = Specification_1(t, t_1);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  q_58 :
  if(!(match_cons(r_58, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  v_58 :
  if(match_cons(w_58, sym_TCons_2))
    {
      x_58 = ATgetArgument(w_58, 0);
      y_58 = ATgetArgument(w_58, 1);
      {
        ATerm b_59 = NULL;
        t = not_null(x_58);
        {
          ATerm d_59 = NULL;
          t = t_62(t);
          b_59 = t;
          t = not_null(y_58);
          t = u_62(t);
          d_59 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_59), not_null(d_59));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_59 = NULL;
  ATerm p_13;
  p_13 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm l_59 = NULL,m_59 = NULL;
      l_59 = t;
      j_59 :
      if(match_cons(l_59, sym_Program_1))
        {
          m_59 = ATgetArgument(l_59, 0);
          if(k_59 != NULL && k_59 != m_59)
            _fail(m_59);
          else
            k_59 = m_59;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, c_2);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = p_13;
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
  ATerm p_59 = NULL;
  p_59 = t;
  t = SSL_exit(not_null(p_59));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL;
  w_59 = t;
  t_59 :
  if(match_cons(w_59, sym_TCons_2))
    {
      x_59 = ATgetArgument(w_59, 0);
      y_59 = ATgetArgument(w_59, 1);
      u_59 :
      if(match_cons(y_59, sym_TCons_2))
        {
          a_60 = ATgetArgument(y_59, 0);
          b_60 = ATgetArgument(y_59, 1);
          v_59 :
          if(match_cons(b_60, sym_TNil_0))
            {
              ATerm q_13;
              q_13 = t;
              t = SSL_printnl(not_null(x_59), not_null(a_60));
              t = q_13;
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
  ATerm r_13 = t;
  if(PushChoice()==0)
    {
      t = w_79(t);
      PopChoice();
    }
  else
    t = r_13;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      ATerm s_13 = t;
      if(PushChoice()==0)
        {
          ATerm h_2 (ATerm t)
          {
            ATerm o_60 = NULL;
            o_60 = t;
            f_60 :
            if(!(match_cons(o_60, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_2);
          PopChoice();
          _fail(t);
        }
      else
        t = s_13;
      return(t);
    }
    ATerm g_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, f_2, g_2);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_60 = NULL,q_60 = NULL;
          p_60 = t;
          h_60 :
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
        t = option_defined_1(t, o_2);
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, i_2, j_2);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm r_60 = NULL,s_60 = NULL;
            r_60 = t;
            k_60 :
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
          t = option_defined_1(t, t_2);
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, p_2, r_2);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_60), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, e_2);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  a_61 = t;
  x_60 :
  if(match_cons(a_61, sym_TCons_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      c_61 = ATgetArgument(a_61, 1);
      y_60 :
      if(match_cons(c_61, sym_TCons_2))
        {
          d_61 = ATgetArgument(c_61, 0);
          e_61 = ATgetArgument(c_61, 1);
          z_60 :
          if(match_cons(e_61, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(b_61), not_null(d_61));
          else
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
  ATerm m_61 = NULL,n_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  m_61 = t;
  j_61 :
  if(match_cons(m_61, sym_TCons_2))
    {
      n_61 = ATgetArgument(m_61, 0);
      r_61 = ATgetArgument(m_61, 1);
      k_61 :
      if(match_cons(r_61, sym_TCons_2))
        {
          s_61 = ATgetArgument(r_61, 0);
          t_61 = ATgetArgument(r_61, 1);
          l_61 :
          if(match_cons(t_61, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(n_61), not_null(s_61));
          else
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
  ATerm t_13;
  t_13 = t;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm u_13 = t;
      if(PushChoice()==0)
        {
          ATerm w_2 (ATerm t)
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
          t = option_defined_1(t, w_2);
          PopChoice();
        }
      else
        {
          t = u_13;
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
    ATerm v_2 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_2, v_2);
  }
  t = t_13;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          t = not_null(b_62);
          return(t);
        }
        t = split_2(t, c_3, _id);
        return(t);
      }
      t = TCons_2(t, b_3, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, x_2);
    {
      ATerm v_13 = t;
      if(PushChoice()==0)
        {
          ATerm d_3 (ATerm t)
          {
            ATerm n_3 (ATerm t)
            {
              ATerm f_62 = NULL;
              f_62 = t;
              a_62 :
              if(!(match_cons(f_62, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, n_3);
            return(t);
          }
          ATerm e_3 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, d_3, e_3);
          PopChoice();
        }
      else
        {
          t = v_13;
          {
            ATerm o_3 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, o_3);
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
  ATerm n_62 = NULL,r_62 = NULL,s_62 = NULL,v_62 = NULL,w_62 = NULL,z_62 = NULL;
  ATerm w_13;
  w_13 = t;
  t = dtime_0(t);
  t = w_13;
  t = z_65(t);
  {
    ATerm x_13;
    x_13 = t;
    {
      ATerm q_62 = NULL;
      t = dtime_0(t);
      q_62 = t;
      if(n_62 != NULL && n_62 != q_62)
        _fail(q_62);
      else
        n_62 = q_62;
    }
    t = x_13;
    r_62 = t;
    k_62 :
    if(match_cons(r_62, sym_TCons_2))
      {
        s_62 = ATgetArgument(r_62, 0);
        v_62 = ATgetArgument(r_62, 1);
        l_62 :
        if(match_cons(v_62, sym_TCons_2))
          {
            w_62 = ATgetArgument(v_62, 0);
            z_62 = ATgetArgument(v_62, 1);
            m_62 :
            if(match_cons(z_62, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_62)), not_null(s_62)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_62), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm f_63 = NULL;
  f_63 = t;
  t = SSL_ReadFromFile(not_null(f_63));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm l_63 = NULL;
  ATerm n_63 = NULL;
  l_63 = t;
  {
    ATerm p_63 = NULL;
    t = e_79(t);
    n_63 = t;
    t = not_null(l_63);
    t = f_79(t);
    p_63 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_63), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_63 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm z_13 = t;
    if(PushChoice()==0)
      {
        ATerm p_3 (ATerm t)
        {
          ATerm y_63 = NULL,z_63 = NULL;
          y_63 = t;
          v_63 :
          if(match_cons(y_63, sym_Input_1))
            {
              z_63 = ATgetArgument(y_63, 0);
              if(x_63 != NULL && x_63 != z_63)
                _fail(z_63);
              else
                x_63 = z_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_3);
        PopChoice();
      }
    else
      {
        t = z_13;
        {
          ATerm a_64 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          a_64 = t;
          if(x_63 != NULL && x_63 != a_64)
            _fail(a_64);
          else
            x_63 = a_64;
        }
      }
  }
  t = y_13;
  {
    ATerm q_3 (ATerm t)
    {
      t = not_null(x_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_64 = NULL;
  e_64 = t;
  d_64 :
  if(!(match_cons(e_64, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_56 (ATerm))
{
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Undefined_1))
    {
      j_64 = ATgetArgument(i_64, 0);
      {
        ATerm l_64 = NULL;
        t = not_null(j_64);
        t = z_56(t);
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_64));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  p_64 :
  if(!(match_cons(q_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm r_64 (ATerm t)
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, y_77, _id);
        PopChoice();
      }
    else
      {
        t = a_14;
        t = Cons_2(t, _id, r_64);
      }
    return(t);
  }
  t = r_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_65 (ATerm))
{
  t = fetch_1(t, d_65);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm b_14 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = b_14;
        {
          ATerm c_14 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = c_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_3);
  t = y_65(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_65 = NULL,g_65 = NULL,h_65 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
    k_65 = t;
    t_64 :
    if(match_cons(k_65, sym_TCons_2))
      {
        l_65 = ATgetArgument(k_65, 0);
        m_65 = ATgetArgument(k_65, 1);
        a_65 :
        if(match_cons(m_65, sym_TCons_2))
          {
            q_65 = ATgetArgument(m_65, 0);
            r_65 = ATgetArgument(m_65, 1);
            b_65 :
            if(match_cons(r_65, sym_TCons_2))
              {
                s_65 = ATgetArgument(r_65, 0);
                t_65 = ATgetArgument(r_65, 1);
                c_65 :
                if(match_cons(t_65, sym_TNil_0))
                  {
                    if(e_65 != NULL && e_65 != l_65)
                      _fail(l_65);
                    else
                      e_65 = l_65;
                    if(g_65 != NULL && g_65 != q_65)
                      _fail(q_65);
                    else
                      g_65 = q_65;
                    if(h_65 != NULL && h_65 != s_65)
                      _fail(s_65);
                    else
                      h_65 = s_65;
                    t = SSL_table_put(not_null(e_65), not_null(g_65), not_null(h_65));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = d_14;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_65 = NULL;
  w_65 = t;
  t = SSL_table_create(not_null(w_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  {
    ATerm e_14;
    e_14 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_66), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = e_14;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  h_66 :
  if(match_cons(i_66, sym_Cons_2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      {
        ATerm n_66 = NULL;
        t = not_null(j_66);
        t = w_64(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = x_64(t);
        n_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_66), not_null(k_66));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  v_66 = t;
  t_66 :
  if(match_cons(v_66, sym_Cons_2))
    {
      w_66 = ATgetArgument(v_66, 0);
      x_66 = ATgetArgument(v_66, 1);
      u_66 :
      if(match_cons(x_66, sym_Cons_2))
        {
          y_66 = ATgetArgument(x_66, 0);
          z_66 = ATgetArgument(x_66, 1);
          {
            ATerm d_67 = NULL;
            t = not_null(w_66);
            t = y_64(t);
            t = not_null(y_66);
            t = z_64(t);
            d_67 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_67), not_null(z_66));
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
  ATerm f_14 = t;
  if(PushChoice()==0)
    {
      ATerm s_3 (ATerm t)
      {
        ATerm f_68 = NULL;
        f_68 = t;
        h_67 :
        if(!(match_string(f_68, "-S")))
          _fail(t);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, s_3, t_3);
      PopChoice();
    }
  else
    {
      t = f_14;
      {
        ATerm g_14 = t;
        if(PushChoice()==0)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm g_68 = NULL;
              g_68 = t;
              i_67 :
              if(!(match_string(g_68, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, u_3, y_3);
            PopChoice();
          }
        else
          {
            t = g_14;
            {
              ATerm h_14 = t;
              if(PushChoice()==0)
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm h_68 = NULL;
                    h_68 = t;
                    j_67 :
                    if(!(match_string(h_68, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, z_3, a_4);
                  PopChoice();
                }
              else
                {
                  t = h_14;
                  {
                    ATerm i_14 = t;
                    if(PushChoice()==0)
                      {
                        ATerm j_4 (ATerm t)
                        {
                          ATerm i_68 = NULL;
                          i_68 = t;
                          k_67 :
                          if(!(match_string(i_68, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, j_4, k_4);
                        PopChoice();
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm j_14 = t;
                          if(PushChoice()==0)
                            {
                              ATerm l_4 (ATerm t)
                              {
                                ATerm j_68 = NULL;
                                j_68 = t;
                                l_67 :
                                if(!(match_string(j_68, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, l_4, n_4);
                              PopChoice();
                            }
                          else
                            {
                              t = j_14;
                              {
                                ATerm k_14 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm k_68 = NULL;
                                      k_68 = t;
                                      m_67 :
                                      if(!(match_string(k_68, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm l_68 = NULL;
                                      l_68 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_68));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, o_4, p_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_14;
                                    {
                                      ATerm l_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm u_4 (ATerm t)
                                          {
                                            ATerm t_68 = NULL;
                                            t_68 = t;
                                            o_67 :
                                            if(!(match_string(t_68, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm v_4 (ATerm t)
                                          {
                                            ATerm u_68 = NULL;
                                            u_68 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_68));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, u_4, v_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_14;
                                          {
                                            ATerm m_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm x_4 (ATerm t)
                                                {
                                                  ATerm w_68 = NULL;
                                                  w_68 = t;
                                                  q_67 :
                                                  if(!(match_string(w_68, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm z_4 (ATerm t)
                                                {
                                                  ATerm x_68 = NULL;
                                                  x_68 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_68));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, x_4, z_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_14;
                                                {
                                                  ATerm n_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm a_5 (ATerm t)
                                                      {
                                                        ATerm z_68 = NULL;
                                                        z_68 = t;
                                                        s_67 :
                                                        if(!(match_string(z_68, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm b_5 (ATerm t)
                                                      {
                                                        ATerm a_69 = NULL;
                                                        a_69 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_69));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, a_5, b_5);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
                                                      {
                                                        ATerm o_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm c_5 (ATerm t)
                                                            {
                                                              ATerm c_69 = NULL;
                                                              c_69 = t;
                                                              u_67 :
                                                              if(!(match_string(c_69, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm d_5 (ATerm t)
                                                            {
                                                              ATerm d_69 = NULL;
                                                              d_69 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_69));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, c_5, d_5);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = o_14;
                                                            {
                                                              ATerm p_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm e_5 (ATerm t)
                                                                  {
                                                                    ATerm f_69 = NULL;
                                                                    f_69 = t;
                                                                    a_68 :
                                                                    if(!(match_string(f_69, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm f_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, e_5, f_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_14;
                                                                  {
                                                                    ATerm q_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm k_5 (ATerm t)
                                                                        {
                                                                          ATerm g_69 = NULL;
                                                                          g_69 = t;
                                                                          b_68 :
                                                                          if(!(match_string(g_69, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm n_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, k_5, n_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_14;
                                                                        {
                                                                          ATerm r_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm t_5 (ATerm t)
                                                                              {
                                                                                ATerm h_69 = NULL;
                                                                                h_69 = t;
                                                                                c_68 :
                                                                                if(!(match_string(h_69, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm u_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, t_5, u_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_14;
                                                                              {
                                                                                ATerm s_14 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm v_5 (ATerm t)
                                                                                    {
                                                                                      ATerm i_69 = NULL;
                                                                                      i_69 = t;
                                                                                      d_68 :
                                                                                      if(!(match_string(i_69, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, v_5, w_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_14;
                                                                                    {
                                                                                      ATerm a_6 (ATerm t)
                                                                                      {
                                                                                        ATerm j_69 = NULL;
                                                                                        j_69 = t;
                                                                                        e_68 :
                                                                                        if(!(match_string(j_69, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm b_6 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, a_6, b_6);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  q_69 :
  if(match_cons(r_69, sym_Cons_2))
    {
      s_69 = ATgetArgument(r_69, 0);
      t_69 = ATgetArgument(r_69, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_69)), not_null(t_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  e_70 :
  if(match_cons(f_70, sym_Cons_2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      {
        ATerm k_70 = NULL;
        t = not_null(g_70);
        {
          ATerm m_70 = NULL;
          t = x_62(t);
          k_70 = t;
          t = not_null(h_70);
          t = y_62(t);
          m_70 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_70), not_null(m_70));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm s_70 = NULL;
  s_70 = t;
  r_70 :
  if(!(match_cons(s_70, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm u_70 = NULL;
    u_70 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_70));
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm t_14 = t;
    if(PushChoice()==0)
      {
        ATerm u_14 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = u_14;
            t = u_64(t);
            t = Cons_2(t, _id, d_6);
          }
        PopChoice();
      }
    else
      {
        t = t_14;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, c_6, d_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm v_14 = t;
    if(PushChoice()==0)
      {
        t = o_65(t);
        PopChoice();
      }
    else
      {
        t = v_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_6);
  t = store_options_0(t);
  {
    ATerm y_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, p_65);
        PopChoice();
      }
    else
      {
        t = y_14;
        {
          ATerm z_14 = t;
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
              t = z_14;
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
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      t = TCons_2(t, f_65, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, n_6);
    return(t);
  }
  t = iowrap_2(t, m_6, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = simplify_0(t);
      t = simplify_widen_0(t);
      t = simplify_0(t);
      t = simplify_narrow_0(t);
      t = simplify_0(t);
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
  t = optimize1_comp_0(t);
  return(t);
}
