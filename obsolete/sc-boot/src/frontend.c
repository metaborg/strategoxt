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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
ATerm Expl_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm i_40 (ATerm), ATerm j_40 (ATerm));
ATerm Con_3 (ATerm, ATerm f_40 (ATerm), ATerm g_40 (ATerm), ATerm h_40 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_63 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm q_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_41 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm y_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm));
ATerm Let_2 (ATerm, ATerm t_42 (ATerm), ATerm u_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm), ATerm b_45 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm q_42 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm s_47 (ATerm, ATerm (ATerm)), ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_47 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_51 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm));
ATerm ConstType_1 (ATerm, ATerm t_41 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm y_41 (ATerm), ATerm z_41 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm o_44 (ATerm), ATerm p_44 (ATerm));
ATerm manytd_1 (ATerm, ATerm e_65 (ATerm));
ATerm check_constructors_1 (ATerm, ATerm i_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm x_45 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm u_44 (ATerm));
ATerm Var_1 (ATerm, ATerm c_42 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm q_47 (ATerm), ATerm r_47 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm e_47 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_61 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm k_61 (ATerm));
ATerm substitute_6 (ATerm, ATerm c_48 (ATerm), ATerm d_48 (ATerm, ATerm (ATerm)), ATerm e_48 (ATerm), ATerm f_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_48 (ATerm, ATerm (ATerm)), ATerm h_48 (ATerm));
ATerm substitute_5 (ATerm, ATerm j_48 (ATerm), ATerm k_48 (ATerm, ATerm (ATerm)), ATerm l_48 (ATerm), ATerm m_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_48 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm v_45 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm w_45 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm k_41 (ATerm), ATerm l_41 (ATerm), ATerm m_41 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm z_57 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm r_44 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm j_43 (ATerm), ATerm k_43 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm));
ATerm BAM_3 (ATerm, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm));
ATerm BA_2 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm AM_2 (ATerm, ATerm y_39 (ATerm), ATerm z_39 (ATerm));
ATerm MA_2 (ATerm, ATerm w_39 (ATerm), ATerm x_39 (ATerm));
ATerm Match_1 (ATerm, ATerm r_43 (ATerm));
ATerm Build_1 (ATerm, ATerm s_43 (ATerm));
ATerm constructs_1 (ATerm, ATerm q_44 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm d_41 (ATerm), ATerm e_41 (ATerm), ATerm f_41 (ATerm));
ATerm SDef_3 (ATerm, ATerm v_42 (ATerm), ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm o_41 (ATerm));
ATerm Signature_1 (ATerm, ATerm n_41 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm t_66 (ATerm));
ATerm one_dist_1 (ATerm, ATerm g_61 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm v_61 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm t_60 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm g_41 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_43 (ATerm), ATerm w_43 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_44 (ATerm), ATerm w_44 (ATerm), ATerm x_44 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm crush_3 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm HdMember_1 (ATerm, ATerm v_55 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm for_3 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_62 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm x_47 (ATerm), ATerm y_47 (ATerm));
ATerm alltd_1 (ATerm, ATerm k_64 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm zip_1 (ATerm, ATerm g_58 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm z_47 (ATerm), ATerm a_48 (ATerm));
ATerm substitute_1 (ATerm, ATerm b_48 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm w_53 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_54 (ATerm), ATerm p_54 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_62 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_53 (ATerm), ATerm f_53 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_49 (ATerm));
ATerm map_1 (ATerm, ATerm r_59 (ATerm));
ATerm RevExit_0 (ATerm);
ATerm Rev_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_65 (ATerm));
ATerm RevInit_0 (ATerm);
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_49 (ATerm));
ATerm Program_1 (ATerm, ATerm h_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_50 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_49 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_44 (ATerm), ATerm f_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_49 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_50 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_Match_1))
    {
      w_7 = ATgetArgument(v_7, 0);
      {
        ATerm z_7 = NULL;
        ATerm b_8 = NULL;
        t = new_0(t);
        z_7 = t;
        {
          ATerm k_10 = NULL,l_10 = NULL,k_11 = NULL;
          t = new_0(t);
          b_8 = t;
          t = not_null(w_7);
          {
            ATerm j_0 (ATerm t)
            {
              ATerm m_10 = NULL,h_11 = NULL,j_11 = NULL;
              m_10 = t;
              x_4 :
              if(match_cons(m_10, sym_Explode_2))
                {
                  h_11 = ATgetArgument(m_10, 0);
                  j_11 = ATgetArgument(m_10, 1);
                  if(k_10 != NULL && k_10 != h_11)
                    _fail(h_11);
                  else
                    k_10 = h_11;
                  if(l_10 != NULL && l_10 != j_11)
                    _fail(j_11);
                  else
                    l_10 = j_11;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_7));
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1(t, j_0);
            k_11 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_8), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_8))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_8)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_7)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
          }
        }
      }
    }
  else
    {
      if(match_cons(v_7, sym_Build_1))
        {
          w_7 = ATgetArgument(v_7, 0);
          {
            ATerm l_12 = NULL;
            ATerm v_13 = NULL,w_13 = NULL,h_14 = NULL;
            t = new_0(t);
            l_12 = t;
            t = not_null(w_7);
            {
              ATerm k_0 (ATerm t)
              {
                ATerm x_13 = NULL,y_13 = NULL,g_14 = NULL;
                x_13 = t;
                o_7 :
                if(match_cons(x_13, sym_Explode_2))
                  {
                    y_13 = ATgetArgument(x_13, 0);
                    g_14 = ATgetArgument(x_13, 1);
                    if(v_13 != NULL && v_13 != y_13)
                      _fail(y_13);
                    else
                      v_13 = y_13;
                    if(w_13 != NULL && w_13 != g_14)
                      _fail(g_14);
                    else
                      w_13 = g_14;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_12));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_0);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_12), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_13), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_14)))));
            }
          }
        }
      else
        {
          if(match_cons(v_7, sym_ExplodeCong_2))
            {
              w_7 = ATgetArgument(v_7, 0);
              x_7 = ATgetArgument(v_7, 1);
              {
                ATerm v_14 = NULL;
                ATerm x_14 = NULL;
                t = new_0(t);
                v_14 = t;
                {
                  ATerm z_14 = NULL;
                  t = new_0(t);
                  x_14 = t;
                  {
                    ATerm b_15 = NULL;
                    t = new_0(t);
                    z_14 = t;
                    t = new_0(t);
                    b_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(z_14), (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_15), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_14)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(w_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_14))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_14)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_15))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_14)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_15)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
                  }
                }
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Build_1))
    {
      j_17 = ATgetArgument(i_17, 0);
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            ATerm l_17 = NULL;
            ATerm n_17 = NULL,r_17 = NULL,v_17 = NULL;
            t = new_0(t);
            l_17 = t;
            t = not_null(j_17);
            {
              ATerm l_0 (ATerm t)
              {
                ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
                s_17 = t;
                x_15 :
                if(match_cons(s_17, sym_App_2))
                  {
                    t_17 = ATgetArgument(s_17, 0);
                    u_17 = ATgetArgument(s_17, 1);
                    if(n_17 != NULL && n_17 != t_17)
                      _fail(t_17);
                    else
                      n_17 = t_17;
                    if(r_17 != NULL && r_17 != u_17)
                      _fail(u_17);
                    else
                      r_17 = u_17;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_17));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, l_0);
              v_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_17), not_null(r_17), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_17)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_17))));
            }
            PopChoice();
          }
        else
          {
            t = q_8;
            {
              ATerm y_17 = NULL;
              ATerm a_18 = NULL,d_18 = NULL;
              t = new_0(t);
              y_17 = t;
              t = not_null(j_17);
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm b_18 = NULL,c_18 = NULL;
                  b_18 = t;
                  f_17 :
                  if(match_cons(b_18, sym_RootApp_1))
                    {
                      c_18 = ATgetArgument(b_18, 0);
                      if(a_18 != NULL && a_18 != c_18)
                        _fail(c_18);
                      else
                        a_18 = c_18;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_17));
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, m_0);
                d_18 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(y_17), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_17))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_18))));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  q_18 :
  if(match_cons(t_18, sym_Build_1))
    {
      u_18 = ATgetArgument(t_18, 0);
      r_18 :
      if(match_cons(u_18, sym_App_2))
        {
          v_18 = ATgetArgument(u_18, 0);
          s_18 = ATgetArgument(u_18, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_18)), not_null(v_18));
        }
      else
        {
          if(match_cons(u_18, sym_RootApp_1))
            {
              v_18 = ATgetArgument(u_18, 0);
              t = not_null(v_18);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_Build_1))
    {
      k_20 = ATgetArgument(j_20, 0);
      {
        ATerm r_8 = t;
        if(PushChoice()==0)
          {
            ATerm m_20 = NULL,n_20 = NULL,u_20 = NULL;
            t = not_null(k_20);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
                o_20 = t;
                n_19 :
                if(match_cons(o_20, sym_App_2))
                  {
                    p_20 = ATgetArgument(o_20, 0);
                    r_20 = ATgetArgument(o_20, 1);
                    o_19 :
                    if(match_cons(p_20, sym_Build_1))
                      {
                        q_20 = ATgetArgument(p_20, 0);
                        if(n_20 != NULL && n_20 != q_20)
                          _fail(q_20);
                        else
                          n_20 = q_20;
                        if(m_20 != NULL && m_20 != r_20)
                          _fail(r_20);
                        else
                          m_20 = r_20;
                        t = not_null(n_20);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, n_0);
              u_20 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_20));
            }
            PopChoice();
          }
        else
          {
            t = r_8;
            {
              ATerm x_20 = NULL,h_21 = NULL;
              t = not_null(k_20);
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm d_21 = NULL,f_21 = NULL,g_21 = NULL;
                  d_21 = t;
                  f_20 :
                  if(match_cons(d_21, sym_RootApp_1))
                    {
                      f_21 = ATgetArgument(d_21, 0);
                      g_20 :
                      if(match_cons(f_21, sym_Build_1))
                        {
                          g_21 = ATgetArgument(f_21, 0);
                          if(x_20 != NULL && x_20 != g_21)
                            _fail(g_21);
                          else
                            x_20 = g_21;
                          t = not_null(x_20);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, o_0);
                h_21 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_21));
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  j_22 = t;
  d_22 :
  if(match_cons(j_22, sym_Seqs_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      e_22 :
      if(match_cons(k_22, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(k_22, sym_Cons_2))
            {
              h_22 = ATgetArgument(k_22, 0);
              i_22 = ATgetArgument(k_22, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_22)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(j_22, sym_Choices_1))
        {
          k_22 = ATgetArgument(j_22, 0);
          f_22 :
          if(match_cons(k_22, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(k_22, sym_Cons_2))
                {
                  h_22 = ATgetArgument(k_22, 0);
                  i_22 = ATgetArgument(k_22, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_22)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(j_22, sym_LChoices_1))
            {
              k_22 = ATgetArgument(j_22, 0);
              g_22 :
              if(match_cons(k_22, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(k_22, sym_Cons_2))
                    {
                      h_22 = ATgetArgument(k_22, 0);
                      i_22 = ATgetArgument(k_22, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_22)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(j_22, sym_Lets_2))
                {
                  k_22 = ATgetArgument(j_22, 0);
                  l_22 = ATgetArgument(j_22, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_22), not_null(l_22));
                }
              else
                {
                  if(match_cons(j_22, sym_BA_2))
                    {
                      k_22 = ATgetArgument(j_22, 0);
                      l_22 = ATgetArgument(j_22, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_22)), not_null(k_22));
                    }
                  else
                    {
                      if(match_cons(j_22, sym_MA_2))
                        {
                          k_22 = ATgetArgument(j_22, 0);
                          l_22 = ATgetArgument(j_22, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_22)), not_null(l_22));
                        }
                      else
                        {
                          if(match_cons(j_22, sym_AM_2))
                            {
                              k_22 = ATgetArgument(j_22, 0);
                              l_22 = ATgetArgument(j_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_22)));
                            }
                          else
                            {
                              if(match_cons(j_22, sym_BAM_3))
                                {
                                  k_22 = ATgetArgument(j_22, 0);
                                  l_22 = ATgetArgument(j_22, 1);
                                  m_22 = ATgetArgument(j_22, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_22)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_22)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(j_22, sym_InfixApp_3))
                                    {
                                      k_22 = ATgetArgument(j_22, 0);
                                      l_22 = ATgetArgument(j_22, 1);
                                      m_22 = ATgetArgument(j_22, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_22), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_22), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
ATerm Wld_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  v_23 :
  if(!(match_cons(w_23, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm s_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm t_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = t_8;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, p_0);
      PopChoice();
      _fail(t);
    }
  else
    t = s_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_40 (ATerm), ATerm j_40 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,f_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_App_2))
    {
      c_24 = ATgetArgument(b_24, 0);
      f_24 = ATgetArgument(b_24, 1);
      {
        ATerm i_24 = NULL;
        t = not_null(c_24);
        {
          ATerm k_24 = NULL;
          t = i_40(t);
          i_24 = t;
          t = not_null(f_24);
          t = j_40(t);
          k_24 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_24), not_null(k_24));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm f_40 (ATerm), ATerm g_40 (ATerm), ATerm h_40 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Con_3))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      x_24 = ATgetArgument(u_24, 2);
      {
        ATerm b_25 = NULL;
        t = not_null(v_24);
        {
          ATerm d_25 = NULL;
          t = f_40(t);
          b_25 = t;
          t = not_null(w_24);
          {
            ATerm f_25 = NULL;
            t = g_40(t);
            d_25 = t;
            t = not_null(x_24);
            t = h_40(t);
            f_25 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(b_25), not_null(d_25), not_null(f_25));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pureterm_0 (ATerm t)
{
  ATerm u_8 = t;
  if(PushChoice()==0)
    {
      ATerm q_0 (ATerm t)
      {
        ATerm v_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = v_8;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, q_0);
      PopChoice();
      _fail(t);
    }
  else
    t = u_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  p_25 = t;
  n_25 :
  if(match_cons(p_25, sym_SRule_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      o_25 :
      if(match_cons(q_25, sym_Rule_3))
        {
          r_25 = ATgetArgument(q_25, 0);
          s_25 = ATgetArgument(q_25, 1);
          t_25 = ATgetArgument(q_25, 2);
          t = not_null(r_25);
          t = pureterm_0(t);
          t = not_null(s_25);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_25)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(q_25, sym_StratRule_3))
            {
              r_25 = ATgetArgument(q_25, 0);
              s_25 = ATgetArgument(q_25, 1);
              t_25 = ATgetArgument(q_25, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_25), (ATerm) ATmakeAppl(sym_Cons_2, not_null(t_25), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm c_26 (ATerm t)
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        t = w_63(t);
        PopChoice();
      }
    else
      {
        t = w_8;
        t = _one(t, c_26);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  r_26 = t;
  p_26 :
  if(match_cons(r_26, sym_SRule_1))
    {
      s_26 = ATgetArgument(r_26, 0);
      q_26 :
      if(match_cons(s_26, sym_Rule_3))
        {
          t_26 = ATgetArgument(s_26, 0);
          u_26 = ATgetArgument(s_26, 1);
          v_26 = ATgetArgument(s_26, 2);
          {
            ATerm z_26 = NULL;
            ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,j_27 = NULL;
            t = new_0(t);
            z_26 = t;
            t = not_null(t_26);
            {
              ATerm l_27 = NULL,m_27 = NULL,z_27 = NULL;
              ATerm r_0 (ATerm t)
              {
                ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
                e_27 = t;
                g_26 :
                if(match_cons(e_27, sym_Con_3))
                  {
                    f_27 = ATgetArgument(e_27, 0);
                    h_27 = ATgetArgument(e_27, 1);
                    i_27 = ATgetArgument(e_27, 2);
                    h_26 :
                    if(match_cons(f_27, sym_Var_1))
                      {
                        g_27 = ATgetArgument(f_27, 0);
                        if(d_27 != NULL && d_27 != g_27)
                          _fail(g_27);
                        else
                          d_27 = g_27;
                        if(b_27 != NULL && b_27 != h_27)
                          _fail(h_27);
                        else
                          b_27 = h_27;
                        if(c_27 != NULL && c_27 != i_27)
                          _fail(i_27);
                        else
                          c_27 = i_27;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_27));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, r_0);
              j_27 = t;
              t = not_null(u_26);
              {
                ATerm s_0 (ATerm t)
                {
                  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,x_27 = NULL,y_27 = NULL;
                  n_27 = t;
                  k_26 :
                  if(match_cons(n_27, sym_Con_3))
                    {
                      o_27 = ATgetArgument(n_27, 0);
                      q_27 = ATgetArgument(n_27, 1);
                      r_27 = ATgetArgument(n_27, 2);
                      l_26 :
                      if(match_cons(o_27, sym_Var_1))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          m_26 :
                          if(match_cons(r_27, sym_Call_2))
                            {
                              x_27 = ATgetArgument(r_27, 0);
                              y_27 = ATgetArgument(r_27, 1);
                              n_26 :
                              if(match_cons(y_27, sym_Nil_0))
                                {
                                  if(d_27 != NULL && d_27 != p_27)
                                    _fail(p_27);
                                  else
                                    d_27 = p_27;
                                  if(l_27 != NULL && l_27 != q_27)
                                    _fail(q_27);
                                  else
                                    l_27 = q_27;
                                  if(m_27 != NULL && m_27 != x_27)
                                    _fail(x_27);
                                  else
                                    m_27 = x_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_26));
                                }
                              else
                                _fail(t);
                            }
                          else
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
                z_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(z_26), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_27), not_null(z_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_26), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(m_27), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_27), not_null(l_27), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_27)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_26)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = x_8;
        {
          ATerm y_8 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = y_8;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = z_8;
            {
              ATerm a_9 = t;
              if(PushChoice()==0)
                {
                  ATerm b_9 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = b_9;
                      {
                        ATerm c_9 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = c_9;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = a_9;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, v_0);
    }
    return(t);
  }
  t = topdown_1(t, u_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, w_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Strategies_1))
    {
      n_28 = ATgetArgument(m_28, 0);
      {
        ATerm p_28 = NULL;
        t = not_null(n_28);
        t = q_41(t);
        p_28 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_28));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_41 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Specification_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      {
        ATerm a_29 = NULL;
        t = not_null(y_28);
        t = s_41(t);
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Cons_2))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      t = not_null(h_29);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm d_9 = t;
  if(PushChoice()==0)
    {
      ATerm x_0 (ATerm t)
      {
        t = split_2(t, _id, y_44);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
            a_30 = t;
            r_29 :
            if(match_cons(a_30, sym_TCons_2))
              {
                b_30 = ATgetArgument(a_30, 0);
                f_30 = ATgetArgument(a_30, 1);
                s_29 :
                if(match_cons(b_30, sym_SDef_3))
                  {
                    c_30 = ATgetArgument(b_30, 0);
                    d_30 = ATgetArgument(b_30, 1);
                    e_30 = ATgetArgument(b_30, 2);
                    t_29 :
                    if(match_cons(f_30, sym_TCons_2))
                      {
                        g_30 = ATgetArgument(f_30, 0);
                        h_30 = ATgetArgument(f_30, 1);
                        u_29 :
                        if(match_cons(h_30, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_30), not_null(d_30), not_null(e_30));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, y_0);
        }
        return(t);
      }
      t = Let_2(t, x_0, _id);
      PopChoice();
    }
  else
    {
      t = d_9;
      {
        ATerm e_9 = t;
        if(PushChoice()==0)
          {
            ATerm z_0 (ATerm t)
            {
              t = split_2(t, _id, y_44);
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
                  p_30 = t;
                  w_29 :
                  if(match_cons(p_30, sym_TCons_2))
                    {
                      q_30 = ATgetArgument(p_30, 0);
                      v_30 = ATgetArgument(p_30, 1);
                      x_29 :
                      if(match_cons(q_30, sym_VarDec_2))
                        {
                          r_30 = ATgetArgument(q_30, 0);
                          s_30 = ATgetArgument(q_30, 1);
                          y_29 :
                          if(match_cons(v_30, sym_TCons_2))
                            {
                              w_30 = ATgetArgument(v_30, 0);
                              x_30 = ATgetArgument(v_30, 1);
                              z_29 :
                              if(match_cons(x_30, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_30), not_null(s_30));
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, a_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, z_0, _id);
            PopChoice();
          }
        else
          {
            t = e_9;
            {
              ATerm b_1 (ATerm t)
              {
                t = y_44(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, b_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym_Rec_2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      {
        ATerm t_31 = NULL;
        t = not_null(p_31);
        {
          ATerm v_31 = NULL;
          t = r_42(t);
          t_31 = t;
          t = not_null(q_31);
          t = s_42(t);
          v_31 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(t_31), not_null(v_31));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm t_42 (ATerm), ATerm u_42 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Let_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm j_32 = NULL;
        t = not_null(f_32);
        {
          ATerm l_32 = NULL;
          t = t_42(t);
          j_32 = t;
          t = not_null(g_32);
          t = u_42(t);
          l_32 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_32), not_null(l_32));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm), ATerm b_45 (ATerm))
{
  ATerm f_9 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, z_44, z_44);
      PopChoice();
    }
  else
    {
      t = f_9;
      {
        ATerm g_9 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, b_45, b_45, z_44);
            PopChoice();
          }
        else
          {
            t = g_9;
            t = Rec_2(t, b_45, z_44);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  v_32 :
  if(match_cons(e_33, sym_Rec_2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_33), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  o_33 = t;
  n_33 :
  if(match_cons(o_33, sym_SDef_3))
    {
      p_33 = ATgetArgument(o_33, 0);
      q_33 = ATgetArgument(o_33, 1);
      r_33 = ATgetArgument(o_33, 2);
      t = not_null(q_33);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
          z_33 = t;
          m_33 :
          if(match_cons(z_33, sym_VarDec_2))
            {
              a_34 = ATgetArgument(z_33, 0);
              b_34 = ATgetArgument(z_33, 1);
              t = not_null(a_34);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, c_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Let_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      t = not_null(k_34);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
          o_34 = t;
          h_34 :
          if(match_cons(o_34, sym_SDef_3))
            {
              p_34 = ATgetArgument(o_34, 0);
              q_34 = ATgetArgument(o_34, 1);
              r_34 = ATgetArgument(o_34, 2);
              t = not_null(p_34);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, d_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm q_42 (ATerm))
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym_SVar_1))
    {
      b_35 = ATgetArgument(a_35, 0);
      {
        ATerm d_35 = NULL;
        t = not_null(b_35);
        t = q_42(t);
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(d_35));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm h_9 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = h_9;
        {
          ATerm i_9 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = i_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, e_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm s_47 (ATerm, ATerm (ATerm)), ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_47 (ATerm, ATerm (ATerm)))
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_35), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm p_35 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        ATerm j_9 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, s_47);
            PopChoice();
          }
        else
          {
            t = j_9;
            t = RnBinding_2(t, t_47, v_47);
            t = DistBinding_2(t, p_35, u_47);
          }
        return(t);
      }
      t = env_alltd_1(t, f_1);
      return(t);
    }
    t = p_35(t);
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
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,e_36 = NULL,f_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym_SDef_3))
    {
      z_35 = ATgetArgument(y_35, 0);
      e_36 = ATgetArgument(y_35, 1);
      f_36 = ATgetArgument(y_35, 2);
      {
        ATerm p_36 = NULL;
        ATerm q_36 = NULL;
        t = not_null(f_36);
        t = tvars_0(t);
        q_36 = t;
        if(p_36 != NULL && p_36 != q_36)
          _fail(q_36);
        else
          p_36 = q_36;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_35), not_null(e_36), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_36), not_null(f_36)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm v_37 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_RDef_3))
    {
      j_39 = ATgetArgument(v_37, 0);
      k_39 = ATgetArgument(v_37, 1);
      l_39 = ATgetArgument(v_37, 2);
      {
        ATerm p_39 = NULL;
        ATerm q_39 = NULL;
        t = not_null(l_39);
        t = tvars_0(t);
        q_39 = t;
        if(p_39 != NULL && p_39 != q_39)
          _fail(q_39);
        else
          p_39 = q_39;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_39), not_null(k_39), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_39), (ATerm) ATmakeAppl(sym_SRule_1, not_null(l_39))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_39)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  y_40 = t;
  t_40 :
  if(match_cons(y_40, sym_OpDecl_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      u_40 :
      if(match_cons(a_41, sym_ConstType_1))
        {
          b_41 = ATgetArgument(a_41, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_40), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_40), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(a_41, sym_FunType_2))
            {
              b_41 = ATgetArgument(a_41, 0);
              c_41 = ATgetArgument(a_41, 1);
              {
                ATerm a_42 = NULL,b_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
                t = not_null(b_41);
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = new_0(t);
                    {
                      ATerm h_1 (ATerm t)
                      {
                        ATerm w_41 = NULL;
                        w_41 = t;
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                        return(t);
                      }
                      t = split_2(t, h_1, _id);
                    }
                    return(t);
                  }
                  t = map_1(t, g_1);
                  t = unzip_0(t);
                  a_42 = t;
                  q_40 :
                  if(match_cons(a_42, sym_TCons_2))
                    {
                      b_42 = ATgetArgument(a_42, 0);
                      d_42 = ATgetArgument(a_42, 1);
                      r_40 :
                      if(match_cons(d_42, sym_TCons_2))
                        {
                          e_42 = ATgetArgument(d_42, 0);
                          f_42 = ATgetArgument(d_42, 1);
                          s_40 :
                          if(match_cons(f_42, sym_TNil_0))
                            {
                              ATerm k_42 = NULL;
                              ATerm l_42 = NULL;
                              t = not_null(e_42);
                              t = map_1(t, MkCall_0);
                              l_42 = t;
                              if(k_42 != NULL && k_42 != l_42)
                                _fail(l_42);
                              else
                                k_42 = l_42;
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_40), not_null(b_42), (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_40), not_null(k_42)));
                            }
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
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_Sorts_1))
    {
      d_43 = ATgetArgument(c_43, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(c_43, sym_Constructors_1))
        {
          d_43 = ATgetArgument(c_43, 0);
          t = not_null(d_43);
          t = map_1(t, MkCongDef_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,c_44 = NULL,d_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  y_43 = t;
  o_43 :
  if(match_cons(y_43, sym_Specification_1))
    {
      z_43 = ATgetArgument(y_43, 0);
      p_43 :
      if(match_cons(z_43, sym_Cons_2))
        {
          c_44 = ATgetArgument(z_43, 0);
          g_44 = ATgetArgument(z_43, 1);
          q_43 :
          if(match_cons(c_44, sym_Signature_1))
            {
              d_44 = ATgetArgument(c_44, 0);
              t_43 :
              if(match_cons(g_44, sym_Cons_2))
                {
                  h_44 = ATgetArgument(g_44, 0);
                  j_44 = ATgetArgument(g_44, 1);
                  u_43 :
                  if(match_cons(h_44, sym_Strategies_1))
                    {
                      i_44 = ATgetArgument(h_44, 0);
                      x_43 :
                      if(match_cons(j_44, sym_Nil_0))
                        {
                          ATerm n_44 = NULL;
                          ATerm t_44 = NULL,d_45 = NULL,f_45 = NULL;
                          ATerm k_9;
                          k_9 = t;
                          {
                            ATerm c_45 = NULL;
                            t = not_null(d_44);
                            t = congdefs_0(t);
                            c_45 = t;
                            if(t_44 != NULL && t_44 != c_45)
                              _fail(c_45);
                            else
                              t_44 = c_45;
                          }
                          t = k_9;
                          {
                            ATerm e_45 = NULL;
                            t = not_null(i_44);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm l_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_9;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, i_1);
                              e_45 = t;
                              if(d_45 != NULL && d_45 != e_45)
                                _fail(e_45);
                              else
                                d_45 = e_45;
                            }
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_44), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_45), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = conc_0(t);
                            f_45 = t;
                            if(n_44 != NULL && n_44 != f_45)
                              _fail(f_45);
                            else
                              n_44 = f_45;
                          }
                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(d_44)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_44)), (ATerm) ATmakeAppl(sym_Nil_0))));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm j_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm k_1 (ATerm t)
    {
      ATerm m_45 = NULL;
      ATerm o_45 = NULL;
      m_45 = t;
      {
        ATerm p_45 = NULL;
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = k_51(t);
        p_45 = t;
        if(o_45 != NULL && o_45 != p_45)
          _fail(p_45);
        else
          o_45 = p_45;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_45), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_45), (ATerm) ATmakeAppl(sym_Nil_0)));
      }
      return(t);
    }
    t = split_2(t, j_1, k_1);
    t = printnl_0(t);
  }
  t = m_9;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  t = SSL_int_to_string(not_null(t_45));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  i_46 = t;
  f_46 :
  if(match_cons(i_46, sym_TCons_2))
    {
      j_46 = ATgetArgument(i_46, 0);
      k_46 = ATgetArgument(i_46, 1);
      g_46 :
      if(match_cons(k_46, sym_TCons_2))
        {
          l_46 = ATgetArgument(k_46, 0);
          m_46 = ATgetArgument(k_46, 1);
          h_46 :
          if(match_cons(m_46, sym_TNil_0))
            {
              ATerm n_9 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(j_46), not_null(l_46));
                  PopChoice();
                }
              else
                {
                  t = n_9;
                  t = SSL_addr(not_null(j_46), not_null(l_46));
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
ATerm length_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, l_1, add_0, m_1);
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_cons(u_46, sym_FunType_2))
    {
      v_46 = ATgetArgument(u_46, 0);
      w_46 = ATgetArgument(u_46, 1);
      {
        ATerm z_46 = NULL;
        t = not_null(v_46);
        {
          ATerm b_47 = NULL;
          t = u_41(t);
          z_46 = t;
          t = not_null(w_46);
          t = v_41(t);
          b_47 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(z_46), not_null(b_47));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm t_41 (ATerm))
{
  ATerm m_47 = NULL,n_47 = NULL;
  m_47 = t;
  j_47 :
  if(match_cons(m_47, sym_ConstType_1))
    {
      n_47 = ATgetArgument(m_47, 0);
      {
        ATerm p_47 = NULL;
        t = not_null(n_47);
        t = t_41(t);
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(p_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm y_41 (ATerm), ATerm z_41 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_cons(v_48, sym_OpDecl_2))
    {
      w_48 = ATgetArgument(v_48, 0);
      x_48 = ATgetArgument(v_48, 1);
      {
        ATerm a_49 = NULL;
        t = not_null(w_48);
        {
          ATerm c_49 = NULL;
          t = y_41(t);
          a_49 = t;
          t = not_null(x_48);
          t = z_41(t);
          c_49 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(a_49), not_null(c_49));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm o_44 (ATerm), ATerm p_44 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym_Op_2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      {
        ATerm c_50 = NULL;
        ATerm o_9 = t;
        if(PushChoice()==0)
          {
            t = p_44(t);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm y_49 = NULL;
                ATerm o_1 (ATerm t)
                {
                  ATerm z_49 = NULL;
                  z_49 = t;
                  if(u_49 != NULL && u_49 != z_49)
                    _fail(z_49);
                  else
                    u_49 = z_49;
                  return(t);
                }
                ATerm p_1 (ATerm t)
                {
                  ATerm p_9 = t;
                  if(PushChoice()==0)
                    {
                      ATerm a_50 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      a_50 = t;
                      if(y_49 != NULL && y_49 != a_50)
                        _fail(a_50);
                      else
                        y_49 = a_50;
                      PopChoice();
                    }
                  else
                    {
                      t = p_9;
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm b_50 = NULL;
                          b_50 = t;
                          if(y_49 != NULL && y_49 != b_50)
                            _fail(b_50);
                          else
                            y_49 = b_50;
                          return(t);
                        }
                        t = FunType_2(t, q_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, o_1, p_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_49), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_49), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, n_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = o_9;
        {
          ATerm d_50 = NULL;
          t = not_null(v_49);
          t = length_0(t);
          t = int_to_string_0(t);
          d_50 = t;
          if(c_50 != NULL && c_50 != d_50)
            _fail(d_50);
          else
            c_50 = d_50;
          t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_49), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
          t = concat_strings_0(t);
          t = debug_1(t, o_44);
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(u_49), not_null(v_49));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm n_50 (ATerm t)
  {
    ATerm q_9 = t;
    if(PushChoice()==0)
      {
        t = e_65(t);
        {
          ATerm r_1 (ATerm t)
          {
            t = try_1(t, n_50);
            return(t);
          }
          t = _all(t, r_1);
        }
        PopChoice();
      }
    else
      {
        t = q_9;
        t = _some(t, n_50);
      }
    return(t);
  }
  t = n_50(t);
  return(t);
}
ATerm check_constructors_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,b_51 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_RDef_3))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      b_51 = ATgetArgument(w_50, 2);
      {
        ATerm f_51 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        f_51 = t;
        t = not_null(b_51);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(f_51);
              return(t);
            }
            t = CheckCons_2(t, t_1, i_0);
            return(t);
          }
          t = manytd_1(t, s_1);
          t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(x_50), not_null(y_50), not_null(b_51));
        }
      }
    }
  else
    {
      if(match_cons(w_50, sym_SDef_3))
        {
          x_50 = ATgetArgument(w_50, 0);
          y_50 = ATgetArgument(w_50, 1);
          b_51 = ATgetArgument(w_50, 2);
          {
            ATerm l_51 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_50), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            l_51 = t;
            t = not_null(b_51);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(l_51);
                  return(t);
                }
                t = CheckCons_2(t, v_1, i_0);
                return(t);
              }
              t = manytd_1(t, u_1);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_50), not_null(y_50), not_null(b_51));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  d_52 = t;
  u_51 :
  if(match_cons(d_52, sym_Specification_1))
    {
      e_52 = ATgetArgument(d_52, 0);
      v_51 :
      if(match_cons(e_52, sym_Cons_2))
        {
          f_52 = ATgetArgument(e_52, 0);
          k_52 = ATgetArgument(e_52, 1);
          w_51 :
          if(match_cons(f_52, sym_Signature_1))
            {
              g_52 = ATgetArgument(f_52, 0);
              x_51 :
              if(match_cons(g_52, sym_Cons_2))
                {
                  h_52 = ATgetArgument(g_52, 0);
                  j_52 = ATgetArgument(g_52, 1);
                  y_51 :
                  if(match_cons(h_52, sym_Constructors_1))
                    {
                      i_52 = ATgetArgument(h_52, 0);
                      z_51 :
                      if(match_cons(j_52, sym_Nil_0))
                        {
                          a_52 :
                          if(match_cons(k_52, sym_Cons_2))
                            {
                              l_52 = ATgetArgument(k_52, 0);
                              n_52 = ATgetArgument(k_52, 1);
                              b_52 :
                              if(match_cons(l_52, sym_Strategies_1))
                                {
                                  m_52 = ATgetArgument(l_52, 0);
                                  c_52 :
                                  if(match_cons(n_52, sym_Nil_0))
                                    {
                                      ATerm q_52 = NULL;
                                      t = not_null(m_52);
                                      {
                                        ATerm w_1 (ATerm t)
                                        {
                                          ATerm x_1 (ATerm t)
                                          {
                                            t = not_null(i_52);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, x_1);
                                          return(t);
                                        }
                                        t = filter_1(t, w_1);
                                        q_52 = t;
                                        t_51 :
                                        if(match_cons(q_52, sym_Nil_0))
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(i_52)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_52)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm x_45 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm s_9 = t;
      if(PushChoice()==0)
        {
          ATerm u_52 = NULL;
          t = x_45(t);
          u_52 = t;
          t_52 :
          if(!(match_cons(u_52, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = s_9;
    }
    t = r_9;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = ExpOverlay_1(t, x_45);
          return(t);
        }
        t = try_1(t, a_2);
        return(t);
      }
      t = topdown_1(t, z_1);
    }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,g_53 = NULL;
  d_53 = t;
  b_53 :
  if(match_cons(d_53, sym_Var_1))
    {
      g_53 = ATgetArgument(d_53, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_53)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(d_53, sym_Op_2))
        {
          g_53 = ATgetArgument(d_53, 0);
          c_53 = ATgetArgument(d_53, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_53)), not_null(c_53));
        }
      else
        {
          if(match_cons(d_53, sym_Str_1))
            {
              g_53 = ATgetArgument(d_53, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_53)));
            }
          else
            {
              if(match_cons(d_53, sym_Int_1))
                {
                  g_53 = ATgetArgument(d_53, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(g_53)));
                }
              else
                {
                  if(match_cons(d_53, sym_Real_1))
                    {
                      g_53 = ATgetArgument(d_53, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(g_53)));
                    }
                  else
                    {
                      if(match_cons(d_53, sym_BuildDefault_1))
                        {
                          g_53 = ATgetArgument(d_53, 0);
                          t = (ATerm) ATmakeAppl(sym_Id_0);
                        }
                      else
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Op_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm e_54 = NULL;
        t = not_null(a_54);
        {
          ATerm g_54 = NULL;
          t = g_42(t);
          e_54 = t;
          t = not_null(b_54);
          t = h_42(t);
          g_54 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_54), not_null(g_54));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, c_2);
    return(t);
  }
  t = try_1(t, b_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  w_54 = t;
  v_54 :
  if(match_cons(w_54, sym_Overlay_3))
    {
      x_54 = ATgetArgument(w_54, 0);
      y_54 = ATgetArgument(w_54, 1);
      z_54 = ATgetArgument(w_54, 2);
      {
        ATerm f_55 = NULL;
        t = not_null(y_54);
        {
          ATerm h_55 = NULL;
          ATerm d_2 (ATerm t)
          {
            ATerm d_55 = NULL;
            d_55 = t;
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
            return(t);
          }
          t = map_1(t, d_2);
          f_55 = t;
          {
            ATerm i_55 = NULL;
            t = not_null(z_54);
            t = trm_to_cong_0(t);
            i_55 = t;
            if(h_55 != NULL && h_55 != i_55)
              _fail(i_55);
            else
              h_55 = i_55;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_54), not_null(f_55), not_null(h_55));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm u_44 (ATerm))
{
  t = Scope_2(t, u_44, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm c_42 (ATerm))
{
  ATerm r_55 = NULL,s_55 = NULL;
  r_55 = t;
  p_55 :
  if(match_cons(r_55, sym_Var_1))
    {
      s_55 = ATgetArgument(r_55, 0);
      {
        ATerm u_55 = NULL;
        t = not_null(s_55);
        t = c_42(t);
        u_55 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_55));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  m_56 = t;
  f_56 :
  if(match_cons(m_56, sym_TCons_2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      j_56 :
      if(match_cons(o_56, sym_TCons_2))
        {
          p_56 = ATgetArgument(o_56, 0);
          q_56 = ATgetArgument(o_56, 1);
          k_56 :
          if(match_cons(q_56, sym_TCons_2))
            {
              r_56 = ATgetArgument(q_56, 0);
              s_56 = ATgetArgument(q_56, 1);
              l_56 :
              if(match_cons(s_56, sym_TNil_0))
                {
                  t = not_null(n_56);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm w_56 = NULL;
                      w_56 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = k_47(t);
                      return(t);
                    }
                    ATerm f_2 (ATerm t)
                    {
                      ATerm y_56 = NULL;
                      y_56 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_56), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_56), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = k_47(t);
                      return(t);
                    }
                    t = l_47(t, e_2, f_2, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm q_47 (ATerm), ATerm r_47 (ATerm, ATerm (ATerm)))
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  m_57 = t;
  j_57 :
  if(match_cons(m_57, sym_TCons_2))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      k_57 :
      if(match_cons(o_57, sym_TCons_2))
        {
          p_57 = ATgetArgument(o_57, 0);
          q_57 = ATgetArgument(o_57, 1);
          l_57 :
          if(match_cons(q_57, sym_TNil_0))
            {
              ATerm t_57 = NULL;
              t = not_null(n_57);
              {
                ATerm v_57 = NULL;
                t = q_47(t);
                t_57 = t;
                {
                  ATerm x_57 = NULL,a_58 = NULL;
                  t = map_1(t, new_0);
                  v_57 = t;
                  {
                    ATerm y_57 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    y_57 = t;
                    if(x_57 != NULL && x_57 != y_57)
                      _fail(y_57);
                    else
                      x_57 = y_57;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm i_58 = NULL;
                      t = conc_0(t);
                      a_58 = t;
                      {
                        ATerm j_58 = NULL;
                        t = not_null(n_57);
                        {
                          ATerm g_2 (ATerm t)
                          {
                            t = not_null(v_57);
                            return(t);
                          }
                          t = r_47(t, g_2);
                          j_58 = t;
                          if(i_58 != NULL && i_58 != j_58)
                            _fail(j_58);
                          else
                            i_58 = j_58;
                        }
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_58), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_58), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm Fst_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  r_58 :
  if(match_cons(s_58, sym_TCons_2))
    {
      t_58 = ATgetArgument(s_58, 0);
      u_58 = ATgetArgument(s_58, 1);
      t = not_null(t_58);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm e_47 (ATerm, ATerm (ATerm)))
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  c_59 = t;
  z_58 :
  if(match_cons(c_59, sym_TCons_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      a_59 :
      if(match_cons(e_59, sym_TCons_2))
        {
          f_59 = ATgetArgument(e_59, 0);
          g_59 = ATgetArgument(e_59, 1);
          b_59 :
          if(match_cons(g_59, sym_TNil_0))
            {
              t = not_null(d_59);
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = not_null(f_59);
                    return(t);
                  }
                  t = split_2(t, _id, i_2);
                  t = lookup_0(t);
                  return(t);
                }
                t = e_47(t, h_2);
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
ATerm all_dist_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm p_59 = NULL,q_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  p_59 = t;
  m_59 :
  if(match_cons(p_59, sym_TCons_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      t_59 = ATgetArgument(p_59, 1);
      n_59 :
      if(match_cons(t_59, sym_TCons_2))
        {
          u_59 = ATgetArgument(t_59, 0);
          v_59 = ATgetArgument(t_59, 1);
          o_59 :
          if(match_cons(v_59, sym_TNil_0))
            {
              t = not_null(q_59);
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm y_59 = NULL;
                  y_59 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = f_61(t);
                  return(t);
                }
                t = _all(t, j_2);
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
ATerm env_alltd_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm e_60 (ATerm t)
  {
    ATerm t_9 = t;
    if(PushChoice()==0)
      {
        t = k_61(t);
        PopChoice();
      }
    else
      {
        t = t_9;
        t = all_dist_1(t, e_60);
      }
    return(t);
  }
  t = e_60(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm c_48 (ATerm), ATerm d_48 (ATerm, ATerm (ATerm)), ATerm e_48 (ATerm), ATerm f_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm g_48 (ATerm, ATerm (ATerm)), ATerm h_48 (ATerm))
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  t = subs_args_0(t);
  l_60 = t;
  i_60 :
  if(match_cons(l_60, sym_TCons_2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      j_60 :
      if(match_cons(n_60, sym_TCons_2))
        {
          o_60 = ATgetArgument(n_60, 0);
          p_60 = ATgetArgument(n_60, 1);
          k_60 :
          if(match_cons(p_60, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_60), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm v_60 (ATerm t)
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm u_9 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, d_48);
                        PopChoice();
                      }
                    else
                      {
                        t = u_9;
                        {
                          ATerm v_9 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = not_null(m_60);
                                  return(t);
                                }
                                t = SubsVar_2(t, c_48, l_2);
                                t = h_48(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = v_9;
                              t = RnBinding_2(t, e_48, g_48);
                              t = DistBinding_2(t, v_60, f_48);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, k_2);
                  return(t);
                }
                t = v_60(t);
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
ATerm substitute_5 (ATerm t, ATerm j_48 (ATerm), ATerm k_48 (ATerm, ATerm (ATerm)), ATerm l_48 (ATerm), ATerm m_48 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_48 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, j_48, k_48, l_48, m_48, n_48, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm e_61 = NULL,h_61 = NULL,i_61 = NULL;
  e_61 = t;
  d_61 :
  if(match_cons(e_61, sym_Op_2))
    {
      h_61 = ATgetArgument(e_61, 0);
      i_61 = ATgetArgument(e_61, 1);
      {
        ATerm n_61 = NULL,o_61 = NULL;
        t = v_45(t);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm w_9;
            w_9 = t;
            {
              ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL;
              p_61 = t;
              c_61 :
              if(match_cons(p_61, sym_Overlay_3))
                {
                  q_61 = ATgetArgument(p_61, 0);
                  r_61 = ATgetArgument(p_61, 1);
                  s_61 = ATgetArgument(p_61, 2);
                  {
                    ATerm t_61 = NULL,u_61 = NULL,x_61 = NULL,z_61 = NULL;
                    if(h_61 != NULL && h_61 != q_61)
                      _fail(q_61);
                    else
                      h_61 = q_61;
                    if(t_61 != NULL && t_61 != r_61)
                      _fail(r_61);
                    else
                      t_61 = r_61;
                    if(u_61 != NULL && u_61 != s_61)
                      _fail(s_61);
                    else
                      u_61 = s_61;
                    {
                      ATerm x_9;
                      x_9 = t;
                      {
                        ATerm y_61 = NULL;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                        t = zip_1(t, _id);
                        y_61 = t;
                        if(x_61 != NULL && x_61 != y_61)
                          _fail(y_61);
                        else
                          x_61 = y_61;
                      }
                      t = x_9;
                      {
                        ATerm a_62 = NULL;
                        t = not_null(x_61);
                        z_61 = t;
                        if(n_61 != NULL && n_61 != z_61)
                          _fail(z_61);
                        else
                          n_61 = z_61;
                        t = not_null(u_61);
                        a_62 = t;
                        if(o_61 != NULL && o_61 != a_62)
                          _fail(a_62);
                        else
                          o_61 = a_62;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = w_9;
            return(t);
          }
          t = fetch_1(t, m_2);
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_61), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm z_9 = t;
      if(PushChoice()==0)
        {
          ATerm l_62 = NULL;
          t = w_45(t);
          l_62 = t;
          k_62 :
          if(!(match_cons(l_62, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = z_9;
    }
    t = y_9;
    {
      ATerm o_2 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          t = ExpOverlay_1(t, w_45);
          return(t);
        }
        t = repeat_1(t, p_2);
        return(t);
      }
      t = topdown_1(t, o_2);
    }
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  z_62 = t;
  r_62 :
  if(match_cons(z_62, sym_Specification_1))
    {
      a_63 = ATgetArgument(z_62, 0);
      s_62 :
      if(match_cons(a_63, sym_Cons_2))
        {
          b_63 = ATgetArgument(a_63, 0);
          d_63 = ATgetArgument(a_63, 1);
          t_62 :
          if(match_cons(b_63, sym_Signature_1))
            {
              c_63 = ATgetArgument(b_63, 0);
              u_62 :
              if(match_cons(d_63, sym_Cons_2))
                {
                  e_63 = ATgetArgument(d_63, 0);
                  g_63 = ATgetArgument(d_63, 1);
                  v_62 :
                  if(match_cons(e_63, sym_Overlays_1))
                    {
                      f_63 = ATgetArgument(e_63, 0);
                      w_62 :
                      if(match_cons(g_63, sym_Cons_2))
                        {
                          h_63 = ATgetArgument(g_63, 0);
                          j_63 = ATgetArgument(g_63, 1);
                          x_62 :
                          if(match_cons(h_63, sym_Strategies_1))
                            {
                              i_63 = ATgetArgument(h_63, 0);
                              y_62 :
                              if(match_cons(j_63, sym_Nil_0))
                                {
                                  ATerm n_63 = NULL;
                                  t = not_null(f_63);
                                  {
                                    ATerm p_63 = NULL;
                                    ATerm q_2 (ATerm t)
                                    {
                                      t = not_null(f_63);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, q_2);
                                    n_63 = t;
                                    {
                                      ATerm q_63 = NULL,s_63 = NULL,u_63 = NULL;
                                      ATerm a_10;
                                      a_10 = t;
                                      {
                                        ATerm r_63 = NULL;
                                        t = not_null(f_63);
                                        t = map_1(t, Overlay_to_Congdef_0);
                                        r_63 = t;
                                        if(q_63 != NULL && q_63 != r_63)
                                          _fail(r_63);
                                        else
                                          q_63 = r_63;
                                      }
                                      t = a_10;
                                      {
                                        ATerm t_63 = NULL;
                                        t = not_null(i_63);
                                        {
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = not_null(n_63);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, r_2);
                                          t_63 = t;
                                          if(s_63 != NULL && s_63 != t_63)
                                            _fail(t_63);
                                          else
                                            s_63 = t_63;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_63), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_63), (ATerm) ATmakeAppl(sym_TNil_0)));
                                        t = conc_0(t);
                                        u_63 = t;
                                        if(p_63 != NULL && p_63 != u_63)
                                          _fail(u_63);
                                        else
                                          p_63 = u_63;
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(c_63)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_63)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_10;
  b_10 = t;
  {
    ATerm s_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, s_2, _id);
    t = printnl_0(t);
  }
  t = b_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm c_10;
  c_10 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = c_10;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm j_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  j_64 = t;
  f_64 :
  if(match_cons(j_64, sym_TCons_2))
    {
      m_64 = ATgetArgument(j_64, 0);
      n_64 = ATgetArgument(j_64, 1);
      g_64 :
      if(match_cons(n_64, sym_TCons_2))
        {
          o_64 = ATgetArgument(n_64, 0);
          p_64 = ATgetArgument(n_64, 1);
          h_64 :
          if(match_cons(p_64, sym_TCons_2))
            {
              q_64 = ATgetArgument(p_64, 0);
              r_64 = ATgetArgument(p_64, 1);
              i_64 :
              if(match_cons(r_64, sym_TNil_0))
                {
                  ATerm v_64 = NULL,x_64 = NULL;
                  ATerm d_10;
                  d_10 = t;
                  {
                    ATerm w_64 = NULL;
                    t = not_null(m_64);
                    t = MsgU_0(t);
                    w_64 = t;
                    if(v_64 != NULL && v_64 != w_64)
                      _fail(w_64);
                    else
                      v_64 = w_64;
                  }
                  t = d_10;
                  {
                    ATerm y_64 = NULL;
                    t = not_null(q_64);
                    t = MsgE_0(t);
                    y_64 = t;
                    if(x_64 != NULL && x_64 != y_64)
                      _fail(y_64);
                    else
                      x_64 = y_64;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_64), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_64), (ATerm) ATmakeAppl(sym_Nil_0)));
                    t = concat_0(t);
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
ATerm MsgE_0 (ATerm t)
{
  ATerm j_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  j_65 = t;
  h_65 :
  if(match_cons(j_65, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(j_65, sym_Cons_2))
        {
          o_65 = ATgetArgument(j_65, 0);
          p_65 = ATgetArgument(j_65, 1);
          i_65 :
          if(match_cons(p_65, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(p_65, sym_Cons_2))
                {
                  q_65 = ATgetArgument(p_65, 0);
                  r_65 = ATgetArgument(p_65, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_65), not_null(r_65))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgU_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
  l_66 = t;
  j_66 :
  if(match_cons(l_66, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(l_66, sym_Cons_2))
        {
          m_66 = ATgetArgument(l_66, 0);
          n_66 = ATgetArgument(l_66, 1);
          k_66 :
          if(match_cons(n_66, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(n_66, sym_Cons_2))
                {
                  o_66 = ATgetArgument(n_66, 0);
                  p_66 = ATgetArgument(n_66, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_66), (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_66), not_null(p_66))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgS_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  g_67 = t;
  c_67 :
  if(match_cons(g_67, sym_TCons_2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      d_67 :
      if(match_cons(i_67, sym_TCons_2))
        {
          j_67 = ATgetArgument(i_67, 0);
          k_67 = ATgetArgument(i_67, 1);
          e_67 :
          if(match_cons(k_67, sym_TCons_2))
            {
              l_67 = ATgetArgument(k_67, 0);
              m_67 = ATgetArgument(k_67, 1);
              f_67 :
              if(match_cons(m_67, sym_TNil_0))
                {
                  ATerm q_67 = NULL,s_67 = NULL;
                  ATerm e_10;
                  e_10 = t;
                  {
                    ATerm r_67 = NULL;
                    t = not_null(h_67);
                    t = MsgU_0(t);
                    r_67 = t;
                    if(q_67 != NULL && q_67 != r_67)
                      _fail(r_67);
                    else
                      q_67 = r_67;
                  }
                  t = e_10;
                  {
                    ATerm t_67 = NULL;
                    t = not_null(l_67);
                    t = MsgE_0(t);
                    t_67 = t;
                    if(s_67 != NULL && s_67 != t_67)
                      _fail(t_67);
                    else
                      s_67 = t_67;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_67), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_67), (ATerm) ATmakeAppl(sym_Nil_0)));
                    t = concat_0(t);
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
ATerm MkMsg_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  e_68 = t;
  d_68 :
  if(match_cons(e_68, sym_RDef_3))
    {
      f_68 = ATgetArgument(e_68, 0);
      g_68 = ATgetArgument(e_68, 1);
      h_68 = ATgetArgument(e_68, 2);
      {
        ATerm l_68 = NULL;
        ATerm m_68 = NULL;
        t = not_null(h_68);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        m_68 = t;
        if(l_68 != NULL && l_68 != m_68)
          _fail(m_68);
        else
          l_68 = m_68;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_68), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(l_68))));
      }
    }
  else
    {
      if(match_cons(e_68, sym_SDef_3))
        {
          f_68 = ATgetArgument(e_68, 0);
          g_68 = ATgetArgument(e_68, 1);
          h_68 = ATgetArgument(e_68, 2);
          {
            ATerm q_68 = NULL;
            ATerm r_68 = NULL;
            t = not_null(h_68);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            r_68 = t;
            if(q_68 != NULL && q_68 != r_68)
              _fail(r_68);
            else
              q_68 = r_68;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_68), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(q_68))));
          }
        }
      else
        {
          if(match_cons(e_68, sym_Overlay_3))
            {
              f_68 = ATgetArgument(e_68, 0);
              g_68 = ATgetArgument(e_68, 1);
              h_68 = ATgetArgument(e_68, 2);
              {
                ATerm v_68 = NULL;
                ATerm w_68 = NULL;
                t = not_null(h_68);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                w_68 = t;
                if(v_68 != NULL && v_68 != w_68)
                  _fail(w_68);
                else
                  v_68 = w_68;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_68), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(v_68))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm err_msg_0 (ATerm t)
{
  t = MkMsg_0(t);
  t = fatal_error_0(t);
  return(t);
}
ATerm Overlay_3 (ATerm t, ATerm k_41 (ATerm), ATerm l_41 (ATerm), ATerm m_41 (ATerm))
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  i_69 = t;
  h_69 :
  if(match_cons(i_69, sym_Overlay_3))
    {
      j_69 = ATgetArgument(i_69, 0);
      k_69 = ATgetArgument(i_69, 1);
      l_69 = ATgetArgument(i_69, 2);
      {
        ATerm p_69 = NULL;
        t = not_null(j_69);
        {
          ATerm r_69 = NULL;
          t = k_41(t);
          p_69 = t;
          t = not_null(k_69);
          {
            ATerm t_69 = NULL;
            t = l_41(t);
            r_69 = t;
            t = not_null(l_69);
            t = m_41(t);
            t_69 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(p_69), not_null(r_69), not_null(t_69));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Union_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  o_70 = t;
  d_70 :
  if(match_cons(o_70, sym_TCons_2))
    {
      p_70 = ATgetArgument(o_70, 0);
      x_70 = ATgetArgument(o_70, 1);
      e_70 :
      if(match_cons(p_70, sym_TCons_2))
        {
          q_70 = ATgetArgument(p_70, 0);
          s_70 = ATgetArgument(p_70, 1);
          f_70 :
          if(match_cons(s_70, sym_TCons_2))
            {
              t_70 = ATgetArgument(s_70, 0);
              u_70 = ATgetArgument(s_70, 1);
              g_70 :
              if(match_cons(u_70, sym_TCons_2))
                {
                  v_70 = ATgetArgument(u_70, 0);
                  w_70 = ATgetArgument(u_70, 1);
                  h_70 :
                  if(match_cons(w_70, sym_TNil_0))
                    {
                      i_70 :
                      if(match_cons(x_70, sym_TCons_2))
                        {
                          y_70 = ATgetArgument(x_70, 0);
                          f_71 = ATgetArgument(x_70, 1);
                          j_70 :
                          if(match_cons(y_70, sym_TCons_2))
                            {
                              z_70 = ATgetArgument(y_70, 0);
                              a_71 = ATgetArgument(y_70, 1);
                              k_70 :
                              if(match_cons(a_71, sym_TCons_2))
                                {
                                  b_71 = ATgetArgument(a_71, 0);
                                  c_71 = ATgetArgument(a_71, 1);
                                  l_70 :
                                  if(match_cons(c_71, sym_TCons_2))
                                    {
                                      d_71 = ATgetArgument(c_71, 0);
                                      e_71 = ATgetArgument(c_71, 1);
                                      m_70 :
                                      if(match_cons(e_71, sym_TNil_0))
                                        {
                                          n_70 :
                                          if(match_cons(f_71, sym_TNil_0))
                                            {
                                              ATerm m_71 = NULL,o_71 = NULL,r_71 = NULL;
                                              ATerm f_10;
                                              f_10 = t;
                                              {
                                                ATerm n_71 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_70), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                n_71 = t;
                                                if(m_71 != NULL && m_71 != n_71)
                                                  _fail(n_71);
                                                else
                                                  m_71 = n_71;
                                              }
                                              t = f_10;
                                              {
                                                ATerm g_10;
                                                g_10 = t;
                                                {
                                                  ATerm q_71 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  q_71 = t;
                                                  if(o_71 != NULL && o_71 != q_71)
                                                    _fail(q_71);
                                                  else
                                                    o_71 = q_71;
                                                }
                                                t = g_10;
                                                {
                                                  ATerm s_71 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_70), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  s_71 = t;
                                                  if(r_71 != NULL && r_71 != s_71)
                                                    _fail(s_71);
                                                  else
                                                    r_71 = s_71;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_71), (ATerm) ATmakeAppl(sym_TNil_0))));
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
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  a_72 = t;
  y_71 :
  if(match_cons(a_72, sym_TCons_2))
    {
      b_72 = ATgetArgument(a_72, 0);
      c_72 = ATgetArgument(a_72, 1);
      z_71 :
      if(match_cons(c_72, sym_TCons_2))
        {
          d_72 = ATgetArgument(c_72, 0);
          e_72 = ATgetArgument(c_72, 1);
          t = not_null(d_72);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  t = SSL_explode_term(not_null(l_72));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm t_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm u_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, t_2, u_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL;
  e_73 = t;
  t_72 :
  if(match_cons(e_73, sym_TCons_2))
    {
      f_73 = ATgetArgument(e_73, 0);
      n_73 = ATgetArgument(e_73, 1);
      u_72 :
      if(match_cons(f_73, sym_TCons_2))
        {
          g_73 = ATgetArgument(f_73, 0);
          i_73 = ATgetArgument(f_73, 1);
          v_72 :
          if(match_cons(i_73, sym_TCons_2))
            {
              j_73 = ATgetArgument(i_73, 0);
              k_73 = ATgetArgument(i_73, 1);
              w_72 :
              if(match_cons(k_73, sym_TCons_2))
                {
                  l_73 = ATgetArgument(k_73, 0);
                  m_73 = ATgetArgument(k_73, 1);
                  x_72 :
                  if(match_cons(m_73, sym_TNil_0))
                    {
                      y_72 :
                      if(match_cons(n_73, sym_TCons_2))
                        {
                          o_73 = ATgetArgument(n_73, 0);
                          v_73 = ATgetArgument(n_73, 1);
                          z_72 :
                          if(match_cons(o_73, sym_TCons_2))
                            {
                              p_73 = ATgetArgument(o_73, 0);
                              q_73 = ATgetArgument(o_73, 1);
                              a_73 :
                              if(match_cons(q_73, sym_TCons_2))
                                {
                                  r_73 = ATgetArgument(q_73, 0);
                                  s_73 = ATgetArgument(q_73, 1);
                                  b_73 :
                                  if(match_cons(s_73, sym_TCons_2))
                                    {
                                      t_73 = ATgetArgument(s_73, 0);
                                      u_73 = ATgetArgument(s_73, 1);
                                      c_73 :
                                      if(match_cons(u_73, sym_TNil_0))
                                        {
                                          d_73 :
                                          if(match_cons(v_73, sym_TNil_0))
                                            {
                                              ATerm d_74 = NULL,h_74 = NULL,j_74 = NULL;
                                              ATerm h_10;
                                              h_10 = t;
                                              {
                                                ATerm e_74 = NULL,g_74 = NULL;
                                                ATerm f_74 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = diff_0(t);
                                                f_74 = t;
                                                if(e_74 != NULL && e_74 != f_74)
                                                  _fail(f_74);
                                                else
                                                  e_74 = f_74;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = union_0(t);
                                                g_74 = t;
                                                if(d_74 != NULL && d_74 != g_74)
                                                  _fail(g_74);
                                                else
                                                  d_74 = g_74;
                                              }
                                              t = h_10;
                                              {
                                                ATerm i_10;
                                                i_10 = t;
                                                {
                                                  ATerm i_74 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  i_74 = t;
                                                  if(h_74 != NULL && h_74 != i_74)
                                                    _fail(i_74);
                                                  else
                                                    h_74 = i_74;
                                                }
                                                t = i_10;
                                                {
                                                  ATerm k_74 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  k_74 = t;
                                                  if(j_74 != NULL && j_74 != k_74)
                                                    _fail(k_74);
                                                  else
                                                    j_74 = k_74;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm cart_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm w_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  w_74 = t;
  t_74 :
  if(match_cons(w_74, sym_TCons_2))
    {
      y_74 = ATgetArgument(w_74, 0);
      z_74 = ATgetArgument(w_74, 1);
      u_74 :
      if(match_cons(z_74, sym_TCons_2))
        {
          a_75 = ATgetArgument(z_74, 0);
          b_75 = ATgetArgument(z_74, 1);
          v_74 :
          if(match_cons(b_75, sym_TNil_0))
            {
              t = not_null(y_74);
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm e_75 = NULL;
                  e_75 = t;
                  t = not_null(a_75);
                  {
                    ATerm w_2 (ATerm t)
                    {
                      ATerm g_75 = NULL;
                      g_75 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_75), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = z_57(t);
                      return(t);
                    }
                    t = map_1(t, w_2);
                  }
                  return(t);
                }
                t = map_1(t, v_2);
                {
                  ATerm x_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, x_2, union_0);
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
ATerm seqs_join_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, y_2, z_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm r_44 (ATerm))
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
  v_75 = t;
  r_75 :
  if(match_cons(v_75, sym_TCons_2))
    {
      w_75 = ATgetArgument(v_75, 0);
      x_75 = ATgetArgument(v_75, 1);
      s_75 :
      if(match_cons(x_75, sym_TCons_2))
        {
          y_75 = ATgetArgument(x_75, 0);
          z_75 = ATgetArgument(x_75, 1);
          t_75 :
          if(match_cons(z_75, sym_TCons_2))
            {
              a_76 = ATgetArgument(z_75, 0);
              b_76 = ATgetArgument(z_75, 1);
              u_75 :
              if(match_cons(b_76, sym_TNil_0))
                {
                  ATerm f_76 = NULL,j_76 = NULL;
                  ATerm j_10;
                  j_10 = t;
                  {
                    ATerm g_76 = NULL,i_76 = NULL;
                    ATerm h_76 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = r_44(t);
                    h_76 = t;
                    if(g_76 != NULL && g_76 != h_76)
                      _fail(h_76);
                    else
                      g_76 = h_76;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = diff_0(t);
                    i_76 = t;
                    if(f_76 != NULL && f_76 != i_76)
                      _fail(i_76);
                    else
                      f_76 = i_76;
                  }
                  t = j_10;
                  {
                    ATerm k_76 = NULL,o_76 = NULL;
                    ATerm l_76 = NULL,n_76 = NULL;
                    ATerm m_76 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TNil_0);
                    t = r_44(t);
                    m_76 = t;
                    if(l_76 != NULL && l_76 != m_76)
                      _fail(m_76);
                    else
                      l_76 = m_76;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = isect_0(t);
                    n_76 = t;
                    if(k_76 != NULL && k_76 != n_76)
                      _fail(n_76);
                    else
                      k_76 = n_76;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_76), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    o_76 = t;
                    if(j_76 != NULL && j_76 != o_76)
                      _fail(o_76);
                    else
                      j_76 = o_76;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_75), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_76), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_76), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm UDjoin_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym_Seqs_1))
    {
      l_77 = ATgetArgument(k_77, 0);
      t = not_null(l_77);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(k_77, sym_Seq_2))
        {
          l_77 = ATgetArgument(k_77, 0);
          m_77 = ATgetArgument(k_77, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(k_77, sym_Rule_3))
            {
              l_77 = ATgetArgument(k_77, 0);
              m_77 = ATgetArgument(k_77, 1);
              n_77 = ATgetArgument(k_77, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(k_77, sym_StratRule_3))
                {
                  l_77 = ATgetArgument(k_77, 0);
                  m_77 = ATgetArgument(k_77, 1);
                  n_77 = ATgetArgument(k_77, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(k_77, sym_MA_2))
                    {
                      l_77 = ATgetArgument(k_77, 0);
                      m_77 = ATgetArgument(k_77, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(k_77, sym_AM_2))
                        {
                          l_77 = ATgetArgument(k_77, 0);
                          m_77 = ATgetArgument(k_77, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(k_77, sym_BA_2))
                            {
                              l_77 = ATgetArgument(k_77, 0);
                              m_77 = ATgetArgument(k_77, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(k_77, sym_BAM_3))
                                {
                                  l_77 = ATgetArgument(k_77, 0);
                                  m_77 = ATgetArgument(k_77, 1);
                                  n_77 = ATgetArgument(k_77, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_77), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(k_77, sym_Cong_2))
                                    {
                                      l_77 = ATgetArgument(k_77, 0);
                                      m_77 = ATgetArgument(k_77, 1);
                                      t = not_null(m_77);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(k_77, sym_Scope_2))
                                        {
                                          l_77 = ATgetArgument(k_77, 0);
                                          m_77 = ATgetArgument(k_77, 1);
                                          t = not_null(m_77);
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              ATerm b_3 (ATerm t)
                                              {
                                                t = not_null(l_77);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, b_3);
                                              return(t);
                                            }
                                            t = map_1(t, a_3);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(k_77, sym_Overlay_3))
                                            {
                                              l_77 = ATgetArgument(k_77, 0);
                                              m_77 = ATgetArgument(k_77, 1);
                                              n_77 = ATgetArgument(k_77, 2);
                                              {
                                                ATerm n_78 = NULL;
                                                ATerm o_78 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_77), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                o_78 = t;
                                                if(n_78 != NULL && n_78 != o_78)
                                                  _fail(o_78);
                                                else
                                                  n_78 = o_78;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(l_77), not_null(m_77), not_null(n_78));
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
        }
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm j_43 (ATerm), ATerm k_43 (ATerm))
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  f_79 = t;
  e_79 :
  if(match_cons(f_79, sym_Cong_2))
    {
      g_79 = ATgetArgument(f_79, 0);
      h_79 = ATgetArgument(f_79, 1);
      {
        ATerm k_79 = NULL;
        t = not_null(g_79);
        {
          ATerm m_79 = NULL;
          t = j_43(t);
          k_79 = t;
          t = not_null(h_79);
          t = k_43(t);
          m_79 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_79), not_null(m_79));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm t_79 = NULL;
  ATerm v_79 = NULL;
  t_79 = t;
  {
    ATerm w_79 = NULL;
    t = not_null(t_79);
    t = tvars_0(t);
    w_79 = t;
    if(v_79 != NULL && v_79 != w_79)
      _fail(w_79);
    else
      v_79 = w_79;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(v_79), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm b_80 = NULL;
  ATerm d_80 = NULL;
  b_80 = t;
  {
    ATerm e_80 = NULL;
    t = not_null(b_80);
    t = tvars_0(t);
    e_80 = t;
    if(d_80 != NULL && d_80 != e_80)
      _fail(e_80);
    else
      d_80 = e_80;
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_80), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm v_40 (ATerm), ATerm w_40 (ATerm), ATerm x_40 (ATerm))
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
  m_80 = t;
  l_80 :
  if(match_cons(m_80, sym_Rule_3))
    {
      n_80 = ATgetArgument(m_80, 0);
      o_80 = ATgetArgument(m_80, 1);
      p_80 = ATgetArgument(m_80, 2);
      {
        ATerm t_80 = NULL;
        t = not_null(n_80);
        {
          ATerm v_80 = NULL;
          t = v_40(t);
          t_80 = t;
          t = not_null(o_80);
          {
            ATerm x_80 = NULL;
            t = w_40(t);
            v_80 = t;
            t = not_null(p_80);
            t = x_40(t);
            x_80 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_80), not_null(v_80), not_null(x_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm c_40 (ATerm), ATerm d_40 (ATerm), ATerm e_40 (ATerm))
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
  i_81 = t;
  h_81 :
  if(match_cons(i_81, sym_BAM_3))
    {
      j_81 = ATgetArgument(i_81, 0);
      k_81 = ATgetArgument(i_81, 1);
      l_81 = ATgetArgument(i_81, 2);
      {
        ATerm p_81 = NULL;
        t = not_null(j_81);
        {
          ATerm r_81 = NULL;
          t = c_40(t);
          p_81 = t;
          t = not_null(k_81);
          {
            ATerm t_81 = NULL;
            t = d_40(t);
            r_81 = t;
            t = not_null(l_81);
            t = e_40(t);
            t_81 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_81), not_null(r_81), not_null(t_81));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
  d_82 = t;
  c_82 :
  if(match_cons(d_82, sym_BA_2))
    {
      e_82 = ATgetArgument(d_82, 0);
      f_82 = ATgetArgument(d_82, 1);
      {
        ATerm i_82 = NULL;
        t = not_null(e_82);
        {
          ATerm l_82 = NULL;
          t = a_40(t);
          i_82 = t;
          t = not_null(f_82);
          t = b_40(t);
          l_82 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(i_82), not_null(l_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm y_39 (ATerm), ATerm z_39 (ATerm))
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
  u_82 = t;
  t_82 :
  if(match_cons(u_82, sym_AM_2))
    {
      v_82 = ATgetArgument(u_82, 0);
      w_82 = ATgetArgument(u_82, 1);
      {
        ATerm a_83 = NULL;
        t = not_null(v_82);
        {
          ATerm c_83 = NULL;
          t = y_39(t);
          a_83 = t;
          t = not_null(w_82);
          t = z_39(t);
          c_83 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(a_83), not_null(c_83));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm w_39 (ATerm), ATerm x_39 (ATerm))
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
  m_83 = t;
  l_83 :
  if(match_cons(m_83, sym_MA_2))
    {
      n_83 = ATgetArgument(m_83, 0);
      o_83 = ATgetArgument(m_83, 1);
      {
        ATerm r_83 = NULL;
        t = not_null(n_83);
        {
          ATerm t_83 = NULL;
          t = w_39(t);
          r_83 = t;
          t = not_null(o_83);
          t = x_39(t);
          t_83 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(r_83), not_null(t_83));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm r_43 (ATerm))
{
  ATerm d_84 = NULL,e_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym_Match_1))
    {
      e_84 = ATgetArgument(d_84, 0);
      {
        ATerm g_84 = NULL;
        t = not_null(e_84);
        t = r_43(t);
        g_84 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm s_43 (ATerm))
{
  ATerm o_84 = NULL,p_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym_Build_1))
    {
      p_84 = ATgetArgument(o_84, 0);
      {
        ATerm r_84 = NULL;
        t = not_null(p_84);
        t = s_43(t);
        r_84 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm q_44 (ATerm))
{
  ATerm n_10 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = n_10;
      {
        ATerm o_10 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = o_10;
            {
              ATerm p_10 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, q_44);
                  PopChoice();
                }
              else
                {
                  t = p_10;
                  {
                    ATerm q_10 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, q_44, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = q_10;
                        {
                          ATerm r_10 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, q_44, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = r_10;
                              {
                                ATerm s_10 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, q_44, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = s_10;
                                    {
                                      ATerm t_10 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, q_44);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = t_10;
                                          {
                                            ATerm u_10 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, q_44);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = u_10;
                                                {
                                                  ATerm v_10 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = v_10;
                                                      {
                                                        ATerm c_3 (ATerm t)
                                                        {
                                                          t = map_1(t, q_44);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, c_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm use_def_0 (ATerm t)
{
  ATerm w_10 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = w_10;
      t = _all(t, use_def_0);
    }
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm d_41 (ATerm), ATerm e_41 (ATerm), ATerm f_41 (ATerm))
{
  ATerm d_85 = NULL,e_85 = NULL,g_85 = NULL,h_85 = NULL;
  d_85 = t;
  c_85 :
  if(match_cons(d_85, sym_RDef_3))
    {
      e_85 = ATgetArgument(d_85, 0);
      g_85 = ATgetArgument(d_85, 1);
      h_85 = ATgetArgument(d_85, 2);
      {
        ATerm m_85 = NULL;
        t = not_null(e_85);
        {
          ATerm o_85 = NULL;
          t = d_41(t);
          m_85 = t;
          t = not_null(g_85);
          {
            ATerm q_85 = NULL;
            t = e_41(t);
            o_85 = t;
            t = not_null(h_85);
            t = f_41(t);
            q_85 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(m_85), not_null(o_85), not_null(q_85));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm v_42 (ATerm), ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
  b_86 = t;
  a_86 :
  if(match_cons(b_86, sym_SDef_3))
    {
      c_86 = ATgetArgument(b_86, 0);
      d_86 = ATgetArgument(b_86, 1);
      e_86 = ATgetArgument(b_86, 2);
      {
        ATerm i_86 = NULL;
        t = not_null(c_86);
        {
          ATerm k_86 = NULL;
          t = v_42(t);
          i_86 = t;
          t = not_null(d_86);
          {
            ATerm m_86 = NULL;
            t = w_42(t);
            k_86 = t;
            t = not_null(e_86);
            t = x_42(t);
            m_86 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_86), not_null(k_86), not_null(m_86));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm check_0 (ATerm t)
{
  ATerm y_10 = t;
  if(PushChoice()==0)
    {
      ATerm d_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm z_10 = t;
          if(PushChoice()==0)
            {
              ATerm e_3 (ATerm t)
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm g_3 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, g_3);
                  return(t);
                }
                t = TCons_2(t, Nil_0, f_3);
                return(t);
              }
              t = Cons_2(t, e_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = z_10;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, d_3);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        if(PushChoice()==0)
          {
            ATerm h_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm b_11 = t;
                if(PushChoice()==0)
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm j_3 (ATerm t)
                      {
                        ATerm k_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, k_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, j_3);
                      return(t);
                    }
                    t = Cons_2(t, i_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = b_11;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, h_3);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = a_11;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm c_11 = t;
              if(PushChoice()==0)
                {
                  ATerm l_3 (ATerm t)
                  {
                    ATerm m_3 (ATerm t)
                    {
                      ATerm n_3 (ATerm t)
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, Nil_0, o_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, n_3);
                      return(t);
                    }
                    t = Cons_2(t, m_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, l_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = c_11;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm t_86 = NULL;
  t = filter_1(t, check_0);
  t_86 = t;
  s_86 :
  if(!(match_cons(t_86, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm o_41 (ATerm))
{
  ATerm x_86 = NULL,y_86 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym_Overlays_1))
    {
      y_86 = ATgetArgument(x_86, 0);
      {
        ATerm a_87 = NULL;
        t = not_null(y_86);
        t = o_41(t);
        a_87 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(a_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm n_41 (ATerm))
{
  ATerm h_87 = NULL,i_87 = NULL;
  h_87 = t;
  g_87 :
  if(match_cons(h_87, sym_Signature_1))
    {
      i_87 = ATgetArgument(h_87, 0);
      {
        ATerm k_87 = NULL;
        t = not_null(i_87);
        t = n_41(t);
        k_87 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(k_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        ATerm u_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_3, t_3);
      return(t);
    }
    t = Cons_2(t, q_3, r_3);
    return(t);
  }
  t = Specification_1(t, p_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  y_87 = t;
  p_87 :
  if(match_cons(y_87, sym_TCons_2))
    {
      z_87 = ATgetArgument(y_87, 0);
      e_88 = ATgetArgument(y_87, 1);
      q_87 :
      if(match_cons(z_87, sym_TCons_2))
        {
          a_88 = ATgetArgument(z_87, 0);
          b_88 = ATgetArgument(z_87, 1);
          r_87 :
          if(match_cons(b_88, sym_TCons_2))
            {
              c_88 = ATgetArgument(b_88, 0);
              d_88 = ATgetArgument(b_88, 1);
              s_87 :
              if(match_cons(d_88, sym_TNil_0))
                {
                  t_87 :
                  if(match_cons(e_88, sym_TCons_2))
                    {
                      f_88 = ATgetArgument(e_88, 0);
                      k_88 = ATgetArgument(e_88, 1);
                      u_87 :
                      if(match_cons(f_88, sym_TCons_2))
                        {
                          g_88 = ATgetArgument(f_88, 0);
                          h_88 = ATgetArgument(f_88, 1);
                          v_87 :
                          if(match_cons(h_88, sym_TCons_2))
                            {
                              i_88 = ATgetArgument(h_88, 0);
                              j_88 = ATgetArgument(h_88, 1);
                              w_87 :
                              if(match_cons(j_88, sym_TNil_0))
                                {
                                  x_87 :
                                  if(match_cons(k_88, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(a_88), not_null(g_88)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_88), not_null(i_88)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_Cons_2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_88), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_88), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_89 = NULL;
  d_89 = t;
  c_89 :
  if(match_cons(d_89, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm g_89 = NULL;
    g_89 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_89));
    return(t);
  }
  t = map_1(t, v_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym_Cons_2))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      t = not_null(q_89);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
  y_89 = t;
  v_89 :
  if(match_cons(y_89, sym_TCons_2))
    {
      z_89 = ATgetArgument(y_89, 0);
      a_90 = ATgetArgument(y_89, 1);
      w_89 :
      if(match_cons(a_90, sym_TCons_2))
        {
          b_90 = ATgetArgument(a_90, 0);
          c_90 = ATgetArgument(a_90, 1);
          x_89 :
          if(match_cons(c_90, sym_TNil_0))
            {
              t = not_null(z_89);
              {
                ATerm g_90 (ATerm t)
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
                            ATerm f_11;
                            f_11 = t;
                            {
                              ATerm w_3 (ATerm t)
                              {
                                t = not_null(b_90);
                                return(t);
                              }
                              t = HdMember_1(t, w_3);
                            }
                            t = f_11;
                            t = Cons_2(t, _id, g_90);
                            PopChoice();
                          }
                        else
                          {
                            t = e_11;
                            t = Tl_0(t);
                            t = g_90(t);
                          }
                      }
                    }
                  return(t);
                }
                t = g_90(t);
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
ATerm eq_0 (ATerm t)
{
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
  l_90 = t;
  i_90 :
  if(match_cons(l_90, sym_TCons_2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      j_90 :
      if(match_cons(n_90, sym_TCons_2))
        {
          o_90 = ATgetArgument(n_90, 0);
          p_90 = ATgetArgument(n_90, 1);
          k_90 :
          if(match_cons(p_90, sym_TNil_0))
            {
              if(m_90 != NULL && m_90 != o_90)
                _fail(o_90);
              else
                m_90 = o_90;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
  ATerm f_93 (ATerm t)
  {
    ATerm m_92 = NULL,p_92 = NULL,r_92 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_91), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm g_11 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = g_11;
      {
        ATerm i_11;
        i_11 = t;
        {
          ATerm n_92 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = g_0(t);
          n_92 = t;
          if(m_92 != NULL && m_92 != n_92)
            _fail(n_92);
          else
            m_92 = n_92;
        }
        t = i_11;
        {
          ATerm q_92 = NULL;
          t = not_null(s_91);
          t = tvars_0(t);
          q_92 = t;
          if(p_92 != NULL && p_92 != q_92)
            _fail(q_92);
          else
            p_92 = q_92;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_92), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm t_92 = NULL,w_92 = NULL,y_92 = NULL;
            t = strings_to_vars_0(t);
            r_92 = t;
            {
              ATerm l_11;
              l_11 = t;
              {
                ATerm v_92 = NULL;
                t = (ATerm) ATmakeAppl(sym_TNil_0);
                t = g_0(t);
                v_92 = t;
                if(t_92 != NULL && t_92 != v_92)
                  _fail(v_92);
                else
                  t_92 = v_92;
              }
              t = l_11;
              {
                ATerm x_92 = NULL;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_91), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = tvars_0(t);
                x_92 = t;
                if(w_92 != NULL && w_92 != x_92)
                  _fail(x_92);
                else
                  w_92 = x_92;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_92), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                {
                  ATerm a_93 = NULL;
                  t = strings_to_vars_0(t);
                  y_92 = t;
                  {
                    ATerm c_93 = NULL;
                    t = new_0(t);
                    a_93 = t;
                    {
                      ATerm d_93 = NULL;
                      t = not_null(p_91);
                      t = h_0(t);
                      d_93 = t;
                      if(c_93 != NULL && c_93 != d_93)
                        _fail(d_93);
                      else
                        c_93 = d_93;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(c_93), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(r_92)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(a_93)), not_null(y_92))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(p_91), not_null(q_91), (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_91), not_null(t_91), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_91))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(r_92)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(a_93)), not_null(y_92)))), not_null(u_91)))), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  o_91 = t;
  g_91 :
  if(match_cons(o_91, sym_RDef_3))
    {
      p_91 = ATgetArgument(o_91, 0);
      q_91 = ATgetArgument(o_91, 1);
      r_91 = ATgetArgument(o_91, 2);
      h_91 :
      if(match_cons(r_91, sym_Rule_3))
        {
          s_91 = ATgetArgument(r_91, 0);
          t_91 = ATgetArgument(r_91, 1);
          u_91 = ATgetArgument(r_91, 2);
          i_91 :
          if(match_cons(t_91, sym_Op_2))
            {
              m_91 = ATgetArgument(t_91, 0);
              n_91 = ATgetArgument(t_91, 1);
              j_91 :
              if(match_cons(n_91, sym_Nil_0))
                {
                  k_91 :
                  if(match_string(m_91, "Undefined"))
                    {
                      ATerm m_11 = t;
                      if(PushChoice()==0)
                        {
                          ATerm z_91 = NULL,b_92 = NULL,d_92 = NULL;
                          ATerm n_11;
                          n_11 = t;
                          {
                            ATerm a_92 = NULL;
                            t = (ATerm) ATmakeAppl(sym_TNil_0);
                            t = g_0(t);
                            a_92 = t;
                            if(z_91 != NULL && z_91 != a_92)
                              _fail(a_92);
                            else
                              z_91 = a_92;
                          }
                          t = n_11;
                          {
                            ATerm c_92 = NULL;
                            t = not_null(s_91);
                            t = tvars_0(t);
                            c_92 = t;
                            if(b_92 != NULL && b_92 != c_92)
                              _fail(c_92);
                            else
                              b_92 = c_92;
                            t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_91), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_92), (ATerm) ATmakeAppl(sym_TNil_0)));
                            t = isect_0(t);
                            {
                              ATerm f_92 = NULL;
                              t = strings_to_vars_0(t);
                              d_92 = t;
                              {
                                ATerm g_92 = NULL;
                                t = not_null(p_91);
                                t = h_0(t);
                                g_92 = t;
                                if(f_92 != NULL && f_92 != g_92)
                                  _fail(g_92);
                                else
                                  f_92 = g_92;
                                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(f_92), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(d_92)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(p_91), not_null(q_91), (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_91), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_91))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(d_92)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_91), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = m_11;
                          t = f_93(t);
                        }
                    }
                  else
                    t = f_93(t);
                }
              else
                {
                  l_91 :
                  t = f_93(t);
                }
            }
          else
            t = f_93(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,l_94 = NULL;
  f_94 = t;
  z_93 :
  if(match_cons(f_94, sym_TCons_2))
    {
      g_94 = ATgetArgument(f_94, 0);
      i_94 = ATgetArgument(f_94, 1);
      a_94 :
      if(match_cons(g_94, sym_DynamicRules_1))
        {
          h_94 = ATgetArgument(g_94, 0);
          b_94 :
          if(match_cons(i_94, sym_TCons_2))
            {
              j_94 = ATgetArgument(i_94, 0);
              l_94 = ATgetArgument(i_94, 1);
              c_94 :
              if(match_cons(l_94, sym_TNil_0))
                {
                  t = not_null(h_94);
                  {
                    ATerm x_3 (ATerm t)
                    {
                      ATerm y_3 (ATerm t)
                      {
                        t = not_null(j_94);
                        return(t);
                      }
                      ATerm z_3 (ATerm t)
                      {
                        ATerm o_94 = NULL;
                        o_94 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(o_94))), (ATerm) ATmakeAppl(sym_Nil_0)));
                        return(t);
                      }
                      t = SplitDynamicRule_2(t, y_3, z_3);
                      return(t);
                    }
                    t = map_1(t, x_3);
                    t = unzip_0(t);
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
          if(match_cons(g_94, sym_OverrideDynamicRules_1))
            {
              h_94 = ATgetArgument(g_94, 0);
              d_94 :
              if(match_cons(i_94, sym_TCons_2))
                {
                  j_94 = ATgetArgument(i_94, 0);
                  l_94 = ATgetArgument(i_94, 1);
                  e_94 :
                  if(match_cons(l_94, sym_TNil_0))
                    {
                      t = not_null(h_94);
                      {
                        ATerm a_4 (ATerm t)
                        {
                          ATerm b_4 (ATerm t)
                          {
                            t = not_null(j_94);
                            return(t);
                          }
                          ATerm c_4 (ATerm t)
                          {
                            ATerm s_94 = NULL;
                            s_94 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_94))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, b_4, c_4);
                          return(t);
                        }
                        t = map_1(t, a_4);
                        t = unzip_0(t);
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
  return(t);
}
ATerm dist_scope_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
  g_95 = t;
  c_95 :
  if(match_cons(g_95, sym_TCons_2))
    {
      h_95 = ATgetArgument(g_95, 0);
      k_95 = ATgetArgument(g_95, 1);
      d_95 :
      if(match_cons(h_95, sym_Scope_2))
        {
          i_95 = ATgetArgument(h_95, 0);
          j_95 = ATgetArgument(h_95, 1);
          e_95 :
          if(match_cons(k_95, sym_TCons_2))
            {
              l_95 = ATgetArgument(k_95, 0);
              m_95 = ATgetArgument(k_95, 1);
              f_95 :
              if(match_cons(m_95, sym_TNil_0))
                {
                  ATerm q_95 = NULL;
                  ATerm r_95 = NULL,t_95 = NULL;
                  ATerm s_95 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_95), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = union_0(t);
                  s_95 = t;
                  if(r_95 != NULL && r_95 != s_95)
                    _fail(s_95);
                  else
                    r_95 = s_95;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_95), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_95), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = t_66(t);
                  t_95 = t;
                  if(q_95 != NULL && q_95 != t_95)
                    _fail(t_95);
                  else
                    q_95 = t_95;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_95), not_null(q_95));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL;
  c_96 = t;
  z_95 :
  if(match_cons(c_96, sym_TCons_2))
    {
      d_96 = ATgetArgument(c_96, 0);
      e_96 = ATgetArgument(c_96, 1);
      a_96 :
      if(match_cons(e_96, sym_TCons_2))
        {
          f_96 = ATgetArgument(e_96, 0);
          g_96 = ATgetArgument(e_96, 1);
          b_96 :
          if(match_cons(g_96, sym_TNil_0))
            {
              t = not_null(d_96);
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm j_96 = NULL;
                  j_96 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_96), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_96), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = g_61(t);
                  return(t);
                }
                t = _one(t, d_4);
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
ATerm env_oncetd_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm n_96 (ATerm t)
  {
    ATerm o_11 = t;
    if(PushChoice()==0)
      {
        t = v_61(t);
        PopChoice();
      }
    else
      {
        t = o_11;
        t = one_dist_1(t, n_96);
      }
    return(t);
  }
  t = n_96(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
  w_96 = t;
  v_96 :
  if(match_cons(w_96, sym_Cons_2))
    {
      x_96 = ATgetArgument(w_96, 0);
      y_96 = ATgetArgument(w_96, 1);
      {
        ATerm b_97 = NULL;
        t = not_null(x_96);
        {
          ATerm d_97 = NULL,e_97 = NULL,k_97 = NULL;
          t = tvars_0(t);
          b_97 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_96), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_97), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm o_97 (ATerm t)
            {
              ATerm e_4 (ATerm t)
              {
                ATerm p_11 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, o_97);
                    PopChoice();
                  }
                else
                  {
                    t = p_11;
                    {
                      ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL;
                      t = split_dynamic_rules_0(t);
                      f_97 = t;
                      r_96 :
                      if(match_cons(f_97, sym_TCons_2))
                        {
                          g_97 = ATgetArgument(f_97, 0);
                          h_97 = ATgetArgument(f_97, 1);
                          s_96 :
                          if(match_cons(h_97, sym_TCons_2))
                            {
                              i_97 = ATgetArgument(h_97, 0);
                              j_97 = ATgetArgument(h_97, 1);
                              t_96 :
                              if(match_cons(j_97, sym_TNil_0))
                                {
                                  if(e_97 != NULL && e_97 != g_97)
                                    _fail(g_97);
                                  else
                                    e_97 = g_97;
                                  if(d_97 != NULL && d_97 != i_97)
                                    _fail(i_97);
                                  else
                                    d_97 = i_97;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_97));
                                }
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
              t = env_oncetd_1(t, e_4);
              return(t);
            }
            t = o_97(t);
            k_97 = t;
            t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(k_97), not_null(d_97)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_96), (ATerm) ATmakeAppl(sym_TNil_0)));
            t = conc_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm r_97 (ATerm t)
  {
    t = t_60(t);
    {
      ATerm q_11 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = q_11;
          t = Cons_2(t, _id, r_97);
        }
    }
    return(t);
  }
  t = r_97(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, f_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  w_97 = t;
  u_97 :
  if(match_cons(w_97, sym_DynRuleScope_2))
    {
      x_97 = ATgetArgument(w_97, 0);
      a_98 = ATgetArgument(w_97, 1);
      v_97 :
      if(match_cons(x_97, sym_Nil_0))
        t = not_null(a_98);
      else
        {
          if(match_cons(x_97, sym_Cons_2))
            {
              y_97 = ATgetArgument(x_97, 0);
              z_97 = ATgetArgument(x_97, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(y_97))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(z_97), not_null(a_98)), (ATerm) ATmakeAppl(sym_Nil_0))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, g_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, l_4);
          return(t);
        }
        t = Cons_2(t, k_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, j_4);
      return(t);
    }
    t = Cons_2(t, _id, i_4);
    return(t);
  }
  t = Specification_1(t, h_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL;
  k_98 = t;
  j_98 :
  if(match_cons(k_98, sym_ScopeDefault_1))
    {
      l_98 = ATgetArgument(k_98, 0);
      {
        ATerm n_98 = NULL;
        ATerm o_98 = NULL;
        t = not_null(l_98);
        t = tvars_0(t);
        o_98 = t;
        if(n_98 != NULL && n_98 != o_98)
          _fail(o_98);
        else
          n_98 = o_98;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_98), not_null(l_98));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm u_98 = NULL,v_98 = NULL;
  u_98 = t;
  t_98 :
  if(match_cons(u_98, sym_DynamicRules_1))
    {
      v_98 = ATgetArgument(u_98, 0);
      {
        ATerm x_98 = NULL;
        t = not_null(v_98);
        t = g_41(t);
        x_98 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(x_98));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_43 (ATerm), ATerm w_43 (ATerm))
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym_Scope_2))
    {
      g_99 = ATgetArgument(f_99, 0);
      h_99 = ATgetArgument(f_99, 1);
      {
        ATerm k_99 = NULL;
        t = not_null(g_99);
        {
          ATerm m_99 = NULL;
          t = v_43(t);
          k_99 = t;
          t = not_null(h_99);
          t = w_43(t);
          m_99 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_99), not_null(m_99));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm v_44 (ATerm), ATerm w_44 (ATerm), ATerm x_44 (ATerm))
{
  ATerm r_11 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, x_44, v_44);
      PopChoice();
    }
  else
    {
      t = r_11;
      t = DynamicRules_1(t, v_44);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL;
  t_99 = t;
  s_99 :
  if(match_cons(t_99, sym_DynamicRules_1))
    {
      u_99 = ATgetArgument(t_99, 0);
      t = not_null(u_99);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL;
  c_100 = t;
  z_99 :
  if(match_cons(c_100, sym_Scope_2))
    {
      d_100 = ATgetArgument(c_100, 0);
      b_100 = ATgetArgument(c_100, 1);
      t = not_null(d_100);
    }
  else
    {
      if(match_cons(c_100, sym_LRule_1))
        {
          d_100 = ATgetArgument(c_100, 0);
          a_100 :
          if(match_cons(d_100, sym_Rule_3))
            {
              e_100 = ATgetArgument(d_100, 0);
              f_100 = ATgetArgument(d_100, 1);
              g_100 = ATgetArgument(d_100, 2);
              t = not_null(e_100);
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
  ATerm r_100 = NULL,s_100 = NULL;
  r_100 = t;
  q_100 :
  if(match_cons(r_100, sym_Var_1))
    {
      s_100 = ATgetArgument(r_100, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_100), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
  z_100 = t;
  w_100 :
  if(match_cons(z_100, sym_TCons_2))
    {
      a_101 = ATgetArgument(z_100, 0);
      b_101 = ATgetArgument(z_100, 1);
      x_100 :
      if(match_cons(b_101, sym_TCons_2))
        {
          c_101 = ATgetArgument(b_101, 0);
          d_101 = ATgetArgument(b_101, 1);
          y_100 :
          if(match_cons(d_101, sym_TNil_0))
            {
              t = not_null(a_101);
              {
                ATerm h_101 (ATerm t)
                {
                  ATerm s_11 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(c_101);
                      PopChoice();
                    }
                  else
                    {
                      t = s_11;
                      {
                        ATerm t_11 = t;
                        if(PushChoice()==0)
                          {
                            ATerm m_4 (ATerm t)
                            {
                              t = not_null(c_101);
                              return(t);
                            }
                            t = HdMember_1(t, m_4);
                            t = h_101(t);
                            PopChoice();
                          }
                        else
                          {
                            t = t_11;
                            t = Cons_2(t, _id, h_101);
                          }
                      }
                    }
                  return(t);
                }
                t = h_101(t);
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
ATerm foldr_3 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm u_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = q_54(t);
      PopChoice();
    }
  else
    {
      t = u_11;
      {
        ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL;
        m_101 = t;
        l_101 :
        if(match_cons(m_101, sym_Cons_2))
          {
            n_101 = ATgetArgument(m_101, 0);
            o_101 = ATgetArgument(m_101, 1);
            {
              ATerm r_101 = NULL,t_101 = NULL;
              ATerm v_11;
              v_11 = t;
              {
                ATerm s_101 = NULL;
                t = not_null(n_101);
                t = s_54(t);
                s_101 = t;
                if(r_101 != NULL && r_101 != s_101)
                  _fail(s_101);
                else
                  r_101 = s_101;
              }
              t = v_11;
              {
                ATerm v_101 = NULL;
                t = not_null(o_101);
                t = foldr_3(t, q_54, r_54, s_54);
                v_101 = t;
                if(t_101 != NULL && t_101 != v_101)
                  _fail(v_101);
                else
                  t_101 = v_101;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_101), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_101), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = r_54(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm f_102 = NULL;
  ATerm h_102 = NULL;
  f_102 = t;
  {
    ATerm i_102 = NULL;
    ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL;
    t = not_null(f_102);
    i_102 = t;
    t = SSL_explode_term(not_null(i_102));
    k_102 = t;
    c_102 :
    if(match_cons(k_102, sym_TCons_2))
      {
        l_102 = ATgetArgument(k_102, 0);
        m_102 = ATgetArgument(k_102, 1);
        d_102 :
        if(match_cons(m_102, sym_TCons_2))
          {
            n_102 = ATgetArgument(m_102, 0);
            o_102 = ATgetArgument(m_102, 1);
            e_102 :
            if(match_cons(o_102, sym_TNil_0))
              {
                if(h_102 != NULL && h_102 != n_102)
                  _fail(n_102);
                else
                  h_102 = n_102;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(h_102);
    t = foldr_3(t, g_56, h_56, i_56);
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL;
  v_102 = t;
  u_102 :
  if(match_cons(v_102, sym_Cons_2))
    {
      w_102 = ATgetArgument(v_102, 0);
      x_102 = ATgetArgument(v_102, 1);
      t = v_55(t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm a_103 = NULL;
          a_103 = t;
          if(w_102 != NULL && w_102 != a_103)
            _fail(a_103);
          else
            w_102 = a_103;
          return(t);
        }
        t = fetch_1(t, n_4);
        t = not_null(x_102);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  i_103 = t;
  e_103 :
  if(match_cons(i_103, sym_TCons_2))
    {
      j_103 = ATgetArgument(i_103, 0);
      k_103 = ATgetArgument(i_103, 1);
      f_103 :
      if(match_cons(k_103, sym_TCons_2))
        {
          l_103 = ATgetArgument(k_103, 0);
          o_103 = ATgetArgument(k_103, 1);
          g_103 :
          if(match_cons(l_103, sym_Cons_2))
            {
              m_103 = ATgetArgument(l_103, 0);
              n_103 = ATgetArgument(l_103, 1);
              h_103 :
              if(match_cons(o_103, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_103), not_null(j_103)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_103), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
  k_104 = t;
  g_104 :
  if(match_cons(k_104, sym_Cons_2))
    {
      l_104 = ATgetArgument(k_104, 0);
      r_104 = ATgetArgument(k_104, 1);
      h_104 :
      if(match_cons(l_104, sym_TCons_2))
        {
          m_104 = ATgetArgument(l_104, 0);
          o_104 = ATgetArgument(l_104, 1);
          i_104 :
          if(match_cons(o_104, sym_TCons_2))
            {
              p_104 = ATgetArgument(o_104, 0);
              q_104 = ATgetArgument(o_104, 1);
              j_104 :
              if(match_cons(q_104, sym_TNil_0))
                {
                  ATerm v_104 = NULL,w_104 = NULL,f_105 = NULL,n_105 = NULL;
                  ATerm w_11;
                  w_11 = t;
                  {
                    ATerm x_104 = NULL;
                    ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
                    t = not_null(p_104);
                    x_104 = t;
                    t = SSL_explode_term(not_null(x_104));
                    a_105 = t;
                    x_103 :
                    if(match_cons(a_105, sym_TCons_2))
                      {
                        b_105 = ATgetArgument(a_105, 0);
                        c_105 = ATgetArgument(a_105, 1);
                        y_103 :
                        if(match_cons(c_105, sym_TCons_2))
                          {
                            d_105 = ATgetArgument(c_105, 0);
                            e_105 = ATgetArgument(c_105, 1);
                            z_103 :
                            if(match_cons(e_105, sym_TNil_0))
                              {
                                if(v_104 != NULL && v_104 != b_105)
                                  _fail(b_105);
                                else
                                  v_104 = b_105;
                                if(w_104 != NULL && w_104 != d_105)
                                  _fail(d_105);
                                else
                                  w_104 = d_105;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = w_11;
                  {
                    ATerm x_11;
                    x_11 = t;
                    {
                      ATerm g_105 = NULL;
                      ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL;
                      t = not_null(m_104);
                      g_105 = t;
                      t = SSL_explode_term(not_null(g_105));
                      i_105 = t;
                      c_104 :
                      if(match_cons(i_105, sym_TCons_2))
                        {
                          j_105 = ATgetArgument(i_105, 0);
                          k_105 = ATgetArgument(i_105, 1);
                          d_104 :
                          if(match_cons(k_105, sym_TCons_2))
                            {
                              l_105 = ATgetArgument(k_105, 0);
                              m_105 = ATgetArgument(k_105, 1);
                              e_104 :
                              if(match_cons(m_105, sym_TNil_0))
                                {
                                  if(v_104 != NULL && v_104 != j_105)
                                    _fail(j_105);
                                  else
                                    v_104 = j_105;
                                  if(f_105 != NULL && f_105 != l_105)
                                    _fail(l_105);
                                  else
                                    f_105 = l_105;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    t = x_11;
                    {
                      ATerm o_105 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_105), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_104), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      o_105 = t;
                      if(n_105 != NULL && n_105 != o_105)
                        _fail(o_105);
                      else
                        n_105 = o_105;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_105), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_104), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL;
  a_106 = t;
  w_105 :
  if(match_cons(a_106, sym_Cons_2))
    {
      b_106 = ATgetArgument(a_106, 0);
      g_106 = ATgetArgument(a_106, 1);
      x_105 :
      if(match_cons(b_106, sym_TCons_2))
        {
          c_106 = ATgetArgument(b_106, 0);
          d_106 = ATgetArgument(b_106, 1);
          y_105 :
          if(match_cons(d_106, sym_TCons_2))
            {
              e_106 = ATgetArgument(d_106, 0);
              f_106 = ATgetArgument(d_106, 1);
              z_105 :
              if(match_cons(f_106, sym_TNil_0))
                {
                  ATerm i_106 = NULL;
                  if(c_106 != NULL && c_106 != e_106)
                    _fail(e_106);
                  else
                    c_106 = e_106;
                  if(i_106 != NULL && i_106 != g_106)
                    _fail(g_106);
                  else
                    i_106 = g_106;
                  t = not_null(i_106);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm m_106 (ATerm t)
  {
    ATerm y_11 = t;
    if(PushChoice()==0)
      {
        t = b_66(t);
        PopChoice();
      }
    else
      {
        t = y_11;
        t = c_66(t);
        t = m_106(t);
      }
    return(t);
  }
  t = m_106(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  t = e_66(t);
  t = while_not_2(t, f_66, g_66);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm z_11 = t;
  if(PushChoice()==0)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm t_106 = NULL;
        t_106 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_106), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        ATerm r_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, r_4);
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm a_12 = t;
        if(PushChoice()==0)
          {
            ATerm s_4 (ATerm t)
            {
              ATerm t_4 (ATerm t)
              {
                ATerm b_12 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = b_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, t_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, s_4);
            PopChoice();
          }
        else
          {
            t = a_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_4, p_4, q_4);
      PopChoice();
    }
  else
    {
      t = z_11;
      {
        ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL;
        v_106 = t;
        p_106 :
        if(match_cons(v_106, sym_TCons_2))
          {
            w_106 = ATgetArgument(v_106, 0);
            x_106 = ATgetArgument(v_106, 1);
            r_106 :
            if(match_cons(x_106, sym_TCons_2))
              {
                y_106 = ATgetArgument(x_106, 0);
                z_106 = ATgetArgument(x_106, 1);
                s_106 :
                if(match_cons(z_106, sym_TNil_0))
                  {
                    t = not_null(w_106);
                    {
                      ATerm e_107 (ATerm t)
                      {
                        ATerm c_12 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = c_12;
                            {
                              ATerm d_12 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm u_4 (ATerm t)
                                  {
                                    t = not_null(y_106);
                                    return(t);
                                  }
                                  t = HdMember_1(t, u_4);
                                  t = e_107(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = d_12;
                                  t = Cons_2(t, _id, e_107);
                                }
                            }
                          }
                        return(t);
                      }
                      t = e_107(t);
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
ATerm free_vars_3 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_107 (ATerm t)
  {
    ATerm e_12 = t;
    if(PushChoice()==0)
      {
        t = b_46(t);
        PopChoice();
      }
    else
      {
        t = e_12;
        {
          ATerm f_12 = t;
          if(PushChoice()==0)
            {
              ATerm g_107 = NULL;
              ATerm g_12;
              g_12 = t;
              {
                ATerm h_107 = NULL;
                t = c_46(t);
                h_107 = t;
                if(g_107 != NULL && g_107 != h_107)
                  _fail(h_107);
                else
                  g_107 = h_107;
              }
              t = g_12;
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm y_4 (ATerm t)
                  {
                    t = not_null(g_107);
                    return(t);
                  }
                  t = split_2(t, i_107, y_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = d_46(t, v_4, i_107, w_4);
                {
                  ATerm z_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = crush_3(t, z_4, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = f_12;
              {
                ATerm a_5 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = crush_3(t, a_5, union_0, i_107);
              }
            }
        }
      }
    return(t);
  }
  t = i_107(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm h_12 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = h_12;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, b_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm o_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  o_107 = t;
  m_107 :
  if(match_cons(o_107, sym_LRule_1))
    {
      r_107 = ATgetArgument(o_107, 0);
      n_107 :
      if(match_cons(r_107, sym_Rule_3))
        {
          s_107 = ATgetArgument(r_107, 0);
          t_107 = ATgetArgument(r_107, 1);
          u_107 = ATgetArgument(r_107, 2);
          {
            ATerm z_107 = NULL;
            ATerm a_108 = NULL;
            t = not_null(s_107);
            t = tvars_0(t);
            a_108 = t;
            if(z_107 != NULL && z_107 != a_108)
              _fail(a_108);
            else
              z_107 = a_108;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_107), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_107), not_null(t_107), not_null(u_107))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm d_108 (ATerm t)
  {
    t = _all(t, d_108);
    t = i_62(t);
    return(t);
  }
  t = d_108(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm i_12 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = i_12;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, d_5);
    return(t);
  }
  t = bottomup_1(t, c_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL;
  g_108 = t;
  f_108 :
  if(match_cons(g_108, sym_Var_1))
    {
      h_108 = ATgetArgument(g_108, 0);
      t = not_null(h_108);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
  p_108 = t;
  l_108 :
  if(match_cons(p_108, sym_TCons_2))
    {
      q_108 = ATgetArgument(p_108, 0);
      r_108 = ATgetArgument(p_108, 1);
      m_108 :
      if(match_cons(r_108, sym_TCons_2))
        {
          s_108 = ATgetArgument(r_108, 0);
          v_108 = ATgetArgument(r_108, 1);
          n_108 :
          if(match_cons(s_108, sym_Cons_2))
            {
              t_108 = ATgetArgument(s_108, 0);
              u_108 = ATgetArgument(s_108, 1);
              o_108 :
              if(match_cons(v_108, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_108), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_108), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  h_109 = t;
  a_109 :
  if(match_cons(h_109, sym_TCons_2))
    {
      i_109 = ATgetArgument(h_109, 0);
      j_109 = ATgetArgument(h_109, 1);
      b_109 :
      if(match_cons(j_109, sym_TCons_2))
        {
          k_109 = ATgetArgument(j_109, 0);
          r_109 = ATgetArgument(j_109, 1);
          c_109 :
          if(match_cons(k_109, sym_Cons_2))
            {
              l_109 = ATgetArgument(k_109, 0);
              q_109 = ATgetArgument(k_109, 1);
              d_109 :
              if(match_cons(l_109, sym_TCons_2))
                {
                  m_109 = ATgetArgument(l_109, 0);
                  n_109 = ATgetArgument(l_109, 1);
                  e_109 :
                  if(match_cons(n_109, sym_TCons_2))
                    {
                      o_109 = ATgetArgument(n_109, 0);
                      p_109 = ATgetArgument(n_109, 1);
                      f_109 :
                      if(match_cons(p_109, sym_TNil_0))
                        {
                          g_109 :
                          if(match_cons(r_109, sym_TNil_0))
                            {
                              ATerm t_109 = NULL;
                              if(i_109 != NULL && i_109 != m_109)
                                _fail(m_109);
                              else
                                i_109 = m_109;
                              if(t_109 != NULL && t_109 != o_109)
                                _fail(o_109);
                              else
                                t_109 = o_109;
                              t = not_null(t_109);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm j_12 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = j_12;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm))
{
  ATerm z_109 = NULL;
  ATerm b_110 = NULL;
  z_109 = t;
  {
    ATerm d_110 = NULL;
    t = x_47(t);
    b_110 = t;
    t = y_47(t);
    d_110 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_110), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm i_110 (ATerm t)
  {
    ATerm k_12 = t;
    if(PushChoice()==0)
      {
        t = k_64(t);
        PopChoice();
      }
    else
      {
        t = k_12;
        t = _all(t, i_110);
      }
    return(t);
  }
  t = i_110(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL;
  n_110 = t;
  k_110 :
  if(match_cons(n_110, sym_TCons_2))
    {
      o_110 = ATgetArgument(n_110, 0);
      p_110 = ATgetArgument(n_110, 1);
      l_110 :
      if(match_cons(p_110, sym_TCons_2))
        {
          q_110 = ATgetArgument(p_110, 0);
          r_110 = ATgetArgument(p_110, 1);
          m_110 :
          if(match_cons(r_110, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_110), not_null(q_110));
          else
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
  ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
  b_111 = t;
  w_110 :
  if(match_cons(b_111, sym_TCons_2))
    {
      c_111 = ATgetArgument(b_111, 0);
      f_111 = ATgetArgument(b_111, 1);
      x_110 :
      if(match_cons(c_111, sym_Cons_2))
        {
          d_111 = ATgetArgument(c_111, 0);
          e_111 = ATgetArgument(c_111, 1);
          y_110 :
          if(match_cons(f_111, sym_TCons_2))
            {
              g_111 = ATgetArgument(f_111, 0);
              j_111 = ATgetArgument(f_111, 1);
              z_110 :
              if(match_cons(g_111, sym_Cons_2))
                {
                  h_111 = ATgetArgument(g_111, 0);
                  i_111 = ATgetArgument(g_111, 1);
                  a_111 :
                  if(match_cons(j_111, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(d_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_111), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(e_111), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_111), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
  z_111 = t;
  q_111 :
  if(match_cons(z_111, sym_TCons_2))
    {
      a_112 = ATgetArgument(z_111, 0);
      b_112 = ATgetArgument(z_111, 1);
      r_111 :
      if(match_cons(a_112, sym_Nil_0))
        {
          s_111 :
          if(match_cons(b_112, sym_TCons_2))
            {
              c_112 = ATgetArgument(b_112, 0);
              d_112 = ATgetArgument(b_112, 1);
              x_111 :
              if(match_cons(c_112, sym_Nil_0))
                {
                  y_111 :
                  if(match_cons(d_112, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm f_112 (ATerm t)
  {
    ATerm m_12 = t;
    if(PushChoice()==0)
      {
        t = b_58(t);
        PopChoice();
      }
    else
      {
        t = m_12;
        t = c_58(t);
        {
          ATerm e_5 (ATerm t)
          {
            t = TCons_2(t, f_112, TNil_0);
            return(t);
          }
          t = TCons_2(t, e_58, e_5);
          t = d_58(t);
        }
      }
    return(t);
  }
  t = f_112(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_58 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_58);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL;
  o_112 = t;
  j_112 :
  if(match_cons(o_112, sym_TCons_2))
    {
      p_112 = ATgetArgument(o_112, 0);
      q_112 = ATgetArgument(o_112, 1);
      k_112 :
      if(match_cons(q_112, sym_TCons_2))
        {
          r_112 = ATgetArgument(q_112, 0);
          s_112 = ATgetArgument(q_112, 1);
          l_112 :
          if(match_cons(s_112, sym_TNil_0))
            {
              ATerm w_112 = NULL;
              if(w_112 != NULL && w_112 != r_112)
                _fail(r_112);
              else
                w_112 = r_112;
            }
          else
            {
              if(match_cons(s_112, sym_TCons_2))
                {
                  t_112 = ATgetArgument(s_112, 0);
                  u_112 = ATgetArgument(s_112, 1);
                  m_112 :
                  if(match_cons(u_112, sym_TNil_0))
                    {
                      ATerm c_113 = NULL;
                      ATerm d_113 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_112), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_112), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      d_113 = t;
                      if(c_113 != NULL && c_113 != d_113)
                        _fail(d_113);
                      else
                        c_113 = d_113;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_113), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_112), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm z_47 (ATerm), ATerm a_48 (ATerm))
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL;
  t = subs_args_0(t);
  l_113 = t;
  i_113 :
  if(match_cons(l_113, sym_TCons_2))
    {
      m_113 = ATgetArgument(l_113, 0);
      n_113 = ATgetArgument(l_113, 1);
      j_113 :
      if(match_cons(n_113, sym_TCons_2))
        {
          o_113 = ATgetArgument(n_113, 0);
          p_113 = ATgetArgument(n_113, 1);
          k_113 :
          if(match_cons(p_113, sym_TNil_0))
            {
              t = not_null(o_113);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm g_5 (ATerm t)
                  {
                    t = not_null(m_113);
                    return(t);
                  }
                  t = SubsVar_2(t, z_47, g_5);
                  t = a_48(t);
                  return(t);
                }
                t = alltd_1(t, f_5);
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
ATerm substitute_1 (ATerm t, ATerm b_48 (ATerm))
{
  t = substitute_2(t, b_48, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL;
  w_113 = t;
  u_113 :
  if(match_cons(w_113, sym_Overlay_3))
    {
      x_113 = ATgetArgument(w_113, 0);
      y_113 = ATgetArgument(w_113, 1);
      z_113 = ATgetArgument(w_113, 2);
      v_113 :
      if(match_cons(y_113, sym_Nil_0))
        t = not_null(x_113);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
  g_114 = t;
  e_114 :
  if(match_cons(g_114, sym_OpDecl_2))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      f_114 :
      if(match_cons(i_114, sym_ConstType_1))
        {
          j_114 = ATgetArgument(i_114, 0);
          t = not_null(h_114);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpNames_0 (ATerm t)
{
  ATerm o_114 = NULL,p_114 = NULL;
  o_114 = t;
  n_114 :
  if(match_cons(o_114, sym_Constructors_1))
    {
      p_114 = ATgetArgument(o_114, 0);
      t = not_null(p_114);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL;
  v_114 = t;
  u_114 :
  if(match_cons(v_114, sym_Signature_1))
    {
      w_114 = ATgetArgument(v_114, 0);
      t = not_null(w_114);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(v_114, sym_Overlays_1))
        {
          w_114 = ATgetArgument(v_114, 0);
          t = not_null(w_114);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm n_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_12;
      {
        ATerm o_12 = t;
        if(PushChoice()==0)
          {
            ATerm h_5 (ATerm t)
            {
              t = filter_1(t, w_53);
              return(t);
            }
            t = Cons_2(t, w_53, h_5);
            PopChoice();
          }
        else
          {
            t = o_12;
            {
              ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL;
              d_115 = t;
              c_115 :
              if(match_cons(d_115, sym_Cons_2))
                {
                  e_115 = ATgetArgument(d_115, 0);
                  f_115 = ATgetArgument(d_115, 1);
                  t = not_null(f_115);
                  t = filter_1(t, w_53);
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm const_names_0 (ATerm t)
{
  t = filter_1(t, Names_0);
  t = concat_0(t);
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm j_5 (ATerm t)
      {
        ATerm k_5 (ATerm t)
        {
          ATerm j_115 = NULL;
          j_115 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_115), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, k_5);
        return(t);
      }
      t = map_1(t, j_5);
    }
    return(t);
  }
  t = split_2(t, i_5, _id);
  t = tsubs_0(t);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL;
  r_115 = t;
  n_115 :
  if(match_cons(r_115, sym_TCons_2))
    {
      s_115 = ATgetArgument(r_115, 0);
      t_115 = ATgetArgument(r_115, 1);
      o_115 :
      if(match_cons(t_115, sym_TCons_2))
        {
          u_115 = ATgetArgument(t_115, 0);
          v_115 = ATgetArgument(t_115, 1);
          p_115 :
          if(match_cons(v_115, sym_TCons_2))
            {
              w_115 = ATgetArgument(v_115, 0);
              x_115 = ATgetArgument(v_115, 1);
              q_115 :
              if(match_cons(x_115, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Constructors_1, not_null(s_115)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(u_115)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_115)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
            _fail(t);
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
  ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  g_116 = t;
  d_116 :
  if(match_cons(g_116, sym_TCons_2))
    {
      h_116 = ATgetArgument(g_116, 0);
      i_116 = ATgetArgument(g_116, 1);
      e_116 :
      if(match_cons(i_116, sym_TCons_2))
        {
          j_116 = ATgetArgument(i_116, 0);
          k_116 = ATgetArgument(i_116, 1);
          f_116 :
          if(match_cons(k_116, sym_TNil_0))
            {
              t = not_null(h_116);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(j_116);
                  return(t);
                }
                t = at_end_1(t, l_5);
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
ATerm Combine_0 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL;
  d_117 = t;
  s_116 :
  if(match_cons(d_117, sym_TCons_2))
    {
      e_117 = ATgetArgument(d_117, 0);
      l_117 = ATgetArgument(d_117, 1);
      t_116 :
      if(match_cons(e_117, sym_TCons_2))
        {
          f_117 = ATgetArgument(e_117, 0);
          g_117 = ATgetArgument(e_117, 1);
          u_116 :
          if(match_cons(g_117, sym_TCons_2))
            {
              h_117 = ATgetArgument(g_117, 0);
              i_117 = ATgetArgument(g_117, 1);
              v_116 :
              if(match_cons(i_117, sym_TCons_2))
                {
                  j_117 = ATgetArgument(i_117, 0);
                  k_117 = ATgetArgument(i_117, 1);
                  w_116 :
                  if(match_cons(k_117, sym_TNil_0))
                    {
                      x_116 :
                      if(match_cons(l_117, sym_TCons_2))
                        {
                          m_117 = ATgetArgument(l_117, 0);
                          t_117 = ATgetArgument(l_117, 1);
                          y_116 :
                          if(match_cons(m_117, sym_TCons_2))
                            {
                              n_117 = ATgetArgument(m_117, 0);
                              o_117 = ATgetArgument(m_117, 1);
                              z_116 :
                              if(match_cons(o_117, sym_TCons_2))
                                {
                                  p_117 = ATgetArgument(o_117, 0);
                                  q_117 = ATgetArgument(o_117, 1);
                                  a_117 :
                                  if(match_cons(q_117, sym_TCons_2))
                                    {
                                      r_117 = ATgetArgument(q_117, 0);
                                      s_117 = ATgetArgument(q_117, 1);
                                      b_117 :
                                      if(match_cons(s_117, sym_TNil_0))
                                        {
                                          c_117 :
                                          if(match_cons(t_117, sym_TNil_0))
                                            {
                                              ATerm a_118 = NULL,c_118 = NULL,e_118 = NULL;
                                              ATerm p_12;
                                              p_12 = t;
                                              {
                                                ATerm b_118 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                t = conc_0(t);
                                                b_118 = t;
                                                if(a_118 != NULL && a_118 != b_118)
                                                  _fail(b_118);
                                                else
                                                  a_118 = b_118;
                                              }
                                              t = p_12;
                                              {
                                                ATerm q_12;
                                                q_12 = t;
                                                {
                                                  ATerm d_118 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  d_118 = t;
                                                  if(c_118 != NULL && c_118 != d_118)
                                                    _fail(d_118);
                                                  else
                                                    c_118 = d_118;
                                                }
                                                t = q_12;
                                                {
                                                  ATerm f_118 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_117), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_117), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  f_118 = t;
                                                  if(e_118 != NULL && e_118 != f_118)
                                                    _fail(f_118);
                                                  else
                                                    e_118 = f_118;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_118), (ATerm) ATmakeAppl(sym_TNil_0))));
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
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_54 (ATerm), ATerm p_54 (ATerm))
{
  ATerm r_12 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = o_54(t);
      PopChoice();
    }
  else
    {
      t = r_12;
      {
        ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL;
        n_118 = t;
        m_118 :
        if(match_cons(n_118, sym_Cons_2))
          {
            o_118 = ATgetArgument(n_118, 0);
            p_118 = ATgetArgument(n_118, 1);
            {
              ATerm s_118 = NULL;
              ATerm t_118 = NULL;
              t = not_null(p_118);
              t = foldr_2(t, o_54, p_54);
              t_118 = t;
              if(s_118 != NULL && s_118 != t_118)
                _fail(t_118);
              else
                s_118 = t_118;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_118), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_118), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = p_54(t);
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm NormBSIG_0 (ATerm t)
{
  ATerm z_118 = NULL,a_119 = NULL;
  z_118 = t;
  y_118 :
  if(match_cons(z_118, sym_Constructors_1))
    {
      a_119 = ATgetArgument(z_118, 0);
      t = not_null(a_119);
    }
  else
    {
      if(match_cons(z_118, sym_Sorts_1))
        {
          a_119 = ATgetArgument(z_118, 0);
          t = (ATerm) ATmakeAppl(sym_Nil_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm normalize_sigs_0 (ATerm t)
{
  t = map_1(t, NormBSIG_0);
  t = concat_0(t);
  return(t);
}
ATerm NormBSP_0 (ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL;
  l_119 = t;
  k_119 :
  if(match_cons(l_119, sym_Signature_1))
    {
      m_119 = ATgetArgument(l_119, 0);
      {
        ATerm o_119 = NULL;
        ATerm q_119 = NULL;
        t = not_null(m_119);
        t = normalize_sigs_0(t);
        q_119 = t;
        if(o_119 != NULL && o_119 != q_119)
          _fail(q_119);
        else
          o_119 = q_119;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_119), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(l_119, sym_Strategies_1))
        {
          m_119 = ATgetArgument(l_119, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_119), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(l_119, sym_Rules_1))
            {
              m_119 = ATgetArgument(l_119, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_119), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(l_119, sym_Overlays_1))
                {
                  m_119 = ATgetArgument(l_119, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_119), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL;
  c_120 = t;
  b_120 :
  if(match_cons(c_120, sym_Specification_1))
    {
      d_120 = ATgetArgument(c_120, 0);
      t = not_null(d_120);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm g_120 (ATerm t)
  {
    t = g_62(t);
    t = _all(t, g_120);
    return(t);
  }
  t = g_120(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm j_120 = NULL,k_120 = NULL;
      j_120 = t;
      i_120 :
      if(match_cons(j_120, sym_DefaultVarDec_1))
        {
          k_120 = ATgetArgument(j_120, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_120), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, n_5);
    return(t);
  }
  t = topdown_1(t, m_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm o_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, o_5, Combine_0);
    t = MkSpec_0(t);
    t = Specification_1(t, vars_to_consts_0);
    t = define_lrules_0(t);
    t = LiftDynamicRules_0(t);
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  t = normalize_spec_0(t);
  {
    ATerm s_12;
    s_12 = t;
    t = spec_use_def_0(t);
    t = s_12;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm q_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          t = Cons_2(t, r_5, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, q_5);
        return(t);
      }
      t = Specification_1(t, p_5);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm o_120 = NULL;
  o_120 = t;
  n_120 :
  if(!(match_cons(o_120, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
  t_120 = t;
  s_120 :
  if(match_cons(t_120, sym_TCons_2))
    {
      u_120 = ATgetArgument(t_120, 0);
      v_120 = ATgetArgument(t_120, 1);
      {
        ATerm z_120 = NULL;
        t = not_null(u_120);
        {
          ATerm b_121 = NULL;
          t = a_44(t);
          z_120 = t;
          t = not_null(v_120);
          t = b_44(t);
          b_121 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_120), not_null(b_121));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_121 = NULL;
  ATerm t_12;
  t_12 = t;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm j_121 = NULL,k_121 = NULL;
      j_121 = t;
      h_121 :
      if(match_cons(j_121, sym_Program_1))
        {
          k_121 = ATgetArgument(j_121, 0);
          if(i_121 != NULL && i_121 != k_121)
            _fail(k_121);
          else
            i_121 = k_121;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, s_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_121), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = t_12;
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
  ATerm r_121 = NULL,s_121 = NULL;
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm u_12 = t;
      if(PushChoice()==0)
        {
          ATerm w_5 (ATerm t)
          {
            ATerm t_121 = NULL;
            t_121 = t;
            m_121 :
            if(!(match_cons(t_121, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, w_5);
          PopChoice();
          _fail(t);
        }
      else
        t = u_12;
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, u_5, v_5);
    {
      ATerm x_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          ATerm u_121 = NULL,v_121 = NULL;
          u_121 = t;
          o_121 :
          if(match_cons(u_121, sym_Runtime_1))
            {
              v_121 = ATgetArgument(u_121, 0);
              if(s_121 != NULL && s_121 != v_121)
                _fail(v_121);
              else
                s_121 = v_121;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_5);
        return(t);
      }
      ATerm y_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, x_5, y_5);
      {
        ATerm a_6 (ATerm t)
        {
          ATerm c_6 (ATerm t)
          {
            ATerm w_121 = NULL,x_121 = NULL;
            w_121 = t;
            q_121 :
            if(match_cons(w_121, sym_Program_1))
              {
                x_121 = ATgetArgument(w_121, 0);
                if(r_121 != NULL && r_121 != x_121)
                  _fail(x_121);
                else
                  r_121 = x_121;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_6);
          return(t);
        }
        ATerm b_6 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, a_6, b_6);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(r_121), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_121), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, t_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL;
  e_122 = t;
  b_122 :
  if(match_cons(e_122, sym_TCons_2))
    {
      f_122 = ATgetArgument(e_122, 0);
      g_122 = ATgetArgument(e_122, 1);
      c_122 :
      if(match_cons(g_122, sym_TCons_2))
        {
          h_122 = ATgetArgument(g_122, 0);
          i_122 = ATgetArgument(g_122, 1);
          d_122 :
          if(match_cons(i_122, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(f_122), not_null(h_122));
          else
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
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  q_122 = t;
  n_122 :
  if(match_cons(q_122, sym_TCons_2))
    {
      r_122 = ATgetArgument(q_122, 0);
      s_122 = ATgetArgument(q_122, 1);
      o_122 :
      if(match_cons(s_122, sym_TCons_2))
        {
          t_122 = ATgetArgument(s_122, 0);
          u_122 = ATgetArgument(s_122, 1);
          p_122 :
          if(match_cons(u_122, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(r_122), not_null(t_122));
          else
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
  ATerm c_123 = NULL;
  ATerm v_12;
  v_12 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm w_12 = t;
      if(PushChoice()==0)
        {
          ATerm f_6 (ATerm t)
          {
            ATerm d_123 = NULL,e_123 = NULL;
            d_123 = t;
            z_122 :
            if(match_cons(d_123, sym_Output_1))
              {
                e_123 = ATgetArgument(d_123, 0);
                if(c_123 != NULL && c_123 != e_123)
                  _fail(e_123);
                else
                  c_123 = e_123;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_6);
          PopChoice();
        }
      else
        {
          t = w_12;
          {
            ATerm f_123 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            f_123 = t;
            if(c_123 != NULL && c_123 != f_123)
              _fail(f_123);
            else
              c_123 = f_123;
          }
        }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, d_6, e_6);
  }
  t = v_12;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_6 (ATerm t)
        {
          t = not_null(c_123);
          return(t);
        }
        t = split_2(t, i_6, _id);
        return(t);
      }
      t = TCons_2(t, h_6, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, g_6);
    {
      ATerm x_12 = t;
      if(PushChoice()==0)
        {
          ATerm j_6 (ATerm t)
          {
            ATerm l_6 (ATerm t)
            {
              ATerm g_123 = NULL;
              g_123 = t;
              b_123 :
              if(!(match_cons(g_123, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, l_6);
            return(t);
          }
          ATerm k_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, j_6, k_6);
          PopChoice();
        }
      else
        {
          t = x_12;
          {
            ATerm m_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, m_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm o_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL;
  ATerm y_12;
  y_12 = t;
  t = dtime_0(t);
  t = y_12;
  t = a_51(t);
  {
    ATerm z_12;
    z_12 = t;
    {
      ATerm p_123 = NULL;
      t = dtime_0(t);
      p_123 = t;
      if(o_123 != NULL && o_123 != p_123)
        _fail(p_123);
      else
        o_123 = p_123;
    }
    t = z_12;
    q_123 = t;
    l_123 :
    if(match_cons(q_123, sym_TCons_2))
      {
        r_123 = ATgetArgument(q_123, 0);
        s_123 = ATgetArgument(q_123, 1);
        m_123 :
        if(match_cons(s_123, sym_TCons_2))
          {
            t_123 = ATgetArgument(s_123, 0);
            u_123 = ATgetArgument(s_123, 1);
            n_123 :
            if(match_cons(u_123, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(o_123)), not_null(r_123)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_123), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_124 = NULL;
  b_124 = t;
  t = SSL_ReadFromFile(not_null(b_124));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_53 (ATerm), ATerm f_53 (ATerm))
{
  ATerm h_124 = NULL;
  ATerm j_124 = NULL,l_124 = NULL;
  h_124 = t;
  {
    ATerm a_13;
    a_13 = t;
    {
      ATerm k_124 = NULL;
      t = not_null(h_124);
      t = e_53(t);
      k_124 = t;
      if(j_124 != NULL && j_124 != k_124)
        _fail(k_124);
      else
        j_124 = k_124;
    }
    t = a_13;
    {
      ATerm m_124 = NULL;
      t = not_null(h_124);
      t = f_53(t);
      m_124 = t;
      if(l_124 != NULL && l_124 != m_124)
        _fail(m_124);
      else
        l_124 = m_124;
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_124), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_124), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_124 = NULL;
  ATerm b_13;
  b_13 = t;
  {
    ATerm c_13 = t;
    if(PushChoice()==0)
      {
        ATerm n_6 (ATerm t)
        {
          ATerm u_124 = NULL,v_124 = NULL;
          u_124 = t;
          r_124 :
          if(match_cons(u_124, sym_Input_1))
            {
              v_124 = ATgetArgument(u_124, 0);
              if(t_124 != NULL && t_124 != v_124)
                _fail(v_124);
              else
                t_124 = v_124;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_6);
        PopChoice();
      }
    else
      {
        t = c_13;
        {
          ATerm w_124 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_124 = t;
          if(t_124 != NULL && t_124 != w_124)
            _fail(w_124);
          else
            t_124 = w_124;
        }
      }
  }
  t = b_13;
  {
    ATerm o_6 (ATerm t)
    {
      t = not_null(t_124);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_125 = NULL;
  a_125 = t;
  z_124 :
  if(!(match_cons(a_125, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_50 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm d_13 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = d_13;
        {
          ATerm e_13 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = e_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_6);
  t = z_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_125 = NULL;
  c_125 = t;
  t = SSL_table_create(not_null(c_125));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_125 = NULL;
  g_125 = t;
  {
    ATerm f_13;
    f_13 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_125), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = f_13;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL;
  s_125 = t;
  m_125 :
  if(match_cons(s_125, sym_Cons_2))
    {
      o_125 = ATgetArgument(s_125, 0);
      p_125 = ATgetArgument(s_125, 1);
      n_125 :
      if(match_cons(p_125, sym_Cons_2))
        {
          q_125 = ATgetArgument(p_125, 0);
          r_125 = ATgetArgument(p_125, 1);
          {
            ATerm w_125 = NULL;
            t = not_null(o_125);
            t = d_0(t);
            {
              ATerm x_125 = NULL;
              t = not_null(q_125);
              t = e_0(t);
              x_125 = t;
              if(w_125 != NULL && w_125 != x_125)
                _fail(x_125);
              else
                w_125 = x_125;
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_125), not_null(r_125));
            }
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_string(s_125, "register-usage-info"))
        t = register_usage_1(t, f_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_13 = t;
  if(PushChoice()==0)
    {
      ATerm q_6 (ATerm t)
      {
        ATerm m_126 = NULL;
        m_126 = t;
        b_126 :
        if(!(match_string(m_126, "-S")))
          {
            if(!(match_string(m_126, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, q_6, r_6, s_6);
      PopChoice();
    }
  else
    {
      t = g_13;
      {
        ATerm h_13 = t;
        if(PushChoice()==0)
          {
            ATerm t_6 (ATerm t)
            {
              ATerm n_126 = NULL;
              n_126 = t;
              c_126 :
              if(!(match_string(n_126, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm v_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, t_6, u_6, v_6);
            PopChoice();
          }
        else
          {
            t = h_13;
            {
              ATerm i_13 = t;
              if(PushChoice()==0)
                {
                  ATerm w_6 (ATerm t)
                  {
                    ATerm o_126 = NULL;
                    o_126 = t;
                    d_126 :
                    if(!(match_string(o_126, "-v")))
                      {
                        if(!(match_string(o_126, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm x_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm y_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, w_6, x_6, y_6);
                  PopChoice();
                }
              else
                {
                  t = i_13;
                  {
                    ATerm j_13 = t;
                    if(PushChoice()==0)
                      {
                        ATerm z_6 (ATerm t)
                        {
                          ATerm p_126 = NULL;
                          p_126 = t;
                          e_126 :
                          if(!(match_string(p_126, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm a_7 (ATerm t)
                        {
                          ATerm q_126 = NULL;
                          q_126 = t;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_126));
                          return(t);
                        }
                        ATerm b_7 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, z_6, a_7, b_7);
                        PopChoice();
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm k_13 = t;
                          if(PushChoice()==0)
                            {
                              ATerm c_7 (ATerm t)
                              {
                                ATerm s_126 = NULL;
                                s_126 = t;
                                g_126 :
                                if(!(match_string(s_126, "-i")))
                                  {
                                    if(!(match_string(s_126, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm d_7 (ATerm t)
                              {
                                ATerm t_126 = NULL;
                                t_126 = t;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_126));
                                return(t);
                              }
                              ATerm e_7 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, c_7, d_7, e_7);
                              PopChoice();
                            }
                          else
                            {
                              t = k_13;
                              {
                                ATerm l_13 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm v_126 = NULL;
                                      v_126 = t;
                                      i_126 :
                                      if(!(match_string(v_126, "-o")))
                                        {
                                          if(!(match_string(v_126, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_7 (ATerm t)
                                    {
                                      ATerm w_126 = NULL;
                                      w_126 = t;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_126));
                                      return(t);
                                    }
                                    ATerm h_7 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_7, g_7, h_7);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = l_13;
                                    {
                                      ATerm m_13 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm i_7 (ATerm t)
                                          {
                                            ATerm y_126 = NULL;
                                            y_126 = t;
                                            k_126 :
                                            if(!(match_string(y_126, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm k_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, i_7, j_7, k_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = m_13;
                                          {
                                            ATerm l_7 (ATerm t)
                                            {
                                              ATerm z_126 = NULL;
                                              z_126 = t;
                                              l_126 :
                                              if(!(match_string(z_126, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm m_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm n_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, l_7, m_7, n_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_127 = NULL;
  e_127 = t;
  t = SSL_table_destroy(not_null(e_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_127 = NULL;
  i_127 = t;
  t = SSL_exit(not_null(i_127));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_127 = NULL;
  m_127 = t;
  t = SSL_implode_string(not_null(m_127));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm p_127 (ATerm t)
  {
    ATerm n_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, p_127);
        PopChoice();
      }
    else
      {
        t = n_13;
        t = Nil_0(t);
        t = f_60(t);
      }
    return(t);
  }
  t = p_127(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
        s_127 = t;
        r_127 :
        if(match_cons(s_127, sym_Cons_2))
          {
            t_127 = ATgetArgument(s_127, 0);
            u_127 = ATgetArgument(s_127, 1);
            t = not_null(t_127);
            {
              ATerm p_7 (ATerm t)
              {
                t = not_null(u_127);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, p_7);
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
  ATerm a_128 = NULL;
  a_128 = t;
  t = SSL_explode_string(not_null(a_128));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm d_128 (ATerm t)
  {
    ATerm p_13 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = p_13;
        t = Cons_2(t, r_59, d_128);
      }
    return(t);
  }
  t = d_128(t);
  return(t);
}
ATerm RevExit_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL;
  j_128 = t;
  f_128 :
  if(match_cons(j_128, sym_TCons_2))
    {
      k_128 = ATgetArgument(j_128, 0);
      l_128 = ATgetArgument(j_128, 1);
      g_128 :
      if(match_cons(k_128, sym_Nil_0))
        {
          h_128 :
          if(match_cons(l_128, sym_TCons_2))
            {
              m_128 = ATgetArgument(l_128, 0);
              n_128 = ATgetArgument(l_128, 1);
              i_128 :
              if(match_cons(n_128, sym_TNil_0))
                t = not_null(m_128);
              else
                _fail(t);
            }
          else
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
  ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL,b_129 = NULL;
  v_128 = t;
  r_128 :
  if(match_cons(v_128, sym_TCons_2))
    {
      w_128 = ATgetArgument(v_128, 0);
      z_128 = ATgetArgument(v_128, 1);
      s_128 :
      if(match_cons(w_128, sym_Cons_2))
        {
          x_128 = ATgetArgument(w_128, 0);
          y_128 = ATgetArgument(w_128, 1);
          t_128 :
          if(match_cons(z_128, sym_TCons_2))
            {
              a_129 = ATgetArgument(z_128, 0);
              b_129 = ATgetArgument(z_128, 1);
              u_128 :
              if(match_cons(b_129, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_128), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(x_128), not_null(a_129)), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm g_129 (ATerm t)
  {
    ATerm q_13 = t;
    if(PushChoice()==0)
      {
        t = k_65(t);
        t = g_129(t);
        PopChoice();
      }
    else
      {
        t = q_13;
        t = l_65(t);
      }
    return(t);
  }
  t = g_129(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm n_65 (ATerm))
{
  t = repeat_2(t, n_65, _id);
  return(t);
}
ATerm RevInit_0 (ATerm t)
{
  ATerm i_129 = NULL;
  i_129 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_129), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  t = RevInit_0(t);
  t = repeat_1(t, Rev_0);
  t = RevExit_0(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_39 (ATerm))
{
  ATerm o_129 = NULL,p_129 = NULL;
  o_129 = t;
  n_129 :
  if(match_cons(o_129, sym_Program_1))
    {
      p_129 = ATgetArgument(o_129, 0);
      {
        ATerm r_129 = NULL;
        t = not_null(p_129);
        t = h_39(t);
        r_129 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_129));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_129 = NULL;
  ATerm q_7 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      ATerm a_130 = NULL;
      a_130 = t;
      if(z_129 != NULL && z_129 != a_130)
        _fail(a_130);
      else
        z_129 = a_130;
      return(t);
    }
    t = Program_1(t, r_7);
    return(t);
  }
  t = option_defined_1(t, q_7);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm b_130 = NULL;
      ATerm c_130 = NULL;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm t_7 (ATerm t)
        {
          t = not_null(z_129);
          return(t);
        }
        t = short_description_1(t, t_7);
        t = concat_strings_0(t);
        c_130 = t;
        if(b_130 != NULL && b_130 != c_130)
          _fail(c_130);
        else
          b_130 = c_130;
      }
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(b_130), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
      t = printnl_0(t);
      return(t);
    }
    t = try_1(t, s_7);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = table_get_0(t);
    t = reverse_0(t);
    {
      ATerm y_7 (ATerm t)
      {
        ATerm d_130 = NULL;
        d_130 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_130), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
        return(t);
      }
      t = map_1(t, y_7);
      {
        ATerm a_8 (ATerm t)
        {
          ATerm f_130 = NULL;
          ATerm g_130 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          {
            ATerm c_8 (ATerm t)
            {
              t = not_null(z_129);
              return(t);
            }
            t = long_description_1(t, c_8);
            t = concat_strings_0(t);
            g_130 = t;
            if(f_130 != NULL && f_130 != g_130)
              _fail(g_130);
            else
              f_130 = g_130;
          }
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_130), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
          return(t);
        }
        t = try_1(t, a_8);
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL;
  p_130 = t;
  m_130 :
  if(match_cons(p_130, sym_TCons_2))
    {
      q_130 = ATgetArgument(p_130, 0);
      r_130 = ATgetArgument(p_130, 1);
      n_130 :
      if(match_cons(r_130, sym_TCons_2))
        {
          s_130 = ATgetArgument(r_130, 0);
          t_130 = ATgetArgument(r_130, 1);
          o_130 :
          if(match_cons(t_130, sym_TNil_0))
            {
              ATerm r_13;
              r_13 = t;
              t = SSL_printnl(not_null(q_130), not_null(s_130));
              t = r_13;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_39 (ATerm))
{
  ATerm a_131 = NULL,b_131 = NULL;
  a_131 = t;
  z_130 :
  if(match_cons(a_131, sym_Undefined_1))
    {
      b_131 = ATgetArgument(a_131, 0);
      {
        ATerm d_131 = NULL;
        t = not_null(b_131);
        t = i_39(t);
        d_131 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_131));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm h_131 (ATerm t)
  {
    ATerm s_13 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, z_59, _id);
        PopChoice();
      }
    else
      {
        t = s_13;
        t = Cons_2(t, _id, h_131);
      }
    return(t);
  }
  t = h_131(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_50 (ATerm))
{
  t = fetch_1(t, e_50);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_131 = NULL;
  j_131 = t;
  i_131 :
  if(!(match_cons(j_131, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm t_13 = t;
  if(PushChoice()==0)
    {
      t = h_66(t);
      PopChoice();
    }
  else
    t = t_13;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL;
  o_131 = t;
  l_131 :
  if(match_cons(o_131, sym_TCons_2))
    {
      p_131 = ATgetArgument(o_131, 0);
      q_131 = ATgetArgument(o_131, 1);
      m_131 :
      if(match_cons(q_131, sym_TCons_2))
        {
          r_131 = ATgetArgument(q_131, 0);
          s_131 = ATgetArgument(q_131, 1);
          n_131 :
          if(match_cons(s_131, sym_TNil_0))
            t = SSL_table_get(not_null(p_131), not_null(r_131));
          else
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
  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL;
  c_132 = t;
  y_131 :
  if(match_cons(c_132, sym_TCons_2))
    {
      d_132 = ATgetArgument(c_132, 0);
      e_132 = ATgetArgument(c_132, 1);
      z_131 :
      if(match_cons(e_132, sym_TCons_2))
        {
          f_132 = ATgetArgument(e_132, 0);
          g_132 = ATgetArgument(e_132, 1);
          a_132 :
          if(match_cons(g_132, sym_TCons_2))
            {
              h_132 = ATgetArgument(g_132, 0);
              i_132 = ATgetArgument(g_132, 1);
              b_132 :
              if(match_cons(i_132, sym_TNil_0))
                {
                  ATerm u_13;
                  u_13 = t;
                  {
                    ATerm m_132 = NULL;
                    ATerm n_132 = NULL;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_132), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_132), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm z_13 = t;
                      if(PushChoice()==0)
                        {
                          t = table_get_0(t);
                          PopChoice();
                        }
                      else
                        {
                          t = z_13;
                          t = (ATerm) ATmakeAppl(sym_Nil_0);
                        }
                      n_132 = t;
                      if(m_132 != NULL && m_132 != n_132)
                        _fail(n_132);
                      else
                        m_132 = n_132;
                    }
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_132), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_132), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_132), not_null(m_132)), (ATerm) ATmakeAppl(sym_TNil_0))));
                    t = table_put_0(t);
                  }
                  t = u_13;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm r_132 = NULL;
  ATerm s_132 = NULL;
  t = (ATerm) ATmakeAppl(sym_TNil_0);
  t = k_49(t);
  s_132 = t;
  if(r_132 != NULL && r_132 != s_132)
    _fail(s_132);
  else
    r_132 = s_132;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_132), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_push_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL;
  a_133 = t;
  x_132 :
  if(match_cons(a_133, sym_Cons_2))
    {
      y_132 = ATgetArgument(a_133, 0);
      z_132 = ATgetArgument(a_133, 1);
      {
        ATerm d_133 = NULL;
        t = not_null(y_132);
        t = a_0(t);
        {
          ATerm e_133 = NULL;
          t = (ATerm) ATmakeAppl(sym_TNil_0);
          t = b_0(t);
          e_133 = t;
          if(d_133 != NULL && d_133 != e_133)
            _fail(e_133);
          else
            d_133 = e_133;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_133), not_null(z_132));
        }
      }
    }
  else
    {
      if(match_string(a_133, "register-usage-info"))
        t = register_usage_1(t, c_0);
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm j_133 = NULL;
    j_133 = t;
    i_133 :
    if(!(match_string(j_133, "--help")))
      {
        if(!(match_string(j_133, "-h")))
          {
            if(!(match_string(j_133, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, d_8, e_8, f_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL;
  m_133 = t;
  l_133 :
  if(match_cons(m_133, sym_Cons_2))
    {
      n_133 = ATgetArgument(m_133, 0);
      o_133 = ATgetArgument(m_133, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_133)), not_null(o_133));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_44 (ATerm), ATerm f_44 (ATerm))
{
  ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL;
  w_133 = t;
  v_133 :
  if(match_cons(w_133, sym_Cons_2))
    {
      x_133 = ATgetArgument(w_133, 0);
      y_133 = ATgetArgument(w_133, 1);
      {
        ATerm c_134 = NULL;
        t = not_null(x_133);
        {
          ATerm e_134 = NULL;
          t = e_44(t);
          c_134 = t;
          t = not_null(y_133);
          t = f_44(t);
          e_134 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_134), not_null(e_134));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_134 = NULL;
  k_134 = t;
  j_134 :
  if(!(match_cons(k_134, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_49 (ATerm))
{
  ATerm a_14;
  a_14 = t;
  {
    ATerm g_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_49(t);
      return(t);
    }
    t = try_1(t, g_8);
  }
  t = a_14;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm n_134 = NULL;
      n_134 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_134));
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      ATerm b_14 = t;
      if(PushChoice()==0)
        {
          ATerm c_14 = t;
          if(PushChoice()==0)
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = c_14;
              t = i_49(t);
              t = Cons_2(t, _id, i_8);
            }
          PopChoice();
        }
      else
        {
          t = b_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_8, i_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL;
  ATerm d_14;
  d_14 = t;
  {
    ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL,e_135 = NULL,f_135 = NULL;
    z_134 = t;
    s_134 :
    if(match_cons(z_134, sym_TCons_2))
      {
        a_135 = ATgetArgument(z_134, 0);
        b_135 = ATgetArgument(z_134, 1);
        t_134 :
        if(match_cons(b_135, sym_TCons_2))
          {
            c_135 = ATgetArgument(b_135, 0);
            d_135 = ATgetArgument(b_135, 1);
            u_134 :
            if(match_cons(d_135, sym_TCons_2))
              {
                e_135 = ATgetArgument(d_135, 0);
                f_135 = ATgetArgument(d_135, 1);
                v_134 :
                if(match_cons(f_135, sym_TNil_0))
                  {
                    if(w_134 != NULL && w_134 != a_135)
                      _fail(a_135);
                    else
                      w_134 = a_135;
                    if(x_134 != NULL && x_134 != c_135)
                      _fail(c_135);
                    else
                      x_134 = c_135;
                    if(y_134 != NULL && y_134 != e_135)
                      _fail(e_135);
                    else
                      y_134 = e_135;
                    t = SSL_table_put(not_null(w_134), not_null(x_134), not_null(y_134));
                  }
                else
                  _fail(t);
              }
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
ATerm parse_options_1 (ATerm t, ATerm h_49 (ATerm))
{
  ATerm i_135 = NULL;
  ATerm e_14;
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
  t = table_put_0(t);
  t = e_14;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm f_14 = t;
      if(PushChoice()==0)
        {
          t = h_49(t);
          PopChoice();
        }
      else
        {
          t = f_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_8);
    {
      ATerm k_8 (ATerm t)
      {
        ATerm i_14 = t;
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
            t = i_14;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm m_8 (ATerm t)
                {
                  ATerm k_135 = NULL;
                  k_135 = t;
                  if(i_135 != NULL && i_135 != k_135)
                    _fail(k_135);
                  else
                    i_135 = k_135;
                  return(t);
                }
                t = Undefined_1(t, m_8);
                return(t);
              }
              t = option_defined_1(t, l_8);
              {
                ATerm j_14;
                j_14 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_135), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = printnl_0(t);
                t = j_14;
                t = system_usage_0(t);
                t = (ATerm) ATmakeInt(1);
                t = exit_0(t);
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_8);
      {
        ATerm k_14;
        k_14 = t;
        t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
        t = table_destroy_0(t);
        t = k_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm n_8 (ATerm t)
  {
    ATerm l_14 = t;
    if(PushChoice()==0)
      {
        t = p_50(t);
        PopChoice();
      }
    else
      {
        t = l_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_8);
  t = store_options_0(t);
  {
    ATerm m_14 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, q_50);
        PopChoice();
      }
    else
      {
        t = m_14;
        {
          ATerm n_14 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, o_50);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_14;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  t = iowrap_3(t, j_50, k_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm p_8 (ATerm t)
    {
      t = TCons_2(t, g_50, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, p_8);
    return(t);
  }
  t = iowrap_2(t, o_8, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
