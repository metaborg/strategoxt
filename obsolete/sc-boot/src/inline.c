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
ATerm rewrite_1 (ATerm, ATerm a_60 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm x_79 (ATerm));
ATerm Rec_2 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm Let_2 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm t_79 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm k_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm k_69 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm for_3 (ATerm, ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm z_63 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm x_56 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm e_67 (ATerm), ATerm f_67 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm s_66 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm a_66 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm f_66 (ATerm));
ATerm rename_4 (ATerm, ATerm g_67 (ATerm, ATerm (ATerm)), ATerm h_67 (ATerm), ATerm i_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_67 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_75 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_59 (ATerm));
ATerm scope_2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm map_1 (ATerm, ATerm g_73 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_59 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm crush_3 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm));
ATerm Choice_2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm Cong_2 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm));
ATerm Match_1 (ATerm, ATerm m_58 (ATerm));
ATerm Seq_2 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_58 (ATerm), ATerm r_58 (ATerm));
ATerm Build_1 (ATerm, ATerm n_58 (ATerm));
ATerm SVar_1 (ATerm, ATerm l_57 (ATerm));
ATerm Call_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm n_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_73 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm));
ATerm zip_1 (ATerm, ATerm v_71 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_63 (ATerm));
ATerm downup_1 (ATerm, ATerm b_76 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm u_56 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_56 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_62 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm o_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_61 (ATerm));
ATerm need_help_1 (ATerm, ATerm i_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_58 (ATerm), ATerm a_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_61 (ATerm), ATerm t_61 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_61 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  s_2 = t;
  p_2 :
  if(match_cons(s_2, sym_TCons_2))
    {
      t_2 = ATgetArgument(s_2, 0);
      u_2 = ATgetArgument(s_2, 1);
      q_2 :
      if(match_cons(u_2, sym_TCons_2))
        {
          v_2 = ATgetArgument(u_2, 0);
          w_2 = ATgetArgument(u_2, 1);
          r_2 :
          if(match_cons(w_2, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_2), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm c_3 = NULL;
  ATerm e_3 = NULL;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = a_60(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_3), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym_Cons_2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      t = not_null(l_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm q_8 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, x_79);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
            a_4 = t;
            r_3 :
            if(match_cons(a_4, sym_TCons_2))
              {
                b_4 = ATgetArgument(a_4, 0);
                f_4 = ATgetArgument(a_4, 1);
                s_3 :
                if(match_cons(b_4, sym_SDef_3))
                  {
                    c_4 = ATgetArgument(b_4, 0);
                    d_4 = ATgetArgument(b_4, 1);
                    e_4 = ATgetArgument(b_4, 2);
                    t_3 :
                    if(match_cons(f_4, sym_TCons_2))
                      {
                        g_4 = ATgetArgument(f_4, 0);
                        h_4 = ATgetArgument(f_4, 1);
                        u_3 :
                        if(match_cons(h_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_4), not_null(d_4), not_null(e_4));
                        else
                          _fail(t);
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
      t = q_8;
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            ATerm g_0 (ATerm t)
            {
              t = split_2(t, _id, x_79);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
                  l_4 = t;
                  w_3 :
                  if(match_cons(l_4, sym_TCons_2))
                    {
                      m_4 = ATgetArgument(l_4, 0);
                      p_4 = ATgetArgument(l_4, 1);
                      x_3 :
                      if(match_cons(m_4, sym_VarDec_2))
                        {
                          n_4 = ATgetArgument(m_4, 0);
                          o_4 = ATgetArgument(m_4, 1);
                          y_3 :
                          if(match_cons(p_4, sym_TCons_2))
                            {
                              q_4 = ATgetArgument(p_4, 0);
                              r_4 = ATgetArgument(p_4, 1);
                              z_3 :
                              if(match_cons(r_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_4), not_null(o_4));
                              else
                                _fail(t);
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
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, g_0, _id);
            PopChoice();
          }
        else
          {
            t = z_8;
            {
              ATerm i_0 (ATerm t)
              {
                t = x_79(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, i_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Rec_2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm g_5 = NULL;
        t = not_null(c_5);
        {
          ATerm i_5 = NULL;
          t = m_57(t);
          g_5 = t;
          t = not_null(d_5);
          t = n_57(t);
          i_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_5), not_null(i_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm))
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym_Let_2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        ATerm w_5 = NULL;
        t = not_null(s_5);
        {
          ATerm y_5 = NULL;
          t = o_57(t);
          w_5 = t;
          t = not_null(t_5);
          t = p_57(t);
          y_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_5), not_null(y_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm))
{
  ATerm a_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, y_79, y_79);
      PopChoice();
    }
  else
    {
      t = a_9;
      {
        ATerm b_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, a_80, a_80, y_79);
            PopChoice();
          }
        else
          {
            t = b_9;
            t = Rec_2(t, a_80, y_79);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_Rec_2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_SDef_3))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      s_6 = ATgetArgument(p_6, 2);
      t = not_null(r_6);
      {
        ATerm j_0 (ATerm t)
        {
          ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
          w_6 = t;
          n_6 :
          if(match_cons(w_6, sym_VarDec_2))
            {
              x_6 = ATgetArgument(w_6, 0);
              y_6 = ATgetArgument(w_6, 1);
              t = not_null(x_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, j_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym_Let_2))
    {
      h_7 = ATgetArgument(g_7, 0);
      i_7 = ATgetArgument(g_7, 1);
      t = not_null(h_7);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
          l_7 = t;
          e_7 :
          if(match_cons(l_7, sym_SDef_3))
            {
              m_7 = ATgetArgument(l_7, 0);
              n_7 = ATgetArgument(l_7, 1);
              o_7 = ATgetArgument(l_7, 2);
              t = not_null(m_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, k_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm d_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = d_9;
        {
          ATerm e_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = e_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, l_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm t_79 (ATerm))
{
  t = Scope_2(t, t_79, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_DynamicRules_1))
    {
      y_7 = ATgetArgument(x_7, 0);
      {
        ATerm a_8 = NULL;
        t = not_null(y_7);
        t = k_56(t);
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(a_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, w_79, u_79);
      PopChoice();
    }
  else
    {
      t = j_9;
      t = DynamicRules_1(t, u_79);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_DynamicRules_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      t = not_null(h_8);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_Var_1))
    {
      n_8 = ATgetArgument(m_8, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  r_8 :
  if(match_cons(u_8, sym_TCons_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      s_8 :
      if(match_cons(w_8, sym_TCons_2))
        {
          x_8 = ATgetArgument(w_8, 0);
          y_8 = ATgetArgument(w_8, 1);
          t_8 :
          if(match_cons(y_8, sym_TNil_0))
            {
              t = not_null(v_8);
              {
                ATerm c_9 (ATerm t)
                {
                  ATerm k_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(x_8);
                      PopChoice();
                    }
                  else
                    {
                      t = k_9;
                      {
                        ATerm m_9 = t;
                        if(PushChoice()==0)
                          {
                            ATerm m_0 (ATerm t)
                            {
                              t = not_null(x_8);
                              return(t);
                            }
                            t = HdMember_1(t, m_0);
                            t = c_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_9;
                            t = Cons_2(t, _id, c_9);
                          }
                      }
                    }
                  return(t);
                }
                t = c_9(t);
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
ATerm HdMember_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Cons_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      t = k_69(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm l_9 = NULL;
          l_9 = t;
          if(h_9 != NULL && h_9 != l_9)
            _fail(l_9);
          else
            h_9 = l_9;
          return(t);
        }
        t = fetch_1(t, n_0);
        t = not_null(i_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  t_9 = t;
  p_9 :
  if(match_cons(t_9, sym_TCons_2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      q_9 :
      if(match_cons(v_9, sym_TCons_2))
        {
          w_9 = ATgetArgument(v_9, 0);
          z_9 = ATgetArgument(v_9, 1);
          r_9 :
          if(match_cons(w_9, sym_Cons_2))
            {
              x_9 = ATgetArgument(w_9, 0);
              y_9 = ATgetArgument(w_9, 1);
              s_9 :
              if(match_cons(z_9, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_9), not_null(u_9)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_9), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL;
  b_11 = t;
  x_10 :
  if(match_cons(b_11, sym_Cons_2))
    {
      c_11 = ATgetArgument(b_11, 0);
      s_11 = ATgetArgument(b_11, 1);
      y_10 :
      if(match_cons(c_11, sym_TCons_2))
        {
          d_11 = ATgetArgument(c_11, 0);
          o_11 = ATgetArgument(c_11, 1);
          z_10 :
          if(match_cons(o_11, sym_TCons_2))
            {
              p_11 = ATgetArgument(o_11, 0);
              q_11 = ATgetArgument(o_11, 1);
              a_11 :
              if(match_cons(q_11, sym_TNil_0))
                {
                  ATerm w_11 = NULL,x_11 = NULL,f_12 = NULL,n_12 = NULL;
                  ATerm n_9;
                  n_9 = t;
                  {
                    ATerm y_11 = NULL;
                    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
                    t = not_null(p_11);
                    y_11 = t;
                    t = SSL_explode_term(not_null(y_11));
                    a_12 = t;
                    h_10 :
                    if(match_cons(a_12, sym_TCons_2))
                      {
                        b_12 = ATgetArgument(a_12, 0);
                        c_12 = ATgetArgument(a_12, 1);
                        i_10 :
                        if(match_cons(c_12, sym_TCons_2))
                          {
                            d_12 = ATgetArgument(c_12, 0);
                            e_12 = ATgetArgument(c_12, 1);
                            j_10 :
                            if(match_cons(e_12, sym_TNil_0))
                              {
                                if(w_11 != NULL && w_11 != b_12)
                                  _fail(b_12);
                                else
                                  w_11 = b_12;
                                if(x_11 != NULL && x_11 != d_12)
                                  _fail(d_12);
                                else
                                  x_11 = d_12;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = n_9;
                  {
                    ATerm g_12 = NULL;
                    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                    t = not_null(d_11);
                    g_12 = t;
                    t = SSL_explode_term(not_null(g_12));
                    i_12 = t;
                    o_10 :
                    if(match_cons(i_12, sym_TCons_2))
                      {
                        j_12 = ATgetArgument(i_12, 0);
                        k_12 = ATgetArgument(i_12, 1);
                        p_10 :
                        if(match_cons(k_12, sym_TCons_2))
                          {
                            l_12 = ATgetArgument(k_12, 0);
                            m_12 = ATgetArgument(k_12, 1);
                            q_10 :
                            if(match_cons(m_12, sym_TNil_0))
                              {
                                if(w_11 != NULL && w_11 != j_12)
                                  _fail(j_12);
                                else
                                  w_11 = j_12;
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
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_11), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    n_12 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_11), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  a_13 = t;
  w_12 :
  if(match_cons(a_13, sym_Cons_2))
    {
      b_13 = ATgetArgument(a_13, 0);
      g_13 = ATgetArgument(a_13, 1);
      x_12 :
      if(match_cons(b_13, sym_TCons_2))
        {
          c_13 = ATgetArgument(b_13, 0);
          d_13 = ATgetArgument(b_13, 1);
          y_12 :
          if(match_cons(d_13, sym_TCons_2))
            {
              e_13 = ATgetArgument(d_13, 0);
              f_13 = ATgetArgument(d_13, 1);
              z_12 :
              if(match_cons(f_13, sym_TNil_0))
                {
                  ATerm i_13 = NULL;
                  if(c_13 != NULL && c_13 != e_13)
                    _fail(e_13);
                  else
                    c_13 = e_13;
                  if(i_13 != NULL && i_13 != g_13)
                    _fail(g_13);
                  else
                    i_13 = g_13;
                  t = not_null(i_13);
                }
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm k_13 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = u_63(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        t = v_63(t);
        t = k_13(t);
      }
    return(t);
  }
  t = k_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm z_63 (ATerm))
{
  t = x_63(t);
  t = while_not_2(t, y_63, z_63);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      ATerm o_0 (ATerm t)
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_14), (ATerm) ATmakeAppl(sym_TNil_0)));
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
        ATerm b_10 = t;
        if(PushChoice()==0)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                ATerm c_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = c_10;
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
            t = b_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_0, p_0, q_0);
      PopChoice();
    }
  else
    {
      t = a_10;
      {
        ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
        x_14 = t;
        f_14 :
        if(match_cons(x_14, sym_TCons_2))
          {
            y_14 = ATgetArgument(x_14, 0);
            z_14 = ATgetArgument(x_14, 1);
            k_14 :
            if(match_cons(z_14, sym_TCons_2))
              {
                a_15 = ATgetArgument(z_14, 0);
                b_15 = ATgetArgument(z_14, 1);
                u_14 :
                if(match_cons(b_15, sym_TNil_0))
                  {
                    t = not_null(y_14);
                    {
                      ATerm g_15 (ATerm t)
                      {
                        ATerm d_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_10;
                            {
                              ATerm e_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    t = not_null(a_15);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_0);
                                  t = g_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = e_10;
                                  t = Cons_2(t, _id, g_15);
                                }
                            }
                          }
                        return(t);
                      }
                      t = g_15(t);
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
ATerm free_vars_3 (ATerm t, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_15 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = f_65(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        {
          ATerm g_10 = t;
          if(PushChoice()==0)
            {
              ATerm i_15 = NULL;
              ATerm k_10;
              k_10 = t;
              {
                ATerm j_15 = NULL;
                t = g_65(t);
                j_15 = t;
                if(i_15 != NULL && i_15 != j_15)
                  _fail(j_15);
                else
                  i_15 = j_15;
              }
              t = k_10;
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm x_0 (ATerm t)
                  {
                    t = not_null(i_15);
                    return(t);
                  }
                  t = split_2(t, k_15, x_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = h_65(t, v_0, k_15, w_0);
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, y_0, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = g_10;
              {
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, z_0, union_0, k_15);
              }
            }
        }
      }
    return(t);
  }
  t = k_15(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  o_15 :
  if(match_cons(r_15, sym_Scope_2))
    {
      s_15 = ATgetArgument(r_15, 0);
      q_15 = ATgetArgument(r_15, 1);
      t = not_null(s_15);
    }
  else
    {
      if(match_cons(r_15, sym_LRule_1))
        {
          s_15 = ATgetArgument(r_15, 0);
          p_15 :
          if(match_cons(s_15, sym_Rule_3))
            {
              t_15 = ATgetArgument(s_15, 0);
              u_15 = ATgetArgument(s_15, 1);
              v_15 = ATgetArgument(s_15, 2);
              t = not_null(t_15);
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
ATerm Var_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_Var_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      {
        ATerm j_16 = NULL;
        t = not_null(h_16);
        t = x_56(t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  u_16 = t;
  q_16 :
  if(match_cons(u_16, sym_TCons_2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      r_16 :
      if(match_cons(w_16, sym_TCons_2))
        {
          x_16 = ATgetArgument(w_16, 0);
          y_16 = ATgetArgument(w_16, 1);
          s_16 :
          if(match_cons(y_16, sym_TCons_2))
            {
              z_16 = ATgetArgument(y_16, 0);
              a_17 = ATgetArgument(y_16, 1);
              t_16 :
              if(match_cons(a_17, sym_TNil_0))
                {
                  t = not_null(v_16);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm e_17 = NULL;
                      e_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = y_66(t);
                      return(t);
                    }
                    ATerm c_1 (ATerm t)
                    {
                      ATerm g_17 = NULL;
                      g_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_16), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = y_66(t);
                      return(t);
                    }
                    t = z_66(t, b_1, c_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm e_67 (ATerm), ATerm f_67 (ATerm, ATerm (ATerm)))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  u_17 = t;
  r_17 :
  if(match_cons(u_17, sym_TCons_2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      s_17 :
      if(match_cons(w_17, sym_TCons_2))
        {
          x_17 = ATgetArgument(w_17, 0);
          y_17 = ATgetArgument(w_17, 1);
          t_17 :
          if(match_cons(y_17, sym_TNil_0))
            {
              ATerm c_18 = NULL;
              t = not_null(v_17);
              {
                ATerm e_18 = NULL;
                t = e_67(t);
                c_18 = t;
                {
                  ATerm g_18 = NULL;
                  t = map_1(t, new_0);
                  e_18 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm i_18 = NULL;
                    t = zip_1(t, _id);
                    g_18 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm k_18 = NULL;
                      t = conc_0(t);
                      i_18 = t;
                      t = not_null(v_17);
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = not_null(e_18);
                          return(t);
                        }
                        t = f_67(t, d_1);
                        k_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_18), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  x_18 = t;
  t_18 :
  if(match_cons(x_18, sym_TCons_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      u_18 :
      if(match_cons(z_18, sym_TCons_2))
        {
          a_19 = ATgetArgument(z_18, 0);
          d_19 = ATgetArgument(z_18, 1);
          v_18 :
          if(match_cons(a_19, sym_Cons_2))
            {
              b_19 = ATgetArgument(a_19, 0);
              c_19 = ATgetArgument(a_19, 1);
              w_18 :
              if(match_cons(d_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  p_19 = t;
  i_19 :
  if(match_cons(p_19, sym_TCons_2))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      j_19 :
      if(match_cons(r_19, sym_TCons_2))
        {
          s_19 = ATgetArgument(r_19, 0);
          z_19 = ATgetArgument(r_19, 1);
          k_19 :
          if(match_cons(s_19, sym_Cons_2))
            {
              t_19 = ATgetArgument(s_19, 0);
              y_19 = ATgetArgument(s_19, 1);
              l_19 :
              if(match_cons(t_19, sym_TCons_2))
                {
                  u_19 = ATgetArgument(t_19, 0);
                  v_19 = ATgetArgument(t_19, 1);
                  m_19 :
                  if(match_cons(v_19, sym_TCons_2))
                    {
                      w_19 = ATgetArgument(v_19, 0);
                      x_19 = ATgetArgument(v_19, 1);
                      n_19 :
                      if(match_cons(x_19, sym_TNil_0))
                        {
                          o_19 :
                          if(match_cons(z_19, sym_TNil_0))
                            {
                              ATerm b_20 = NULL;
                              if(q_19 != NULL && q_19 != u_19)
                                _fail(u_19);
                              else
                                q_19 = u_19;
                              if(b_20 != NULL && b_20 != w_19)
                                _fail(w_19);
                              else
                                b_20 = w_19;
                              t = not_null(b_20);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm m_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = m_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm s_66 (ATerm, ATerm (ATerm)))
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  i_20 = t;
  f_20 :
  if(match_cons(i_20, sym_TCons_2))
    {
      j_20 = ATgetArgument(i_20, 0);
      k_20 = ATgetArgument(i_20, 1);
      g_20 :
      if(match_cons(k_20, sym_TCons_2))
        {
          l_20 = ATgetArgument(k_20, 0);
          m_20 = ATgetArgument(k_20, 1);
          h_20 :
          if(match_cons(m_20, sym_TNil_0))
            {
              t = not_null(j_20);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(l_20);
                    return(t);
                  }
                  t = split_2(t, _id, f_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = s_66(t, e_1);
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
ATerm all_dist_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  s_20 :
  if(match_cons(v_20, sym_TCons_2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      t_20 :
      if(match_cons(x_20, sym_TCons_2))
        {
          y_20 = ATgetArgument(x_20, 0);
          z_20 = ATgetArgument(x_20, 1);
          u_20 :
          if(match_cons(z_20, sym_TNil_0))
            {
              t = not_null(w_20);
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm c_21 = NULL;
                  c_21 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_21), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = a_66(t);
                  return(t);
                }
                t = _all(t, g_1);
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
ATerm env_alltd_1 (ATerm t, ATerm f_66 (ATerm))
{
  ATerm g_21 (ATerm t)
  {
    ATerm n_10 = t;
    if(PushChoice()==0)
      {
        t = f_66(t);
        PopChoice();
      }
    else
      {
        t = n_10;
        t = all_dist_1(t, g_21);
      }
    return(t);
  }
  t = g_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm g_67 (ATerm, ATerm (ATerm)), ATerm h_67 (ATerm), ATerm i_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_67 (ATerm, ATerm (ATerm)))
{
  ATerm i_21 = NULL;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_21), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm f_22 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        ATerm r_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, g_67);
            PopChoice();
          }
        else
          {
            t = r_10;
            t = RnBinding_2(t, h_67, j_67);
            t = DistBinding_2(t, f_22, i_67);
          }
        return(t);
      }
      t = env_alltd_1(t, h_1);
      return(t);
    }
    t = f_22(t);
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
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  m_22 = t;
  k_22 :
  if(match_cons(m_22, sym_Call_2))
    {
      n_22 = ATgetArgument(m_22, 0);
      p_22 = ATgetArgument(m_22, 1);
      l_22 :
      if(match_cons(n_22, sym_SVar_1))
        {
          o_22 = ATgetArgument(n_22, 0);
          {
            ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_22));
            {
              ATerm i_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, i_1);
              s_22 = t;
              i_22 :
              if(match_cons(s_22, sym_Defined_2))
                {
                  t_22 = ATgetArgument(s_22, 0);
                  u_22 = ATgetArgument(s_22, 1);
                  j_22 :
                  if(match_string(t_22, "f_0"))
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_22)), not_null(p_22));
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
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  f_23 = t;
  c_23 :
  if(match_cons(f_23, sym_Call_2))
    {
      g_23 = ATgetArgument(f_23, 0);
      i_23 = ATgetArgument(f_23, 1);
      d_23 :
      if(match_cons(g_23, sym_SVar_1))
        {
          h_23 = ATgetArgument(g_23, 0);
          e_23 :
          if(match_cons(i_23, sym_Nil_0))
            {
              ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_23));
              {
                ATerm j_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, j_1);
                k_23 = t;
                a_23 :
                if(match_cons(k_23, sym_Defined_2))
                  {
                    l_23 = ATgetArgument(k_23, 0);
                    m_23 = ATgetArgument(k_23, 1);
                    b_23 :
                    if(match_string(l_23, "e_0"))
                      {
                        t = not_null(m_23);
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
ATerm topdown_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm q_23 (ATerm t)
  {
    t = x_75(t);
    t = _all(t, q_23);
    return(t);
  }
  t = q_23(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  f_24 = t;
  t_23 :
  if(match_cons(f_24, sym_TCons_2))
    {
      g_24 = ATgetArgument(f_24, 0);
      q_25 = ATgetArgument(f_24, 1);
      u_23 :
      if(match_cons(g_24, sym_VarDec_2))
        {
          h_24 = ATgetArgument(g_24, 0);
          r_24 = ATgetArgument(g_24, 1);
          v_23 :
          if(match_cons(r_24, sym_FunType_2))
            {
              s_24 = ATgetArgument(r_24, 0);
              p_25 = ATgetArgument(r_24, 1);
              w_23 :
              if(match_cons(s_24, sym_Cons_2))
                {
                  t_24 = ATgetArgument(s_24, 0);
                  m_25 = ATgetArgument(s_24, 1);
                  x_23 :
                  if(match_cons(m_25, sym_Nil_0))
                    {
                      y_23 :
                      if(match_cons(q_25, sym_TCons_2))
                        {
                          r_25 = ATgetArgument(q_25, 0);
                          v_25 = ATgetArgument(q_25, 1);
                          z_23 :
                          if(match_cons(v_25, sym_TNil_0))
                            {
                              ATerm s_10;
                              s_10 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_24)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue)), not_null(r_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, k_1);
                              }
                              t = s_10;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(m_25, sym_Cons_2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          o_25 = ATgetArgument(m_25, 1);
                          a_24 :
                          if(match_cons(q_25, sym_TCons_2))
                            {
                              r_25 = ATgetArgument(q_25, 0);
                              v_25 = ATgetArgument(q_25, 1);
                              b_24 :
                              if(match_cons(r_25, sym_Call_2))
                                {
                                  s_25 = ATgetArgument(r_25, 0);
                                  u_25 = ATgetArgument(r_25, 1);
                                  c_24 :
                                  if(match_cons(s_25, sym_SVar_1))
                                    {
                                      t_25 = ATgetArgument(s_25, 0);
                                      d_24 :
                                      if(match_cons(u_25, sym_Nil_0))
                                        {
                                          e_24 :
                                          if(match_cons(v_25, sym_TNil_0))
                                            {
                                              ATerm t_10;
                                              t_10 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_24)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue)), not_null(t_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm l_1 (ATerm t)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                                  return(t);
                                                }
                                                t = assert_1(t, l_1);
                                              }
                                              t = t_10;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
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
  ATerm i_26 = NULL,o_26 = NULL,p_26 = NULL;
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
      q_26 = t;
      d_26 :
      if(match_cons(q_26, sym_TCons_2))
        {
          r_26 = ATgetArgument(q_26, 0);
          s_26 = ATgetArgument(q_26, 1);
          e_26 :
          if(match_cons(s_26, sym_TCons_2))
            {
              t_26 = ATgetArgument(s_26, 0);
              u_26 = ATgetArgument(s_26, 1);
              f_26 :
              if(match_cons(u_26, sym_TCons_2))
                {
                  v_26 = ATgetArgument(u_26, 0);
                  w_26 = ATgetArgument(u_26, 1);
                  g_26 :
                  if(match_cons(w_26, sym_TNil_0))
                    {
                      if(i_26 != NULL && i_26 != r_26)
                        _fail(r_26);
                      else
                        i_26 = r_26;
                      if(o_26 != NULL && o_26 != t_26)
                        _fail(t_26);
                      else
                        o_26 = t_26;
                      if(p_26 != NULL && p_26 != v_26)
                        _fail(v_26);
                      else
                        p_26 = v_26;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, substitute_arg_0);
                      t = not_null(p_26);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm r_1 (ATerm t)
                          {
                            ATerm u_10 = t;
                            if(PushChoice()==0)
                              {
                                t = SubsArgCall1_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = u_10;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, r_1);
                          return(t);
                        }
                        t = topdown_1(t, q_1);
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
    t = scope_2(t, o_1, p_1);
    return(t);
  }
  t = scope_2(t, m_1, n_1);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  ATerm v_30 (ATerm t)
  {
    ATerm t_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_28));
    {
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, s_1);
      t_28 = t;
      l_27 :
      if(match_cons(t_28, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm w_30 (ATerm t)
  {
    ATerm z_28 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_28));
    {
      ATerm t_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, t_1);
      z_28 = t;
      q_27 :
      if(match_cons(z_28, sym_Defined_3))
        {
          n_29 = ATgetArgument(z_28, 0);
          o_29 = ATgetArgument(z_28, 1);
          p_29 = ATgetArgument(z_28, 2);
          r_27 :
          if(match_string(n_29, "c_0"))
            {
              ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
              if(j_28 != NULL && j_28 != p_29)
                _fail(p_29);
              else
                j_28 = p_29;
              t = not_null(o_29);
              t = strename_0(t);
              r_29 = t;
              p_27 :
              if(match_cons(r_29, sym_SDef_3))
                {
                  s_29 = ATgetArgument(r_29, 0);
                  t_29 = ATgetArgument(r_29, 1);
                  u_29 = ATgetArgument(r_29, 2);
                  {
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                    if(j_28 != NULL && j_28 != s_29)
                      _fail(s_29);
                    else
                      j_28 = s_29;
                    if(v_29 != NULL && v_29 != t_29)
                      _fail(t_29);
                    else
                      v_29 = t_29;
                    if(w_29 != NULL && w_29 != u_29)
                      _fail(u_29);
                    else
                      w_29 = u_29;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_29), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = substitute_args_0(t);
                    x_29 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_28)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, u_1);
                    }
                    t = not_null(x_29);
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
  ATerm x_30 (ATerm t)
  {
    ATerm a_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_28));
    {
      ATerm v_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, v_1);
      a_30 = t;
      u_27 :
      if(match_cons(a_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm y_30 (ATerm t)
  {
    ATerm c_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_28));
    {
      ATerm w_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, w_1);
      c_30 = t;
      a_28 :
      if(match_cons(c_30, sym_Defined_3))
        {
          f_30 = ATgetArgument(c_30, 0);
          g_30 = ATgetArgument(c_30, 1);
          h_30 = ATgetArgument(c_30, 2);
          b_28 :
          if(match_string(f_30, "d_0"))
            {
              ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
              if(j_28 != NULL && j_28 != h_30)
                _fail(h_30);
              else
                j_28 = h_30;
              t = not_null(g_30);
              t = strename_0(t);
              j_30 = t;
              y_27 :
              if(match_cons(j_30, sym_SDef_3))
                {
                  k_30 = ATgetArgument(j_30, 0);
                  l_30 = ATgetArgument(j_30, 1);
                  o_30 = ATgetArgument(j_30, 2);
                  z_27 :
                  if(match_cons(l_30, sym_Cons_2))
                    {
                      m_30 = ATgetArgument(l_30, 0);
                      n_30 = ATgetArgument(l_30, 1);
                      {
                        ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
                        if(j_28 != NULL && j_28 != k_30)
                          _fail(k_30);
                        else
                          j_28 = k_30;
                        if(p_30 != NULL && p_30 != l_30)
                          _fail(l_30);
                        else
                          p_30 = l_30;
                        if(q_30 != NULL && q_30 != o_30)
                          _fail(o_30);
                        else
                          q_30 = o_30;
                        t = new_0(t);
                        r_30 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_28)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm x_1 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, x_1);
                        }
                        t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(r_30), not_null(p_30), not_null(q_30)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm z_30 (ATerm t)
  {
    ATerm u_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_28));
    {
      ATerm y_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, y_1);
      u_30 = t;
      d_28 :
      if(match_cons(u_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  h_28 = t;
  e_28 :
  if(match_cons(h_28, sym_Call_2))
    {
      i_28 = ATgetArgument(h_28, 0);
      k_28 = ATgetArgument(h_28, 1);
      f_28 :
      if(match_cons(i_28, sym_SVar_1))
        {
          j_28 = ATgetArgument(i_28, 0);
          g_28 :
          if(match_cons(k_28, sym_Nil_0))
            {
              ATerm v_10 = t;
              if(PushChoice()==0)
                {
                  t = v_30(t);
                  PopChoice();
                }
              else
                {
                  t = v_10;
                  {
                    ATerm w_10 = t;
                    if(PushChoice()==0)
                      {
                        t = w_30(t);
                        PopChoice();
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm e_11 = t;
                          if(PushChoice()==0)
                            {
                              t = x_30(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm f_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = y_30(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_11;
                                    t = z_30(t);
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
              ATerm g_11 = t;
              if(PushChoice()==0)
                {
                  t = v_30(t);
                  PopChoice();
                }
              else
                {
                  t = g_11;
                  {
                    ATerm h_11 = t;
                    if(PushChoice()==0)
                      {
                        t = w_30(t);
                        PopChoice();
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm i_11 = t;
                          if(PushChoice()==0)
                            {
                              t = x_30(t);
                              PopChoice();
                            }
                          else
                            {
                              t = i_11;
                              t = z_30(t);
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_SDef_3))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      q_31 = ATgetArgument(n_31, 2);
      {
        ATerm j_11;
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm z_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, z_1);
        }
        t = j_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_Cons_2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      t = not_null(x_31);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
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
              ATerm k_11;
              k_11 = t;
              {
                ATerm n_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm l_11 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_11;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  n_32 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_32), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = k_11;
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
ATerm end_scope_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm y_32 = NULL;
    ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
    t = v_59(t);
    y_32 = t;
    if(w_32 != NULL && w_32 != y_32)
      _fail(y_32);
    else
      w_32 = y_32;
    {
      ATerm n_11 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = n_11;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      z_32 = t;
      u_32 :
      if(match_cons(z_32, sym_Cons_2))
        {
          a_33 = ATgetArgument(z_32, 0);
          b_33 = ATgetArgument(z_32, 1);
          if(x_32 != NULL && x_32 != a_33)
            _fail(a_33);
          else
            x_32 = a_33;
          if(v_32 != NULL && v_32 != b_33)
            _fail(b_33);
          else
            v_32 = b_33;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_32), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(x_32);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm c_33 = NULL;
              c_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, a_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = m_11;
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm j_33 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm k_33 = NULL;
    ATerm l_33 = NULL;
    t = u_59(t);
    k_33 = t;
    if(j_33 != NULL && j_33 != k_33)
      _fail(k_33);
    else
      j_33 = k_33;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm t_11 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = t_11;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = r_11;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm))
{
  t = begin_scope_1(t, w_59);
  {
    ATerm u_11 = t;
    if(PushChoice()==0)
      {
        t = x_59(t);
        t = end_scope_1(t, w_59);
        PopChoice();
      }
    else
      {
        t = u_11;
        t = end_scope_1(t, w_59);
        _fail(t);
      }
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm v_11 = t;
    if(PushChoice()==0)
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = v_11;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, b_2, c_2);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm q_33 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        t = Cons_2(t, g_73, q_33);
      }
    return(t);
  }
  t = q_33(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  v_33 = t;
  s_33 :
  if(match_cons(v_33, sym_TCons_2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      t_33 :
      if(match_cons(x_33, sym_TCons_2))
        {
          y_33 = ATgetArgument(x_33, 0);
          z_33 = ATgetArgument(x_33, 1);
          u_33 :
          if(match_cons(z_33, sym_TNil_0))
            t = SSL_table_get(not_null(w_33), not_null(y_33));
          else
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  j_34 = t;
  f_34 :
  if(match_cons(j_34, sym_TCons_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      g_34 :
      if(match_cons(l_34, sym_TCons_2))
        {
          m_34 = ATgetArgument(l_34, 0);
          n_34 = ATgetArgument(l_34, 1);
          h_34 :
          if(match_cons(n_34, sym_TCons_2))
            {
              o_34 = ATgetArgument(n_34, 0);
              p_34 = ATgetArgument(n_34, 1);
              i_34 :
              if(match_cons(p_34, sym_TNil_0))
                {
                  ATerm h_12;
                  h_12 = t;
                  {
                    ATerm t_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm o_12 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = o_12;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      t_34 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_34), not_null(t_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  e_35 = t;
  b_35 :
  if(match_cons(e_35, sym_TCons_2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      c_35 :
      if(match_cons(g_35, sym_TCons_2))
        {
          h_35 = ATgetArgument(g_35, 0);
          i_35 = ATgetArgument(g_35, 1);
          d_35 :
          if(match_cons(i_35, sym_TNil_0))
            {
              ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
              ATerm p_12;
              p_12 = t;
              {
                ATerm o_35 = NULL;
                ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                t = y_59(t);
                o_35 = t;
                if(l_35 != NULL && l_35 != o_35)
                  _fail(o_35);
                else
                  l_35 = o_35;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm q_12 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_12;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  p_35 = t;
                  a_35 :
                  if(match_cons(p_35, sym_Cons_2))
                    {
                      q_35 = ATgetArgument(p_35, 0);
                      r_35 = ATgetArgument(p_35, 1);
                      if(m_35 != NULL && m_35 != q_35)
                        _fail(q_35);
                      else
                        m_35 = q_35;
                      if(n_35 != NULL && n_35 != r_35)
                        _fail(r_35);
                      else
                        n_35 = r_35;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_35), not_null(m_35)), not_null(n_35)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = p_12;
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
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  b_36 = t;
  x_35 :
  if(match_cons(b_36, sym_SDef_3))
    {
      c_36 = ATgetArgument(b_36, 0);
      d_36 = ATgetArgument(b_36, 1);
      e_36 = ATgetArgument(b_36, 2);
      {
        ATerm r_12;
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(b_36), not_null(c_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm d_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, d_2);
        }
        t = r_12;
        {
          ATerm s_12;
          s_12 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue)), not_null(b_36), not_null(c_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm e_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, e_2);
          }
          t = s_12;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  o_36 = t;
  j_36 :
  if(match_cons(o_36, sym_TCons_2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      k_36 :
      if(match_cons(q_36, sym_TCons_2))
        {
          r_36 = ATgetArgument(q_36, 0);
          s_36 = ATgetArgument(q_36, 1);
          l_36 :
          if(match_cons(s_36, sym_TNil_0))
            {
              ATerm t_12;
              t_12 = t;
              {
                ATerm u_12 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(p_36), not_null(r_36));
                    PopChoice();
                  }
                else
                  {
                    t = u_12;
                    t = SSL_gtr(not_null(p_36), not_null(r_36));
                  }
              }
              t = t_12;
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
  ATerm v_12 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = v_12;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  l_37 = t;
  x_36 :
  if(match_cons(l_37, sym_TCons_2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      d_37 :
      if(match_cons(n_37, sym_TCons_2))
        {
          o_37 = ATgetArgument(n_37, 0);
          p_37 = ATgetArgument(n_37, 1);
          k_37 :
          if(match_cons(p_37, sym_TNil_0))
            {
              ATerm h_13 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(m_37), not_null(o_37));
                  PopChoice();
                }
              else
                {
                  t = h_13;
                  t = SSL_addr(not_null(m_37), not_null(o_37));
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
ATerm foldr_3 (ATerm t, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm j_13 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = f_68(t);
      PopChoice();
    }
  else
    {
      t = j_13;
      {
        ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
        x_37 = t;
        w_37 :
        if(match_cons(x_37, sym_Cons_2))
          {
            y_37 = ATgetArgument(x_37, 0);
            z_37 = ATgetArgument(x_37, 1);
            {
              ATerm c_38 = NULL;
              t = not_null(y_37);
              {
                ATerm g_38 = NULL;
                t = h_68(t);
                c_38 = t;
                t = not_null(z_37);
                t = foldr_3(t, f_68, g_68, h_68);
                g_38 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = g_68(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm r_38 = NULL;
  ATerm t_38 = NULL;
  r_38 = t;
  {
    ATerm u_38 = NULL;
    ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,d_39 = NULL,e_39 = NULL;
    t = not_null(r_38);
    u_38 = t;
    t = SSL_explode_term(not_null(u_38));
    w_38 = t;
    o_38 :
    if(match_cons(w_38, sym_TCons_2))
      {
        x_38 = ATgetArgument(w_38, 0);
        y_38 = ATgetArgument(w_38, 1);
        p_38 :
        if(match_cons(y_38, sym_TCons_2))
          {
            d_39 = ATgetArgument(y_38, 0);
            e_39 = ATgetArgument(y_38, 1);
            q_38 :
            if(match_cons(e_39, sym_TNil_0))
              {
                if(t_38 != NULL && t_38 != d_39)
                  _fail(d_39);
                else
                  t_38 = d_39;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(t_38);
    t = foldr_3(t, v_69, w_69, x_69);
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm l_13 = t;
  if(PushChoice()==0)
    {
      ATerm f_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(1);
        return(t);
      }
      t = crush_3(t, f_2, add_0, term_size_0);
      PopChoice();
    }
  else
    {
      t = l_13;
      {
        ATerm i_39 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = (ATerm) ATmakeInt(1);
            return(t);
          }
          t = crush_3(t, g_2, add_0, i_39);
          return(t);
        }
        t = i_39(t);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm))
{
  ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_LChoice_2))
    {
      q_39 = ATgetArgument(n_39, 0);
      r_39 = ATgetArgument(n_39, 1);
      {
        ATerm y_39 = NULL;
        t = not_null(q_39);
        {
          ATerm a_40 = NULL;
          t = j_57(t);
          y_39 = t;
          t = not_null(r_39);
          t = k_57(t);
          a_40 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_39), not_null(a_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_Choice_2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        ATerm p_40 = NULL;
        t = not_null(l_40);
        {
          ATerm r_40 = NULL;
          t = h_57(t);
          p_40 = t;
          t = not_null(m_40);
          t = i_57(t);
          r_40 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_40), not_null(r_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm))
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym_Cong_2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      {
        ATerm f_41 = NULL;
        t = not_null(b_41);
        {
          ATerm l_41 = NULL;
          t = e_58(t);
          f_41 = t;
          t = not_null(c_41);
          t = f_58(t);
          l_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(f_41), not_null(l_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Match_1))
    {
      w_41 = ATgetArgument(v_41, 0);
      {
        ATerm y_41 = NULL;
        t = not_null(w_41);
        t = m_58(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(y_41));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym_Seq_2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      {
        ATerm l_42 = NULL;
        t = not_null(h_42);
        {
          ATerm n_42 = NULL;
          t = f_57(t);
          l_42 = t;
          t = not_null(i_42);
          t = g_57(t);
          n_42 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_42), not_null(n_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm q_58 (ATerm), ATerm r_58 (ATerm))
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym_Scope_2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      {
        ATerm b_43 = NULL;
        t = not_null(x_42);
        {
          ATerm d_43 = NULL;
          t = q_58(t);
          b_43 = t;
          t = not_null(y_42);
          t = r_58(t);
          d_43 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_43), not_null(d_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Build_1))
    {
      m_43 = ATgetArgument(l_43, 0);
      {
        ATerm o_43 = NULL;
        t = not_null(m_43);
        t = n_58(t);
        o_43 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_SVar_1))
    {
      w_43 = ATgetArgument(v_43, 0);
      {
        ATerm y_43 = NULL;
        t = not_null(w_43);
        t = l_57(t);
        y_43 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(y_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_Call_2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      {
        ATerm p_44 = NULL;
        t = not_null(l_44);
        {
          ATerm r_44 = NULL;
          t = a_58(t);
          p_44 = t;
          t = not_null(m_44);
          t = b_58(t);
          r_44 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(p_44), not_null(r_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  y_44 :
  if(!(match_cons(z_44, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  a_45 :
  if(!(match_cons(b_45, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm c_45 (ATerm t)
  {
    ATerm m_13 = t;
    if(PushChoice()==0)
      {
        t = Id_0(t);
        PopChoice();
      }
    else
      {
        t = m_13;
        {
          ATerm n_13 = t;
          if(PushChoice()==0)
            {
              t = Fail_0(t);
              PopChoice();
            }
          else
            {
              t = n_13;
              {
                ATerm o_13 = t;
                if(PushChoice()==0)
                  {
                    ATerm h_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, h_2, _id);
                    PopChoice();
                  }
                else
                  {
                    t = o_13;
                    {
                      ATerm p_13 = t;
                      if(PushChoice()==0)
                        {
                          t = Build_1(t, _id);
                          PopChoice();
                        }
                      else
                        {
                          t = p_13;
                          {
                            ATerm q_13 = t;
                            if(PushChoice()==0)
                              {
                                t = Match_1(t, _id);
                                PopChoice();
                              }
                            else
                              {
                                t = q_13;
                                {
                                  ATerm r_13 = t;
                                  if(PushChoice()==0)
                                    {
                                      ATerm i_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, i_2, _id);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = r_13;
                                      {
                                        ATerm s_13 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm j_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, j_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = s_13;
                                            {
                                              ATerm t_13 = t;
                                              if(PushChoice()==0)
                                                {
                                                  ATerm k_2 (ATerm t)
                                                  {
                                                    ATerm l_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, l_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, k_2);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = t_13;
                                                  {
                                                    ATerm u_13 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        ATerm m_2 (ATerm t)
                                                        {
                                                          ATerm n_2 (ATerm t)
                                                          {
                                                            ATerm o_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, o_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, n_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, m_2, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = u_13;
                                                        {
                                                          ATerm v_13 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = v_13;
                                                              {
                                                                ATerm w_13 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = Choice_2(t, c_45, c_45);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_13;
                                                                    t = LChoice_2(t, c_45, c_45);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = c_45(t);
  {
    ATerm x_13;
    x_13 = t;
    {
      ATerm x_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, x_2);
      t = leq_0(t);
    }
    t = x_13;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm d_45 (ATerm t)
  {
    ATerm y_13 = t;
    if(PushChoice()==0)
      {
        t = n_77(t);
        PopChoice();
      }
    else
      {
        t = y_13;
        t = _one(t, d_45);
      }
    return(t);
  }
  t = d_45(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_SDef_3))
    {
      k_45 = ATgetArgument(j_45, 0);
      l_45 = ATgetArgument(j_45, 1);
      m_45 = ATgetArgument(j_45, 2);
      {
        ATerm r_45 = NULL;
        t = not_null(k_45);
        {
          ATerm t_45 = NULL;
          t = q_57(t);
          r_45 = t;
          t = not_null(l_45);
          {
            ATerm v_45 = NULL;
            t = r_57(t);
            t_45 = t;
            t = not_null(m_45);
            t = s_57(t);
            v_45 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_45), not_null(t_45), not_null(v_45));
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
  ATerm h_46 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm j_46 = NULL;
    ATerm z_13 = t;
    if(PushChoice()==0)
      {
        ATerm i_46 = NULL;
        i_46 = t;
        b_46 :
        if(!(match_string(i_46, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = z_13;
    j_46 = t;
    if(h_46 != NULL && h_46 != j_46)
      _fail(j_46);
    else
      h_46 = j_46;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm b_14 = t;
      if(PushChoice()==0)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
            k_46 = t;
            e_46 :
            if(match_cons(k_46, sym_Call_2))
              {
                l_46 = ATgetArgument(k_46, 0);
                n_46 = ATgetArgument(k_46, 1);
                f_46 :
                if(match_cons(l_46, sym_SVar_1))
                  {
                    m_46 = ATgetArgument(l_46, 0);
                    g_46 :
                    if(match_cons(n_46, sym_Nil_0))
                      {
                        if(h_46 != NULL && h_46 != m_46)
                          _fail(m_46);
                        else
                          h_46 = m_46;
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
          t = oncetd_1(t, a_3);
          PopChoice();
          _fail(t);
        }
      else
        t = b_14;
    }
    t = a_14;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, y_2, _id, z_2);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm q_46 (ATerm t)
  {
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, q_46);
        PopChoice();
      }
    else
      {
        t = c_14;
        t = Nil_0(t);
        t = u_73(t);
      }
    return(t);
  }
  t = q_46(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  w_46 = t;
  t_46 :
  if(match_cons(w_46, sym_TCons_2))
    {
      x_46 = ATgetArgument(w_46, 0);
      v_47 = ATgetArgument(w_46, 1);
      u_46 :
      if(match_cons(v_47, sym_TCons_2))
        {
          w_47 = ATgetArgument(v_47, 0);
          x_47 = ATgetArgument(v_47, 1);
          v_46 :
          if(match_cons(x_47, sym_TNil_0))
            {
              t = not_null(x_46);
              {
                ATerm b_3 (ATerm t)
                {
                  t = not_null(w_47);
                  return(t);
                }
                t = at_end_1(t, b_3);
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
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  k_49 = t;
  h_49 :
  if(match_cons(k_49, sym_TCons_2))
    {
      l_49 = ATgetArgument(k_49, 0);
      m_49 = ATgetArgument(k_49, 1);
      i_49 :
      if(match_cons(m_49, sym_TCons_2))
        {
          n_49 = ATgetArgument(m_49, 0);
          o_49 = ATgetArgument(m_49, 1);
          j_49 :
          if(match_cons(o_49, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_49), not_null(n_49));
          else
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
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  y_49 = t;
  t_49 :
  if(match_cons(y_49, sym_TCons_2))
    {
      z_49 = ATgetArgument(y_49, 0);
      c_50 = ATgetArgument(y_49, 1);
      u_49 :
      if(match_cons(z_49, sym_Cons_2))
        {
          a_50 = ATgetArgument(z_49, 0);
          b_50 = ATgetArgument(z_49, 1);
          v_49 :
          if(match_cons(c_50, sym_TCons_2))
            {
              d_50 = ATgetArgument(c_50, 0);
              g_50 = ATgetArgument(c_50, 1);
              w_49 :
              if(match_cons(d_50, sym_Cons_2))
                {
                  e_50 = ATgetArgument(d_50, 0);
                  f_50 = ATgetArgument(d_50, 1);
                  x_49 :
                  if(match_cons(g_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(a_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  s_50 = t;
  n_50 :
  if(match_cons(s_50, sym_TCons_2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      o_50 :
      if(match_cons(t_50, sym_Nil_0))
        {
          p_50 :
          if(match_cons(u_50, sym_TCons_2))
            {
              v_50 = ATgetArgument(u_50, 0);
              w_50 = ATgetArgument(u_50, 1);
              q_50 :
              if(match_cons(v_50, sym_Nil_0))
                {
                  r_50 :
                  if(match_cons(w_50, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm))
{
  ATerm y_50 (ATerm t)
  {
    ATerm d_14 = t;
    if(PushChoice()==0)
      {
        t = q_71(t);
        PopChoice();
      }
    else
      {
        t = d_14;
        t = r_71(t);
        {
          ATerm d_3 (ATerm t)
          {
            t = TCons_2(t, y_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, t_71, d_3);
          t = s_71(t);
        }
      }
    return(t);
  }
  t = y_50(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_71 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_71);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym_Cong_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      {
        ATerm w_51 = NULL;
        t = not_null(t_51);
        {
          ATerm a_52 = NULL;
          t = map_1(t, new_0);
          w_51 = t;
          {
            ATerm c_52 = NULL;
            ATerm f_3 (ATerm t)
            {
              ATerm y_51 = NULL;
              y_51 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_51));
              return(t);
            }
            t = map_1(t, f_3);
            a_52 = t;
            t = not_null(t_51);
            {
              ATerm g_52 = NULL;
              t = map_1(t, new_0);
              c_52 = t;
              {
                ATerm i_52 = NULL;
                ATerm g_3 (ATerm t)
                {
                  ATerm e_52 = NULL;
                  e_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_52));
                  return(t);
                }
                t = map_1(t, g_3);
                g_52 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm w_52 = NULL;
                  t = zip_1(t, _id);
                  i_52 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm y_52 = NULL;
                    ATerm h_3 (ATerm t)
                    {
                      ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
                      k_52 = t;
                      i_51 :
                      if(match_cons(k_52, sym_TCons_2))
                        {
                          l_52 = ATgetArgument(k_52, 0);
                          q_52 = ATgetArgument(k_52, 1);
                          j_51 :
                          if(match_cons(l_52, sym_TCons_2))
                            {
                              m_52 = ATgetArgument(l_52, 0);
                              n_52 = ATgetArgument(l_52, 1);
                              k_51 :
                              if(match_cons(n_52, sym_TCons_2))
                                {
                                  o_52 = ATgetArgument(n_52, 0);
                                  p_52 = ATgetArgument(n_52, 1);
                                  l_51 :
                                  if(match_cons(p_52, sym_TNil_0))
                                    {
                                      m_51 :
                                      if(match_cons(q_52, sym_TCons_2))
                                        {
                                          r_52 = ATgetArgument(q_52, 0);
                                          s_52 = ATgetArgument(q_52, 1);
                                          n_51 :
                                          if(match_cons(s_52, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_52)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, h_3);
                    w_52 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    y_52 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_51), not_null(a_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_52)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_51), not_null(g_52))))));
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
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  r_53 = t;
  q_53 :
  if(match_cons(r_53, sym_Cong_2))
    {
      s_53 = ATgetArgument(r_53, 0);
      t_53 = ATgetArgument(r_53, 1);
      {
        ATerm z_53 = NULL;
        t = not_null(t_53);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm w_53 = NULL,x_53 = NULL;
            x_53 = t;
            o_53 :
            if(match_cons(x_53, sym_Match_1))
              {
                w_53 = ATgetArgument(x_53, 0);
                t = not_null(w_53);
              }
            else
              {
                if(match_cons(x_53, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_3);
          z_53 = t;
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(s_53), not_null(z_53)));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  j_54 = t;
  h_54 :
  if(match_cons(j_54, sym_Scope_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      l_54 = ATgetArgument(j_54, 1);
      i_54 :
      if(match_cons(k_54, sym_Nil_0))
        t = not_null(l_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
  c_55 = t;
  u_54 :
  if(match_cons(c_55, sym_Choice_2))
    {
      d_55 = ATgetArgument(c_55, 0);
      b_55 = ATgetArgument(c_55, 1);
      if(d_55 != NULL && d_55 != b_55)
        _fail(b_55);
      else
        d_55 = b_55;
      t = not_null(d_55);
    }
  else
    {
      if(match_cons(c_55, sym_LChoice_2))
        {
          d_55 = ATgetArgument(c_55, 0);
          b_55 = ATgetArgument(c_55, 1);
          if(d_55 != NULL && d_55 != b_55)
            _fail(b_55);
          else
            d_55 = b_55;
          t = not_null(d_55);
        }
      else
        {
          if(match_cons(c_55, sym_Where_1))
            {
              d_55 = ATgetArgument(c_55, 0);
              v_54 :
              if(match_cons(d_55, sym_Where_1))
                {
                  e_55 = ATgetArgument(d_55, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_55));
                }
              else
                {
                  if(match_cons(d_55, sym_Seq_2))
                    {
                      e_55 = ATgetArgument(d_55, 0);
                      g_55 = ATgetArgument(d_55, 1);
                      w_54 :
                      if(match_cons(e_55, sym_Where_1))
                        {
                          f_55 = ATgetArgument(e_55, 0);
                          x_54 :
                          if(match_cons(g_55, sym_Seq_2))
                            {
                              h_55 = ATgetArgument(g_55, 0);
                              j_55 = ATgetArgument(g_55, 1);
                              y_54 :
                              if(match_cons(h_55, sym_Build_1))
                                {
                                  i_55 = ATgetArgument(h_55, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_55)), not_null(j_55))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(c_55, sym_Not_1))
                {
                  d_55 = ATgetArgument(c_55, 0);
                  z_54 :
                  if(match_cons(d_55, sym_Not_1))
                    {
                      e_55 = ATgetArgument(d_55, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_55));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(c_55, sym_Test_1))
                    {
                      d_55 = ATgetArgument(c_55, 0);
                      a_55 :
                      if(match_cons(d_55, sym_Test_1))
                        {
                          e_55 = ATgetArgument(d_55, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_55));
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  f_56 = t;
  b_56 :
  if(match_cons(f_56, sym_Choice_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      j_56 = ATgetArgument(f_56, 1);
      c_56 :
      if(match_cons(g_56, sym_Choice_2))
        {
          h_56 = ATgetArgument(g_56, 0);
          i_56 = ATgetArgument(g_56, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_56), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_56), not_null(j_56)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(f_56, sym_Seq_2))
        {
          g_56 = ATgetArgument(f_56, 0);
          j_56 = ATgetArgument(f_56, 1);
          d_56 :
          if(match_cons(g_56, sym_Seq_2))
            {
              h_56 = ATgetArgument(g_56, 0);
              i_56 = ATgetArgument(g_56, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_56), not_null(j_56)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(f_56, sym_LChoice_2))
            {
              g_56 = ATgetArgument(f_56, 0);
              j_56 = ATgetArgument(f_56, 1);
              e_56 :
              if(match_cons(g_56, sym_LChoice_2))
                {
                  h_56 = ATgetArgument(g_56, 0);
                  i_56 = ATgetArgument(g_56, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_56), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_56), not_null(j_56)));
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
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,o_58 = NULL,p_58 = NULL;
  k_58 = t;
  c_58 :
  if(match_cons(k_58, sym_Seqs_1))
    {
      l_58 = ATgetArgument(k_58, 0);
      d_58 :
      if(match_cons(l_58, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(l_58, sym_Cons_2))
            {
              i_58 = ATgetArgument(l_58, 0);
              j_58 = ATgetArgument(l_58, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_58)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(k_58, sym_Choices_1))
        {
          l_58 = ATgetArgument(k_58, 0);
          g_58 :
          if(match_cons(l_58, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(l_58, sym_Cons_2))
                {
                  i_58 = ATgetArgument(l_58, 0);
                  j_58 = ATgetArgument(l_58, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_58)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(k_58, sym_LChoices_1))
            {
              l_58 = ATgetArgument(k_58, 0);
              h_58 :
              if(match_cons(l_58, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(l_58, sym_Cons_2))
                    {
                      i_58 = ATgetArgument(l_58, 0);
                      j_58 = ATgetArgument(l_58, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_58)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(k_58, sym_Lets_2))
                {
                  l_58 = ATgetArgument(k_58, 0);
                  o_58 = ATgetArgument(k_58, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_58), not_null(o_58));
                }
              else
                {
                  if(match_cons(k_58, sym_BA_2))
                    {
                      l_58 = ATgetArgument(k_58, 0);
                      o_58 = ATgetArgument(k_58, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_58)), not_null(l_58));
                    }
                  else
                    {
                      if(match_cons(k_58, sym_MA_2))
                        {
                          l_58 = ATgetArgument(k_58, 0);
                          o_58 = ATgetArgument(k_58, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_58)), not_null(o_58));
                        }
                      else
                        {
                          if(match_cons(k_58, sym_AM_2))
                            {
                              l_58 = ATgetArgument(k_58, 0);
                              o_58 = ATgetArgument(k_58, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_58), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_58)));
                            }
                          else
                            {
                              if(match_cons(k_58, sym_BAM_3))
                                {
                                  l_58 = ATgetArgument(k_58, 0);
                                  o_58 = ATgetArgument(k_58, 1);
                                  p_58 = ATgetArgument(k_58, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_58)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_58), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_58)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(k_58, sym_InfixApp_3))
                                    {
                                      l_58 = ATgetArgument(k_58, 0);
                                      o_58 = ATgetArgument(k_58, 1);
                                      p_58 = ATgetArgument(k_58, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_58), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_58), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_58), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm l_60 = NULL,m_60 = NULL;
  l_60 = t;
  j_60 :
  if(match_cons(l_60, sym_Where_1))
    {
      m_60 = ATgetArgument(l_60, 0);
      k_60 :
      if(match_cons(m_60, sym_Fail_0))
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
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  p_60 :
  if(match_cons(r_60, sym_LChoice_2))
    {
      s_60 = ATgetArgument(r_60, 0);
      t_60 = ATgetArgument(r_60, 1);
      q_60 :
      if(match_cons(t_60, sym_Fail_0))
        t = not_null(s_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  x_60 :
  if(match_cons(z_60, sym_LChoice_2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      y_60 :
      if(match_cons(a_61, sym_Fail_0))
        t = not_null(b_61);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm o_61 = NULL,q_61 = NULL,r_61 = NULL;
  o_61 = t;
  l_61 :
  if(match_cons(o_61, sym_Choice_2))
    {
      q_61 = ATgetArgument(o_61, 0);
      r_61 = ATgetArgument(o_61, 1);
      m_61 :
      if(match_cons(r_61, sym_Fail_0))
        t = not_null(q_61);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  a_62 :
  if(match_cons(c_62, sym_Choice_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      b_62 :
      if(match_cons(d_62, sym_Fail_0))
        t = not_null(e_62);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  m_62 = t;
  l_62 :
  if(match_cons(m_62, sym_Cong_2))
    {
      n_62 = ATgetArgument(m_62, 0);
      o_62 = ATgetArgument(m_62, 1);
      t = not_null(o_62);
      {
        ATerm n_3 (ATerm t)
        {
          ATerm r_62 = NULL;
          r_62 = t;
          k_62 :
          if(!(match_cons(r_62, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, n_3);
        t = (ATerm) ATmakeAppl(sym_Fail_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  u_62 :
  if(match_cons(w_62, sym_Path_2))
    {
      x_62 = ATgetArgument(w_62, 0);
      y_62 = ATgetArgument(w_62, 1);
      v_62 :
      if(match_cons(y_62, sym_Fail_0))
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
  ATerm i_63 = NULL,j_63 = NULL;
  i_63 = t;
  c_63 :
  if(match_cons(i_63, sym_One_1))
    {
      j_63 = ATgetArgument(i_63, 0);
      h_63 :
      if(match_cons(j_63, sym_Fail_0))
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
  ATerm o_63 = NULL,p_63 = NULL;
  o_63 = t;
  m_63 :
  if(match_cons(o_63, sym_Some_1))
    {
      p_63 = ATgetArgument(o_63, 0);
      n_63 :
      if(match_cons(p_63, sym_Fail_0))
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
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  s_63 :
  if(match_cons(a_64, sym_Rec_2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      t_63 :
      if(match_cons(c_64, sym_Fail_0))
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
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  g_64 :
  if(match_cons(i_64, sym_Scope_2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      h_64 :
      if(match_cons(k_64, sym_Fail_0))
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
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL;
  q_64 = t;
  o_64 :
  if(match_cons(q_64, sym_Seq_2))
    {
      r_64 = ATgetArgument(q_64, 0);
      s_64 = ATgetArgument(q_64, 1);
      p_64 :
      if(match_cons(r_64, sym_Fail_0))
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
  ATerm y_64 = NULL,z_64 = NULL;
  y_64 = t;
  w_64 :
  if(match_cons(y_64, sym_Not_1))
    {
      z_64 = ATgetArgument(y_64, 0);
      x_64 :
      if(match_cons(z_64, sym_Fail_0))
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
  ATerm e_65 = NULL,j_65 = NULL;
  e_65 = t;
  c_65 :
  if(match_cons(e_65, sym_Test_1))
    {
      j_65 = ATgetArgument(e_65, 0);
      d_65 :
      if(match_cons(j_65, sym_Fail_0))
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
  ATerm e_14 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = e_14;
      {
        ATerm g_14 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = g_14;
            {
              ATerm h_14 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_14;
                  {
                    ATerm i_14 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm j_14 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_14;
                              {
                                ATerm l_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_14;
                                    {
                                      ATerm m_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_14;
                                          {
                                            ATerm n_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = n_14;
                                                {
                                                  ATerm o_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = o_14;
                                                      {
                                                        ATerm p_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = p_14;
                                                            {
                                                              ATerm q_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = q_14;
                                                                  {
                                                                    ATerm r_14 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_14;
                                                                        {
                                                                          ATerm s_14 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_14;
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
  ATerm o_65 = NULL,p_65 = NULL;
  o_65 = t;
  m_65 :
  if(match_cons(o_65, sym_Match_1))
    {
      p_65 = ATgetArgument(o_65, 0);
      n_65 :
      if(match_cons(p_65, sym_Wld_0))
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
  ATerm u_65 = NULL,v_65 = NULL;
  u_65 = t;
  s_65 :
  if(match_cons(u_65, sym_Where_1))
    {
      v_65 = ATgetArgument(u_65, 0);
      t_65 :
      if(match_cons(v_65, sym_Id_0))
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
  ATerm b_66 = NULL,c_66 = NULL;
  b_66 = t;
  y_65 :
  if(match_cons(b_66, sym_All_1))
    {
      c_66 = ATgetArgument(b_66, 0);
      z_65 :
      if(match_cons(c_66, sym_Id_0))
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
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  h_66 :
  if(match_cons(j_66, sym_Rec_2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      i_66 :
      if(match_cons(l_66, sym_Id_0))
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
  ATerm r_66 = NULL,t_66 = NULL,u_66 = NULL;
  r_66 = t;
  p_66 :
  if(match_cons(r_66, sym_Scope_2))
    {
      t_66 = ATgetArgument(r_66, 0);
      u_66 = ATgetArgument(r_66, 1);
      q_66 :
      if(match_cons(u_66, sym_Id_0))
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
  ATerm c_67 = NULL,d_67 = NULL,l_67 = NULL;
  c_67 = t;
  a_67 :
  if(match_cons(c_67, sym_LChoice_2))
    {
      d_67 = ATgetArgument(c_67, 0);
      l_67 = ATgetArgument(c_67, 1);
      b_67 :
      if(match_cons(d_67, sym_Id_0))
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
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  r_67 = t;
  p_67 :
  if(match_cons(r_67, sym_Seq_2))
    {
      s_67 = ATgetArgument(r_67, 0);
      t_67 = ATgetArgument(r_67, 1);
      q_67 :
      if(match_cons(t_67, sym_Id_0))
        t = not_null(s_67);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  x_67 :
  if(match_cons(z_67, sym_Seq_2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      y_67 :
      if(match_cons(a_68, sym_Id_0))
        t = not_null(b_68);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  k_68 = t;
  i_68 :
  if(match_cons(k_68, sym_Not_1))
    {
      l_68 = ATgetArgument(k_68, 0);
      j_68 :
      if(match_cons(l_68, sym_Id_0))
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
  ATerm q_68 = NULL,r_68 = NULL;
  q_68 = t;
  o_68 :
  if(match_cons(q_68, sym_Test_1))
    {
      r_68 = ATgetArgument(q_68, 0);
      p_68 :
      if(match_cons(r_68, sym_Id_0))
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
  ATerm t_14 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = t_14;
      {
        ATerm w_14 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = w_14;
            {
              ATerm c_15 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = c_15;
                  {
                    ATerm d_15 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = d_15;
                        {
                          ATerm e_15 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_15;
                              {
                                ATerm f_15 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_15;
                                    {
                                      ATerm h_15 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = h_15;
                                          {
                                            ATerm l_15 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = l_15;
                                                {
                                                  ATerm m_15 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = m_15;
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
  ATerm n_15 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = n_15;
      {
        ATerm w_15 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = w_15;
            {
              ATerm x_15 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = x_15;
                  {
                    ATerm y_15 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm z_15 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = z_15;
                              {
                                ATerm a_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_16;
                                    {
                                      ATerm b_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_16;
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
ATerm repeat_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  ATerm t_68 (ATerm t)
  {
    ATerm c_16 = t;
    if(PushChoice()==0)
      {
        t = d_63(t);
        t = t_68(t);
        PopChoice();
      }
    else
      {
        t = c_16;
        t = e_63(t);
      }
    return(t);
  }
  t = t_68(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_63 (ATerm))
{
  t = repeat_2(t, g_63, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm u_68 (ATerm t)
  {
    t = b_76(t);
    t = _all(t, u_68);
    t = b_76(t);
    return(t);
  }
  t = u_68(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, o_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm q_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, q_3);
    }
    return(t);
  }
  t = map_1(t, p_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_56 (ATerm))
{
  ATerm y_68 = NULL,z_68 = NULL;
  y_68 = t;
  x_68 :
  if(match_cons(y_68, sym_Strategies_1))
    {
      z_68 = ATgetArgument(y_68, 0);
      {
        ATerm b_69 = NULL;
        t = not_null(z_68);
        t = u_56(t);
        b_69 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm j_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym_Specification_1))
    {
      l_69 = ATgetArgument(j_69, 0);
      {
        ATerm p_69 = NULL;
        t = not_null(l_69);
        t = w_56(t);
        p_69 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(p_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, j_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, i_4);
    return(t);
  }
  t = Specification_1(t, v_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_69 = NULL;
  u_69 = t;
  t_69 :
  if(!(match_cons(u_69, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym_TCons_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        ATerm h_70 = NULL;
        t = not_null(d_70);
        {
          ATerm j_70 = NULL;
          t = v_58(t);
          h_70 = t;
          t = not_null(e_70);
          t = w_58(t);
          j_70 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_70), not_null(j_70));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_70 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm r_70 = NULL,s_70 = NULL;
      r_70 = t;
      p_70 :
      if(match_cons(r_70, sym_Program_1))
        {
          s_70 = ATgetArgument(r_70, 0);
          if(q_70 != NULL && q_70 != s_70)
            _fail(s_70);
          else
            q_70 = s_70;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, k_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = d_16;
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
  ATerm v_70 = NULL;
  v_70 = t;
  t = SSL_exit(not_null(v_70));
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
              ATerm e_16;
              e_16 = t;
              t = SSL_printnl(not_null(d_71), not_null(f_71));
              t = e_16;
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
ATerm try_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm i_16 = t;
  if(PushChoice()==0)
    {
      t = m_75(t);
      PopChoice();
    }
  else
    t = i_16;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_71 = NULL,w_71 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm k_16 = t;
      if(PushChoice()==0)
        {
          ATerm v_4 (ATerm t)
          {
            ATerm x_71 = NULL;
            x_71 = t;
            k_71 :
            if(!(match_cons(x_71, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_4);
          PopChoice();
          _fail(t);
        }
      else
        t = k_16;
      return(t);
    }
    ATerm u_4 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, t_4, u_4);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm y_4 (ATerm t)
        {
          ATerm y_71 = NULL,z_71 = NULL;
          y_71 = t;
          m_71 :
          if(match_cons(y_71, sym_Runtime_1))
            {
              z_71 = ATgetArgument(y_71, 0);
              if(w_71 != NULL && w_71 != z_71)
                _fail(z_71);
              else
                w_71 = z_71;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_4);
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, w_4, x_4);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm a_72 = NULL,b_72 = NULL;
            a_72 = t;
            o_71 :
            if(match_cons(a_72, sym_Program_1))
              {
                b_72 = ATgetArgument(a_72, 0);
                if(p_71 != NULL && p_71 != b_72)
                  _fail(b_72);
                else
                  p_71 = b_72;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_5);
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, z_4, e_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(p_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, s_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL;
  i_72 = t;
  f_72 :
  if(match_cons(i_72, sym_TCons_2))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      g_72 :
      if(match_cons(k_72, sym_TCons_2))
        {
          l_72 = ATgetArgument(k_72, 0);
          m_72 = ATgetArgument(k_72, 1);
          h_72 :
          if(match_cons(m_72, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(j_72), not_null(l_72));
          else
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
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
  u_72 = t;
  r_72 :
  if(match_cons(u_72, sym_TCons_2))
    {
      v_72 = ATgetArgument(u_72, 0);
      w_72 = ATgetArgument(u_72, 1);
      s_72 :
      if(match_cons(w_72, sym_TCons_2))
        {
          x_72 = ATgetArgument(w_72, 0);
          y_72 = ATgetArgument(w_72, 1);
          t_72 :
          if(match_cons(y_72, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(v_72), not_null(x_72));
          else
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
  ATerm i_73 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm m_16 = t;
      if(PushChoice()==0)
        {
          ATerm k_5 (ATerm t)
          {
            ATerm j_73 = NULL,k_73 = NULL;
            j_73 = t;
            d_73 :
            if(match_cons(j_73, sym_Output_1))
              {
                k_73 = ATgetArgument(j_73, 0);
                if(i_73 != NULL && i_73 != k_73)
                  _fail(k_73);
                else
                  i_73 = k_73;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_5);
          PopChoice();
        }
      else
        {
          t = m_16;
          {
            ATerm l_73 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            l_73 = t;
            if(i_73 != NULL && i_73 != l_73)
              _fail(l_73);
            else
              i_73 = l_73;
          }
        }
      return(t);
    }
    ATerm j_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, h_5, j_5);
  }
  t = l_16;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_5 (ATerm t)
        {
          t = not_null(i_73);
          return(t);
        }
        t = split_2(t, n_5, _id);
        return(t);
      }
      t = TCons_2(t, m_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, l_5);
    {
      ATerm n_16 = t;
      if(PushChoice()==0)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm u_5 (ATerm t)
            {
              ATerm m_73 = NULL;
              m_73 = t;
              f_73 :
              if(!(match_cons(m_73, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, u_5);
            return(t);
          }
          ATerm p_5 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, o_5, p_5);
          PopChoice();
        }
      else
        {
          t = n_16;
          {
            ATerm v_5 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, v_5);
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
ATerm apply_strategy_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm y_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  ATerm o_16;
  o_16 = t;
  t = dtime_0(t);
  t = o_16;
  t = j_62(t);
  {
    ATerm p_16;
    p_16 = t;
    {
      ATerm z_73 = NULL;
      t = dtime_0(t);
      z_73 = t;
      if(y_73 != NULL && y_73 != z_73)
        _fail(z_73);
      else
        y_73 = z_73;
    }
    t = p_16;
    a_74 = t;
    t_73 :
    if(match_cons(a_74, sym_TCons_2))
      {
        b_74 = ATgetArgument(a_74, 0);
        c_74 = ATgetArgument(a_74, 1);
        w_73 :
        if(match_cons(c_74, sym_TCons_2))
          {
            d_74 = ATgetArgument(c_74, 0);
            e_74 = ATgetArgument(c_74, 1);
            x_73 :
            if(match_cons(e_74, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(y_73)), not_null(b_74)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_74), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm k_74 = NULL;
  k_74 = t;
  t = SSL_ReadFromFile(not_null(k_74));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm q_74 = NULL;
  ATerm s_74 = NULL;
  q_74 = t;
  {
    ATerm w_74 = NULL;
    t = u_74(t);
    s_74 = t;
    t = not_null(q_74);
    t = v_74(t);
    w_74 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_74), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_75 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm c_17 = t;
    if(PushChoice()==0)
      {
        ATerm x_5 (ATerm t)
        {
          ATerm f_75 = NULL,g_75 = NULL;
          f_75 = t;
          c_75 :
          if(match_cons(f_75, sym_Input_1))
            {
              g_75 = ATgetArgument(f_75, 0);
              if(e_75 != NULL && e_75 != g_75)
                _fail(g_75);
              else
                e_75 = g_75;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_5);
        PopChoice();
      }
    else
      {
        t = c_17;
        {
          ATerm h_75 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          h_75 = t;
          if(e_75 != NULL && e_75 != h_75)
            _fail(h_75);
          else
            e_75 = h_75;
        }
      }
  }
  t = b_17;
  {
    ATerm z_5 (ATerm t)
    {
      t = not_null(e_75);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_75 = NULL;
  l_75 = t;
  k_75 :
  if(!(match_cons(l_75, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm q_75 = NULL,r_75 = NULL;
  q_75 = t;
  p_75 :
  if(match_cons(q_75, sym_Undefined_1))
    {
      r_75 = ATgetArgument(q_75, 0);
      {
        ATerm t_75 = NULL;
        t = not_null(r_75);
        t = e_54(t);
        t_75 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_75));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  z_75 :
  if(!(match_cons(a_76, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm d_76 (ATerm t)
  {
    ATerm d_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, o_73, _id);
        PopChoice();
      }
    else
      {
        t = d_17;
        t = Cons_2(t, _id, d_76);
      }
    return(t);
  }
  t = d_76(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_61 (ATerm))
{
  t = fetch_1(t, n_61);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm f_17 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = f_17;
        {
          ATerm h_17 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = h_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_6);
  t = i_62(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  ATerm i_17;
  i_17 = t;
  {
    ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
    m_76 = t;
    f_76 :
    if(match_cons(m_76, sym_TCons_2))
      {
        n_76 = ATgetArgument(m_76, 0);
        o_76 = ATgetArgument(m_76, 1);
        g_76 :
        if(match_cons(o_76, sym_TCons_2))
          {
            p_76 = ATgetArgument(o_76, 0);
            q_76 = ATgetArgument(o_76, 1);
            h_76 :
            if(match_cons(q_76, sym_TCons_2))
              {
                r_76 = ATgetArgument(q_76, 0);
                s_76 = ATgetArgument(q_76, 1);
                i_76 :
                if(match_cons(s_76, sym_TNil_0))
                  {
                    if(j_76 != NULL && j_76 != n_76)
                      _fail(n_76);
                    else
                      j_76 = n_76;
                    if(k_76 != NULL && k_76 != p_76)
                      _fail(p_76);
                    else
                      k_76 = p_76;
                    if(l_76 != NULL && l_76 != r_76)
                      _fail(r_76);
                    else
                      l_76 = r_76;
                    t = SSL_table_put(not_null(j_76), not_null(k_76), not_null(l_76));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = i_17;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  t = SSL_table_create(not_null(v_76));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  {
    ATerm j_17;
    j_17 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_76), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = j_17;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  e_77 :
  if(match_cons(f_77, sym_Cons_2))
    {
      g_77 = ATgetArgument(f_77, 0);
      h_77 = ATgetArgument(f_77, 1);
      {
        ATerm k_77 = NULL;
        t = not_null(g_77);
        t = g_61(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = h_61(t);
        k_77 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_77), not_null(h_77));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  u_77 = t;
  s_77 :
  if(match_cons(u_77, sym_Cons_2))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      t_77 :
      if(match_cons(w_77, sym_Cons_2))
        {
          x_77 = ATgetArgument(w_77, 0);
          y_77 = ATgetArgument(w_77, 1);
          {
            ATerm c_78 = NULL;
            t = not_null(v_77);
            t = i_61(t);
            t = not_null(x_77);
            t = j_61(t);
            c_78 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_78), not_null(y_77));
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
  ATerm k_17 = t;
  if(PushChoice()==0)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm a_79 = NULL;
        a_79 = t;
        g_78 :
        if(!(match_string(a_79, "-S")))
          _fail(t);
        return(t);
      }
      ATerm c_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, b_6, c_6);
      PopChoice();
    }
  else
    {
      t = k_17;
      {
        ATerm l_17 = t;
        if(PushChoice()==0)
          {
            ATerm d_6 (ATerm t)
            {
              ATerm b_79 = NULL;
              b_79 = t;
              h_78 :
              if(!(match_string(b_79, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm i_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, d_6, i_6);
            PopChoice();
          }
        else
          {
            t = l_17;
            {
              ATerm m_17 = t;
              if(PushChoice()==0)
                {
                  ATerm j_6 (ATerm t)
                  {
                    ATerm c_79 = NULL;
                    c_79 = t;
                    i_78 :
                    if(!(match_string(c_79, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm k_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, j_6, k_6);
                  PopChoice();
                }
              else
                {
                  t = m_17;
                  {
                    ATerm n_17 = t;
                    if(PushChoice()==0)
                      {
                        ATerm l_6 (ATerm t)
                        {
                          ATerm d_79 = NULL;
                          d_79 = t;
                          j_78 :
                          if(!(match_string(d_79, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm m_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, l_6, m_6);
                        PopChoice();
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm o_17 = t;
                          if(PushChoice()==0)
                            {
                              ATerm t_6 (ATerm t)
                              {
                                ATerm e_79 = NULL;
                                e_79 = t;
                                k_78 :
                                if(!(match_string(e_79, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, t_6, u_6);
                              PopChoice();
                            }
                          else
                            {
                              t = o_17;
                              {
                                ATerm p_17 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_6 (ATerm t)
                                    {
                                      ATerm f_79 = NULL;
                                      f_79 = t;
                                      l_78 :
                                      if(!(match_string(f_79, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm z_6 (ATerm t)
                                    {
                                      ATerm g_79 = NULL;
                                      g_79 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_79));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, v_6, z_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_17;
                                    {
                                      ATerm q_17 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm a_7 (ATerm t)
                                          {
                                            ATerm i_79 = NULL;
                                            i_79 = t;
                                            n_78 :
                                            if(!(match_string(i_79, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm b_7 (ATerm t)
                                          {
                                            ATerm j_79 = NULL;
                                            j_79 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_79));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, a_7, b_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_17;
                                          {
                                            ATerm z_17 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm c_7 (ATerm t)
                                                {
                                                  ATerm l_79 = NULL;
                                                  l_79 = t;
                                                  p_78 :
                                                  if(!(match_string(l_79, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm d_7 (ATerm t)
                                                {
                                                  ATerm m_79 = NULL;
                                                  m_79 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_79));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, c_7, d_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = z_17;
                                                {
                                                  ATerm a_18 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm j_7 (ATerm t)
                                                      {
                                                        ATerm o_79 = NULL;
                                                        o_79 = t;
                                                        r_78 :
                                                        if(!(match_string(o_79, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm k_7 (ATerm t)
                                                      {
                                                        ATerm p_79 = NULL;
                                                        p_79 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_79));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, j_7, k_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_18;
                                                      {
                                                        ATerm b_18 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_7 (ATerm t)
                                                            {
                                                              ATerm r_79 = NULL;
                                                              r_79 = t;
                                                              t_78 :
                                                              if(!(match_string(r_79, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_7 (ATerm t)
                                                            {
                                                              ATerm s_79 = NULL;
                                                              s_79 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_79));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_7, q_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = b_18;
                                                            {
                                                              ATerm d_18 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_7 (ATerm t)
                                                                  {
                                                                    ATerm c_80 = NULL;
                                                                    c_80 = t;
                                                                    v_78 :
                                                                    if(!(match_string(c_80, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm s_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_7, s_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = d_18;
                                                                  {
                                                                    ATerm f_18 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm t_7 (ATerm t)
                                                                        {
                                                                          ATerm d_80 = NULL;
                                                                          d_80 = t;
                                                                          w_78 :
                                                                          if(!(match_string(d_80, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm u_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, t_7, u_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_18;
                                                                        {
                                                                          ATerm h_18 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm v_7 (ATerm t)
                                                                              {
                                                                                ATerm e_80 = NULL;
                                                                                e_80 = t;
                                                                                x_78 :
                                                                                if(!(match_string(e_80, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm z_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, v_7, z_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_18;
                                                                              {
                                                                                ATerm j_18 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm b_8 (ATerm t)
                                                                                    {
                                                                                      ATerm f_80 = NULL;
                                                                                      f_80 = t;
                                                                                      y_78 :
                                                                                      if(!(match_string(f_80, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm c_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, b_8, c_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_18;
                                                                                    {
                                                                                      ATerm d_8 (ATerm t)
                                                                                      {
                                                                                        ATerm g_80 = NULL;
                                                                                        g_80 = t;
                                                                                        z_78 :
                                                                                        if(!(match_string(g_80, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm e_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, d_8, e_8);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL;
  o_80 = t;
  n_80 :
  if(match_cons(o_80, sym_Cons_2))
    {
      p_80 = ATgetArgument(o_80, 0);
      q_80 = ATgetArgument(o_80, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_80)), not_null(q_80));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_58 (ATerm), ATerm a_59 (ATerm))
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  a_81 :
  if(match_cons(b_81, sym_Cons_2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      {
        ATerm g_81 = NULL;
        t = not_null(c_81);
        {
          ATerm i_81 = NULL;
          t = z_58(t);
          g_81 = t;
          t = not_null(d_81);
          t = a_59(t);
          i_81 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_81), not_null(i_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_81 = NULL;
  o_81 = t;
  n_81 :
  if(!(match_cons(o_81, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm q_81 = NULL;
    q_81 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_81));
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    ATerm l_18 = t;
    if(PushChoice()==0)
      {
        ATerm m_18 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = m_18;
            t = e_61(t);
            t = Cons_2(t, _id, j_8);
          }
        PopChoice();
      }
    else
      {
        t = l_18;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, i_8, j_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm n_18 = t;
    if(PushChoice()==0)
      {
        t = y_61(t);
        PopChoice();
      }
    else
      {
        t = n_18;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  t = store_options_0(t);
  {
    ATerm o_18 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, z_61);
        PopChoice();
      }
    else
      {
        t = o_18;
        {
          ATerm p_18 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, x_61);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = p_18;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_61 (ATerm), ATerm t_61 (ATerm))
{
  t = iowrap_3(t, s_61, t_61, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm p_8 (ATerm t)
    {
      t = TCons_2(t, p_61, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_8);
    return(t);
  }
  t = iowrap_2(t, o_8, _fail);
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
