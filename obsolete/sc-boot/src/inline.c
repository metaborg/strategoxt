#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_60 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm o_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm Let_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm k_80 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm l_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm b_70 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_64 (ATerm), ATerm m_64 (ATerm));
ATerm for_3 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm y_56 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_67 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm r_66 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm w_66 (ATerm));
ATerm rename_4 (ATerm, ATerm x_67 (ATerm, ATerm (ATerm)), ATerm y_67 (ATerm), ATerm z_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_68 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_76 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_59 (ATerm));
ATerm scope_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_59 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm crush_3 (ATerm, ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm Choice_2 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Match_1 (ATerm, ATerm n_58 (ATerm));
ATerm Seq_2 (ATerm, ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm));
ATerm Build_1 (ATerm, ATerm o_58 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_57 (ATerm));
ATerm Call_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm zip_1 (ATerm, ATerm m_72 (ATerm));
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
ATerm downup_1 (ATerm, ATerm s_76 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_56 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_56 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_62 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_61 (ATerm));
ATerm map_1 (ATerm, ATerm x_73 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_63 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_61 (ATerm));
ATerm Program_1 (ATerm, ATerm e_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_61 (ATerm));
ATerm Option_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_62 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  a_3 = t;
  x_2 :
  if(match_cons(a_3, sym_TCons_2))
    {
      b_3 = ATgetArgument(a_3, 0);
      c_3 = ATgetArgument(a_3, 1);
      y_2 :
      if(match_cons(c_3, sym_TCons_2))
        {
          d_3 = ATgetArgument(c_3, 0);
          e_3 = ATgetArgument(c_3, 1);
          z_2 :
          if(match_cons(e_3, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_3), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_get_0(t);
              t = Hd_0(t);
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
ATerm rewrite_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm k_3 = NULL;
  ATerm m_3 = NULL;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = b_60(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_3), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym_Cons_2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      t = not_null(t_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, o_80);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
            i_4 = t;
            z_3 :
            if(match_cons(i_4, sym_TCons_2))
              {
                j_4 = ATgetArgument(i_4, 0);
                n_4 = ATgetArgument(i_4, 1);
                a_4 :
                if(match_cons(j_4, sym_SDef_3))
                  {
                    k_4 = ATgetArgument(j_4, 0);
                    l_4 = ATgetArgument(j_4, 1);
                    m_4 = ATgetArgument(j_4, 2);
                    b_4 :
                    if(match_cons(n_4, sym_TCons_2))
                      {
                        o_4 = ATgetArgument(n_4, 0);
                        p_4 = ATgetArgument(n_4, 1);
                        c_4 :
                        if(match_cons(p_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_4), not_null(l_4), not_null(m_4));
                        else
                          _fail(t);
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
          t = zip_1(t, b_0);
        }
        return(t);
      }
      t = Let_2(t, a_0, _id);
      PopChoice();
    }
  else
    {
      t = u_9;
      {
        ATerm v_9 = t;
        if(PushChoice()==0)
          {
            ATerm m_0 (ATerm t)
            {
              t = split_2(t, _id, o_80);
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
                  t_4 = t;
                  e_4 :
                  if(match_cons(t_4, sym_TCons_2))
                    {
                      u_4 = ATgetArgument(t_4, 0);
                      x_4 = ATgetArgument(t_4, 1);
                      f_4 :
                      if(match_cons(u_4, sym_VarDec_2))
                        {
                          v_4 = ATgetArgument(u_4, 0);
                          w_4 = ATgetArgument(u_4, 1);
                          g_4 :
                          if(match_cons(x_4, sym_TCons_2))
                            {
                              y_4 = ATgetArgument(x_4, 0);
                              z_4 = ATgetArgument(x_4, 1);
                              h_4 :
                              if(match_cons(z_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_4), not_null(w_4));
                              else
                                _fail(t);
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
                t = zip_1(t, n_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, m_0, _id);
            PopChoice();
          }
        else
          {
            t = v_9;
            {
              ATerm o_0 (ATerm t)
              {
                t = o_80(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, o_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym_Rec_2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm o_5 = NULL;
        t = not_null(k_5);
        {
          ATerm q_5 = NULL;
          t = n_57(t);
          o_5 = t;
          t = not_null(l_5);
          t = o_57(t);
          q_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(o_5), not_null(q_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym_Let_2))
    {
      a_6 = ATgetArgument(z_5, 0);
      b_6 = ATgetArgument(z_5, 1);
      {
        ATerm e_6 = NULL;
        t = not_null(a_6);
        {
          ATerm g_6 = NULL;
          t = p_57(t);
          e_6 = t;
          t = not_null(b_6);
          t = q_57(t);
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_6), not_null(g_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm))
{
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, p_80, p_80);
      PopChoice();
    }
  else
    {
      t = w_9;
      {
        ATerm i_10 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, r_80, r_80, p_80);
            PopChoice();
          }
        else
          {
            t = i_10;
            t = Rec_2(t, r_80, p_80);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym_Rec_2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym_SDef_3))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      a_7 = ATgetArgument(x_6, 2);
      t = not_null(z_6);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
          e_7 = t;
          v_6 :
          if(match_cons(e_7, sym_VarDec_2))
            {
              f_7 = ATgetArgument(e_7, 0);
              g_7 = ATgetArgument(e_7, 1);
              t = not_null(f_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, p_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym_Let_2))
    {
      p_7 = ATgetArgument(o_7, 0);
      q_7 = ATgetArgument(o_7, 1);
      t = not_null(p_7);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
          t_7 = t;
          m_7 :
          if(match_cons(t_7, sym_SDef_3))
            {
              u_7 = ATgetArgument(t_7, 0);
              v_7 = ATgetArgument(t_7, 1);
              w_7 = ATgetArgument(t_7, 2);
              t = not_null(u_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, q_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm j_10 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = j_10;
        {
          ATerm k_10 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = k_10;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, r_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm k_80 (ATerm))
{
  t = Scope_2(t, k_80, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_DynamicRules_1))
    {
      g_8 = ATgetArgument(f_8, 0);
      {
        ATerm i_8 = NULL;
        t = not_null(g_8);
        t = l_56(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm l_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, n_80, l_80);
      PopChoice();
    }
  else
    {
      t = l_10;
      t = DynamicRules_1(t, l_80);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_DynamicRules_1))
    {
      p_8 = ATgetArgument(o_8, 0);
      t = not_null(p_8);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Var_1))
    {
      v_8 = ATgetArgument(u_8, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  c_9 = t;
  z_8 :
  if(match_cons(c_9, sym_TCons_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      a_9 :
      if(match_cons(e_9, sym_TCons_2))
        {
          f_9 = ATgetArgument(e_9, 0);
          g_9 = ATgetArgument(e_9, 1);
          b_9 :
          if(match_cons(g_9, sym_TNil_0))
            {
              t = not_null(d_9);
              {
                ATerm k_9 (ATerm t)
                {
                  ATerm m_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(f_9);
                      PopChoice();
                    }
                  else
                    {
                      t = m_10;
                      {
                        ATerm n_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm s_0 (ATerm t)
                            {
                              t = not_null(f_9);
                              return(t);
                            }
                            t = HdMember_1(t, s_0);
                            t = k_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = n_10;
                            t = Cons_2(t, _id, k_9);
                          }
                      }
                    }
                  return(t);
                }
                t = k_9(t);
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
ATerm HdMember_1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Cons_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      t = b_70(t);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm t_9 = NULL;
          t_9 = t;
          if(p_9 != NULL && p_9 != t_9)
            _fail(t_9);
          else
            p_9 = t_9;
          return(t);
        }
        t = fetch_1(t, t_0);
        t = not_null(q_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  b_10 = t;
  x_9 :
  if(match_cons(b_10, sym_TCons_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      y_9 :
      if(match_cons(d_10, sym_TCons_2))
        {
          e_10 = ATgetArgument(d_10, 0);
          h_10 = ATgetArgument(d_10, 1);
          z_9 :
          if(match_cons(e_10, sym_Cons_2))
            {
              f_10 = ATgetArgument(e_10, 0);
              g_10 = ATgetArgument(e_10, 1);
              a_10 :
              if(match_cons(h_10, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_10), not_null(c_10)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_10), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  u_11 = t;
  p_11 :
  if(match_cons(u_11, sym_Cons_2))
    {
      v_11 = ATgetArgument(u_11, 0);
      a_12 = ATgetArgument(u_11, 1);
      q_11 :
      if(match_cons(v_11, sym_TCons_2))
        {
          w_11 = ATgetArgument(v_11, 0);
          x_11 = ATgetArgument(v_11, 1);
          s_11 :
          if(match_cons(x_11, sym_TCons_2))
            {
              y_11 = ATgetArgument(x_11, 0);
              z_11 = ATgetArgument(x_11, 1);
              t_11 :
              if(match_cons(z_11, sym_TNil_0))
                {
                  ATerm e_12 = NULL,f_12 = NULL,n_12 = NULL,v_12 = NULL;
                  ATerm o_10;
                  o_10 = t;
                  {
                    ATerm g_12 = NULL;
                    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                    t = not_null(y_11);
                    g_12 = t;
                    t = SSL_explode_term(not_null(g_12));
                    i_12 = t;
                    w_10 :
                    if(match_cons(i_12, sym_TCons_2))
                      {
                        j_12 = ATgetArgument(i_12, 0);
                        k_12 = ATgetArgument(i_12, 1);
                        x_10 :
                        if(match_cons(k_12, sym_TCons_2))
                          {
                            l_12 = ATgetArgument(k_12, 0);
                            m_12 = ATgetArgument(k_12, 1);
                            y_10 :
                            if(match_cons(m_12, sym_TNil_0))
                              {
                                if(e_12 != NULL && e_12 != j_12)
                                  _fail(j_12);
                                else
                                  e_12 = j_12;
                                if(f_12 != NULL && f_12 != l_12)
                                  _fail(l_12);
                                else
                                  f_12 = l_12;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = o_10;
                  {
                    ATerm o_12 = NULL;
                    ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
                    t = not_null(w_11);
                    o_12 = t;
                    t = SSL_explode_term(not_null(o_12));
                    q_12 = t;
                    b_11 :
                    if(match_cons(q_12, sym_TCons_2))
                      {
                        r_12 = ATgetArgument(q_12, 0);
                        s_12 = ATgetArgument(q_12, 1);
                        c_11 :
                        if(match_cons(s_12, sym_TCons_2))
                          {
                            t_12 = ATgetArgument(s_12, 0);
                            u_12 = ATgetArgument(s_12, 1);
                            d_11 :
                            if(match_cons(u_12, sym_TNil_0))
                              {
                                if(e_12 != NULL && e_12 != r_12)
                                  _fail(r_12);
                                else
                                  e_12 = r_12;
                                if(n_12 != NULL && n_12 != t_12)
                                  _fail(t_12);
                                else
                                  n_12 = t_12;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    v_12 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,e_14 = NULL,f_14 = NULL,k_14 = NULL;
  i_13 = t;
  e_13 :
  if(match_cons(i_13, sym_Cons_2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_14 = ATgetArgument(i_13, 1);
      f_13 :
      if(match_cons(j_13, sym_TCons_2))
        {
          k_13 = ATgetArgument(j_13, 0);
          l_13 = ATgetArgument(j_13, 1);
          g_13 :
          if(match_cons(l_13, sym_TCons_2))
            {
              e_14 = ATgetArgument(l_13, 0);
              f_14 = ATgetArgument(l_13, 1);
              h_13 :
              if(match_cons(f_14, sym_TNil_0))
                {
                  ATerm v_14 = NULL;
                  if(k_13 != NULL && k_13 != e_14)
                    _fail(e_14);
                  else
                    k_13 = e_14;
                  if(v_14 != NULL && v_14 != k_14)
                    _fail(k_14);
                  else
                    v_14 = k_14;
                  t = not_null(v_14);
                }
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm l_64 (ATerm), ATerm m_64 (ATerm))
{
  ATerm x_14 (ATerm t)
  {
    ATerm p_10 = t;
    if(PushChoice()==0)
      {
        t = l_64(t);
        PopChoice();
      }
    else
      {
        t = p_10;
        t = m_64(t);
        t = x_14(t);
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm))
{
  t = o_64(t);
  t = while_not_2(t, p_64, q_64);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm q_10 = t;
  if(PushChoice()==0)
    {
      ATerm u_0 (ATerm t)
      {
        ATerm d_15 = NULL;
        d_15 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_15), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, x_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm r_10 = t;
        if(PushChoice()==0)
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                ATerm s_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = s_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, z_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_0);
            PopChoice();
          }
        else
          {
            t = r_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      PopChoice();
    }
  else
    {
      t = q_10;
      {
        ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
        f_15 = t;
        a_15 :
        if(match_cons(f_15, sym_TCons_2))
          {
            g_15 = ATgetArgument(f_15, 0);
            h_15 = ATgetArgument(f_15, 1);
            b_15 :
            if(match_cons(h_15, sym_TCons_2))
              {
                i_15 = ATgetArgument(h_15, 0);
                j_15 = ATgetArgument(h_15, 1);
                c_15 :
                if(match_cons(j_15, sym_TNil_0))
                  {
                    t = not_null(g_15);
                    {
                      ATerm o_15 (ATerm t)
                      {
                        ATerm t_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_10;
                            {
                              ATerm u_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm a_1 (ATerm t)
                                  {
                                    t = not_null(i_15);
                                    return(t);
                                  }
                                  t = HdMember_1(t, a_1);
                                  t = o_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = u_10;
                                  t = Cons_2(t, _id, o_15);
                                }
                            }
                          }
                        return(t);
                      }
                      t = o_15(t);
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
ATerm free_vars_3 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_15 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = w_65(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        {
          ATerm z_10 = t;
          if(PushChoice()==0)
            {
              ATerm q_15 = NULL;
              ATerm a_11;
              a_11 = t;
              {
                ATerm r_15 = NULL;
                t = x_65(t);
                r_15 = t;
                if(q_15 != NULL && q_15 != r_15)
                  _fail(r_15);
                else
                  q_15 = r_15;
              }
              t = a_11;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(q_15);
                    return(t);
                  }
                  t = split_2(t, s_15, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = y_65(t, b_1, s_15, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = z_10;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, f_1, union_0, s_15);
              }
            }
        }
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm e_11 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = e_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  w_15 :
  if(match_cons(z_15, sym_Scope_2))
    {
      a_16 = ATgetArgument(z_15, 0);
      y_15 = ATgetArgument(z_15, 1);
      t = not_null(a_16);
    }
  else
    {
      if(match_cons(z_15, sym_LRule_1))
        {
          a_16 = ATgetArgument(z_15, 0);
          x_15 :
          if(match_cons(a_16, sym_Rule_3))
            {
              b_16 = ATgetArgument(a_16, 0);
              c_16 = ATgetArgument(a_16, 1);
              d_16 = ATgetArgument(a_16, 2);
              t = not_null(b_16);
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
ATerm Var_1 (ATerm t, ATerm y_56 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Var_1))
    {
      p_16 = ATgetArgument(o_16, 0);
      {
        ATerm r_16 = NULL;
        t = not_null(p_16);
        t = y_56(t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  c_17 = t;
  y_16 :
  if(match_cons(c_17, sym_TCons_2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      z_16 :
      if(match_cons(e_17, sym_TCons_2))
        {
          f_17 = ATgetArgument(e_17, 0);
          g_17 = ATgetArgument(e_17, 1);
          a_17 :
          if(match_cons(g_17, sym_TCons_2))
            {
              h_17 = ATgetArgument(g_17, 0);
              i_17 = ATgetArgument(g_17, 1);
              b_17 :
              if(match_cons(i_17, sym_TNil_0))
                {
                  t = not_null(d_17);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm m_17 = NULL;
                      m_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = p_67(t);
                      return(t);
                    }
                    ATerm i_1 (ATerm t)
                    {
                      ATerm o_17 = NULL;
                      o_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = p_67(t);
                      return(t);
                    }
                    t = q_67(t, h_1, i_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm, ATerm (ATerm)))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  z_17 :
  if(match_cons(d_18, sym_TCons_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      b_18 :
      if(match_cons(f_18, sym_TCons_2))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          c_18 :
          if(match_cons(h_18, sym_TNil_0))
            {
              ATerm k_18 = NULL;
              t = not_null(e_18);
              {
                ATerm m_18 = NULL;
                t = v_67(t);
                k_18 = t;
                {
                  ATerm o_18 = NULL;
                  t = map_1(t, new_0);
                  m_18 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm q_18 = NULL;
                    t = zip_1(t, _id);
                    o_18 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm s_18 = NULL;
                      t = conc_0(t);
                      q_18 = t;
                      t = not_null(e_18);
                      {
                        ATerm j_1 (ATerm t)
                        {
                          t = not_null(m_18);
                          return(t);
                        }
                        t = w_67(t, j_1);
                        s_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_18), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  f_19 = t;
  b_19 :
  if(match_cons(f_19, sym_TCons_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      c_19 :
      if(match_cons(h_19, sym_TCons_2))
        {
          i_19 = ATgetArgument(h_19, 0);
          l_19 = ATgetArgument(h_19, 1);
          d_19 :
          if(match_cons(i_19, sym_Cons_2))
            {
              j_19 = ATgetArgument(i_19, 0);
              k_19 = ATgetArgument(i_19, 1);
              e_19 :
              if(match_cons(l_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  x_19 = t;
  q_19 :
  if(match_cons(x_19, sym_TCons_2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      r_19 :
      if(match_cons(z_19, sym_TCons_2))
        {
          a_20 = ATgetArgument(z_19, 0);
          h_20 = ATgetArgument(z_19, 1);
          s_19 :
          if(match_cons(a_20, sym_Cons_2))
            {
              b_20 = ATgetArgument(a_20, 0);
              g_20 = ATgetArgument(a_20, 1);
              t_19 :
              if(match_cons(b_20, sym_TCons_2))
                {
                  c_20 = ATgetArgument(b_20, 0);
                  d_20 = ATgetArgument(b_20, 1);
                  u_19 :
                  if(match_cons(d_20, sym_TCons_2))
                    {
                      e_20 = ATgetArgument(d_20, 0);
                      f_20 = ATgetArgument(d_20, 1);
                      v_19 :
                      if(match_cons(f_20, sym_TNil_0))
                        {
                          w_19 :
                          if(match_cons(h_20, sym_TNil_0))
                            {
                              ATerm j_20 = NULL;
                              if(y_19 != NULL && y_19 != c_20)
                                _fail(c_20);
                              else
                                y_19 = c_20;
                              if(j_20 != NULL && j_20 != e_20)
                                _fail(e_20);
                              else
                                j_20 = e_20;
                              t = not_null(j_20);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm f_11 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = f_11;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_67 (ATerm, ATerm (ATerm)))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  q_20 = t;
  n_20 :
  if(match_cons(q_20, sym_TCons_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      o_20 :
      if(match_cons(s_20, sym_TCons_2))
        {
          t_20 = ATgetArgument(s_20, 0);
          u_20 = ATgetArgument(s_20, 1);
          p_20 :
          if(match_cons(u_20, sym_TNil_0))
            {
              t = not_null(r_20);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = not_null(t_20);
                    return(t);
                  }
                  t = split_2(t, _id, l_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = j_67(t, k_1);
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
ATerm all_dist_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  d_21 = t;
  a_21 :
  if(match_cons(d_21, sym_TCons_2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      b_21 :
      if(match_cons(f_21, sym_TCons_2))
        {
          g_21 = ATgetArgument(f_21, 0);
          h_21 = ATgetArgument(f_21, 1);
          c_21 :
          if(match_cons(h_21, sym_TNil_0))
            {
              t = not_null(e_21);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm s_21 = NULL;
                  s_21 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_21), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = r_66(t);
                  return(t);
                }
                t = _all(t, m_1);
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
ATerm env_alltd_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm i_22 (ATerm t)
  {
    ATerm g_11 = t;
    if(PushChoice()==0)
      {
        t = w_66(t);
        PopChoice();
      }
    else
      {
        t = g_11;
        t = all_dist_1(t, i_22);
      }
    return(t);
  }
  t = i_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm x_67 (ATerm, ATerm (ATerm)), ATerm y_67 (ATerm), ATerm z_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_68 (ATerm, ATerm (ATerm)))
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_22), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm n_22 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm h_11 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, x_67);
            PopChoice();
          }
        else
          {
            t = h_11;
            t = RnBinding_2(t, y_67, a_68);
            t = DistBinding_2(t, n_22, z_67);
          }
        return(t);
      }
      t = env_alltd_1(t, n_1);
      return(t);
    }
    t = n_22(t);
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  u_22 = t;
  s_22 :
  if(match_cons(u_22, sym_Call_2))
    {
      v_22 = ATgetArgument(u_22, 0);
      x_22 = ATgetArgument(u_22, 1);
      t_22 :
      if(match_cons(v_22, sym_SVar_1))
        {
          w_22 = ATgetArgument(v_22, 0);
          {
            ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_22));
            {
              ATerm o_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, o_1);
              a_23 = t;
              q_22 :
              if(match_cons(a_23, sym_Defined_2))
                {
                  b_23 = ATgetArgument(a_23, 0);
                  c_23 = ATgetArgument(a_23, 1);
                  r_22 :
                  if(match_string(b_23, "f_0"))
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_23)), not_null(x_22));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  n_23 = t;
  k_23 :
  if(match_cons(n_23, sym_Call_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      q_23 = ATgetArgument(n_23, 1);
      l_23 :
      if(match_cons(o_23, sym_SVar_1))
        {
          p_23 = ATgetArgument(o_23, 0);
          m_23 :
          if(match_cons(q_23, sym_Nil_0))
            {
              ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_23));
              {
                ATerm p_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, p_1);
                s_23 = t;
                i_23 :
                if(match_cons(s_23, sym_Defined_2))
                  {
                    t_23 = ATgetArgument(s_23, 0);
                    u_23 = ATgetArgument(s_23, 1);
                    j_23 :
                    if(match_string(t_23, "e_0"))
                      {
                        t = not_null(u_23);
                        t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm y_23 (ATerm t)
  {
    t = o_76(t);
    t = _all(t, y_23);
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  o_25 = t;
  b_24 :
  if(match_cons(o_25, sym_TCons_2))
    {
      p_25 = ATgetArgument(o_25, 0);
      y_25 = ATgetArgument(o_25, 1);
      c_24 :
      if(match_cons(p_25, sym_VarDec_2))
        {
          q_25 = ATgetArgument(p_25, 0);
          r_25 = ATgetArgument(p_25, 1);
          d_24 :
          if(match_cons(r_25, sym_FunType_2))
            {
              s_25 = ATgetArgument(r_25, 0);
              x_25 = ATgetArgument(r_25, 1);
              e_24 :
              if(match_cons(s_25, sym_Cons_2))
                {
                  t_25 = ATgetArgument(s_25, 0);
                  u_25 = ATgetArgument(s_25, 1);
                  f_24 :
                  if(match_cons(u_25, sym_Nil_0))
                    {
                      g_24 :
                      if(match_cons(y_25, sym_TCons_2))
                        {
                          z_25 = ATgetArgument(y_25, 0);
                          d_26 = ATgetArgument(y_25, 1);
                          h_24 :
                          if(match_cons(d_26, sym_TNil_0))
                            {
                              ATerm i_11;
                              i_11 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue)), not_null(z_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, q_1);
                              }
                              t = i_11;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(u_25, sym_Cons_2))
                        {
                          v_25 = ATgetArgument(u_25, 0);
                          w_25 = ATgetArgument(u_25, 1);
                          r_24 :
                          if(match_cons(y_25, sym_TCons_2))
                            {
                              z_25 = ATgetArgument(y_25, 0);
                              d_26 = ATgetArgument(y_25, 1);
                              s_24 :
                              if(match_cons(z_25, sym_Call_2))
                                {
                                  a_26 = ATgetArgument(z_25, 0);
                                  c_26 = ATgetArgument(z_25, 1);
                                  t_24 :
                                  if(match_cons(a_26, sym_SVar_1))
                                    {
                                      b_26 = ATgetArgument(a_26, 0);
                                      m_25 :
                                      if(match_cons(c_26, sym_Nil_0))
                                        {
                                          n_25 :
                                          if(match_cons(d_26, sym_TNil_0))
                                            {
                                              ATerm j_11;
                                              j_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue)), not_null(b_26)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm r_1 (ATerm t)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                                  return(t);
                                                }
                                                t = assert_1(t, r_1);
                                              }
                                              t = j_11;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
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
  else
    _fail(t);
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm w_26 = NULL,c_27 = NULL,d_27 = NULL;
  ATerm s_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
      return(t);
    }
    ATerm v_1 (ATerm t)
    {
      ATerm e_27 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
      e_27 = t;
      s_26 :
      if(match_cons(e_27, sym_TCons_2))
        {
          f_27 = ATgetArgument(e_27, 0);
          i_27 = ATgetArgument(e_27, 1);
          t_26 :
          if(match_cons(i_27, sym_TCons_2))
            {
              j_27 = ATgetArgument(i_27, 0);
              k_27 = ATgetArgument(i_27, 1);
              u_26 :
              if(match_cons(k_27, sym_TCons_2))
                {
                  l_27 = ATgetArgument(k_27, 0);
                  m_27 = ATgetArgument(k_27, 1);
                  v_26 :
                  if(match_cons(m_27, sym_TNil_0))
                    {
                      if(w_26 != NULL && w_26 != f_27)
                        _fail(f_27);
                      else
                        w_26 = f_27;
                      if(c_27 != NULL && c_27 != j_27)
                        _fail(j_27);
                      else
                        c_27 = j_27;
                      if(d_27 != NULL && d_27 != l_27)
                        _fail(l_27);
                      else
                        d_27 = l_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_27), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, substitute_arg_0);
                      t = not_null(d_27);
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm k_11 = t;
                            if(PushChoice()==0)
                              {
                                t = SubsArgCall1_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = k_11;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, x_1);
                          return(t);
                        }
                        t = topdown_1(t, w_1);
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
    t = scope_2(t, u_1, v_1);
    return(t);
  }
  t = scope_2(t, s_1, t_1);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm c_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  ATerm h_31 (ATerm t)
  {
    ATerm t_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_29));
    {
      ATerm y_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, y_1);
      t_29 = t;
      v_27 :
      if(match_cons(t_29, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm i_31 (ATerm t)
  {
    ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_29));
    {
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, z_1);
      w_29 = t;
      a_28 :
      if(match_cons(w_29, sym_Defined_3))
        {
          x_29 = ATgetArgument(w_29, 0);
          y_29 = ATgetArgument(w_29, 1);
          z_29 = ATgetArgument(w_29, 2);
          b_28 :
          if(match_string(x_29, "c_0"))
            {
              ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL;
              if(p_29 != NULL && p_29 != z_29)
                _fail(z_29);
              else
                p_29 = z_29;
              t = not_null(y_29);
              t = strename_0(t);
              b_30 = t;
              z_27 :
              if(match_cons(b_30, sym_SDef_3))
                {
                  c_30 = ATgetArgument(b_30, 0);
                  d_30 = ATgetArgument(b_30, 1);
                  g_30 = ATgetArgument(b_30, 2);
                  {
                    ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
                    if(p_29 != NULL && p_29 != c_30)
                      _fail(c_30);
                    else
                      p_29 = c_30;
                    if(h_30 != NULL && h_30 != d_30)
                      _fail(d_30);
                    else
                      h_30 = d_30;
                    if(i_30 != NULL && i_30 != g_30)
                      _fail(g_30);
                    else
                      i_30 = g_30;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_30), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = substitute_args_0(t);
                    j_30 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm a_2 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, a_2);
                    }
                    t = not_null(j_30);
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
    return(t);
  }
  ATerm j_31 (ATerm t)
  {
    ATerm m_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_29));
    {
      ATerm b_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, b_2);
      m_30 = t;
      d_28 :
      if(match_cons(m_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm k_31 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_29));
    {
      ATerm c_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, c_2);
      o_30 = t;
      j_28 :
      if(match_cons(o_30, sym_Defined_3))
        {
          p_30 = ATgetArgument(o_30, 0);
          q_30 = ATgetArgument(o_30, 1);
          r_30 = ATgetArgument(o_30, 2);
          k_28 :
          if(match_string(p_30, "d_0"))
            {
              ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
              if(p_29 != NULL && p_29 != r_30)
                _fail(r_30);
              else
                p_29 = r_30;
              t = not_null(q_30);
              t = strename_0(t);
              t_30 = t;
              h_28 :
              if(match_cons(t_30, sym_SDef_3))
                {
                  u_30 = ATgetArgument(t_30, 0);
                  v_30 = ATgetArgument(t_30, 1);
                  y_30 = ATgetArgument(t_30, 2);
                  i_28 :
                  if(match_cons(v_30, sym_Cons_2))
                    {
                      w_30 = ATgetArgument(v_30, 0);
                      x_30 = ATgetArgument(v_30, 1);
                      {
                        ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
                        if(p_29 != NULL && p_29 != u_30)
                          _fail(u_30);
                        else
                          p_29 = u_30;
                        if(z_30 != NULL && z_30 != v_30)
                          _fail(v_30);
                        else
                          z_30 = v_30;
                        if(a_31 != NULL && a_31 != y_30)
                          _fail(y_30);
                        else
                          a_31 = y_30;
                        t = new_0(t);
                        b_31 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm d_2 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, d_2);
                        }
                        t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(b_31), not_null(z_30), not_null(a_31)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_31)), (ATerm) ATmakeAppl(sym_Nil_0)));
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
    return(t);
  }
  ATerm l_31 (ATerm t)
  {
    ATerm g_31 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_29));
    {
      ATerm e_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, e_2);
      g_31 = t;
      v_28 :
      if(match_cons(g_31, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  c_29 = t;
  w_28 :
  if(match_cons(c_29, sym_Call_2))
    {
      o_29 = ATgetArgument(c_29, 0);
      q_29 = ATgetArgument(c_29, 1);
      x_28 :
      if(match_cons(o_29, sym_SVar_1))
        {
          p_29 = ATgetArgument(o_29, 0);
          b_29 :
          if(match_cons(q_29, sym_Nil_0))
            {
              ATerm l_11 = t;
              if(PushChoice()==0)
                {
                  t = h_31(t);
                  PopChoice();
                }
              else
                {
                  t = l_11;
                  {
                    ATerm m_11 = t;
                    if(PushChoice()==0)
                      {
                        t = i_31(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_11;
                        {
                          ATerm n_11 = t;
                          if(PushChoice()==0)
                            {
                              t = j_31(t);
                              PopChoice();
                            }
                          else
                            {
                              t = n_11;
                              {
                                ATerm o_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = k_31(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_11;
                                    t = l_31(t);
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          else
            {
              ATerm r_11 = t;
              if(PushChoice()==0)
                {
                  t = h_31(t);
                  PopChoice();
                }
              else
                {
                  t = r_11;
                  {
                    ATerm b_12 = t;
                    if(PushChoice()==0)
                      {
                        t = i_31(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_12;
                        {
                          ATerm c_12 = t;
                          if(PushChoice()==0)
                            {
                              t = j_31(t);
                              PopChoice();
                            }
                          else
                            {
                              t = c_12;
                              t = l_31(t);
                            }
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
  return(t);
}
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_SDef_3))
    {
      y_31 = ATgetArgument(x_31, 0);
      z_31 = ATgetArgument(x_31, 1);
      a_32 = ATgetArgument(x_31, 2);
      {
        ATerm d_12;
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm f_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, f_2);
        }
        t = d_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_32 = NULL,i_32 = NULL,j_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Cons_2))
    {
      i_32 = ATgetArgument(f_32, 0);
      j_32 = ATgetArgument(f_32, 1);
      t = not_null(j_32);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  s_32 = t;
  p_32 :
  if(match_cons(s_32, sym_TCons_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      u_32 = ATgetArgument(s_32, 1);
      q_32 :
      if(match_cons(u_32, sym_TCons_2))
        {
          v_32 = ATgetArgument(u_32, 0);
          w_32 = ATgetArgument(u_32, 1);
          r_32 :
          if(match_cons(w_32, sym_TNil_0))
            {
              ATerm h_12;
              h_12 = t;
              {
                ATerm z_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm p_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  z_32 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_32), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = h_12;
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
ATerm end_scope_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    ATerm k_33 = NULL;
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
    t = w_59(t);
    k_33 = t;
    if(i_33 != NULL && i_33 != k_33)
      _fail(k_33);
    else
      i_33 = k_33;
    {
      ATerm x_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = x_12;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      l_33 = t;
      g_33 :
      if(match_cons(l_33, sym_Cons_2))
        {
          m_33 = ATgetArgument(l_33, 0);
          n_33 = ATgetArgument(l_33, 1);
          if(j_33 != NULL && j_33 != m_33)
            _fail(m_33);
          else
            j_33 = m_33;
          if(h_33 != NULL && h_33 != n_33)
            _fail(n_33);
          else
            h_33 = n_33;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_33), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(j_33);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm o_33 = NULL;
              o_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_33), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, g_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = w_12;
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm v_33 = NULL;
  ATerm y_12;
  y_12 = t;
  {
    ATerm w_33 = NULL;
    ATerm x_33 = NULL;
    t = v_59(t);
    w_33 = t;
    if(v_33 != NULL && v_33 != w_33)
      _fail(w_33);
    else
      v_33 = w_33;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm z_12 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = z_12;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(x_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = y_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  t = begin_scope_1(t, x_59);
  {
    ATerm a_13 = t;
    if(PushChoice()==0)
      {
        t = y_59(t);
        t = end_scope_1(t, x_59);
        PopChoice();
      }
    else
      {
        t = a_13;
        t = end_scope_1(t, x_59);
        _fail(t);
      }
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm b_13 = t;
    if(PushChoice()==0)
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = b_13;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, h_2, i_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  g_34 :
  if(match_cons(j_34, sym_TCons_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      h_34 :
      if(match_cons(l_34, sym_TCons_2))
        {
          m_34 = ATgetArgument(l_34, 0);
          n_34 = ATgetArgument(l_34, 1);
          i_34 :
          if(match_cons(n_34, sym_TNil_0))
            {
              ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
              ATerm c_13;
              c_13 = t;
              {
                ATerm t_34 = NULL;
                ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
                t = z_59(t);
                t_34 = t;
                if(q_34 != NULL && q_34 != t_34)
                  _fail(t_34);
                else
                  q_34 = t_34;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm d_13 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = d_13;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  u_34 = t;
                  f_34 :
                  if(match_cons(u_34, sym_Cons_2))
                    {
                      v_34 = ATgetArgument(u_34, 0);
                      w_34 = ATgetArgument(u_34, 1);
                      if(r_34 != NULL && r_34 != v_34)
                        _fail(v_34);
                      else
                        r_34 = v_34;
                      if(s_34 != NULL && s_34 != w_34)
                        _fail(w_34);
                      else
                        s_34 = w_34;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_34), not_null(r_34)), not_null(s_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = c_13;
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
ATerm AddSDef_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_SDef_3))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      f_35 = ATgetArgument(c_35, 2);
      {
        ATerm m_13;
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_35)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(c_35), not_null(d_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm j_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, j_2);
        }
        t = m_13;
        {
          ATerm n_13;
          n_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_35)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue)), not_null(c_35), not_null(d_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm k_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, k_2);
          }
          t = n_13;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  n_35 = t;
  k_35 :
  if(match_cons(n_35, sym_TCons_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      l_35 :
      if(match_cons(p_35, sym_TCons_2))
        {
          q_35 = ATgetArgument(p_35, 0);
          r_35 = ATgetArgument(p_35, 1);
          m_35 :
          if(match_cons(r_35, sym_TNil_0))
            {
              ATerm o_13;
              o_13 = t;
              {
                ATerm p_13 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(o_35), not_null(q_35));
                    PopChoice();
                  }
                else
                  {
                    t = p_13;
                    t = SSL_gtr(not_null(o_35), not_null(q_35));
                  }
              }
              t = o_13;
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
ATerm leq_0 (ATerm t)
{
  ATerm q_13 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = q_13;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  d_36 = t;
  x_35 :
  if(match_cons(d_36, sym_TCons_2))
    {
      e_36 = ATgetArgument(d_36, 0);
      f_36 = ATgetArgument(d_36, 1);
      y_35 :
      if(match_cons(f_36, sym_TCons_2))
        {
          g_36 = ATgetArgument(f_36, 0);
          h_36 = ATgetArgument(f_36, 1);
          c_36 :
          if(match_cons(h_36, sym_TNil_0))
            {
              ATerm r_13 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(e_36), not_null(g_36));
                  PopChoice();
                }
              else
                {
                  t = r_13;
                  t = SSL_addr(not_null(e_36), not_null(g_36));
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
ATerm foldr_3 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm s_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = w_68(t);
      PopChoice();
    }
  else
    {
      t = s_13;
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        r_36 = t;
        q_36 :
        if(match_cons(r_36, sym_Cons_2))
          {
            s_36 = ATgetArgument(r_36, 0);
            t_36 = ATgetArgument(r_36, 1);
            {
              ATerm w_36 = NULL;
              t = not_null(s_36);
              {
                ATerm y_36 = NULL;
                t = y_68(t);
                w_36 = t;
                t = not_null(t_36);
                t = foldr_3(t, w_68, x_68, y_68);
                y_36 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_36), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = x_68(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm o_70 (ATerm))
{
  ATerm u_37 = NULL;
  ATerm w_37 = NULL;
  u_37 = t;
  {
    ATerm x_37 = NULL;
    ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
    t = not_null(u_37);
    x_37 = t;
    t = SSL_explode_term(not_null(x_37));
    z_37 = t;
    r_37 :
    if(match_cons(z_37, sym_TCons_2))
      {
        a_38 = ATgetArgument(z_37, 0);
        b_38 = ATgetArgument(z_37, 1);
        s_37 :
        if(match_cons(b_38, sym_TCons_2))
          {
            c_38 = ATgetArgument(b_38, 0);
            d_38 = ATgetArgument(b_38, 1);
            t_37 :
            if(match_cons(d_38, sym_TNil_0))
              {
                if(w_37 != NULL && w_37 != c_38)
                  _fail(c_38);
                else
                  w_37 = c_38;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(w_37);
    t = foldr_3(t, m_70, n_70, o_70);
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm t_13 = t;
  if(PushChoice()==0)
    {
      ATerm l_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(1);
        return(t);
      }
      t = crush_3(t, l_2, add_0, term_size_0);
      PopChoice();
    }
  else
    {
      t = t_13;
      {
        ATerm j_38 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            t = (ATerm) ATmakeInt(1);
            return(t);
          }
          t = crush_3(t, m_2, add_0, j_38);
          return(t);
        }
        t = j_38(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym_LChoice_2))
    {
      p_38 = ATgetArgument(o_38, 0);
      q_38 = ATgetArgument(o_38, 1);
      {
        ATerm t_38 = NULL;
        t = not_null(p_38);
        {
          ATerm v_38 = NULL;
          t = k_57(t);
          t_38 = t;
          t = not_null(q_38);
          t = l_57(t);
          v_38 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_38), not_null(v_38));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym_Choice_2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm n_39 = NULL;
        t = not_null(j_39);
        {
          ATerm r_39 = NULL;
          t = i_57(t);
          n_39 = t;
          t = not_null(k_39);
          t = j_57(t);
          r_39 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_39), not_null(r_39));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_Cong_2))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      {
        ATerm k_40 = NULL;
        t = not_null(g_40);
        {
          ATerm m_40 = NULL;
          t = f_58(t);
          k_40 = t;
          t = not_null(h_40);
          t = g_58(t);
          m_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_40), not_null(m_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym_Match_1))
    {
      v_40 = ATgetArgument(u_40, 0);
      {
        ATerm x_40 = NULL;
        t = not_null(v_40);
        t = n_58(t);
        x_40 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_40));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Seq_2))
    {
      g_41 = ATgetArgument(f_41, 0);
      h_41 = ATgetArgument(f_41, 1);
      {
        ATerm o_41 = NULL;
        t = not_null(g_41);
        {
          ATerm q_41 = NULL;
          t = g_57(t);
          o_41 = t;
          t = not_null(h_41);
          t = h_57(t);
          q_41 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_41), not_null(q_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm))
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym_Scope_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      {
        ATerm g_42 = NULL;
        t = not_null(c_42);
        {
          ATerm i_42 = NULL;
          t = r_58(t);
          g_42 = t;
          t = not_null(d_42);
          t = s_58(t);
          i_42 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_42), not_null(i_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm q_42 = NULL,r_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Build_1))
    {
      r_42 = ATgetArgument(q_42, 0);
      {
        ATerm t_42 = NULL;
        t = not_null(r_42);
        t = o_58(t);
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_SVar_1))
    {
      b_43 = ATgetArgument(a_43, 0);
      {
        ATerm d_43 = NULL;
        t = not_null(b_43);
        t = m_57(t);
        d_43 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(d_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Call_2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        ATerm q_43 = NULL;
        t = not_null(m_43);
        {
          ATerm s_43 = NULL;
          t = b_58(t);
          q_43 = t;
          t = not_null(n_43);
          t = c_58(t);
          s_43 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_43), not_null(s_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  x_43 :
  if(!(match_cons(y_43, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  z_43 :
  if(!(match_cons(e_44, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm f_44 (ATerm t)
  {
    ATerm u_13 = t;
    if(PushChoice()==0)
      {
        t = Id_0(t);
        PopChoice();
      }
    else
      {
        t = u_13;
        {
          ATerm v_13 = t;
          if(PushChoice()==0)
            {
              t = Fail_0(t);
              PopChoice();
            }
          else
            {
              t = v_13;
              {
                ATerm w_13 = t;
                if(PushChoice()==0)
                  {
                    ATerm n_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, n_2, _id);
                    PopChoice();
                  }
                else
                  {
                    t = w_13;
                    {
                      ATerm x_13 = t;
                      if(PushChoice()==0)
                        {
                          t = Build_1(t, _id);
                          PopChoice();
                        }
                      else
                        {
                          t = x_13;
                          {
                            ATerm y_13 = t;
                            if(PushChoice()==0)
                              {
                                t = Match_1(t, _id);
                                PopChoice();
                              }
                            else
                              {
                                t = y_13;
                                {
                                  ATerm z_13 = t;
                                  if(PushChoice()==0)
                                    {
                                      ATerm o_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, o_2, _id);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = z_13;
                                      {
                                        ATerm a_14 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, p_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = a_14;
                                            {
                                              ATerm b_14 = t;
                                              if(PushChoice()==0)
                                                {
                                                  ATerm q_2 (ATerm t)
                                                  {
                                                    ATerm r_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, r_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, q_2);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = b_14;
                                                  {
                                                    ATerm c_14 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        ATerm s_2 (ATerm t)
                                                        {
                                                          ATerm t_2 (ATerm t)
                                                          {
                                                            ATerm u_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, u_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, t_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, s_2, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                        {
                                                          ATerm d_14 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = d_14;
                                                              {
                                                                ATerm g_14 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = Choice_2(t, f_44, f_44);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = g_14;
                                                                    t = LChoice_2(t, f_44, f_44);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = f_44(t);
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm v_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, v_2);
      t = leq_0(t);
    }
    t = h_14;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm g_44 (ATerm t)
  {
    ATerm i_14 = t;
    if(PushChoice()==0)
      {
        t = e_78(t);
        PopChoice();
      }
    else
      {
        t = i_14;
        t = _one(t, g_44);
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  r_44 = t;
  l_44 :
  if(match_cons(r_44, sym_SDef_3))
    {
      s_44 = ATgetArgument(r_44, 0);
      t_44 = ATgetArgument(r_44, 1);
      u_44 = ATgetArgument(r_44, 2);
      {
        ATerm c_45 = NULL;
        t = not_null(s_44);
        {
          ATerm e_45 = NULL;
          t = r_57(t);
          c_45 = t;
          t = not_null(t_44);
          {
            ATerm g_45 = NULL;
            t = s_57(t);
            e_45 = t;
            t = not_null(u_44);
            t = t_57(t);
            g_45 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_45), not_null(e_45), not_null(g_45));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inlineable_0 (ATerm t)
{
  ATerm t_45 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm v_45 = NULL;
    ATerm j_14 = t;
    if(PushChoice()==0)
      {
        ATerm u_45 = NULL;
        u_45 = t;
        m_45 :
        if(!(match_string(u_45, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = j_14;
    v_45 = t;
    if(t_45 != NULL && t_45 != v_45)
      _fail(v_45);
    else
      t_45 = v_45;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm l_14;
    l_14 = t;
    {
      ATerm m_14 = t;
      if(PushChoice()==0)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
            w_45 = t;
            p_45 :
            if(match_cons(w_45, sym_Call_2))
              {
                x_45 = ATgetArgument(w_45, 0);
                z_45 = ATgetArgument(w_45, 1);
                q_45 :
                if(match_cons(x_45, sym_SVar_1))
                  {
                    y_45 = ATgetArgument(x_45, 0);
                    s_45 :
                    if(match_cons(z_45, sym_Nil_0))
                      {
                        if(t_45 != NULL && t_45 != y_45)
                          _fail(y_45);
                        else
                          t_45 = y_45;
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
          t = oncetd_1(t, g_3);
          PopChoice();
          _fail(t);
        }
      else
        t = m_14;
    }
    t = l_14;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, w_2, _id, f_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  g_46 = t;
  d_46 :
  if(match_cons(g_46, sym_TCons_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      e_46 :
      if(match_cons(i_46, sym_TCons_2))
        {
          j_46 = ATgetArgument(i_46, 0);
          k_46 = ATgetArgument(i_46, 1);
          f_46 :
          if(match_cons(k_46, sym_TNil_0))
            {
              t = not_null(h_46);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(j_46);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  t_46 = t;
  p_46 :
  if(match_cons(t_46, sym_TCons_2))
    {
      u_46 = ATgetArgument(t_46, 0);
      v_46 = ATgetArgument(t_46, 1);
      q_46 :
      if(match_cons(v_46, sym_TCons_2))
        {
          w_46 = ATgetArgument(v_46, 0);
          x_46 = ATgetArgument(v_46, 1);
          r_46 :
          if(match_cons(x_46, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_46), not_null(w_46));
          else
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
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  j_49 = t;
  e_49 :
  if(match_cons(j_49, sym_TCons_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      n_49 = ATgetArgument(j_49, 1);
      f_49 :
      if(match_cons(k_49, sym_Cons_2))
        {
          l_49 = ATgetArgument(k_49, 0);
          m_49 = ATgetArgument(k_49, 1);
          g_49 :
          if(match_cons(n_49, sym_TCons_2))
            {
              o_49 = ATgetArgument(n_49, 0);
              r_49 = ATgetArgument(n_49, 1);
              h_49 :
              if(match_cons(o_49, sym_Cons_2))
                {
                  p_49 = ATgetArgument(o_49, 0);
                  q_49 = ATgetArgument(o_49, 1);
                  i_49 :
                  if(match_cons(r_49, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(l_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_49), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_49), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  d_50 = t;
  y_49 :
  if(match_cons(d_50, sym_TCons_2))
    {
      e_50 = ATgetArgument(d_50, 0);
      f_50 = ATgetArgument(d_50, 1);
      z_49 :
      if(match_cons(e_50, sym_Nil_0))
        {
          a_50 :
          if(match_cons(f_50, sym_TCons_2))
            {
              g_50 = ATgetArgument(f_50, 0);
              h_50 = ATgetArgument(f_50, 1);
              b_50 :
              if(match_cons(g_50, sym_Nil_0))
                {
                  c_50 :
                  if(match_cons(h_50, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm j_50 (ATerm t)
  {
    ATerm n_14 = t;
    if(PushChoice()==0)
      {
        t = h_72(t);
        PopChoice();
      }
    else
      {
        t = n_14;
        t = i_72(t);
        {
          ATerm i_3 (ATerm t)
          {
            t = TCons_2(t, j_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_72, i_3);
          t = j_72(t);
        }
      }
    return(t);
  }
  t = j_50(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_72 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_72);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_Cong_2))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      {
        ATerm h_51 = NULL;
        t = not_null(e_51);
        {
          ATerm l_51 = NULL;
          t = map_1(t, new_0);
          h_51 = t;
          {
            ATerm n_51 = NULL;
            ATerm j_3 (ATerm t)
            {
              ATerm j_51 = NULL;
              j_51 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_51));
              return(t);
            }
            t = map_1(t, j_3);
            l_51 = t;
            t = not_null(e_51);
            {
              ATerm r_51 = NULL;
              t = map_1(t, new_0);
              n_51 = t;
              {
                ATerm t_51 = NULL;
                ATerm l_3 (ATerm t)
                {
                  ATerm p_51 = NULL;
                  p_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_51));
                  return(t);
                }
                t = map_1(t, l_3);
                r_51 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm h_52 = NULL;
                  t = zip_1(t, _id);
                  t_51 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm j_52 = NULL;
                    ATerm n_3 (ATerm t)
                    {
                      ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
                      v_51 = t;
                      t_50 :
                      if(match_cons(v_51, sym_TCons_2))
                        {
                          w_51 = ATgetArgument(v_51, 0);
                          b_52 = ATgetArgument(v_51, 1);
                          u_50 :
                          if(match_cons(w_51, sym_TCons_2))
                            {
                              x_51 = ATgetArgument(w_51, 0);
                              y_51 = ATgetArgument(w_51, 1);
                              v_50 :
                              if(match_cons(y_51, sym_TCons_2))
                                {
                                  z_51 = ATgetArgument(y_51, 0);
                                  a_52 = ATgetArgument(y_51, 1);
                                  w_50 :
                                  if(match_cons(a_52, sym_TNil_0))
                                    {
                                      x_50 :
                                      if(match_cons(b_52, sym_TCons_2))
                                        {
                                          c_52 = ATgetArgument(b_52, 0);
                                          d_52 = ATgetArgument(b_52, 1);
                                          y_50 :
                                          if(match_cons(d_52, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_51)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, n_3);
                    h_52 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    j_52 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_51), not_null(l_51))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_52)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_51), not_null(r_51))))));
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
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Cong_2))
    {
      d_53 = ATgetArgument(c_53, 0);
      e_53 = ATgetArgument(c_53, 1);
      {
        ATerm k_53 = NULL;
        t = not_null(e_53);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm h_53 = NULL,i_53 = NULL;
            i_53 = t;
            z_52 :
            if(match_cons(i_53, sym_Match_1))
              {
                h_53 = ATgetArgument(i_53, 0);
                t = not_null(h_53);
              }
            else
              {
                if(match_cons(i_53, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_3);
          k_53 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(d_53), not_null(k_53)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  r_53 :
  if(match_cons(t_53, sym_Scope_2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      s_53 :
      if(match_cons(u_53, sym_Nil_0))
        t = not_null(v_53);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  o_54 = t;
  g_54 :
  if(match_cons(o_54, sym_Choice_2))
    {
      p_54 = ATgetArgument(o_54, 0);
      n_54 = ATgetArgument(o_54, 1);
      if(p_54 != NULL && p_54 != n_54)
        _fail(n_54);
      else
        p_54 = n_54;
      t = not_null(p_54);
    }
  else
    {
      if(match_cons(o_54, sym_LChoice_2))
        {
          p_54 = ATgetArgument(o_54, 0);
          n_54 = ATgetArgument(o_54, 1);
          if(p_54 != NULL && p_54 != n_54)
            _fail(n_54);
          else
            p_54 = n_54;
          t = not_null(p_54);
        }
      else
        {
          if(match_cons(o_54, sym_Where_1))
            {
              p_54 = ATgetArgument(o_54, 0);
              h_54 :
              if(match_cons(p_54, sym_Where_1))
                {
                  q_54 = ATgetArgument(p_54, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(q_54));
                }
              else
                {
                  if(match_cons(p_54, sym_Seq_2))
                    {
                      q_54 = ATgetArgument(p_54, 0);
                      s_54 = ATgetArgument(p_54, 1);
                      i_54 :
                      if(match_cons(q_54, sym_Where_1))
                        {
                          r_54 = ATgetArgument(q_54, 0);
                          j_54 :
                          if(match_cons(s_54, sym_Seq_2))
                            {
                              t_54 = ATgetArgument(s_54, 0);
                              v_54 = ATgetArgument(s_54, 1);
                              k_54 :
                              if(match_cons(t_54, sym_Build_1))
                                {
                                  u_54 = ATgetArgument(t_54, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_54)), not_null(v_54))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(o_54, sym_Not_1))
                {
                  p_54 = ATgetArgument(o_54, 0);
                  l_54 :
                  if(match_cons(p_54, sym_Not_1))
                    {
                      q_54 = ATgetArgument(p_54, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(q_54));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(o_54, sym_Test_1))
                    {
                      p_54 = ATgetArgument(o_54, 0);
                      m_54 :
                      if(match_cons(p_54, sym_Test_1))
                        {
                          q_54 = ATgetArgument(p_54, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(q_54));
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
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  r_55 = t;
  n_55 :
  if(match_cons(r_55, sym_Choice_2))
    {
      s_55 = ATgetArgument(r_55, 0);
      v_55 = ATgetArgument(r_55, 1);
      o_55 :
      if(match_cons(s_55, sym_Choice_2))
        {
          t_55 = ATgetArgument(s_55, 0);
          u_55 = ATgetArgument(s_55, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_55), not_null(v_55)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(r_55, sym_Seq_2))
        {
          s_55 = ATgetArgument(r_55, 0);
          v_55 = ATgetArgument(r_55, 1);
          p_55 :
          if(match_cons(s_55, sym_Seq_2))
            {
              t_55 = ATgetArgument(s_55, 0);
              u_55 = ATgetArgument(s_55, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_55), not_null(v_55)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(r_55, sym_LChoice_2))
            {
              s_55 = ATgetArgument(r_55, 0);
              v_55 = ATgetArgument(r_55, 1);
              q_55 :
              if(match_cons(s_55, sym_LChoice_2))
                {
                  t_55 = ATgetArgument(s_55, 0);
                  u_55 = ATgetArgument(s_55, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_55), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_55), not_null(v_55)));
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
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,u_57 = NULL,v_57 = NULL;
  e_57 = t;
  w_56 :
  if(match_cons(e_57, sym_Seqs_1))
    {
      f_57 = ATgetArgument(e_57, 0);
      z_56 :
      if(match_cons(f_57, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(f_57, sym_Cons_2))
            {
              c_57 = ATgetArgument(f_57, 0);
              d_57 = ATgetArgument(f_57, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_57), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_57)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(e_57, sym_Choices_1))
        {
          f_57 = ATgetArgument(e_57, 0);
          a_57 :
          if(match_cons(f_57, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(f_57, sym_Cons_2))
                {
                  c_57 = ATgetArgument(f_57, 0);
                  d_57 = ATgetArgument(f_57, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_57), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_57)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(e_57, sym_LChoices_1))
            {
              f_57 = ATgetArgument(e_57, 0);
              b_57 :
              if(match_cons(f_57, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(f_57, sym_Cons_2))
                    {
                      c_57 = ATgetArgument(f_57, 0);
                      d_57 = ATgetArgument(f_57, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_57), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_57)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(e_57, sym_Lets_2))
                {
                  f_57 = ATgetArgument(e_57, 0);
                  u_57 = ATgetArgument(e_57, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_57), not_null(u_57));
                }
              else
                {
                  if(match_cons(e_57, sym_BA_2))
                    {
                      f_57 = ATgetArgument(e_57, 0);
                      u_57 = ATgetArgument(e_57, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_57)), not_null(f_57));
                    }
                  else
                    {
                      if(match_cons(e_57, sym_MA_2))
                        {
                          f_57 = ATgetArgument(e_57, 0);
                          u_57 = ATgetArgument(e_57, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_57)), not_null(u_57));
                        }
                      else
                        {
                          if(match_cons(e_57, sym_AM_2))
                            {
                              f_57 = ATgetArgument(e_57, 0);
                              u_57 = ATgetArgument(e_57, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_57)));
                            }
                          else
                            {
                              if(match_cons(e_57, sym_BAM_3))
                                {
                                  f_57 = ATgetArgument(e_57, 0);
                                  u_57 = ATgetArgument(e_57, 1);
                                  v_57 = ATgetArgument(e_57, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_57)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_57)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(e_57, sym_InfixApp_3))
                                    {
                                      f_57 = ATgetArgument(e_57, 0);
                                      u_57 = ATgetArgument(e_57, 1);
                                      v_57 = ATgetArgument(e_57, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_57), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_57), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm r_59 = NULL,s_59 = NULL;
  r_59 = t;
  p_59 :
  if(match_cons(r_59, sym_Where_1))
    {
      s_59 = ATgetArgument(r_59, 0);
      q_59 :
      if(match_cons(s_59, sym_Fail_0))
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
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  a_60 :
  if(match_cons(d_60, sym_LChoice_2))
    {
      e_60 = ATgetArgument(d_60, 0);
      f_60 = ATgetArgument(d_60, 1);
      c_60 :
      if(match_cons(f_60, sym_Fail_0))
        t = not_null(e_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
  l_60 = t;
  j_60 :
  if(match_cons(l_60, sym_LChoice_2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      k_60 :
      if(match_cons(m_60, sym_Fail_0))
        t = not_null(n_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  r_60 :
  if(match_cons(t_60, sym_Choice_2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      s_60 :
      if(match_cons(v_60, sym_Fail_0))
        t = not_null(u_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  b_61 = t;
  z_60 :
  if(match_cons(b_61, sym_Choice_2))
    {
      c_61 = ATgetArgument(b_61, 0);
      d_61 = ATgetArgument(b_61, 1);
      a_61 :
      if(match_cons(c_61, sym_Fail_0))
        t = not_null(d_61);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  p_61 = t;
  o_61 :
  if(match_cons(p_61, sym_Cong_2))
    {
      q_61 = ATgetArgument(p_61, 0);
      r_61 = ATgetArgument(p_61, 1);
      t = not_null(r_61);
      {
        ATerm p_3 (ATerm t)
        {
          ATerm u_61 = NULL;
          u_61 = t;
          n_61 :
          if(!(match_cons(u_61, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, p_3);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_Path_2))
    {
      a_62 = ATgetArgument(z_61, 0);
      b_62 = ATgetArgument(z_61, 1);
      y_61 :
      if(match_cons(b_62, sym_Fail_0))
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
  ATerm l_62 = NULL,m_62 = NULL;
  l_62 = t;
  h_62 :
  if(match_cons(l_62, sym_One_1))
    {
      m_62 = ATgetArgument(l_62, 0);
      i_62 :
      if(match_cons(m_62, sym_Fail_0))
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
  ATerm u_62 = NULL,v_62 = NULL;
  u_62 = t;
  s_62 :
  if(match_cons(u_62, sym_Some_1))
    {
      v_62 = ATgetArgument(u_62, 0);
      t_62 :
      if(match_cons(v_62, sym_Fail_0))
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
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  c_63 = t;
  y_62 :
  if(match_cons(c_63, sym_Rec_2))
    {
      d_63 = ATgetArgument(c_63, 0);
      e_63 = ATgetArgument(c_63, 1);
      b_63 :
      if(match_cons(e_63, sym_Fail_0))
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
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  i_63 :
  if(match_cons(k_63, sym_Scope_2))
    {
      l_63 = ATgetArgument(k_63, 0);
      m_63 = ATgetArgument(k_63, 1);
      j_63 :
      if(match_cons(m_63, sym_Fail_0))
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
  ATerm s_63 = NULL,t_63 = NULL,y_63 = NULL;
  s_63 = t;
  q_63 :
  if(match_cons(s_63, sym_Seq_2))
    {
      t_63 = ATgetArgument(s_63, 0);
      y_63 = ATgetArgument(s_63, 1);
      r_63 :
      if(match_cons(t_63, sym_Fail_0))
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
  ATerm e_64 = NULL,f_64 = NULL;
  e_64 = t;
  c_64 :
  if(match_cons(e_64, sym_Not_1))
    {
      f_64 = ATgetArgument(e_64, 0);
      d_64 :
      if(match_cons(f_64, sym_Fail_0))
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
  ATerm k_64 = NULL,r_64 = NULL;
  k_64 = t;
  i_64 :
  if(match_cons(k_64, sym_Test_1))
    {
      r_64 = ATgetArgument(k_64, 0);
      j_64 :
      if(match_cons(r_64, sym_Fail_0))
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
  ATerm o_14 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = o_14;
      {
        ATerm p_14 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = p_14;
            {
              ATerm q_14 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_14;
                  {
                    ATerm r_14 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_14;
                        {
                          ATerm s_14 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_14;
                              {
                                ATerm t_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_14;
                                    {
                                      ATerm u_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_14;
                                          {
                                            ATerm w_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_14;
                                                {
                                                  ATerm y_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_14;
                                                      {
                                                        ATerm z_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_14;
                                                            {
                                                              ATerm e_15 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = e_15;
                                                                  {
                                                                    ATerm k_15 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_15;
                                                                        {
                                                                          ATerm l_15 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_15;
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
  ATerm w_64 = NULL,x_64 = NULL;
  w_64 = t;
  u_64 :
  if(match_cons(w_64, sym_Match_1))
    {
      x_64 = ATgetArgument(w_64, 0);
      v_64 :
      if(match_cons(x_64, sym_Wld_0))
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
  ATerm c_65 = NULL,d_65 = NULL;
  c_65 = t;
  a_65 :
  if(match_cons(c_65, sym_Where_1))
    {
      d_65 = ATgetArgument(c_65, 0);
      b_65 :
      if(match_cons(d_65, sym_Id_0))
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
  ATerm i_65 = NULL,j_65 = NULL;
  i_65 = t;
  g_65 :
  if(match_cons(i_65, sym_All_1))
    {
      j_65 = ATgetArgument(i_65, 0);
      h_65 :
      if(match_cons(j_65, sym_Id_0))
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
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  m_65 :
  if(match_cons(o_65, sym_Rec_2))
    {
      p_65 = ATgetArgument(o_65, 0);
      q_65 = ATgetArgument(o_65, 1);
      n_65 :
      if(match_cons(q_65, sym_Id_0))
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
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  u_65 :
  if(match_cons(a_66, sym_Scope_2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      v_65 :
      if(match_cons(c_66, sym_Id_0))
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
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  g_66 :
  if(match_cons(i_66, sym_LChoice_2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      h_66 :
      if(match_cons(j_66, sym_Id_0))
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
  ATerm q_66 = NULL,s_66 = NULL,t_66 = NULL;
  q_66 = t;
  o_66 :
  if(match_cons(q_66, sym_Seq_2))
    {
      s_66 = ATgetArgument(q_66, 0);
      t_66 = ATgetArgument(q_66, 1);
      p_66 :
      if(match_cons(t_66, sym_Id_0))
        t = not_null(s_66);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  z_66 :
  if(match_cons(b_67, sym_Seq_2))
    {
      c_67 = ATgetArgument(b_67, 0);
      d_67 = ATgetArgument(b_67, 1);
      a_67 :
      if(match_cons(c_67, sym_Id_0))
        t = not_null(d_67);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  k_67 = t;
  h_67 :
  if(match_cons(k_67, sym_Not_1))
    {
      l_67 = ATgetArgument(k_67, 0);
      i_67 :
      if(match_cons(l_67, sym_Id_0))
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
  ATerm s_67 = NULL,t_67 = NULL;
  s_67 = t;
  o_67 :
  if(match_cons(s_67, sym_Test_1))
    {
      t_67 = ATgetArgument(s_67, 0);
      r_67 :
      if(match_cons(t_67, sym_Id_0))
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
  ATerm m_15 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = m_15;
      {
        ATerm n_15 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = n_15;
            {
              ATerm p_15 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = p_15;
                  {
                    ATerm t_15 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = t_15;
                        {
                          ATerm u_15 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = u_15;
                              {
                                ATerm v_15 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_15;
                                    {
                                      ATerm e_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = e_16;
                                          {
                                            ATerm f_16 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = f_16;
                                                {
                                                  ATerm g_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = g_16;
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
  ATerm h_16 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = h_16;
      {
        ATerm i_16 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = i_16;
            {
              ATerm j_16 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = j_16;
                  {
                    ATerm k_16 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = k_16;
                        {
                          ATerm l_16 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = l_16;
                              {
                                ATerm m_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_16;
                                    {
                                      ATerm q_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_16;
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
ATerm downup_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm c_68 (ATerm t)
  {
    t = s_76(t);
    t = _all(t, c_68);
    t = s_76(t);
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, q_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm w_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, w_3);
    }
    return(t);
  }
  t = map_1(t, v_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_56 (ATerm))
{
  ATerm g_68 = NULL,h_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym_Strategies_1))
    {
      h_68 = ATgetArgument(g_68, 0);
      {
        ATerm j_68 = NULL;
        t = not_null(h_68);
        t = v_56(t);
        j_68 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_68));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm q_68 = NULL,r_68 = NULL;
  q_68 = t;
  p_68 :
  if(match_cons(q_68, sym_Specification_1))
    {
      r_68 = ATgetArgument(q_68, 0);
      {
        ATerm t_68 = NULL;
        t = not_null(r_68);
        t = x_56(t);
        t_68 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_68));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      ATerm d_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, d_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, y_3);
    return(t);
  }
  t = Specification_1(t, x_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm b_69 = NULL;
  b_69 = t;
  a_69 :
  if(!(match_cons(b_69, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  f_69 :
  if(match_cons(g_69, sym_TCons_2))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      {
        ATerm l_69 = NULL;
        t = not_null(h_69);
        {
          ATerm n_69 = NULL;
          t = w_58(t);
          l_69 = t;
          t = not_null(i_69);
          t = x_58(t);
          n_69 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_69), not_null(n_69));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_69 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm v_69 = NULL,x_69 = NULL;
      v_69 = t;
      t_69 :
      if(match_cons(v_69, sym_Program_1))
        {
          x_69 = ATgetArgument(v_69, 0);
          if(u_69 != NULL && u_69 != x_69)
            _fail(x_69);
          else
            u_69 = x_69;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, q_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = s_16;
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
  ATerm h_70 = NULL,i_70 = NULL;
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm t_16 = t;
      if(PushChoice()==0)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm j_70 = NULL;
            j_70 = t;
            z_69 :
            if(!(match_cons(j_70, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_5);
          PopChoice();
          _fail(t);
        }
      else
        t = t_16;
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, s_4, a_5);
    {
      ATerm c_5 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm k_70 = NULL,l_70 = NULL;
          k_70 = t;
          c_70 :
          if(match_cons(k_70, sym_Runtime_1))
            {
              l_70 = ATgetArgument(k_70, 0);
              if(i_70 != NULL && i_70 != l_70)
                _fail(l_70);
              else
                i_70 = l_70;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_5);
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, c_5, d_5);
      {
        ATerm f_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm p_70 = NULL,q_70 = NULL;
            p_70 = t;
            g_70 :
            if(match_cons(p_70, sym_Program_1))
              {
                q_70 = ATgetArgument(p_70, 0);
                if(h_70 != NULL && h_70 != q_70)
                  _fail(q_70);
                else
                  h_70 = q_70;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_5);
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, f_5, g_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, r_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL;
  x_70 = t;
  u_70 :
  if(match_cons(x_70, sym_TCons_2))
    {
      y_70 = ATgetArgument(x_70, 0);
      z_70 = ATgetArgument(x_70, 1);
      v_70 :
      if(match_cons(z_70, sym_TCons_2))
        {
          a_71 = ATgetArgument(z_70, 0);
          b_71 = ATgetArgument(z_70, 1);
          w_70 :
          if(match_cons(b_71, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(y_70), not_null(a_71));
          else
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
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  j_71 = t;
  g_71 :
  if(match_cons(j_71, sym_TCons_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      h_71 :
      if(match_cons(l_71, sym_TCons_2))
        {
          m_71 = ATgetArgument(l_71, 0);
          n_71 = ATgetArgument(l_71, 1);
          i_71 :
          if(match_cons(n_71, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(k_71), not_null(m_71));
          else
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
  ATerm v_71 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm v_16 = t;
      if(PushChoice()==0)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm w_71 = NULL,x_71 = NULL;
            w_71 = t;
            s_71 :
            if(match_cons(w_71, sym_Output_1))
              {
                x_71 = ATgetArgument(w_71, 0);
                if(v_71 != NULL && v_71 != x_71)
                  _fail(x_71);
                else
                  v_71 = x_71;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_5);
          PopChoice();
        }
      else
        {
          t = v_16;
          {
            ATerm y_71 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            y_71 = t;
            if(v_71 != NULL && v_71 != y_71)
              _fail(y_71);
            else
              v_71 = y_71;
          }
        }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, m_5, n_5);
  }
  t = u_16;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        ATerm t_5 (ATerm t)
        {
          t = not_null(v_71);
          return(t);
        }
        t = split_2(t, t_5, _id);
        return(t);
      }
      t = TCons_2(t, s_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, r_5);
    {
      ATerm w_16 = t;
      if(PushChoice()==0)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm w_5 (ATerm t)
            {
              ATerm z_71 = NULL;
              z_71 = t;
              u_71 :
              if(!(match_cons(z_71, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, w_5);
            return(t);
          }
          ATerm v_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_5, v_5);
          PopChoice();
        }
      else
        {
          t = w_16;
          {
            ATerm x_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, x_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm n_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  ATerm x_16;
  x_16 = t;
  t = dtime_0(t);
  t = x_16;
  t = a_63(t);
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm o_72 = NULL;
      t = dtime_0(t);
      o_72 = t;
      if(n_72 != NULL && n_72 != o_72)
        _fail(o_72);
      else
        n_72 = o_72;
    }
    t = j_17;
    p_72 = t;
    e_72 :
    if(match_cons(p_72, sym_TCons_2))
      {
        q_72 = ATgetArgument(p_72, 0);
        r_72 = ATgetArgument(p_72, 1);
        f_72 :
        if(match_cons(r_72, sym_TCons_2))
          {
            s_72 = ATgetArgument(r_72, 0);
            t_72 = ATgetArgument(r_72, 1);
            g_72 :
            if(match_cons(t_72, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(n_72)), not_null(q_72)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_72), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm z_72 = NULL;
  z_72 = t;
  t = SSL_ReadFromFile(not_null(z_72));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm f_73 = NULL;
  ATerm h_73 = NULL;
  f_73 = t;
  {
    ATerm j_73 = NULL;
    t = l_75(t);
    h_73 = t;
    t = not_null(f_73);
    t = m_75(t);
    j_73 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_73), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_73 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm l_17 = t;
    if(PushChoice()==0)
      {
        ATerm c_6 (ATerm t)
        {
          ATerm s_73 = NULL,t_73 = NULL;
          s_73 = t;
          p_73 :
          if(match_cons(s_73, sym_Input_1))
            {
              t_73 = ATgetArgument(s_73, 0);
              if(r_73 != NULL && r_73 != t_73)
                _fail(t_73);
              else
                r_73 = t_73;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_6);
        PopChoice();
      }
    else
      {
        t = l_17;
        {
          ATerm u_73 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          u_73 = t;
          if(r_73 != NULL && r_73 != u_73)
            _fail(u_73);
          else
            r_73 = u_73;
        }
      }
  }
  t = k_17;
  {
    ATerm d_6 (ATerm t)
    {
      t = not_null(r_73);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_74 = NULL;
  a_74 = t;
  z_73 :
  if(!(match_cons(a_74, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm n_17 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = n_17;
        {
          ATerm p_17 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = p_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_6);
  t = z_62(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_74 = NULL;
  c_74 = t;
  t = SSL_table_create(not_null(c_74));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_74 = NULL;
  i_74 = t;
  {
    ATerm q_17;
    q_17 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_74), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = q_17;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  w_74 = t;
  q_74 :
  if(match_cons(w_74, sym_Cons_2))
    {
      s_74 = ATgetArgument(w_74, 0);
      t_74 = ATgetArgument(w_74, 1);
      r_74 :
      if(match_cons(t_74, sym_Cons_2))
        {
          u_74 = ATgetArgument(t_74, 0);
          v_74 = ATgetArgument(t_74, 1);
          {
            ATerm a_75 = NULL;
            t = not_null(s_74);
            t = j_0(t);
            t = not_null(u_74);
            t = k_0(t);
            a_75 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_75), not_null(v_74));
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(w_74, "register-usage-info"))
        t = register_usage_1(t, l_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_17 = t;
  if(PushChoice()==0)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm t_75 = NULL;
        t_75 = t;
        f_75 :
        if(!(match_string(t_75, "-S")))
          {
            if(!(match_string(t_75, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, h_6, i_6, j_6);
      PopChoice();
    }
  else
    {
      t = r_17;
      {
        ATerm s_17 = t;
        if(PushChoice()==0)
          {
            ATerm k_6 (ATerm t)
            {
              ATerm u_75 = NULL;
              u_75 = t;
              g_75 :
              if(!(match_string(u_75, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm l_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, k_6, l_6, q_6);
            PopChoice();
          }
        else
          {
            t = s_17;
            {
              ATerm t_17 = t;
              if(PushChoice()==0)
                {
                  ATerm r_6 (ATerm t)
                  {
                    ATerm v_75 = NULL;
                    v_75 = t;
                    i_75 :
                    if(!(match_string(v_75, "-v")))
                      {
                        if(!(match_string(v_75, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, r_6, s_6, t_6);
                  PopChoice();
                }
              else
                {
                  t = t_17;
                  {
                    ATerm u_17 = t;
                    if(PushChoice()==0)
                      {
                        ATerm u_6 (ATerm t)
                        {
                          ATerm w_75 = NULL;
                          w_75 = t;
                          j_75 :
                          if(!(match_string(w_75, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_7 (ATerm t)
                        {
                          ATerm x_75 = NULL;
                          x_75 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_75));
                          return(t);
                        }
                        ATerm c_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_6, b_7, c_7);
                        PopChoice();
                      }
                    else
                      {
                        t = u_17;
                        {
                          ATerm v_17 = t;
                          if(PushChoice()==0)
                            {
                              ATerm d_7 (ATerm t)
                              {
                                ATerm z_75 = NULL;
                                z_75 = t;
                                n_75 :
                                if(!(match_string(z_75, "-i")))
                                  {
                                    if(!(match_string(z_75, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_7 (ATerm t)
                              {
                                ATerm a_76 = NULL;
                                a_76 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_76));
                                return(t);
                              }
                              ATerm i_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, d_7, h_7, i_7);
                              PopChoice();
                            }
                          else
                            {
                              t = v_17;
                              {
                                ATerm w_17 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm c_76 = NULL;
                                      c_76 = t;
                                      p_75 :
                                      if(!(match_string(c_76, "-o")))
                                        {
                                          if(!(match_string(c_76, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_7 (ATerm t)
                                    {
                                      ATerm e_76 = NULL;
                                      e_76 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_76));
                                      return(t);
                                    }
                                    ATerm l_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_7, k_7, l_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = w_17;
                                    {
                                      ATerm x_17 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm r_7 (ATerm t)
                                          {
                                            ATerm g_76 = NULL;
                                            g_76 = t;
                                            r_75 :
                                            if(!(match_string(g_76, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm x_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, r_7, s_7, x_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = x_17;
                                          {
                                            ATerm y_7 (ATerm t)
                                            {
                                              ATerm h_76 = NULL;
                                              h_76 = t;
                                              s_75 :
                                              if(!(match_string(h_76, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm a_8 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, y_7, z_7, a_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_76 = NULL;
  m_76 = t;
  t = SSL_table_destroy(not_null(m_76));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_76 = NULL;
  u_76 = t;
  t = SSL_exit(not_null(u_76));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_76 = NULL;
  y_76 = t;
  t = SSL_implode_string(not_null(y_76));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm b_77 (ATerm t)
  {
    ATerm y_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, b_77);
        PopChoice();
      }
    else
      {
        t = y_17;
        t = Nil_0(t);
        t = l_74(t);
      }
    return(t);
  }
  t = b_77(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_18 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_18;
      {
        ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
        e_77 = t;
        d_77 :
        if(match_cons(e_77, sym_Cons_2))
          {
            f_77 = ATgetArgument(e_77, 0);
            g_77 = ATgetArgument(e_77, 1);
            t = not_null(f_77);
            {
              ATerm b_8 (ATerm t)
              {
                t = not_null(g_77);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_8);
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
  ATerm m_77 = NULL;
  m_77 = t;
  t = SSL_explode_string(not_null(m_77));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm p_77 (ATerm t)
  {
    ATerm i_18 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = i_18;
        t = Cons_2(t, x_73, p_77);
      }
    return(t);
  }
  t = p_77(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  v_77 = t;
  r_77 :
  if(match_cons(v_77, sym_TCons_2))
    {
      w_77 = ATgetArgument(v_77, 0);
      x_77 = ATgetArgument(v_77, 1);
      s_77 :
      if(match_cons(w_77, sym_Nil_0))
        {
          t_77 :
          if(match_cons(x_77, sym_TCons_2))
            {
              y_77 = ATgetArgument(x_77, 0);
              z_77 = ATgetArgument(x_77, 1);
              u_77 :
              if(match_cons(z_77, sym_TNil_0))
                t = not_null(y_77);
              else
                _fail(t);
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
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  j_78 = t;
  d_78 :
  if(match_cons(j_78, sym_TCons_2))
    {
      k_78 = ATgetArgument(j_78, 0);
      n_78 = ATgetArgument(j_78, 1);
      g_78 :
      if(match_cons(k_78, sym_Cons_2))
        {
          l_78 = ATgetArgument(k_78, 0);
          m_78 = ATgetArgument(k_78, 1);
          h_78 :
          if(match_cons(n_78, sym_TCons_2))
            {
              o_78 = ATgetArgument(n_78, 0);
              p_78 = ATgetArgument(n_78, 1);
              i_78 :
              if(match_cons(p_78, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_78), not_null(o_78)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
ATerm repeat_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm u_78 (ATerm t)
  {
    ATerm j_18 = t;
    if(PushChoice()==0)
      {
        t = u_63(t);
        t = u_78(t);
        PopChoice();
      }
    else
      {
        t = j_18;
        t = v_63(t);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_63 (ATerm))
{
  t = repeat_2(t, x_63, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm w_78 = NULL;
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm c_79 = NULL,d_79 = NULL;
  c_79 = t;
  b_79 :
  if(match_cons(c_79, sym_Program_1))
    {
      d_79 = ATgetArgument(c_79, 0);
      {
        ATerm f_79 = NULL;
        t = not_null(d_79);
        t = e_54(t);
        f_79 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm n_79 = NULL;
  ATerm c_8 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      ATerm o_79 = NULL;
      o_79 = t;
      if(n_79 != NULL && n_79 != o_79)
        _fail(o_79);
      else
        n_79 = o_79;
      return(t);
    }
    t = Program_1(t, d_8);
    return(t);
  }
  t = option_defined_1(t, c_8);
  {
    ATerm h_8 (ATerm t)
    {
      ATerm p_79 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm j_8 (ATerm t)
        {
          t = not_null(n_79);
          return(t);
        }
        t = short_description_1(t, j_8);
        t = concat_strings_0(t);
        p_79 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_79), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_8);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm k_8 (ATerm t)
      {
        ATerm r_79 = NULL;
        r_79 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_79), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, k_8);
      {
        ATerm l_8 (ATerm t)
        {
          ATerm t_79 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm m_8 (ATerm t)
            {
              t = not_null(n_79);
              return(t);
            }
            t = long_description_1(t, m_8);
            t = concat_strings_0(t);
            t_79 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_79), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = printnl_0(t);
          }
          return(t);
        }
        t = try_1(t, l_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL;
  d_80 = t;
  a_80 :
  if(match_cons(d_80, sym_TCons_2))
    {
      e_80 = ATgetArgument(d_80, 0);
      f_80 = ATgetArgument(d_80, 1);
      b_80 :
      if(match_cons(f_80, sym_TCons_2))
        {
          g_80 = ATgetArgument(f_80, 0);
          h_80 = ATgetArgument(f_80, 1);
          c_80 :
          if(match_cons(h_80, sym_TNil_0))
            {
              ATerm l_18;
              l_18 = t;
              t = SSL_printnl(not_null(e_80), not_null(g_80));
              t = l_18;
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
ATerm Undefined_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm w_80 = NULL,x_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_Undefined_1))
    {
      x_80 = ATgetArgument(w_80, 0);
      {
        ATerm z_80 = NULL;
        t = not_null(x_80);
        t = f_54(t);
        z_80 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm d_81 (ATerm t)
  {
    ATerm n_18 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, f_74, _id);
        PopChoice();
      }
    else
      {
        t = n_18;
        t = Cons_2(t, _id, d_81);
      }
    return(t);
  }
  t = d_81(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_62 (ATerm))
{
  t = fetch_1(t, e_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  e_81 :
  if(!(match_cons(f_81, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm p_18 = t;
  if(PushChoice()==0)
    {
      t = d_76(t);
      PopChoice();
    }
  else
    t = p_18;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL;
  n_81 = t;
  h_81 :
  if(match_cons(n_81, sym_TCons_2))
    {
      o_81 = ATgetArgument(n_81, 0);
      p_81 = ATgetArgument(n_81, 1);
      i_81 :
      if(match_cons(p_81, sym_TCons_2))
        {
          q_81 = ATgetArgument(p_81, 0);
          r_81 = ATgetArgument(p_81, 1);
          j_81 :
          if(match_cons(r_81, sym_TNil_0))
            t = SSL_table_get(not_null(o_81), not_null(q_81));
          else
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
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  b_82 = t;
  x_81 :
  if(match_cons(b_82, sym_TCons_2))
    {
      c_82 = ATgetArgument(b_82, 0);
      d_82 = ATgetArgument(b_82, 1);
      y_81 :
      if(match_cons(d_82, sym_TCons_2))
        {
          e_82 = ATgetArgument(d_82, 0);
          f_82 = ATgetArgument(d_82, 1);
          z_81 :
          if(match_cons(f_82, sym_TCons_2))
            {
              g_82 = ATgetArgument(f_82, 0);
              h_82 = ATgetArgument(f_82, 1);
              a_82 :
              if(match_cons(h_82, sym_TNil_0))
                {
                  ATerm r_18;
                  r_18 = t;
                  {
                    ATerm l_82 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm t_18 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = t_18;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      l_82 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_82), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(g_82), not_null(l_82)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = r_18;
                }
              else
                _fail(t);
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
ATerm register_usage_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm q_82 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = k_61(t);
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_82), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
  z_82 = t;
  w_82 :
  if(match_cons(z_82, sym_Cons_2))
    {
      x_82 = ATgetArgument(z_82, 0);
      y_82 = ATgetArgument(z_82, 1);
      {
        ATerm c_83 = NULL;
        t = not_null(x_82);
        t = g_0(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = h_0(t);
        c_83 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_83), not_null(y_82));
      }
    }
  else
    {
      if(match_string(z_82, "register-usage-info"))
        t = register_usage_1(t, i_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm i_83 = NULL;
    i_83 = t;
    h_83 :
    if(!(match_string(i_83, "--help")))
      {
        if(!(match_string(i_83, "-h")))
          {
            if(!(match_string(i_83, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, q_8, r_8, s_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym_Cons_2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_83)), not_null(n_83));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm))
{
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
  v_83 = t;
  u_83 :
  if(match_cons(v_83, sym_Cons_2))
    {
      w_83 = ATgetArgument(v_83, 0);
      x_83 = ATgetArgument(v_83, 1);
      {
        ATerm a_84 = NULL;
        t = not_null(w_83);
        {
          ATerm c_84 = NULL;
          t = a_59(t);
          a_84 = t;
          t = not_null(x_83);
          t = b_59(t);
          c_84 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_84), not_null(c_84));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  h_84 :
  if(!(match_cons(i_84, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm u_18;
  u_18 = t;
  {
    ATerm w_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_61(t);
      return(t);
    }
    t = try_1(t, w_8);
  }
  t = u_18;
  {
    ATerm x_8 (ATerm t)
    {
      ATerm k_84 = NULL;
      k_84 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_84));
      return(t);
    }
    ATerm y_8 (ATerm t)
    {
      ATerm v_18 = t;
      if(PushChoice()==0)
        {
          ATerm w_18 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = w_18;
              t = i_61(t);
              t = Cons_2(t, _id, y_8);
            }
          PopChoice();
        }
      else
        {
          t = v_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_8, y_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  ATerm x_18;
  x_18 = t;
  {
    ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
    w_84 = t;
    p_84 :
    if(match_cons(w_84, sym_TCons_2))
      {
        x_84 = ATgetArgument(w_84, 0);
        y_84 = ATgetArgument(w_84, 1);
        q_84 :
        if(match_cons(y_84, sym_TCons_2))
          {
            z_84 = ATgetArgument(y_84, 0);
            a_85 = ATgetArgument(y_84, 1);
            r_84 :
            if(match_cons(a_85, sym_TCons_2))
              {
                b_85 = ATgetArgument(a_85, 0);
                c_85 = ATgetArgument(a_85, 1);
                s_84 :
                if(match_cons(c_85, sym_TNil_0))
                  {
                    if(t_84 != NULL && t_84 != x_84)
                      _fail(x_84);
                    else
                      t_84 = x_84;
                    if(u_84 != NULL && u_84 != z_84)
                      _fail(z_84);
                    else
                      u_84 = z_84;
                    if(v_84 != NULL && v_84 != b_85)
                      _fail(b_85);
                    else
                      v_84 = b_85;
                    t = SSL_table_put(not_null(t_84), not_null(u_84), not_null(v_84));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = x_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm f_85 = NULL;
  ATerm y_18;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = y_18;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm z_18 = t;
      if(PushChoice()==0)
        {
          t = h_61(t);
          PopChoice();
        }
      else
        {
          t = z_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_9);
    {
      ATerm i_9 (ATerm t)
      {
        ATerm a_19 = t;
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
            t = a_19;
            {
              ATerm j_9 (ATerm t)
              {
                ATerm l_9 (ATerm t)
                {
                  ATerm g_85 = NULL;
                  g_85 = t;
                  if(f_85 != NULL && f_85 != g_85)
                    _fail(g_85);
                  else
                    f_85 = g_85;
                  return(t);
                }
                t = Undefined_1(t, l_9);
                return(t);
              }
              t = option_defined_1(t, j_9);
              {
                ATerm m_19;
                m_19 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_85), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = m_19;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_9);
      {
        ATerm n_19;
        n_19 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = n_19;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm o_19 = t;
    if(PushChoice()==0)
      {
        t = p_62(t);
        PopChoice();
      }
    else
      {
        t = o_19;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_9);
  t = store_options_0(t);
  {
    ATerm p_19 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, q_62);
        PopChoice();
      }
    else
      {
        t = p_19;
        {
          ATerm i_20 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, o_62);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = i_20;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  t = iowrap_3(t, j_62, k_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm s_9 (ATerm t)
    {
      t = TCons_2(t, g_62, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, s_9);
    return(t);
  }
  t = iowrap_2(t, r_9, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
