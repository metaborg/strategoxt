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
ATerm Hd_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  f_3 :
  if(match_cons(g_3, sym_Cons_2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      t = not_null(h_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm j_9 = t;
  if(PushChoice()==0)
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, n_78);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
            w_3 = t;
            n_3 :
            if(match_cons(w_3, sym_TCons_2))
              {
                x_3 = ATgetArgument(w_3, 0);
                b_4 = ATgetArgument(w_3, 1);
                o_3 :
                if(match_cons(x_3, sym_SDef_3))
                  {
                    y_3 = ATgetArgument(x_3, 0);
                    z_3 = ATgetArgument(x_3, 1);
                    a_4 = ATgetArgument(x_3, 2);
                    p_3 :
                    if(match_cons(b_4, sym_TCons_2))
                      {
                        c_4 = ATgetArgument(b_4, 0);
                        d_4 = ATgetArgument(b_4, 1);
                        q_3 :
                        if(match_cons(d_4, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_4), not_null(z_3), not_null(a_4));
                        else
                          _fail(t);
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
      t = j_9;
      {
        ATerm k_9 = t;
        if(PushChoice()==0)
          {
            ATerm c_0 (ATerm t)
            {
              t = split_2(t, _id, n_78);
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
                  h_4 = t;
                  s_3 :
                  if(match_cons(h_4, sym_TCons_2))
                    {
                      i_4 = ATgetArgument(h_4, 0);
                      l_4 = ATgetArgument(h_4, 1);
                      t_3 :
                      if(match_cons(i_4, sym_VarDec_2))
                        {
                          j_4 = ATgetArgument(i_4, 0);
                          k_4 = ATgetArgument(i_4, 1);
                          u_3 :
                          if(match_cons(l_4, sym_TCons_2))
                            {
                              m_4 = ATgetArgument(l_4, 0);
                              n_4 = ATgetArgument(l_4, 1);
                              v_3 :
                              if(match_cons(n_4, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_4), not_null(k_4));
                              else
                                _fail(t);
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
            t = SDef_3(t, _id, c_0, _id);
            PopChoice();
          }
        else
          {
            t = k_9;
            {
              ATerm e_0 (ATerm t)
              {
                t = n_78(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, e_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym_Rec_2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm c_5 = NULL;
        t = not_null(y_4);
        {
          ATerm e_5 = NULL;
          t = o_56(t);
          c_5 = t;
          t = not_null(z_4);
          t = p_56(t);
          e_5 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(c_5), not_null(e_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym_Let_2))
    {
      o_5 = ATgetArgument(n_5, 0);
      p_5 = ATgetArgument(n_5, 1);
      {
        ATerm s_5 = NULL;
        t = not_null(o_5);
        {
          ATerm u_5 = NULL;
          t = q_56(t);
          s_5 = t;
          t = not_null(p_5);
          t = r_56(t);
          u_5 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_5), not_null(u_5));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm m_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, o_78, o_78);
      PopChoice();
    }
  else
    {
      t = m_9;
      {
        ATerm n_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, q_78, q_78, o_78);
            PopChoice();
          }
        else
          {
            t = n_9;
            t = Rec_2(t, q_78, o_78);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym_Rec_2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_6), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_SDef_3))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      o_6 = ATgetArgument(l_6, 2);
      t = not_null(n_6);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
          s_6 = t;
          j_6 :
          if(match_cons(s_6, sym_VarDec_2))
            {
              t_6 = ATgetArgument(s_6, 0);
              u_6 = ATgetArgument(s_6, 1);
              t = not_null(t_6);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, f_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Let_2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      t = not_null(d_7);
      {
        ATerm g_0 (ATerm t)
        {
          ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
          h_7 = t;
          a_7 :
          if(match_cons(h_7, sym_SDef_3))
            {
              i_7 = ATgetArgument(h_7, 0);
              j_7 = ATgetArgument(h_7, 1);
              k_7 = ATgetArgument(h_7, 2);
              t = not_null(i_7);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, g_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm o_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = o_9;
        {
          ATerm a_10 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = a_10;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, h_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm j_78 (ATerm))
{
  t = Scope_2(t, j_78, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_DynamicRules_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      {
        ATerm w_7 = NULL;
        t = not_null(u_7);
        t = m_55(t);
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(w_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm b_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, m_78, k_78);
      PopChoice();
    }
  else
    {
      t = b_10;
      t = DynamicRules_1(t, k_78);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_DynamicRules_1))
    {
      d_8 = ATgetArgument(c_8, 0);
      t = not_null(d_8);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Var_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_8), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  p_8 :
  if(match_cons(s_8, sym_TCons_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      q_8 :
      if(match_cons(u_8, sym_TCons_2))
        {
          v_8 = ATgetArgument(u_8, 0);
          w_8 = ATgetArgument(u_8, 1);
          r_8 :
          if(match_cons(w_8, sym_TNil_0))
            {
              t = not_null(t_8);
              {
                ATerm b_9 (ATerm t)
                {
                  ATerm c_10 = t;
                  if(PushChoice()==0)
                    {
                      ATerm z_8 = NULL;
                      z_8 = t;
                      o_8 :
                      if(match_cons(z_8, sym_Nil_0))
                        t = not_null(v_8);
                      else
                        _fail(t);
                      PopChoice();
                    }
                  else
                    {
                      t = c_10;
                      {
                        ATerm d_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm i_0 (ATerm t)
                            {
                              t = not_null(v_8);
                              return(t);
                            }
                            t = HdMember_1(t, i_0);
                            t = b_9(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_10;
                            t = Cons_2(t, _id, b_9);
                          }
                      }
                    }
                  return(t);
                }
                t = b_9(t);
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
  ATerm j_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, j_0, union_0, b_69);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Cons_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      t = j_68(t);
      {
        ATerm k_0 (ATerm t)
        {
          ATerm l_9 = NULL;
          l_9 = t;
          if(h_9 != NULL && h_9 != l_9)
            _fail(l_9);
          else
            h_9 = l_9;
          return(t);
        }
        t = fetch_1(t, k_0);
      }
      t = not_null(i_9);
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
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  m_11 = t;
  h_11 :
  if(match_cons(m_11, sym_Cons_2))
    {
      n_11 = ATgetArgument(m_11, 0);
      s_11 = ATgetArgument(m_11, 1);
      j_11 :
      if(match_cons(n_11, sym_TCons_2))
        {
          o_11 = ATgetArgument(n_11, 0);
          p_11 = ATgetArgument(n_11, 1);
          k_11 :
          if(match_cons(p_11, sym_TCons_2))
            {
              q_11 = ATgetArgument(p_11, 0);
              r_11 = ATgetArgument(p_11, 1);
              l_11 :
              if(match_cons(r_11, sym_TNil_0))
                {
                  ATerm w_11 = NULL,x_11 = NULL,f_12 = NULL,n_12 = NULL;
                  ATerm e_10;
                  e_10 = t;
                  {
                    ATerm y_11 = NULL;
                    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
                    t = not_null(q_11);
                    y_11 = t;
                    t = SSL_explode_term(not_null(y_11));
                    a_12 = t;
                    o_10 :
                    if(match_cons(a_12, sym_TCons_2))
                      {
                        b_12 = ATgetArgument(a_12, 0);
                        c_12 = ATgetArgument(a_12, 1);
                        p_10 :
                        if(match_cons(c_12, sym_TCons_2))
                          {
                            d_12 = ATgetArgument(c_12, 0);
                            e_12 = ATgetArgument(c_12, 1);
                            q_10 :
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
                  t = e_10;
                  {
                    ATerm g_12 = NULL;
                    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                    t = not_null(o_11);
                    g_12 = t;
                    t = SSL_explode_term(not_null(g_12));
                    i_12 = t;
                    t_10 :
                    if(match_cons(i_12, sym_TCons_2))
                      {
                        j_12 = ATgetArgument(i_12, 0);
                        k_12 = ATgetArgument(i_12, 1);
                        u_10 :
                        if(match_cons(k_12, sym_TCons_2))
                          {
                            l_12 = ATgetArgument(k_12, 0);
                            m_12 = ATgetArgument(k_12, 1);
                            f_11 :
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,v_13 = NULL,w_13 = NULL,b_14 = NULL,l_14 = NULL;
  a_13 = t;
  w_12 :
  if(match_cons(a_13, sym_Cons_2))
    {
      b_13 = ATgetArgument(a_13, 0);
      l_14 = ATgetArgument(a_13, 1);
      x_12 :
      if(match_cons(b_13, sym_TCons_2))
        {
          c_13 = ATgetArgument(b_13, 0);
          v_13 = ATgetArgument(b_13, 1);
          y_12 :
          if(match_cons(v_13, sym_TCons_2))
            {
              w_13 = ATgetArgument(v_13, 0);
              b_14 = ATgetArgument(v_13, 1);
              z_12 :
              if(match_cons(b_14, sym_TNil_0))
                {
                  ATerm n_14 = NULL;
                  if(c_13 != NULL && c_13 != w_13)
                    _fail(w_13);
                  else
                    c_13 = w_13;
                  if(n_14 != NULL && n_14 != l_14)
                    _fail(l_14);
                  else
                    n_14 = l_14;
                  t = not_null(n_14);
                }
              else
                _fail(t);
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
  ATerm p_14 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        t = q_62(t);
        PopChoice();
      }
    else
      {
        t = f_10;
        t = r_62(t);
        t = p_14(t);
      }
    return(t);
  }
  t = p_14(t);
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
  ATerm g_10 = t;
  if(PushChoice()==0)
    {
      ATerm l_0 (ATerm t)
      {
        ATerm z_14 = NULL;
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_14), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm b_15 = NULL;
            b_15 = t;
            r_14 :
            if(!(match_cons(b_15, sym_Nil_0)))
              _fail(t);
            return(t);
          }
          ATerm q_0 (ATerm t)
          {
            ATerm c_15 = NULL;
            c_15 = t;
            s_14 :
            if(!(match_cons(c_15, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, p_0, q_0);
          return(t);
        }
        t = TCons_2(t, _id, o_0);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm h_10 = t;
        if(PushChoice()==0)
          {
            ATerm r_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
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
              ATerm t_0 (ATerm t)
              {
                ATerm d_15 = NULL;
                d_15 = t;
                t_14 :
                if(!(match_cons(d_15, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, s_0, t_0);
              return(t);
            }
            t = TCons_2(t, _id, r_0);
            PopChoice();
          }
        else
          {
            t = h_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, l_0, m_0, n_0);
      PopChoice();
    }
  else
    {
      t = g_10;
      {
        ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
        e_15 = t;
        w_14 :
        if(match_cons(e_15, sym_TCons_2))
          {
            f_15 = ATgetArgument(e_15, 0);
            g_15 = ATgetArgument(e_15, 1);
            x_14 :
            if(match_cons(g_15, sym_TCons_2))
              {
                h_15 = ATgetArgument(g_15, 0);
                i_15 = ATgetArgument(g_15, 1);
                y_14 :
                if(match_cons(i_15, sym_TNil_0))
                  {
                    t = not_null(f_15);
                    {
                      ATerm o_15 (ATerm t)
                      {
                        ATerm j_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm l_15 = NULL;
                            l_15 = t;
                            v_14 :
                            if(!(match_cons(l_15, sym_Nil_0)))
                              _fail(t);
                            PopChoice();
                          }
                        else
                          {
                            t = j_10;
                            {
                              ATerm k_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    t = not_null(h_15);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_0);
                                  t = o_15(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_10;
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
ATerm free_vars_3 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm), ATerm c_64 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_15 (ATerm t)
  {
    ATerm l_10 = t;
    if(PushChoice()==0)
      {
        t = a_64(t);
        PopChoice();
      }
    else
      {
        t = l_10;
        {
          ATerm m_10 = t;
          if(PushChoice()==0)
            {
              ATerm q_15 = NULL;
              ATerm n_10;
              n_10 = t;
              {
                ATerm r_15 = NULL;
                t = b_64(t);
                r_15 = t;
                if(q_15 != NULL && q_15 != r_15)
                  _fail(r_15);
                else
                  q_15 = r_15;
              }
              t = n_10;
              {
                ATerm v_0 (ATerm t)
                {
                  ATerm x_0 (ATerm t)
                  {
                    t = not_null(q_15);
                    return(t);
                  }
                  t = split_2(t, s_15, x_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = c_64(t, v_0, s_15, w_0);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = m_10;
              t = collect_kids_1(t, s_15);
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
  ATerm y_0 (ATerm t)
  {
    ATerm r_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = r_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_0, tboundin_3);
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
ATerm Var_1 (ATerm t, ATerm z_55 (ATerm))
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
        t = z_55(t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
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
                    ATerm z_0 (ATerm t)
                    {
                      ATerm m_17 = NULL;
                      m_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = t_65(t);
                      return(t);
                    }
                    ATerm a_1 (ATerm t)
                    {
                      ATerm o_17 = NULL;
                      o_17 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_17), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_17), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = t_65(t);
                      return(t);
                    }
                    t = u_65(t, z_0, a_1, _id);
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  a_18 :
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
              ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,s_18 = NULL;
              ATerm n_18 = NULL;
              t = not_null(e_18);
              {
                ATerm o_18 = NULL;
                t = z_65(t);
                n_18 = t;
                if(k_18 != NULL && k_18 != n_18)
                  _fail(n_18);
                else
                  k_18 = n_18;
                {
                  ATerm p_18 = NULL;
                  t = map_1(t, new_0);
                  o_18 = t;
                  if(l_18 != NULL && l_18 != o_18)
                    _fail(o_18);
                  else
                    l_18 = o_18;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm r_18 = NULL;
                    t = zip_1(t, _id);
                    p_18 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    r_18 = t;
                    if(m_18 != NULL && m_18 != r_18)
                      _fail(r_18);
                    else
                      m_18 = r_18;
                  }
                }
              }
              t = not_null(e_18);
              {
                ATerm b_1 (ATerm t)
                {
                  t = not_null(l_18);
                  return(t);
                }
                t = a_66(t, b_1);
                s_18 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_18), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_18), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm s_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = s_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm n_65 (ATerm, ATerm (ATerm)))
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
                ATerm c_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(t_20);
                    return(t);
                  }
                  t = split_2(t, _id, d_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = n_65(t, c_1);
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  i_21 :
  if(match_cons(x_21, sym_TCons_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      j_21 :
      if(match_cons(z_21, sym_TCons_2))
        {
          a_22 = ATgetArgument(z_21, 0);
          b_22 = ATgetArgument(z_21, 1);
          w_21 :
          if(match_cons(b_22, sym_TNil_0))
            {
              t = not_null(y_21);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm e_22 = NULL;
                  e_22 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = v_64(t);
                  return(t);
                }
                t = _all(t, e_1);
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
  ATerm i_22 (ATerm t)
  {
    ATerm v_10 = t;
    if(PushChoice()==0)
      {
        t = a_65(t);
        PopChoice();
      }
    else
      {
        t = v_10;
        t = all_dist_1(t, i_22);
      }
    return(t);
  }
  t = i_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm b_66 (ATerm, ATerm (ATerm)), ATerm c_66 (ATerm), ATerm d_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_66 (ATerm, ATerm (ATerm)))
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_22), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm n_22 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        ATerm w_10 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, b_66);
            PopChoice();
          }
        else
          {
            t = w_10;
            t = RnBinding_2(t, c_66, e_66);
            t = DistBinding_2(t, n_22, d_66);
          }
        return(t);
      }
      t = env_alltd_1(t, f_1);
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  t_22 = t;
  r_22 :
  if(match_cons(t_22, sym_Call_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      w_22 = ATgetArgument(t_22, 1);
      s_22 :
      if(match_cons(u_22, sym_SVar_1))
        {
          v_22 = ATgetArgument(u_22, 0);
          {
            ATerm z_22 = NULL,a_23 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_22));
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, g_1);
              z_22 = t;
              q_22 :
              if(match_cons(z_22, sym_Defined_1))
                {
                  a_23 = ATgetArgument(z_22, 0);
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_23)), not_null(w_22));
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
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  k_23 = t;
  h_23 :
  if(match_cons(k_23, sym_Call_2))
    {
      l_23 = ATgetArgument(k_23, 0);
      n_23 = ATgetArgument(k_23, 1);
      i_23 :
      if(match_cons(l_23, sym_SVar_1))
        {
          m_23 = ATgetArgument(l_23, 0);
          j_23 :
          if(match_cons(n_23, sym_Nil_0))
            {
              ATerm p_23 = NULL,q_23 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(m_23));
              {
                ATerm h_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, h_1);
                p_23 = t;
                g_23 :
                if(match_cons(p_23, sym_Defined_1))
                  {
                    q_23 = ATgetArgument(p_23, 0);
                    t = not_null(q_23);
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
  ATerm u_23 (ATerm t)
  {
    t = q_74(t);
    t = _all(t, u_23);
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,z_25 = NULL,f_26 = NULL;
  k_25 = t;
  x_23 :
  if(match_cons(k_25, sym_TCons_2))
    {
      l_25 = ATgetArgument(k_25, 0);
      u_25 = ATgetArgument(k_25, 1);
      y_23 :
      if(match_cons(l_25, sym_VarDec_2))
        {
          m_25 = ATgetArgument(l_25, 0);
          n_25 = ATgetArgument(l_25, 1);
          i_24 :
          if(match_cons(n_25, sym_FunType_2))
            {
              o_25 = ATgetArgument(n_25, 0);
              t_25 = ATgetArgument(n_25, 1);
              j_24 :
              if(match_cons(o_25, sym_Cons_2))
                {
                  p_25 = ATgetArgument(o_25, 0);
                  q_25 = ATgetArgument(o_25, 1);
                  k_24 :
                  if(match_cons(q_25, sym_Nil_0))
                    {
                      d_25 :
                      if(match_cons(u_25, sym_TCons_2))
                        {
                          v_25 = ATgetArgument(u_25, 0);
                          f_26 = ATgetArgument(u_25, 1);
                          e_25 :
                          if(match_cons(f_26, sym_TNil_0))
                            {
                              ATerm x_10;
                              x_10 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(m_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, i_1);
                              }
                              t = x_10;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(q_25, sym_Cons_2))
                        {
                          r_25 = ATgetArgument(q_25, 0);
                          s_25 = ATgetArgument(q_25, 1);
                          f_25 :
                          if(match_cons(u_25, sym_TCons_2))
                            {
                              v_25 = ATgetArgument(u_25, 0);
                              f_26 = ATgetArgument(u_25, 1);
                              g_25 :
                              if(match_cons(v_25, sym_Call_2))
                                {
                                  w_25 = ATgetArgument(v_25, 0);
                                  z_25 = ATgetArgument(v_25, 1);
                                  h_25 :
                                  if(match_cons(w_25, sym_SVar_1))
                                    {
                                      x_25 = ATgetArgument(w_25, 0);
                                      i_25 :
                                      if(match_cons(z_25, sym_Nil_0))
                                        {
                                          j_25 :
                                          if(match_cons(f_26, sym_TNil_0))
                                            {
                                              ATerm y_10;
                                              y_10 = t;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(m_25)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_1, not_null(x_25)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm j_1 (ATerm t)
                                                {
                                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                                  return(t);
                                                }
                                                t = assert_1(t, j_1);
                                              }
                                              t = y_10;
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
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
  ATerm w_26 = NULL,z_26 = NULL,a_27 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
      return(t);
    }
    ATerm n_1 (ATerm t)
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
      b_27 = t;
      n_26 :
      if(match_cons(b_27, sym_TCons_2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          t_26 :
          if(match_cons(d_27, sym_TCons_2))
            {
              e_27 = ATgetArgument(d_27, 0);
              f_27 = ATgetArgument(d_27, 1);
              u_26 :
              if(match_cons(f_27, sym_TCons_2))
                {
                  g_27 = ATgetArgument(f_27, 0);
                  h_27 = ATgetArgument(f_27, 1);
                  v_26 :
                  if(match_cons(h_27, sym_TNil_0))
                    {
                      if(w_26 != NULL && w_26 != c_27)
                        _fail(c_27);
                      else
                        w_26 = c_27;
                      if(z_26 != NULL && z_26 != e_27)
                        _fail(e_27);
                      else
                        z_26 = e_27;
                      if(a_27 != NULL && a_27 != g_27)
                        _fail(g_27);
                      else
                        a_27 = g_27;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, substitute_arg_0);
                      t = not_null(a_27);
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm z_10 = t;
                          if(PushChoice()==0)
                            {
                              ATerm a_11 = t;
                              if(PushChoice()==0)
                                {
                                  t = SubsArgCall1_0(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = a_11;
                                  t = SubsArgCall2_0(t);
                                }
                              PopChoice();
                            }
                          else
                            t = z_10;
                          return(t);
                        }
                        t = topdown_1(t, o_1);
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
    t = scope_2(t, m_1, n_1);
    return(t);
  }
  t = scope_2(t, k_1, l_1);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  ATerm x_30 (ATerm t)
  {
    ATerm l_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_29));
    {
      ATerm p_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, p_1);
      l_29 = t;
      q_27 :
      if(match_cons(l_29, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm y_30 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_29));
    {
      ATerm q_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, q_1);
      o_29 = t;
      v_27 :
      if(match_cons(o_29, sym_Defined_2))
        {
          p_29 = ATgetArgument(o_29, 0);
          q_29 = ATgetArgument(o_29, 1);
          {
            ATerm s_29 = NULL,v_29 = NULL,w_29 = NULL;
            if(h_29 != NULL && h_29 != q_29)
              _fail(q_29);
            else
              h_29 = q_29;
            {
              ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
              t = not_null(p_29);
              t = strename_0(t);
              x_29 = t;
              u_27 :
              if(match_cons(x_29, sym_SDef_3))
                {
                  y_29 = ATgetArgument(x_29, 0);
                  z_29 = ATgetArgument(x_29, 1);
                  a_30 = ATgetArgument(x_29, 2);
                  {
                    ATerm b_30 = NULL;
                    if(h_29 != NULL && h_29 != y_29)
                      _fail(y_29);
                    else
                      h_29 = y_29;
                    if(s_29 != NULL && s_29 != z_29)
                      _fail(z_29);
                    else
                      s_29 = z_29;
                    if(v_29 != NULL && v_29 != a_30)
                      _fail(a_30);
                    else
                      v_29 = a_30;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_29), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_29), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = substitute_args_0(t);
                    b_30 = t;
                    if(w_29 != NULL && w_29 != b_30)
                      _fail(b_30);
                    else
                      w_29 = b_30;
                    {
                      ATerm b_11;
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm r_1 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                          return(t);
                        }
                        t = assert_1(t, r_1);
                      }
                      t = b_11;
                    }
                  }
                }
              else
                _fail(t);
              t = not_null(w_29);
            }
          }
        }
      else
        _fail(t);
    }
    return(t);
  }
  ATerm z_30 (ATerm t)
  {
    ATerm d_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_29));
    {
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, s_1);
      d_30 = t;
      x_27 :
      if(match_cons(d_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  ATerm a_31 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_29));
    {
      ATerm t_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, t_1);
      f_30 = t;
      j_28 :
      if(match_cons(f_30, sym_Defined_2))
        {
          g_30 = ATgetArgument(f_30, 0);
          h_30 = ATgetArgument(f_30, 1);
          {
            ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
            if(h_29 != NULL && h_29 != h_30)
              _fail(h_30);
            else
              h_29 = h_30;
            {
              ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
              t = not_null(g_30);
              t = strename_0(t);
              m_30 = t;
              b_28 :
              if(match_cons(m_30, sym_SDef_3))
                {
                  n_30 = ATgetArgument(m_30, 0);
                  o_30 = ATgetArgument(m_30, 1);
                  r_30 = ATgetArgument(m_30, 2);
                  i_28 :
                  if(match_cons(o_30, sym_Cons_2))
                    {
                      p_30 = ATgetArgument(o_30, 0);
                      q_30 = ATgetArgument(o_30, 1);
                      {
                        ATerm s_30 = NULL;
                        if(h_29 != NULL && h_29 != n_30)
                          _fail(n_30);
                        else
                          h_29 = n_30;
                        if(j_30 != NULL && j_30 != o_30)
                          _fail(o_30);
                        else
                          j_30 = o_30;
                        if(k_30 != NULL && k_30 != r_30)
                          _fail(r_30);
                        else
                          k_30 = r_30;
                        t = new_0(t);
                        s_30 = t;
                        if(l_30 != NULL && l_30 != s_30)
                          _fail(s_30);
                        else
                          l_30 = s_30;
                        {
                          ATerm c_11;
                          c_11 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_29)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                              return(t);
                            }
                            t = assert_1(t, u_1);
                          }
                          t = c_11;
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(l_30), not_null(j_30), not_null(k_30)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_30)), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          }
        }
      else
        _fail(t);
    }
    return(t);
  }
  ATerm b_31 (ATerm t)
  {
    ATerm w_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_29));
    {
      ATerm v_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, v_1);
      w_30 = t;
      l_28 :
      if(match_cons(w_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    return(t);
  }
  f_29 = t;
  p_28 :
  if(match_cons(f_29, sym_Call_2))
    {
      g_29 = ATgetArgument(f_29, 0);
      i_29 = ATgetArgument(f_29, 1);
      q_28 :
      if(match_cons(g_29, sym_SVar_1))
        {
          h_29 = ATgetArgument(g_29, 0);
          e_29 :
          if(match_cons(i_29, sym_Nil_0))
            {
              ATerm d_11 = t;
              if(PushChoice()==0)
                {
                  t = x_30(t);
                  PopChoice();
                }
              else
                {
                  t = d_11;
                  {
                    ATerm e_11 = t;
                    if(PushChoice()==0)
                      {
                        t = y_30(t);
                        PopChoice();
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm g_11 = t;
                          if(PushChoice()==0)
                            {
                              t = z_30(t);
                              PopChoice();
                            }
                          else
                            {
                              t = g_11;
                              {
                                ATerm i_11 = t;
                                if(PushChoice()==0)
                                  {
                                    t = a_31(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = i_11;
                                    t = b_31(t);
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
              ATerm t_11 = t;
              if(PushChoice()==0)
                {
                  t = x_30(t);
                  PopChoice();
                }
              else
                {
                  t = t_11;
                  {
                    ATerm u_11 = t;
                    if(PushChoice()==0)
                      {
                        t = y_30(t);
                        PopChoice();
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm v_11 = t;
                          if(PushChoice()==0)
                            {
                              t = z_30(t);
                              PopChoice();
                            }
                          else
                            {
                              t = v_11;
                              t = b_31(t);
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
        ATerm z_11;
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm w_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, w_1);
        }
        t = z_11;
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
              ATerm h_12;
              h_12 = t;
              {
                ATerm n_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm o_12 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = o_12;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  n_32 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_32), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm end_scope_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  ATerm p_12;
  p_12 = t;
  {
    ATerm y_32 = NULL;
    ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
    t = u_58(t);
    y_32 = t;
    if(w_32 != NULL && w_32 != y_32)
      _fail(y_32);
    else
      w_32 = y_32;
    {
      ATerm q_12 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = q_12;
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
            ATerm x_1 (ATerm t)
            {
              ATerm c_33 = NULL;
              c_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_33), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = table_pop_0(t);
              return(t);
            }
            t = map_1(t, x_1);
          }
        }
      else
        _fail(t);
    }
  }
  t = p_12;
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm j_33 = NULL;
  ATerm r_12;
  r_12 = t;
  {
    ATerm k_33 = NULL;
    ATerm l_33 = NULL;
    t = t_58(t);
    k_33 = t;
    if(j_33 != NULL && j_33 != k_33)
      _fail(k_33);
    else
      j_33 = k_33;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm s_12 = t;
      if(PushChoice()==0)
        {
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = s_12;
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(l_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = r_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  t = begin_scope_1(t, v_58);
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        t = w_58(t);
        t = end_scope_1(t, v_58);
        PopChoice();
      }
    else
      {
        t = t_12;
        t = end_scope_1(t, v_58);
        _fail(t);
      }
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, y_1, z_1);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm s_33 (ATerm t)
  {
    ATerm v_12 = t;
    if(PushChoice()==0)
      {
        ATerm r_33 = NULL;
        r_33 = t;
        q_33 :
        if(!(match_cons(r_33, sym_Nil_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = v_12;
        t = Cons_2(t, y_71, s_33);
      }
    return(t);
  }
  t = s_33(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  x_33 = t;
  u_33 :
  if(match_cons(x_33, sym_TCons_2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      v_33 :
      if(match_cons(z_33, sym_TCons_2))
        {
          a_34 = ATgetArgument(z_33, 0);
          b_34 = ATgetArgument(z_33, 1);
          w_33 :
          if(match_cons(b_34, sym_TNil_0))
            t = SSL_table_get(not_null(y_33), not_null(a_34));
          else
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
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  l_34 = t;
  h_34 :
  if(match_cons(l_34, sym_TCons_2))
    {
      m_34 = ATgetArgument(l_34, 0);
      n_34 = ATgetArgument(l_34, 1);
      i_34 :
      if(match_cons(n_34, sym_TCons_2))
        {
          o_34 = ATgetArgument(n_34, 0);
          p_34 = ATgetArgument(n_34, 1);
          j_34 :
          if(match_cons(p_34, sym_TCons_2))
            {
              q_34 = ATgetArgument(p_34, 0);
              r_34 = ATgetArgument(p_34, 1);
              k_34 :
              if(match_cons(r_34, sym_TNil_0))
                {
                  ATerm d_13;
                  d_13 = t;
                  {
                    ATerm v_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm e_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = e_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      v_34 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_34), not_null(v_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
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
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm g_35 = NULL,h_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  g_35 = t;
  d_35 :
  if(match_cons(g_35, sym_TCons_2))
    {
      h_35 = ATgetArgument(g_35, 0);
      j_35 = ATgetArgument(g_35, 1);
      e_35 :
      if(match_cons(j_35, sym_TCons_2))
        {
          k_35 = ATgetArgument(j_35, 0);
          l_35 = ATgetArgument(j_35, 1);
          f_35 :
          if(match_cons(l_35, sym_TNil_0))
            {
              ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
              ATerm f_13;
              f_13 = t;
              {
                ATerm u_35 = NULL;
                ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
                t = x_58(t);
                u_35 = t;
                if(r_35 != NULL && r_35 != u_35)
                  _fail(u_35);
                else
                  r_35 = u_35;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_35), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_35), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm g_13 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = g_13;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  v_35 = t;
                  c_35 :
                  if(match_cons(v_35, sym_Cons_2))
                    {
                      w_35 = ATgetArgument(v_35, 0);
                      x_35 = ATgetArgument(v_35, 1);
                      if(s_35 != NULL && s_35 != w_35)
                        _fail(w_35);
                      else
                        s_35 = w_35;
                      if(t_35 != NULL && t_35 != x_35)
                        _fail(x_35);
                      else
                        t_35 = x_35;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_35), not_null(s_35)), not_null(t_35)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = f_13;
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
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_SDef_3))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      i_36 = ATgetArgument(f_36, 2);
      {
        ATerm h_13;
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_36)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, not_null(f_36), not_null(g_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, a_2);
        }
        t = h_13;
        {
          ATerm i_13;
          i_13 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(g_36)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, not_null(f_36), not_null(g_36)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm b_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, b_2);
          }
          t = i_13;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  b_37 = t;
  y_36 :
  if(match_cons(b_37, sym_TCons_2))
    {
      c_37 = ATgetArgument(b_37, 0);
      d_37 = ATgetArgument(b_37, 1);
      z_36 :
      if(match_cons(d_37, sym_TCons_2))
        {
          e_37 = ATgetArgument(d_37, 0);
          f_37 = ATgetArgument(d_37, 1);
          a_37 :
          if(match_cons(f_37, sym_TNil_0))
            {
              ATerm j_13;
              j_13 = t;
              {
                ATerm k_13 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(c_37), not_null(e_37));
                    PopChoice();
                  }
                else
                  {
                    t = k_13;
                    t = SSL_gtr(not_null(c_37), not_null(e_37));
                  }
              }
              t = j_13;
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
  ATerm l_13 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = l_13;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  n_37 = t;
  k_37 :
  if(match_cons(n_37, sym_TCons_2))
    {
      o_37 = ATgetArgument(n_37, 0);
      r_37 = ATgetArgument(n_37, 1);
      l_37 :
      if(match_cons(r_37, sym_TCons_2))
        {
          s_37 = ATgetArgument(r_37, 0);
          t_37 = ATgetArgument(r_37, 1);
          m_37 :
          if(match_cons(t_37, sym_TNil_0))
            {
              ATerm m_13 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(o_37), not_null(s_37));
                  PopChoice();
                }
              else
                {
                  t = m_13;
                  t = SSL_addr(not_null(o_37), not_null(s_37));
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
  ATerm l_38 (ATerm t)
  {
    ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
    c_38 = t;
    b_38 :
    if(match_cons(c_38, sym_Nil_0))
      t = c_67(t);
    else
      {
        if(match_cons(c_38, sym_Cons_2))
          {
            d_38 = ATgetArgument(c_38, 0);
            e_38 = ATgetArgument(c_38, 1);
            {
              ATerm h_38 = NULL;
              t = not_null(d_38);
              {
                ATerm j_38 = NULL;
                t = e_67(t);
                h_38 = t;
                t = not_null(e_38);
                t = l_38(t);
                j_38 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_38), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_38), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = d_67(t);
              }
            }
          }
        else
          _fail(t);
      }
    return(t);
  }
  t = l_38(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm))
{
  ATerm a_39 = NULL;
  ATerm e_39 = NULL;
  a_39 = t;
  {
    ATerm f_39 = NULL;
    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,q_39 = NULL;
    t = not_null(a_39);
    f_39 = t;
    t = SSL_explode_term(not_null(f_39));
    l_39 = t;
    x_38 :
    if(match_cons(l_39, sym_TCons_2))
      {
        m_39 = ATgetArgument(l_39, 0);
        n_39 = ATgetArgument(l_39, 1);
        y_38 :
        if(match_cons(n_39, sym_TCons_2))
          {
            o_39 = ATgetArgument(n_39, 0);
            q_39 = ATgetArgument(n_39, 1);
            z_38 :
            if(match_cons(q_39, sym_TNil_0))
              {
                if(e_39 != NULL && e_39 != o_39)
                  _fail(o_39);
                else
                  e_39 = o_39;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(e_39);
    t = foldr_3(t, t_68, u_68, v_68);
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = crush_3(t, c_2, add_0, term_size_0);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm l_56 (ATerm), ATerm m_56 (ATerm))
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym_LChoice_2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      {
        ATerm e_40 = NULL;
        t = not_null(a_40);
        {
          ATerm g_40 = NULL;
          t = l_56(t);
          e_40 = t;
          t = not_null(b_40);
          t = m_56(t);
          g_40 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_40), not_null(g_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Choice_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm y_40 = NULL;
        t = not_null(q_40);
        {
          ATerm a_41 = NULL;
          t = j_56(t);
          y_40 = t;
          t = not_null(r_40);
          t = k_56(t);
          a_41 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_40), not_null(a_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym_Cong_2))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      {
        ATerm q_41 = NULL;
        t = not_null(m_41);
        {
          ATerm s_41 = NULL;
          t = g_57(t);
          q_41 = t;
          t = not_null(n_41);
          t = h_57(t);
          s_41 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(q_41), not_null(s_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Match_1))
    {
      b_42 = ATgetArgument(a_42, 0);
      {
        ATerm d_42 = NULL;
        t = not_null(b_42);
        t = o_57(t);
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym_Seq_2))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      {
        ATerm q_42 = NULL;
        t = not_null(m_42);
        {
          ATerm s_42 = NULL;
          t = h_56(t);
          q_42 = t;
          t = not_null(n_42);
          t = i_56(t);
          s_42 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_42), not_null(s_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym_Scope_2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      {
        ATerm k_43 = NULL;
        t = not_null(g_43);
        {
          ATerm m_43 = NULL;
          t = s_57(t);
          k_43 = t;
          t = not_null(h_43);
          t = t_57(t);
          m_43 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_43), not_null(m_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Build_1))
    {
      v_43 = ATgetArgument(u_43, 0);
      {
        ATerm z_43 = NULL;
        t = not_null(v_43);
        t = p_57(t);
        z_43 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm g_44 = NULL,h_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym_SVar_1))
    {
      h_44 = ATgetArgument(g_44, 0);
      {
        ATerm j_44 = NULL;
        t = not_null(h_44);
        t = n_56(t);
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(j_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm r_44 = NULL,t_44 = NULL,u_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym_Call_2))
    {
      t_44 = ATgetArgument(r_44, 0);
      u_44 = ATgetArgument(r_44, 1);
      {
        ATerm x_44 = NULL;
        t = not_null(t_44);
        {
          ATerm z_44 = NULL;
          t = c_57(t);
          x_44 = t;
          t = not_null(u_44);
          t = d_57(t);
          z_44 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(x_44), not_null(z_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  e_45 :
  if(!(match_cons(f_45, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(!(match_cons(h_45, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm k_45 (ATerm t)
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        ATerm j_45 = NULL;
        j_45 = t;
        i_45 :
        if(!(match_cons(j_45, sym_Id_0)))
          {
            if(!(match_cons(j_45, sym_Fail_0)))
              _fail(t);
          }
        PopChoice();
      }
    else
      {
        t = n_13;
        {
          ATerm o_13 = t;
          if(PushChoice()==0)
            {
              ATerm d_2 (ATerm t)
              {
                t = SVar_1(t, _id);
                return(t);
              }
              t = Call_2(t, d_2, _id);
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
                                ATerm e_2 (ATerm t)
                                {
                                  t = Match_1(t, _id);
                                  return(t);
                                }
                                t = Seq_2(t, e_2, _id);
                                PopChoice();
                              }
                            else
                              {
                                t = r_13;
                                {
                                  ATerm s_13 = t;
                                  if(PushChoice()==0)
                                    {
                                      ATerm f_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Scope_2(t, _id, f_2);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = s_13;
                                      {
                                        ATerm t_13 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm g_2 (ATerm t)
                                            {
                                              ATerm h_2 (ATerm t)
                                              {
                                                t = Match_1(t, _id);
                                                return(t);
                                              }
                                              t = Seq_2(t, h_2, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, g_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = t_13;
                                            {
                                              ATerm u_13 = t;
                                              if(PushChoice()==0)
                                                {
                                                  ATerm i_2 (ATerm t)
                                                  {
                                                    ATerm j_2 (ATerm t)
                                                    {
                                                      ATerm k_2 (ATerm t)
                                                      {
                                                        t = Match_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = Seq_2(t, k_2, _id);
                                                      return(t);
                                                    }
                                                    t = Scope_2(t, _id, j_2);
                                                    return(t);
                                                  }
                                                  t = Seq_2(t, i_2, _id);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = u_13;
                                                  {
                                                    ATerm x_13 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        t = Cong_2(t, _id, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = x_13;
                                                        {
                                                          ATerm y_13 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = Choice_2(t, k_45, k_45);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = y_13;
                                                              t = LChoice_2(t, k_45, k_45);
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = k_45(t);
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm t_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, t_2);
      t = leq_0(t);
    }
    t = z_13;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm l_45 (ATerm t)
  {
    ATerm a_14 = t;
    if(PushChoice()==0)
      {
        t = g_76(t);
        PopChoice();
      }
    else
      {
        t = a_14;
        t = _one(t, l_45);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL;
  r_45 = t;
  q_45 :
  if(match_cons(r_45, sym_SDef_3))
    {
      s_45 = ATgetArgument(r_45, 0);
      u_45 = ATgetArgument(r_45, 1);
      v_45 = ATgetArgument(r_45, 2);
      {
        ATerm z_45 = NULL;
        t = not_null(s_45);
        {
          ATerm y_46 = NULL;
          t = s_56(t);
          z_45 = t;
          t = not_null(u_45);
          {
            ATerm f_48 = NULL;
            t = t_56(t);
            y_46 = t;
            t = not_null(v_45);
            t = u_56(t);
            f_48 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_45), not_null(y_46), not_null(f_48));
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
  ATerm r_48 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm t_48 = NULL;
    ATerm c_14 = t;
    if(PushChoice()==0)
      {
        ATerm s_48 = NULL;
        s_48 = t;
        l_48 :
        if(!(match_string(s_48, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = c_14;
    t_48 = t;
    if(r_48 != NULL && r_48 != t_48)
      _fail(t_48);
    else
      r_48 = t_48;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm e_14 = t;
      if(PushChoice()==0)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
            u_48 = t;
            o_48 :
            if(match_cons(u_48, sym_Call_2))
              {
                v_48 = ATgetArgument(u_48, 0);
                x_48 = ATgetArgument(u_48, 1);
                p_48 :
                if(match_cons(v_48, sym_SVar_1))
                  {
                    w_48 = ATgetArgument(v_48, 0);
                    q_48 :
                    if(match_cons(x_48, sym_Nil_0))
                      {
                        if(r_48 != NULL && r_48 != w_48)
                          _fail(w_48);
                        else
                          r_48 = w_48;
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
          t = oncetd_1(t, w_2);
          PopChoice();
          _fail(t);
        }
      else
        t = e_14;
    }
    t = d_14;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, u_2, _id, v_2);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm d_49 (ATerm t)
  {
    ATerm f_14 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, d_49);
        PopChoice();
      }
    else
      {
        t = f_14;
        {
          ATerm c_49 = NULL;
          c_49 = t;
          b_49 :
          if(match_cons(c_49, sym_Nil_0))
            t = n_72(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = d_49(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  j_49 = t;
  g_49 :
  if(match_cons(j_49, sym_TCons_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      h_49 :
      if(match_cons(l_49, sym_TCons_2))
        {
          m_49 = ATgetArgument(l_49, 0);
          n_49 = ATgetArgument(l_49, 1);
          i_49 :
          if(match_cons(n_49, sym_TNil_0))
            {
              t = not_null(k_49);
              {
                ATerm x_2 (ATerm t)
                {
                  t = not_null(m_49);
                  return(t);
                }
                t = at_end_1(t, x_2);
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
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
  v_49 = t;
  s_49 :
  if(match_cons(v_49, sym_TCons_2))
    {
      w_49 = ATgetArgument(v_49, 0);
      x_49 = ATgetArgument(v_49, 1);
      t_49 :
      if(match_cons(x_49, sym_TCons_2))
        {
          y_49 = ATgetArgument(x_49, 0);
          z_49 = ATgetArgument(x_49, 1);
          u_49 :
          if(match_cons(z_49, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_49), not_null(y_49));
          else
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  j_50 = t;
  e_50 :
  if(match_cons(j_50, sym_TCons_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      n_50 = ATgetArgument(j_50, 1);
      f_50 :
      if(match_cons(k_50, sym_Cons_2))
        {
          l_50 = ATgetArgument(k_50, 0);
          m_50 = ATgetArgument(k_50, 1);
          g_50 :
          if(match_cons(n_50, sym_TCons_2))
            {
              o_50 = ATgetArgument(n_50, 0);
              r_50 = ATgetArgument(n_50, 1);
              h_50 :
              if(match_cons(o_50, sym_Cons_2))
                {
                  p_50 = ATgetArgument(o_50, 0);
                  q_50 = ATgetArgument(o_50, 1);
                  i_50 :
                  if(match_cons(r_50, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(l_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(m_50), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_50), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
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
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  d_51 = t;
  y_50 :
  if(match_cons(d_51, sym_TCons_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      z_50 :
      if(match_cons(e_51, sym_Nil_0))
        {
          a_51 :
          if(match_cons(f_51, sym_TCons_2))
            {
              g_51 = ATgetArgument(f_51, 0);
              h_51 = ATgetArgument(f_51, 1);
              b_51 :
              if(match_cons(g_51, sym_Nil_0))
                {
                  c_51 :
                  if(match_cons(h_51, sym_TNil_0))
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
  ATerm l_51 (ATerm t)
  {
    ATerm g_14 = t;
    if(PushChoice()==0)
      {
        t = k_70(t);
        PopChoice();
      }
    else
      {
        t = g_14;
        t = l_70(t);
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              ATerm k_51 = NULL;
              k_51 = t;
              j_51 :
              if(!(match_cons(k_51, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, l_51, b_3);
            return(t);
          }
          t = TCons_2(t, n_70, z_2);
          t = m_70(t);
        }
      }
    return(t);
  }
  t = l_51(t);
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
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Cong_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,m_53 = NULL;
        ATerm o_52 = NULL;
        t = not_null(g_52);
        {
          ATerm r_52 = NULL;
          t = map_1(t, new_0);
          o_52 = t;
          if(l_52 != NULL && l_52 != o_52)
            _fail(o_52);
          else
            l_52 = o_52;
          t = not_null(l_52);
          {
            ATerm s_52 = NULL;
            ATerm c_3 (ATerm t)
            {
              ATerm p_52 = NULL;
              p_52 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_52));
              return(t);
            }
            t = map_1(t, c_3);
            r_52 = t;
            if(j_52 != NULL && j_52 != r_52)
              _fail(r_52);
            else
              j_52 = r_52;
            t = not_null(g_52);
            {
              ATerm v_52 = NULL;
              t = map_1(t, new_0);
              s_52 = t;
              if(m_52 != NULL && m_52 != s_52)
                _fail(s_52);
              else
                m_52 = s_52;
              t = not_null(m_52);
              {
                ATerm w_52 = NULL;
                ATerm d_3 (ATerm t)
                {
                  ATerm t_52 = NULL;
                  t_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_52));
                  return(t);
                }
                t = map_1(t, d_3);
                v_52 = t;
                if(k_52 != NULL && k_52 != v_52)
                  _fail(v_52);
                else
                  k_52 = v_52;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm l_53 = NULL;
                  t = zip_1(t, _id);
                  w_52 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_52), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm e_3 (ATerm t)
                    {
                      ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,h_53 = NULL;
                      y_52 = t;
                      v_51 :
                      if(match_cons(y_52, sym_TCons_2))
                        {
                          z_52 = ATgetArgument(y_52, 0);
                          e_53 = ATgetArgument(y_52, 1);
                          w_51 :
                          if(match_cons(z_52, sym_TCons_2))
                            {
                              a_53 = ATgetArgument(z_52, 0);
                              b_53 = ATgetArgument(z_52, 1);
                              x_51 :
                              if(match_cons(b_53, sym_TCons_2))
                                {
                                  c_53 = ATgetArgument(b_53, 0);
                                  d_53 = ATgetArgument(b_53, 1);
                                  y_51 :
                                  if(match_cons(d_53, sym_TNil_0))
                                    {
                                      z_51 :
                                      if(match_cons(e_53, sym_TCons_2))
                                        {
                                          f_53 = ATgetArgument(e_53, 0);
                                          h_53 = ATgetArgument(e_53, 1);
                                          a_52 :
                                          if(match_cons(h_53, sym_TNil_0))
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_53))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_53), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_53)))));
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
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
                    t = zip_1(t, e_3);
                    l_53 = t;
                    if(n_52 != NULL && n_52 != l_53)
                      _fail(l_53);
                    else
                      n_52 = l_53;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_52), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_52), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
        m_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_52), not_null(j_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_52)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(f_52), not_null(k_52))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym_Cong_2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      {
        ATerm k_54 = NULL;
        ATerm o_54 = NULL;
        t = not_null(h_54);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm l_54 = NULL,m_54 = NULL;
            m_54 = t;
            c_54 :
            if(match_cons(m_54, sym_Match_1))
              {
                l_54 = ATgetArgument(m_54, 0);
                t = not_null(l_54);
              }
            else
              {
                if(match_cons(m_54, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_3);
          o_54 = t;
          if(k_54 != NULL && k_54 != o_54)
            _fail(o_54);
          else
            k_54 = o_54;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(g_54), not_null(k_54)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  u_54 :
  if(match_cons(w_54, sym_Scope_2))
    {
      x_54 = ATgetArgument(w_54, 0);
      y_54 = ATgetArgument(w_54, 1);
      v_54 :
      if(match_cons(x_54, sym_Nil_0))
        t = not_null(y_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,x_55 = NULL,a_56 = NULL;
  q_55 = t;
  h_55 :
  if(match_cons(q_55, sym_Choice_2))
    {
      r_55 = ATgetArgument(q_55, 0);
      p_55 = ATgetArgument(q_55, 1);
      if(r_55 != NULL && r_55 != p_55)
        _fail(p_55);
      else
        r_55 = p_55;
      t = not_null(r_55);
    }
  else
    {
      if(match_cons(q_55, sym_LChoice_2))
        {
          r_55 = ATgetArgument(q_55, 0);
          p_55 = ATgetArgument(q_55, 1);
          if(r_55 != NULL && r_55 != p_55)
            _fail(p_55);
          else
            r_55 = p_55;
          t = not_null(r_55);
        }
      else
        {
          if(match_cons(q_55, sym_Where_1))
            {
              r_55 = ATgetArgument(q_55, 0);
              i_55 :
              if(match_cons(r_55, sym_Where_1))
                {
                  s_55 = ATgetArgument(r_55, 0);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(s_55));
                }
              else
                {
                  if(match_cons(r_55, sym_Seq_2))
                    {
                      s_55 = ATgetArgument(r_55, 0);
                      u_55 = ATgetArgument(r_55, 1);
                      j_55 :
                      if(match_cons(s_55, sym_Where_1))
                        {
                          t_55 = ATgetArgument(s_55, 0);
                          k_55 :
                          if(match_cons(u_55, sym_Seq_2))
                            {
                              v_55 = ATgetArgument(u_55, 0);
                              a_56 = ATgetArgument(u_55, 1);
                              l_55 :
                              if(match_cons(v_55, sym_Build_1))
                                {
                                  x_55 = ATgetArgument(v_55, 0);
                                  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_55)), not_null(a_56))));
                                }
                              else
                                _fail(t);
                            }
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
              if(match_cons(q_55, sym_Not_1))
                {
                  r_55 = ATgetArgument(q_55, 0);
                  n_55 :
                  if(match_cons(r_55, sym_Not_1))
                    {
                      s_55 = ATgetArgument(r_55, 0);
                      t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_55));
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(q_55, sym_Test_1))
                    {
                      r_55 = ATgetArgument(q_55, 0);
                      o_55 :
                      if(match_cons(r_55, sym_Test_1))
                        {
                          s_55 = ATgetArgument(r_55, 0);
                          t = (ATerm) ATmakeAppl(sym_Test_1, not_null(s_55));
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
  ATerm q_57 = NULL,r_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  q_57 = t;
  k_57 :
  if(match_cons(q_57, sym_Choice_2))
    {
      r_57 = ATgetArgument(q_57, 0);
      w_57 = ATgetArgument(q_57, 1);
      l_57 :
      if(match_cons(r_57, sym_Choice_2))
        {
          u_57 = ATgetArgument(r_57, 0);
          v_57 = ATgetArgument(r_57, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_57), (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_57), not_null(w_57)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(q_57, sym_Seq_2))
        {
          r_57 = ATgetArgument(q_57, 0);
          w_57 = ATgetArgument(q_57, 1);
          m_57 :
          if(match_cons(r_57, sym_Seq_2))
            {
              u_57 = ATgetArgument(r_57, 0);
              v_57 = ATgetArgument(r_57, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_57), not_null(w_57)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(q_57, sym_LChoice_2))
            {
              r_57 = ATgetArgument(q_57, 0);
              w_57 = ATgetArgument(q_57, 1);
              n_57 :
              if(match_cons(r_57, sym_LChoice_2))
                {
                  u_57 = ATgetArgument(r_57, 0);
                  v_57 = ATgetArgument(r_57, 1);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_57), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_57), not_null(w_57)));
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
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  l_59 = t;
  f_59 :
  if(match_cons(l_59, sym_Seqs_1))
    {
      m_59 = ATgetArgument(l_59, 0);
      g_59 :
      if(match_cons(m_59, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(m_59, sym_Cons_2))
            {
              j_59 = ATgetArgument(m_59, 0);
              k_59 = ATgetArgument(m_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_59), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_59)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(l_59, sym_Choices_1))
        {
          m_59 = ATgetArgument(l_59, 0);
          h_59 :
          if(match_cons(m_59, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(m_59, sym_Cons_2))
                {
                  j_59 = ATgetArgument(m_59, 0);
                  k_59 = ATgetArgument(m_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_59), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_59)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(l_59, sym_LChoices_1))
            {
              m_59 = ATgetArgument(l_59, 0);
              i_59 :
              if(match_cons(m_59, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(m_59, sym_Cons_2))
                    {
                      j_59 = ATgetArgument(m_59, 0);
                      k_59 = ATgetArgument(m_59, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_59), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_59)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(l_59, sym_Lets_2))
                {
                  m_59 = ATgetArgument(l_59, 0);
                  n_59 = ATgetArgument(l_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(m_59), not_null(n_59));
                }
              else
                {
                  if(match_cons(l_59, sym_BA_2))
                    {
                      m_59 = ATgetArgument(l_59, 0);
                      n_59 = ATgetArgument(l_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_59)), not_null(m_59));
                    }
                  else
                    {
                      if(match_cons(l_59, sym_MA_2))
                        {
                          m_59 = ATgetArgument(l_59, 0);
                          n_59 = ATgetArgument(l_59, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_59)), not_null(n_59));
                        }
                      else
                        {
                          if(match_cons(l_59, sym_AM_2))
                            {
                              m_59 = ATgetArgument(l_59, 0);
                              n_59 = ATgetArgument(l_59, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_59), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_59)));
                            }
                          else
                            {
                              if(match_cons(l_59, sym_BAM_3))
                                {
                                  m_59 = ATgetArgument(l_59, 0);
                                  n_59 = ATgetArgument(l_59, 1);
                                  o_59 = ATgetArgument(l_59, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_59)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_59)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(l_59, sym_InfixApp_3))
                                    {
                                      m_59 = ATgetArgument(l_59, 0);
                                      n_59 = ATgetArgument(l_59, 1);
                                      o_59 = ATgetArgument(l_59, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_59), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_59), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  l_61 :
  if(match_cons(n_61, sym_Where_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      m_61 :
      if(match_cons(o_61, sym_Fail_0))
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
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_LChoice_2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      s_61 :
      if(match_cons(v_61, sym_Fail_0))
        t = not_null(u_61);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  d_62 :
  if(match_cons(f_62, sym_LChoice_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      e_62 :
      if(match_cons(g_62, sym_Fail_0))
        t = not_null(h_62);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  n_62 = t;
  l_62 :
  if(match_cons(n_62, sym_Choice_2))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      m_62 :
      if(match_cons(p_62, sym_Fail_0))
        t = not_null(o_62);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  z_62 :
  if(match_cons(b_63, sym_Choice_2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      a_63 :
      if(match_cons(c_63, sym_Fail_0))
        t = not_null(d_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  i_63 :
  if(match_cons(j_63, sym_Cong_2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      t = not_null(l_63);
      {
        ATerm k_3 (ATerm t)
        {
          ATerm o_63 = NULL;
          o_63 = t;
          h_63 :
          if(!(match_cons(o_63, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, k_3);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  r_63 :
  if(match_cons(t_63, sym_Path_2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      s_63 :
      if(match_cons(v_63, sym_Fail_0))
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
  ATerm f_64 = NULL,g_64 = NULL;
  f_64 = t;
  z_63 :
  if(match_cons(f_64, sym_One_1))
    {
      g_64 = ATgetArgument(f_64, 0);
      e_64 :
      if(match_cons(g_64, sym_Fail_0))
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
  ATerm l_64 = NULL,m_64 = NULL;
  l_64 = t;
  j_64 :
  if(match_cons(l_64, sym_Some_1))
    {
      m_64 = ATgetArgument(l_64, 0);
      k_64 :
      if(match_cons(m_64, sym_Fail_0))
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
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
  r_64 = t;
  p_64 :
  if(match_cons(r_64, sym_Rec_2))
    {
      s_64 = ATgetArgument(r_64, 0);
      t_64 = ATgetArgument(r_64, 1);
      q_64 :
      if(match_cons(t_64, sym_Fail_0))
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
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  y_64 :
  if(match_cons(c_65, sym_Scope_2))
    {
      d_65 = ATgetArgument(c_65, 0);
      e_65 = ATgetArgument(c_65, 1);
      z_64 :
      if(match_cons(e_65, sym_Fail_0))
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
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  i_65 :
  if(match_cons(k_65, sym_Seq_2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      j_65 :
      if(match_cons(l_65, sym_Fail_0))
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
  ATerm v_65 = NULL,w_65 = NULL;
  v_65 = t;
  r_65 :
  if(match_cons(v_65, sym_Not_1))
    {
      w_65 = ATgetArgument(v_65, 0);
      s_65 :
      if(match_cons(w_65, sym_Fail_0))
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
  ATerm i_66 = NULL,j_66 = NULL;
  i_66 = t;
  g_66 :
  if(match_cons(i_66, sym_Test_1))
    {
      j_66 = ATgetArgument(i_66, 0);
      h_66 :
      if(match_cons(j_66, sym_Fail_0))
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
  ATerm h_14 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = h_14;
      {
        ATerm i_14 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = i_14;
            {
              ATerm j_14 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = j_14;
                  {
                    ATerm k_14 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm m_14 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = m_14;
                              {
                                ATerm o_14 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = o_14;
                                    {
                                      ATerm q_14 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = q_14;
                                          {
                                            ATerm u_14 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_14;
                                                {
                                                  ATerm a_15 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_15;
                                                      {
                                                        ATerm j_15 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = j_15;
                                                            {
                                                              ATerm k_15 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = k_15;
                                                                  {
                                                                    ATerm m_15 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_15;
                                                                        {
                                                                          ATerm n_15 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_15;
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
  ATerm o_66 = NULL,p_66 = NULL;
  o_66 = t;
  m_66 :
  if(match_cons(o_66, sym_Match_1))
    {
      p_66 = ATgetArgument(o_66, 0);
      n_66 :
      if(match_cons(p_66, sym_Wld_0))
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
  ATerm u_66 = NULL,v_66 = NULL;
  u_66 = t;
  s_66 :
  if(match_cons(u_66, sym_Where_1))
    {
      v_66 = ATgetArgument(u_66, 0);
      t_66 :
      if(match_cons(v_66, sym_Id_0))
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
  ATerm a_67 = NULL,b_67 = NULL;
  a_67 = t;
  y_66 :
  if(match_cons(a_67, sym_All_1))
    {
      b_67 = ATgetArgument(a_67, 0);
      z_66 :
      if(match_cons(b_67, sym_Id_0))
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
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  k_67 = t;
  i_67 :
  if(match_cons(k_67, sym_Rec_2))
    {
      l_67 = ATgetArgument(k_67, 0);
      m_67 = ATgetArgument(k_67, 1);
      j_67 :
      if(match_cons(m_67, sym_Id_0))
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
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  q_67 :
  if(match_cons(s_67, sym_Scope_2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      r_67 :
      if(match_cons(u_67, sym_Id_0))
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
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  y_67 :
  if(match_cons(a_68, sym_LChoice_2))
    {
      b_68 = ATgetArgument(a_68, 0);
      c_68 = ATgetArgument(a_68, 1);
      z_67 :
      if(match_cons(b_68, sym_Id_0))
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
  ATerm k_68 = NULL,l_68 = NULL,o_68 = NULL;
  k_68 = t;
  h_68 :
  if(match_cons(k_68, sym_Seq_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      o_68 = ATgetArgument(k_68, 1);
      i_68 :
      if(match_cons(o_68, sym_Id_0))
        t = not_null(l_68);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  s_68 :
  if(match_cons(x_68, sym_Seq_2))
    {
      y_68 = ATgetArgument(x_68, 0);
      z_68 = ATgetArgument(x_68, 1);
      w_68 :
      if(match_cons(y_68, sym_Id_0))
        t = not_null(z_68);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  g_69 = t;
  e_69 :
  if(match_cons(g_69, sym_Not_1))
    {
      h_69 = ATgetArgument(g_69, 0);
      f_69 :
      if(match_cons(h_69, sym_Id_0))
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
  ATerm m_69 = NULL,n_69 = NULL;
  m_69 = t;
  k_69 :
  if(match_cons(m_69, sym_Test_1))
    {
      n_69 = ATgetArgument(m_69, 0);
      l_69 :
      if(match_cons(n_69, sym_Id_0))
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
  ATerm p_15 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = p_15;
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
              ATerm u_15 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_15;
                  {
                    ATerm v_15 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = v_15;
                        {
                          ATerm e_16 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = e_16;
                              {
                                ATerm f_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = f_16;
                                    {
                                      ATerm g_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = g_16;
                                          {
                                            ATerm h_16 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = h_16;
                                                {
                                                  ATerm i_16 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = i_16;
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
  ATerm j_16 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = j_16;
      {
        ATerm k_16 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = k_16;
            {
              ATerm l_16 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = l_16;
                  {
                    ATerm m_16 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_16;
                        {
                          ATerm q_16 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = q_16;
                              {
                                ATerm s_16 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_16;
                                    {
                                      ATerm t_16 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_16;
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
  ATerm p_69 (ATerm t)
  {
    ATerm u_16 = t;
    if(PushChoice()==0)
      {
        t = z_61(t);
        t = p_69(t);
        PopChoice();
      }
    else
      {
        t = u_16;
        t = a_62(t);
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_62 (ATerm))
{
  t = repeat_2(t, c_62, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm q_69 (ATerm t)
  {
    t = u_74(t);
    t = _all(t, q_69);
    t = u_74(t);
    return(t);
  }
  t = q_69(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, l_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm v_16 = t;
      if(PushChoice()==0)
        {
          t = inlineable_0(t);
          t = AddSDef_0(t);
          PopChoice();
        }
      else
        t = v_16;
    }
    return(t);
  }
  t = map_1(t, m_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm u_69 = NULL,v_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym_Strategies_1))
    {
      v_69 = ATgetArgument(u_69, 0);
      {
        ATerm x_69 = NULL;
        t = not_null(v_69);
        t = w_55(t);
        x_69 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(x_69));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm e_70 = NULL,f_70 = NULL;
  e_70 = t;
  d_70 :
  if(match_cons(e_70, sym_Specification_1))
    {
      f_70 = ATgetArgument(e_70, 0);
      {
        ATerm h_70 = NULL;
        t = not_null(f_70);
        t = y_55(t);
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(h_70));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        ATerm s_70 = NULL;
        s_70 = t;
        r_70 :
        if(!(match_cons(s_70, sym_Nil_0)))
          _fail(t);
        return(t);
      }
      t = Cons_2(t, f_4, g_4);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, r_3);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  t_70 :
  if(!(match_cons(u_70, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  y_70 :
  if(match_cons(z_70, sym_TCons_2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      {
        ATerm e_71 = NULL;
        t = not_null(a_71);
        {
          ATerm g_71 = NULL;
          t = x_57(t);
          e_71 = t;
          t = not_null(b_71);
          t = y_57(t);
          g_71 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_71), not_null(g_71));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_71 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm o_71 = NULL,p_71 = NULL;
      o_71 = t;
      m_71 :
      if(match_cons(o_71, sym_Program_1))
        {
          p_71 = ATgetArgument(o_71, 0);
          if(n_71 != NULL && n_71 != p_71)
            _fail(p_71);
          else
            n_71 = p_71;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, o_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_71), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = w_16;
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
  ATerm s_71 = NULL;
  s_71 = t;
  t = SSL_exit(not_null(s_71));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL;
  b_72 = t;
  w_71 :
  if(match_cons(b_72, sym_TCons_2))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      x_71 :
      if(match_cons(d_72, sym_TCons_2))
        {
          e_72 = ATgetArgument(d_72, 0);
          f_72 = ATgetArgument(d_72, 1);
          a_72 :
          if(match_cons(f_72, sym_TNil_0))
            {
              ATerm x_16;
              x_16 = t;
              t = SSL_printnl(not_null(c_72), not_null(e_72));
              t = x_16;
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
  ATerm j_17 = t;
  if(PushChoice()==0)
    {
      t = f_74(t);
      PopChoice();
    }
  else
    t = j_17;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  ATerm k_17 = t;
  if(PushChoice()==0)
    {
      ATerm p_4 (ATerm t)
      {
        ATerm l_17 = t;
        if(PushChoice()==0)
          {
            ATerm r_4 (ATerm t)
            {
              ATerm x_72 = NULL;
              x_72 = t;
              l_72 :
              if(!(match_cons(x_72, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, r_4);
            PopChoice();
            _fail(t);
          }
        else
          t = l_17;
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm s_4 (ATerm t)
        {
          ATerm y_72 = NULL;
          y_72 = t;
          m_72 :
          if(!(match_cons(y_72, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, s_4);
        return(t);
      }
      t = TCons_2(t, p_4, q_4);
      {
        ATerm t_4 (ATerm t)
        {
          ATerm v_4 (ATerm t)
          {
            ATerm z_72 = NULL,a_73 = NULL;
            z_72 = t;
            q_72 :
            if(match_cons(z_72, sym_Runtime_1))
              {
                a_73 = ATgetArgument(z_72, 0);
                if(w_72 != NULL && w_72 != a_73)
                  _fail(a_73);
                else
                  w_72 = a_73;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, v_4);
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm b_73 = NULL;
            b_73 = t;
            r_72 :
            if(!(match_cons(b_73, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, a_5);
          return(t);
        }
        t = TCons_2(t, t_4, u_4);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm f_5 (ATerm t)
            {
              ATerm c_73 = NULL,d_73 = NULL;
              c_73 = t;
              t_72 :
              if(match_cons(c_73, sym_Program_1))
                {
                  d_73 = ATgetArgument(c_73, 0);
                  if(v_72 != NULL && v_72 != d_73)
                    _fail(d_73);
                  else
                    v_72 = d_73;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, f_5);
            return(t);
          }
          ATerm d_5 (ATerm t)
          {
            ATerm g_5 (ATerm t)
            {
              ATerm e_73 = NULL;
              e_73 = t;
              u_72 :
              if(!(match_cons(e_73, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, g_5);
            return(t);
          }
          t = TCons_2(t, b_5, d_5);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_72), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_72), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = k_17;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  l_73 = t;
  i_73 :
  if(match_cons(l_73, sym_TCons_2))
    {
      m_73 = ATgetArgument(l_73, 0);
      p_73 = ATgetArgument(l_73, 1);
      j_73 :
      if(match_cons(p_73, sym_TCons_2))
        {
          q_73 = ATgetArgument(p_73, 0);
          r_73 = ATgetArgument(p_73, 1);
          k_73 :
          if(match_cons(r_73, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(m_73), not_null(q_73));
          else
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
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  z_73 = t;
  w_73 :
  if(match_cons(z_73, sym_TCons_2))
    {
      a_74 = ATgetArgument(z_73, 0);
      b_74 = ATgetArgument(z_73, 1);
      x_73 :
      if(match_cons(b_74, sym_TCons_2))
        {
          c_74 = ATgetArgument(b_74, 0);
          d_74 = ATgetArgument(b_74, 1);
          y_73 :
          if(match_cons(d_74, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(a_74), not_null(c_74));
          else
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
  ATerm s_74 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm p_17 = t;
      if(PushChoice()==0)
        {
          ATerm j_5 (ATerm t)
          {
            ATerm t_74 = NULL,w_74 = NULL;
            t_74 = t;
            j_74 :
            if(match_cons(t_74, sym_Output_1))
              {
                w_74 = ATgetArgument(t_74, 0);
                if(s_74 != NULL && s_74 != w_74)
                  _fail(w_74);
                else
                  s_74 = w_74;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, j_5);
          PopChoice();
        }
      else
        {
          t = p_17;
          {
            ATerm x_74 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_74 = t;
            if(s_74 != NULL && s_74 != x_74)
              _fail(x_74);
            else
              s_74 = x_74;
          }
        }
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        ATerm y_74 = NULL;
        y_74 = t;
        l_74 :
        if(!(match_cons(y_74, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, k_5);
      return(t);
    }
    t = TCons_2(t, h_5, i_5);
  }
  t = n_17;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm t_5 (ATerm t)
        {
          t = not_null(s_74);
          return(t);
        }
        t = split_2(t, t_5, _id);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        ATerm z_74 = NULL;
        z_74 = t;
        m_74 :
        if(!(match_cons(z_74, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, q_5, r_5);
      return(t);
    }
    t = TCons_2(t, _id, l_5);
    {
      ATerm q_17 = t;
      if(PushChoice()==0)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm x_5 (ATerm t)
            {
              ATerm a_75 = NULL;
              a_75 = t;
              n_74 :
              if(!(match_cons(a_75, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, x_5);
            return(t);
          }
          ATerm w_5 (ATerm t)
          {
            ATerm y_5 (ATerm t)
            {
              ATerm b_75 = NULL;
              b_75 = t;
              o_74 :
              if(!(match_cons(b_75, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, y_5);
            return(t);
          }
          t = TCons_2(t, v_5, w_5);
          PopChoice();
        }
      else
        {
          t = q_17;
          {
            ATerm z_5 (ATerm t)
            {
              ATerm e_6 (ATerm t)
              {
                ATerm c_75 = NULL;
                c_75 = t;
                p_74 :
                if(!(match_cons(c_75, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, e_6);
              return(t);
            }
            t = TCons_2(t, _id, z_5);
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
  ATerm k_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL;
  ATerm r_17;
  r_17 = t;
  t = dtime_0(t);
  t = r_17;
  t = f_61(t);
  {
    ATerm s_17;
    s_17 = t;
    {
      ATerm l_75 = NULL;
      t = dtime_0(t);
      l_75 = t;
      if(k_75 != NULL && k_75 != l_75)
        _fail(l_75);
      else
        k_75 = l_75;
    }
    t = s_17;
    m_75 = t;
    h_75 :
    if(match_cons(m_75, sym_TCons_2))
      {
        n_75 = ATgetArgument(m_75, 0);
        o_75 = ATgetArgument(m_75, 1);
        i_75 :
        if(match_cons(o_75, sym_TCons_2))
          {
            p_75 = ATgetArgument(o_75, 0);
            q_75 = ATgetArgument(o_75, 1);
            j_75 :
            if(match_cons(q_75, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(k_75)), not_null(n_75)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_75), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm w_75 = NULL;
  w_75 = t;
  t = SSL_ReadFromFile(not_null(w_75));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm c_76 = NULL;
  ATerm e_76 = NULL;
  c_76 = t;
  {
    ATerm i_76 = NULL;
    t = n_73(t);
    e_76 = t;
    t = not_null(c_76);
    t = o_73(t);
    i_76 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_76), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_76 = NULL;
  ATerm t_17;
  t_17 = t;
  {
    ATerm u_17 = t;
    if(PushChoice()==0)
      {
        ATerm f_6 (ATerm t)
        {
          ATerm r_76 = NULL,s_76 = NULL;
          r_76 = t;
          o_76 :
          if(match_cons(r_76, sym_Input_1))
            {
              s_76 = ATgetArgument(r_76, 0);
              if(q_76 != NULL && q_76 != s_76)
                _fail(s_76);
              else
                q_76 = s_76;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, f_6);
        PopChoice();
      }
    else
      {
        t = u_17;
        {
          ATerm t_76 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          t_76 = t;
          if(q_76 != NULL && q_76 != t_76)
            _fail(t_76);
          else
            q_76 = t_76;
        }
      }
  }
  t = t_17;
  {
    ATerm g_6 (ATerm t)
    {
      t = not_null(q_76);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  w_76 :
  if(!(match_cons(x_76, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm b_77 = NULL,c_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym_Undefined_1))
    {
      c_77 = ATgetArgument(b_77, 0);
      {
        ATerm e_77 = NULL;
        t = not_null(c_77);
        t = g_53(t);
        e_77 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_77));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_77 = NULL;
  j_77 = t;
  i_77 :
  if(!(match_cons(j_77, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm k_77 (ATerm t)
  {
    ATerm v_17 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_72, _id);
        PopChoice();
      }
    else
      {
        t = v_17;
        t = Cons_2(t, _id, k_77);
      }
    return(t);
  }
  t = k_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_60 (ATerm))
{
  t = fetch_1(t, j_60);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm w_17 = t;
    if(PushChoice()==0)
      {
        ATerm n_77 = NULL;
        n_77 = t;
        l_77 :
        if(!(match_cons(n_77, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = w_17;
        {
          ATerm x_17 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = x_17;
              {
                ATerm o_77 = NULL;
                o_77 = t;
                m_77 :
                if(!(match_cons(o_77, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, h_6);
  t = e_61(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  ATerm y_17;
  y_17 = t;
  {
    ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
    x_77 = t;
    q_77 :
    if(match_cons(x_77, sym_TCons_2))
      {
        y_77 = ATgetArgument(x_77, 0);
        z_77 = ATgetArgument(x_77, 1);
        r_77 :
        if(match_cons(z_77, sym_TCons_2))
          {
            a_78 = ATgetArgument(z_77, 0);
            b_78 = ATgetArgument(z_77, 1);
            s_77 :
            if(match_cons(b_78, sym_TCons_2))
              {
                c_78 = ATgetArgument(b_78, 0);
                d_78 = ATgetArgument(b_78, 1);
                t_77 :
                if(match_cons(d_78, sym_TNil_0))
                  {
                    if(u_77 != NULL && u_77 != y_77)
                      _fail(y_77);
                    else
                      u_77 = y_77;
                    if(v_77 != NULL && v_77 != a_78)
                      _fail(a_78);
                    else
                      v_77 = a_78;
                    if(w_77 != NULL && w_77 != c_78)
                      _fail(c_78);
                    else
                      w_77 = c_78;
                    t = SSL_table_put(not_null(u_77), not_null(v_77), not_null(w_77));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = y_17;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  t = SSL_table_create(not_null(g_78));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_78 = NULL;
  s_78 = t;
  {
    ATerm z_17;
    z_17 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_78), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = z_17;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_Cons_2))
    {
      z_78 = ATgetArgument(y_78, 0);
      a_79 = ATgetArgument(y_78, 1);
      {
        ATerm d_79 = NULL;
        t = not_null(z_78);
        t = c_60(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = d_60(t);
        d_79 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_79), not_null(a_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm))
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  o_79 = t;
  m_79 :
  if(match_cons(o_79, sym_Cons_2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      n_79 :
      if(match_cons(q_79, sym_Cons_2))
        {
          r_79 = ATgetArgument(q_79, 0);
          s_79 = ATgetArgument(q_79, 1);
          {
            ATerm w_79 = NULL;
            t = not_null(p_79);
            t = e_60(t);
            t = not_null(r_79);
            t = f_60(t);
            w_79 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_79), not_null(s_79));
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
  ATerm i_18 = t;
  if(PushChoice()==0)
    {
      ATerm i_6 (ATerm t)
      {
        ATerm u_80 = NULL;
        u_80 = t;
        a_80 :
        if(!(match_string(u_80, "-S")))
          _fail(t);
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, i_6, p_6);
      PopChoice();
    }
  else
    {
      t = i_18;
      {
        ATerm j_18 = t;
        if(PushChoice()==0)
          {
            ATerm q_6 (ATerm t)
            {
              ATerm v_80 = NULL;
              v_80 = t;
              b_80 :
              if(!(match_string(v_80, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, q_6, r_6);
            PopChoice();
          }
        else
          {
            t = j_18;
            {
              ATerm q_18 = t;
              if(PushChoice()==0)
                {
                  ATerm v_6 (ATerm t)
                  {
                    ATerm w_80 = NULL;
                    w_80 = t;
                    c_80 :
                    if(!(match_string(w_80, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm w_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, v_6, w_6);
                  PopChoice();
                }
              else
                {
                  t = q_18;
                  {
                    ATerm t_18 = t;
                    if(PushChoice()==0)
                      {
                        ATerm x_6 (ATerm t)
                        {
                          ATerm x_80 = NULL;
                          x_80 = t;
                          d_80 :
                          if(!(match_string(x_80, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm y_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, x_6, y_6);
                        PopChoice();
                      }
                    else
                      {
                        t = t_18;
                        {
                          ATerm u_18 = t;
                          if(PushChoice()==0)
                            {
                              ATerm z_6 (ATerm t)
                              {
                                ATerm y_80 = NULL;
                                y_80 = t;
                                e_80 :
                                if(!(match_string(y_80, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm f_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, z_6, f_7);
                              PopChoice();
                            }
                          else
                            {
                              t = u_18;
                              {
                                ATerm v_18 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm g_7 (ATerm t)
                                    {
                                      ATerm z_80 = NULL;
                                      z_80 = t;
                                      f_80 :
                                      if(!(match_string(z_80, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm l_7 (ATerm t)
                                    {
                                      ATerm a_81 = NULL;
                                      a_81 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_81));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, g_7, l_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = v_18;
                                    {
                                      ATerm w_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm m_7 (ATerm t)
                                          {
                                            ATerm c_81 = NULL;
                                            c_81 = t;
                                            h_80 :
                                            if(!(match_string(c_81, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_7 (ATerm t)
                                          {
                                            ATerm d_81 = NULL;
                                            d_81 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_81));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, m_7, n_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = w_18;
                                          {
                                            ATerm x_18 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm o_7 (ATerm t)
                                                {
                                                  ATerm f_81 = NULL;
                                                  f_81 = t;
                                                  j_80 :
                                                  if(!(match_string(f_81, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm p_7 (ATerm t)
                                                {
                                                  ATerm g_81 = NULL;
                                                  g_81 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_81));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, o_7, p_7);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_18;
                                                {
                                                  ATerm y_18 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm q_7 (ATerm t)
                                                      {
                                                        ATerm i_81 = NULL;
                                                        i_81 = t;
                                                        l_80 :
                                                        if(!(match_string(i_81, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm r_7 (ATerm t)
                                                      {
                                                        ATerm j_81 = NULL;
                                                        j_81 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_81));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, q_7, r_7);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = y_18;
                                                      {
                                                        ATerm z_18 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm v_7 (ATerm t)
                                                            {
                                                              ATerm l_81 = NULL;
                                                              l_81 = t;
                                                              n_80 :
                                                              if(!(match_string(l_81, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm x_7 (ATerm t)
                                                            {
                                                              ATerm m_81 = NULL;
                                                              m_81 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_81));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, v_7, x_7);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = z_18;
                                                            {
                                                              ATerm a_19 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm y_7 (ATerm t)
                                                                  {
                                                                    ATerm o_81 = NULL;
                                                                    o_81 = t;
                                                                    p_80 :
                                                                    if(!(match_string(o_81, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm z_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, y_7, z_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = a_19;
                                                                  {
                                                                    ATerm m_19 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm a_8 (ATerm t)
                                                                        {
                                                                          ATerm p_81 = NULL;
                                                                          p_81 = t;
                                                                          q_80 :
                                                                          if(!(match_string(p_81, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm e_8 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, a_8, e_8);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_19;
                                                                        {
                                                                          ATerm n_19 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm f_8 (ATerm t)
                                                                              {
                                                                                ATerm q_81 = NULL;
                                                                                q_81 = t;
                                                                                r_80 :
                                                                                if(!(match_string(q_81, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm g_8 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, f_8, g_8);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_19;
                                                                              {
                                                                                ATerm o_19 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm k_8 (ATerm t)
                                                                                    {
                                                                                      ATerm r_81 = NULL;
                                                                                      r_81 = t;
                                                                                      s_80 :
                                                                                      if(!(match_string(r_81, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm l_8 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, k_8, l_8);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_19;
                                                                                    {
                                                                                      ATerm m_8 (ATerm t)
                                                                                      {
                                                                                        ATerm s_81 = NULL;
                                                                                        s_81 = t;
                                                                                        t_80 :
                                                                                        if(!(match_string(s_81, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm n_8 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, m_8, n_8);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym_Cons_2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_82)), not_null(c_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  j_82 :
  if(match_cons(k_82, sym_Cons_2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      {
        ATerm p_82 = NULL;
        t = not_null(l_82);
        {
          ATerm r_82 = NULL;
          t = b_58(t);
          p_82 = t;
          t = not_null(m_82);
          t = c_58(t);
          r_82 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_82), not_null(r_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm x_82 = NULL;
  x_82 = t;
  w_82 :
  if(!(match_cons(x_82, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm a_83 = NULL;
    a_83 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_83));
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    ATerm p_19 = t;
    if(PushChoice()==0)
      {
        ATerm i_20 = t;
        if(PushChoice()==0)
          {
            ATerm c_83 = NULL;
            c_83 = t;
            z_82 :
            if(!(match_cons(c_83, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = i_20;
            t = a_60(t);
            t = Cons_2(t, _id, y_8);
          }
        PopChoice();
      }
    else
      {
        t = p_19;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, x_8, y_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm), ATerm v_60 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm k_20 = t;
    if(PushChoice()==0)
      {
        t = u_60(t);
        PopChoice();
      }
    else
      {
        t = k_20;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_9);
  t = store_options_0(t);
  {
    ATerm l_20 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, v_60);
        PopChoice();
      }
    else
      {
        t = l_20;
        {
          ATerm m_20 = t;
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
              t = m_20;
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
  ATerm c_9 (ATerm t)
  {
    ATerm d_9 (ATerm t)
    {
      ATerm e_9 (ATerm t)
      {
        ATerm g_83 = NULL;
        g_83 = t;
        f_83 :
        if(!(match_cons(g_83, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, l_60, e_9);
      return(t);
    }
    t = TCons_2(t, _id, d_9);
    return(t);
  }
  t = iowrap_2(t, c_9, _fail);
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
