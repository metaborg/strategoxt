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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm rewrite_1 (ATerm, ATerm z_58 (ATerm));
ATerm debug_1 (ATerm, ATerm f_58 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm n_78 (ATerm));
ATerm Rec_2 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm Let_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm sboundin_3 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm j_78 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm m_55 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm collect_kids_1 (ATerm, ATerm b_69 (ATerm));
ATerm HdMember_1 (ATerm, ATerm j_68 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm for_3 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm), ATerm c_64 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm z_55 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm n_65 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm v_64 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm a_65 (ATerm));
ATerm rename_4 (ATerm, ATerm b_66 (ATerm, ATerm (ATerm)), ATerm c_66 (ATerm), ATerm d_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_66 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_74 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_58 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_58 (ATerm));
ATerm scope_2 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm map_1 (ATerm, ATerm y_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_58 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm crush_3 (ATerm, ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm Choice_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm Cong_2 (ATerm, ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm Match_1 (ATerm, ATerm o_57 (ATerm));
ATerm Seq_2 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm Scope_2 (ATerm, ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm Build_1 (ATerm, ATerm p_57 (ATerm));
ATerm SVar_1 (ATerm, ATerm n_56 (ATerm));
ATerm Call_2 (ATerm, ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_72 (ATerm));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm zip_1 (ATerm, ATerm p_70 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm z_61 (ATerm), ATerm a_62 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_62 (ATerm));
ATerm downup_1 (ATerm, ATerm u_74 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm w_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm y_55 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_74 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_53 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm h_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_60 (ATerm));
ATerm need_help_1 (ATerm, ATerm e_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm), ATerm v_60 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_60 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  o_2 = t;
  l_2 :
  if(match_cons(o_2, sym_TCons_2))
    {
      p_2 = ATgetArgument(o_2, 0);
      q_2 = ATgetArgument(o_2, 1);
      m_2 :
      if(match_cons(q_2, sym_TCons_2))
        {
          r_2 = ATgetArgument(q_2, 0);
          s_2 = ATgetArgument(q_2, 1);
          n_2 :
          if(match_cons(s_2, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_2), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_2), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm rewrite_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm y_2 = NULL;
  ATerm a_3 = NULL;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = z_58(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_2), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = table_lookup_0(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm l_9;
  l_9 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm b_0 (ATerm t)
    {
      ATerm g_3 = NULL;
      ATerm i_3 = NULL;
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = f_58(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_3), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_3), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, a_0, b_0);
    t = printnl_0(t);
  }
  t = l_9;
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(match_cons(o_3, sym_Cons_2))
    {
      p_3 = ATgetArgument(o_3, 0);
      q_3 = ATgetArgument(o_3, 1);
      t = not_null(p_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, n_78);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
            e_4 = t;
            v_3 :
            if(match_cons(e_4, sym_TCons_2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                w_3 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    x_3 :
                    if(match_cons(j_4, sym_TCons_2))
                      {
                        k_4 = ATgetArgument(j_4, 0);
                        l_4 = ATgetArgument(j_4, 1);
                        y_3 :
                        if(match_cons(l_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_4), not_null(h_4), not_null(i_4));
                        else
                          _fail(t);
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
          t = zip_1(t, d_0);
        }
        return(t);
      }
      t = Let_2(t, c_0, _id);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm r_9 = t;
        if(PushChoice()==0)
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, n_78);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
                  p_4 = t;
                  a_4 :
                  if(match_cons(p_4, sym_TCons_2))
                    {
                      q_4 = ATgetArgument(p_4, 0);
                      t_4 = ATgetArgument(p_4, 1);
                      b_4 :
                      if(match_cons(q_4, sym_VarDec_2))
                        {
                          r_4 = ATgetArgument(q_4, 0);
                          s_4 = ATgetArgument(q_4, 1);
                          c_4 :
                          if(match_cons(t_4, sym_TCons_2))
                            {
                              u_4 = ATgetArgument(t_4, 0);
                              v_4 = ATgetArgument(t_4, 1);
                              d_4 :
                              if(match_cons(v_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_4), not_null(s_4));
                              else
                                _fail(t);
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
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            PopChoice();
          }
        else
          {
            t = r_9;
            {
              ATerm g_0 (ATerm t)
              {
                t = n_78(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, g_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Rec_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm k_5 = NULL;
        t = not_null(g_5);
        {
          ATerm m_5 = NULL;
          t = o_56(t);
          k_5 = t;
          t = not_null(h_5);
          t = p_56(t);
          m_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(k_5), not_null(m_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym_Let_2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        ATerm a_6 = NULL;
        t = not_null(w_5);
        {
          ATerm c_6 = NULL;
          t = q_56(t);
          a_6 = t;
          t = not_null(x_5);
          t = r_56(t);
          c_6 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_6), not_null(c_6));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm s_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, o_78, o_78);
      PopChoice();
    }
  else
    {
      t = s_9;
      {
        ATerm u_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, q_78, q_78, o_78);
            PopChoice();
          }
        else
          {
            t = u_9;
            t = Rec_2(t, q_78, o_78);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_Rec_2))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_SDef_3))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      w_6 = ATgetArgument(t_6, 2);
      t = not_null(v_6);
      {
        ATerm h_0 (ATerm t)
        {
          ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
          a_7 = t;
          r_6 :
          if(match_cons(a_7, sym_VarDec_2))
            {
              b_7 = ATgetArgument(a_7, 0);
              c_7 = ATgetArgument(a_7, 1);
              t = not_null(b_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, h_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Let_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      t = not_null(l_7);
      {
        ATerm i_0 (ATerm t)
        {
          ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
          p_7 = t;
          i_7 :
          if(match_cons(p_7, sym_SDef_3))
            {
              q_7 = ATgetArgument(p_7, 0);
              r_7 = ATgetArgument(p_7, 1);
              s_7 = ATgetArgument(p_7, 2);
              t = not_null(q_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, i_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        {
          ATerm w_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = w_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, j_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm j_78 (ATerm))
{
  t = Scope_2(t, j_78, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_DynamicRules_1))
    {
      c_8 = ATgetArgument(b_8, 0);
      {
        ATerm e_8 = NULL;
        t = not_null(c_8);
        t = m_55(t);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(e_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm a_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, m_78, k_78);
      PopChoice();
    }
  else
    {
      t = a_10;
      t = DynamicRules_1(t, k_78);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_DynamicRules_1))
    {
      l_8 = ATgetArgument(k_8, 0);
      t = not_null(l_8);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Var_1))
    {
      r_8 = ATgetArgument(q_8, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  a_9 = t;
  x_8 :
  if(match_cons(a_9, sym_TCons_2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      y_8 :
      if(match_cons(c_9, sym_TCons_2))
        {
          d_9 = ATgetArgument(c_9, 0);
          e_9 = ATgetArgument(c_9, 1);
          z_8 :
          if(match_cons(e_9, sym_TNil_0))
            {
              t = not_null(b_9);
              {
                ATerm j_9 (ATerm t)
                {
                  ATerm b_10 = t;
                  if(PushChoice()==0)
                    {
                      ATerm h_9 = NULL;
                      h_9 = t;
                      w_8 :
                      if(match_cons(h_9, sym_Nil_0))
                        t = not_null(d_9);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = b_10;
                      {
                        ATerm i_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm k_0 (ATerm t)
                            {
                              t = not_null(d_9);
                              return(t);
                            }
                            t = HdMember_1(t, k_0);
                            t = j_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = i_10;
                            t = Cons_2(t, _id, j_9);
                          }
                      }
                    }
                  return(t);
                }
                t = j_9(t);
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
ATerm collect_kids_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm l_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, l_0, union_0, b_69);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Cons_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      t = j_68(t);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm t_9 = NULL;
          t_9 = t;
          if(p_9 != NULL && p_9 != t_9)
            _fail(t_9);
          else
            p_9 = t_9;
          return(t);
        }
        t = fetch_1(t, m_0);
      }
      t = not_null(q_9);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,n_10 = NULL,p_10 = NULL;
  d_10 = t;
  x_9 :
  if(match_cons(d_10, sym_TCons_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      y_9 :
      if(match_cons(f_10, sym_TCons_2))
        {
          g_10 = ATgetArgument(f_10, 0);
          p_10 = ATgetArgument(f_10, 1);
          z_9 :
          if(match_cons(g_10, sym_Cons_2))
            {
              h_10 = ATgetArgument(g_10, 0);
              n_10 = ATgetArgument(g_10, 1);
              c_10 :
              if(match_cons(p_10, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_10), not_null(e_10)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_10), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  v_11 = t;
  r_11 :
  if(match_cons(v_11, sym_Cons_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      b_12 = ATgetArgument(v_11, 1);
      s_11 :
      if(match_cons(w_11, sym_TCons_2))
        {
          x_11 = ATgetArgument(w_11, 0);
          y_11 = ATgetArgument(w_11, 1);
          t_11 :
          if(match_cons(y_11, sym_TCons_2))
            {
              z_11 = ATgetArgument(y_11, 0);
              a_12 = ATgetArgument(y_11, 1);
              u_11 :
              if(match_cons(a_12, sym_TNil_0))
                {
                  ATerm f_12 = NULL,g_12 = NULL,o_12 = NULL,w_12 = NULL;
                  ATerm j_10;
                  j_10 = t;
                  {
                    ATerm h_12 = NULL;
                    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
                    t = not_null(z_11);
                    h_12 = t;
                    t = SSL_explode_term(not_null(h_12));
                    j_12 = t;
                    h_11 :
                    if(match_cons(j_12, sym_TCons_2))
                      {
                        k_12 = ATgetArgument(j_12, 0);
                        l_12 = ATgetArgument(j_12, 1);
                        j_11 :
                        if(match_cons(l_12, sym_TCons_2))
                          {
                            m_12 = ATgetArgument(l_12, 0);
                            n_12 = ATgetArgument(l_12, 1);
                            k_11 :
                            if(match_cons(n_12, sym_TNil_0))
                              {
                                if(f_12 != NULL && f_12 != k_12)
                                  _fail(k_12);
                                else
                                  f_12 = k_12;
                                if(g_12 != NULL && g_12 != m_12)
                                  _fail(m_12);
                                else
                                  g_12 = m_12;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = j_10;
                  {
                    ATerm p_12 = NULL;
                    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
                    t = not_null(x_11);
                    p_12 = t;
                    t = SSL_explode_term(not_null(p_12));
                    r_12 = t;
                    n_11 :
                    if(match_cons(r_12, sym_TCons_2))
                      {
                        s_12 = ATgetArgument(r_12, 0);
                        t_12 = ATgetArgument(r_12, 1);
                        o_11 :
                        if(match_cons(t_12, sym_TCons_2))
                          {
                            u_12 = ATgetArgument(t_12, 0);
                            v_12 = ATgetArgument(t_12, 1);
                            p_11 :
                            if(match_cons(v_12, sym_TNil_0))
                              {
                                if(f_12 != NULL && f_12 != s_12)
                                  _fail(s_12);
                                else
                                  f_12 = s_12;
                                if(o_12 != NULL && o_12 != u_12)
                                  _fail(u_12);
                                else
                                  o_12 = u_12;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_12), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    w_12 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_12), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_12), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  o_14 = t;
  b_14 :
  if(match_cons(o_14, sym_Cons_2))
    {
      p_14 = ATgetArgument(o_14, 0);
      u_14 = ATgetArgument(o_14, 1);
      l_14 :
      if(match_cons(p_14, sym_TCons_2))
        {
          q_14 = ATgetArgument(p_14, 0);
          r_14 = ATgetArgument(p_14, 1);
          m_14 :
          if(match_cons(r_14, sym_TCons_2))
            {
              s_14 = ATgetArgument(r_14, 0);
              t_14 = ATgetArgument(r_14, 1);
              n_14 :
              if(match_cons(t_14, sym_TNil_0))
                {
                  ATerm w_14 = NULL;
                  if(q_14 != NULL && q_14 != s_14)
                    _fail(s_14);
                  else
                    q_14 = s_14;
                  if(w_14 != NULL && w_14 != u_14)
                    _fail(u_14);
                  else
                    w_14 = u_14;
                  t = not_null(w_14);
                }
              else
                _fail(t);
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
ATerm while_not_2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  ATerm y_14 (ATerm t)
  {
    ATerm k_10 = t;
    if(PushChoice()==0)
      {
        t = q_62(t);
        PopChoice();
      }
    else
      {
        t = k_10;
        t = r_62(t);
        t = y_14(t);
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  t = t_62(t);
  t = while_not_2(t, u_62, v_62);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_10 = t;
  if(PushChoice()==0)
    {
      ATerm n_0 (ATerm t)
      {
        ATerm i_15 = NULL;
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_15), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm o_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          ATerm r_0 (ATerm t)
          {
            ATerm k_15 = NULL;
            k_15 = t;
            a_15 :
            if(!(match_cons(k_15, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm s_0 (ATerm t)
          {
            ATerm l_15 = NULL;
            l_15 = t;
            b_15 :
            if(!(match_cons(l_15, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, r_0, s_0);
          return(t);
        }
        t = TCons_2(t, _id, q_0);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm m_10 = t;
        if(PushChoice()==0)
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                ATerm o_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = o_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              ATerm v_0 (ATerm t)
              {
                ATerm m_15 = NULL;
                m_15 = t;
                c_15 :
                if(!(match_cons(m_15, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, u_0, v_0);
              return(t);
            }
            t = TCons_2(t, _id, t_0);
            PopChoice();
          }
        else
          {
            t = m_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, n_0, o_0, p_0);
      PopChoice();
    }
  else
    {
      t = l_10;
      {
        ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
        n_15 = t;
        f_15 :
        if(match_cons(n_15, sym_TCons_2))
          {
            o_15 = ATgetArgument(n_15, 0);
            p_15 = ATgetArgument(n_15, 1);
            g_15 :
            if(match_cons(p_15, sym_TCons_2))
              {
                q_15 = ATgetArgument(p_15, 0);
                r_15 = ATgetArgument(p_15, 1);
                h_15 :
                if(match_cons(r_15, sym_TNil_0))
                  {
                    t = not_null(o_15);
                    {
                      ATerm x_15 (ATerm t)
                      {
                        ATerm q_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm u_15 = NULL;
                            u_15 = t;
                            e_15 :
                            if(!(match_cons(u_15, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = q_10;
                            {
                              ATerm r_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm w_0 (ATerm t)
                                  {
                                    t = not_null(q_15);
                                    return(t);
                                  }
                                  t = HdMember_1(t, w_0);
                                  t = x_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = r_10;
                                  t = Cons_2(t, _id, x_15);
                                }
                            }
                          }
                        return(t);
                      }
                      t = x_15(t);
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
ATerm free_vars_3 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm), ATerm c_64 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_16 (ATerm t)
  {
    ATerm s_10 = t;
    if(PushChoice()==0)
      {
        t = a_64(t);
        PopChoice();
      }
    else
      {
        t = s_10;
        {
          ATerm t_10 = t;
          if(PushChoice()==0)
            {
              ATerm z_15 = NULL;
              ATerm u_10;
              u_10 = t;
              {
                ATerm a_16 = NULL;
                t = b_64(t);
                a_16 = t;
                if(z_15 != NULL && z_15 != a_16)
                  _fail(a_16);
                else
                  z_15 = a_16;
              }
              t = u_10;
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(z_15);
                    return(t);
                  }
                  t = split_2(t, b_16, z_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = c_64(t, x_0, b_16, y_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = t_10;
              t = collect_kids_1(t, b_16);
            }
        }
      }
    return(t);
  }
  t = b_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  i_16 = t;
  f_16 :
  if(match_cons(i_16, sym_Scope_2))
    {
      j_16 = ATgetArgument(i_16, 0);
      h_16 = ATgetArgument(i_16, 1);
      t = not_null(j_16);
    }
  else
    {
      if(match_cons(i_16, sym_LRule_1))
        {
          j_16 = ATgetArgument(i_16, 0);
          g_16 :
          if(match_cons(j_16, sym_Rule_3))
            {
              k_16 = ATgetArgument(j_16, 0);
              l_16 = ATgetArgument(j_16, 1);
              m_16 = ATgetArgument(j_16, 2);
              t = not_null(k_16);
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
ATerm Var_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_Var_1))
    {
      y_16 = ATgetArgument(x_16, 0);
      {
        ATerm a_17 = NULL;
        t = not_null(y_16);
        t = z_55(t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL;
  l_17 = t;
  h_17 :
  if(match_cons(l_17, sym_TCons_2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      i_17 :
      if(match_cons(n_17, sym_TCons_2))
        {
          o_17 = ATgetArgument(n_17, 0);
          p_17 = ATgetArgument(n_17, 1);
          j_17 :
          if(match_cons(p_17, sym_TCons_2))
            {
              q_17 = ATgetArgument(p_17, 0);
              s_17 = ATgetArgument(p_17, 1);
              k_17 :
              if(match_cons(s_17, sym_TNil_0))
                {
                  t = not_null(m_17);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm w_17 = NULL;
                      w_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = t_65(t);
                      return(t);
                    }
                    ATerm c_1 (ATerm t)
                    {
                      ATerm y_17 = NULL;
                      y_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = t_65(t);
                      return(t);
                    }
                    t = u_65(t, b_1, c_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm, ATerm (ATerm)))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  m_18 = t;
  j_18 :
  if(match_cons(m_18, sym_TCons_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      k_18 :
      if(match_cons(o_18, sym_TCons_2))
        {
          p_18 = ATgetArgument(o_18, 0);
          q_18 = ATgetArgument(o_18, 1);
          l_18 :
          if(match_cons(q_18, sym_TNil_0))
            {
              ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,b_19 = NULL;
              ATerm w_18 = NULL;
              t = not_null(n_18);
              {
                ATerm x_18 = NULL;
                t = z_65(t);
                w_18 = t;
                if(t_18 != NULL && t_18 != w_18)
                  _fail(w_18);
                else
                  t_18 = w_18;
                {
                  ATerm y_18 = NULL;
                  t = map_1(t, new_0);
                  x_18 = t;
                  if(u_18 != NULL && u_18 != x_18)
                    _fail(x_18);
                  else
                    u_18 = x_18;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm a_19 = NULL;
                    t = zip_1(t, _id);
                    y_18 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    a_19 = t;
                    if(v_18 != NULL && v_18 != a_19)
                      _fail(a_19);
                    else
                      v_18 = a_19;
                  }
                }
              }
              t = not_null(n_18);
              {
                ATerm d_1 (ATerm t)
                {
                  t = not_null(u_18);
                  return(t);
                }
                t = a_66(t, d_1);
                b_19 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_18), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  o_19 = t;
  k_19 :
  if(match_cons(o_19, sym_TCons_2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      l_19 :
      if(match_cons(q_19, sym_TCons_2))
        {
          r_19 = ATgetArgument(q_19, 0);
          u_19 = ATgetArgument(q_19, 1);
          m_19 :
          if(match_cons(r_19, sym_Cons_2))
            {
              s_19 = ATgetArgument(r_19, 0);
              t_19 = ATgetArgument(r_19, 1);
              n_19 :
              if(match_cons(u_19, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_19), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_19), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
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
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  g_20 = t;
  z_19 :
  if(match_cons(g_20, sym_TCons_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      a_20 :
      if(match_cons(i_20, sym_TCons_2))
        {
          j_20 = ATgetArgument(i_20, 0);
          q_20 = ATgetArgument(i_20, 1);
          b_20 :
          if(match_cons(j_20, sym_Cons_2))
            {
              k_20 = ATgetArgument(j_20, 0);
              p_20 = ATgetArgument(j_20, 1);
              c_20 :
              if(match_cons(k_20, sym_TCons_2))
                {
                  l_20 = ATgetArgument(k_20, 0);
                  m_20 = ATgetArgument(k_20, 1);
                  d_20 :
                  if(match_cons(m_20, sym_TCons_2))
                    {
                      n_20 = ATgetArgument(m_20, 0);
                      o_20 = ATgetArgument(m_20, 1);
                      e_20 :
                      if(match_cons(o_20, sym_TNil_0))
                        {
                          f_20 :
                          if(match_cons(q_20, sym_TNil_0))
                            {
                              ATerm s_20 = NULL;
                              if(h_20 != NULL && h_20 != l_20)
                                _fail(l_20);
                              else
                                h_20 = l_20;
                              if(s_20 != NULL && s_20 != n_20)
                                _fail(n_20);
                              else
                                s_20 = n_20;
                              t = not_null(s_20);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm w_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = w_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm n_65 (ATerm, ATerm (ATerm)))
{
  ATerm z_20 = NULL,i_21 = NULL,j_21 = NULL,w_21 = NULL,x_21 = NULL;
  z_20 = t;
  w_20 :
  if(match_cons(z_20, sym_TCons_2))
    {
      i_21 = ATgetArgument(z_20, 0);
      j_21 = ATgetArgument(z_20, 1);
      x_20 :
      if(match_cons(j_21, sym_TCons_2))
        {
          w_21 = ATgetArgument(j_21, 0);
          x_21 = ATgetArgument(j_21, 1);
          y_20 :
          if(match_cons(x_21, sym_TNil_0))
            {
              t = not_null(i_21);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(w_21);
                    return(t);
                  }
                  t = split_2(t, _id, f_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = n_65(t, e_1);
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
ATerm all_dist_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  g_22 = t;
  d_22 :
  if(match_cons(g_22, sym_TCons_2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      e_22 :
      if(match_cons(i_22, sym_TCons_2))
        {
          j_22 = ATgetArgument(i_22, 0);
          k_22 = ATgetArgument(i_22, 1);
          f_22 :
          if(match_cons(k_22, sym_TNil_0))
            {
              t = not_null(h_22);
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm n_22 = NULL;
                  n_22 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = v_64(t);
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
ATerm env_alltd_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm r_22 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = a_65(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = all_dist_1(t, r_22);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm b_66 (ATerm, ATerm (ATerm)), ATerm c_66 (ATerm), ATerm d_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_66 (ATerm, ATerm (ATerm)))
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_22), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm w_22 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        ATerm y_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, b_66);
            PopChoice();
          }
        else
          {
            t = y_10;
            t = RnBinding_2(t, c_66, e_66);
            t = DistBinding_2(t, w_22, d_66);
          }
        return(t);
      }
      t = env_alltd_1(t, h_1);
      return(t);
    }
    t = w_22(t);
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
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  c_23 = t;
  a_23 :
  if(match_cons(c_23, sym_Call_2))
    {
      d_23 = ATgetArgument(c_23, 0);
      f_23 = ATgetArgument(c_23, 1);
      b_23 :
      if(match_cons(d_23, sym_SVar_1))
        {
          e_23 = ATgetArgument(d_23, 0);
          {
            ATerm i_23 = NULL,j_23 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(e_23));
            {
              ATerm i_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, i_1);
              i_23 = t;
              z_22 :
              if(match_cons(i_23, sym_Defined_1))
                {
                  j_23 = ATgetArgument(i_23, 0);
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_23)), not_null(f_23));
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  t_23 = t;
  q_23 :
  if(match_cons(t_23, sym_Call_2))
    {
      u_23 = ATgetArgument(t_23, 0);
      w_23 = ATgetArgument(t_23, 1);
      r_23 :
      if(match_cons(u_23, sym_SVar_1))
        {
          v_23 = ATgetArgument(u_23, 0);
          s_23 :
          if(match_cons(w_23, sym_Nil_0))
            {
              ATerm y_23 = NULL,i_24 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_23));
              {
                ATerm j_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, j_1);
                y_23 = t;
                p_23 :
                if(match_cons(y_23, sym_Defined_1))
                  {
                    i_24 = ATgetArgument(y_23, 0);
                    t = not_null(i_24);
                    t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm e_25 (ATerm t)
  {
    t = q_74(t);
    t = _all(t, e_25);
    return(t);
  }
  t = e_25(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,z_25 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,t_26 = NULL;
  t_25 = t;
  h_25 :
  if(match_cons(t_25, sym_TCons_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      j_26 = ATgetArgument(t_25, 1);
      i_25 :
      if(match_cons(u_25, sym_VarDec_2))
        {
          v_25 = ATgetArgument(u_25, 0);
          w_25 = ATgetArgument(u_25, 1);
          j_25 :
          if(match_cons(w_25, sym_FunType_2))
            {
              x_25 = ATgetArgument(w_25, 0);
              i_26 = ATgetArgument(w_25, 1);
              k_25 :
              if(match_cons(x_25, sym_Cons_2))
                {
                  z_25 = ATgetArgument(x_25, 0);
                  f_26 = ATgetArgument(x_25, 1);
                  l_25 :
                  if(match_cons(f_26, sym_Nil_0))
                    {
                      m_25 :
                      if(match_cons(j_26, sym_TCons_2))
                        {
                          k_26 = ATgetArgument(j_26, 0);
                          t_26 = ATgetArgument(j_26, 1);
                          n_25 :
                          if(match_cons(t_26, sym_TNil_0))
                            {
                              ATerm z_10;
                              z_10 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(k_26)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, k_1);
                              }
                              t = z_10;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(f_26, sym_Cons_2))
                        {
                          g_26 = ATgetArgument(f_26, 0);
                          h_26 = ATgetArgument(f_26, 1);
                          o_25 :
                          if(match_cons(j_26, sym_TCons_2))
                            {
                              k_26 = ATgetArgument(j_26, 0);
                              t_26 = ATgetArgument(j_26, 1);
                              p_25 :
                              if(match_cons(k_26, sym_Call_2))
                                {
                                  l_26 = ATgetArgument(k_26, 0);
                                  n_26 = ATgetArgument(k_26, 1);
                                  q_25 :
                                  if(match_cons(l_26, sym_SVar_1))
                                    {
                                      m_26 = ATgetArgument(l_26, 0);
                                      r_25 :
                                      if(match_cons(n_26, sym_Nil_0))
                                        {
                                          s_25 :
                                          if(match_cons(t_26, sym_TNil_0))
                                            {
                                              ATerm a_11;
                                              a_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(m_26)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm l_1 (ATerm t)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                                  return(t);
                                                }
                                                t = assert_1(t, l_1);
                                              }
                                              t = a_11;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
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
  ATerm h_27 = NULL,i_27 = NULL,k_27 = NULL;
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
      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
      l_27 = t;
      d_27 :
      if(match_cons(l_27, sym_TCons_2))
        {
          m_27 = ATgetArgument(l_27, 0);
          n_27 = ATgetArgument(l_27, 1);
          e_27 :
          if(match_cons(n_27, sym_TCons_2))
            {
              o_27 = ATgetArgument(n_27, 0);
              p_27 = ATgetArgument(n_27, 1);
              f_27 :
              if(match_cons(p_27, sym_TCons_2))
                {
                  q_27 = ATgetArgument(p_27, 0);
                  r_27 = ATgetArgument(p_27, 1);
                  g_27 :
                  if(match_cons(r_27, sym_TNil_0))
                    {
                      if(h_27 != NULL && h_27 != m_27)
                        _fail(m_27);
                      else
                        h_27 = m_27;
                      if(i_27 != NULL && i_27 != o_27)
                        _fail(o_27);
                      else
                        i_27 = o_27;
                      if(k_27 != NULL && k_27 != q_27)
                        _fail(q_27);
                      else
                        k_27 = q_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_27), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_27), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, substitute_arg_0);
                      t = not_null(k_27);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm b_11 = t;
                          if(PushChoice()==0)
                            {
                              ATerm c_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = SubsArgCall1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = c_11;
                                  t = SubsArgCall2_0(t);
                                }
                              PopChoice();
                            }
                          else
                            t = b_11;
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
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  ATerm g_31 (ATerm t)
  {
    ATerm w_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_29));
    {
      ATerm r_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, r_1);
      w_29 = t;
      z_27 :
      if(match_cons(w_29, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm h_31 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_29));
    {
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, s_1);
      z_29 = t;
      k_28 :
      if(match_cons(z_29, sym_Defined_2))
        {
          a_30 = ATgetArgument(z_29, 0);
          b_30 = ATgetArgument(z_29, 1);
          {
            ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
            if(q_29 != NULL && q_29 != b_30)
              _fail(b_30);
            else
              q_29 = b_30;
            {
              ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
              t = not_null(a_30);
              t = strename_0(t);
              g_30 = t;
              j_28 :
              if(match_cons(g_30, sym_SDef_3))
                {
                  h_30 = ATgetArgument(g_30, 0);
                  i_30 = ATgetArgument(g_30, 1);
                  j_30 = ATgetArgument(g_30, 2);
                  {
                    ATerm k_30 = NULL;
                    if(q_29 != NULL && q_29 != h_30)
                      _fail(h_30);
                    else
                      q_29 = h_30;
                    if(d_30 != NULL && d_30 != i_30)
                      _fail(i_30);
                    else
                      d_30 = i_30;
                    if(e_30 != NULL && e_30 != j_30)
                      _fail(j_30);
                    else
                      e_30 = j_30;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_30), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = substitute_args_0(t);
                    k_30 = t;
                    if(f_30 != NULL && f_30 != k_30)
                      _fail(k_30);
                    else
                      f_30 = k_30;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                        return(t);
                      }
                      t = assert_1(t, t_1);
                    }
                    t = not_null(q_29);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = (ATerm) ATmakeAppl(ATmakeSymbol("Inlining: ", 0, ATtrue));
                        return(t);
                      }
                      t = debug_1(t, u_1);
                    }
                  }
                }
              else
                _fail(t);
              t = not_null(f_30);
            }
          }
        }
      else
        _fail(t);
    }
    return(t);
  }
  ATerm i_31 (ATerm t)
  {
    ATerm m_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_29));
    {
      ATerm v_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, v_1);
      m_30 = t;
      p_28 :
      if(match_cons(m_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm j_31 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_29));
    {
      ATerm w_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, w_1);
      o_30 = t;
      i_29 :
      if(match_cons(o_30, sym_Defined_2))
        {
          p_30 = ATgetArgument(o_30, 0);
          q_30 = ATgetArgument(o_30, 1);
          {
            ATerm s_30 = NULL,v_30 = NULL,w_30 = NULL;
            if(q_29 != NULL && q_29 != q_30)
              _fail(q_30);
            else
              q_29 = q_30;
            {
              ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
              t = not_null(p_30);
              t = strename_0(t);
              x_30 = t;
              g_29 :
              if(match_cons(x_30, sym_SDef_3))
                {
                  y_30 = ATgetArgument(x_30, 0);
                  z_30 = ATgetArgument(x_30, 1);
                  c_31 = ATgetArgument(x_30, 2);
                  h_29 :
                  if(match_cons(z_30, sym_Cons_2))
                    {
                      a_31 = ATgetArgument(z_30, 0);
                      b_31 = ATgetArgument(z_30, 1);
                      {
                        ATerm d_31 = NULL;
                        if(q_29 != NULL && q_29 != y_30)
                          _fail(y_30);
                        else
                          q_29 = y_30;
                        if(s_30 != NULL && s_30 != z_30)
                          _fail(z_30);
                        else
                          s_30 = z_30;
                        if(v_30 != NULL && v_30 != c_31)
                          _fail(c_31);
                        else
                          v_30 = c_31;
                        t = new_0(t);
                        d_31 = t;
                        if(w_30 != NULL && w_30 != d_31)
                          _fail(d_31);
                        else
                          w_30 = d_31;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm x_1 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                            return(t);
                          }
                          t = assert_1(t, x_1);
                        }
                        t = not_null(q_29);
                        {
                          ATerm y_1 (ATerm t)
                          {
                            t = (ATerm) ATmakeAppl(ATmakeSymbol("Inlining: ", 0, ATtrue));
                            return(t);
                          }
                          t = debug_1(t, y_1);
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(w_30), not_null(s_30), not_null(v_30)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_30)), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          }
        }
      else
        _fail(t);
    }
    return(t);
  }
  ATerm k_31 (ATerm t)
  {
    ATerm f_31 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_29));
    {
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, z_1);
      f_31 = t;
      k_29 :
      if(match_cons(f_31, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  o_29 = t;
  l_29 :
  if(match_cons(o_29, sym_Call_2))
    {
      p_29 = ATgetArgument(o_29, 0);
      r_29 = ATgetArgument(o_29, 1);
      m_29 :
      if(match_cons(p_29, sym_SVar_1))
        {
          q_29 = ATgetArgument(p_29, 0);
          n_29 :
          if(match_cons(r_29, sym_Nil_0))
            {
              ATerm d_11 = t;
              if(PushChoice()==0)
                {
                  t = g_31(t);
                  PopChoice();
                }
              else
                {
                  t = d_11;
                  {
                    ATerm e_11 = t;
                    if(PushChoice()==0)
                      {
                        t = h_31(t);
                        PopChoice();
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm f_11 = t;
                          if(PushChoice()==0)
                            {
                              t = i_31(t);
                              PopChoice();
                            }
                          else
                            {
                              t = f_11;
                              {
                                ATerm g_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = j_31(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = g_11;
                                    t = k_31(t);
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
              ATerm i_11 = t;
              if(PushChoice()==0)
                {
                  t = g_31(t);
                  PopChoice();
                }
              else
                {
                  t = i_11;
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
                              t = k_31(t);
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_SDef_3))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      z_31 = ATgetArgument(w_31, 2);
      {
        ATerm q_11;
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, a_2);
        }
        t = q_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Cons_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      t = not_null(g_32);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  p_32 = t;
  m_32 :
  if(match_cons(p_32, sym_TCons_2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      n_32 :
      if(match_cons(r_32, sym_TCons_2))
        {
          s_32 = ATgetArgument(r_32, 0);
          t_32 = ATgetArgument(r_32, 1);
          o_32 :
          if(match_cons(t_32, sym_TNil_0))
            {
              ATerm c_12;
              c_12 = t;
              {
                ATerm w_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm d_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = d_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  w_32 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TNil_0))));
                  t = table_put_0(t);
                }
              }
              t = c_12;
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
ATerm end_scope_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  ATerm e_12;
  e_12 = t;
  {
    ATerm h_33 = NULL;
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
    t = u_58(t);
    h_33 = t;
    if(f_33 != NULL && f_33 != h_33)
      _fail(h_33);
    else
      f_33 = h_33;
    {
      ATerm i_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = i_12;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
        }
      i_33 = t;
      d_33 :
      if(match_cons(i_33, sym_Cons_2))
        {
          j_33 = ATgetArgument(i_33, 0);
          k_33 = ATgetArgument(i_33, 1);
          if(g_33 != NULL && g_33 != j_33)
            _fail(j_33);
          else
            g_33 = j_33;
          if(e_33 != NULL && e_33 != k_33)
            _fail(k_33);
          else
            e_33 = k_33;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_33), (ATerm) ATmakeAppl(sym_TNil_0))));
          t = table_put_0(t);
          t = not_null(g_33);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm l_33 = NULL;
              l_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_33), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, b_2);
          }
        }
      else
        _fail(t);
    }
  }
  t = e_12;
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm s_33 = NULL;
  ATerm q_12;
  q_12 = t;
  {
    ATerm t_33 = NULL;
    ATerm u_33 = NULL;
    t = t_58(t);
    t_33 = t;
    if(s_33 != NULL && s_33 != t_33)
      _fail(t_33);
    else
      s_33 = t_33;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm x_12 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = x_12;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(u_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = q_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  t = begin_scope_1(t, v_58);
  {
    ATerm y_12 = t;
    if(PushChoice()==0)
      {
        t = w_58(t);
        t = end_scope_1(t, v_58);
        PopChoice();
      }
    else
      {
        t = y_12;
        t = end_scope_1(t, v_58);
        _fail(t);
      }
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm z_12 = t;
    if(PushChoice()==0)
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = z_12;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, c_2, d_2);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm b_34 (ATerm t)
  {
    ATerm a_13 = t;
    if(PushChoice()==0)
      {
        ATerm a_34 = NULL;
        a_34 = t;
        z_33 :
        if(!(match_cons(a_34, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = a_13;
        t = Cons_2(t, y_71, b_34);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  g_34 = t;
  d_34 :
  if(match_cons(g_34, sym_TCons_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      e_34 :
      if(match_cons(i_34, sym_TCons_2))
        {
          j_34 = ATgetArgument(i_34, 0);
          k_34 = ATgetArgument(i_34, 1);
          f_34 :
          if(match_cons(k_34, sym_TNil_0))
            t = SSL_table_get(not_null(h_34), not_null(j_34));
          else
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
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  u_34 = t;
  q_34 :
  if(match_cons(u_34, sym_TCons_2))
    {
      v_34 = ATgetArgument(u_34, 0);
      w_34 = ATgetArgument(u_34, 1);
      r_34 :
      if(match_cons(w_34, sym_TCons_2))
        {
          x_34 = ATgetArgument(w_34, 0);
          y_34 = ATgetArgument(w_34, 1);
          s_34 :
          if(match_cons(y_34, sym_TCons_2))
            {
              z_34 = ATgetArgument(y_34, 0);
              a_35 = ATgetArgument(y_34, 1);
              t_34 :
              if(match_cons(a_35, sym_TNil_0))
                {
                  ATerm b_13;
                  b_13 = t;
                  {
                    ATerm e_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm c_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = c_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      e_35 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_34), not_null(e_35)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  }
                  t = b_13;
                }
              else
                _fail(t);
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
ATerm assert_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  t_35 = t;
  q_35 :
  if(match_cons(t_35, sym_TCons_2))
    {
      u_35 = ATgetArgument(t_35, 0);
      v_35 = ATgetArgument(t_35, 1);
      r_35 :
      if(match_cons(v_35, sym_TCons_2))
        {
          w_35 = ATgetArgument(v_35, 0);
          x_35 = ATgetArgument(v_35, 1);
          s_35 :
          if(match_cons(x_35, sym_TNil_0))
            {
              ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
              ATerm d_13;
              d_13 = t;
              {
                ATerm f_36 = NULL;
                ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
                t = x_58(t);
                f_36 = t;
                if(c_36 != NULL && c_36 != f_36)
                  _fail(f_36);
                else
                  c_36 = f_36;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm e_13 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = e_13;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  g_36 = t;
                  p_35 :
                  if(match_cons(g_36, sym_Cons_2))
                    {
                      h_36 = ATgetArgument(g_36, 0);
                      i_36 = ATgetArgument(g_36, 1);
                      if(d_36 != NULL && d_36 != h_36)
                        _fail(h_36);
                      else
                        d_36 = h_36;
                      if(e_36 != NULL && e_36 != i_36)
                        _fail(i_36);
                      else
                        e_36 = i_36;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_36), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_35), not_null(d_36)), not_null(e_36)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = d_13;
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
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym_SDef_3))
    {
      a_37 = ATgetArgument(z_36, 0);
      b_37 = ATgetArgument(z_36, 1);
      c_37 = ATgetArgument(z_36, 2);
      {
        ATerm f_13;
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_37)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, not_null(z_36), not_null(a_37)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm e_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, e_2);
        }
        t = f_13;
        {
          ATerm g_13;
          g_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_37)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, not_null(z_36), not_null(a_37)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm f_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, f_2);
          }
          t = g_13;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  k_37 = t;
  h_37 :
  if(match_cons(k_37, sym_TCons_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      i_37 :
      if(match_cons(m_37, sym_TCons_2))
        {
          n_37 = ATgetArgument(m_37, 0);
          o_37 = ATgetArgument(m_37, 1);
          j_37 :
          if(match_cons(o_37, sym_TNil_0))
            {
              ATerm h_13;
              h_13 = t;
              {
                ATerm i_13 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(l_37), not_null(n_37));
                    PopChoice();
                  }
                else
                  {
                    t = i_13;
                    t = SSL_gtr(not_null(l_37), not_null(n_37));
                  }
              }
              t = h_13;
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
  ATerm j_13 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = j_13;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  y_37 = t;
  v_37 :
  if(match_cons(y_37, sym_TCons_2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      w_37 :
      if(match_cons(a_38, sym_TCons_2))
        {
          b_38 = ATgetArgument(a_38, 0);
          c_38 = ATgetArgument(a_38, 1);
          x_37 :
          if(match_cons(c_38, sym_TNil_0))
            {
              ATerm k_13 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(z_37), not_null(b_38));
                  PopChoice();
                }
              else
                {
                  t = k_13;
                  t = SSL_addr(not_null(z_37), not_null(b_38));
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
ATerm foldr_3 (ATerm t, ATerm c_67 (ATerm), ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm y_38 (ATerm t)
  {
    ATerm l_38 = NULL,q_38 = NULL,r_38 = NULL;
    l_38 = t;
    k_38 :
    if(match_cons(l_38, sym_Nil_0))
      t = c_67(t);
    else
      {
        if(match_cons(l_38, sym_Cons_2))
          {
            q_38 = ATgetArgument(l_38, 0);
            r_38 = ATgetArgument(l_38, 1);
            {
              ATerm u_38 = NULL;
              t = not_null(q_38);
              {
                ATerm w_38 = NULL;
                t = e_67(t);
                u_38 = t;
                t = not_null(r_38);
                t = y_38(t);
                w_38 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = d_67(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = y_38(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm))
{
  ATerm q_39 = NULL;
  ATerm s_39 = NULL;
  q_39 = t;
  {
    ATerm t_39 = NULL;
    ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
    t = not_null(q_39);
    t_39 = t;
    t = SSL_explode_term(not_null(t_39));
    v_39 = t;
    m_39 :
    if(match_cons(v_39, sym_TCons_2))
      {
        w_39 = ATgetArgument(v_39, 0);
        x_39 = ATgetArgument(v_39, 1);
        n_39 :
        if(match_cons(x_39, sym_TCons_2))
          {
            y_39 = ATgetArgument(x_39, 0);
            z_39 = ATgetArgument(x_39, 1);
            o_39 :
            if(match_cons(z_39, sym_TNil_0))
              {
                if(s_39 != NULL && s_39 != y_39)
                  _fail(y_39);
                else
                  s_39 = y_39;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(s_39);
    t = foldr_3(t, t_68, u_68, v_68);
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = crush_3(t, g_2, add_0, term_size_0);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym_LChoice_2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        ATerm n_40 = NULL;
        t = not_null(j_40);
        {
          ATerm p_40 = NULL;
          t = l_56(t);
          n_40 = t;
          t = not_null(k_40);
          t = m_56(t);
          p_40 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_40), not_null(p_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,g_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Choice_2))
    {
      d_41 = ATgetArgument(c_41, 0);
      g_41 = ATgetArgument(c_41, 1);
      {
        ATerm j_41 = NULL;
        t = not_null(d_41);
        {
          ATerm l_41 = NULL;
          t = j_56(t);
          j_41 = t;
          t = not_null(g_41);
          t = k_56(t);
          l_41 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_41), not_null(l_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym_Cong_2))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      {
        ATerm z_41 = NULL;
        t = not_null(v_41);
        {
          ATerm b_42 = NULL;
          t = g_57(t);
          z_41 = t;
          t = not_null(w_41);
          t = h_57(t);
          b_42 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_41), not_null(b_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Match_1))
    {
      k_42 = ATgetArgument(j_42, 0);
      {
        ATerm m_42 = NULL;
        t = not_null(k_42);
        t = o_57(t);
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym_Seq_2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      {
        ATerm z_42 = NULL;
        t = not_null(v_42);
        {
          ATerm f_43 = NULL;
          t = h_56(t);
          z_42 = t;
          t = not_null(w_42);
          t = i_56(t);
          f_43 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_42), not_null(f_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Scope_2))
    {
      p_43 = ATgetArgument(o_43, 0);
      q_43 = ATgetArgument(o_43, 1);
      {
        ATerm t_43 = NULL;
        t = not_null(p_43);
        {
          ATerm v_43 = NULL;
          t = s_57(t);
          t_43 = t;
          t = not_null(q_43);
          t = t_57(t);
          v_43 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_43), not_null(v_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm f_44 = NULL,g_44 = NULL;
  f_44 = t;
  e_44 :
  if(match_cons(f_44, sym_Build_1))
    {
      g_44 = ATgetArgument(f_44, 0);
      {
        ATerm i_44 = NULL;
        t = not_null(g_44);
        t = p_57(t);
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm p_44 = NULL,q_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_SVar_1))
    {
      q_44 = ATgetArgument(p_44, 0);
      {
        ATerm t_44 = NULL;
        t = not_null(q_44);
        t = n_56(t);
        t_44 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(t_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Call_2))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      {
        ATerm g_45 = NULL;
        t = not_null(c_45);
        {
          ATerm i_45 = NULL;
          t = c_57(t);
          g_45 = t;
          t = not_null(d_45);
          t = d_57(t);
          i_45 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(g_45), not_null(i_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  n_45 :
  if(!(match_cons(o_45, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  p_45 :
  if(!(match_cons(q_45, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm u_45 (ATerm t)
  {
    ATerm l_13 = t;
    if(PushChoice()==0)
      {
        ATerm s_45 = NULL;
        s_45 = t;
        r_45 :
        if(!(match_cons(s_45, sym_Id_0)))
          {
            if(!(match_cons(s_45, sym_Fail_0)))
              _fail(t);
          }
        PopChoice();
      }
    else
      {
        t = l_13;
        {
          ATerm m_13 = t;
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
              t = m_13;
              {
                ATerm n_13 = t;
                if(PushChoice()==0)
                  {
                    t = Build_1(t, _id);
                    PopChoice();
                  }
                else
                  {
                    t = n_13;
                    {
                      ATerm o_13 = t;
                      if(PushChoice()==0)
                        {
                          t = Match_1(t, _id);
                          PopChoice();
                        }
                      else
                        {
                          t = o_13;
                          {
                            ATerm p_13 = t;
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
                                t = p_13;
                                {
                                  ATerm q_13 = t;
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
                                      t = q_13;
                                      {
                                        ATerm r_13 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm k_2 (ATerm t)
                                            {
                                              ATerm t_2 (ATerm t)
                                              {
                                                t = Match_1(t, _id);
                                                return(t);
                                              }
                                              t = Seq_2(t, t_2, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, k_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = r_13;
                                            {
                                              ATerm s_13 = t;
                                              if(PushChoice()==0)
                                                {
                                                  ATerm u_2 (ATerm t)
                                                  {
                                                    ATerm v_2 (ATerm t)
                                                    {
                                                      ATerm w_2 (ATerm t)
                                                      {
                                                        t = Match_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = Seq_2(t, w_2, _id);
                                                      return(t);
                                                    }
                                                    t = Scope_2(t, _id, v_2);
                                                    return(t);
                                                  }
                                                  t = Seq_2(t, u_2, _id);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = s_13;
                                                  {
                                                    ATerm t_13 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        t = Cong_2(t, _id, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = t_13;
                                                        {
                                                          ATerm u_13 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = Choice_2(t, u_45, u_45);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = u_13;
                                                              t = LChoice_2(t, u_45, u_45);
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = u_45(t);
  {
    ATerm v_13;
    v_13 = t;
    {
      ATerm x_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, x_2);
      t = leq_0(t);
    }
    t = v_13;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm v_45 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = g_76(t);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = _one(t, v_45);
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm y_46 = NULL,z_46 = NULL,f_48 = NULL,g_48 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym_SDef_3))
    {
      z_46 = ATgetArgument(y_46, 0);
      f_48 = ATgetArgument(y_46, 1);
      g_48 = ATgetArgument(y_46, 2);
      {
        ATerm k_48 = NULL;
        t = not_null(z_46);
        {
          ATerm m_48 = NULL;
          t = s_56(t);
          k_48 = t;
          t = not_null(f_48);
          {
            ATerm o_48 = NULL;
            t = t_56(t);
            m_48 = t;
            t = not_null(g_48);
            t = u_56(t);
            o_48 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_48), not_null(m_48), not_null(o_48));
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
  ATerm a_49 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm c_49 = NULL;
    ATerm x_13 = t;
    if(PushChoice()==0)
      {
        ATerm b_49 = NULL;
        b_49 = t;
        u_48 :
        if(!(match_string(b_49, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = x_13;
    c_49 = t;
    if(a_49 != NULL && a_49 != c_49)
      _fail(c_49);
    else
      a_49 = c_49;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm y_13;
    y_13 = t;
    {
      ATerm z_13 = t;
      if(PushChoice()==0)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
            d_49 = t;
            x_48 :
            if(match_cons(d_49, sym_Call_2))
              {
                e_49 = ATgetArgument(d_49, 0);
                g_49 = ATgetArgument(d_49, 1);
                y_48 :
                if(match_cons(e_49, sym_SVar_1))
                  {
                    f_49 = ATgetArgument(e_49, 0);
                    z_48 :
                    if(match_cons(g_49, sym_Nil_0))
                      {
                        if(a_49 != NULL && a_49 != f_49)
                          _fail(f_49);
                        else
                          a_49 = f_49;
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
          t = oncetd_1(t, c_3);
          PopChoice();
          _fail(t);
        }
      else
        t = z_13;
    }
    t = y_13;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, b_3);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm m_49 (ATerm t)
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, m_49);
        PopChoice();
      }
    else
      {
        t = a_14;
        {
          ATerm l_49 = NULL;
          l_49 = t;
          k_49 :
          if(match_cons(l_49, sym_Nil_0))
            t = n_72(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = m_49(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  s_49 = t;
  p_49 :
  if(match_cons(s_49, sym_TCons_2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      q_49 :
      if(match_cons(u_49, sym_TCons_2))
        {
          v_49 = ATgetArgument(u_49, 0);
          w_49 = ATgetArgument(u_49, 1);
          r_49 :
          if(match_cons(w_49, sym_TNil_0))
            {
              t = not_null(t_49);
              {
                ATerm d_3 (ATerm t)
                {
                  t = not_null(v_49);
                  return(t);
                }
                t = at_end_1(t, d_3);
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
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  e_50 = t;
  b_50 :
  if(match_cons(e_50, sym_TCons_2))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      c_50 :
      if(match_cons(g_50, sym_TCons_2))
        {
          h_50 = ATgetArgument(g_50, 0);
          i_50 = ATgetArgument(g_50, 1);
          d_50 :
          if(match_cons(i_50, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_50), not_null(h_50));
          else
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
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  s_50 = t;
  n_50 :
  if(match_cons(s_50, sym_TCons_2))
    {
      t_50 = ATgetArgument(s_50, 0);
      w_50 = ATgetArgument(s_50, 1);
      o_50 :
      if(match_cons(t_50, sym_Cons_2))
        {
          u_50 = ATgetArgument(t_50, 0);
          v_50 = ATgetArgument(t_50, 1);
          p_50 :
          if(match_cons(w_50, sym_TCons_2))
            {
              x_50 = ATgetArgument(w_50, 0);
              a_51 = ATgetArgument(w_50, 1);
              q_50 :
              if(match_cons(x_50, sym_Cons_2))
                {
                  y_50 = ATgetArgument(x_50, 0);
                  z_50 = ATgetArgument(x_50, 1);
                  r_50 :
                  if(match_cons(a_51, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(u_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(v_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  m_51 = t;
  h_51 :
  if(match_cons(m_51, sym_TCons_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      i_51 :
      if(match_cons(n_51, sym_Nil_0))
        {
          j_51 :
          if(match_cons(o_51, sym_TCons_2))
            {
              p_51 = ATgetArgument(o_51, 0);
              q_51 = ATgetArgument(o_51, 1);
              k_51 :
              if(match_cons(p_51, sym_Nil_0))
                {
                  l_51 :
                  if(match_cons(q_51, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm u_51 (ATerm t)
  {
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        t = k_70(t);
        PopChoice();
      }
    else
      {
        t = c_14;
        t = l_70(t);
        {
          ATerm e_3 (ATerm t)
          {
            ATerm f_3 (ATerm t)
            {
              ATerm t_51 = NULL;
              t_51 = t;
              s_51 :
              if(!(match_cons(t_51, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, u_51, f_3);
            return(t);
          }
          t = TCons_2(t, n_70, e_3);
          t = m_70(t);
        }
      }
    return(t);
  }
  t = u_51(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_70 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_70);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_Cong_2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      {
        ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,v_53 = NULL;
        ATerm x_52 = NULL;
        t = not_null(p_52);
        {
          ATerm a_53 = NULL;
          t = map_1(t, new_0);
          x_52 = t;
          if(u_52 != NULL && u_52 != x_52)
            _fail(x_52);
          else
            u_52 = x_52;
          t = not_null(u_52);
          {
            ATerm b_53 = NULL;
            ATerm h_3 (ATerm t)
            {
              ATerm y_52 = NULL;
              y_52 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_52));
              return(t);
            }
            t = map_1(t, h_3);
            a_53 = t;
            if(s_52 != NULL && s_52 != a_53)
              _fail(a_53);
            else
              s_52 = a_53;
            t = not_null(p_52);
            {
              ATerm e_53 = NULL;
              t = map_1(t, new_0);
              b_53 = t;
              if(v_52 != NULL && v_52 != b_53)
                _fail(b_53);
              else
                v_52 = b_53;
              t = not_null(v_52);
              {
                ATerm f_53 = NULL;
                ATerm j_3 (ATerm t)
                {
                  ATerm c_53 = NULL;
                  c_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_53));
                  return(t);
                }
                t = map_1(t, j_3);
                e_53 = t;
                if(t_52 != NULL && t_52 != e_53)
                  _fail(e_53);
                else
                  t_52 = e_53;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm u_53 = NULL;
                  t = zip_1(t, _id);
                  f_53 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_53), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm k_3 (ATerm t)
                    {
                      ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
                      i_53 = t;
                      e_52 :
                      if(match_cons(i_53, sym_TCons_2))
                        {
                          j_53 = ATgetArgument(i_53, 0);
                          o_53 = ATgetArgument(i_53, 1);
                          f_52 :
                          if(match_cons(j_53, sym_TCons_2))
                            {
                              k_53 = ATgetArgument(j_53, 0);
                              l_53 = ATgetArgument(j_53, 1);
                              g_52 :
                              if(match_cons(l_53, sym_TCons_2))
                                {
                                  m_53 = ATgetArgument(l_53, 0);
                                  n_53 = ATgetArgument(l_53, 1);
                                  h_52 :
                                  if(match_cons(n_53, sym_TNil_0))
                                    {
                                      i_52 :
                                      if(match_cons(o_53, sym_TCons_2))
                                        {
                                          p_53 = ATgetArgument(o_53, 0);
                                          q_53 = ATgetArgument(o_53, 1);
                                          j_52 :
                                          if(match_cons(q_53, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_53))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_53)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, k_3);
                    u_53 = t;
                    if(w_52 != NULL && w_52 != u_53)
                      _fail(u_53);
                    else
                      w_52 = u_53;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_52), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        v_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_52), not_null(s_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_52)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_52), not_null(t_52))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym_Cong_2))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      {
        ATerm t_54 = NULL;
        ATerm x_54 = NULL;
        t = not_null(q_54);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm u_54 = NULL,v_54 = NULL;
            v_54 = t;
            l_54 :
            if(match_cons(v_54, sym_Match_1))
              {
                u_54 = ATgetArgument(v_54, 0);
                t = not_null(u_54);
              }
            else
              {
                if(match_cons(v_54, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_3);
          x_54 = t;
          if(t_54 != NULL && t_54 != x_54)
            _fail(x_54);
          else
            t_54 = x_54;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_54), not_null(t_54)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  d_55 :
  if(match_cons(f_55, sym_Scope_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      e_55 :
      if(match_cons(g_55, sym_Nil_0))
        t = not_null(h_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  c_56 = t;
  r_55 :
  if(match_cons(c_56, sym_Choice_2))
    {
      d_56 = ATgetArgument(c_56, 0);
      b_56 = ATgetArgument(c_56, 1);
      if(d_56 != NULL && d_56 != b_56)
        _fail(b_56);
      else
        d_56 = b_56;
      t = not_null(d_56);
    }
  else
    {
      if(match_cons(c_56, sym_LChoice_2))
        {
          d_56 = ATgetArgument(c_56, 0);
          b_56 = ATgetArgument(c_56, 1);
          if(d_56 != NULL && d_56 != b_56)
            _fail(b_56);
          else
            d_56 = b_56;
          t = not_null(d_56);
        }
      else
        {
          if(match_cons(c_56, sym_Where_1))
            {
              d_56 = ATgetArgument(c_56, 0);
              s_55 :
              if(match_cons(d_56, sym_Where_1))
                {
                  e_56 = ATgetArgument(d_56, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(e_56));
                }
              else
                {
                  if(match_cons(d_56, sym_Seq_2))
                    {
                      e_56 = ATgetArgument(d_56, 0);
                      g_56 = ATgetArgument(d_56, 1);
                      t_55 :
                      if(match_cons(e_56, sym_Where_1))
                        {
                          f_56 = ATgetArgument(e_56, 0);
                          u_55 :
                          if(match_cons(g_56, sym_Seq_2))
                            {
                              v_56 = ATgetArgument(g_56, 0);
                              x_56 = ATgetArgument(g_56, 1);
                              v_55 :
                              if(match_cons(v_56, sym_Build_1))
                                {
                                  w_56 = ATgetArgument(v_56, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_56)), not_null(x_56))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(c_56, sym_Not_1))
                {
                  d_56 = ATgetArgument(c_56, 0);
                  x_55 :
                  if(match_cons(d_56, sym_Not_1))
                    {
                      e_56 = ATgetArgument(d_56, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_56));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(c_56, sym_Test_1))
                    {
                      d_56 = ATgetArgument(c_56, 0);
                      a_56 :
                      if(match_cons(d_56, sym_Test_1))
                        {
                          e_56 = ATgetArgument(d_56, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(e_56));
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
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  g_58 = t;
  z_57 :
  if(match_cons(g_58, sym_Choice_2))
    {
      h_58 = ATgetArgument(g_58, 0);
      k_58 = ATgetArgument(g_58, 1);
      a_58 :
      if(match_cons(h_58, sym_Choice_2))
        {
          i_58 = ATgetArgument(h_58, 0);
          j_58 = ATgetArgument(h_58, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_58), not_null(k_58)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(g_58, sym_Seq_2))
        {
          h_58 = ATgetArgument(g_58, 0);
          k_58 = ATgetArgument(g_58, 1);
          d_58 :
          if(match_cons(h_58, sym_Seq_2))
            {
              i_58 = ATgetArgument(h_58, 0);
              j_58 = ATgetArgument(h_58, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_58), not_null(k_58)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(g_58, sym_LChoice_2))
            {
              h_58 = ATgetArgument(g_58, 0);
              k_58 = ATgetArgument(g_58, 1);
              e_58 :
              if(match_cons(h_58, sym_LChoice_2))
                {
                  i_58 = ATgetArgument(h_58, 0);
                  j_58 = ATgetArgument(h_58, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_58), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_58), not_null(k_58)));
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
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  v_59 = t;
  p_59 :
  if(match_cons(v_59, sym_Seqs_1))
    {
      w_59 = ATgetArgument(v_59, 0);
      q_59 :
      if(match_cons(w_59, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(w_59, sym_Cons_2))
            {
              t_59 = ATgetArgument(w_59, 0);
              u_59 = ATgetArgument(w_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_59), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_59)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(v_59, sym_Choices_1))
        {
          w_59 = ATgetArgument(v_59, 0);
          r_59 :
          if(match_cons(w_59, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(w_59, sym_Cons_2))
                {
                  t_59 = ATgetArgument(w_59, 0);
                  u_59 = ATgetArgument(w_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_59), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_59)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(v_59, sym_LChoices_1))
            {
              w_59 = ATgetArgument(v_59, 0);
              s_59 :
              if(match_cons(w_59, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(w_59, sym_Cons_2))
                    {
                      t_59 = ATgetArgument(w_59, 0);
                      u_59 = ATgetArgument(w_59, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_59), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_59)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(v_59, sym_Lets_2))
                {
                  w_59 = ATgetArgument(v_59, 0);
                  x_59 = ATgetArgument(v_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_59), not_null(x_59));
                }
              else
                {
                  if(match_cons(v_59, sym_BA_2))
                    {
                      w_59 = ATgetArgument(v_59, 0);
                      x_59 = ATgetArgument(v_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_59)), not_null(w_59));
                    }
                  else
                    {
                      if(match_cons(v_59, sym_MA_2))
                        {
                          w_59 = ATgetArgument(v_59, 0);
                          x_59 = ATgetArgument(v_59, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_59)), not_null(x_59));
                        }
                      else
                        {
                          if(match_cons(v_59, sym_AM_2))
                            {
                              w_59 = ATgetArgument(v_59, 0);
                              x_59 = ATgetArgument(v_59, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_59)));
                            }
                          else
                            {
                              if(match_cons(v_59, sym_BAM_3))
                                {
                                  w_59 = ATgetArgument(v_59, 0);
                                  x_59 = ATgetArgument(v_59, 1);
                                  y_59 = ATgetArgument(v_59, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_59)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_59)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(v_59, sym_InfixApp_3))
                                    {
                                      w_59 = ATgetArgument(v_59, 0);
                                      x_59 = ATgetArgument(v_59, 1);
                                      y_59 = ATgetArgument(v_59, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_59), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm x_61 = NULL,y_61 = NULL;
  x_61 = t;
  v_61 :
  if(match_cons(x_61, sym_Where_1))
    {
      y_61 = ATgetArgument(x_61, 0);
      w_61 :
      if(match_cons(y_61, sym_Fail_0))
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
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
  h_62 = t;
  f_62 :
  if(match_cons(h_62, sym_LChoice_2))
    {
      i_62 = ATgetArgument(h_62, 0);
      j_62 = ATgetArgument(h_62, 1);
      g_62 :
      if(match_cons(j_62, sym_Fail_0))
        t = not_null(i_62);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm p_62 = NULL,w_62 = NULL,x_62 = NULL;
  p_62 = t;
  n_62 :
  if(match_cons(p_62, sym_LChoice_2))
    {
      w_62 = ATgetArgument(p_62, 0);
      x_62 = ATgetArgument(p_62, 1);
      o_62 :
      if(match_cons(w_62, sym_Fail_0))
        t = not_null(x_62);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
  d_63 = t;
  b_63 :
  if(match_cons(d_63, sym_Choice_2))
    {
      e_63 = ATgetArgument(d_63, 0);
      f_63 = ATgetArgument(d_63, 1);
      c_63 :
      if(match_cons(f_63, sym_Fail_0))
        t = not_null(e_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  j_63 :
  if(match_cons(l_63, sym_Choice_2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      k_63 :
      if(match_cons(m_63, sym_Fail_0))
        t = not_null(n_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym_Cong_2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      t = not_null(v_63);
      {
        ATerm m_3 (ATerm t)
        {
          ATerm y_63 = NULL;
          y_63 = t;
          r_63 :
          if(!(match_cons(y_63, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, m_3);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  h_64 = t;
  f_64 :
  if(match_cons(h_64, sym_Path_2))
    {
      i_64 = ATgetArgument(h_64, 0);
      j_64 = ATgetArgument(h_64, 1);
      g_64 :
      if(match_cons(j_64, sym_Fail_0))
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
  ATerm p_64 = NULL,q_64 = NULL;
  p_64 = t;
  n_64 :
  if(match_cons(p_64, sym_One_1))
    {
      q_64 = ATgetArgument(p_64, 0);
      o_64 :
      if(match_cons(q_64, sym_Fail_0))
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
  ATerm w_64 = NULL,x_64 = NULL;
  w_64 = t;
  t_64 :
  if(match_cons(w_64, sym_Some_1))
    {
      x_64 = ATgetArgument(w_64, 0);
      u_64 :
      if(match_cons(x_64, sym_Fail_0))
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
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  c_65 :
  if(match_cons(e_65, sym_Rec_2))
    {
      f_65 = ATgetArgument(e_65, 0);
      g_65 = ATgetArgument(e_65, 1);
      d_65 :
      if(match_cons(g_65, sym_Fail_0))
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
  ATerm m_65 = NULL,o_65 = NULL,p_65 = NULL;
  m_65 = t;
  k_65 :
  if(match_cons(m_65, sym_Scope_2))
    {
      o_65 = ATgetArgument(m_65, 0);
      p_65 = ATgetArgument(m_65, 1);
      l_65 :
      if(match_cons(p_65, sym_Fail_0))
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
  ATerm x_65 = NULL,y_65 = NULL,g_66 = NULL;
  x_65 = t;
  v_65 :
  if(match_cons(x_65, sym_Seq_2))
    {
      y_65 = ATgetArgument(x_65, 0);
      g_66 = ATgetArgument(x_65, 1);
      w_65 :
      if(match_cons(y_65, sym_Fail_0))
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
  ATerm m_66 = NULL,n_66 = NULL;
  m_66 = t;
  k_66 :
  if(match_cons(m_66, sym_Not_1))
    {
      n_66 = ATgetArgument(m_66, 0);
      l_66 :
      if(match_cons(n_66, sym_Fail_0))
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
  ATerm s_66 = NULL,t_66 = NULL;
  s_66 = t;
  q_66 :
  if(match_cons(s_66, sym_Test_1))
    {
      t_66 = ATgetArgument(s_66, 0);
      r_66 :
      if(match_cons(t_66, sym_Fail_0))
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
  ATerm d_14 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = d_14;
      {
        ATerm e_14 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = e_14;
            {
              ATerm f_14 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = f_14;
                  {
                    ATerm g_14 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = g_14;
                        {
                          ATerm h_14 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = h_14;
                              {
                                ATerm i_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_14;
                                    {
                                      ATerm j_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = j_14;
                                          {
                                            ATerm k_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = k_14;
                                                {
                                                  ATerm v_14 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      {
                                                        ATerm x_14 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = x_14;
                                                            {
                                                              ATerm z_14 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_14;
                                                                  {
                                                                    ATerm d_15 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_15;
                                                                        {
                                                                          ATerm j_15 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_15;
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
  ATerm y_66 = NULL,z_66 = NULL;
  y_66 = t;
  w_66 :
  if(match_cons(y_66, sym_Match_1))
    {
      z_66 = ATgetArgument(y_66, 0);
      x_66 :
      if(match_cons(z_66, sym_Wld_0))
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
  ATerm i_67 = NULL,j_67 = NULL;
  i_67 = t;
  g_67 :
  if(match_cons(i_67, sym_Where_1))
    {
      j_67 = ATgetArgument(i_67, 0);
      h_67 :
      if(match_cons(j_67, sym_Id_0))
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
  ATerm o_67 = NULL,p_67 = NULL;
  o_67 = t;
  m_67 :
  if(match_cons(o_67, sym_All_1))
    {
      p_67 = ATgetArgument(o_67, 0);
      n_67 :
      if(match_cons(p_67, sym_Id_0))
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
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  u_67 = t;
  s_67 :
  if(match_cons(u_67, sym_Rec_2))
    {
      v_67 = ATgetArgument(u_67, 0);
      w_67 = ATgetArgument(u_67, 1);
      t_67 :
      if(match_cons(w_67, sym_Id_0))
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
  ATerm c_68 = NULL,d_68 = NULL,f_68 = NULL;
  c_68 = t;
  a_68 :
  if(match_cons(c_68, sym_Scope_2))
    {
      d_68 = ATgetArgument(c_68, 0);
      f_68 = ATgetArgument(c_68, 1);
      b_68 :
      if(match_cons(f_68, sym_Id_0))
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
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
  o_68 = t;
  k_68 :
  if(match_cons(o_68, sym_LChoice_2))
    {
      p_68 = ATgetArgument(o_68, 0);
      q_68 = ATgetArgument(o_68, 1);
      l_68 :
      if(match_cons(p_68, sym_Id_0))
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
  ATerm z_68 = NULL,a_69 = NULL,c_69 = NULL;
  z_68 = t;
  x_68 :
  if(match_cons(z_68, sym_Seq_2))
    {
      a_69 = ATgetArgument(z_68, 0);
      c_69 = ATgetArgument(z_68, 1);
      y_68 :
      if(match_cons(c_69, sym_Id_0))
        t = not_null(a_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  i_69 = t;
  g_69 :
  if(match_cons(i_69, sym_Seq_2))
    {
      j_69 = ATgetArgument(i_69, 0);
      k_69 = ATgetArgument(i_69, 1);
      h_69 :
      if(match_cons(j_69, sym_Id_0))
        t = not_null(k_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  q_69 = t;
  o_69 :
  if(match_cons(q_69, sym_Not_1))
    {
      r_69 = ATgetArgument(q_69, 0);
      p_69 :
      if(match_cons(r_69, sym_Id_0))
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
  ATerm w_69 = NULL,x_69 = NULL;
  w_69 = t;
  u_69 :
  if(match_cons(w_69, sym_Test_1))
    {
      x_69 = ATgetArgument(w_69, 0);
      v_69 :
      if(match_cons(x_69, sym_Id_0))
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
  ATerm s_15 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = s_15;
      {
        ATerm t_15 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = t_15;
            {
              ATerm v_15 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = v_15;
                  {
                    ATerm w_15 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm y_15 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = y_15;
                              {
                                ATerm c_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = c_16;
                                    {
                                      ATerm d_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = d_16;
                                          {
                                            ATerm e_16 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = e_16;
                                                {
                                                  ATerm n_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_16;
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
  ATerm o_16 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = o_16;
      {
        ATerm p_16 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = p_16;
            {
              ATerm q_16 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_16;
                  {
                    ATerm r_16 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_16;
                        {
                          ATerm s_16 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_16;
                              {
                                ATerm t_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_16;
                                    {
                                      ATerm u_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_16;
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
ATerm repeat_2 (ATerm t, ATerm z_61 (ATerm), ATerm a_62 (ATerm))
{
  ATerm z_69 (ATerm t)
  {
    ATerm v_16 = t;
    if(PushChoice()==0)
      {
        t = z_61(t);
        t = z_69(t);
        PopChoice();
      }
    else
      {
        t = v_16;
        t = a_62(t);
      }
    return(t);
  }
  t = z_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_62 (ATerm))
{
  t = repeat_2(t, c_62, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm a_70 (ATerm t)
  {
    t = u_74(t);
    t = _all(t, a_70);
    t = u_74(t);
    return(t);
  }
  t = a_70(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, r_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm z_16 = t;
      if(PushChoice()==0)
        {
          t = inlineable_0(t);
          t = AddSDef_0(t);
          PopChoice();
        }
      else
        t = z_16;
    }
    return(t);
  }
  t = map_1(t, s_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm e_70 = NULL,f_70 = NULL;
  e_70 = t;
  d_70 :
  if(match_cons(e_70, sym_Strategies_1))
    {
      f_70 = ATgetArgument(e_70, 0);
      {
        ATerm h_70 = NULL;
        t = not_null(f_70);
        t = w_55(t);
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_70));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm u_70 = NULL,v_70 = NULL;
  u_70 = t;
  t_70 :
  if(match_cons(u_70, sym_Specification_1))
    {
      v_70 = ATgetArgument(u_70, 0);
      {
        ATerm x_70 = NULL;
        t = not_null(v_70);
        t = y_55(t);
        x_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(x_70));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm u_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        ATerm c_71 = NULL;
        c_71 = t;
        b_71 :
        if(!(match_cons(c_71, sym_Nil_0)))
          _fail(t);
        return(t);
      }
      t = Cons_2(t, z_3, m_4);
      return(t);
    }
    t = Cons_2(t, _id, u_3);
    return(t);
  }
  t = Specification_1(t, t_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm e_71 = NULL;
  e_71 = t;
  d_71 :
  if(!(match_cons(e_71, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym_TCons_2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      {
        ATerm o_71 = NULL;
        t = not_null(k_71);
        {
          ATerm q_71 = NULL;
          t = x_57(t);
          o_71 = t;
          t = not_null(l_71);
          t = y_57(t);
          q_71 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_71), not_null(q_71));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_71 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm a_72 = NULL,b_72 = NULL;
      a_72 = t;
      w_71 :
      if(match_cons(a_72, sym_Program_1))
        {
          b_72 = ATgetArgument(a_72, 0);
          if(x_71 != NULL && x_71 != b_72)
            _fail(b_72);
          else
            x_71 = b_72;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, n_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = b_17;
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
  ATerm e_72 = NULL;
  e_72 = t;
  t = SSL_exit(not_null(e_72));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  p_72 = t;
  k_72 :
  if(match_cons(p_72, sym_TCons_2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      l_72 :
      if(match_cons(r_72, sym_TCons_2))
        {
          s_72 = ATgetArgument(r_72, 0);
          t_72 = ATgetArgument(r_72, 1);
          m_72 :
          if(match_cons(t_72, sym_TNil_0))
            {
              ATerm c_17;
              c_17 = t;
              t = SSL_printnl(not_null(q_72), not_null(s_72));
              t = c_17;
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
ATerm try_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm d_17 = t;
  if(PushChoice()==0)
    {
      t = f_74(t);
      PopChoice();
    }
  else
    t = d_17;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  ATerm e_17 = t;
  if(PushChoice()==0)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm f_17 = t;
        if(PushChoice()==0)
          {
            ATerm x_4 (ATerm t)
            {
              ATerm h_73 = NULL;
              h_73 = t;
              x_72 :
              if(!(match_cons(h_73, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, x_4);
            PopChoice();
            _fail(t);
          }
        else
          t = f_17;
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        ATerm y_4 (ATerm t)
        {
          ATerm i_73 = NULL;
          i_73 = t;
          y_72 :
          if(!(match_cons(i_73, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, y_4);
        return(t);
      }
      t = TCons_2(t, o_4, w_4);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm j_73 = NULL,k_73 = NULL;
            j_73 = t;
            a_73 :
            if(match_cons(j_73, sym_Runtime_1))
              {
                k_73 = ATgetArgument(j_73, 0);
                if(g_73 != NULL && g_73 != k_73)
                  _fail(k_73);
                else
                  g_73 = k_73;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, b_5);
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm l_73 = NULL;
            l_73 = t;
            b_73 :
            if(!(match_cons(l_73, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, c_5);
          return(t);
        }
        t = TCons_2(t, z_4, a_5);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm j_5 (ATerm t)
            {
              ATerm m_73 = NULL,p_73 = NULL;
              m_73 = t;
              d_73 :
              if(match_cons(m_73, sym_Program_1))
                {
                  p_73 = ATgetArgument(m_73, 0);
                  if(f_73 != NULL && f_73 != p_73)
                    _fail(p_73);
                  else
                    f_73 = p_73;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, j_5);
            return(t);
          }
          ATerm i_5 (ATerm t)
          {
            ATerm l_5 (ATerm t)
            {
              ATerm q_73 = NULL;
              q_73 = t;
              e_73 :
              if(!(match_cons(q_73, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, l_5);
            return(t);
          }
          t = TCons_2(t, d_5, i_5);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_73), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_73), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = e_17;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  x_73 = t;
  u_73 :
  if(match_cons(x_73, sym_TCons_2))
    {
      y_73 = ATgetArgument(x_73, 0);
      z_73 = ATgetArgument(x_73, 1);
      v_73 :
      if(match_cons(z_73, sym_TCons_2))
        {
          a_74 = ATgetArgument(z_73, 0);
          b_74 = ATgetArgument(z_73, 1);
          w_73 :
          if(match_cons(b_74, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(y_73), not_null(a_74));
          else
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
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
  k_74 = t;
  h_74 :
  if(match_cons(k_74, sym_TCons_2))
    {
      l_74 = ATgetArgument(k_74, 0);
      m_74 = ATgetArgument(k_74, 1);
      i_74 :
      if(match_cons(m_74, sym_TCons_2))
        {
          n_74 = ATgetArgument(m_74, 0);
          o_74 = ATgetArgument(m_74, 1);
          j_74 :
          if(match_cons(o_74, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(l_74), not_null(n_74));
          else
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
  ATerm e_75 = NULL;
  ATerm g_17;
  g_17 = t;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm r_17 = t;
      if(PushChoice()==0)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm f_75 = NULL,g_75 = NULL;
            f_75 = t;
            x_74 :
            if(match_cons(f_75, sym_Output_1))
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
          t = fetch_1(t, p_5);
          PopChoice();
        }
      else
        {
          t = r_17;
          {
            ATerm h_75 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            h_75 = t;
            if(e_75 != NULL && e_75 != h_75)
              _fail(h_75);
            else
              e_75 = h_75;
          }
        }
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm i_75 = NULL;
        i_75 = t;
        z_74 :
        if(!(match_cons(i_75, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, q_5);
      return(t);
    }
    t = TCons_2(t, n_5, o_5);
  }
  t = g_17;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = not_null(e_75);
          return(t);
        }
        t = split_2(t, y_5, _id);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        ATerm j_75 = NULL;
        j_75 = t;
        a_75 :
        if(!(match_cons(j_75, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, s_5, t_5);
      return(t);
    }
    t = TCons_2(t, _id, r_5);
    {
      ATerm t_17 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm d_6 (ATerm t)
            {
              ATerm k_75 = NULL;
              k_75 = t;
              b_75 :
              if(!(match_cons(k_75, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, d_6);
            return(t);
          }
          ATerm b_6 (ATerm t)
          {
            ATerm e_6 (ATerm t)
            {
              ATerm l_75 = NULL;
              l_75 = t;
              c_75 :
              if(!(match_cons(l_75, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, e_6);
            return(t);
          }
          t = TCons_2(t, z_5, b_6);
          PopChoice();
        }
      else
        {
          t = t_17;
          {
            ATerm f_6 (ATerm t)
            {
              ATerm g_6 (ATerm t)
              {
                ATerm m_75 = NULL;
                m_75 = t;
                d_75 :
                if(!(match_cons(m_75, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, g_6);
              return(t);
            }
            t = TCons_2(t, _id, f_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm u_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  ATerm u_17;
  u_17 = t;
  t = dtime_0(t);
  t = u_17;
  t = f_61(t);
  {
    ATerm v_17;
    v_17 = t;
    {
      ATerm v_75 = NULL;
      t = dtime_0(t);
      v_75 = t;
      if(u_75 != NULL && u_75 != v_75)
        _fail(v_75);
      else
        u_75 = v_75;
    }
    t = v_17;
    w_75 = t;
    r_75 :
    if(match_cons(w_75, sym_TCons_2))
      {
        x_75 = ATgetArgument(w_75, 0);
        y_75 = ATgetArgument(w_75, 1);
        s_75 :
        if(match_cons(y_75, sym_TCons_2))
          {
            z_75 = ATgetArgument(y_75, 0);
            a_76 = ATgetArgument(y_75, 1);
            t_75 :
            if(match_cons(a_76, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(u_75)), not_null(x_75)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_75), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm i_76 = NULL;
  i_76 = t;
  t = SSL_ReadFromFile(not_null(i_76));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm o_76 = NULL;
  ATerm q_76 = NULL;
  o_76 = t;
  {
    ATerm s_76 = NULL;
    t = n_73(t);
    q_76 = t;
    t = not_null(o_76);
    t = o_73(t);
    s_76 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_76), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_77 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm z_17 = t;
    if(PushChoice()==0)
      {
        ATerm h_6 (ATerm t)
        {
          ATerm b_77 = NULL,c_77 = NULL;
          b_77 = t;
          y_76 :
          if(match_cons(b_77, sym_Input_1))
            {
              c_77 = ATgetArgument(b_77, 0);
              if(a_77 != NULL && a_77 != c_77)
                _fail(c_77);
              else
                a_77 = c_77;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, h_6);
        PopChoice();
      }
    else
      {
        t = z_17;
        {
          ATerm d_77 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          d_77 = t;
          if(a_77 != NULL && a_77 != d_77)
            _fail(d_77);
          else
            a_77 = d_77;
        }
      }
  }
  t = x_17;
  {
    ATerm m_6 (ATerm t)
    {
      t = not_null(a_77);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_77 = NULL;
  h_77 = t;
  g_77 :
  if(!(match_cons(h_77, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm l_77 = NULL,m_77 = NULL;
  l_77 = t;
  k_77 :
  if(match_cons(l_77, sym_Undefined_1))
    {
      m_77 = ATgetArgument(l_77, 0);
      {
        ATerm o_77 = NULL;
        t = not_null(m_77);
        t = g_53(t);
        o_77 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_77));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  s_77 :
  if(!(match_cons(t_77, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm u_77 (ATerm t)
  {
    ATerm a_18 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_72, _id);
        PopChoice();
      }
    else
      {
        t = a_18;
        t = Cons_2(t, _id, u_77);
      }
    return(t);
  }
  t = u_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_60 (ATerm))
{
  t = fetch_1(t, j_60);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm b_18 = t;
    if(PushChoice()==0)
      {
        ATerm x_77 = NULL;
        x_77 = t;
        v_77 :
        if(!(match_cons(x_77, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = b_18;
        {
          ATerm c_18 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = c_18;
              {
                ATerm y_77 = NULL;
                y_77 = t;
                w_77 :
                if(!(match_cons(y_77, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, n_6);
  t = e_61(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm h_78 = NULL,i_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
    h_78 = t;
    a_78 :
    if(match_cons(h_78, sym_TCons_2))
      {
        i_78 = ATgetArgument(h_78, 0);
        r_78 = ATgetArgument(h_78, 1);
        b_78 :
        if(match_cons(r_78, sym_TCons_2))
          {
            s_78 = ATgetArgument(r_78, 0);
            t_78 = ATgetArgument(r_78, 1);
            c_78 :
            if(match_cons(t_78, sym_TCons_2))
              {
                u_78 = ATgetArgument(t_78, 0);
                v_78 = ATgetArgument(t_78, 1);
                d_78 :
                if(match_cons(v_78, sym_TNil_0))
                  {
                    if(e_78 != NULL && e_78 != i_78)
                      _fail(i_78);
                    else
                      e_78 = i_78;
                    if(f_78 != NULL && f_78 != s_78)
                      _fail(s_78);
                    else
                      f_78 = s_78;
                    if(g_78 != NULL && g_78 != u_78)
                      _fail(u_78);
                    else
                      g_78 = u_78;
                    t = SSL_table_put(not_null(e_78), not_null(f_78), not_null(g_78));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = d_18;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_78 = NULL;
  y_78 = t;
  t = SSL_table_create(not_null(y_78));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_79 = NULL;
  c_79 = t;
  {
    ATerm e_18;
    e_18 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_79), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = e_18;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm i_79 = NULL,m_79 = NULL,n_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym_Cons_2))
    {
      m_79 = ATgetArgument(i_79, 0);
      n_79 = ATgetArgument(i_79, 1);
      {
        ATerm q_79 = NULL;
        t = not_null(m_79);
        t = c_60(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = d_60(t);
        q_79 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_79), not_null(n_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm))
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  y_79 = t;
  w_79 :
  if(match_cons(y_79, sym_Cons_2))
    {
      z_79 = ATgetArgument(y_79, 0);
      a_80 = ATgetArgument(y_79, 1);
      x_79 :
      if(match_cons(a_80, sym_Cons_2))
        {
          b_80 = ATgetArgument(a_80, 0);
          c_80 = ATgetArgument(a_80, 1);
          {
            ATerm g_80 = NULL;
            t = not_null(z_79);
            t = e_60(t);
            t = not_null(b_80);
            t = f_60(t);
            g_80 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_80), not_null(c_80));
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
  ATerm f_18 = t;
  if(PushChoice()==0)
    {
      ATerm o_6 (ATerm t)
      {
        ATerm f_81 = NULL;
        f_81 = t;
        k_80 :
        if(!(match_string(f_81, "-S")))
          _fail(t);
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, o_6, p_6);
      PopChoice();
    }
  else
    {
      t = f_18;
      {
        ATerm g_18 = t;
        if(PushChoice()==0)
          {
            ATerm q_6 (ATerm t)
            {
              ATerm g_81 = NULL;
              g_81 = t;
              l_80 :
              if(!(match_string(g_81, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, q_6, x_6);
            PopChoice();
          }
        else
          {
            t = g_18;
            {
              ATerm h_18 = t;
              if(PushChoice()==0)
                {
                  ATerm y_6 (ATerm t)
                  {
                    ATerm h_81 = NULL;
                    h_81 = t;
                    m_80 :
                    if(!(match_string(h_81, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm z_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, y_6, z_6);
                  PopChoice();
                }
              else
                {
                  t = h_18;
                  {
                    ATerm i_18 = t;
                    if(PushChoice()==0)
                      {
                        ATerm d_7 (ATerm t)
                        {
                          ATerm i_81 = NULL;
                          i_81 = t;
                          n_80 :
                          if(!(match_string(i_81, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, d_7, e_7);
                        PopChoice();
                      }
                    else
                      {
                        t = i_18;
                        {
                          ATerm r_18 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_7 (ATerm t)
                              {
                                ATerm j_81 = NULL;
                                j_81 = t;
                                o_80 :
                                if(!(match_string(j_81, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm g_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, f_7, g_7);
                              PopChoice();
                            }
                          else
                            {
                              t = r_18;
                              {
                                ATerm s_18 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_7 (ATerm t)
                                    {
                                      ATerm k_81 = NULL;
                                      k_81 = t;
                                      p_80 :
                                      if(!(match_string(k_81, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm n_7 (ATerm t)
                                    {
                                      ATerm l_81 = NULL;
                                      l_81 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_81));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, h_7, n_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_18;
                                    {
                                      ATerm z_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm o_7 (ATerm t)
                                          {
                                            ATerm n_81 = NULL;
                                            n_81 = t;
                                            r_80 :
                                            if(!(match_string(n_81, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_7 (ATerm t)
                                          {
                                            ATerm o_81 = NULL;
                                            o_81 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_81));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, o_7, t_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = z_18;
                                          {
                                            ATerm c_19 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_7 (ATerm t)
                                                {
                                                  ATerm q_81 = NULL;
                                                  q_81 = t;
                                                  t_80 :
                                                  if(!(match_string(q_81, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm v_7 (ATerm t)
                                                {
                                                  ATerm r_81 = NULL;
                                                  r_81 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_81));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, u_7, v_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = c_19;
                                                {
                                                  ATerm d_19 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm w_7 (ATerm t)
                                                      {
                                                        ATerm t_81 = NULL;
                                                        t_81 = t;
                                                        v_80 :
                                                        if(!(match_string(t_81, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm x_7 (ATerm t)
                                                      {
                                                        ATerm u_81 = NULL;
                                                        u_81 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_81));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, w_7, x_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = d_19;
                                                      {
                                                        ATerm e_19 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm y_7 (ATerm t)
                                                            {
                                                              ATerm w_81 = NULL;
                                                              w_81 = t;
                                                              x_80 :
                                                              if(!(match_string(w_81, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm z_7 (ATerm t)
                                                            {
                                                              ATerm x_81 = NULL;
                                                              x_81 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_81));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, y_7, z_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = e_19;
                                                            {
                                                              ATerm f_19 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm d_8 (ATerm t)
                                                                  {
                                                                    ATerm z_81 = NULL;
                                                                    z_81 = t;
                                                                    a_81 :
                                                                    if(!(match_string(z_81, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm f_8 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, d_8, f_8);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = f_19;
                                                                  {
                                                                    ATerm g_19 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm g_8 (ATerm t)
                                                                        {
                                                                          ATerm a_82 = NULL;
                                                                          a_82 = t;
                                                                          b_81 :
                                                                          if(!(match_string(a_82, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm h_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, g_8, h_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_19;
                                                                        {
                                                                          ATerm h_19 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm i_8 (ATerm t)
                                                                              {
                                                                                ATerm b_82 = NULL;
                                                                                b_82 = t;
                                                                                c_81 :
                                                                                if(!(match_string(b_82, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm m_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, i_8, m_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_19;
                                                                              {
                                                                                ATerm i_19 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm n_8 (ATerm t)
                                                                                    {
                                                                                      ATerm c_82 = NULL;
                                                                                      c_82 = t;
                                                                                      d_81 :
                                                                                      if(!(match_string(c_82, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, n_8, o_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_19;
                                                                                    {
                                                                                      ATerm s_8 (ATerm t)
                                                                                      {
                                                                                        ATerm d_82 = NULL;
                                                                                        d_82 = t;
                                                                                        e_81 :
                                                                                        if(!(match_string(d_82, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm t_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, s_8, t_8);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  k_82 :
  if(match_cons(l_82, sym_Cons_2))
    {
      m_82 = ATgetArgument(l_82, 0);
      n_82 = ATgetArgument(l_82, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_82)), not_null(n_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  v_82 = t;
  u_82 :
  if(match_cons(v_82, sym_Cons_2))
    {
      w_82 = ATgetArgument(v_82, 0);
      x_82 = ATgetArgument(v_82, 1);
      {
        ATerm a_83 = NULL;
        t = not_null(w_82);
        {
          ATerm c_83 = NULL;
          t = b_58(t);
          a_83 = t;
          t = not_null(x_82);
          t = c_58(t);
          c_83 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_83), not_null(c_83));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_83 = NULL;
  i_83 = t;
  h_83 :
  if(!(match_cons(i_83, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm l_83 = NULL;
    l_83 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_83));
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    ATerm j_19 = t;
    if(PushChoice()==0)
      {
        ATerm v_19 = t;
        if(PushChoice()==0)
          {
            ATerm n_83 = NULL;
            n_83 = t;
            k_83 :
            if(!(match_cons(n_83, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = v_19;
            t = a_60(t);
            t = Cons_2(t, _id, v_8);
          }
        PopChoice();
      }
    else
      {
        t = j_19;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, u_8, v_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm), ATerm v_60 (ATerm))
{
  ATerm f_9 (ATerm t)
  {
    ATerm w_19 = t;
    if(PushChoice()==0)
      {
        t = u_60(t);
        PopChoice();
      }
    else
      {
        t = w_19;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_9);
  t = store_options_0(t);
  {
    ATerm x_19 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, v_60);
        PopChoice();
      }
    else
      {
        t = x_19;
        {
          ATerm y_19 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, t_60);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = y_19;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  t = iowrap_3(t, o_60, p_60, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm g_9 (ATerm t)
  {
    ATerm i_9 (ATerm t)
    {
      ATerm k_9 (ATerm t)
      {
        ATerm r_83 = NULL;
        r_83 = t;
        q_83 :
        if(!(match_cons(r_83, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, l_60, k_9);
      return(t);
    }
    t = TCons_2(t, _id, i_9);
    return(t);
  }
  t = iowrap_2(t, g_9, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
