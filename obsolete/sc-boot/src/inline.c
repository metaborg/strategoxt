#include <stratego.h>
#include <stratego-lib.h>
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
ATerm rewrite_1 (ATerm, ATerm v_63 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm u_77 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm u_81 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_58 (ATerm), ATerm h_58 (ATerm));
ATerm Let_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm q_81 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_57 (ATerm));
ATerm tboundin_3 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm for_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm HdMember_1 (ATerm, ATerm y_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_57 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm s_68 (ATerm), ATerm t_68 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm g_68 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_67 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_67 (ATerm));
ATerm rename_4 (ATerm, ATerm u_68 (ATerm, ATerm (ATerm)), ATerm v_68 (ATerm), ATerm w_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_68 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_63 (ATerm));
ATerm restore_always_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_63 (ATerm));
ATerm scope_2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_63 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm));
ATerm crush_3 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Choice_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm Cong_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm Match_1 (ATerm, ATerm g_59 (ATerm));
ATerm Seq_2 (ATerm, ATerm z_57 (ATerm), ATerm a_58 (ATerm));
ATerm Scope_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm Build_1 (ATerm, ATerm h_59 (ATerm));
ATerm SVar_1 (ATerm, ATerm f_58 (ATerm));
ATerm Call_2 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm k_79 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm m_58 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm zip_1 (ATerm, ATerm m_73 (ATerm));
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
ATerm downup_1 (ATerm, ATerm y_77 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm o_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_57 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_61 (ATerm));
ATerm map_1 (ATerm, ATerm z_74 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_64 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_61 (ATerm));
ATerm Program_1 (ATerm, ATerm q_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_61 (ATerm));
ATerm Option_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_62 (ATerm));
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
ATerm rewrite_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm k_3 = NULL;
  ATerm m_3 = NULL;
  k_3 = t;
  {
    ATerm n_3 = NULL;
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    t = v_63(t);
    n_3 = t;
    if(m_3 != NULL && m_3 != n_3)
      _fail(n_3);
    else
      m_3 = n_3;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_3), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_3), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_lookup_0(t);
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  w_3 = t;
  u_3 :
  if(match_cons(w_3, sym_Call_2))
    {
      x_3 = ATgetArgument(w_3, 0);
      z_3 = ATgetArgument(w_3, 1);
      v_3 :
      if(match_cons(x_3, sym_SVar_1))
        {
          y_3 = ATgetArgument(x_3, 0);
          {
            ATerm c_4 = NULL;
            ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_3));
            {
              ATerm a_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                return(t);
              }
              t = rewrite_1(t, a_0);
              d_4 = t;
              s_3 :
              if(match_cons(d_4, sym_Defined_2))
                {
                  e_4 = ATgetArgument(d_4, 0);
                  f_4 = ATgetArgument(d_4, 1);
                  t_3 :
                  if(match_string(e_4, "g_0"))
                    {
                      if(c_4 != NULL && c_4 != f_4)
                        _fail(f_4);
                      else
                        c_4 = f_4;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_4)), not_null(z_3));
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
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  p_4 = t;
  m_4 :
  if(match_cons(p_4, sym_Call_2))
    {
      q_4 = ATgetArgument(p_4, 0);
      s_4 = ATgetArgument(p_4, 1);
      n_4 :
      if(match_cons(q_4, sym_SVar_1))
        {
          r_4 = ATgetArgument(q_4, 0);
          o_4 :
          if(match_cons(s_4, sym_Nil_0))
            {
              ATerm u_4 = NULL;
              ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_4));
              {
                ATerm b_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                  return(t);
                }
                t = rewrite_1(t, b_0);
                v_4 = t;
                k_4 :
                if(match_cons(v_4, sym_Defined_2))
                  {
                    w_4 = ATgetArgument(v_4, 0);
                    x_4 = ATgetArgument(v_4, 1);
                    l_4 :
                    if(match_string(w_4, "f_0"))
                      {
                        if(u_4 != NULL && u_4 != x_4)
                          _fail(x_4);
                        else
                          u_4 = x_4;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              t = not_null(u_4);
              t = strename_0(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    t = u_77(t);
    t = _all(t, a_5);
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  u_5 = t;
  d_5 :
  if(match_cons(u_5, sym_TCons_2))
    {
      v_5 = ATgetArgument(u_5, 0);
      c_6 = ATgetArgument(u_5, 1);
      e_5 :
      if(match_cons(v_5, sym_VarDec_2))
        {
          w_5 = ATgetArgument(v_5, 0);
          x_5 = ATgetArgument(v_5, 1);
          f_5 :
          if(match_cons(x_5, sym_FunType_2))
            {
              y_5 = ATgetArgument(x_5, 0);
              b_6 = ATgetArgument(x_5, 1);
              g_5 :
              if(match_cons(y_5, sym_Cons_2))
                {
                  z_5 = ATgetArgument(y_5, 0);
                  a_6 = ATgetArgument(y_5, 1);
                  h_5 :
                  if(match_cons(a_6, sym_Cons_2))
                    {
                      p_5 = ATgetArgument(a_6, 0);
                      q_5 = ATgetArgument(a_6, 1);
                      i_5 :
                      if(match_cons(c_6, sym_TCons_2))
                        {
                          d_6 = ATgetArgument(c_6, 0);
                          e_6 = ATgetArgument(c_6, 1);
                          j_5 :
                          if(match_cons(d_6, sym_Call_2))
                            {
                              r_5 = ATgetArgument(d_6, 0);
                              t_5 = ATgetArgument(d_6, 1);
                              k_5 :
                              if(match_cons(r_5, sym_SVar_1))
                                {
                                  s_5 = ATgetArgument(r_5, 0);
                                  l_5 :
                                  if(match_cons(t_5, sym_Nil_0))
                                    {
                                      m_5 :
                                      if(match_cons(e_6, sym_TNil_0))
                                        {
                                          ATerm k_11;
                                          k_11 = t;
                                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_5)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue)), not_null(s_5)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
                                              return(t);
                                            }
                                            t = assert_1(t, c_0);
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
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(a_6, sym_Nil_0))
                        {
                          n_5 :
                          if(match_cons(c_6, sym_TCons_2))
                            {
                              d_6 = ATgetArgument(c_6, 0);
                              e_6 = ATgetArgument(c_6, 1);
                              o_5 :
                              if(match_cons(e_6, sym_TNil_0))
                                {
                                  ATerm p_11;
                                  p_11 = t;
                                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_5)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue)), not_null(d_6)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  {
                                    ATerm n_0 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
                                      return(t);
                                    }
                                    t = assert_1(t, n_0);
                                  }
                                  t = p_11;
                                }
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
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
      t_6 = t;
      m_6 :
      if(match_cons(t_6, sym_TCons_2))
        {
          u_6 = ATgetArgument(t_6, 0);
          v_6 = ATgetArgument(t_6, 1);
          n_6 :
          if(match_cons(v_6, sym_TCons_2))
            {
              w_6 = ATgetArgument(v_6, 0);
              x_6 = ATgetArgument(v_6, 1);
              o_6 :
              if(match_cons(x_6, sym_TCons_2))
                {
                  y_6 = ATgetArgument(x_6, 0);
                  z_6 = ATgetArgument(x_6, 1);
                  p_6 :
                  if(match_cons(z_6, sym_TNil_0))
                    {
                      if(q_6 != NULL && q_6 != u_6)
                        _fail(u_6);
                      else
                        q_6 = u_6;
                      if(r_6 != NULL && r_6 != w_6)
                        _fail(w_6);
                      else
                        r_6 = w_6;
                      if(s_6 != NULL && s_6 != y_6)
                        _fail(y_6);
                      else
                        s_6 = y_6;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_6), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_6), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, substitute_arg_0);
                      t = not_null(s_6);
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm t_0 (ATerm t)
                          {
                            ATerm q_11 = t;
                            if(PushChoice()==0)
                              {
                                t = SubsArgCall1_0(t);
                                PopChoice();
                              }
                            else
                              {
                                t = q_11;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, t_0);
                          return(t);
                        }
                        t = topdown_1(t, s_0);
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
    t = scope_2(t, q_0, r_0);
    return(t);
  }
  t = scope_2(t, o_0, p_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_Cons_2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      t = not_null(e_7);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm r_11 = t;
  if(PushChoice()==0)
    {
      ATerm u_0 (ATerm t)
      {
        t = split_2(t, _id, u_81);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
            t_7 = t;
            k_7 :
            if(match_cons(t_7, sym_TCons_2))
              {
                u_7 = ATgetArgument(t_7, 0);
                y_7 = ATgetArgument(t_7, 1);
                l_7 :
                if(match_cons(u_7, sym_SDef_3))
                  {
                    v_7 = ATgetArgument(u_7, 0);
                    w_7 = ATgetArgument(u_7, 1);
                    x_7 = ATgetArgument(u_7, 2);
                    m_7 :
                    if(match_cons(y_7, sym_TCons_2))
                      {
                        z_7 = ATgetArgument(y_7, 0);
                        a_8 = ATgetArgument(y_7, 1);
                        n_7 :
                        if(match_cons(a_8, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_7), not_null(w_7), not_null(x_7));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, v_0);
        }
        return(t);
      }
      t = Let_2(t, u_0, _id);
      PopChoice();
    }
  else
    {
      t = r_11;
      {
        ATerm s_11 = t;
        if(PushChoice()==0)
          {
            ATerm w_0 (ATerm t)
            {
              t = split_2(t, _id, u_81);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
                  e_8 = t;
                  p_7 :
                  if(match_cons(e_8, sym_TCons_2))
                    {
                      f_8 = ATgetArgument(e_8, 0);
                      i_8 = ATgetArgument(e_8, 1);
                      q_7 :
                      if(match_cons(f_8, sym_VarDec_2))
                        {
                          g_8 = ATgetArgument(f_8, 0);
                          h_8 = ATgetArgument(f_8, 1);
                          r_7 :
                          if(match_cons(i_8, sym_TCons_2))
                            {
                              j_8 = ATgetArgument(i_8, 0);
                              k_8 = ATgetArgument(i_8, 1);
                              s_7 :
                              if(match_cons(k_8, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_8), not_null(h_8));
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, x_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, w_0, _id);
            PopChoice();
          }
        else
          {
            t = s_11;
            {
              ATerm y_0 (ATerm t)
              {
                t = u_81(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, y_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_58 (ATerm), ATerm h_58 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Rec_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm z_8 = NULL;
        t = not_null(v_8);
        {
          ATerm b_9 = NULL;
          t = g_58(t);
          z_8 = t;
          t = not_null(w_8);
          t = h_58(t);
          b_9 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(z_8), not_null(b_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Let_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm p_9 = NULL;
        t = not_null(l_9);
        {
          ATerm r_9 = NULL;
          t = i_58(t);
          p_9 = t;
          t = not_null(m_9);
          t = j_58(t);
          r_9 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_9), not_null(r_9));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm))
{
  ATerm t_11 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, v_81, v_81);
      PopChoice();
    }
  else
    {
      t = t_11;
      {
        ATerm u_11 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, x_81, x_81, v_81);
            PopChoice();
          }
        else
          {
            t = u_11;
            t = Rec_2(t, x_81, v_81);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym_Rec_2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_9), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym_SDef_3))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      l_10 = ATgetArgument(i_10, 2);
      t = not_null(k_10);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm r_10 = NULL,s_10 = NULL,y_10 = NULL;
          r_10 = t;
          g_10 :
          if(match_cons(r_10, sym_VarDec_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              y_10 = ATgetArgument(r_10, 1);
              t = not_null(s_10);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, z_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym_Let_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      t = not_null(h_11);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
          l_11 = t;
          e_11 :
          if(match_cons(l_11, sym_SDef_3))
            {
              m_11 = ATgetArgument(l_11, 0);
              n_11 = ATgetArgument(l_11, 1);
              o_11 = ATgetArgument(l_11, 2);
              t = not_null(m_11);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, a_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm v_11 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = v_11;
        {
          ATerm z_11 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = z_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, b_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm q_81 (ATerm))
{
  t = Scope_2(t, q_81, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym_DynamicRules_1))
    {
      y_11 = ATgetArgument(x_11, 0);
      {
        ATerm a_12 = NULL;
        t = not_null(y_11);
        t = e_57(t);
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(a_12));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm b_12 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, t_81, r_81);
      PopChoice();
    }
  else
    {
      t = b_12;
      t = DynamicRules_1(t, r_81);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_DynamicRules_1))
    {
      h_12 = ATgetArgument(g_12, 0);
      t = not_null(h_12);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_Var_1))
    {
      n_12 = ATgetArgument(m_12, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_12), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm m_13 = NULL,r_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  m_13 = t;
  r_12 :
  if(match_cons(m_13, sym_TCons_2))
    {
      r_13 = ATgetArgument(m_13, 0);
      b_14 = ATgetArgument(m_13, 1);
      s_12 :
      if(match_cons(b_14, sym_TCons_2))
        {
          c_14 = ATgetArgument(b_14, 0);
          d_14 = ATgetArgument(b_14, 1);
          l_13 :
          if(match_cons(d_14, sym_TNil_0))
            {
              t = not_null(r_13);
              {
                ATerm h_14 (ATerm t)
                {
                  ATerm c_12 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(c_14);
                      PopChoice();
                    }
                  else
                    {
                      t = c_12;
                      {
                        ATerm d_12 = t;
                        if(PushChoice()==0)
                          {
                            ATerm c_1 (ATerm t)
                            {
                              t = not_null(c_14);
                              return(t);
                            }
                            t = HdMember_1(t, c_1);
                            t = h_14(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_12;
                            t = Cons_2(t, _id, h_14);
                          }
                      }
                    }
                  return(t);
                }
                t = h_14(t);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  n_14 = t;
  j_14 :
  if(match_cons(n_14, sym_TCons_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      k_14 :
      if(match_cons(p_14, sym_TCons_2))
        {
          q_14 = ATgetArgument(p_14, 0);
          t_14 = ATgetArgument(p_14, 1);
          l_14 :
          if(match_cons(q_14, sym_Cons_2))
            {
              r_14 = ATgetArgument(q_14, 0);
              s_14 = ATgetArgument(q_14, 1);
              m_14 :
              if(match_cons(t_14, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_14), not_null(o_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_14), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  o_15 = t;
  k_15 :
  if(match_cons(o_15, sym_Cons_2))
    {
      p_15 = ATgetArgument(o_15, 0);
      u_15 = ATgetArgument(o_15, 1);
      l_15 :
      if(match_cons(p_15, sym_TCons_2))
        {
          q_15 = ATgetArgument(p_15, 0);
          r_15 = ATgetArgument(p_15, 1);
          m_15 :
          if(match_cons(r_15, sym_TCons_2))
            {
              s_15 = ATgetArgument(r_15, 0);
              t_15 = ATgetArgument(r_15, 1);
              n_15 :
              if(match_cons(t_15, sym_TNil_0))
                {
                  ATerm y_15 = NULL,z_15 = NULL,h_16 = NULL,p_16 = NULL;
                  ATerm e_12;
                  e_12 = t;
                  {
                    ATerm a_16 = NULL;
                    ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
                    t = not_null(s_15);
                    a_16 = t;
                    t = SSL_explode_term(not_null(a_16));
                    c_16 = t;
                    b_15 :
                    if(match_cons(c_16, sym_TCons_2))
                      {
                        d_16 = ATgetArgument(c_16, 0);
                        e_16 = ATgetArgument(c_16, 1);
                        c_15 :
                        if(match_cons(e_16, sym_TCons_2))
                          {
                            f_16 = ATgetArgument(e_16, 0);
                            g_16 = ATgetArgument(e_16, 1);
                            d_15 :
                            if(match_cons(g_16, sym_TNil_0))
                              {
                                if(y_15 != NULL && y_15 != d_16)
                                  _fail(d_16);
                                else
                                  y_15 = d_16;
                                if(z_15 != NULL && z_15 != f_16)
                                  _fail(f_16);
                                else
                                  z_15 = f_16;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = e_12;
                  {
                    ATerm i_12;
                    i_12 = t;
                    {
                      ATerm i_16 = NULL;
                      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
                      t = not_null(q_15);
                      i_16 = t;
                      t = SSL_explode_term(not_null(i_16));
                      k_16 = t;
                      g_15 :
                      if(match_cons(k_16, sym_TCons_2))
                        {
                          l_16 = ATgetArgument(k_16, 0);
                          m_16 = ATgetArgument(k_16, 1);
                          h_15 :
                          if(match_cons(m_16, sym_TCons_2))
                            {
                              n_16 = ATgetArgument(m_16, 0);
                              o_16 = ATgetArgument(m_16, 1);
                              i_15 :
                              if(match_cons(o_16, sym_TNil_0))
                                {
                                  if(y_15 != NULL && y_15 != l_16)
                                    _fail(l_16);
                                  else
                                    y_15 = l_16;
                                  if(h_16 != NULL && h_16 != n_16)
                                    _fail(n_16);
                                  else
                                    h_16 = n_16;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    t = i_12;
                    {
                      ATerm q_16 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_15), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      q_16 = t;
                      if(p_16 != NULL && p_16 != q_16)
                        _fail(q_16);
                      else
                        p_16 = q_16;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_16), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_15), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL;
  c_17 = t;
  y_16 :
  if(match_cons(c_17, sym_Cons_2))
    {
      d_17 = ATgetArgument(c_17, 0);
      j_17 = ATgetArgument(c_17, 1);
      z_16 :
      if(match_cons(d_17, sym_TCons_2))
        {
          e_17 = ATgetArgument(d_17, 0);
          f_17 = ATgetArgument(d_17, 1);
          a_17 :
          if(match_cons(f_17, sym_TCons_2))
            {
              g_17 = ATgetArgument(f_17, 0);
              i_17 = ATgetArgument(f_17, 1);
              b_17 :
              if(match_cons(i_17, sym_TNil_0))
                {
                  ATerm l_17 = NULL;
                  if(e_17 != NULL && e_17 != g_17)
                    _fail(g_17);
                  else
                    e_17 = g_17;
                  if(l_17 != NULL && l_17 != j_17)
                    _fail(j_17);
                  else
                    l_17 = j_17;
                  t = not_null(l_17);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm n_17 (ATerm t)
  {
    ATerm j_12 = t;
    if(PushChoice()==0)
      {
        t = i_65(t);
        PopChoice();
      }
    else
      {
        t = j_12;
        t = j_65(t);
        t = n_17(t);
      }
    return(t);
  }
  t = n_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  t = l_65(t);
  t = while_not_2(t, m_65, n_65);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm y_70 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_Cons_2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      t = y_70(t);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm w_17 = NULL;
          w_17 = t;
          if(s_17 != NULL && s_17 != w_17)
            _fail(w_17);
          else
            s_17 = w_17;
          return(t);
        }
        t = fetch_1(t, d_1);
      }
      t = not_null(t_17);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_12 = t;
  if(PushChoice()==0)
    {
      ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
      e_18 = t;
      a_18 :
      if(match_cons(e_18, sym_TCons_2))
        {
          f_18 = ATgetArgument(e_18, 0);
          g_18 = ATgetArgument(e_18, 1);
          b_18 :
          if(match_cons(g_18, sym_TCons_2))
            {
              h_18 = ATgetArgument(g_18, 0);
              i_18 = ATgetArgument(g_18, 1);
              c_18 :
              if(match_cons(i_18, sym_TNil_0))
                {
                  t = not_null(f_18);
                  {
                    ATerm o_18 (ATerm t)
                    {
                      ATerm o_12 = t;
                      if(PushChoice()==0)
                        {
                          t = Nil_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = o_12;
                          {
                            ATerm p_12 = t;
                            if(PushChoice()==0)
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = not_null(h_18);
                                  return(t);
                                }
                                t = HdMember_1(t, e_1);
                                t = o_18(t);
                                PopChoice();
                              }
                            else
                              {
                                t = p_12;
                                t = Cons_2(t, _id, o_18);
                              }
                          }
                        }
                      return(t);
                    }
                    t = o_18(t);
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
      t = k_12;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm l_18 = NULL;
          l_18 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_18), (ATerm) ATmakeAppl(sym_TNil_0)));
          return(t);
        }
        ATerm g_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            t = TCons_2(t, Nil_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, i_1);
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          ATerm q_12 = t;
          if(PushChoice()==0)
            {
              ATerm j_1 (ATerm t)
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm t_12 = t;
                  if(PushChoice()==0)
                    {
                      t = UfIdem_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_12;
                      t = UfDecompose_0(t);
                    }
                  return(t);
                }
                t = TCons_2(t, k_1, TNil_0);
                return(t);
              }
              t = TCons_2(t, _id, j_1);
              PopChoice();
            }
          else
            {
              t = q_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, f_1, g_1, h_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_18 (ATerm t)
  {
    ATerm u_12 = t;
    if(PushChoice()==0)
      {
        t = t_66(t);
        PopChoice();
      }
    else
      {
        t = u_12;
        {
          ATerm v_12 = t;
          if(PushChoice()==0)
            {
              ATerm r_18 = NULL;
              ATerm w_12;
              w_12 = t;
              {
                ATerm s_18 = NULL;
                t = u_66(t);
                s_18 = t;
                if(r_18 != NULL && r_18 != s_18)
                  _fail(s_18);
                else
                  r_18 = s_18;
              }
              t = w_12;
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = not_null(r_18);
                    return(t);
                  }
                  t = split_2(t, t_18, n_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm m_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = v_66(t, l_1, t_18, m_1);
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, o_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = v_12;
              {
                ATerm p_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, p_1, union_0, t_18);
              }
            }
        }
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm x_12 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = x_12;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  x_18 :
  if(match_cons(c_19, sym_LRule_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      y_18 :
      if(match_cons(d_19, sym_Rule_3))
        {
          z_18 = ATgetArgument(d_19, 0);
          a_19 = ATgetArgument(d_19, 1);
          b_19 = ATgetArgument(d_19, 2);
          t = not_null(z_18);
          t = tvars_0(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(c_19, sym_Scope_2))
        {
          d_19 = ATgetArgument(c_19, 0);
          e_19 = ATgetArgument(c_19, 1);
          t = not_null(d_19);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Var_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_19 = NULL;
        t = not_null(q_19);
        t = r_57(t);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_19));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  d_20 = t;
  z_19 :
  if(match_cons(d_20, sym_TCons_2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      a_20 :
      if(match_cons(f_20, sym_TCons_2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          b_20 :
          if(match_cons(h_20, sym_TCons_2))
            {
              i_20 = ATgetArgument(h_20, 0);
              j_20 = ATgetArgument(h_20, 1);
              c_20 :
              if(match_cons(j_20, sym_TNil_0))
                {
                  t = not_null(e_20);
                  {
                    ATerm r_1 (ATerm t)
                    {
                      ATerm n_20 = NULL;
                      n_20 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = m_68(t);
                      return(t);
                    }
                    ATerm s_1 (ATerm t)
                    {
                      ATerm p_20 = NULL;
                      p_20 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_20), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_20), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = m_68(t);
                      return(t);
                    }
                    t = n_68(t, r_1, s_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm s_68 (ATerm), ATerm t_68 (ATerm, ATerm (ATerm)))
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  u_21 :
  if(match_cons(x_21, sym_TCons_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      v_21 :
      if(match_cons(z_21, sym_TCons_2))
        {
          a_22 = ATgetArgument(z_21, 0);
          b_22 = ATgetArgument(z_21, 1);
          w_21 :
          if(match_cons(b_22, sym_TNil_0))
            {
              ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,m_22 = NULL;
              ATerm y_12;
              y_12 = t;
              {
                ATerm h_22 = NULL;
                t = not_null(y_21);
                {
                  ATerm i_22 = NULL;
                  t = s_68(t);
                  h_22 = t;
                  if(e_22 != NULL && e_22 != h_22)
                    _fail(h_22);
                  else
                    e_22 = h_22;
                  {
                    ATerm j_22 = NULL,l_22 = NULL;
                    t = map_1(t, new_0);
                    i_22 = t;
                    if(f_22 != NULL && f_22 != i_22)
                      _fail(i_22);
                    else
                      f_22 = i_22;
                    {
                      ATerm k_22 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      k_22 = t;
                      if(j_22 != NULL && j_22 != k_22)
                        _fail(k_22);
                      else
                        j_22 = k_22;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = conc_0(t);
                      l_22 = t;
                      if(g_22 != NULL && g_22 != l_22)
                        _fail(l_22);
                      else
                        g_22 = l_22;
                    }
                  }
                }
              }
              t = y_12;
              {
                ATerm n_22 = NULL;
                t = not_null(y_21);
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = not_null(f_22);
                    return(t);
                  }
                  t = t_68(t, t_1);
                  n_22 = t;
                  if(m_22 != NULL && m_22 != n_22)
                    _fail(n_22);
                  else
                    m_22 = n_22;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_22), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_22), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  z_22 = t;
  v_22 :
  if(match_cons(z_22, sym_TCons_2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      w_22 :
      if(match_cons(b_23, sym_TCons_2))
        {
          c_23 = ATgetArgument(b_23, 0);
          f_23 = ATgetArgument(b_23, 1);
          x_22 :
          if(match_cons(c_23, sym_Cons_2))
            {
              d_23 = ATgetArgument(c_23, 0);
              e_23 = ATgetArgument(c_23, 1);
              y_22 :
              if(match_cons(f_23, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_23), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_23), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  r_23 = t;
  k_23 :
  if(match_cons(r_23, sym_TCons_2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      l_23 :
      if(match_cons(t_23, sym_TCons_2))
        {
          u_23 = ATgetArgument(t_23, 0);
          b_24 = ATgetArgument(t_23, 1);
          m_23 :
          if(match_cons(u_23, sym_Cons_2))
            {
              v_23 = ATgetArgument(u_23, 0);
              a_24 = ATgetArgument(u_23, 1);
              n_23 :
              if(match_cons(v_23, sym_TCons_2))
                {
                  w_23 = ATgetArgument(v_23, 0);
                  x_23 = ATgetArgument(v_23, 1);
                  o_23 :
                  if(match_cons(x_23, sym_TCons_2))
                    {
                      y_23 = ATgetArgument(x_23, 0);
                      z_23 = ATgetArgument(x_23, 1);
                      p_23 :
                      if(match_cons(z_23, sym_TNil_0))
                        {
                          q_23 :
                          if(match_cons(b_24, sym_TNil_0))
                            {
                              ATerm d_24 = NULL;
                              if(s_23 != NULL && s_23 != w_23)
                                _fail(w_23);
                              else
                                s_23 = w_23;
                              if(d_24 != NULL && d_24 != y_23)
                                _fail(y_23);
                              else
                                d_24 = y_23;
                              t = not_null(d_24);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_12 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_12;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm g_68 (ATerm, ATerm (ATerm)))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  l_25 = t;
  q_24 :
  if(match_cons(l_25, sym_TCons_2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      r_24 :
      if(match_cons(n_25, sym_TCons_2))
        {
          o_25 = ATgetArgument(n_25, 0);
          p_25 = ATgetArgument(n_25, 1);
          k_25 :
          if(match_cons(p_25, sym_TNil_0))
            {
              t = not_null(m_25);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = not_null(o_25);
                    return(t);
                  }
                  t = split_2(t, _id, v_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = g_68(t, u_1);
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
ATerm all_dist_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  y_25 = t;
  v_25 :
  if(match_cons(y_25, sym_TCons_2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      w_25 :
      if(match_cons(a_26, sym_TCons_2))
        {
          b_26 = ATgetArgument(a_26, 0);
          c_26 = ATgetArgument(a_26, 1);
          x_25 :
          if(match_cons(c_26, sym_TNil_0))
            {
              t = not_null(z_25);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm m_26 = NULL;
                  m_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_26), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_26), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = o_67(t);
                  return(t);
                }
                t = _all(t, w_1);
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
ATerm env_alltd_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm q_26 (ATerm t)
  {
    ATerm a_13 = t;
    if(PushChoice()==0)
      {
        t = t_67(t);
        PopChoice();
      }
    else
      {
        t = a_13;
        t = all_dist_1(t, q_26);
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm u_68 (ATerm, ATerm (ATerm)), ATerm v_68 (ATerm), ATerm w_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_68 (ATerm, ATerm (ATerm)))
{
  ATerm s_26 = NULL;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_26), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm a_27 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm b_13 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, u_68);
            PopChoice();
          }
        else
          {
            t = b_13;
            t = RnBinding_2(t, v_68, x_68);
            t = DistBinding_2(t, a_27, w_68);
          }
        return(t);
      }
      t = env_alltd_1(t, x_1);
      return(t);
    }
    t = a_27(t);
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
ATerm InlineCall_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  ATerm c_31 (ATerm t)
  {
    ATerm t_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_28));
    {
      ATerm y_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, y_1);
      t_28 = t;
      j_27 :
      if(match_cons(t_28, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    return(t);
  }
  ATerm d_31 (ATerm t)
  {
    ATerm v_28 = NULL,z_28 = NULL,a_29 = NULL,t_29 = NULL;
    ATerm u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_28));
    {
      ATerm z_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, z_1);
      u_29 = t;
      p_27 :
      if(match_cons(u_29, sym_Defined_3))
        {
          v_29 = ATgetArgument(u_29, 0);
          x_29 = ATgetArgument(u_29, 1);
          y_29 = ATgetArgument(u_29, 2);
          r_27 :
          if(match_string(v_29, "e_0"))
            {
              ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
              if(v_28 != NULL && v_28 != x_29)
                _fail(x_29);
              else
                v_28 = x_29;
              if(h_28 != NULL && h_28 != y_29)
                _fail(y_29);
              else
                h_28 = y_29;
              t = not_null(v_28);
              t = strename_0(t);
              z_29 = t;
              n_27 :
              if(match_cons(z_29, sym_SDef_3))
                {
                  a_30 = ATgetArgument(z_29, 0);
                  b_30 = ATgetArgument(z_29, 1);
                  e_30 = ATgetArgument(z_29, 2);
                  o_27 :
                  if(match_cons(b_30, sym_Cons_2))
                    {
                      c_30 = ATgetArgument(b_30, 0);
                      d_30 = ATgetArgument(b_30, 1);
                      {
                        ATerm f_30 = NULL;
                        if(h_28 != NULL && h_28 != a_30)
                          _fail(a_30);
                        else
                          h_28 = a_30;
                        if(z_28 != NULL && z_28 != b_30)
                          _fail(b_30);
                        else
                          z_28 = b_30;
                        if(a_29 != NULL && a_29 != e_30)
                          _fail(e_30);
                        else
                          a_29 = e_30;
                        t = new_0(t);
                        f_30 = t;
                        if(t_29 != NULL && t_29 != f_30)
                          _fail(f_30);
                        else
                          t_29 = f_30;
                        {
                          ATerm c_13;
                          c_13 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_28)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                          {
                            ATerm a_2 (ATerm t)
                            {
                              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                              return(t);
                            }
                            t = assert_1(t, a_2);
                          }
                          t = c_13;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(t_29), not_null(z_28), not_null(a_29)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_29)), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  ATerm e_31 (ATerm t)
  {
    ATerm h_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_28));
    {
      ATerm b_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, b_2);
      h_30 = t;
      t_27 :
      if(match_cons(h_30, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    return(t);
  }
  ATerm f_31 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
    ATerm o_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_28));
    {
      ATerm c_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, c_2);
      o_30 = t;
      y_27 :
      if(match_cons(o_30, sym_Defined_3))
        {
          r_30 = ATgetArgument(o_30, 0);
          s_30 = ATgetArgument(o_30, 1);
          t_30 = ATgetArgument(o_30, 2);
          z_27 :
          if(match_string(r_30, "d_0"))
            {
              ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
              if(k_30 != NULL && k_30 != s_30)
                _fail(s_30);
              else
                k_30 = s_30;
              if(h_28 != NULL && h_28 != t_30)
                _fail(t_30);
              else
                h_28 = t_30;
              t = not_null(k_30);
              t = strename_0(t);
              u_30 = t;
              x_27 :
              if(match_cons(u_30, sym_SDef_3))
                {
                  v_30 = ATgetArgument(u_30, 0);
                  w_30 = ATgetArgument(u_30, 1);
                  x_30 = ATgetArgument(u_30, 2);
                  {
                    ATerm y_30 = NULL;
                    if(h_28 != NULL && h_28 != v_30)
                      _fail(v_30);
                    else
                      h_28 = v_30;
                    if(l_30 != NULL && l_30 != w_30)
                      _fail(w_30);
                    else
                      l_30 = w_30;
                    if(m_30 != NULL && m_30 != x_30)
                      _fail(x_30);
                    else
                      m_30 = x_30;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_30), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_28), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_30), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = substitute_args_0(t);
                    y_30 = t;
                    if(n_30 != NULL && n_30 != y_30)
                      _fail(y_30);
                    else
                      n_30 = y_30;
                    {
                      ATerm d_13;
                      d_13 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_28)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      {
                        ATerm d_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
                          return(t);
                        }
                        t = assert_1(t, d_2);
                      }
                      t = d_13;
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
    t = not_null(n_30);
    return(t);
  }
  ATerm g_31 (ATerm t)
  {
    ATerm b_31 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_28));
    {
      ATerm e_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, e_2);
      b_31 = t;
      b_28 :
      if(match_cons(b_31, sym_Undefined_0))
        _fail(t);
      else
        _fail(t);
    }
    t = (ATerm) ATmakeAppl(sym_TNil_0);
    return(t);
  }
  f_28 = t;
  c_28 :
  if(match_cons(f_28, sym_Call_2))
    {
      g_28 = ATgetArgument(f_28, 0);
      i_28 = ATgetArgument(f_28, 1);
      d_28 :
      if(match_cons(g_28, sym_SVar_1))
        {
          h_28 = ATgetArgument(g_28, 0);
          e_28 :
          if(match_cons(i_28, sym_Nil_0))
            {
              ATerm e_13 = t;
              if(PushChoice()==0)
                {
                  t = c_31(t);
                  PopChoice();
                }
              else
                {
                  t = e_13;
                  {
                    ATerm f_13 = t;
                    if(PushChoice()==0)
                      {
                        t = d_31(t);
                        PopChoice();
                      }
                    else
                      {
                        t = f_13;
                        {
                          ATerm g_13 = t;
                          if(PushChoice()==0)
                            {
                              t = e_31(t);
                              PopChoice();
                            }
                          else
                            {
                              t = g_13;
                              {
                                ATerm h_13 = t;
                                if(PushChoice()==0)
                                  {
                                    t = f_31(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = h_13;
                                    t = g_31(t);
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
              ATerm i_13 = t;
              if(PushChoice()==0)
                {
                  t = c_31(t);
                  PopChoice();
                }
              else
                {
                  t = i_13;
                  {
                    ATerm j_13 = t;
                    if(PushChoice()==0)
                      {
                        t = e_31(t);
                        PopChoice();
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm k_13 = t;
                          if(PushChoice()==0)
                            {
                              t = f_31(t);
                              PopChoice();
                            }
                          else
                            {
                              t = k_13;
                              t = g_31(t);
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
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_SDef_3))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      x_31 = ATgetArgument(u_31, 2);
      {
        ATerm n_13;
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_31)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Undefined_0), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm f_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, f_2);
        }
        t = n_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_Cons_2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      t = not_null(e_32);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,t_32 = NULL;
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
          t_32 = ATgetArgument(p_32, 1);
          m_32 :
          if(match_cons(t_32, sym_TNil_0))
            {
              ATerm o_13;
              o_13 = t;
              {
                ATerm w_32 = NULL;
                ATerm x_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_32), (ATerm) ATmakeAppl(sym_TNil_0)));
                {
                  ATerm p_13 = t;
                  if(PushChoice()==0)
                    {
                      t = table_get_0(t);
                      t = Tl_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = p_13;
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                    }
                  x_32 = t;
                  if(w_32 != NULL && w_32 != x_32)
                    _fail(x_32);
                  else
                    w_32 = x_32;
                }
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_32), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_32), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_put_0(t);
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
ATerm end_scope_1 (ATerm t, ATerm q_63 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    ATerm h_33 = NULL;
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
    t = q_63(t);
    h_33 = t;
    if(f_33 != NULL && f_33 != h_33)
      _fail(h_33);
    else
      f_33 = h_33;
    {
      ATerm s_13 = t;
      if(PushChoice()==0)
        {
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = table_get_0(t);
          PopChoice();
        }
      else
        {
          t = s_13;
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
            ATerm g_2 (ATerm t)
            {
              ATerm l_33 = NULL;
              l_33 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_33), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  t = q_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm t_13 = t;
  if(PushChoice()==0)
    {
      t = s_77(t);
      t = t_77(t);
      PopChoice();
    }
  else
    {
      t = t_13;
      t = t_77(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm s_33 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm t_33 = NULL;
    ATerm u_33 = NULL;
    t = p_63(t);
    t_33 = t;
    if(s_33 != NULL && s_33 != t_33)
      _fail(t_33);
    else
      s_33 = t_33;
    {
      ATerm v_33 = NULL;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
      {
        ATerm v_13 = t;
        if(PushChoice()==0)
          {
            t = table_get_0(t);
            PopChoice();
          }
        else
          {
            t = v_13;
            t = (ATerm) ATmakeAppl(sym_Nil_0);
          }
        v_33 = t;
        if(u_33 != NULL && u_33 != v_33)
          _fail(v_33);
        else
          u_33 = v_33;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_33), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), not_null(u_33)), (ATerm) ATmakeAppl(sym_TNil_0))));
      t = table_put_0(t);
    }
  }
  t = u_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  t = begin_scope_1(t, r_63);
  {
    ATerm h_2 (ATerm t)
    {
      t = end_scope_1(t, r_63);
      return(t);
    }
    t = restore_always_2(t, s_63, h_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm w_13 = t;
    if(PushChoice()==0)
      {
        t = UndefineSDef_0(t);
        PopChoice();
      }
    else
      {
        t = w_13;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, i_2, j_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_63 (ATerm))
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
            {
              ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
              ATerm x_13;
              x_13 = t;
              {
                ATerm q_34 = NULL;
                ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
                t = t_63(t);
                q_34 = t;
                if(n_34 != NULL && n_34 != q_34)
                  _fail(q_34);
                else
                  n_34 = q_34;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_34), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_34), (ATerm) ATmakeAppl(sym_TNil_0))));
                t = table_push_0(t);
                {
                  ATerm y_13 = t;
                  if(PushChoice()==0)
                    {
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = table_get_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = y_13;
                      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Nil_0));
                    }
                  r_34 = t;
                  c_34 :
                  if(match_cons(r_34, sym_Cons_2))
                    {
                      s_34 = ATgetArgument(r_34, 0);
                      t_34 = ATgetArgument(r_34, 1);
                      if(o_34 != NULL && o_34 != s_34)
                        _fail(s_34);
                      else
                        o_34 = s_34;
                      if(p_34 != NULL && p_34 != t_34)
                        _fail(t_34);
                      else
                        p_34 = t_34;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_34), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_34), not_null(o_34)), not_null(p_34)), (ATerm) ATmakeAppl(sym_TNil_0))));
                      t = table_put_0(t);
                    }
                  else
                    _fail(t);
                }
              }
              t = x_13;
            }
          else
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
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_SDef_3))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      c_35 = ATgetArgument(z_34, 2);
      {
        ATerm z_13;
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue)), not_null(z_34), not_null(a_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
        {
          ATerm k_2 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
            return(t);
          }
          t = assert_1(t, k_2);
        }
        t = z_13;
        {
          ATerm a_14;
          a_14 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Defined_3, (ATerm)ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue)), not_null(z_34), not_null(a_35)), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm l_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
              return(t);
            }
            t = assert_1(t, l_2);
          }
          t = a_14;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  k_35 = t;
  h_35 :
  if(match_cons(k_35, sym_TCons_2))
    {
      l_35 = ATgetArgument(k_35, 0);
      m_35 = ATgetArgument(k_35, 1);
      i_35 :
      if(match_cons(m_35, sym_TCons_2))
        {
          n_35 = ATgetArgument(m_35, 0);
          o_35 = ATgetArgument(m_35, 1);
          j_35 :
          if(match_cons(o_35, sym_TNil_0))
            {
              ATerm e_14;
              e_14 = t;
              {
                ATerm f_14 = t;
                if(PushChoice()==0)
                  {
                    t = SSL_gti(not_null(l_35), not_null(n_35));
                    PopChoice();
                  }
                else
                  {
                    t = f_14;
                    t = SSL_gtr(not_null(l_35), not_null(n_35));
                  }
              }
              t = e_14;
            }
          else
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
  ATerm g_14 = t;
  if(PushChoice()==0)
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = g_14;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  w_35 = t;
  t_35 :
  if(match_cons(w_35, sym_TCons_2))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      u_35 :
      if(match_cons(y_35, sym_TCons_2))
        {
          z_35 = ATgetArgument(y_35, 0);
          a_36 = ATgetArgument(y_35, 1);
          v_35 :
          if(match_cons(a_36, sym_TNil_0))
            {
              ATerm i_14 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(x_35), not_null(z_35));
                  PopChoice();
                }
              else
                {
                  t = i_14;
                  t = SSL_addr(not_null(x_35), not_null(z_35));
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
ATerm foldr_3 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm))
{
  ATerm u_14 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = t_69(t);
      PopChoice();
    }
  else
    {
      t = u_14;
      {
        ATerm j_36 = NULL,n_36 = NULL,o_36 = NULL;
        j_36 = t;
        i_36 :
        if(match_cons(j_36, sym_Cons_2))
          {
            n_36 = ATgetArgument(j_36, 0);
            o_36 = ATgetArgument(j_36, 1);
            {
              ATerm r_36 = NULL,t_36 = NULL;
              ATerm v_14;
              v_14 = t;
              {
                ATerm s_36 = NULL;
                t = not_null(n_36);
                t = v_69(t);
                s_36 = t;
                if(r_36 != NULL && r_36 != s_36)
                  _fail(s_36);
                else
                  r_36 = s_36;
              }
              t = v_14;
              {
                ATerm u_36 = NULL;
                t = not_null(o_36);
                t = foldr_3(t, t_69, u_69, v_69);
                u_36 = t;
                if(t_36 != NULL && t_36 != u_36)
                  _fail(u_36);
                else
                  t_36 = u_36;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_36), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_36), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = u_69(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm g_37 = NULL;
  ATerm i_37 = NULL;
  g_37 = t;
  {
    ATerm j_37 = NULL;
    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
    t = not_null(g_37);
    j_37 = t;
    t = SSL_explode_term(not_null(j_37));
    w_37 = t;
    d_37 :
    if(match_cons(w_37, sym_TCons_2))
      {
        x_37 = ATgetArgument(w_37, 0);
        y_37 = ATgetArgument(w_37, 1);
        e_37 :
        if(match_cons(y_37, sym_TCons_2))
          {
            z_37 = ATgetArgument(y_37, 0);
            a_38 = ATgetArgument(y_37, 1);
            f_37 :
            if(match_cons(a_38, sym_TNil_0))
              {
                if(i_37 != NULL && i_37 != z_37)
                  _fail(z_37);
                else
                  i_37 = z_37;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_37);
    t = foldr_3(t, j_71, k_71, l_71);
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm w_14 = t;
  if(PushChoice()==0)
    {
      ATerm e_38 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = (ATerm) ATmakeInt(1);
          return(t);
        }
        t = crush_3(t, m_2, add_0, e_38);
        return(t);
      }
      t = e_38(t);
      PopChoice();
    }
  else
    {
      t = w_14;
      {
        ATerm n_2 (ATerm t)
        {
          t = (ATerm) ATmakeInt(1);
          return(t);
        }
        t = crush_3(t, n_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_LChoice_2))
    {
      k_38 = ATgetArgument(j_38, 0);
      l_38 = ATgetArgument(j_38, 1);
      {
        ATerm o_38 = NULL;
        t = not_null(k_38);
        {
          ATerm s_38 = NULL;
          t = d_58(t);
          o_38 = t;
          t = not_null(l_38);
          t = e_58(t);
          s_38 = t;
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_38), not_null(s_38));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_Choice_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      {
        ATerm g_39 = NULL;
        t = not_null(c_39);
        {
          ATerm i_39 = NULL;
          t = b_58(t);
          g_39 = t;
          t = not_null(d_39);
          t = c_58(t);
          i_39 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_39), not_null(i_39));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Cong_2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm c_40 = NULL;
        t = not_null(w_39);
        {
          ATerm e_40 = NULL;
          t = y_58(t);
          c_40 = t;
          t = not_null(x_39);
          t = z_58(t);
          e_40 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(c_40), not_null(e_40));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm r_40 = NULL,s_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym_Match_1))
    {
      s_40 = ATgetArgument(r_40, 0);
      {
        ATerm u_40 = NULL;
        t = not_null(s_40);
        t = g_59(t);
        u_40 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_40));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm z_57 (ATerm), ATerm a_58 (ATerm))
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Seq_2))
    {
      d_41 = ATgetArgument(c_41, 0);
      e_41 = ATgetArgument(c_41, 1);
      {
        ATerm h_41 = NULL;
        t = not_null(d_41);
        {
          ATerm j_41 = NULL;
          t = z_57(t);
          h_41 = t;
          t = not_null(e_41);
          t = a_58(t);
          j_41 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_41), not_null(j_41));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym_Scope_2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        ATerm d_42 = NULL;
        t = not_null(x_41);
        {
          ATerm f_42 = NULL;
          t = k_59(t);
          d_42 = t;
          t = not_null(y_41);
          t = l_59(t);
          f_42 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_42), not_null(f_42));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm n_42 = NULL,o_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_Build_1))
    {
      o_42 = ATgetArgument(n_42, 0);
      {
        ATerm q_42 = NULL;
        t = not_null(o_42);
        t = h_59(t);
        q_42 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_SVar_1))
    {
      y_42 = ATgetArgument(x_42, 0);
      {
        ATerm a_43 = NULL;
        t = not_null(y_42);
        t = f_58(t);
        a_43 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(a_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm))
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  h_43 :
  if(match_cons(i_43, sym_Call_2))
    {
      j_43 = ATgetArgument(i_43, 0);
      k_43 = ATgetArgument(i_43, 1);
      {
        ATerm n_43 = NULL;
        t = not_null(j_43);
        {
          ATerm p_43 = NULL;
          t = u_58(t);
          n_43 = t;
          t = not_null(k_43);
          t = v_58(t);
          p_43 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(n_43), not_null(p_43));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  u_43 :
  if(!(match_cons(v_43, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  w_43 :
  if(!(match_cons(x_43, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm y_43 (ATerm t)
  {
    ATerm x_14 = t;
    if(PushChoice()==0)
      {
        t = Id_0(t);
        PopChoice();
      }
    else
      {
        t = x_14;
        {
          ATerm y_14 = t;
          if(PushChoice()==0)
            {
              t = Fail_0(t);
              PopChoice();
            }
          else
            {
              t = y_14;
              {
                ATerm z_14 = t;
                if(PushChoice()==0)
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, o_2, _id);
                    PopChoice();
                  }
                else
                  {
                    t = z_14;
                    {
                      ATerm a_15 = t;
                      if(PushChoice()==0)
                        {
                          t = Build_1(t, _id);
                          PopChoice();
                        }
                      else
                        {
                          t = a_15;
                          {
                            ATerm e_15 = t;
                            if(PushChoice()==0)
                              {
                                t = Match_1(t, _id);
                                PopChoice();
                              }
                            else
                              {
                                t = e_15;
                                {
                                  ATerm f_15 = t;
                                  if(PushChoice()==0)
                                    {
                                      ATerm p_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, p_2, _id);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = f_15;
                                      {
                                        ATerm j_15 = t;
                                        if(PushChoice()==0)
                                          {
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, q_2);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = j_15;
                                            {
                                              ATerm v_15 = t;
                                              if(PushChoice()==0)
                                                {
                                                  ATerm r_2 (ATerm t)
                                                  {
                                                    ATerm s_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, s_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, r_2);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = v_15;
                                                  {
                                                    ATerm w_15 = t;
                                                    if(PushChoice()==0)
                                                      {
                                                        ATerm t_2 (ATerm t)
                                                        {
                                                          ATerm u_2 (ATerm t)
                                                          {
                                                            ATerm v_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, v_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, u_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, t_2, _id);
                                                        PopChoice();
                                                      }
                                                    else
                                                      {
                                                        t = w_15;
                                                        {
                                                          ATerm x_15 = t;
                                                          if(PushChoice()==0)
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              PopChoice();
                                                            }
                                                          else
                                                            {
                                                              t = x_15;
                                                              {
                                                                ATerm b_16 = t;
                                                                if(PushChoice()==0)
                                                                  {
                                                                    t = Choice_2(t, y_43, y_43);
                                                                    PopChoice();
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_16;
                                                                    t = LChoice_2(t, y_43, y_43);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = y_43(t);
  {
    ATerm j_16;
    j_16 = t;
    {
      ATerm w_2 (ATerm t)
      {
        t = (ATerm) ATmakeInt(10);
        return(t);
      }
      t = split_2(t, term_size_0, w_2);
      t = leq_0(t);
    }
    t = j_16;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm z_43 (ATerm t)
  {
    ATerm r_16 = t;
    if(PushChoice()==0)
      {
        t = k_79(t);
        PopChoice();
      }
    else
      {
        t = r_16;
        t = _one(t, z_43);
      }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm m_58 (ATerm))
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  f_44 = t;
  e_44 :
  if(match_cons(f_44, sym_SDef_3))
    {
      g_44 = ATgetArgument(f_44, 0);
      h_44 = ATgetArgument(f_44, 1);
      i_44 = ATgetArgument(f_44, 2);
      {
        ATerm m_44 = NULL;
        t = not_null(g_44);
        {
          ATerm o_44 = NULL;
          t = k_58(t);
          m_44 = t;
          t = not_null(h_44);
          {
            ATerm q_44 = NULL;
            t = l_58(t);
            o_44 = t;
            t = not_null(i_44);
            t = m_58(t);
            q_44 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_44), not_null(o_44), not_null(q_44));
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
  ATerm l_45 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm n_45 = NULL;
    ATerm s_16 = t;
    if(PushChoice()==0)
      {
        ATerm m_45 = NULL;
        m_45 = t;
        a_45 :
        if(!(match_string(m_45, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = s_16;
    n_45 = t;
    if(l_45 != NULL && l_45 != n_45)
      _fail(n_45);
    else
      l_45 = n_45;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm t_16;
    t_16 = t;
    {
      ATerm u_16 = t;
      if(PushChoice()==0)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
            s_45 = t;
            d_45 :
            if(match_cons(s_45, sym_Call_2))
              {
                t_45 = ATgetArgument(s_45, 0);
                v_45 = ATgetArgument(s_45, 1);
                j_45 :
                if(match_cons(t_45, sym_SVar_1))
                  {
                    u_45 = ATgetArgument(t_45, 0);
                    k_45 :
                    if(match_cons(v_45, sym_Nil_0))
                      {
                        if(l_45 != NULL && l_45 != u_45)
                          _fail(u_45);
                        else
                          l_45 = u_45;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, h_3);
          PopChoice();
          _fail(t);
        }
      else
        t = u_16;
    }
    t = t_16;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, f_3, _id, g_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  c_46 = t;
  z_45 :
  if(match_cons(c_46, sym_TCons_2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      a_46 :
      if(match_cons(e_46, sym_TCons_2))
        {
          f_46 = ATgetArgument(e_46, 0);
          g_46 = ATgetArgument(e_46, 1);
          b_46 :
          if(match_cons(g_46, sym_TNil_0))
            {
              t = not_null(d_46);
              {
                ATerm i_3 (ATerm t)
                {
                  t = not_null(f_46);
                  return(t);
                }
                t = at_end_1(t, i_3);
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
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  p_46 = t;
  m_46 :
  if(match_cons(p_46, sym_TCons_2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      n_46 :
      if(match_cons(r_46, sym_TCons_2))
        {
          s_46 = ATgetArgument(r_46, 0);
          t_46 = ATgetArgument(r_46, 1);
          o_46 :
          if(match_cons(t_46, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_46), not_null(s_46));
          else
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
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,l_47 = NULL,m_47 = NULL;
  d_47 = t;
  y_46 :
  if(match_cons(d_47, sym_TCons_2))
    {
      e_47 = ATgetArgument(d_47, 0);
      h_47 = ATgetArgument(d_47, 1);
      z_46 :
      if(match_cons(e_47, sym_Cons_2))
        {
          f_47 = ATgetArgument(e_47, 0);
          g_47 = ATgetArgument(e_47, 1);
          a_47 :
          if(match_cons(h_47, sym_TCons_2))
            {
              i_47 = ATgetArgument(h_47, 0);
              m_47 = ATgetArgument(h_47, 1);
              b_47 :
              if(match_cons(i_47, sym_Cons_2))
                {
                  j_47 = ATgetArgument(i_47, 0);
                  l_47 = ATgetArgument(i_47, 1);
                  c_47 :
                  if(match_cons(m_47, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(f_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_47), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(g_47), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_47), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  a_50 = t;
  q_48 :
  if(match_cons(a_50, sym_TCons_2))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      w_49 :
      if(match_cons(b_50, sym_Nil_0))
        {
          x_49 :
          if(match_cons(c_50, sym_TCons_2))
            {
              d_50 = ATgetArgument(c_50, 0);
              e_50 = ATgetArgument(c_50, 1);
              y_49 :
              if(match_cons(d_50, sym_Nil_0))
                {
                  z_49 :
                  if(match_cons(e_50, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm g_50 (ATerm t)
  {
    ATerm v_16 = t;
    if(PushChoice()==0)
      {
        t = h_73(t);
        PopChoice();
      }
    else
      {
        t = v_16;
        t = i_73(t);
        {
          ATerm j_3 (ATerm t)
          {
            t = TCons_2(t, g_50, TNil_0);
            return(t);
          }
          t = TCons_2(t, k_73, j_3);
          t = j_73(t);
        }
      }
    return(t);
  }
  t = g_50(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_73);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Cong_2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      {
        ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,i_52 = NULL;
        ATerm w_16;
        w_16 = t;
        {
          ATerm l_51 = NULL;
          t = not_null(d_51);
          {
            ATerm o_51 = NULL;
            t = map_1(t, new_0);
            l_51 = t;
            if(i_51 != NULL && i_51 != l_51)
              _fail(l_51);
            else
              i_51 = l_51;
            t = not_null(i_51);
            {
              ATerm p_51 = NULL;
              ATerm l_3 (ATerm t)
              {
                ATerm m_51 = NULL;
                m_51 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_51));
                return(t);
              }
              t = map_1(t, l_3);
              o_51 = t;
              if(g_51 != NULL && g_51 != o_51)
                _fail(o_51);
              else
                g_51 = o_51;
              t = not_null(d_51);
              {
                ATerm s_51 = NULL;
                t = map_1(t, new_0);
                p_51 = t;
                if(j_51 != NULL && j_51 != p_51)
                  _fail(p_51);
                else
                  j_51 = p_51;
                t = not_null(j_51);
                {
                  ATerm t_51 = NULL,h_52 = NULL;
                  ATerm o_3 (ATerm t)
                  {
                    ATerm q_51 = NULL;
                    q_51 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_51));
                    return(t);
                  }
                  t = map_1(t, o_3);
                  s_51 = t;
                  if(h_51 != NULL && h_51 != s_51)
                    _fail(s_51);
                  else
                    h_51 = s_51;
                  {
                    ATerm u_51 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    u_51 = t;
                    if(t_51 != NULL && t_51 != u_51)
                      _fail(u_51);
                    else
                      t_51 = u_51;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_51), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
                        v_51 = t;
                        s_50 :
                        if(match_cons(v_51, sym_TCons_2))
                          {
                            w_51 = ATgetArgument(v_51, 0);
                            b_52 = ATgetArgument(v_51, 1);
                            t_50 :
                            if(match_cons(w_51, sym_TCons_2))
                              {
                                x_51 = ATgetArgument(w_51, 0);
                                y_51 = ATgetArgument(w_51, 1);
                                u_50 :
                                if(match_cons(y_51, sym_TCons_2))
                                  {
                                    z_51 = ATgetArgument(y_51, 0);
                                    a_52 = ATgetArgument(y_51, 1);
                                    v_50 :
                                    if(match_cons(a_52, sym_TNil_0))
                                      {
                                        w_50 :
                                        if(match_cons(b_52, sym_TCons_2))
                                          {
                                            c_52 = ATgetArgument(b_52, 0);
                                            d_52 = ATgetArgument(b_52, 1);
                                            x_50 :
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
                      t = zip_1(t, p_3);
                      h_52 = t;
                      if(k_51 != NULL && k_51 != h_52)
                        _fail(h_52);
                      else
                        k_51 = h_52;
                    }
                  }
                }
              }
            }
          }
        }
        t = w_16;
        {
          ATerm j_52 = NULL;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_51), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_51), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = conc_0(t);
          j_52 = t;
          if(i_52 != NULL && i_52 != j_52)
            _fail(j_52);
          else
            i_52 = j_52;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_51), not_null(g_51))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(k_51)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_51), not_null(h_51))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Cong_2))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      {
        ATerm g_53 = NULL;
        ATerm k_53 = NULL;
        t = not_null(d_53);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm h_53 = NULL,i_53 = NULL;
            i_53 = t;
            y_52 :
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
          t = map_1(t, q_3);
          k_53 = t;
          if(g_53 != NULL && g_53 != k_53)
            _fail(k_53);
          else
            g_53 = k_53;
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_53), not_null(g_53)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  s_53 = t;
  q_53 :
  if(match_cons(s_53, sym_Scope_2))
    {
      t_53 = ATgetArgument(s_53, 0);
      u_53 = ATgetArgument(s_53, 1);
      r_53 :
      if(match_cons(t_53, sym_Nil_0))
        t = not_null(u_53);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  q_54 = t;
  d_54 :
  if(match_cons(q_54, sym_Where_1))
    {
      r_54 = ATgetArgument(q_54, 0);
      e_54 :
      if(match_cons(r_54, sym_Seq_2))
        {
          p_54 = ATgetArgument(r_54, 0);
          l_54 = ATgetArgument(r_54, 1);
          f_54 :
          if(match_cons(p_54, sym_Where_1))
            {
              k_54 = ATgetArgument(p_54, 0);
              g_54 :
              if(match_cons(l_54, sym_Seq_2))
                {
                  m_54 = ATgetArgument(l_54, 0);
                  o_54 = ATgetArgument(l_54, 1);
                  h_54 :
                  if(match_cons(m_54, sym_Build_1))
                    {
                      n_54 = ATgetArgument(m_54, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_54)), not_null(o_54))));
                    }
                  else
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
          if(match_cons(r_54, sym_Where_1))
            {
              p_54 = ATgetArgument(r_54, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_54));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(q_54, sym_Test_1))
        {
          r_54 = ATgetArgument(q_54, 0);
          i_54 :
          if(match_cons(r_54, sym_Test_1))
            {
              p_54 = ATgetArgument(r_54, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_54));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(q_54, sym_Not_1))
            {
              r_54 = ATgetArgument(q_54, 0);
              j_54 :
              if(match_cons(r_54, sym_Not_1))
                {
                  p_54 = ATgetArgument(r_54, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_54));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(q_54, sym_LChoice_2))
                {
                  r_54 = ATgetArgument(q_54, 0);
                  s_54 = ATgetArgument(q_54, 1);
                  if(r_54 != NULL && r_54 != s_54)
                    _fail(s_54);
                  else
                    r_54 = s_54;
                  t = not_null(r_54);
                }
              else
                {
                  if(match_cons(q_54, sym_Choice_2))
                    {
                      r_54 = ATgetArgument(q_54, 0);
                      s_54 = ATgetArgument(q_54, 1);
                      if(r_54 != NULL && r_54 != s_54)
                        _fail(s_54);
                      else
                        r_54 = s_54;
                      t = not_null(r_54);
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  o_55 = t;
  k_55 :
  if(match_cons(o_55, sym_LChoice_2))
    {
      p_55 = ATgetArgument(o_55, 0);
      s_55 = ATgetArgument(o_55, 1);
      l_55 :
      if(match_cons(p_55, sym_LChoice_2))
        {
          q_55 = ATgetArgument(p_55, 0);
          r_55 = ATgetArgument(p_55, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_55), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_55), not_null(s_55)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(o_55, sym_Seq_2))
        {
          p_55 = ATgetArgument(o_55, 0);
          s_55 = ATgetArgument(o_55, 1);
          m_55 :
          if(match_cons(p_55, sym_Seq_2))
            {
              q_55 = ATgetArgument(p_55, 0);
              r_55 = ATgetArgument(p_55, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_55), not_null(s_55)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(o_55, sym_Choice_2))
            {
              p_55 = ATgetArgument(o_55, 0);
              s_55 = ATgetArgument(o_55, 1);
              n_55 :
              if(match_cons(p_55, sym_Choice_2))
                {
                  q_55 = ATgetArgument(p_55, 0);
                  r_55 = ATgetArgument(p_55, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_55), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_55), not_null(s_55)));
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
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  z_56 = t;
  r_56 :
  if(match_cons(z_56, sym_InfixApp_3))
    {
      a_57 = ATgetArgument(z_56, 0);
      w_56 = ATgetArgument(z_56, 1);
      v_56 = ATgetArgument(z_56, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_56), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_57), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_56), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
    }
  else
    {
      if(match_cons(z_56, sym_BAM_3))
        {
          a_57 = ATgetArgument(z_56, 0);
          w_56 = ATgetArgument(z_56, 1);
          v_56 = ATgetArgument(z_56, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_56)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_57), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_56)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(z_56, sym_AM_2))
            {
              a_57 = ATgetArgument(z_56, 0);
              w_56 = ATgetArgument(z_56, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_57), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_56)));
            }
          else
            {
              if(match_cons(z_56, sym_MA_2))
                {
                  a_57 = ATgetArgument(z_56, 0);
                  w_56 = ATgetArgument(z_56, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_57)), not_null(w_56));
                }
              else
                {
                  if(match_cons(z_56, sym_BA_2))
                    {
                      a_57 = ATgetArgument(z_56, 0);
                      w_56 = ATgetArgument(z_56, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_56)), not_null(a_57));
                    }
                  else
                    {
                      if(match_cons(z_56, sym_Lets_2))
                        {
                          a_57 = ATgetArgument(z_56, 0);
                          w_56 = ATgetArgument(z_56, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_57), not_null(w_56));
                        }
                      else
                        {
                          if(match_cons(z_56, sym_LChoices_1))
                            {
                              a_57 = ATgetArgument(z_56, 0);
                              s_56 :
                              if(match_cons(a_57, sym_Cons_2))
                                {
                                  x_56 = ATgetArgument(a_57, 0);
                                  y_56 = ATgetArgument(a_57, 1);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_56), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_56)));
                                }
                              else
                                {
                                  if(match_cons(a_57, sym_Nil_0))
                                    t = (ATerm) ATmakeAppl(sym_Fail_0);
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(z_56, sym_Choices_1))
                                {
                                  a_57 = ATgetArgument(z_56, 0);
                                  t_56 :
                                  if(match_cons(a_57, sym_Cons_2))
                                    {
                                      x_56 = ATgetArgument(a_57, 0);
                                      y_56 = ATgetArgument(a_57, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_56), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_56)));
                                    }
                                  else
                                    {
                                      if(match_cons(a_57, sym_Nil_0))
                                        t = (ATerm) ATmakeAppl(sym_Fail_0);
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(z_56, sym_Seqs_1))
                                    {
                                      a_57 = ATgetArgument(z_56, 0);
                                      u_56 :
                                      if(match_cons(a_57, sym_Cons_2))
                                        {
                                          x_56 = ATgetArgument(a_57, 0);
                                          y_56 = ATgetArgument(a_57, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_56), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_56)));
                                        }
                                      else
                                        {
                                          if(match_cons(a_57, sym_Nil_0))
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
  ATerm i_59 = NULL,j_59 = NULL;
  i_59 = t;
  e_59 :
  if(match_cons(i_59, sym_Where_1))
    {
      j_59 = ATgetArgument(i_59, 0);
      f_59 :
      if(match_cons(j_59, sym_Fail_0))
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
  ATerm s_59 = NULL,v_59 = NULL,w_59 = NULL;
  s_59 = t;
  o_59 :
  if(match_cons(s_59, sym_LChoice_2))
    {
      v_59 = ATgetArgument(s_59, 0);
      w_59 = ATgetArgument(s_59, 1);
      r_59 :
      if(match_cons(w_59, sym_Fail_0))
        t = not_null(v_59);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  a_60 :
  if(match_cons(c_60, sym_LChoice_2))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      b_60 :
      if(match_cons(d_60, sym_Fail_0))
        t = not_null(e_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  k_60 = t;
  i_60 :
  if(match_cons(k_60, sym_Choice_2))
    {
      l_60 = ATgetArgument(k_60, 0);
      m_60 = ATgetArgument(k_60, 1);
      j_60 :
      if(match_cons(m_60, sym_Fail_0))
        t = not_null(l_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  s_60 = t;
  q_60 :
  if(match_cons(s_60, sym_Choice_2))
    {
      t_60 = ATgetArgument(s_60, 0);
      u_60 = ATgetArgument(s_60, 1);
      r_60 :
      if(match_cons(t_60, sym_Fail_0))
        t = not_null(u_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  z_60 :
  if(match_cons(a_61, sym_Cong_2))
    {
      b_61 = ATgetArgument(a_61, 0);
      c_61 = ATgetArgument(a_61, 1);
      t = not_null(c_61);
      {
        ATerm r_3 (ATerm t)
        {
          ATerm f_61 = NULL;
          f_61 = t;
          y_60 :
          if(!(match_cons(f_61, sym_Fail_0)))
            _fail(t);
          return(t);
        }
        t = fetch_1(t, r_3);
      }
      t = (ATerm) ATmakeAppl(sym_Fail_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  i_61 :
  if(match_cons(k_61, sym_Path_2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      j_61 :
      if(match_cons(m_61, sym_Fail_0))
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
  ATerm y_61 = NULL,z_61 = NULL;
  y_61 = t;
  q_61 :
  if(match_cons(y_61, sym_One_1))
    {
      z_61 = ATgetArgument(y_61, 0);
      x_61 :
      if(match_cons(z_61, sym_Fail_0))
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
  ATerm e_62 = NULL,f_62 = NULL;
  e_62 = t;
  c_62 :
  if(match_cons(e_62, sym_Some_1))
    {
      f_62 = ATgetArgument(e_62, 0);
      d_62 :
      if(match_cons(f_62, sym_Fail_0))
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
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
  k_62 = t;
  i_62 :
  if(match_cons(k_62, sym_Rec_2))
    {
      l_62 = ATgetArgument(k_62, 0);
      m_62 = ATgetArgument(k_62, 1);
      j_62 :
      if(match_cons(m_62, sym_Fail_0))
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
  ATerm u_62 = NULL,x_62 = NULL,y_62 = NULL;
  u_62 = t;
  r_62 :
  if(match_cons(u_62, sym_Scope_2))
    {
      x_62 = ATgetArgument(u_62, 0);
      y_62 = ATgetArgument(u_62, 1);
      t_62 :
      if(match_cons(y_62, sym_Fail_0))
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
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
  h_63 = t;
  f_63 :
  if(match_cons(h_63, sym_Seq_2))
    {
      i_63 = ATgetArgument(h_63, 0);
      j_63 = ATgetArgument(h_63, 1);
      g_63 :
      if(match_cons(i_63, sym_Fail_0))
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
  ATerm x_63 = NULL,y_63 = NULL;
  x_63 = t;
  u_63 :
  if(match_cons(x_63, sym_Not_1))
    {
      y_63 = ATgetArgument(x_63, 0);
      w_63 :
      if(match_cons(y_63, sym_Fail_0))
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
  ATerm d_64 = NULL,e_64 = NULL;
  d_64 = t;
  b_64 :
  if(match_cons(d_64, sym_Test_1))
    {
      e_64 = ATgetArgument(d_64, 0);
      c_64 :
      if(match_cons(e_64, sym_Fail_0))
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
  ATerm x_16 = t;
  if(PushChoice()==0)
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = x_16;
      {
        ATerm h_17 = t;
        if(PushChoice()==0)
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = h_17;
            {
              ATerm k_17 = t;
              if(PushChoice()==0)
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = k_17;
                  {
                    ATerm m_17 = t;
                    if(PushChoice()==0)
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = m_17;
                        {
                          ATerm o_17 = t;
                          if(PushChoice()==0)
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = o_17;
                              {
                                ATerm p_17 = t;
                                if(PushChoice()==0)
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = p_17;
                                    {
                                      ATerm u_17 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_17;
                                          {
                                            ATerm v_17 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_17;
                                                {
                                                  ATerm x_17 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = x_17;
                                                      {
                                                        ATerm y_17 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = y_17;
                                                            {
                                                              ATerm z_17 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = z_17;
                                                                  {
                                                                    ATerm d_18 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_18;
                                                                        {
                                                                          ATerm j_18 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_18;
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
  ATerm j_64 = NULL,k_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym_Match_1))
    {
      k_64 = ATgetArgument(j_64, 0);
      i_64 :
      if(match_cons(k_64, sym_Wld_0))
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
  ATerm p_64 = NULL,q_64 = NULL;
  p_64 = t;
  n_64 :
  if(match_cons(p_64, sym_Where_1))
    {
      q_64 = ATgetArgument(p_64, 0);
      o_64 :
      if(match_cons(q_64, sym_Id_0))
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
  ATerm z_64 = NULL,a_65 = NULL;
  z_64 = t;
  x_64 :
  if(match_cons(z_64, sym_All_1))
    {
      a_65 = ATgetArgument(z_64, 0);
      y_64 :
      if(match_cons(a_65, sym_Id_0))
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
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  d_65 :
  if(match_cons(f_65, sym_Rec_2))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      e_65 :
      if(match_cons(h_65, sym_Id_0))
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
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  r_65 :
  if(match_cons(t_65, sym_Scope_2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      s_65 :
      if(match_cons(v_65, sym_Id_0))
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
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  z_65 :
  if(match_cons(b_66, sym_LChoice_2))
    {
      c_66 = ATgetArgument(b_66, 0);
      d_66 = ATgetArgument(b_66, 1);
      a_66 :
      if(match_cons(c_66, sym_Id_0))
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
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  h_66 :
  if(match_cons(j_66, sym_Seq_2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      i_66 :
      if(match_cons(l_66, sym_Id_0))
        t = not_null(k_66);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,x_66 = NULL;
  r_66 = t;
  p_66 :
  if(match_cons(r_66, sym_Seq_2))
    {
      s_66 = ATgetArgument(r_66, 0);
      x_66 = ATgetArgument(r_66, 1);
      q_66 :
      if(match_cons(s_66, sym_Id_0))
        t = not_null(x_66);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL;
  d_67 = t;
  b_67 :
  if(match_cons(d_67, sym_Not_1))
    {
      e_67 = ATgetArgument(d_67, 0);
      c_67 :
      if(match_cons(e_67, sym_Id_0))
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
  ATerm j_67 = NULL,k_67 = NULL;
  j_67 = t;
  h_67 :
  if(match_cons(j_67, sym_Test_1))
    {
      k_67 = ATgetArgument(j_67, 0);
      i_67 :
      if(match_cons(k_67, sym_Id_0))
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
  ATerm k_18 = t;
  if(PushChoice()==0)
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        if(PushChoice()==0)
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = m_18;
            {
              ATerm n_18 = t;
              if(PushChoice()==0)
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = n_18;
                  {
                    ATerm p_18 = t;
                    if(PushChoice()==0)
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = p_18;
                        {
                          ATerm q_18 = t;
                          if(PushChoice()==0)
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = q_18;
                              {
                                ATerm u_18 = t;
                                if(PushChoice()==0)
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_18;
                                    {
                                      ATerm v_18 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_18;
                                          {
                                            ATerm w_18 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = w_18;
                                                {
                                                  ATerm f_19 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = f_19;
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
  ATerm g_19 = t;
  if(PushChoice()==0)
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = g_19;
      {
        ATerm h_19 = t;
        if(PushChoice()==0)
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = h_19;
            {
              ATerm i_19 = t;
              if(PushChoice()==0)
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = i_19;
                  {
                    ATerm j_19 = t;
                    if(PushChoice()==0)
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = j_19;
                        {
                          ATerm k_19 = t;
                          if(PushChoice()==0)
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = k_19;
                              {
                                ATerm l_19 = t;
                                if(PushChoice()==0)
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_19;
                                    {
                                      ATerm m_19 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_19;
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
ATerm downup_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm m_67 (ATerm t)
  {
    t = y_77(t);
    t = _all(t, m_67);
    t = y_77(t);
    return(t);
  }
  t = m_67(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, a_4);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm g_4 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, g_4);
    }
    return(t);
  }
  t = map_1(t, b_4);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm r_67 = NULL,s_67 = NULL;
  r_67 = t;
  q_67 :
  if(match_cons(r_67, sym_Strategies_1))
    {
      s_67 = ATgetArgument(r_67, 0);
      {
        ATerm w_67 = NULL;
        t = not_null(s_67);
        t = o_57(t);
        w_67 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_67));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm d_68 = NULL,e_68 = NULL;
  d_68 = t;
  c_68 :
  if(match_cons(d_68, sym_Specification_1))
    {
      e_68 = ATgetArgument(d_68, 0);
      {
        ATerm h_68 = NULL;
        t = not_null(e_68);
        t = q_57(t);
        h_68 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(h_68));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
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
  t = Specification_1(t, h_4);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm o_68 = NULL;
  o_68 = t;
  l_68 :
  if(!(match_cons(o_68, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  a_69 = t;
  z_68 :
  if(match_cons(a_69, sym_TCons_2))
    {
      b_69 = ATgetArgument(a_69, 0);
      c_69 = ATgetArgument(a_69, 1);
      {
        ATerm f_69 = NULL;
        t = not_null(b_69);
        {
          ATerm h_69 = NULL;
          t = p_59(t);
          f_69 = t;
          t = not_null(c_69);
          t = q_59(t);
          h_69 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_69), not_null(h_69));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_69 = NULL;
  ATerm n_19;
  n_19 = t;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm p_69 = NULL,q_69 = NULL;
      p_69 = t;
      n_69 :
      if(match_cons(p_69, sym_Program_1))
        {
          q_69 = ATgetArgument(p_69, 0);
          if(o_69 != NULL && o_69 != q_69)
            _fail(q_69);
          else
            o_69 = q_69;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_4);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_69), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = n_19;
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
  ATerm a_70 = NULL,b_70 = NULL;
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm r_19 = t;
      if(PushChoice()==0)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm c_70 = NULL;
            c_70 = t;
            s_69 :
            if(!(match_cons(c_70, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_5);
          PopChoice();
          _fail(t);
        }
      else
        t = r_19;
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, z_4, b_5);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm h_6 (ATerm t)
        {
          ATerm d_70 = NULL,e_70 = NULL;
          d_70 = t;
          x_69 :
          if(match_cons(d_70, sym_Runtime_1))
            {
              e_70 = ATgetArgument(d_70, 0);
              if(b_70 != NULL && b_70 != e_70)
                _fail(e_70);
              else
                b_70 = e_70;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, h_6);
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, f_6, g_6);
      {
        ATerm i_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            ATerm f_70 = NULL,g_70 = NULL;
            f_70 = t;
            z_69 :
            if(match_cons(f_70, sym_Program_1))
              {
                g_70 = ATgetArgument(f_70, 0);
                if(a_70 != NULL && a_70 != g_70)
                  _fail(g_70);
                else
                  a_70 = g_70;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_6);
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, i_6, j_6);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_70), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, y_4);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  n_70 = t;
  k_70 :
  if(match_cons(n_70, sym_TCons_2))
    {
      o_70 = ATgetArgument(n_70, 0);
      p_70 = ATgetArgument(n_70, 1);
      l_70 :
      if(match_cons(p_70, sym_TCons_2))
        {
          q_70 = ATgetArgument(p_70, 0);
          r_70 = ATgetArgument(p_70, 1);
          m_70 :
          if(match_cons(r_70, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(o_70), not_null(q_70));
          else
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
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  d_71 = t;
  x_70 :
  if(match_cons(d_71, sym_TCons_2))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      z_70 :
      if(match_cons(f_71, sym_TCons_2))
        {
          g_71 = ATgetArgument(f_71, 0);
          h_71 = ATgetArgument(f_71, 1);
          a_71 :
          if(match_cons(h_71, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(e_71), not_null(g_71));
          else
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
  ATerm s_71 = NULL;
  ATerm t_19;
  t_19 = t;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm u_19 = t;
      if(PushChoice()==0)
        {
          ATerm b_7 (ATerm t)
          {
            ATerm t_71 = NULL,u_71 = NULL;
            t_71 = t;
            p_71 :
            if(match_cons(t_71, sym_Output_1))
              {
                u_71 = ATgetArgument(t_71, 0);
                if(s_71 != NULL && s_71 != u_71)
                  _fail(u_71);
                else
                  s_71 = u_71;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_7);
          PopChoice();
        }
      else
        {
          t = u_19;
          {
            ATerm v_71 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            v_71 = t;
            if(s_71 != NULL && s_71 != v_71)
              _fail(v_71);
            else
              s_71 = v_71;
          }
        }
      return(t);
    }
    ATerm a_7 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, l_6, a_7);
  }
  t = t_19;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        ATerm i_7 (ATerm t)
        {
          t = not_null(s_71);
          return(t);
        }
        t = split_2(t, i_7, _id);
        return(t);
      }
      t = TCons_2(t, h_7, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_7);
    {
      ATerm v_19 = t;
      if(PushChoice()==0)
        {
          ATerm j_7 (ATerm t)
          {
            ATerm b_8 (ATerm t)
            {
              ATerm w_71 = NULL;
              w_71 = t;
              r_71 :
              if(!(match_cons(w_71, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, b_8);
            return(t);
          }
          ATerm o_7 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, j_7, o_7);
          PopChoice();
        }
      else
        {
          t = v_19;
          {
            ATerm c_8 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, c_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm e_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  ATerm w_19;
  w_19 = t;
  t = dtime_0(t);
  t = w_19;
  t = m_63(t);
  {
    ATerm x_19;
    x_19 = t;
    {
      ATerm f_72 = NULL;
      t = dtime_0(t);
      f_72 = t;
      if(e_72 != NULL && e_72 != f_72)
        _fail(f_72);
      else
        e_72 = f_72;
    }
    t = x_19;
    g_72 = t;
    b_72 :
    if(match_cons(g_72, sym_TCons_2))
      {
        h_72 = ATgetArgument(g_72, 0);
        i_72 = ATgetArgument(g_72, 1);
        c_72 :
        if(match_cons(i_72, sym_TCons_2))
          {
            j_72 = ATgetArgument(i_72, 0);
            k_72 = ATgetArgument(i_72, 1);
            d_72 :
            if(match_cons(k_72, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(e_72)), not_null(h_72)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_72), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm q_72 = NULL;
  q_72 = t;
  t = SSL_ReadFromFile(not_null(q_72));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm))
{
  ATerm w_72 = NULL;
  ATerm y_72 = NULL,a_73 = NULL;
  w_72 = t;
  {
    ATerm y_19;
    y_19 = t;
    {
      ATerm z_72 = NULL;
      t = not_null(w_72);
      t = n_76(t);
      z_72 = t;
      if(y_72 != NULL && y_72 != z_72)
        _fail(z_72);
      else
        y_72 = z_72;
    }
    t = y_19;
    {
      ATerm b_73 = NULL;
      t = not_null(w_72);
      t = o_76(t);
      b_73 = t;
      if(a_73 != NULL && a_73 != b_73)
        _fail(b_73);
      else
        a_73 = b_73;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_73), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_73 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm l_20 = t;
    if(PushChoice()==0)
      {
        ATerm d_8 (ATerm t)
        {
          ATerm p_73 = NULL,q_73 = NULL;
          p_73 = t;
          g_73 :
          if(match_cons(p_73, sym_Input_1))
            {
              q_73 = ATgetArgument(p_73, 0);
              if(o_73 != NULL && o_73 != q_73)
                _fail(q_73);
              else
                o_73 = q_73;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_8);
        PopChoice();
      }
    else
      {
        t = l_20;
        {
          ATerm r_73 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          r_73 = t;
          if(o_73 != NULL && o_73 != r_73)
            _fail(r_73);
          else
            o_73 = r_73;
        }
      }
  }
  t = k_20;
  {
    ATerm l_8 (ATerm t)
    {
      t = not_null(o_73);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_8);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  u_73 :
  if(!(match_cons(v_73, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm m_20 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = m_20;
        {
          ATerm o_20 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = o_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_8);
  t = l_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_73 = NULL;
  x_73 = t;
  t = SSL_table_create(not_null(x_73));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_74 = NULL;
  b_74 = t;
  {
    ATerm q_20;
    q_20 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_74), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = q_20;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
  j_74 = t;
  h_74 :
  if(match_string(j_74, "register-usage-info"))
    t = register_usage_1(t, m_0);
  else
    {
      if(match_cons(j_74, sym_Cons_2))
        {
          k_74 = ATgetArgument(j_74, 0);
          l_74 = ATgetArgument(j_74, 1);
          i_74 :
          if(match_cons(l_74, sym_Cons_2))
            {
              m_74 = ATgetArgument(l_74, 0);
              n_74 = ATgetArgument(l_74, 1);
              {
                ATerm r_74 = NULL;
                ATerm r_20;
                r_20 = t;
                t = not_null(k_74);
                t = k_0(t);
                t = r_20;
                {
                  ATerm s_74 = NULL;
                  t = not_null(m_74);
                  t = l_0(t);
                  s_74 = t;
                  if(r_74 != NULL && r_74 != s_74)
                    _fail(s_74);
                  else
                    r_74 = s_74;
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_74), not_null(n_74));
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
  ATerm s_20 = t;
  if(PushChoice()==0)
    {
      ATerm n_8 (ATerm t)
      {
        ATerm l_75 = NULL;
        l_75 = t;
        w_74 :
        if(!(match_string(l_75, "-S")))
          {
            if(!(match_string(l_75, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm p_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, n_8, o_8, p_8);
      PopChoice();
    }
  else
    {
      t = s_20;
      {
        ATerm t_20 = t;
        if(PushChoice()==0)
          {
            ATerm q_8 (ATerm t)
            {
              ATerm m_75 = NULL;
              m_75 = t;
              x_74 :
              if(!(match_string(m_75, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm r_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm s_8 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, q_8, r_8, s_8);
            PopChoice();
          }
        else
          {
            t = t_20;
            {
              ATerm u_20 = t;
              if(PushChoice()==0)
                {
                  ATerm x_8 (ATerm t)
                  {
                    ATerm p_75 = NULL;
                    p_75 = t;
                    y_74 :
                    if(!(match_string(p_75, "-v")))
                      {
                        if(!(match_string(p_75, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_8 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm a_9 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, x_8, y_8, a_9);
                  PopChoice();
                }
              else
                {
                  t = u_20;
                  {
                    ATerm v_20 = t;
                    if(PushChoice()==0)
                      {
                        ATerm c_9 (ATerm t)
                        {
                          ATerm q_75 = NULL;
                          q_75 = t;
                          b_75 :
                          if(!(match_string(q_75, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_9 (ATerm t)
                        {
                          ATerm r_75 = NULL;
                          ATerm s_75 = NULL;
                          s_75 = t;
                          if(r_75 != NULL && r_75 != s_75)
                            _fail(s_75);
                          else
                            r_75 = s_75;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_75));
                          return(t);
                        }
                        ATerm e_9 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, c_9, d_9, e_9);
                        PopChoice();
                      }
                    else
                      {
                        t = v_20;
                        {
                          ATerm w_20 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_9 (ATerm t)
                              {
                                ATerm t_75 = NULL;
                                t_75 = t;
                                d_75 :
                                if(!(match_string(t_75, "-i")))
                                  {
                                    if(!(match_string(t_75, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_9 (ATerm t)
                              {
                                ATerm u_75 = NULL;
                                ATerm v_75 = NULL;
                                v_75 = t;
                                if(u_75 != NULL && u_75 != v_75)
                                  _fail(v_75);
                                else
                                  u_75 = v_75;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_75));
                                return(t);
                              }
                              ATerm h_9 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, f_9, g_9, h_9);
                              PopChoice();
                            }
                          else
                            {
                              t = w_20;
                              {
                                ATerm x_20 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm i_9 (ATerm t)
                                    {
                                      ATerm w_75 = NULL;
                                      w_75 = t;
                                      f_75 :
                                      if(!(match_string(w_75, "-o")))
                                        {
                                          if(!(match_string(w_75, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_9 (ATerm t)
                                    {
                                      ATerm x_75 = NULL;
                                      ATerm y_75 = NULL;
                                      y_75 = t;
                                      if(x_75 != NULL && x_75 != y_75)
                                        _fail(y_75);
                                      else
                                        x_75 = y_75;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_75));
                                      return(t);
                                    }
                                    ATerm o_9 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_9, n_9, o_9);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_20;
                                    {
                                      ATerm y_20 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm q_9 (ATerm t)
                                          {
                                            ATerm z_75 = NULL;
                                            z_75 = t;
                                            j_75 :
                                            if(!(match_string(z_75, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm t_9 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, q_9, s_9, t_9);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_20;
                                          {
                                            ATerm u_9 (ATerm t)
                                            {
                                              ATerm a_76 = NULL;
                                              a_76 = t;
                                              k_75 :
                                              if(!(match_string(a_76, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm w_9 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, u_9, v_9, w_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm f_76 = NULL;
  f_76 = t;
  t = SSL_table_destroy(not_null(f_76));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_76 = NULL;
  k_76 = t;
  t = SSL_exit(not_null(k_76));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_76 = NULL;
  q_76 = t;
  t = SSL_implode_string(not_null(q_76));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm t_76 (ATerm t)
  {
    ATerm z_20 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, t_76);
        PopChoice();
      }
    else
      {
        t = z_20;
        t = Nil_0(t);
        t = n_75(t);
      }
    return(t);
  }
  t = t_76(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_21 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = a_21;
      {
        ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
        w_76 = t;
        v_76 :
        if(match_cons(w_76, sym_Cons_2))
          {
            x_76 = ATgetArgument(w_76, 0);
            y_76 = ATgetArgument(w_76, 1);
            t = not_null(x_76);
            {
              ATerm b_10 (ATerm t)
              {
                t = not_null(y_76);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_10);
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
  ATerm e_77 = NULL;
  e_77 = t;
  t = SSL_explode_string(not_null(e_77));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm i_77 (ATerm t)
  {
    ATerm b_21 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = b_21;
        t = Cons_2(t, z_74, i_77);
      }
    return(t);
  }
  t = i_77(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,w_77 = NULL;
  o_77 = t;
  k_77 :
  if(match_cons(o_77, sym_TCons_2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      l_77 :
      if(match_cons(p_77, sym_Nil_0))
        {
          m_77 :
          if(match_cons(q_77, sym_TCons_2))
            {
              r_77 = ATgetArgument(q_77, 0);
              w_77 = ATgetArgument(q_77, 1);
              n_77 :
              if(match_cons(w_77, sym_TNil_0))
                t = not_null(r_77);
              else
                _fail(t);
            }
          else
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
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  g_78 = t;
  c_78 :
  if(match_cons(g_78, sym_TCons_2))
    {
      h_78 = ATgetArgument(g_78, 0);
      k_78 = ATgetArgument(g_78, 1);
      d_78 :
      if(match_cons(h_78, sym_Cons_2))
        {
          i_78 = ATgetArgument(h_78, 0);
          j_78 = ATgetArgument(h_78, 1);
          e_78 :
          if(match_cons(k_78, sym_TCons_2))
            {
              l_78 = ATgetArgument(k_78, 0);
              m_78 = ATgetArgument(k_78, 1);
              f_78 :
              if(match_cons(m_78, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(i_78), not_null(l_78)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm r_78 (ATerm t)
  {
    ATerm c_21 = t;
    if(PushChoice()==0)
      {
        t = r_64(t);
        t = r_78(t);
        PopChoice();
      }
    else
      {
        t = c_21;
        t = s_64(t);
      }
    return(t);
  }
  t = r_78(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_64 (ATerm))
{
  t = repeat_2(t, u_64, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm t_78 = NULL;
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_78), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym_Program_1))
    {
      a_79 = ATgetArgument(z_78, 0);
      {
        ATerm c_79 = NULL;
        t = not_null(a_79);
        t = q_50(t);
        c_79 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_79));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_79 = NULL;
  ATerm c_10 (ATerm t)
  {
    ATerm d_10 (ATerm t)
    {
      ATerm n_79 = NULL;
      n_79 = t;
      if(m_79 != NULL && m_79 != n_79)
        _fail(n_79);
      else
        m_79 = n_79;
      return(t);
    }
    t = Program_1(t, d_10);
    return(t);
  }
  t = option_defined_1(t, c_10);
  {
    ATerm e_10 (ATerm t)
    {
      ATerm o_79 = NULL;
      ATerm p_79 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm f_10 (ATerm t)
        {
          t = not_null(m_79);
          return(t);
        }
        t = short_description_1(t, f_10);
        t = concat_strings_0(t);
        p_79 = t;
        if(o_79 != NULL && o_79 != p_79)
          _fail(p_79);
        else
          o_79 = p_79;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_79), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, e_10);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm m_10 (ATerm t)
      {
        ATerm q_79 = NULL;
        q_79 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_79), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, m_10);
      {
        ATerm n_10 (ATerm t)
        {
          ATerm s_79 = NULL;
          ATerm t_79 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm o_10 (ATerm t)
            {
              t = not_null(m_79);
              return(t);
            }
            t = long_description_1(t, o_10);
            t = concat_strings_0(t);
            t_79 = t;
            if(s_79 != NULL && s_79 != t_79)
              _fail(t_79);
            else
              s_79 = t_79;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_79), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, n_10);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  c_80 = t;
  z_79 :
  if(match_cons(c_80, sym_TCons_2))
    {
      d_80 = ATgetArgument(c_80, 0);
      e_80 = ATgetArgument(c_80, 1);
      a_80 :
      if(match_cons(e_80, sym_TCons_2))
        {
          f_80 = ATgetArgument(e_80, 0);
          g_80 = ATgetArgument(e_80, 1);
          b_80 :
          if(match_cons(g_80, sym_TNil_0))
            {
              ATerm d_21;
              d_21 = t;
              t = SSL_printnl(not_null(d_80), not_null(f_80));
              t = d_21;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm n_80 = NULL,o_80 = NULL;
  n_80 = t;
  m_80 :
  if(match_cons(n_80, sym_Undefined_1))
    {
      o_80 = ATgetArgument(n_80, 0);
      {
        ATerm q_80 = NULL;
        t = not_null(o_80);
        t = r_50(t);
        q_80 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_80));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm u_80 (ATerm t)
  {
    ATerm e_21 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, h_75, _id);
        PopChoice();
      }
    else
      {
        t = e_21;
        t = Cons_2(t, _id, u_80);
      }
    return(t);
  }
  t = u_80(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_62 (ATerm))
{
  t = fetch_1(t, q_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_80 = NULL;
  w_80 = t;
  v_80 :
  if(!(match_cons(w_80, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm f_21 = t;
  if(PushChoice()==0)
    {
      t = f_77(t);
      PopChoice();
    }
  else
    t = f_21;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  b_81 = t;
  y_80 :
  if(match_cons(b_81, sym_TCons_2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      z_80 :
      if(match_cons(d_81, sym_TCons_2))
        {
          e_81 = ATgetArgument(d_81, 0);
          f_81 = ATgetArgument(d_81, 1);
          a_81 :
          if(match_cons(f_81, sym_TNil_0))
            t = SSL_table_get(not_null(c_81), not_null(e_81));
          else
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
  ATerm p_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL;
  p_81 = t;
  l_81 :
  if(match_cons(p_81, sym_TCons_2))
    {
      y_81 = ATgetArgument(p_81, 0);
      z_81 = ATgetArgument(p_81, 1);
      m_81 :
      if(match_cons(z_81, sym_TCons_2))
        {
          a_82 = ATgetArgument(z_81, 0);
          b_82 = ATgetArgument(z_81, 1);
          n_81 :
          if(match_cons(b_82, sym_TCons_2))
            {
              c_82 = ATgetArgument(b_82, 0);
              d_82 = ATgetArgument(b_82, 1);
              o_81 :
              if(match_cons(d_82, sym_TNil_0))
                {
                  ATerm g_21;
                  g_21 = t;
                  {
                    ATerm h_82 = NULL;
                    ATerm i_82 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_82), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm h_21 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = h_21;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      i_82 = t;
                      if(h_82 != NULL && h_82 != i_82)
                        _fail(i_82);
                      else
                        h_82 = i_82;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_81), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_82), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_82), not_null(h_82)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = g_21;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm m_82 = NULL;
  ATerm n_82 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = w_61(t);
  n_82 = t;
  if(m_82 != NULL && m_82 != n_82)
    _fail(n_82);
  else
    m_82 = n_82;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_82), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  v_82 :
  if(match_string(w_82, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(match_cons(w_82, sym_Cons_2))
        {
          x_82 = ATgetArgument(w_82, 0);
          y_82 = ATgetArgument(w_82, 1);
          {
            ATerm b_83 = NULL;
            ATerm i_21;
            i_21 = t;
            t = not_null(x_82);
            t = h_0(t);
            t = i_21;
            {
              ATerm c_83 = NULL;
              t = (ATerm) ATmakeAppl(sym_TNil_0);
              t = i_0(t);
              c_83 = t;
              if(b_83 != NULL && b_83 != c_83)
                _fail(c_83);
              else
                b_83 = c_83;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_83), not_null(y_82));
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
  ATerm p_10 (ATerm t)
  {
    ATerm h_83 = NULL;
    h_83 = t;
    g_83 :
    if(!(match_string(h_83, "--help")))
      {
        if(!(match_string(h_83, "-h")))
          {
            if(!(match_string(h_83, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm t_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, p_10, q_10, t_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
  k_83 = t;
  j_83 :
  if(match_cons(k_83, sym_Cons_2))
    {
      l_83 = ATgetArgument(k_83, 0);
      m_83 = ATgetArgument(k_83, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_83)), not_null(m_83));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
  u_83 = t;
  t_83 :
  if(match_cons(u_83, sym_Cons_2))
    {
      v_83 = ATgetArgument(u_83, 0);
      w_83 = ATgetArgument(u_83, 1);
      {
        ATerm z_83 = NULL;
        t = not_null(v_83);
        {
          ATerm b_84 = NULL;
          t = t_59(t);
          z_83 = t;
          t = not_null(w_83);
          t = u_59(t);
          b_84 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_83), not_null(b_84));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm h_84 = NULL;
  h_84 = t;
  g_84 :
  if(!(match_cons(h_84, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm j_21;
  j_21 = t;
  {
    ATerm u_10 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = u_61(t);
      return(t);
    }
    t = try_1(t, u_10);
  }
  t = j_21;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm j_84 = NULL;
      j_84 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_84));
      return(t);
    }
    ATerm w_10 (ATerm t)
    {
      ATerm k_21 = t;
      if(PushChoice()==0)
        {
          ATerm l_21 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = l_21;
              t = u_61(t);
              t = Cons_2(t, _id, w_10);
            }
          PopChoice();
        }
      else
        {
          t = k_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_10, w_10);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
  ATerm m_21;
  m_21 = t;
  {
    ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
    v_84 = t;
    o_84 :
    if(match_cons(v_84, sym_TCons_2))
      {
        w_84 = ATgetArgument(v_84, 0);
        x_84 = ATgetArgument(v_84, 1);
        p_84 :
        if(match_cons(x_84, sym_TCons_2))
          {
            y_84 = ATgetArgument(x_84, 0);
            z_84 = ATgetArgument(x_84, 1);
            q_84 :
            if(match_cons(z_84, sym_TCons_2))
              {
                a_85 = ATgetArgument(z_84, 0);
                b_85 = ATgetArgument(z_84, 1);
                r_84 :
                if(match_cons(b_85, sym_TNil_0))
                  {
                    if(s_84 != NULL && s_84 != w_84)
                      _fail(w_84);
                    else
                      s_84 = w_84;
                    if(t_84 != NULL && t_84 != y_84)
                      _fail(y_84);
                    else
                      t_84 = y_84;
                    if(u_84 != NULL && u_84 != a_85)
                      _fail(a_85);
                    else
                      u_84 = a_85;
                    t = SSL_table_put(not_null(s_84), not_null(t_84), not_null(u_84));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = m_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm e_85 = NULL;
  ATerm n_21;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = n_21;
  {
    ATerm x_10 (ATerm t)
    {
      ATerm o_21 = t;
      if(PushChoice()==0)
        {
          t = t_61(t);
          PopChoice();
        }
      else
        {
          t = o_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, x_10);
    {
      ATerm z_10 (ATerm t)
      {
        ATerm p_21 = t;
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
            t = p_21;
            {
              ATerm a_11 (ATerm t)
              {
                ATerm b_11 (ATerm t)
                {
                  ATerm f_85 = NULL;
                  f_85 = t;
                  if(e_85 != NULL && e_85 != f_85)
                    _fail(f_85);
                  else
                    e_85 = f_85;
                  return(t);
                }
                t = Undefined_1(t, b_11);
                return(t);
              }
              t = option_defined_1(t, a_11);
              {
                ATerm q_21;
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_85), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = q_21;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_10);
      {
        ATerm r_21;
        r_21 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = r_21;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm c_11 (ATerm t)
  {
    ATerm s_21 = t;
    if(PushChoice()==0)
      {
        t = b_63(t);
        PopChoice();
      }
    else
      {
        t = s_21;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, c_11);
  t = store_options_0(t);
  {
    ATerm t_21 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, c_63);
        PopChoice();
      }
    else
      {
        t = t_21;
        {
          ATerm c_22 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, a_63);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = c_22;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  t = iowrap_3(t, v_62, w_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    ATerm j_11 (ATerm t)
    {
      t = TCons_2(t, s_62, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, j_11);
    return(t);
  }
  t = iowrap_2(t, d_11, _fail);
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
