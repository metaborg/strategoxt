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
Symbol sym_Operations_1;
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
ATerm App_2 (ATerm, ATerm w_39 (ATerm), ATerm x_39 (ATerm));
ATerm Con_3 (ATerm, ATerm t_39 (ATerm), ATerm u_39 (ATerm), ATerm v_39 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm n_62 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm d_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_41 (ATerm));
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm g_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm));
ATerm Let_2 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_42 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm a_47 (ATerm, ATerm (ATerm)), ATerm b_47 (ATerm), ATerm c_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_47 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_50 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm h_41 (ATerm), ATerm i_41 (ATerm));
ATerm ConstType_1 (ATerm, ATerm g_41 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm l_41 (ATerm), ATerm m_41 (ATerm));
ATerm CheckCons_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm manytd_1 (ATerm, ATerm s_63 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm check_constructors_1 (ATerm, ATerm c_0 (ATerm));
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm f_45 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm t_41 (ATerm), ATerm u_41 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm c_44 (ATerm));
ATerm Var_1 (ATerm, ATerm p_41 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm y_46 (ATerm), ATerm z_46 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_46 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_59 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm b_60 (ATerm));
ATerm substitute_6 (ATerm, ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm)), ATerm m_47 (ATerm), ATerm n_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_47 (ATerm, ATerm (ATerm)), ATerm p_47 (ATerm));
ATerm substitute_5 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm, ATerm (ATerm)), ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_47 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm d_45 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm e_45 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm Overlay_3 (ATerm, ATerm x_40 (ATerm), ATerm y_40 (ATerm), ATerm z_40 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm p_56 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm z_43 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm i_40 (ATerm), ATerm j_40 (ATerm), ATerm k_40 (ATerm));
ATerm BAM_3 (ATerm, ATerm q_39 (ATerm), ATerm r_39 (ATerm), ATerm s_39 (ATerm));
ATerm BA_2 (ATerm, ATerm o_39 (ATerm), ATerm p_39 (ATerm));
ATerm AM_2 (ATerm, ATerm m_39 (ATerm), ATerm n_39 (ATerm));
ATerm MA_2 (ATerm, ATerm k_39 (ATerm), ATerm l_39 (ATerm));
ATerm Match_1 (ATerm, ATerm e_43 (ATerm));
ATerm Build_1 (ATerm, ATerm f_43 (ATerm));
ATerm constructs_1 (ATerm, ATerm y_43 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm), ATerm s_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm b_41 (ATerm));
ATerm Signature_1 (ATerm, ATerm a_41 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm h_65 (ATerm));
ATerm one_dist_1 (ATerm, ATerm x_59 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm m_60 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_63 (ATerm), ATerm z_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_64 (ATerm));
ATerm listtd_1 (ATerm, ATerm k_59 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm t_40 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm tboundin_3 (ATerm, ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_53 (ATerm), ATerm k_53 (ATerm), ATerm l_53 (ATerm));
ATerm crush_3 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm collect_kids_1 (ATerm, ATerm i_55 (ATerm));
ATerm HdMember_1 (ATerm, ATerm q_54 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_64 (ATerm), ATerm q_64 (ATerm));
ATerm for_3 (ATerm, ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm u_64 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_60 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm f_47 (ATerm), ATerm g_47 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_62 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm zip_1 (ATerm, ATerm w_56 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_47 (ATerm), ATerm i_47 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_47 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_52 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm FoldR_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm));
ATerm at_end_1 (ATerm, ATerm w_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm map_1 (ATerm, ATerm h_58 (ATerm));
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_60 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_64 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_51 (ATerm), ATerm w_51 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_38 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm q_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_48 (ATerm));
ATerm need_help_1 (ATerm, ATerm r_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm r_48 (ATerm), ATerm s_48 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_49 (ATerm), ATerm c_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_48 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  h_5 :
  if(match_cons(h_7, sym_Match_1))
    {
      i_7 = ATgetArgument(h_7, 0);
      {
        ATerm l_7 = NULL,m_7 = NULL,p_7 = NULL,q_7 = NULL,u_7 = NULL;
        ATerm n_7 = NULL;
        ATerm o_7 = NULL;
        t = new_0(t);
        n_7 = t;
        if(l_7 != NULL && l_7 != n_7)
          _fail(n_7);
        else
          l_7 = n_7;
        t = new_0(t);
        o_7 = t;
        if(m_7 != NULL && m_7 != o_7)
          _fail(o_7);
        else
          m_7 = o_7;
        t = not_null(i_7);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
            r_7 = t;
            p_4 :
            if(match_cons(r_7, sym_Explode_2))
              {
                s_7 = ATgetArgument(r_7, 0);
                t_7 = ATgetArgument(r_7, 1);
                if(p_7 != NULL && p_7 != s_7)
                  _fail(s_7);
                else
                  p_7 = s_7;
                if(q_7 != NULL && q_7 != t_7)
                  _fail(t_7);
                else
                  q_7 = t_7;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_7));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, d_0);
          u_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(l_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_7)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_7), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_7))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_7)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_7)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_7), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0))))))));
        }
      }
    }
  else
    {
      if(match_cons(h_7, sym_Build_1))
        {
          i_7 = ATgetArgument(h_7, 0);
          {
            ATerm e_10 = NULL,a_11 = NULL,c_11 = NULL,e_12 = NULL;
            ATerm f_10 = NULL;
            t = new_0(t);
            f_10 = t;
            if(e_10 != NULL && e_10 != f_10)
              _fail(f_10);
            else
              e_10 = f_10;
            t = not_null(i_7);
            {
              ATerm e_0 (ATerm t)
              {
                ATerm d_11 = NULL,e_11 = NULL,d_12 = NULL;
                d_11 = t;
                t_4 :
                if(match_cons(d_11, sym_Explode_2))
                  {
                    e_11 = ATgetArgument(d_11, 0);
                    d_12 = ATgetArgument(d_11, 1);
                    if(a_11 != NULL && a_11 != e_11)
                      _fail(e_11);
                    else
                      a_11 = e_11;
                    if(c_11 != NULL && c_11 != d_12)
                      _fail(d_12);
                    else
                      c_11 = d_12;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_10));
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, e_0);
              e_12 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(e_10), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_11), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_11), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_12)))));
            }
          }
        }
      else
        {
          if(match_cons(h_7, sym_ExplodeCong_2))
            {
              i_7 = ATgetArgument(h_7, 0);
              j_7 = ATgetArgument(h_7, 1);
              {
                ATerm o_13 = NULL,p_13 = NULL,x_13 = NULL,y_13 = NULL;
                ATerm z_13 = NULL;
                ATerm k_14 = NULL;
                t = new_0(t);
                z_13 = t;
                if(o_13 != NULL && o_13 != z_13)
                  _fail(z_13);
                else
                  o_13 = z_13;
                {
                  ATerm l_14 = NULL;
                  t = new_0(t);
                  k_14 = t;
                  if(p_13 != NULL && p_13 != k_14)
                    _fail(k_14);
                  else
                    p_13 = k_14;
                  {
                    ATerm m_14 = NULL;
                    t = new_0(t);
                    l_14 = t;
                    if(x_13 != NULL && x_13 != l_14)
                      _fail(l_14);
                    else
                      x_13 = l_14;
                    t = new_0(t);
                    m_14 = t;
                    if(y_13 != NULL && y_13 != m_14)
                      _fail(m_14);
                    else
                      y_13 = m_14;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(o_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(x_13), (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_13), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_13)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(i_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_13))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_13)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_13))))), (ATerm) ATmakeAppl(sym_Prim_2, (ATerm)ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_13)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_13)), (ATerm) ATmakeAppl(sym_Nil_0)))))));
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
  ATerm j_15 = NULL,k_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Build_1))
    {
      k_15 = ATgetArgument(j_15, 0);
      {
        ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL,u_16 = NULL;
        ATerm n_15 = NULL;
        t = new_0(t);
        n_15 = t;
        if(m_15 != NULL && m_15 != n_15)
          _fail(n_15);
        else
          m_15 = n_15;
        t = not_null(k_15);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm q_15 = NULL,w_15 = NULL,q_16 = NULL;
            q_15 = t;
            e_15 :
            if(match_cons(q_15, sym_App_2))
              {
                w_15 = ATgetArgument(q_15, 0);
                q_16 = ATgetArgument(q_15, 1);
                if(o_15 != NULL && o_15 != w_15)
                  _fail(w_15);
                else
                  o_15 = w_15;
                if(p_15 != NULL && p_15 != q_16)
                  _fail(q_16);
                else
                  p_15 = q_16;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15));
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, f_0);
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(m_15), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(o_15), not_null(p_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_16))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  d_17 = t;
  b_17 :
  if(match_cons(d_17, sym_Build_1))
    {
      e_17 = ATgetArgument(d_17, 0);
      c_17 :
      if(match_cons(e_17, sym_App_2))
        {
          f_17 = ATgetArgument(e_17, 0);
          g_17 = ATgetArgument(e_17, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_17)), not_null(f_17));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_Build_1))
    {
      r_17 = ATgetArgument(q_17, 0);
      {
        ATerm t_17 = NULL,u_17 = NULL,z_17 = NULL;
        t = not_null(r_17);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
            v_17 = t;
            m_17 :
            if(match_cons(v_17, sym_App_2))
              {
                w_17 = ATgetArgument(v_17, 0);
                y_17 = ATgetArgument(v_17, 1);
                n_17 :
                if(match_cons(w_17, sym_Build_1))
                  {
                    x_17 = ATgetArgument(w_17, 0);
                    if(u_17 != NULL && u_17 != x_17)
                      _fail(x_17);
                    else
                      u_17 = x_17;
                    if(t_17 != NULL && t_17 != y_17)
                      _fail(y_17);
                    else
                      t_17 = y_17;
                    t = not_null(u_17);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, g_0);
          z_17 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,g_19 = NULL,h_19 = NULL,v_19 = NULL,w_19 = NULL;
  g_19 = t;
  r_18 :
  if(match_cons(g_19, sym_Seqs_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      s_18 :
      if(match_cons(h_19, sym_Nil_0))
        t = (ATerm) ATmakeAppl(sym_Id_0);
      else
        {
          if(match_cons(h_19, sym_Cons_2))
            {
              b_19 = ATgetArgument(h_19, 0);
              c_19 = ATgetArgument(h_19, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_19), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_19)));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(g_19, sym_Choices_1))
        {
          h_19 = ATgetArgument(g_19, 0);
          z_18 :
          if(match_cons(h_19, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Fail_0);
          else
            {
              if(match_cons(h_19, sym_Cons_2))
                {
                  b_19 = ATgetArgument(h_19, 0);
                  c_19 = ATgetArgument(h_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(b_19), (ATerm) ATmakeAppl(sym_Choices_1, not_null(c_19)));
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(g_19, sym_LChoices_1))
            {
              h_19 = ATgetArgument(g_19, 0);
              a_19 :
              if(match_cons(h_19, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_Fail_0);
              else
                {
                  if(match_cons(h_19, sym_Cons_2))
                    {
                      b_19 = ATgetArgument(h_19, 0);
                      c_19 = ATgetArgument(h_19, 1);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_19), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(c_19)));
                    }
                  else
                    _fail(t);
                }
            }
          else
            {
              if(match_cons(g_19, sym_Lets_2))
                {
                  h_19 = ATgetArgument(g_19, 0);
                  v_19 = ATgetArgument(g_19, 1);
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_19), not_null(v_19));
                }
              else
                {
                  if(match_cons(g_19, sym_BA_2))
                    {
                      h_19 = ATgetArgument(g_19, 0);
                      v_19 = ATgetArgument(g_19, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_19)), not_null(h_19));
                    }
                  else
                    {
                      if(match_cons(g_19, sym_MA_2))
                        {
                          h_19 = ATgetArgument(g_19, 0);
                          v_19 = ATgetArgument(g_19, 1);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_19)), not_null(v_19));
                        }
                      else
                        {
                          if(match_cons(g_19, sym_AM_2))
                            {
                              h_19 = ATgetArgument(g_19, 0);
                              v_19 = ATgetArgument(g_19, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_19), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_19)));
                            }
                          else
                            {
                              if(match_cons(g_19, sym_BAM_3))
                                {
                                  h_19 = ATgetArgument(g_19, 0);
                                  v_19 = ATgetArgument(g_19, 1);
                                  w_19 = ATgetArgument(g_19, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_19)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_19)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                                }
                              else
                                {
                                  if(match_cons(g_19, sym_InfixApp_3))
                                    {
                                      h_19 = ATgetArgument(g_19, 0);
                                      v_19 = ATgetArgument(g_19, 1);
                                      w_19 = ATgetArgument(g_19, 2);
                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_19), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(h_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_19), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))));
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
  ATerm o_21 = NULL;
  o_21 = t;
  n_21 :
  if(!(match_cons(o_21, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm c_8 = t;
  if(PushChoice()==0)
    {
      ATerm h_0 (ATerm t)
      {
        ATerm d_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = d_8;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, h_0);
      PopChoice();
      _fail(t);
    }
  else
    t = c_8;
  return(t);
}
ATerm App_2 (ATerm t, ATerm w_39 (ATerm), ATerm x_39 (ATerm))
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_App_2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      {
        ATerm y_21 = NULL;
        t = not_null(u_21);
        {
          ATerm a_22 = NULL;
          t = w_39(t);
          y_21 = t;
          t = not_null(v_21);
          t = x_39(t);
          a_22 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_21), not_null(a_22));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm t_39 (ATerm), ATerm u_39 (ATerm), ATerm v_39 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_Con_3))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      n_22 = ATgetArgument(k_22, 2);
      {
        ATerm r_22 = NULL;
        t = not_null(l_22);
        {
          ATerm u_22 = NULL;
          t = t_39(t);
          r_22 = t;
          t = not_null(m_22);
          {
            ATerm w_22 = NULL;
            t = u_39(t);
            u_22 = t;
            t = not_null(n_22);
            t = v_39(t);
            w_22 = t;
            t = (ATerm) ATmakeAppl(sym_Con_3, not_null(r_22), not_null(u_22), not_null(w_22));
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
  ATerm e_8 = t;
  if(PushChoice()==0)
    {
      ATerm i_0 (ATerm t)
      {
        ATerm f_8 = t;
        if(PushChoice()==0)
          {
            t = Con_3(t, _id, _id, _id);
            PopChoice();
          }
        else
          {
            t = f_8;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_0);
      PopChoice();
      _fail(t);
    }
  else
    t = e_8;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  g_23 = t;
  e_23 :
  if(match_cons(g_23, sym_SRule_1))
    {
      i_23 = ATgetArgument(g_23, 0);
      f_23 :
      if(match_cons(i_23, sym_Rule_3))
        {
          j_23 = ATgetArgument(i_23, 0);
          k_23 = ATgetArgument(i_23, 1);
          l_23 = ATgetArgument(i_23, 2);
          t = not_null(j_23);
          t = pureterm_0(t);
          t = not_null(k_23);
          t = buildterm_0(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_23)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_23)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        {
          if(match_cons(i_23, sym_StratRule_3))
            {
              j_23 = ATgetArgument(i_23, 0);
              k_23 = ATgetArgument(i_23, 1);
              l_23 = ATgetArgument(i_23, 2);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATmakeAppl(sym_Cons_2, not_null(j_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_23), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_23), (ATerm) ATmakeAppl(sym_Nil_0)))));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm w_23 (ATerm t)
  {
    ATerm g_8 = t;
    if(PushChoice()==0)
      {
        t = n_62(t);
        PopChoice();
      }
    else
      {
        t = g_8;
        t = _one(t, w_23);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  l_24 = t;
  j_24 :
  if(match_cons(l_24, sym_SRule_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      k_24 :
      if(match_cons(m_24, sym_Rule_3))
        {
          n_24 = ATgetArgument(m_24, 0);
          o_24 = ATgetArgument(m_24, 1);
          p_24 = ATgetArgument(m_24, 2);
          {
            ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,d_25 = NULL;
            ATerm u_24 = NULL;
            t = new_0(t);
            u_24 = t;
            if(t_24 != NULL && t_24 != u_24)
              _fail(u_24);
            else
              t_24 = u_24;
            t = not_null(n_24);
            {
              ATerm f_25 = NULL,g_25 = NULL,o_25 = NULL;
              ATerm j_0 (ATerm t)
              {
                ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
                y_24 = t;
                a_24 :
                if(match_cons(y_24, sym_Con_3))
                  {
                    z_24 = ATgetArgument(y_24, 0);
                    b_25 = ATgetArgument(y_24, 1);
                    c_25 = ATgetArgument(y_24, 2);
                    b_24 :
                    if(match_cons(z_24, sym_Var_1))
                      {
                        a_25 = ATgetArgument(z_24, 0);
                        if(x_24 != NULL && x_24 != a_25)
                          _fail(a_25);
                        else
                          x_24 = a_25;
                        if(v_24 != NULL && v_24 != b_25)
                          _fail(b_25);
                        else
                          v_24 = b_25;
                        if(w_24 != NULL && w_24 != c_25)
                          _fail(c_25);
                        else
                          w_24 = c_25;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24));
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, j_0);
              d_25 = t;
              t = not_null(o_24);
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
                  h_25 = t;
                  e_24 :
                  if(match_cons(h_25, sym_Con_3))
                    {
                      i_25 = ATgetArgument(h_25, 0);
                      k_25 = ATgetArgument(h_25, 1);
                      l_25 = ATgetArgument(h_25, 2);
                      f_24 :
                      if(match_cons(i_25, sym_Var_1))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          g_24 :
                          if(match_cons(l_25, sym_Call_2))
                            {
                              m_25 = ATgetArgument(l_25, 0);
                              n_25 = ATgetArgument(l_25, 1);
                              h_24 :
                              if(match_cons(n_25, sym_Nil_0))
                                {
                                  if(x_24 != NULL && x_24 != j_25)
                                    _fail(j_25);
                                  else
                                    x_24 = j_25;
                                  if(f_25 != NULL && f_25 != k_25)
                                    _fail(k_25);
                                  else
                                    f_25 = k_25;
                                  if(g_25 != NULL && g_25 != m_25)
                                    _fail(m_25);
                                  else
                                    g_25 = m_25;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_24));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1(t, k_0);
                o_25 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(t_24), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_25), not_null(o_25), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_24), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_25), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_24), not_null(f_25), (ATerm) ATmakeAppl(sym_Id_0))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_24)))))));
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
  ATerm l_0 (ATerm t)
  {
    ATerm h_8 = t;
    if(PushChoice()==0)
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        PopChoice();
      }
    else
      {
        t = h_8;
        {
          ATerm i_8 = t;
          if(PushChoice()==0)
            {
              t = Scope_2(t, _id, desugarRule_0);
              PopChoice();
            }
          else
            {
              t = i_8;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm j_8 = t;
        if(PushChoice()==0)
          {
            t = HL_0(t);
            PopChoice();
          }
        else
          {
            t = j_8;
            {
              ATerm k_8 = t;
              if(PushChoice()==0)
                {
                  ATerm l_8 = t;
                  if(PushChoice()==0)
                    {
                      t = Bapp0_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = l_8;
                      {
                        ATerm m_8 = t;
                        if(PushChoice()==0)
                          {
                            t = Bapp1_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = m_8;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  PopChoice();
                }
              else
                {
                  t = k_8;
                  t = Expl_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, n_0);
    }
    return(t);
  }
  t = topdown_1(t, m_0);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, o_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm d_41 (ATerm))
{
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Strategies_1))
    {
      b_26 = ATgetArgument(a_26, 0);
      {
        ATerm d_26 = NULL;
        t = not_null(b_26);
        t = d_41(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(d_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm f_41 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Specification_1))
    {
      l_26 = ATgetArgument(k_26, 0);
      {
        ATerm n_26 = NULL;
        t = not_null(l_26);
        t = f_41(t);
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(n_26));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Cons_2))
    {
      u_26 = ATgetArgument(t_26, 0);
      v_26 = ATgetArgument(t_26, 1);
      t = not_null(u_26);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm g_44 (ATerm))
{
  ATerm n_8 = t;
  if(PushChoice()==0)
    {
      ATerm p_0 (ATerm t)
      {
        t = split_2(t, _id, g_44);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,w_27 = NULL;
            o_27 = t;
            a_27 :
            if(match_cons(o_27, sym_TCons_2))
              {
                p_27 = ATgetArgument(o_27, 0);
                t_27 = ATgetArgument(o_27, 1);
                b_27 :
                if(match_cons(p_27, sym_SDef_3))
                  {
                    q_27 = ATgetArgument(p_27, 0);
                    r_27 = ATgetArgument(p_27, 1);
                    s_27 = ATgetArgument(p_27, 2);
                    c_27 :
                    if(match_cons(t_27, sym_TCons_2))
                      {
                        u_27 = ATgetArgument(t_27, 0);
                        w_27 = ATgetArgument(t_27, 1);
                        d_27 :
                        if(match_cons(w_27, sym_TNil_0))
                          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_27), not_null(r_27), not_null(s_27));
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, q_0);
        }
        return(t);
      }
      t = Let_2(t, p_0, _id);
      PopChoice();
    }
  else
    {
      t = n_8;
      {
        ATerm o_8 = t;
        if(PushChoice()==0)
          {
            ATerm r_0 (ATerm t)
            {
              t = split_2(t, _id, g_44);
              {
                ATerm s_0 (ATerm t)
                {
                  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
                  a_28 = t;
                  f_27 :
                  if(match_cons(a_28, sym_TCons_2))
                    {
                      b_28 = ATgetArgument(a_28, 0);
                      e_28 = ATgetArgument(a_28, 1);
                      l_27 :
                      if(match_cons(b_28, sym_VarDec_2))
                        {
                          c_28 = ATgetArgument(b_28, 0);
                          d_28 = ATgetArgument(b_28, 1);
                          m_27 :
                          if(match_cons(e_28, sym_TCons_2))
                            {
                              f_28 = ATgetArgument(e_28, 0);
                              g_28 = ATgetArgument(e_28, 1);
                              n_27 :
                              if(match_cons(g_28, sym_TNil_0))
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_28), not_null(d_28));
                              else
                                _fail(t);
                            }
                          else
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
              }
              return(t);
            }
            t = SDef_3(t, _id, r_0, _id);
            PopChoice();
          }
        else
          {
            t = o_8;
            {
              ATerm t_0 (ATerm t)
              {
                t = g_44(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, t_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Rec_2))
    {
      r_28 = ATgetArgument(q_28, 0);
      u_28 = ATgetArgument(q_28, 1);
      {
        ATerm x_28 = NULL;
        t = not_null(r_28);
        {
          ATerm z_28 = NULL;
          t = e_42(t);
          x_28 = t;
          t = not_null(u_28);
          t = f_42(t);
          z_28 = t;
          t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(x_28), not_null(z_28));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Let_2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      {
        ATerm p_29 = NULL;
        t = not_null(l_29);
        {
          ATerm r_29 = NULL;
          t = g_42(t);
          p_29 = t;
          t = not_null(m_29);
          t = h_42(t);
          r_29 = t;
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_29), not_null(r_29));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm h_44 (ATerm), ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm p_8 = t;
  if(PushChoice()==0)
    {
      t = Let_2(t, h_44, h_44);
      PopChoice();
    }
  else
    {
      t = p_8;
      {
        ATerm q_8 = t;
        if(PushChoice()==0)
          {
            t = SDef_3(t, j_44, j_44, h_44);
            PopChoice();
          }
        else
          {
            t = q_8;
            t = Rec_2(t, j_44, h_44);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  b_30 :
  if(match_cons(c_30, sym_Rec_2))
    {
      d_30 = ATgetArgument(c_30, 0);
      e_30 = ATgetArgument(c_30, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_30), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  v_30 = t;
  t_30 :
  if(match_cons(v_30, sym_SDef_3))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      y_30 = ATgetArgument(v_30, 2);
      t = not_null(x_30);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
          c_31 = t;
          q_30 :
          if(match_cons(c_31, sym_VarDec_2))
            {
              d_31 = ATgetArgument(c_31, 0);
              e_31 = ATgetArgument(c_31, 1);
              t = not_null(d_31);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, u_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  l_31 :
  if(match_cons(m_31, sym_Let_2))
    {
      n_31 = ATgetArgument(m_31, 0);
      o_31 = ATgetArgument(m_31, 1);
      t = not_null(n_31);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
          r_31 = t;
          k_31 :
          if(match_cons(r_31, sym_SDef_3))
            {
              s_31 = ATgetArgument(r_31, 0);
              t_31 = ATgetArgument(r_31, 1);
              u_31 = ATgetArgument(r_31, 2);
              t = not_null(s_31);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, v_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_42 (ATerm))
{
  ATerm h_32 = NULL,i_32 = NULL;
  h_32 = t;
  g_32 :
  if(match_cons(h_32, sym_SVar_1))
    {
      i_32 = ATgetArgument(h_32, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(i_32);
        t = d_42(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(s_32));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm r_8 = t;
    if(PushChoice()==0)
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = r_8;
        {
          ATerm s_8 = t;
          if(PushChoice()==0)
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = s_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, w_0, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_47 (ATerm, ATerm (ATerm)), ATerm b_47 (ATerm), ATerm c_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_47 (ATerm, ATerm (ATerm)))
{
  ATerm x_32 = NULL;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_32), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  {
    ATerm a_33 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm t_8 = t;
        if(PushChoice()==0)
          {
            t = RnVar_1(t, a_47);
            PopChoice();
          }
        else
          {
            t = t_8;
            t = RnBinding_2(t, b_47, d_47);
            t = DistBinding_2(t, a_33, c_47);
          }
        return(t);
      }
      t = env_alltd_1(t, x_0);
      return(t);
    }
    t = a_33(t);
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
  ATerm e_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_SDef_3))
    {
      j_33 = ATgetArgument(e_33, 0);
      k_33 = ATgetArgument(e_33, 1);
      l_33 = ATgetArgument(e_33, 2);
      {
        ATerm p_33 = NULL;
        t = not_null(l_33);
        t = tvars_0(t);
        p_33 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_33), not_null(k_33), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_33), not_null(l_33)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym_RDef_3))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      z_33 = ATgetArgument(w_33, 2);
      {
        ATerm d_34 = NULL;
        t = not_null(z_33);
        t = tvars_0(t);
        d_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_33), not_null(y_33), (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_34), (ATerm) ATmakeAppl(sym_SRule_1, not_null(z_33))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_34)), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  z_34 = t;
  x_34 :
  if(match_cons(z_34, sym_OpDecl_2))
    {
      a_35 = ATgetArgument(z_34, 0);
      c_35 = ATgetArgument(z_34, 1);
      y_34 :
      if(match_cons(c_35, sym_ConstType_1))
        {
          d_35 = ATgetArgument(c_35, 0);
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_35), (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_Cong_2, not_null(a_35), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(c_35, sym_FunType_2))
            {
              d_35 = ATgetArgument(c_35, 0);
              e_35 = ATgetArgument(c_35, 1);
              {
                ATerm k_35 = NULL,l_35 = NULL,d_36 = NULL;
                ATerm s_35 = NULL,t_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
                t = not_null(d_35);
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = new_0(t);
                    {
                      ATerm z_0 (ATerm t)
                      {
                        ATerm m_35 = NULL;
                        m_35 = t;
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_35), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
                        return(t);
                      }
                      t = split_2(t, z_0, _id);
                    }
                    return(t);
                  }
                  t = map_1(t, y_0);
                  t = unzip_0(t);
                  s_35 = t;
                  p_34 :
                  if(match_cons(s_35, sym_TCons_2))
                    {
                      t_35 = ATgetArgument(s_35, 0);
                      a_36 = ATgetArgument(s_35, 1);
                      q_34 :
                      if(match_cons(a_36, sym_TCons_2))
                        {
                          b_36 = ATgetArgument(a_36, 0);
                          c_36 = ATgetArgument(a_36, 1);
                          v_34 :
                          if(match_cons(c_36, sym_TNil_0))
                            {
                              if(k_35 != NULL && k_35 != t_35)
                                _fail(t_35);
                              else
                                k_35 = t_35;
                              if(l_35 != NULL && l_35 != b_36)
                                _fail(b_36);
                              else
                                l_35 = b_36;
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
                t = not_null(l_35);
                t = map_1(t, MkCall_0);
                d_36 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_35), not_null(k_35), (ATerm) ATmakeAppl(sym_Cong_2, not_null(a_35), not_null(d_36)));
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
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Sorts_1))
    {
      z_38 = ATgetArgument(y_38, 0);
      t = (ATerm) ATmakeAppl(sym_Nil_0);
    }
  else
    {
      if(match_cons(y_38, sym_Operations_1))
        {
          z_38 = ATgetArgument(y_38, 0);
          t = not_null(z_38);
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
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,l_40 = NULL,m_40 = NULL;
  c_40 = t;
  i_39 :
  if(match_cons(c_40, sym_Specification_1))
    {
      d_40 = ATgetArgument(c_40, 0);
      j_39 :
      if(match_cons(d_40, sym_Cons_2))
        {
          e_40 = ATgetArgument(d_40, 0);
          g_40 = ATgetArgument(d_40, 1);
          y_39 :
          if(match_cons(e_40, sym_Signature_1))
            {
              f_40 = ATgetArgument(e_40, 0);
              z_39 :
              if(match_cons(g_40, sym_Cons_2))
                {
                  h_40 = ATgetArgument(g_40, 0);
                  m_40 = ATgetArgument(g_40, 1);
                  a_40 :
                  if(match_cons(h_40, sym_Strategies_1))
                    {
                      l_40 = ATgetArgument(h_40, 0);
                      b_40 :
                      if(match_cons(m_40, sym_Nil_0))
                        {
                          ATerm p_40 = NULL;
                          t = not_null(f_40);
                          {
                            ATerm v_40 = NULL;
                            t = congdefs_0(t);
                            p_40 = t;
                            t = not_null(l_40);
                            {
                              ATerm c_41 = NULL;
                              ATerm a_1 (ATerm t)
                              {
                                ATerm u_8 = t;
                                if(PushChoice()==0)
                                  {
                                    t = RDtoSD_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = u_8;
                                    t = DeclareVariables_0(t);
                                  }
                                return(t);
                              }
                              t = map_1(t, a_1);
                              v_40 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_40), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_40), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = conc_0(t);
                              c_41 = t;
                              t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(f_40)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_41)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm v_8;
  v_8 = t;
  {
    ATerm b_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm s_41 = NULL;
      ATerm w_41 = NULL;
      s_41 = t;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      t = c_50(t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_41), (ATerm) ATmakeAppl(sym_Cons_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Nil_0)));
      return(t);
    }
    t = split_2(t, b_1, c_1);
    t = printnl_0(t);
  }
  t = v_8;
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  t = SSL_int_to_string(not_null(b_42));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  q_42 = t;
  n_42 :
  if(match_cons(q_42, sym_TCons_2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      o_42 :
      if(match_cons(s_42, sym_TCons_2))
        {
          t_42 = ATgetArgument(s_42, 0);
          u_42 = ATgetArgument(s_42, 1);
          p_42 :
          if(match_cons(u_42, sym_TNil_0))
            {
              ATerm w_8 = t;
              if(PushChoice()==0)
                {
                  t = SSL_addi(not_null(r_42), not_null(t_42));
                  PopChoice();
                }
              else
                {
                  t = w_8;
                  t = SSL_addr(not_null(r_42), not_null(t_42));
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
  ATerm x_8 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      t = (ATerm) ATmakeInt(0);
      PopChoice();
    }
  else
    {
      t = x_8;
      {
        ATerm b_43 = NULL;
        t = Tl_0(t);
        t = length_0(t);
        b_43 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_43), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeInt(1), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = add_0(t);
      }
    }
  return(t);
}
ATerm FunType_2 (ATerm t, ATerm h_41 (ATerm), ATerm i_41 (ATerm))
{
  ATerm p_43 = NULL,q_43 = NULL,u_43 = NULL;
  p_43 = t;
  m_43 :
  if(match_cons(p_43, sym_FunType_2))
    {
      q_43 = ATgetArgument(p_43, 0);
      u_43 = ATgetArgument(p_43, 1);
      {
        ATerm k_44 = NULL;
        t = not_null(q_43);
        {
          ATerm m_44 = NULL;
          t = h_41(t);
          k_44 = t;
          t = not_null(u_43);
          t = i_41(t);
          m_44 = t;
          t = (ATerm) ATmakeAppl(sym_FunType_2, not_null(k_44), not_null(m_44));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym_ConstType_1))
    {
      v_44 = ATgetArgument(u_44, 0);
      {
        ATerm x_44 = NULL;
        t = not_null(v_44);
        t = g_41(t);
        x_44 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(x_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OpDecl_2 (ATerm t, ATerm l_41 (ATerm), ATerm m_41 (ATerm))
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  i_45 :
  if(match_cons(n_45, sym_OpDecl_2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        ATerm s_45 = NULL;
        t = not_null(o_45);
        {
          ATerm u_45 = NULL;
          t = l_41(t);
          s_45 = t;
          t = not_null(p_45);
          t = m_41(t);
          u_45 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(s_45), not_null(u_45));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckCons_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Op_2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        ATerm p_46 = NULL;
        ATerm y_8 = t;
        if(PushChoice()==0)
          {
            t = x_43(t);
            {
              ATerm d_1 (ATerm t)
              {
                ATerm k_46 = NULL;
                ATerm e_1 (ATerm t)
                {
                  ATerm l_46 = NULL;
                  l_46 = t;
                  if(g_46 != NULL && g_46 != l_46)
                    _fail(l_46);
                  else
                    g_46 = l_46;
                  return(t);
                }
                ATerm f_1 (ATerm t)
                {
                  ATerm z_8 = t;
                  if(PushChoice()==0)
                    {
                      ATerm n_46 = NULL;
                      t = ConstType_1(t, _id);
                      t = (ATerm) ATmakeAppl(sym_Nil_0);
                      n_46 = t;
                      if(k_46 != NULL && k_46 != n_46)
                        _fail(n_46);
                      else
                        k_46 = n_46;
                      PopChoice();
                    }
                  else
                    {
                      t = z_8;
                      {
                        ATerm g_1 (ATerm t)
                        {
                          ATerm o_46 = NULL;
                          o_46 = t;
                          if(k_46 != NULL && k_46 != o_46)
                            _fail(o_46);
                          else
                            k_46 = o_46;
                          return(t);
                        }
                        t = FunType_2(t, g_1, _id);
                      }
                    }
                  return(t);
                }
                t = OpDecl_2(t, e_1, f_1);
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_46), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_46), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = zip_1(t, _id);
                return(t);
              }
              t = fetch_1(t, d_1);
            }
            PopChoice();
            _fail(t);
          }
        else
          t = y_8;
        t = not_null(h_46);
        t = length_0(t);
        t = int_to_string_0(t);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("/", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(p_46), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))));
        t = concat_strings_0(t);
        t = debug_1(t, w_43);
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_46), not_null(h_46));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm manytd_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm w_47 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = s_63(t);
        {
          ATerm h_1 (ATerm t)
          {
            t = try_1(t, w_47);
            return(t);
          }
          t = _all(t, h_1);
        }
        PopChoice();
      }
    else
      {
        t = a_9;
        t = _some(t, w_47);
      }
    return(t);
  }
  t = w_47(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  t = SSL_implode_string(not_null(y_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_explode_string(not_null(c_48));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  t = concat_0(t);
  t = implode_string_0(t);
  return(t);
}
ATerm check_constructors_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,t_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_RDef_3))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      t_48 = ATgetArgument(k_48, 2);
      {
        ATerm z_48 = NULL;
        ATerm a_49 = NULL;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
        t = concat_strings_0(t);
        a_49 = t;
        if(z_48 != NULL && z_48 != a_49)
          _fail(a_49);
        else
          z_48 = a_49;
        t = not_null(t_48);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(z_48);
              return(t);
            }
            t = CheckCons_2(t, j_1, c_0);
            return(t);
          }
          t = manytd_1(t, i_1);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(l_48), not_null(m_48), not_null(t_48));
      }
    }
  else
    {
      if(match_cons(k_48, sym_SDef_3))
        {
          l_48 = ATgetArgument(k_48, 0);
          m_48 = ATgetArgument(k_48, 1);
          t_48 = ATgetArgument(k_48, 2);
          {
            ATerm j_49 = NULL;
            ATerm k_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error: in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
            t = concat_strings_0(t);
            k_49 = t;
            if(j_49 != NULL && j_49 != k_49)
              _fail(k_49);
            else
              j_49 = k_49;
            t = not_null(t_48);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = not_null(j_49);
                  return(t);
                }
                t = CheckCons_2(t, l_1, c_0);
                return(t);
              }
              t = manytd_1(t, k_1);
            }
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_48), not_null(m_48), not_null(t_48));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  d_50 = t;
  t_49 :
  if(match_cons(d_50, sym_Specification_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      u_49 :
      if(match_cons(e_50, sym_Cons_2))
        {
          f_50 = ATgetArgument(e_50, 0);
          k_50 = ATgetArgument(e_50, 1);
          v_49 :
          if(match_cons(f_50, sym_Signature_1))
            {
              g_50 = ATgetArgument(f_50, 0);
              w_49 :
              if(match_cons(g_50, sym_Cons_2))
                {
                  h_50 = ATgetArgument(g_50, 0);
                  j_50 = ATgetArgument(g_50, 1);
                  x_49 :
                  if(match_cons(h_50, sym_Operations_1))
                    {
                      i_50 = ATgetArgument(h_50, 0);
                      y_49 :
                      if(match_cons(j_50, sym_Nil_0))
                        {
                          z_49 :
                          if(match_cons(k_50, sym_Cons_2))
                            {
                              l_50 = ATgetArgument(k_50, 0);
                              n_50 = ATgetArgument(k_50, 1);
                              a_50 :
                              if(match_cons(l_50, sym_Strategies_1))
                                {
                                  m_50 = ATgetArgument(l_50, 0);
                                  b_50 :
                                  if(match_cons(n_50, sym_Nil_0))
                                    {
                                      ATerm q_50 = NULL;
                                      t = not_null(m_50);
                                      {
                                        ATerm m_1 (ATerm t)
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = not_null(i_50);
                                            return(t);
                                          }
                                          t = check_constructors_1(t, n_1);
                                          return(t);
                                        }
                                        t = filter_1(t, m_1);
                                        q_50 = t;
                                        q_49 :
                                        if(!(match_cons(q_50, sym_Nil_0)))
                                          _fail(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Operations_1, not_null(i_50)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_50)), (ATerm) ATmakeAppl(sym_Nil_0))));
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm f_45 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm c_9 = t;
      if(PushChoice()==0)
        {
          ATerm t_50 = NULL;
          t = f_45(t);
          t_50 = t;
          s_50 :
          if(!(match_cons(t_50, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = c_9;
    }
    t = b_9;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = ExpOverlay_1(t, f_45);
          return(t);
        }
        t = try_1(t, q_1);
        return(t);
      }
      t = topdown_1(t, p_1);
    }
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  c_51 = t;
  a_51 :
  if(match_cons(c_51, sym_Var_1))
    {
      d_51 = ATgetArgument(c_51, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_51)), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    {
      if(match_cons(c_51, sym_Op_2))
        {
          d_51 = ATgetArgument(c_51, 0);
          b_51 = ATgetArgument(c_51, 1);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_51)), not_null(b_51));
        }
      else
        {
          if(match_cons(c_51, sym_Str_1))
            {
              d_51 = ATgetArgument(c_51, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_51)));
            }
          else
            {
              if(match_cons(c_51, sym_Int_1))
                {
                  d_51 = ATgetArgument(c_51, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(d_51)));
                }
              else
                {
                  if(match_cons(c_51, sym_Real_1))
                    {
                      d_51 = ATgetArgument(c_51, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(d_51)));
                    }
                  else
                    {
                      if(match_cons(c_51, sym_BuildDefault_1))
                        {
                          d_51 = ATgetArgument(c_51, 0);
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
ATerm Op_2 (ATerm t, ATerm t_41 (ATerm), ATerm u_41 (ATerm))
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  u_51 :
  if(match_cons(x_51, sym_Op_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm c_52 = NULL;
        t = not_null(y_51);
        {
          ATerm e_52 = NULL;
          t = t_41(t);
          c_52 = t;
          t = not_null(z_51);
          t = u_41(t);
          e_52 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_52), not_null(e_52));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, s_1);
    return(t);
  }
  t = try_1(t, r_1);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  p_52 = t;
  m_52 :
  if(match_cons(p_52, sym_Overlay_3))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      s_52 = ATgetArgument(p_52, 2);
      {
        ATerm w_52 = NULL;
        t = not_null(s_52);
        t = trm_to_cong_0(t);
        w_52 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_52), not_null(r_52), not_null(w_52));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm c_44 (ATerm))
{
  t = Scope_2(t, c_44, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_41 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Var_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      {
        ATerm n_53 = NULL;
        t = not_null(e_53);
        t = p_41(t);
        n_53 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  y_53 = t;
  u_53 :
  if(match_cons(y_53, sym_TCons_2))
    {
      z_53 = ATgetArgument(y_53, 0);
      a_54 = ATgetArgument(y_53, 1);
      v_53 :
      if(match_cons(a_54, sym_TCons_2))
        {
          b_54 = ATgetArgument(a_54, 0);
          c_54 = ATgetArgument(a_54, 1);
          w_53 :
          if(match_cons(c_54, sym_TCons_2))
            {
              d_54 = ATgetArgument(c_54, 0);
              e_54 = ATgetArgument(c_54, 1);
              x_53 :
              if(match_cons(e_54, sym_TNil_0))
                {
                  t = not_null(z_53);
                  {
                    ATerm t_1 (ATerm t)
                    {
                      ATerm i_54 = NULL;
                      i_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = s_46(t);
                      return(t);
                    }
                    ATerm u_1 (ATerm t)
                    {
                      ATerm k_54 = NULL;
                      k_54 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_54), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_54), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = s_46(t);
                      return(t);
                    }
                    t = t_46(t, t_1, u_1, _id);
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
ATerm RnBinding_2 (ATerm t, ATerm y_46 (ATerm), ATerm z_46 (ATerm, ATerm (ATerm)))
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,j_55 = NULL,k_55 = NULL;
  f_55 = t;
  z_54 :
  if(match_cons(f_55, sym_TCons_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      d_55 :
      if(match_cons(h_55, sym_TCons_2))
        {
          j_55 = ATgetArgument(h_55, 0);
          k_55 = ATgetArgument(h_55, 1);
          e_55 :
          if(match_cons(k_55, sym_TNil_0))
            {
              ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,v_55 = NULL;
              ATerm q_55 = NULL;
              t = not_null(g_55);
              {
                ATerm r_55 = NULL;
                t = y_46(t);
                q_55 = t;
                if(n_55 != NULL && n_55 != q_55)
                  _fail(q_55);
                else
                  n_55 = q_55;
                {
                  ATerm s_55 = NULL;
                  t = map_1(t, new_0);
                  r_55 = t;
                  if(o_55 != NULL && o_55 != r_55)
                    _fail(r_55);
                  else
                    o_55 = r_55;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm u_55 = NULL;
                    t = zip_1(t, _id);
                    s_55 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_55), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = conc_0(t);
                    u_55 = t;
                    if(p_55 != NULL && p_55 != u_55)
                      _fail(u_55);
                    else
                      p_55 = u_55;
                  }
                }
              }
              t = not_null(g_55);
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(o_55);
                  return(t);
                }
                t = z_46(t, v_1);
                v_55 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_55), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_55), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  e_56 :
  if(match_cons(f_56, sym_TCons_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      t = not_null(g_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_46 (ATerm, ATerm (ATerm)))
{
  ATerm q_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  q_56 = t;
  m_56 :
  if(match_cons(q_56, sym_TCons_2))
    {
      x_56 = ATgetArgument(q_56, 0);
      y_56 = ATgetArgument(q_56, 1);
      n_56 :
      if(match_cons(y_56, sym_TCons_2))
        {
          z_56 = ATgetArgument(y_56, 0);
          a_57 = ATgetArgument(y_56, 1);
          o_56 :
          if(match_cons(a_57, sym_TNil_0))
            {
              t = not_null(x_56);
              {
                ATerm w_1 (ATerm t)
                {
                  ATerm x_1 (ATerm t)
                  {
                    t = not_null(z_56);
                    return(t);
                  }
                  t = split_2(t, _id, x_1);
                  t = lookup_0(t);
                  return(t);
                }
                t = m_46(t, w_1);
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
ATerm all_dist_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  j_57 = t;
  g_57 :
  if(match_cons(j_57, sym_TCons_2))
    {
      k_57 = ATgetArgument(j_57, 0);
      l_57 = ATgetArgument(j_57, 1);
      h_57 :
      if(match_cons(l_57, sym_TCons_2))
        {
          m_57 = ATgetArgument(l_57, 0);
          n_57 = ATgetArgument(l_57, 1);
          i_57 :
          if(match_cons(n_57, sym_TNil_0))
            {
              t = not_null(k_57);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm q_57 = NULL;
                  q_57 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_57), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_57), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = w_59(t);
                  return(t);
                }
                t = _all(t, y_1);
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
ATerm env_alltd_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm u_57 (ATerm t)
  {
    ATerm d_9 = t;
    if(PushChoice()==0)
      {
        t = b_60(t);
        PopChoice();
      }
    else
      {
        t = d_9;
        t = all_dist_1(t, u_57);
      }
    return(t);
  }
  t = u_57(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm k_47 (ATerm), ATerm l_47 (ATerm, ATerm (ATerm)), ATerm m_47 (ATerm), ATerm n_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_47 (ATerm, ATerm (ATerm)), ATerm p_47 (ATerm))
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  t = subs_args_0(t);
  z_57 = t;
  w_57 :
  if(match_cons(z_57, sym_TCons_2))
    {
      a_58 = ATgetArgument(z_57, 0);
      b_58 = ATgetArgument(z_57, 1);
      x_57 :
      if(match_cons(b_58, sym_TCons_2))
        {
          c_58 = ATgetArgument(b_58, 0);
          d_58 = ATgetArgument(b_58, 1);
          y_57 :
          if(match_cons(d_58, sym_TNil_0))
            {
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_58), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm j_58 (ATerm t)
                {
                  ATerm z_1 (ATerm t)
                  {
                    ATerm e_9 = t;
                    if(PushChoice()==0)
                      {
                        t = RnVar_1(t, l_47);
                        PopChoice();
                      }
                    else
                      {
                        t = e_9;
                        {
                          ATerm f_9 = t;
                          if(PushChoice()==0)
                            {
                              t = Fst_0(t);
                              {
                                ATerm a_2 (ATerm t)
                                {
                                  t = not_null(a_58);
                                  return(t);
                                }
                                t = SubsVar_2(t, k_47, a_2);
                                t = p_47(t);
                              }
                              PopChoice();
                            }
                          else
                            {
                              t = f_9;
                              t = RnBinding_2(t, m_47, o_47);
                              t = DistBinding_2(t, j_58, n_47);
                            }
                        }
                      }
                    return(t);
                  }
                  t = env_alltd_1(t, z_1);
                  return(t);
                }
                t = j_58(t);
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
ATerm substitute_5 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm, ATerm (ATerm)), ATerm t_47 (ATerm), ATerm u_47 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_47 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, r_47, s_47, t_47, u_47, v_47, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm d_45 (ATerm))
{
  ATerm u_58 = NULL,v_58 = NULL,y_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Op_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      y_58 = ATgetArgument(u_58, 1);
      {
        ATerm b_59 = NULL,c_59 = NULL;
        t = d_45(t);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm g_9;
            g_9 = t;
            {
              ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
              d_59 = t;
              s_58 :
              if(match_cons(d_59, sym_Overlay_3))
                {
                  e_59 = ATgetArgument(d_59, 0);
                  f_59 = ATgetArgument(d_59, 1);
                  g_59 = ATgetArgument(d_59, 2);
                  {
                    ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
                    if(v_58 != NULL && v_58 != e_59)
                      _fail(e_59);
                    else
                      v_58 = e_59;
                    if(h_59 != NULL && h_59 != f_59)
                      _fail(f_59);
                    else
                      h_59 = f_59;
                    if(i_59 != NULL && i_59 != g_59)
                      _fail(g_59);
                    else
                      i_59 = g_59;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_58), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm n_59 = NULL;
                      t = zip_1(t, _id);
                      j_59 = t;
                      {
                        ATerm o_59 = NULL;
                        t = not_null(j_59);
                        n_59 = t;
                        if(b_59 != NULL && b_59 != n_59)
                          _fail(n_59);
                        else
                          b_59 = n_59;
                        t = not_null(i_59);
                        o_59 = t;
                        if(c_59 != NULL && c_59 != o_59)
                          _fail(o_59);
                        else
                          c_59 = o_59;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_59), (ATerm) ATmakeAppl(sym_TNil_0)));
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = g_9;
            return(t);
          }
          t = fetch_1(t, b_2);
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_59), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_59), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = tsubstitute_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm e_45 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm h_9;
    h_9 = t;
    {
      ATerm i_9 = t;
      if(PushChoice()==0)
        {
          ATerm y_59 = NULL;
          t = e_45(t);
          y_59 = t;
          v_59 :
          if(!(match_cons(y_59, sym_Nil_0)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        t = i_9;
    }
    t = h_9;
    {
      ATerm d_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          t = ExpOverlay_1(t, e_45);
          return(t);
        }
        t = repeat_1(t, e_2);
        return(t);
      }
      t = topdown_1(t, d_2);
    }
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  q_60 = t;
  g_60 :
  if(match_cons(q_60, sym_Specification_1))
    {
      r_60 = ATgetArgument(q_60, 0);
      h_60 :
      if(match_cons(r_60, sym_Cons_2))
        {
          s_60 = ATgetArgument(r_60, 0);
          u_60 = ATgetArgument(r_60, 1);
          i_60 :
          if(match_cons(s_60, sym_Signature_1))
            {
              t_60 = ATgetArgument(s_60, 0);
              j_60 :
              if(match_cons(u_60, sym_Cons_2))
                {
                  v_60 = ATgetArgument(u_60, 0);
                  b_61 = ATgetArgument(u_60, 1);
                  k_60 :
                  if(match_cons(v_60, sym_Overlays_1))
                    {
                      w_60 = ATgetArgument(v_60, 0);
                      l_60 :
                      if(match_cons(b_61, sym_Cons_2))
                        {
                          c_61 = ATgetArgument(b_61, 0);
                          e_61 = ATgetArgument(b_61, 1);
                          o_60 :
                          if(match_cons(c_61, sym_Strategies_1))
                            {
                              d_61 = ATgetArgument(c_61, 0);
                              p_60 :
                              if(match_cons(e_61, sym_Nil_0))
                                {
                                  ATerm i_61 = NULL,k_61 = NULL;
                                  ATerm j_61 = NULL;
                                  t = not_null(w_60);
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      t = not_null(w_60);
                                      return(t);
                                    }
                                    t = exp_overlays1_1(t, f_2);
                                    j_61 = t;
                                    if(i_61 != NULL && i_61 != j_61)
                                      _fail(j_61);
                                    else
                                      i_61 = j_61;
                                  }
                                  t = not_null(w_60);
                                  {
                                    ATerm m_61 = NULL;
                                    t = map_1(t, Overlay_to_Congdef_0);
                                    k_61 = t;
                                    t = not_null(d_61);
                                    {
                                      ATerm o_61 = NULL;
                                      ATerm g_2 (ATerm t)
                                      {
                                        t = not_null(i_61);
                                        return(t);
                                      }
                                      t = exp_overlays2_1(t, g_2);
                                      m_61 = t;
                                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_61), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_61), (ATerm) ATmakeAppl(sym_TNil_0)));
                                      t = conc_0(t);
                                      o_61 = t;
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, not_null(t_60)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_61)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm j_9;
  j_9 = t;
  {
    ATerm h_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_stderr_0);
      return(t);
    }
    t = split_2(t, h_2, _id);
    t = printnl_0(t);
  }
  t = j_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm k_9;
  k_9 = t;
  t = error_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  t = k_9;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  c_62 = t;
  y_61 :
  if(match_cons(c_62, sym_TCons_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      z_61 :
      if(match_cons(e_62, sym_TCons_2))
        {
          f_62 = ATgetArgument(e_62, 0);
          g_62 = ATgetArgument(e_62, 1);
          a_62 :
          if(match_cons(g_62, sym_TCons_2))
            {
              h_62 = ATgetArgument(g_62, 0);
              i_62 = ATgetArgument(g_62, 1);
              b_62 :
              if(match_cons(i_62, sym_TNil_0))
                {
                  ATerm m_62 = NULL;
                  t = not_null(d_62);
                  {
                    ATerm q_62 = NULL;
                    t = MsgU_0(t);
                    m_62 = t;
                    t = not_null(h_62);
                    t = MsgE_0(t);
                    q_62 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_62), (ATerm) ATmakeAppl(sym_Cons_2, not_null(q_62), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  c_63 = t;
  a_63 :
  if(match_cons(c_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(c_63, sym_Cons_2))
        {
          d_63 = ATgetArgument(c_63, 0);
          e_63 = ATgetArgument(c_63, 1);
          b_63 :
          if(match_cons(e_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(e_63, sym_Cons_2))
                {
                  f_63 = ATgetArgument(e_63, 0);
                  g_63 = ATgetArgument(e_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_63), not_null(g_63))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,c_64 = NULL,d_64 = NULL;
  v_63 = t;
  r_63 :
  if(match_cons(v_63, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_Nil_0);
  else
    {
      if(match_cons(v_63, sym_Cons_2))
        {
          w_63 = ATgetArgument(v_63, 0);
          x_63 = ATgetArgument(v_63, 1);
          u_63 :
          if(match_cons(x_63, sym_Nil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
          else
            {
              if(match_cons(x_63, sym_Cons_2))
                {
                  c_64 = ATgetArgument(x_63, 0);
                  d_64 = ATgetArgument(x_63, 1);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(w_63), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_64), not_null(d_64))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  z_64 = t;
  o_64 :
  if(match_cons(z_64, sym_TCons_2))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      w_64 :
      if(match_cons(b_65, sym_TCons_2))
        {
          c_65 = ATgetArgument(b_65, 0);
          d_65 = ATgetArgument(b_65, 1);
          x_64 :
          if(match_cons(d_65, sym_TCons_2))
            {
              e_65 = ATgetArgument(d_65, 0);
              f_65 = ATgetArgument(d_65, 1);
              y_64 :
              if(match_cons(f_65, sym_TNil_0))
                {
                  ATerm l_65 = NULL;
                  t = not_null(a_65);
                  {
                    ATerm n_65 = NULL;
                    t = MsgU_0(t);
                    l_65 = t;
                    t = not_null(e_65);
                    t = MsgE_0(t);
                    n_65 = t;
                    t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_65), (ATerm) ATmakeAppl(sym_Cons_2, not_null(n_65), (ATerm) ATmakeAppl(sym_Nil_0)));
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
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym_RDef_3))
    {
      a_66 = ATgetArgument(z_65, 0);
      b_66 = ATgetArgument(z_65, 1);
      c_66 = ATgetArgument(z_65, 2);
      {
        ATerm g_66 = NULL;
        t = not_null(c_66);
        t = map_1(t, MsgR_0);
        t = concat_0(t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(g_66))));
      }
    }
  else
    {
      if(match_cons(z_65, sym_SDef_3))
        {
          a_66 = ATgetArgument(z_65, 0);
          b_66 = ATgetArgument(z_65, 1);
          c_66 = ATgetArgument(z_65, 2);
          {
            ATerm l_66 = NULL;
            t = not_null(c_66);
            t = map_1(t, MsgS_0);
            t = concat_0(t);
            l_66 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(l_66))));
          }
        }
      else
        {
          if(match_cons(z_65, sym_Overlay_3))
            {
              a_66 = ATgetArgument(z_65, 0);
              b_66 = ATgetArgument(z_65, 1);
              c_66 = ATgetArgument(z_65, 2);
              {
                ATerm q_66 = NULL;
                t = not_null(c_66);
                t = map_1(t, MsgR_0);
                t = concat_0(t);
                q_66 = t;
                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(a_66), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue)), not_null(q_66))));
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
ATerm Overlay_3 (ATerm t, ATerm x_40 (ATerm), ATerm y_40 (ATerm), ATerm z_40 (ATerm))
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym_Overlay_3))
    {
      e_67 = ATgetArgument(d_67, 0);
      f_67 = ATgetArgument(d_67, 1);
      g_67 = ATgetArgument(d_67, 2);
      {
        ATerm k_67 = NULL;
        t = not_null(e_67);
        {
          ATerm m_67 = NULL;
          t = x_40(t);
          k_67 = t;
          t = not_null(f_67);
          {
            ATerm o_67 = NULL;
            t = y_40(t);
            m_67 = t;
            t = not_null(g_67);
            t = z_40(t);
            o_67 = t;
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(k_67), not_null(m_67), not_null(o_67));
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
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  j_68 = t;
  y_67 :
  if(match_cons(j_68, sym_TCons_2))
    {
      k_68 = ATgetArgument(j_68, 0);
      s_68 = ATgetArgument(j_68, 1);
      z_67 :
      if(match_cons(k_68, sym_TCons_2))
        {
          l_68 = ATgetArgument(k_68, 0);
          m_68 = ATgetArgument(k_68, 1);
          a_68 :
          if(match_cons(m_68, sym_TCons_2))
            {
              n_68 = ATgetArgument(m_68, 0);
              o_68 = ATgetArgument(m_68, 1);
              b_68 :
              if(match_cons(o_68, sym_TCons_2))
                {
                  p_68 = ATgetArgument(o_68, 0);
                  q_68 = ATgetArgument(o_68, 1);
                  c_68 :
                  if(match_cons(q_68, sym_TNil_0))
                    {
                      d_68 :
                      if(match_cons(s_68, sym_TCons_2))
                        {
                          t_68 = ATgetArgument(s_68, 0);
                          a_69 = ATgetArgument(s_68, 1);
                          e_68 :
                          if(match_cons(t_68, sym_TCons_2))
                            {
                              u_68 = ATgetArgument(t_68, 0);
                              v_68 = ATgetArgument(t_68, 1);
                              f_68 :
                              if(match_cons(v_68, sym_TCons_2))
                                {
                                  w_68 = ATgetArgument(v_68, 0);
                                  x_68 = ATgetArgument(v_68, 1);
                                  g_68 :
                                  if(match_cons(x_68, sym_TCons_2))
                                    {
                                      y_68 = ATgetArgument(x_68, 0);
                                      z_68 = ATgetArgument(x_68, 1);
                                      h_68 :
                                      if(match_cons(z_68, sym_TNil_0))
                                        {
                                          i_68 :
                                          if(match_cons(a_69, sym_TNil_0))
                                            {
                                              ATerm h_69 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm j_69 = NULL;
                                                t = union_0(t);
                                                h_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm m_69 = NULL;
                                                  t = union_0(t);
                                                  j_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_68), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_68), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = union_0(t);
                                                  m_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(h_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_69), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_69), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  v_69 = t;
  t_69 :
  if(match_cons(v_69, sym_TCons_2))
    {
      w_69 = ATgetArgument(v_69, 0);
      x_69 = ATgetArgument(v_69, 1);
      u_69 :
      if(match_cons(x_69, sym_TCons_2))
        {
          y_69 = ATgetArgument(x_69, 0);
          z_69 = ATgetArgument(x_69, 1);
          t = not_null(y_69);
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
  ATerm g_70 = NULL;
  g_70 = t;
  t = SSL_explode_term(not_null(g_70));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  t = Snd_0(t);
  {
    ATerm i_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
      return(t);
    }
    ATerm j_2 (ATerm t)
    {
      t = cart_1(t, Union_0);
      return(t);
    }
    t = foldr_2(t, i_2, j_2);
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  a_71 = t;
  o_70 :
  if(match_cons(a_71, sym_TCons_2))
    {
      b_71 = ATgetArgument(a_71, 0);
      i_71 = ATgetArgument(a_71, 1);
      p_70 :
      if(match_cons(b_71, sym_TCons_2))
        {
          c_71 = ATgetArgument(b_71, 0);
          d_71 = ATgetArgument(b_71, 1);
          q_70 :
          if(match_cons(d_71, sym_TCons_2))
            {
              e_71 = ATgetArgument(d_71, 0);
              f_71 = ATgetArgument(d_71, 1);
              r_70 :
              if(match_cons(f_71, sym_TCons_2))
                {
                  g_71 = ATgetArgument(f_71, 0);
                  h_71 = ATgetArgument(f_71, 1);
                  s_70 :
                  if(match_cons(h_71, sym_TNil_0))
                    {
                      t_70 :
                      if(match_cons(i_71, sym_TCons_2))
                        {
                          j_71 = ATgetArgument(i_71, 0);
                          q_71 = ATgetArgument(i_71, 1);
                          u_70 :
                          if(match_cons(j_71, sym_TCons_2))
                            {
                              k_71 = ATgetArgument(j_71, 0);
                              l_71 = ATgetArgument(j_71, 1);
                              w_70 :
                              if(match_cons(l_71, sym_TCons_2))
                                {
                                  m_71 = ATgetArgument(l_71, 0);
                                  n_71 = ATgetArgument(l_71, 1);
                                  x_70 :
                                  if(match_cons(n_71, sym_TCons_2))
                                    {
                                      o_71 = ATgetArgument(n_71, 0);
                                      p_71 = ATgetArgument(n_71, 1);
                                      y_70 :
                                      if(match_cons(p_71, sym_TNil_0))
                                        {
                                          z_70 :
                                          if(match_cons(q_71, sym_TNil_0))
                                            {
                                              ATerm x_71 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm z_71 = NULL;
                                                t = diff_0(t);
                                                x_71 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm b_72 = NULL;
                                                  t = union_0(t);
                                                  z_71 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  {
                                                    ATerm d_72 = NULL;
                                                    t = union_0(t);
                                                    b_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_71), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                    t = union_0(t);
                                                    d_72 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_71), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(d_72), (ATerm) ATmakeAppl(sym_TNil_0))));
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
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm cart_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
  s_72 = t;
  p_72 :
  if(match_cons(s_72, sym_TCons_2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      q_72 :
      if(match_cons(u_72, sym_TCons_2))
        {
          v_72 = ATgetArgument(u_72, 0);
          w_72 = ATgetArgument(u_72, 1);
          r_72 :
          if(match_cons(w_72, sym_TNil_0))
            {
              t = not_null(t_72);
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm z_72 = NULL;
                  z_72 = t;
                  t = not_null(v_72);
                  {
                    ATerm l_2 (ATerm t)
                    {
                      ATerm b_73 = NULL;
                      b_73 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_72), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = p_56(t);
                      return(t);
                    }
                    t = map_1(t, l_2);
                  }
                  return(t);
                }
                t = map_1(t, k_2);
                {
                  ATerm m_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Nil_0);
                    return(t);
                  }
                  t = foldr_2(t, m_2, union_0);
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
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, n_2, o_2);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm z_43 (ATerm))
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  q_73 = t;
  m_73 :
  if(match_cons(q_73, sym_TCons_2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      n_73 :
      if(match_cons(s_73, sym_TCons_2))
        {
          t_73 = ATgetArgument(s_73, 0);
          u_73 = ATgetArgument(s_73, 1);
          o_73 :
          if(match_cons(u_73, sym_TCons_2))
            {
              v_73 = ATgetArgument(u_73, 0);
              w_73 = ATgetArgument(u_73, 1);
              p_73 :
              if(match_cons(w_73, sym_TNil_0))
                {
                  ATerm a_74 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TNil_0);
                  {
                    ATerm c_74 = NULL;
                    t = z_43(t);
                    a_74 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                    {
                      ATerm e_74 = NULL;
                      t = diff_0(t);
                      c_74 = t;
                      t = (ATerm) ATmakeAppl(sym_TNil_0);
                      {
                        ATerm g_74 = NULL;
                        t = z_43(t);
                        e_74 = t;
                        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_74), (ATerm) ATmakeAppl(sym_TNil_0)));
                        {
                          ATerm i_74 = NULL;
                          t = isect_0(t);
                          g_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_73), (ATerm) ATmakeAppl(sym_TNil_0)));
                          t = conc_0(t);
                          i_74 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_73), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_74), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_74), (ATerm) ATmakeAppl(sym_TNil_0))));
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
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  d_75 = t;
  c_75 :
  if(match_cons(d_75, sym_Seqs_1))
    {
      e_75 = ATgetArgument(d_75, 0);
      t = not_null(e_75);
      t = seqs_join_0(t);
    }
  else
    {
      if(match_cons(d_75, sym_Seq_2))
        {
          e_75 = ATgetArgument(d_75, 0);
          f_75 = ATgetArgument(d_75, 1);
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Nil_0)));
          t = seqs_join_0(t);
        }
      else
        {
          if(match_cons(d_75, sym_Rule_3))
            {
              e_75 = ATgetArgument(d_75, 0);
              f_75 = ATgetArgument(d_75, 1);
              g_75 = ATgetArgument(d_75, 2);
              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Nil_0))));
              t = seqs_join_0(t);
            }
          else
            {
              if(match_cons(d_75, sym_StratRule_3))
                {
                  e_75 = ATgetArgument(d_75, 0);
                  f_75 = ATgetArgument(d_75, 1);
                  g_75 = ATgetArgument(d_75, 2);
                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                  t = seqs_join_0(t);
                }
              else
                {
                  if(match_cons(d_75, sym_MA_2))
                    {
                      e_75 = ATgetArgument(d_75, 0);
                      f_75 = ATgetArgument(d_75, 1);
                      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                      t = seqs_join_0(t);
                    }
                  else
                    {
                      if(match_cons(d_75, sym_AM_2))
                        {
                          e_75 = ATgetArgument(d_75, 0);
                          f_75 = ATgetArgument(d_75, 1);
                          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                          t = seqs_join_0(t);
                        }
                      else
                        {
                          if(match_cons(d_75, sym_BA_2))
                            {
                              e_75 = ATgetArgument(d_75, 0);
                              f_75 = ATgetArgument(d_75, 1);
                              t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                              t = seqs_join_0(t);
                            }
                          else
                            {
                              if(match_cons(d_75, sym_BAM_3))
                                {
                                  e_75 = ATgetArgument(d_75, 0);
                                  f_75 = ATgetArgument(d_75, 1);
                                  g_75 = ATgetArgument(d_75, 2);
                                  t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_75), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_75), (ATerm) ATmakeAppl(sym_Nil_0))));
                                  t = seqs_join_0(t);
                                }
                              else
                                {
                                  if(match_cons(d_75, sym_Cong_2))
                                    {
                                      e_75 = ATgetArgument(d_75, 0);
                                      f_75 = ATgetArgument(d_75, 1);
                                      t = not_null(f_75);
                                      t = seqs_join_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(d_75, sym_Scope_2))
                                        {
                                          e_75 = ATgetArgument(d_75, 0);
                                          f_75 = ATgetArgument(d_75, 1);
                                          t = not_null(f_75);
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm q_2 (ATerm t)
                                              {
                                                t = not_null(e_75);
                                                return(t);
                                              }
                                              t = JoinScope_1(t, q_2);
                                              return(t);
                                            }
                                            t = map_1(t, p_2);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(d_75, sym_Overlay_3))
                                            {
                                              e_75 = ATgetArgument(d_75, 0);
                                              f_75 = ATgetArgument(d_75, 1);
                                              g_75 = ATgetArgument(d_75, 2);
                                              {
                                                ATerm g_76 = NULL;
                                                t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_75), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(g_75), (ATerm) ATmakeAppl(sym_Nil_0)));
                                                t = seqs_join_0(t);
                                                g_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(e_75), not_null(f_75), not_null(g_76));
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
ATerm Cong_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm y_76 = NULL,z_76 = NULL,b_77 = NULL;
  y_76 = t;
  x_76 :
  if(match_cons(y_76, sym_Cong_2))
    {
      z_76 = ATgetArgument(y_76, 0);
      b_77 = ATgetArgument(y_76, 1);
      {
        ATerm e_77 = NULL;
        t = not_null(z_76);
        {
          ATerm g_77 = NULL;
          t = w_42(t);
          e_77 = t;
          t = not_null(b_77);
          t = x_42(t);
          g_77 = t;
          t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_77), not_null(g_77));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm o_77 = NULL;
  ATerm q_77 = NULL;
  o_77 = t;
  t = tvars_0(t);
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(q_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm x_77 = NULL;
  ATerm z_77 = NULL;
  x_77 = t;
  t = tvars_0(t);
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_77), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)))), (ATerm) ATmakeAppl(sym_Nil_0));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm i_40 (ATerm), ATerm j_40 (ATerm), ATerm k_40 (ATerm))
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  k_78 = t;
  i_78 :
  if(match_cons(k_78, sym_Rule_3))
    {
      l_78 = ATgetArgument(k_78, 0);
      m_78 = ATgetArgument(k_78, 1);
      n_78 = ATgetArgument(k_78, 2);
      {
        ATerm s_78 = NULL;
        t = not_null(l_78);
        {
          ATerm u_78 = NULL;
          t = i_40(t);
          s_78 = t;
          t = not_null(m_78);
          {
            ATerm w_78 = NULL;
            t = j_40(t);
            u_78 = t;
            t = not_null(n_78);
            t = k_40(t);
            w_78 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_78), not_null(u_78), not_null(w_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BAM_3 (ATerm t, ATerm q_39 (ATerm), ATerm r_39 (ATerm), ATerm s_39 (ATerm))
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,o_79 = NULL;
  k_79 = t;
  j_79 :
  if(match_cons(k_79, sym_BAM_3))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      o_79 = ATgetArgument(k_79, 2);
      {
        ATerm s_79 = NULL;
        t = not_null(l_79);
        {
          ATerm u_79 = NULL;
          t = q_39(t);
          s_79 = t;
          t = not_null(m_79);
          {
            ATerm w_79 = NULL;
            t = r_39(t);
            u_79 = t;
            t = not_null(o_79);
            t = s_39(t);
            w_79 = t;
            t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_79), not_null(u_79), not_null(w_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BA_2 (ATerm t, ATerm o_39 (ATerm), ATerm p_39 (ATerm))
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
  g_80 = t;
  f_80 :
  if(match_cons(g_80, sym_BA_2))
    {
      h_80 = ATgetArgument(g_80, 0);
      i_80 = ATgetArgument(g_80, 1);
      {
        ATerm l_80 = NULL;
        t = not_null(h_80);
        {
          ATerm n_80 = NULL;
          t = o_39(t);
          l_80 = t;
          t = not_null(i_80);
          t = p_39(t);
          n_80 = t;
          t = (ATerm) ATmakeAppl(sym_BA_2, not_null(l_80), not_null(n_80));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AM_2 (ATerm t, ATerm m_39 (ATerm), ATerm n_39 (ATerm))
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_AM_2))
    {
      x_80 = ATgetArgument(w_80, 0);
      y_80 = ATgetArgument(w_80, 1);
      {
        ATerm b_81 = NULL;
        t = not_null(x_80);
        {
          ATerm d_81 = NULL;
          t = m_39(t);
          b_81 = t;
          t = not_null(y_80);
          t = n_39(t);
          d_81 = t;
          t = (ATerm) ATmakeAppl(sym_AM_2, not_null(b_81), not_null(d_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MA_2 (ATerm t, ATerm k_39 (ATerm), ATerm l_39 (ATerm))
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym_MA_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      {
        ATerm r_81 = NULL;
        t = not_null(n_81);
        {
          ATerm t_81 = NULL;
          t = k_39(t);
          r_81 = t;
          t = not_null(o_81);
          t = l_39(t);
          t_81 = t;
          t = (ATerm) ATmakeAppl(sym_MA_2, not_null(r_81), not_null(t_81));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm c_82 = NULL,d_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym_Match_1))
    {
      d_82 = ATgetArgument(c_82, 0);
      {
        ATerm f_82 = NULL;
        t = not_null(d_82);
        t = e_43(t);
        f_82 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(f_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm o_82 = NULL,p_82 = NULL;
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym_Build_1))
    {
      p_82 = ATgetArgument(o_82, 0);
      {
        ATerm r_82 = NULL;
        t = not_null(p_82);
        t = f_43(t);
        r_82 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_82));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm y_43 (ATerm))
{
  ATerm l_9 = t;
  if(PushChoice()==0)
    {
      t = Build_1(t, use_term_0);
      PopChoice();
    }
  else
    {
      t = l_9;
      {
        ATerm m_9 = t;
        if(PushChoice()==0)
          {
            t = Match_1(t, def_term_0);
            PopChoice();
          }
        else
          {
            t = m_9;
            {
              ATerm n_9 = t;
              if(PushChoice()==0)
                {
                  t = MA_2(t, def_term_0, y_43);
                  PopChoice();
                }
              else
                {
                  t = n_9;
                  {
                    ATerm o_9 = t;
                    if(PushChoice()==0)
                      {
                        t = AM_2(t, y_43, def_term_0);
                        PopChoice();
                      }
                    else
                      {
                        t = o_9;
                        {
                          ATerm p_9 = t;
                          if(PushChoice()==0)
                            {
                              t = BA_2(t, y_43, use_term_0);
                              PopChoice();
                            }
                          else
                            {
                              t = p_9;
                              {
                                ATerm q_9 = t;
                                if(PushChoice()==0)
                                  {
                                    t = BAM_3(t, y_43, use_term_0, def_term_0);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = q_9;
                                    {
                                      ATerm r_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = Scope_2(t, _id, y_43);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = r_9;
                                          {
                                            ATerm s_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, y_43);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = s_9;
                                                {
                                                  ATerm t_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = t_9;
                                                      {
                                                        ATerm r_2 (ATerm t)
                                                        {
                                                          t = map_1(t, y_43);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, r_2);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm u_9 = t;
  if(PushChoice()==0)
    {
      t = constructs_1(t, use_def_0);
      PopChoice();
    }
  else
    {
      t = u_9;
      t = _all(t, use_def_0);
    }
  {
    ATerm v_9 = t;
    if(PushChoice()==0)
      {
        t = UDjoin_0(t);
        PopChoice();
      }
    else
      {
        t = v_9;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm), ATerm s_40 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  e_83 = t;
  d_83 :
  if(match_cons(e_83, sym_RDef_3))
    {
      f_83 = ATgetArgument(e_83, 0);
      g_83 = ATgetArgument(e_83, 1);
      h_83 = ATgetArgument(e_83, 2);
      {
        ATerm l_83 = NULL;
        t = not_null(f_83);
        {
          ATerm n_83 = NULL;
          t = q_40(t);
          l_83 = t;
          t = not_null(g_83);
          {
            ATerm p_83 = NULL;
            t = r_40(t);
            n_83 = t;
            t = not_null(h_83);
            t = s_40(t);
            p_83 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(l_83), not_null(n_83), not_null(p_83));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym_SDef_3))
    {
      b_84 = ATgetArgument(a_84, 0);
      c_84 = ATgetArgument(a_84, 1);
      d_84 = ATgetArgument(a_84, 2);
      {
        ATerm h_84 = NULL;
        t = not_null(b_84);
        {
          ATerm j_84 = NULL;
          t = i_42(t);
          h_84 = t;
          t = not_null(c_84);
          {
            ATerm l_84 = NULL;
            t = j_42(t);
            j_84 = t;
            t = not_null(d_84);
            t = k_42(t);
            l_84 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_84), not_null(j_84), not_null(l_84));
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
  ATerm w_9 = t;
  if(PushChoice()==0)
    {
      ATerm s_2 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm x_9 = t;
          if(PushChoice()==0)
            {
              ATerm t_2 (ATerm t)
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = TCons_2(t, Nil_0, TNil_0);
                    return(t);
                  }
                  t = TCons_2(t, _id, v_2);
                  return(t);
                }
                t = TCons_2(t, Nil_0, u_2);
                return(t);
              }
              t = Cons_2(t, t_2, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = x_9;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, s_2);
      t = err_msg_0(t);
      PopChoice();
    }
  else
    {
      t = w_9;
      {
        ATerm y_9 = t;
        if(PushChoice()==0)
          {
            ATerm w_2 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm z_9 = t;
                if(PushChoice()==0)
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm y_2 (ATerm t)
                      {
                        ATerm z_2 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, _id, z_2);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, y_2);
                      return(t);
                    }
                    t = Cons_2(t, x_2, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = z_9;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, w_2);
            t = err_msg_0(t);
            PopChoice();
          }
        else
          {
            t = y_9;
            t = Overlay_3(t, _id, _id, _id);
            t = use_def_0(t);
            {
              ATerm a_10 = t;
              if(PushChoice()==0)
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm b_3 (ATerm t)
                    {
                      ATerm c_3 (ATerm t)
                      {
                        ATerm d_3 (ATerm t)
                        {
                          t = TCons_2(t, Nil_0, TNil_0);
                          return(t);
                        }
                        t = TCons_2(t, Nil_0, d_3);
                        return(t);
                      }
                      t = TCons_2(t, Nil_0, c_3);
                      return(t);
                    }
                    t = Cons_2(t, b_3, Nil_0);
                    return(t);
                  }
                  t = Overlay_3(t, _id, _id, a_3);
                  PopChoice();
                  _fail(t);
                }
              else
                t = a_10;
              t = err_msg_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm s_84 = NULL;
  t = filter_1(t, check_0);
  s_84 = t;
  r_84 :
  if(!(match_cons(s_84, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm b_41 (ATerm))
{
  ATerm w_84 = NULL,x_84 = NULL;
  w_84 = t;
  v_84 :
  if(match_cons(w_84, sym_Overlays_1))
    {
      x_84 = ATgetArgument(w_84, 0);
      {
        ATerm z_84 = NULL;
        t = not_null(x_84);
        t = b_41(t);
        z_84 = t;
        t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(z_84));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm a_41 (ATerm))
{
  ATerm g_85 = NULL,h_85 = NULL;
  g_85 = t;
  f_85 :
  if(match_cons(g_85, sym_Signature_1))
    {
      h_85 = ATgetArgument(g_85, 0);
      {
        ATerm j_85 = NULL;
        t = not_null(h_85);
        t = a_41(t);
        j_85 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(j_85));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, j_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, h_3, i_3);
      return(t);
    }
    t = Cons_2(t, f_3, g_3);
    return(t);
  }
  t = Specification_1(t, e_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  a_86 = t;
  q_85 :
  if(match_cons(a_86, sym_TCons_2))
    {
      b_86 = ATgetArgument(a_86, 0);
      h_86 = ATgetArgument(a_86, 1);
      r_85 :
      if(match_cons(b_86, sym_TCons_2))
        {
          c_86 = ATgetArgument(b_86, 0);
          d_86 = ATgetArgument(b_86, 1);
          s_85 :
          if(match_cons(d_86, sym_TCons_2))
            {
              f_86 = ATgetArgument(d_86, 0);
              g_86 = ATgetArgument(d_86, 1);
              t_85 :
              if(match_cons(g_86, sym_TNil_0))
                {
                  u_85 :
                  if(match_cons(h_86, sym_TCons_2))
                    {
                      i_86 = ATgetArgument(h_86, 0);
                      n_86 = ATgetArgument(h_86, 1);
                      v_85 :
                      if(match_cons(i_86, sym_TCons_2))
                        {
                          j_86 = ATgetArgument(i_86, 0);
                          k_86 = ATgetArgument(i_86, 1);
                          w_85 :
                          if(match_cons(k_86, sym_TCons_2))
                            {
                              l_86 = ATgetArgument(k_86, 0);
                              m_86 = ATgetArgument(k_86, 1);
                              x_85 :
                              if(match_cons(m_86, sym_TNil_0))
                                {
                                  y_85 :
                                  if(match_cons(n_86, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(c_86), not_null(j_86)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_86), not_null(l_86)), (ATerm) ATmakeAppl(sym_TNil_0)));
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm w_86 = NULL,x_86 = NULL,z_86 = NULL;
  w_86 = t;
  v_86 :
  if(match_cons(w_86, sym_Cons_2))
    {
      x_86 = ATgetArgument(w_86, 0);
      z_86 = ATgetArgument(w_86, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_86), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_86), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm f_87 = NULL;
  f_87 = t;
  e_87 :
  if(match_cons(f_87, sym_Nil_0))
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
  ATerm k_3 (ATerm t)
  {
    ATerm j_87 = NULL;
    j_87 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_87));
    return(t);
  }
  t = map_1(t, k_3);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL;
  r_87 = t;
  o_87 :
  if(match_cons(r_87, sym_TCons_2))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      p_87 :
      if(match_cons(t_87, sym_TCons_2))
        {
          u_87 = ATgetArgument(t_87, 0);
          v_87 = ATgetArgument(t_87, 1);
          q_87 :
          if(match_cons(v_87, sym_TNil_0))
            {
              ATerm y_87 = NULL;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_87), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
              y_87 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_87), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_87), (ATerm) ATmakeAppl(sym_TNil_0)));
              t = diff_0(t);
            }
          else
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
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  g_88 = t;
  d_88 :
  if(match_cons(g_88, sym_TCons_2))
    {
      h_88 = ATgetArgument(g_88, 0);
      i_88 = ATgetArgument(g_88, 1);
      e_88 :
      if(match_cons(i_88, sym_TCons_2))
        {
          j_88 = ATgetArgument(i_88, 0);
          k_88 = ATgetArgument(i_88, 1);
          f_88 :
          if(match_cons(k_88, sym_TNil_0))
            {
              if(h_88 != NULL && h_88 != j_88)
                _fail(j_88);
              else
                h_88 = j_88;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
  ATerm y_90 (ATerm t)
  {
    ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,v_90 = NULL;
    ATerm k_90 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_89), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
    {
      ATerm b_10 = t;
      if(PushChoice()==0)
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = b_10;
      t = (ATerm) ATmakeAppl(sym_TNil_0);
      {
        ATerm m_90 = NULL;
        t = a_0(t);
        k_90 = t;
        t = not_null(n_89);
        {
          ATerm o_90 = NULL;
          t = tvars_0(t);
          m_90 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_90), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = isect_0(t);
          {
            ATerm p_90 = NULL;
            t = strings_to_vars_0(t);
            o_90 = t;
            if(h_90 != NULL && h_90 != o_90)
              _fail(o_90);
            else
              h_90 = o_90;
            t = (ATerm) ATmakeAppl(sym_TNil_0);
            {
              ATerm r_90 = NULL;
              t = a_0(t);
              p_90 = t;
              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_89), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_89), (ATerm) ATmakeAppl(sym_TNil_0)));
              {
                ATerm t_90 = NULL;
                t = tvars_0(t);
                r_90 = t;
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_90), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_90), (ATerm) ATmakeAppl(sym_TNil_0)));
                t = isect_0(t);
                {
                  ATerm u_90 = NULL;
                  t = strings_to_vars_0(t);
                  t_90 = t;
                  if(i_90 != NULL && i_90 != t_90)
                    _fail(t_90);
                  else
                    i_90 = t_90;
                  t = new_0(t);
                  u_90 = t;
                  if(j_90 != NULL && j_90 != u_90)
                    _fail(u_90);
                  else
                    j_90 = u_90;
                }
              }
            }
          }
        }
      }
    }
    t = not_null(k_89);
    t = b_0(t);
    v_90 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(v_90), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(h_90)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(j_90)), not_null(i_90))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(k_89), not_null(l_89), (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_89), not_null(o_89), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_89))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(h_90)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Str_1, not_null(j_90)), not_null(i_90)))), not_null(p_89)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    return(t);
  }
  j_89 = t;
  b_89 :
  if(match_cons(j_89, sym_RDef_3))
    {
      k_89 = ATgetArgument(j_89, 0);
      l_89 = ATgetArgument(j_89, 1);
      m_89 = ATgetArgument(j_89, 2);
      c_89 :
      if(match_cons(m_89, sym_Rule_3))
        {
          n_89 = ATgetArgument(m_89, 0);
          o_89 = ATgetArgument(m_89, 1);
          p_89 = ATgetArgument(m_89, 2);
          d_89 :
          if(match_cons(o_89, sym_Op_2))
            {
              h_89 = ATgetArgument(o_89, 0);
              i_89 = ATgetArgument(o_89, 1);
              e_89 :
              if(match_cons(i_89, sym_Nil_0))
                {
                  f_89 :
                  if(match_string(h_89, "Undefined"))
                    {
                      ATerm c_10 = t;
                      if(PushChoice()==0)
                        {
                          ATerm u_89 = NULL,a_90 = NULL;
                          ATerm v_89 = NULL;
                          t = (ATerm) ATmakeAppl(sym_TNil_0);
                          {
                            ATerm x_89 = NULL;
                            t = a_0(t);
                            v_89 = t;
                            t = not_null(n_89);
                            {
                              ATerm z_89 = NULL;
                              t = tvars_0(t);
                              x_89 = t;
                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_89), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_89), (ATerm) ATmakeAppl(sym_TNil_0)));
                              t = isect_0(t);
                              t = strings_to_vars_0(t);
                              z_89 = t;
                              if(u_89 != NULL && u_89 != z_89)
                                _fail(z_89);
                              else
                                u_89 = z_89;
                            }
                          }
                          t = not_null(k_89);
                          t = b_0(t);
                          a_90 = t;
                          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(a_90), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(u_89)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_Nil_0)))))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_RDef_3, not_null(k_89), not_null(l_89), (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_89), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_89))), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm)ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue)), not_null(u_89)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_89), (ATerm) ATmakeAppl(sym_Fail_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
                          PopChoice();
                        }
                      else
                        {
                          t = c_10;
                          t = y_90(t);
                        }
                    }
                  else
                    t = y_90(t);
                }
              else
                {
                  g_89 :
                  t = y_90(t);
                }
            }
          else
            t = y_90(t);
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
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,a_92 = NULL,b_92 = NULL;
  v_91 = t;
  p_91 :
  if(match_cons(v_91, sym_TCons_2))
    {
      w_91 = ATgetArgument(v_91, 0);
      y_91 = ATgetArgument(v_91, 1);
      q_91 :
      if(match_cons(w_91, sym_DynamicRules_1))
        {
          x_91 = ATgetArgument(w_91, 0);
          r_91 :
          if(match_cons(y_91, sym_TCons_2))
            {
              a_92 = ATgetArgument(y_91, 0);
              b_92 = ATgetArgument(y_91, 1);
              s_91 :
              if(match_cons(b_92, sym_TNil_0))
                {
                  t = not_null(x_91);
                  {
                    ATerm l_3 (ATerm t)
                    {
                      ATerm m_3 (ATerm t)
                      {
                        t = not_null(a_92);
                        return(t);
                      }
                      ATerm n_3 (ATerm t)
                      {
                        ATerm e_92 = NULL;
                        e_92 = t;
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(e_92))), (ATerm) ATmakeAppl(sym_Nil_0)));
                        return(t);
                      }
                      t = SplitDynamicRule_2(t, m_3, n_3);
                      return(t);
                    }
                    t = map_1(t, l_3);
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
          if(match_cons(w_91, sym_OverrideDynamicRules_1))
            {
              x_91 = ATgetArgument(w_91, 0);
              t_91 :
              if(match_cons(y_91, sym_TCons_2))
                {
                  a_92 = ATgetArgument(y_91, 0);
                  b_92 = ATgetArgument(y_91, 1);
                  u_91 :
                  if(match_cons(b_92, sym_TNil_0))
                    {
                      t = not_null(x_91);
                      {
                        ATerm o_3 (ATerm t)
                        {
                          ATerm p_3 (ATerm t)
                          {
                            t = not_null(a_92);
                            return(t);
                          }
                          ATerm q_3 (ATerm t)
                          {
                            ATerm i_92 = NULL;
                            i_92 = t;
                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_92))), (ATerm) ATmakeAppl(sym_Nil_0)));
                            return(t);
                          }
                          t = SplitDynamicRule_2(t, p_3, q_3);
                          return(t);
                        }
                        t = map_1(t, o_3);
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
ATerm dist_scope_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  w_92 = t;
  r_92 :
  if(match_cons(w_92, sym_TCons_2))
    {
      x_92 = ATgetArgument(w_92, 0);
      a_93 = ATgetArgument(w_92, 1);
      s_92 :
      if(match_cons(x_92, sym_Scope_2))
        {
          y_92 = ATgetArgument(x_92, 0);
          z_92 = ATgetArgument(x_92, 1);
          u_92 :
          if(match_cons(a_93, sym_TCons_2))
            {
              b_93 = ATgetArgument(a_93, 0);
              c_93 = ATgetArgument(a_93, 1);
              v_92 :
              if(match_cons(c_93, sym_TNil_0))
                {
                  ATerm g_93 = NULL;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                  {
                    ATerm i_93 = NULL;
                    t = union_0(t);
                    g_93 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_92), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = h_65(t);
                    i_93 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_92), not_null(i_93));
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
ATerm one_dist_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  s_93 = t;
  p_93 :
  if(match_cons(s_93, sym_TCons_2))
    {
      t_93 = ATgetArgument(s_93, 0);
      u_93 = ATgetArgument(s_93, 1);
      q_93 :
      if(match_cons(u_93, sym_TCons_2))
        {
          v_93 = ATgetArgument(u_93, 0);
          w_93 = ATgetArgument(u_93, 1);
          r_93 :
          if(match_cons(w_93, sym_TNil_0))
            {
              t = not_null(t_93);
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm z_93 = NULL;
                  z_93 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_93), (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_93), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = x_59(t);
                  return(t);
                }
                t = _one(t, r_3);
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
ATerm env_oncetd_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm d_94 (ATerm t)
  {
    ATerm d_10 = t;
    if(PushChoice()==0)
      {
        t = m_60(t);
        PopChoice();
      }
    else
      {
        t = d_10;
        t = one_dist_1(t, d_94);
      }
    return(t);
  }
  t = d_94(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  n_94 = t;
  m_94 :
  if(match_cons(n_94, sym_Cons_2))
    {
      o_94 = ATgetArgument(n_94, 0);
      p_94 = ATgetArgument(n_94, 1);
      {
        ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
        ATerm w_94 = NULL;
        t = not_null(o_94);
        {
          ATerm d_95 = NULL;
          t = tvars_0(t);
          w_94 = t;
          if(u_94 != NULL && u_94 != w_94)
            _fail(w_94);
          else
            u_94 = w_94;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_94), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_94), (ATerm) ATmakeAppl(sym_TNil_0)));
          {
            ATerm g_95 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm g_10 = t;
                if(PushChoice()==0)
                  {
                    t = dist_scope_1(t, g_95);
                    PopChoice();
                  }
                else
                  {
                    t = g_10;
                    {
                      ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,c_95 = NULL;
                      t = split_dynamic_rules_0(t);
                      x_94 = t;
                      h_94 :
                      if(match_cons(x_94, sym_TCons_2))
                        {
                          y_94 = ATgetArgument(x_94, 0);
                          z_94 = ATgetArgument(x_94, 1);
                          i_94 :
                          if(match_cons(z_94, sym_TCons_2))
                            {
                              a_95 = ATgetArgument(z_94, 0);
                              c_95 = ATgetArgument(z_94, 1);
                              k_94 :
                              if(match_cons(c_95, sym_TNil_0))
                                {
                                  if(t_94 != NULL && t_94 != y_94)
                                    _fail(y_94);
                                  else
                                    t_94 = y_94;
                                  if(s_94 != NULL && s_94 != a_95)
                                    _fail(a_95);
                                  else
                                    s_94 = a_95;
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_94));
                                }
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
              t = env_oncetd_1(t, s_3);
              return(t);
            }
            t = g_95(t);
            d_95 = t;
            if(v_94 != NULL && v_94 != d_95)
              _fail(d_95);
            else
              v_94 = d_95;
          }
        }
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(v_94), not_null(s_94)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(p_94), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = conc_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_63 (ATerm), ATerm z_63 (ATerm))
{
  ATerm j_95 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = y_63(t);
        t = j_95(t);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = z_63(t);
      }
    return(t);
  }
  t = j_95(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_64 (ATerm))
{
  t = repeat_2(t, b_64, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm k_95 (ATerm t)
  {
    t = k_59(t);
    {
      ATerm i_10 = t;
      if(PushChoice()==0)
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = i_10;
          t = Cons_2(t, _id, k_95);
        }
    }
    return(t);
  }
  t = k_95(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, t_3);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  q_95 = t;
  o_95 :
  if(match_cons(q_95, sym_DynRuleScope_2))
    {
      r_95 = ATgetArgument(q_95, 0);
      u_95 = ATgetArgument(q_95, 1);
      p_95 :
      if(match_cons(r_95, sym_Nil_0))
        t = not_null(u_95);
      else
        {
          if(match_cons(r_95, sym_Cons_2))
            {
              s_95 = ATgetArgument(r_95, 0);
              t_95 = ATgetArgument(r_95, 1);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_95))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_DynRuleScope_2, not_null(t_95), not_null(u_95)), (ATerm) ATmakeAppl(sym_Nil_0))));
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
  ATerm u_3 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, u_3);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, z_3);
          return(t);
        }
        t = Cons_2(t, y_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, x_3);
      return(t);
    }
    t = Cons_2(t, _id, w_3);
    return(t);
  }
  t = Specification_1(t, v_3);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  e_96 = t;
  d_96 :
  if(match_cons(e_96, sym_ScopeDefault_1))
    {
      f_96 = ATgetArgument(e_96, 0);
      {
        ATerm h_96 = NULL;
        t = not_null(f_96);
        t = tvars_0(t);
        h_96 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_96), not_null(f_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_40 (ATerm))
{
  ATerm o_96 = NULL,r_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym_DynamicRules_1))
    {
      r_96 = ATgetArgument(o_96, 0);
      {
        ATerm t_96 = NULL;
        t = not_null(r_96);
        t = t_40(t);
        t_96 = t;
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(t_96));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
  c_97 = t;
  b_97 :
  if(match_cons(c_97, sym_Scope_2))
    {
      d_97 = ATgetArgument(c_97, 0);
      e_97 = ATgetArgument(c_97, 1);
      {
        ATerm h_97 = NULL;
        t = not_null(d_97);
        {
          ATerm j_97 = NULL;
          t = i_43(t);
          h_97 = t;
          t = not_null(e_97);
          t = j_43(t);
          j_97 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_97), not_null(j_97));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm))
{
  ATerm j_10 = t;
  if(PushChoice()==0)
    {
      t = Scope_2(t, f_44, d_44);
      PopChoice();
    }
  else
    {
      t = j_10;
      t = DynamicRules_1(t, d_44);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL;
  s_97 = t;
  r_97 :
  if(match_cons(s_97, sym_DynamicRules_1))
    {
      t_97 = ATgetArgument(s_97, 0);
      t = not_null(t_97);
      t = tvars_0(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL;
  c_98 = t;
  z_97 :
  if(match_cons(c_98, sym_Scope_2))
    {
      d_98 = ATgetArgument(c_98, 0);
      b_98 = ATgetArgument(c_98, 1);
      t = not_null(d_98);
    }
  else
    {
      if(match_cons(c_98, sym_LRule_1))
        {
          d_98 = ATgetArgument(c_98, 0);
          a_98 :
          if(match_cons(d_98, sym_Rule_3))
            {
              e_98 = ATgetArgument(d_98, 0);
              f_98 = ATgetArgument(d_98, 1);
              g_98 = ATgetArgument(d_98, 2);
              t = not_null(e_98);
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
  ATerm q_98 = NULL,r_98 = NULL;
  q_98 = t;
  p_98 :
  if(match_cons(q_98, sym_Var_1))
    {
      r_98 = ATgetArgument(q_98, 0);
      t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(r_98), (ATerm) ATmakeAppl(sym_Nil_0));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  y_98 = t;
  v_98 :
  if(match_cons(y_98, sym_TCons_2))
    {
      z_98 = ATgetArgument(y_98, 0);
      a_99 = ATgetArgument(y_98, 1);
      w_98 :
      if(match_cons(a_99, sym_TCons_2))
        {
          b_99 = ATgetArgument(a_99, 0);
          c_99 = ATgetArgument(a_99, 1);
          x_98 :
          if(match_cons(c_99, sym_TNil_0))
            {
              t = not_null(z_98);
              {
                ATerm g_99 (ATerm t)
                {
                  ATerm k_10 = t;
                  if(PushChoice()==0)
                    {
                      t = Nil_0(t);
                      t = not_null(b_99);
                      PopChoice();
                    }
                  else
                    {
                      t = k_10;
                      {
                        ATerm l_10 = t;
                        if(PushChoice()==0)
                          {
                            ATerm a_4 (ATerm t)
                            {
                              t = not_null(b_99);
                              return(t);
                            }
                            t = HdMember_1(t, a_4);
                            t = g_99(t);
                            PopChoice();
                          }
                        else
                          {
                            t = l_10;
                            t = Cons_2(t, _id, g_99);
                          }
                      }
                    }
                  return(t);
                }
                t = g_99(t);
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
ATerm foldr_3 (ATerm t, ATerm j_53 (ATerm), ATerm k_53 (ATerm), ATerm l_53 (ATerm))
{
  ATerm u_99 (ATerm t)
  {
    ATerm m_10 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = j_53(t);
        PopChoice();
      }
    else
      {
        t = m_10;
        {
          ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
          l_99 = t;
          k_99 :
          if(match_cons(l_99, sym_Cons_2))
            {
              m_99 = ATgetArgument(l_99, 0);
              n_99 = ATgetArgument(l_99, 1);
              {
                ATerm q_99 = NULL;
                t = not_null(m_99);
                {
                  ATerm s_99 = NULL;
                  t = l_53(t);
                  q_99 = t;
                  t = not_null(n_99);
                  t = u_99(t);
                  s_99 = t;
                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_99), (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_99), (ATerm) ATmakeAppl(sym_TNil_0)));
                  t = k_53(t);
                }
              }
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = u_99(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm i_100 = NULL;
  ATerm k_100 = NULL;
  i_100 = t;
  {
    ATerm l_100 = NULL;
    ATerm n_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL;
    t = not_null(i_100);
    l_100 = t;
    t = SSL_explode_term(not_null(l_100));
    n_100 = t;
    f_100 :
    if(match_cons(n_100, sym_TCons_2))
      {
        p_100 = ATgetArgument(n_100, 0);
        q_100 = ATgetArgument(n_100, 1);
        g_100 :
        if(match_cons(q_100, sym_TCons_2))
          {
            r_100 = ATgetArgument(q_100, 0);
            s_100 = ATgetArgument(q_100, 1);
            h_100 :
            if(match_cons(s_100, sym_TNil_0))
              {
                if(k_100 != NULL && k_100 != r_100)
                  _fail(r_100);
                else
                  k_100 = r_100;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(k_100);
    t = foldr_3(t, a_55, b_55, c_55);
  }
  return(t);
}
ATerm collect_kids_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Nil_0);
    return(t);
  }
  t = crush_3(t, b_4, union_0, i_55);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
  z_100 = t;
  y_100 :
  if(match_cons(z_100, sym_Cons_2))
    {
      a_101 = ATgetArgument(z_100, 0);
      b_101 = ATgetArgument(z_100, 1);
      t = q_54(t);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm e_101 = NULL;
          e_101 = t;
          if(a_101 != NULL && a_101 != e_101)
            _fail(e_101);
          else
            a_101 = e_101;
          return(t);
        }
        t = fetch_1(t, c_4);
      }
      t = not_null(b_101);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
  m_101 = t;
  i_101 :
  if(match_cons(m_101, sym_TCons_2))
    {
      n_101 = ATgetArgument(m_101, 0);
      o_101 = ATgetArgument(m_101, 1);
      j_101 :
      if(match_cons(o_101, sym_TCons_2))
        {
          p_101 = ATgetArgument(o_101, 0);
          s_101 = ATgetArgument(o_101, 1);
          k_101 :
          if(match_cons(p_101, sym_Cons_2))
            {
              q_101 = ATgetArgument(p_101, 0);
              r_101 = ATgetArgument(p_101, 1);
              l_101 :
              if(match_cons(s_101, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(q_101), not_null(n_101)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_101), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL;
  n_102 = t;
  j_102 :
  if(match_cons(n_102, sym_Cons_2))
    {
      o_102 = ATgetArgument(n_102, 0);
      t_102 = ATgetArgument(n_102, 1);
      k_102 :
      if(match_cons(o_102, sym_TCons_2))
        {
          p_102 = ATgetArgument(o_102, 0);
          q_102 = ATgetArgument(o_102, 1);
          l_102 :
          if(match_cons(q_102, sym_TCons_2))
            {
              r_102 = ATgetArgument(q_102, 0);
              s_102 = ATgetArgument(q_102, 1);
              m_102 :
              if(match_cons(s_102, sym_TNil_0))
                {
                  ATerm x_102 = NULL,y_102 = NULL,g_103 = NULL,o_103 = NULL;
                  ATerm n_10;
                  n_10 = t;
                  {
                    ATerm z_102 = NULL;
                    ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
                    t = not_null(r_102);
                    z_102 = t;
                    t = SSL_explode_term(not_null(z_102));
                    b_103 = t;
                    a_102 :
                    if(match_cons(b_103, sym_TCons_2))
                      {
                        c_103 = ATgetArgument(b_103, 0);
                        d_103 = ATgetArgument(b_103, 1);
                        b_102 :
                        if(match_cons(d_103, sym_TCons_2))
                          {
                            e_103 = ATgetArgument(d_103, 0);
                            f_103 = ATgetArgument(d_103, 1);
                            c_102 :
                            if(match_cons(f_103, sym_TNil_0))
                              {
                                if(x_102 != NULL && x_102 != c_103)
                                  _fail(c_103);
                                else
                                  x_102 = c_103;
                                if(y_102 != NULL && y_102 != e_103)
                                  _fail(e_103);
                                else
                                  y_102 = e_103;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                  t = n_10;
                  {
                    ATerm h_103 = NULL;
                    ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
                    t = not_null(p_102);
                    h_103 = t;
                    t = SSL_explode_term(not_null(h_103));
                    j_103 = t;
                    f_102 :
                    if(match_cons(j_103, sym_TCons_2))
                      {
                        k_103 = ATgetArgument(j_103, 0);
                        l_103 = ATgetArgument(j_103, 1);
                        g_102 :
                        if(match_cons(l_103, sym_TCons_2))
                          {
                            m_103 = ATgetArgument(l_103, 0);
                            n_103 = ATgetArgument(l_103, 1);
                            h_102 :
                            if(match_cons(n_103, sym_TNil_0))
                              {
                                if(x_102 != NULL && x_102 != k_103)
                                  _fail(k_103);
                                else
                                  x_102 = k_103;
                                if(g_103 != NULL && g_103 != m_103)
                                  _fail(m_103);
                                else
                                  g_103 = m_103;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_103), (ATerm) ATmakeAppl(sym_TCons_2, not_null(y_102), (ATerm) ATmakeAppl(sym_TNil_0)));
                    t = zip_1(t, _id);
                    o_103 = t;
                    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(o_103), (ATerm) ATmakeAppl(sym_TCons_2, not_null(t_102), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
  b_104 = t;
  x_103 :
  if(match_cons(b_104, sym_Cons_2))
    {
      c_104 = ATgetArgument(b_104, 0);
      h_104 = ATgetArgument(b_104, 1);
      y_103 :
      if(match_cons(c_104, sym_TCons_2))
        {
          d_104 = ATgetArgument(c_104, 0);
          e_104 = ATgetArgument(c_104, 1);
          z_103 :
          if(match_cons(e_104, sym_TCons_2))
            {
              f_104 = ATgetArgument(e_104, 0);
              g_104 = ATgetArgument(e_104, 1);
              a_104 :
              if(match_cons(g_104, sym_TNil_0))
                {
                  ATerm j_104 = NULL;
                  if(d_104 != NULL && d_104 != f_104)
                    _fail(f_104);
                  else
                    d_104 = f_104;
                  if(j_104 != NULL && j_104 != h_104)
                    _fail(h_104);
                  else
                    j_104 = h_104;
                  t = not_null(j_104);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm p_64 (ATerm), ATerm q_64 (ATerm))
{
  ATerm l_104 (ATerm t)
  {
    ATerm o_10 = t;
    if(PushChoice()==0)
      {
        t = p_64(t);
        PopChoice();
      }
    else
      {
        t = o_10;
        t = q_64(t);
        t = l_104(t);
      }
    return(t);
  }
  t = l_104(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm u_64 (ATerm))
{
  t = s_64(t);
  t = while_not_2(t, t_64, u_64);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_10 = t;
  if(PushChoice()==0)
    {
      ATerm d_4 (ATerm t)
      {
        ATerm r_104 = NULL;
        r_104 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(r_104), (ATerm) ATmakeAppl(sym_TNil_0)));
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          t = TCons_2(t, Nil_0, TNil_0);
          return(t);
        }
        t = TCons_2(t, _id, g_4);
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        ATerm q_10 = t;
        if(PushChoice()==0)
          {
            ATerm h_4 (ATerm t)
            {
              ATerm i_4 (ATerm t)
              {
                ATerm r_10 = t;
                if(PushChoice()==0)
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = r_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = TCons_2(t, i_4, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, h_4);
            PopChoice();
          }
        else
          {
            t = q_10;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, d_4, e_4, f_4);
      PopChoice();
    }
  else
    {
      t = p_10;
      {
        ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL;
        t_104 = t;
        o_104 :
        if(match_cons(t_104, sym_TCons_2))
          {
            u_104 = ATgetArgument(t_104, 0);
            v_104 = ATgetArgument(t_104, 1);
            p_104 :
            if(match_cons(v_104, sym_TCons_2))
              {
                w_104 = ATgetArgument(v_104, 0);
                x_104 = ATgetArgument(v_104, 1);
                q_104 :
                if(match_cons(x_104, sym_TNil_0))
                  {
                    t = not_null(u_104);
                    {
                      ATerm c_105 (ATerm t)
                      {
                        ATerm s_10 = t;
                        if(PushChoice()==0)
                          {
                            t = Nil_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_10;
                            {
                              ATerm t_10 = t;
                              if(PushChoice()==0)
                                {
                                  ATerm j_4 (ATerm t)
                                  {
                                    t = not_null(w_104);
                                    return(t);
                                  }
                                  t = HdMember_1(t, j_4);
                                  t = c_105(t);
                                  PopChoice();
                                }
                              else
                                {
                                  t = t_10;
                                  t = Cons_2(t, _id, c_105);
                                }
                            }
                          }
                        return(t);
                      }
                      t = c_105(t);
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
ATerm free_vars_3 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_105 (ATerm t)
  {
    ATerm u_10 = t;
    if(PushChoice()==0)
      {
        t = j_45(t);
        PopChoice();
      }
    else
      {
        t = u_10;
        {
          ATerm v_10 = t;
          if(PushChoice()==0)
            {
              ATerm e_105 = NULL;
              ATerm w_10;
              w_10 = t;
              {
                ATerm f_105 = NULL;
                t = k_45(t);
                f_105 = t;
                if(e_105 != NULL && e_105 != f_105)
                  _fail(f_105);
                else
                  e_105 = f_105;
              }
              t = w_10;
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm m_4 (ATerm t)
                  {
                    t = not_null(e_105);
                    return(t);
                  }
                  t = split_2(t, g_105, m_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm l_4 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(sym_Nil_0);
                  return(t);
                }
                t = l_45(t, k_4, g_105, l_4);
                t = collect_kids_1(t, _id);
              }
              PopChoice();
            }
          else
            {
              t = v_10;
              t = collect_kids_1(t, g_105);
            }
        }
      }
    return(t);
  }
  t = g_105(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm x_10 = t;
    if(PushChoice()==0)
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = x_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, n_4, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  m_105 = t;
  k_105 :
  if(match_cons(m_105, sym_LRule_1))
    {
      n_105 = ATgetArgument(m_105, 0);
      l_105 :
      if(match_cons(n_105, sym_Rule_3))
        {
          o_105 = ATgetArgument(n_105, 0);
          p_105 = ATgetArgument(n_105, 1);
          q_105 = ATgetArgument(n_105, 2);
          {
            ATerm u_105 = NULL;
            t = not_null(o_105);
            t = tvars_0(t);
            u_105 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_105), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_105), not_null(p_105), not_null(q_105))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm y_105 (ATerm t)
  {
    t = _all(t, y_105);
    t = z_60(t);
    return(t);
  }
  t = y_105(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      ATerm y_10 = t;
      if(PushChoice()==0)
        {
          t = DefLRule_0(t);
          PopChoice();
        }
      else
        {
          t = y_10;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, q_4);
    return(t);
  }
  t = bottomup_1(t, o_4);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL;
  b_106 = t;
  a_106 :
  if(match_cons(b_106, sym_Var_1))
    {
      c_106 = ATgetArgument(b_106, 0);
      t = not_null(c_106);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,s_106 = NULL;
  l_106 = t;
  g_106 :
  if(match_cons(l_106, sym_TCons_2))
    {
      m_106 = ATgetArgument(l_106, 0);
      n_106 = ATgetArgument(l_106, 1);
      h_106 :
      if(match_cons(n_106, sym_TCons_2))
        {
          o_106 = ATgetArgument(n_106, 0);
          s_106 = ATgetArgument(n_106, 1);
          j_106 :
          if(match_cons(o_106, sym_Cons_2))
            {
              p_106 = ATgetArgument(o_106, 0);
              q_106 = ATgetArgument(o_106, 1);
              k_106 :
              if(match_cons(s_106, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_106), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_106), (ATerm) ATmakeAppl(sym_TNil_0)));
              else
                _fail(t);
            }
          else
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
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL;
  e_107 = t;
  x_106 :
  if(match_cons(e_107, sym_TCons_2))
    {
      f_107 = ATgetArgument(e_107, 0);
      g_107 = ATgetArgument(e_107, 1);
      y_106 :
      if(match_cons(g_107, sym_TCons_2))
        {
          h_107 = ATgetArgument(g_107, 0);
          p_107 = ATgetArgument(g_107, 1);
          z_106 :
          if(match_cons(h_107, sym_Cons_2))
            {
              i_107 = ATgetArgument(h_107, 0);
              o_107 = ATgetArgument(h_107, 1);
              a_107 :
              if(match_cons(i_107, sym_TCons_2))
                {
                  j_107 = ATgetArgument(i_107, 0);
                  l_107 = ATgetArgument(i_107, 1);
                  b_107 :
                  if(match_cons(l_107, sym_TCons_2))
                    {
                      m_107 = ATgetArgument(l_107, 0);
                      n_107 = ATgetArgument(l_107, 1);
                      c_107 :
                      if(match_cons(n_107, sym_TNil_0))
                        {
                          d_107 :
                          if(match_cons(p_107, sym_TNil_0))
                            {
                              ATerm r_107 = NULL;
                              if(f_107 != NULL && f_107 != j_107)
                                _fail(j_107);
                              else
                                f_107 = j_107;
                              if(r_107 != NULL && r_107 != m_107)
                                _fail(m_107);
                              else
                                r_107 = m_107;
                              t = not_null(r_107);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm z_10 = t;
  if(PushChoice()==0)
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_10;
      t = Look2_0(t);
      t = lookup_0(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm f_47 (ATerm), ATerm g_47 (ATerm))
{
  ATerm x_107 = NULL;
  ATerm z_107 = NULL,a_108 = NULL;
  x_107 = t;
  {
    ATerm b_108 = NULL;
    t = not_null(x_107);
    {
      ATerm c_108 = NULL;
      t = f_47(t);
      b_108 = t;
      if(z_107 != NULL && z_107 != b_108)
        _fail(b_108);
      else
        z_107 = b_108;
      t = g_47(t);
      c_108 = t;
      if(a_108 != NULL && a_108 != c_108)
        _fail(c_108);
      else
        a_108 = c_108;
    }
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_107), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_108), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = lookup_0(t);
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm g_108 (ATerm t)
  {
    ATerm b_11 = t;
    if(PushChoice()==0)
      {
        t = y_62(t);
        PopChoice();
      }
    else
      {
        t = b_11;
        t = _all(t, g_108);
      }
    return(t);
  }
  t = g_108(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  l_108 = t;
  i_108 :
  if(match_cons(l_108, sym_TCons_2))
    {
      m_108 = ATgetArgument(l_108, 0);
      n_108 = ATgetArgument(l_108, 1);
      j_108 :
      if(match_cons(n_108, sym_TCons_2))
        {
          o_108 = ATgetArgument(n_108, 0);
          p_108 = ATgetArgument(n_108, 1);
          k_108 :
          if(match_cons(p_108, sym_TNil_0))
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_108), not_null(o_108));
          else
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
  ATerm z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  z_108 = t;
  u_108 :
  if(match_cons(z_108, sym_TCons_2))
    {
      a_109 = ATgetArgument(z_108, 0);
      d_109 = ATgetArgument(z_108, 1);
      v_108 :
      if(match_cons(a_109, sym_Cons_2))
        {
          b_109 = ATgetArgument(a_109, 0);
          c_109 = ATgetArgument(a_109, 1);
          w_108 :
          if(match_cons(d_109, sym_TCons_2))
            {
              e_109 = ATgetArgument(d_109, 0);
              h_109 = ATgetArgument(d_109, 1);
              x_108 :
              if(match_cons(e_109, sym_Cons_2))
                {
                  f_109 = ATgetArgument(e_109, 0);
                  g_109 = ATgetArgument(e_109, 1);
                  y_108 :
                  if(match_cons(h_109, sym_TNil_0))
                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(b_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(f_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_TCons_2, not_null(c_109), (ATerm) ATmakeAppl(sym_TCons_2, not_null(g_109), (ATerm) ATmakeAppl(sym_TNil_0))), (ATerm) ATmakeAppl(sym_TNil_0)));
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
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
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL;
  t_109 = t;
  o_109 :
  if(match_cons(t_109, sym_TCons_2))
    {
      u_109 = ATgetArgument(t_109, 0);
      v_109 = ATgetArgument(t_109, 1);
      p_109 :
      if(match_cons(u_109, sym_Nil_0))
        {
          q_109 :
          if(match_cons(v_109, sym_TCons_2))
            {
              w_109 = ATgetArgument(v_109, 0);
              x_109 = ATgetArgument(v_109, 1);
              r_109 :
              if(match_cons(w_109, sym_Nil_0))
                {
                  s_109 :
                  if(match_cons(x_109, sym_TNil_0))
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
ATerm genzip_4 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm z_109 (ATerm t)
  {
    ATerm f_11 = t;
    if(PushChoice()==0)
      {
        t = r_56(t);
        PopChoice();
      }
    else
      {
        t = f_11;
        t = s_56(t);
        {
          ATerm r_4 (ATerm t)
          {
            t = TCons_2(t, z_109, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_56, r_4);
          t = t_56(t);
        }
      }
    return(t);
  }
  t = z_109(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_56 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_56);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL;
  h_110 = t;
  d_110 :
  if(match_cons(h_110, sym_TCons_2))
    {
      i_110 = ATgetArgument(h_110, 0);
      j_110 = ATgetArgument(h_110, 1);
      e_110 :
      if(match_cons(j_110, sym_TCons_2))
        {
          k_110 = ATgetArgument(j_110, 0);
          l_110 = ATgetArgument(j_110, 1);
          f_110 :
          if(match_cons(l_110, sym_TNil_0))
            {
              ATerm p_110 = NULL;
              if(p_110 != NULL && p_110 != k_110)
                _fail(k_110);
              else
                p_110 = k_110;
            }
          else
            {
              if(match_cons(l_110, sym_TCons_2))
                {
                  m_110 = ATgetArgument(l_110, 0);
                  n_110 = ATgetArgument(l_110, 1);
                  g_110 :
                  if(match_cons(n_110, sym_TNil_0))
                    {
                      ATerm v_110 = NULL;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_110), (ATerm) ATmakeAppl(sym_TNil_0)));
                      t = zip_1(t, _id);
                      v_110 = t;
                      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_110), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_110), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm substitute_2 (ATerm t, ATerm h_47 (ATerm), ATerm i_47 (ATerm))
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL;
  t = subs_args_0(t);
  e_111 = t;
  b_111 :
  if(match_cons(e_111, sym_TCons_2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      c_111 :
      if(match_cons(g_111, sym_TCons_2))
        {
          h_111 = ATgetArgument(g_111, 0);
          i_111 = ATgetArgument(g_111, 1);
          d_111 :
          if(match_cons(i_111, sym_TNil_0))
            {
              t = not_null(h_111);
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = not_null(f_111);
                    return(t);
                  }
                  t = SubsVar_2(t, h_47, u_4);
                  t = i_47(t);
                  return(t);
                }
                t = alltd_1(t, s_4);
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
ATerm substitute_1 (ATerm t, ATerm j_47 (ATerm))
{
  t = substitute_2(t, j_47, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  p_111 = t;
  n_111 :
  if(match_cons(p_111, sym_Overlay_3))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      s_111 = ATgetArgument(p_111, 2);
      o_111 :
      if(match_cons(r_111, sym_Nil_0))
        t = not_null(q_111);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL;
  z_111 = t;
  x_111 :
  if(match_cons(z_111, sym_OpDecl_2))
    {
      a_112 = ATgetArgument(z_111, 0);
      b_112 = ATgetArgument(z_111, 1);
      y_111 :
      if(match_cons(b_112, sym_ConstType_1))
        {
          c_112 = ATgetArgument(b_112, 0);
          t = not_null(a_112);
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
  ATerm h_112 = NULL,i_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym_Operations_1))
    {
      i_112 = ATgetArgument(h_112, 0);
      t = not_null(i_112);
      t = filter_1(t, OpName_0);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL;
  o_112 = t;
  n_112 :
  if(match_cons(o_112, sym_Signature_1))
    {
      p_112 = ATgetArgument(o_112, 0);
      t = not_null(p_112);
      t = filter_1(t, OpNames_0);
      t = concat_0(t);
    }
  else
    {
      if(match_cons(o_112, sym_Overlays_1))
        {
          p_112 = ATgetArgument(o_112, 0);
          t = not_null(p_112);
          t = filter_1(t, OLName_0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
  w_112 = t;
  v_112 :
  if(match_cons(w_112, sym_Cons_2))
    {
      x_112 = ATgetArgument(w_112, 0);
      y_112 = ATgetArgument(w_112, 1);
      t = not_null(y_112);
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm c_113 (ATerm t)
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
              t = Cons_2(t, n_52, c_113);
              PopChoice();
            }
          else
            {
              t = h_11;
              t = Tl_0(t);
              t = c_113(t);
            }
        }
      }
    return(t);
  }
  t = c_113(t);
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
  ATerm v_4 (ATerm t)
  {
    t = const_names_0(t);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm x_4 (ATerm t)
        {
          ATerm e_113 = NULL;
          e_113 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_113), (ATerm) ATmakeAppl(sym_Nil_0));
          return(t);
        }
        t = split_2(t, _id, x_4);
        return(t);
      }
      t = map_1(t, w_4);
    }
    return(t);
  }
  t = split_2(t, v_4, _id);
  t = tsubs_0(t);
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  m_113 = t;
  i_113 :
  if(match_cons(m_113, sym_TCons_2))
    {
      n_113 = ATgetArgument(m_113, 0);
      o_113 = ATgetArgument(m_113, 1);
      j_113 :
      if(match_cons(o_113, sym_TCons_2))
        {
          p_113 = ATgetArgument(o_113, 0);
          q_113 = ATgetArgument(o_113, 1);
          k_113 :
          if(match_cons(q_113, sym_TCons_2))
            {
              r_113 = ATgetArgument(q_113, 0);
              s_113 = ATgetArgument(q_113, 1);
              l_113 :
              if(match_cons(s_113, sym_TNil_0))
                t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Signature_1, (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Operations_1, not_null(n_113)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Overlays_1, not_null(p_113)), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_113)), (ATerm) ATmakeAppl(sym_Nil_0)))));
              else
                _fail(t);
            }
          else
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
  ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL;
  b_114 = t;
  y_113 :
  if(match_cons(b_114, sym_TCons_2))
    {
      c_114 = ATgetArgument(b_114, 0);
      d_114 = ATgetArgument(b_114, 1);
      z_113 :
      if(match_cons(d_114, sym_TCons_2))
        {
          e_114 = ATgetArgument(d_114, 0);
          f_114 = ATgetArgument(d_114, 1);
          a_114 :
          if(match_cons(f_114, sym_TNil_0))
            {
              t = not_null(c_114);
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(e_114);
                  return(t);
                }
                t = at_end_1(t, y_4);
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
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
  y_114 = t;
  n_114 :
  if(match_cons(y_114, sym_TCons_2))
    {
      z_114 = ATgetArgument(y_114, 0);
      g_115 = ATgetArgument(y_114, 1);
      o_114 :
      if(match_cons(z_114, sym_TCons_2))
        {
          a_115 = ATgetArgument(z_114, 0);
          b_115 = ATgetArgument(z_114, 1);
          p_114 :
          if(match_cons(b_115, sym_TCons_2))
            {
              c_115 = ATgetArgument(b_115, 0);
              d_115 = ATgetArgument(b_115, 1);
              q_114 :
              if(match_cons(d_115, sym_TCons_2))
                {
                  e_115 = ATgetArgument(d_115, 0);
                  f_115 = ATgetArgument(d_115, 1);
                  r_114 :
                  if(match_cons(f_115, sym_TNil_0))
                    {
                      s_114 :
                      if(match_cons(g_115, sym_TCons_2))
                        {
                          h_115 = ATgetArgument(g_115, 0);
                          o_115 = ATgetArgument(g_115, 1);
                          t_114 :
                          if(match_cons(h_115, sym_TCons_2))
                            {
                              i_115 = ATgetArgument(h_115, 0);
                              j_115 = ATgetArgument(h_115, 1);
                              u_114 :
                              if(match_cons(j_115, sym_TCons_2))
                                {
                                  k_115 = ATgetArgument(j_115, 0);
                                  l_115 = ATgetArgument(j_115, 1);
                                  v_114 :
                                  if(match_cons(l_115, sym_TCons_2))
                                    {
                                      m_115 = ATgetArgument(l_115, 0);
                                      n_115 = ATgetArgument(l_115, 1);
                                      w_114 :
                                      if(match_cons(n_115, sym_TNil_0))
                                        {
                                          x_114 :
                                          if(match_cons(o_115, sym_TNil_0))
                                            {
                                              ATerm v_115 = NULL;
                                              t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                              {
                                                ATerm x_115 = NULL;
                                                t = conc_0(t);
                                                v_115 = t;
                                                t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                {
                                                  ATerm z_115 = NULL;
                                                  t = conc_0(t);
                                                  x_115 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(m_115), (ATerm) ATmakeAppl(sym_TNil_0)));
                                                  t = conc_0(t);
                                                  z_115 = t;
                                                  t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_115), (ATerm) ATmakeAppl(sym_TCons_2, not_null(z_115), (ATerm) ATmakeAppl(sym_TNil_0))));
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
ATerm FoldR_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL;
  h_116 = t;
  g_116 :
  if(match_cons(h_116, sym_Cons_2))
    {
      i_116 = ATgetArgument(h_116, 0);
      j_116 = ATgetArgument(h_116, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(i_116), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_116), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm))
{
  ATerm n_116 (ATerm t)
  {
    ATerm i_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        t = g_53(t);
        PopChoice();
      }
    else
      {
        t = i_11;
        t = FoldR_0(t);
        {
          ATerm z_4 (ATerm t)
          {
            t = TCons_2(t, n_116, TNil_0);
            return(t);
          }
          t = TCons_2(t, _id, z_4);
          t = h_53(t);
        }
      }
    return(t);
  }
  t = n_116(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm o_116 (ATerm t)
  {
    ATerm j_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_116);
        PopChoice();
      }
    else
      {
        t = j_11;
        t = Nil_0(t);
        t = w_58(t);
      }
    return(t);
  }
  t = o_116(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_11 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = k_11;
      {
        ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
        r_116 = t;
        q_116 :
        if(match_cons(r_116, sym_Cons_2))
          {
            s_116 = ATgetArgument(r_116, 0);
            t_116 = ATgetArgument(r_116, 1);
            t = not_null(s_116);
            {
              ATerm a_5 (ATerm t)
              {
                t = not_null(t_116);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, a_5);
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
  ATerm b_117 = NULL,d_117 = NULL;
  b_117 = t;
  a_117 :
  if(match_cons(b_117, sym_Operations_1))
    {
      d_117 = ATgetArgument(b_117, 0);
      t = not_null(d_117);
    }
  else
    {
      if(match_cons(b_117, sym_Sorts_1))
        {
          d_117 = ATgetArgument(b_117, 0);
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
  ATerm p_117 = NULL,q_117 = NULL;
  p_117 = t;
  n_117 :
  if(match_cons(p_117, sym_Signature_1))
    {
      q_117 = ATgetArgument(p_117, 0);
      {
        ATerm s_117 = NULL;
        t = not_null(q_117);
        t = normalize_sigs_0(t);
        s_117 = t;
        t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(s_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      }
    }
  else
    {
      if(match_cons(p_117, sym_Strategies_1))
        {
          q_117 = ATgetArgument(p_117, 0);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_117), (ATerm) ATmakeAppl(sym_TNil_0))));
        }
      else
        {
          if(match_cons(p_117, sym_Rules_1))
            {
              q_117 = ATgetArgument(p_117, 0);
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_117), (ATerm) ATmakeAppl(sym_TNil_0))));
            }
          else
            {
              if(match_cons(p_117, sym_Overlays_1))
                {
                  q_117 = ATgetArgument(p_117, 0);
                  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, not_null(q_117), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm c_118 (ATerm t)
  {
    ATerm l_11 = t;
    if(PushChoice()==0)
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = l_11;
        t = Cons_2(t, h_58, c_118);
      }
    return(t);
  }
  t = c_118(t);
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL;
  f_118 = t;
  e_118 :
  if(match_cons(f_118, sym_Specification_1))
    {
      g_118 = ATgetArgument(f_118, 0);
      t = not_null(g_118);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm j_118 (ATerm t)
  {
    t = x_60(t);
    t = _all(t, j_118);
    return(t);
  }
  t = j_118(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm m_118 = NULL,n_118 = NULL;
      m_118 = t;
      l_118 :
      if(match_cons(m_118, sym_DefaultVarDec_1))
        {
          n_118 = ATgetArgument(m_118, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_118), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, c_5);
    return(t);
  }
  t = topdown_1(t, b_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  t = BSpecs_0(t);
  t = map_1(t, NormBSP_0);
  {
    ATerm d_5 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0))));
      return(t);
    }
    t = foldr_2(t, d_5, Combine_0);
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
    ATerm m_11;
    m_11 = t;
    t = spec_use_def_0(t);
    t = m_11;
    t = ExpandOverlays_0(t);
    t = CheckConstructors_0(t);
    t = RulesToSdefs_0(t);
    t = strename_0(t);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm f_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            t = Strategies_1(t, desugar_spec_0);
            return(t);
          }
          t = Cons_2(t, g_5, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, f_5);
        return(t);
      }
      t = Specification_1(t, e_5);
    }
  }
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm r_118 = NULL;
  r_118 = t;
  q_118 :
  if(!(match_cons(r_118, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
  w_118 = t;
  v_118 :
  if(match_cons(w_118, sym_TCons_2))
    {
      x_118 = ATgetArgument(w_118, 0);
      y_118 = ATgetArgument(w_118, 1);
      {
        ATerm b_119 = NULL;
        t = not_null(x_118);
        {
          ATerm d_119 = NULL;
          t = n_43(t);
          b_119 = t;
          t = not_null(y_118);
          t = o_43(t);
          d_119 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_119), not_null(d_119));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_119 = NULL;
  ATerm n_11;
  n_11 = t;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm l_119 = NULL,m_119 = NULL;
      l_119 = t;
      j_119 :
      if(match_cons(l_119, sym_Program_1))
        {
          m_119 = ATgetArgument(l_119, 0);
          if(k_119 != NULL && k_119 != m_119)
            _fail(m_119);
          else
            k_119 = m_119;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, i_5);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_119), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = n_11;
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
  ATerm p_119 = NULL;
  p_119 = t;
  t = SSL_exit(not_null(p_119));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL;
  w_119 = t;
  t_119 :
  if(match_cons(w_119, sym_TCons_2))
    {
      x_119 = ATgetArgument(w_119, 0);
      y_119 = ATgetArgument(w_119, 1);
      u_119 :
      if(match_cons(y_119, sym_TCons_2))
        {
          z_119 = ATgetArgument(y_119, 0);
          a_120 = ATgetArgument(y_119, 1);
          v_119 :
          if(match_cons(a_120, sym_TNil_0))
            {
              ATerm o_11;
              o_11 = t;
              t = SSL_printnl(not_null(x_119), not_null(z_119));
              t = o_11;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm p_11 = t;
  if(PushChoice()==0)
    {
      t = v_64(t);
      PopChoice();
    }
  else
    t = p_11;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL;
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm q_11 = t;
      if(PushChoice()==0)
        {
          ATerm m_5 (ATerm t)
          {
            ATerm l_120 = NULL;
            l_120 = t;
            e_120 :
            if(!(match_cons(l_120, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_5);
          PopChoice();
          _fail(t);
        }
      else
        t = q_11;
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, k_5, l_5);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm p_5 (ATerm t)
        {
          ATerm m_120 = NULL,n_120 = NULL;
          m_120 = t;
          g_120 :
          if(match_cons(m_120, sym_Runtime_1))
            {
              n_120 = ATgetArgument(m_120, 0);
              if(k_120 != NULL && k_120 != n_120)
                _fail(n_120);
              else
                k_120 = n_120;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_5);
        return(t);
      }
      ATerm o_5 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, n_5, o_5);
      {
        ATerm q_5 (ATerm t)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm o_120 = NULL,p_120 = NULL;
            o_120 = t;
            i_120 :
            if(match_cons(o_120, sym_Program_1))
              {
                p_120 = ATgetArgument(o_120, 0);
                if(j_120 != NULL && j_120 != p_120)
                  _fail(p_120);
                else
                  j_120 = p_120;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_5);
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, q_5, r_5);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_120), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, j_5);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL;
  w_120 = t;
  t_120 :
  if(match_cons(w_120, sym_TCons_2))
    {
      x_120 = ATgetArgument(w_120, 0);
      y_120 = ATgetArgument(w_120, 1);
      u_120 :
      if(match_cons(y_120, sym_TCons_2))
        {
          z_120 = ATgetArgument(y_120, 0);
          a_121 = ATgetArgument(y_120, 1);
          v_120 :
          if(match_cons(a_121, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(x_120), not_null(z_120));
          else
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
  ATerm i_121 = NULL,j_121 = NULL,k_121 = NULL,l_121 = NULL,m_121 = NULL;
  i_121 = t;
  f_121 :
  if(match_cons(i_121, sym_TCons_2))
    {
      j_121 = ATgetArgument(i_121, 0);
      k_121 = ATgetArgument(i_121, 1);
      g_121 :
      if(match_cons(k_121, sym_TCons_2))
        {
          l_121 = ATgetArgument(k_121, 0);
          m_121 = ATgetArgument(k_121, 1);
          h_121 :
          if(match_cons(m_121, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(j_121), not_null(l_121));
          else
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
  ATerm u_121 = NULL;
  ATerm r_11;
  r_11 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm s_11 = t;
      if(PushChoice()==0)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm v_121 = NULL,w_121 = NULL;
            v_121 = t;
            r_121 :
            if(match_cons(v_121, sym_Output_1))
              {
                w_121 = ATgetArgument(v_121, 0);
                if(u_121 != NULL && u_121 != w_121)
                  _fail(w_121);
                else
                  u_121 = w_121;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_5);
          PopChoice();
        }
      else
        {
          t = s_11;
          {
            ATerm x_121 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            x_121 = t;
            if(u_121 != NULL && u_121 != x_121)
              _fail(x_121);
            else
              u_121 = x_121;
          }
        }
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, t_5, u_5);
  }
  t = r_11;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_5 (ATerm t)
      {
        ATerm y_5 (ATerm t)
        {
          t = not_null(u_121);
          return(t);
        }
        t = split_2(t, y_5, _id);
        return(t);
      }
      t = TCons_2(t, x_5, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, w_5);
    {
      ATerm t_11 = t;
      if(PushChoice()==0)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm b_6 (ATerm t)
            {
              ATerm y_121 = NULL;
              y_121 = t;
              t_121 :
              if(!(match_cons(y_121, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, b_6);
            return(t);
          }
          ATerm a_6 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, z_5, a_6);
          PopChoice();
        }
      else
        {
          t = t_11;
          {
            ATerm c_6 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, c_6);
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
ATerm apply_strategy_1 (ATerm t, ATerm s_49 (ATerm))
{
  ATerm g_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  ATerm u_11;
  u_11 = t;
  t = dtime_0(t);
  t = u_11;
  t = s_49(t);
  {
    ATerm v_11;
    v_11 = t;
    {
      ATerm h_122 = NULL;
      t = dtime_0(t);
      h_122 = t;
      if(g_122 != NULL && g_122 != h_122)
        _fail(h_122);
      else
        g_122 = h_122;
    }
    t = v_11;
    i_122 = t;
    d_122 :
    if(match_cons(i_122, sym_TCons_2))
      {
        j_122 = ATgetArgument(i_122, 0);
        k_122 = ATgetArgument(i_122, 1);
        e_122 :
        if(match_cons(k_122, sym_TCons_2))
          {
            l_122 = ATgetArgument(k_122, 0);
            m_122 = ATgetArgument(k_122, 1);
            f_122 :
            if(match_cons(m_122, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(g_122)), not_null(j_122)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_122), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm s_122 = NULL;
  s_122 = t;
  t = SSL_ReadFromFile(not_null(s_122));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_51 (ATerm), ATerm w_51 (ATerm))
{
  ATerm y_122 = NULL;
  ATerm a_123 = NULL;
  y_122 = t;
  {
    ATerm c_123 = NULL;
    t = v_51(t);
    a_123 = t;
    t = not_null(y_122);
    t = w_51(t);
    c_123 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_123), (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_123), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_123 = NULL;
  ATerm w_11;
  w_11 = t;
  {
    ATerm x_11 = t;
    if(PushChoice()==0)
      {
        ATerm d_6 (ATerm t)
        {
          ATerm l_123 = NULL,m_123 = NULL;
          l_123 = t;
          i_123 :
          if(match_cons(l_123, sym_Input_1))
            {
              m_123 = ATgetArgument(l_123, 0);
              if(k_123 != NULL && k_123 != m_123)
                _fail(m_123);
              else
                k_123 = m_123;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_6);
        PopChoice();
      }
    else
      {
        t = x_11;
        {
          ATerm n_123 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          n_123 = t;
          if(k_123 != NULL && k_123 != n_123)
            _fail(n_123);
          else
            k_123 = n_123;
        }
      }
  }
  t = w_11;
  {
    ATerm e_6 (ATerm t)
    {
      t = not_null(k_123);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_123 = NULL;
  r_123 = t;
  q_123 :
  if(!(match_cons(r_123, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_38 (ATerm))
{
  ATerm v_123 = NULL,w_123 = NULL;
  v_123 = t;
  u_123 :
  if(match_cons(v_123, sym_Undefined_1))
    {
      w_123 = ATgetArgument(v_123, 0);
      {
        ATerm y_123 = NULL;
        t = not_null(w_123);
        t = w_38(t);
        y_123 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_123));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_124 = NULL;
  d_124 = t;
  c_124 :
  if(!(match_cons(d_124, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm e_124 (ATerm t)
  {
    ATerm y_11 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, q_58, _id);
        PopChoice();
      }
    else
      {
        t = y_11;
        t = Cons_2(t, _id, e_124);
      }
    return(t);
  }
  t = e_124(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_48 (ATerm))
{
  t = fetch_1(t, w_48);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm z_11 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = z_11;
        {
          ATerm a_12 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = a_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_6);
  t = r_49(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL;
    n_124 = t;
    g_124 :
    if(match_cons(n_124, sym_TCons_2))
      {
        o_124 = ATgetArgument(n_124, 0);
        p_124 = ATgetArgument(n_124, 1);
        h_124 :
        if(match_cons(p_124, sym_TCons_2))
          {
            q_124 = ATgetArgument(p_124, 0);
            r_124 = ATgetArgument(p_124, 1);
            i_124 :
            if(match_cons(r_124, sym_TCons_2))
              {
                s_124 = ATgetArgument(r_124, 0);
                t_124 = ATgetArgument(r_124, 1);
                j_124 :
                if(match_cons(t_124, sym_TNil_0))
                  {
                    if(k_124 != NULL && k_124 != o_124)
                      _fail(o_124);
                    else
                      k_124 = o_124;
                    if(l_124 != NULL && l_124 != q_124)
                      _fail(q_124);
                    else
                      l_124 = q_124;
                    if(m_124 != NULL && m_124 != s_124)
                      _fail(s_124);
                    else
                      m_124 = s_124;
                    t = SSL_table_put(not_null(k_124), not_null(l_124), not_null(m_124));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  t = b_12;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_124 = NULL;
  w_124 = t;
  t = SSL_table_create(not_null(w_124));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_125 = NULL;
  a_125 = t;
  {
    ATerm c_12;
    c_12 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_125), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = c_12;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
  g_125 = t;
  f_125 :
  if(match_cons(g_125, sym_Cons_2))
    {
      h_125 = ATgetArgument(g_125, 0);
      i_125 = ATgetArgument(g_125, 1);
      {
        ATerm l_125 = NULL;
        t = not_null(h_125);
        t = p_48(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = q_48(t);
        l_125 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_125), not_null(i_125));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm r_48 (ATerm), ATerm s_48 (ATerm))
{
  ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL;
  t_125 = t;
  r_125 :
  if(match_cons(t_125, sym_Cons_2))
    {
      u_125 = ATgetArgument(t_125, 0);
      v_125 = ATgetArgument(t_125, 1);
      s_125 :
      if(match_cons(v_125, sym_Cons_2))
        {
          w_125 = ATgetArgument(v_125, 0);
          x_125 = ATgetArgument(v_125, 1);
          {
            ATerm b_126 = NULL;
            t = not_null(u_125);
            t = r_48(t);
            t = not_null(w_125);
            t = s_48(t);
            b_126 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(b_126), not_null(x_125));
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
  ATerm f_12 = t;
  if(PushChoice()==0)
    {
      ATerm g_6 (ATerm t)
      {
        ATerm z_126 = NULL;
        z_126 = t;
        f_126 :
        if(!(match_string(z_126, "-S")))
          _fail(t);
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, g_6, h_6);
      PopChoice();
    }
  else
    {
      t = f_12;
      {
        ATerm g_12 = t;
        if(PushChoice()==0)
          {
            ATerm i_6 (ATerm t)
            {
              ATerm a_127 = NULL;
              a_127 = t;
              g_126 :
              if(!(match_string(a_127, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, i_6, j_6);
            PopChoice();
          }
        else
          {
            t = g_12;
            {
              ATerm h_12 = t;
              if(PushChoice()==0)
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm b_127 = NULL;
                    b_127 = t;
                    h_126 :
                    if(!(match_string(b_127, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm l_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, k_6, l_6);
                  PopChoice();
                }
              else
                {
                  t = h_12;
                  {
                    ATerm i_12 = t;
                    if(PushChoice()==0)
                      {
                        ATerm m_6 (ATerm t)
                        {
                          ATerm c_127 = NULL;
                          c_127 = t;
                          i_126 :
                          if(!(match_string(c_127, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm n_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, m_6, n_6);
                        PopChoice();
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm j_12 = t;
                          if(PushChoice()==0)
                            {
                              ATerm o_6 (ATerm t)
                              {
                                ATerm d_127 = NULL;
                                d_127 = t;
                                j_126 :
                                if(!(match_string(d_127, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm p_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, o_6, p_6);
                              PopChoice();
                            }
                          else
                            {
                              t = j_12;
                              {
                                ATerm k_12 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm q_6 (ATerm t)
                                    {
                                      ATerm e_127 = NULL;
                                      e_127 = t;
                                      k_126 :
                                      if(!(match_string(e_127, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm f_127 = NULL;
                                      f_127 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(f_127));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, q_6, r_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_12;
                                    {
                                      ATerm l_12 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm s_6 (ATerm t)
                                          {
                                            ATerm h_127 = NULL;
                                            h_127 = t;
                                            m_126 :
                                            if(!(match_string(h_127, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_6 (ATerm t)
                                          {
                                            ATerm i_127 = NULL;
                                            i_127 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_127));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, s_6, t_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_12;
                                          {
                                            ATerm m_12 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm u_6 (ATerm t)
                                                {
                                                  ATerm k_127 = NULL;
                                                  k_127 = t;
                                                  o_126 :
                                                  if(!(match_string(k_127, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm v_6 (ATerm t)
                                                {
                                                  ATerm l_127 = NULL;
                                                  l_127 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_127));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, u_6, v_6);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_12;
                                                {
                                                  ATerm n_12 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm w_6 (ATerm t)
                                                      {
                                                        ATerm n_127 = NULL;
                                                        n_127 = t;
                                                        q_126 :
                                                        if(!(match_string(n_127, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm x_6 (ATerm t)
                                                      {
                                                        ATerm o_127 = NULL;
                                                        o_127 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_127));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, w_6, x_6);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_12;
                                                      {
                                                        ATerm o_12 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm y_6 (ATerm t)
                                                            {
                                                              ATerm q_127 = NULL;
                                                              q_127 = t;
                                                              s_126 :
                                                              if(!(match_string(q_127, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm z_6 (ATerm t)
                                                            {
                                                              ATerm r_127 = NULL;
                                                              r_127 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_127));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, y_6, z_6);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = o_12;
                                                            {
                                                              ATerm p_12 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm a_7 (ATerm t)
                                                                  {
                                                                    ATerm t_127 = NULL;
                                                                    t_127 = t;
                                                                    u_126 :
                                                                    if(!(match_string(t_127, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm b_7 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, a_7, b_7);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_12;
                                                                  {
                                                                    ATerm q_12 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm c_7 (ATerm t)
                                                                        {
                                                                          ATerm u_127 = NULL;
                                                                          u_127 = t;
                                                                          v_126 :
                                                                          if(!(match_string(u_127, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm d_7 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, c_7, d_7);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_12;
                                                                        {
                                                                          ATerm r_12 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm e_7 (ATerm t)
                                                                              {
                                                                                ATerm v_127 = NULL;
                                                                                v_127 = t;
                                                                                w_126 :
                                                                                if(!(match_string(v_127, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm f_7 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, e_7, f_7);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_12;
                                                                              {
                                                                                ATerm s_12 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm g_7 (ATerm t)
                                                                                    {
                                                                                      ATerm w_127 = NULL;
                                                                                      w_127 = t;
                                                                                      x_126 :
                                                                                      if(!(match_string(w_127, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm k_7 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, g_7, k_7);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_12;
                                                                                    {
                                                                                      ATerm v_7 (ATerm t)
                                                                                      {
                                                                                        ATerm x_127 = NULL;
                                                                                        x_127 = t;
                                                                                        y_126 :
                                                                                        if(!(match_string(x_127, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm w_7 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, v_7, w_7);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_128 = NULL,h_128 = NULL,i_128 = NULL;
  g_128 = t;
  f_128 :
  if(match_cons(g_128, sym_Cons_2))
    {
      h_128 = ATgetArgument(g_128, 0);
      i_128 = ATgetArgument(g_128, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_128)), not_null(i_128));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL;
  q_128 = t;
  p_128 :
  if(match_cons(q_128, sym_Cons_2))
    {
      r_128 = ATgetArgument(q_128, 0);
      s_128 = ATgetArgument(q_128, 1);
      {
        ATerm v_128 = NULL;
        t = not_null(r_128);
        {
          ATerm x_128 = NULL;
          t = r_43(t);
          v_128 = t;
          t = not_null(s_128);
          t = s_43(t);
          x_128 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_128), not_null(x_128));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_129 = NULL;
  d_129 = t;
  c_129 :
  if(!(match_cons(d_129, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm f_129 = NULL;
    f_129 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_129));
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    ATerm t_12 = t;
    if(PushChoice()==0)
      {
        ATerm u_12 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = u_12;
            t = n_48(t);
            t = Cons_2(t, _id, y_7);
          }
        PopChoice();
      }
    else
      {
        t = t_12;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, x_7, y_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm v_12 = t;
    if(PushChoice()==0)
      {
        t = h_49(t);
        PopChoice();
      }
    else
      {
        t = v_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, z_7);
  t = store_options_0(t);
  {
    ATerm w_12 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, i_49);
        PopChoice();
      }
    else
      {
        t = w_12;
        {
          ATerm x_12 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, g_49);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = x_12;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_49 (ATerm), ATerm c_49 (ATerm))
{
  t = iowrap_3(t, b_49, c_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_48 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm b_8 (ATerm t)
    {
      t = TCons_2(t, y_48, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, b_8);
    return(t);
  }
  t = iowrap_2(t, a_8, _fail);
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
